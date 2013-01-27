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
  private var _frame:Int;
  private var _announcedMyself:Bool=false;
  private var _startButton:FlxButton;
  private var _playersLabel:FlxText;
  private var _messageLabel:FlxText;
  private var _listen_key:Int = 0;

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

    DrSquad.log("Welcome to Waiting Room #" + PubNub.room.get_channel());

    _listen_key = PubNub.room.register({type: "waitroom"});

      _frame = 0;
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
      PubNub.room.deregister(_listen_key);
      PubNub.room.send({type: "waitroom", action: "leave", ownerId: User.me.id});
      super.destroy();
    }

    override public function update():Void
    {
      PubNub.room.pump();
      PubNub.room.consume(_listen_key, function(message) {
        switch (message.action)
        {
          case "enter":
          DrSquad.log("User #" + message.ownerId + " entered the room." );
          if (User.me.hello(message.ownerId)) {
            User.me.team.push(message.ownerId);
            if (message.ownerId != User.me.id) {
                PubNub.room.send({type: "waitroom", action: "enter", ownerId: User.me.id});
            }
          }
          case "leave":
            DrSquad.log("User #" + message.ownerId + " left the room." );
            User.me.team.remove(message.ownerId);
          case "start":
            DrSquad.log("User #" + message.ownerId + " started the game." );
            _onStart();
        }
      });
      _frame++;
      if (_frame > 100) {

      if (! _announcedMyself )
      {
        _announcedMyself = true;
        PubNub.room.send({type: "waitroom", action: "enter", ownerId: User.me.id});
      }

      DrSquad.log("USERS: " + User.me.team);
      _frame = 0;
      User.me.is_boss = (User.me.id == _getBossId());
      if (User.me.is_boss)
      {
        DrSquad.log( "I'm the boss! \\o/" );
        add(_startButton);
        _messageLabel.text = "When everyone is ready hit the button!";
      }
      else
      {
        DrSquad.log( "I'm not the boss :(" );
        remove(_startButton);
        _messageLabel.text = "Button? Button? Who's got the button?";
      }
      if (User.me.team.length > 0)
      {
        _playersLabel.text = "Players Ready to rock: " + User.me.team.length;
      }

    }
      super.update();
    }

  private function _getBossId():Int
  {
    var bossId = 0;
    // max()
    for ( userId in User.me.team ) {
      if (userId > bossId)
        bossId = userId;
    }
    return bossId;
  }
}
