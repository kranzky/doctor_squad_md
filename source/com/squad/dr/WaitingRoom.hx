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
  private var _observer_key:Int;
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

      _observer_key = PubNub.room.register({type: "enter"}, function(message) {
        trace("User #" + message.ownerId + " entered the room." );
      });
      PubNub.room.send({type: "enter", ownerId: User.me.id});
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
      PubNub.room.deregister(_observer_key);
      super.destroy();
    }

    override public function update():Void
    {
      PubNub.room.pump();
      super.update();
    }
}
