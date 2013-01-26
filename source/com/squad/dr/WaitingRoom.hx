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
import com.squad.dr.Keypad;

class WaitingRoom extends FlxState
{
  private var _keys:Array<Int>;
  private var _users:Array<Int>;
  private var _frame:Int;
  private var _announcedMyself:Bool=false;
  private var _startButton:FlxButton;
  private var _playersLabel:FlxText;
  private var _messageLabel:FlxText;

  override public function create():Void
  {
    #if !neko
    FlxG.bgColor = 0xff131c1b;
    #else
    FlxG.bgColor = {rgb: 0x131c1b, a: 0xff};
    #end
    FlxG.mouse.show();

    //create a button with the label Start and set an on click function
    _startButton = new FlxButton(240, 320, "START", _onStartClick);
    _playersLabel = new FlxText(50, 100, 360, "");
    _playersLabel.size = 16;
    _messageLabel = new FlxText(50, 150, 360, "Rolling for initiative..." );
    _messageLabel.size = 16;

    add(_playersLabel);
    add(_messageLabel);

    trace("Welcome to Waiting Room #" + PubNub.room.get_channel());

    _keys = new Array<Int>();
    _listen();

    _users = new Array<Int>();

    _frame = 0;
  }

  private function _listen():Void
  {
    var key = PubNub.room.register({type: "waitroom"}, function(message) {
      switch (message.action)
      {
        case "enter":
          trace("User #" + message.ownerId + " entered the room." );
          if (_new_user(message.ownerId)) {
            _users.push(message.ownerId);
            if (message.ownerId != User.me.id) {
              PubNub.room.send({type: "waitroom", action: "enter", ownerId: User.me.id});
            }
          }
        case "leave":
          trace("User #" + message.ownerId + " left the room." );
          _users.remove(message.ownerId);
        case "start":
          trace("User #" + message.ownerId + " started the game." );
          _onStart();
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

  //The on click handler for the start button
  private function _onStartClick( ):Void
  {
    PubNub.room.send({type: "waitroom", action: "start", ownerId: User.me.id});
  }

  private function _onStart( ):Void
  {
    //Tell Flixel to change the active game state to the actual game
    FlxG.switchState(new Theatre());
  }

  override public function destroy():Void
  {
    for (key in _keys) {
      PubNub.room.deregister(key);
    }
    PubNub.room.send({type: "waitroom", action: "leave", ownerId: User.me.id});
    super.destroy();
  }

  override public function update():Void
  {
    PubNub.room.pump();
    _frame++;
    if (_frame > 100) {

      if (! _announcedMyself )
      {
        _announcedMyself = true;
        PubNub.room.send({type: "waitroom", action: "enter", ownerId: User.me.id});
      }


      trace("USERS: " + _users);
      _frame = 0;
      User.me.is_boss = (User.me.id == _getBossId());
      if (User.me.is_boss)
      {
        trace( "I'm the boss! \\o/" );
        add(_startButton);
        _messageLabel.text = "When everyone is ready hit the button!";
      }
      else
      {
        trace( "I'm not the boss :(" );
        remove(_startButton);
        _messageLabel.text = "Button? Button? Who's got the button?";
      }
      if (_users.length > 0)
      {
        _playersLabel.text = "Players Ready to rock: " + _users.length;
      }

    }
    super.update();
  }

  private function _getBossId():Int 
  {
    var bossId = 0; 
    // max()
    for ( userId in _users ) {
      if (userId > bossId)
        bossId = userId;
    }
    return bossId;
  }
}
