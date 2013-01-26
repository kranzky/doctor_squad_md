package com.squad.dr;

import nme.Assets;
import nme.geom.Rectangle;
import nme.net.SharedObject;
import org.flixel.FlxButton;
import org.flixel.FlxG;
import org.flixel.FlxPath;
import org.flixel.FlxSave;
import org.flixel.FlxSprite;
import org.flixel.FlxState;
import org.flixel.FlxText;
import org.flixel.FlxU;
import org.flixel.FlxTextField;
import nme.text.TextFieldType;
import com.squad.dr.Keypad;

class WaitingRoom extends FlxState
{
  private var _keys:Array<Int>;
  private var _users:Array<Int>;
  private var _frame:Int;
  override public function create():Void
    {
      #if !neko
      FlxG.bgColor = 0xff131c1b;
      #else
      FlxG.bgColor = {rgb: 0x131c1b, a: 0xff};
      #end
      FlxG.mouse.show();

      //create a button with the label Start and set an on click function
      var startButton = new FlxButton(0, 0, "Start", onStartClick);
      add(startButton);

      trace("Welcome to Waiting Room #" + PubNub.room.get_channel());

      _keys = new Array<Int>();
      _listen_enter();
      _listen_leave();
      PubNub.room.send({type: "enter", ownerId: User.me.id});

      _users = new Array<Int>();

      _frame = 0;
    }

    private function _listen_enter():Void
    {
      var key = PubNub.room.register({type: "enter"}, function(message) {
        trace("User #" + message.ownerId + " entered the room." );
        if (_new_user(message.ownerId)) {
          _users.push(message.ownerId);
          if (message.ownerId != User.me.id) {
            PubNub.room.send({type: "enter", ownerId: User.me.id});
          }
        }
      });
      _keys.push(key);
    }

    private function _new_user(user_id:Int):Bool
    {
      for (known_id in _users) {
        if (user_id == known_id) {
          return false;
        }
      }
      return true;
    }

    private function _listen_leave():Void
    {
      var key = PubNub.room.register({type: "leave"}, function(message) {
        trace("User #" + message.ownerId + " left the room." );
        _users.remove(message.ownerId);
      });
      _keys.push(key);
      trace( User.getName(User.me.id) );
    }

    //The on click handler for the start button
    private function onStartClick( ):Void
    {
      //Tell Flixel to change the active game state to the actual game
      FlxG.switchState(new Theatre());
    }

    override public function destroy():Void
    {
      for (key in _keys) {
        PubNub.room.deregister(key);
      }
      PubNub.room.send({type: "leave", ownerId: User.me.id});
      super.destroy();
    }

    override public function update():Void
    {
      PubNub.room.pump();
      _frame++;
      if (_frame > 100) {
        trace("USERS: " + _users);
        _frame = 0;
      }
      super.update();
    }
}
