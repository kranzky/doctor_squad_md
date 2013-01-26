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

import com.squad.dr.widgets.Widget;
import com.squad.dr.widgets.Generator;

class Lobby extends FlxState
{
  private var _count:Int;
  private var _observer_key:Int;
	override public function create():Void
    {
      #if !neko
      FlxG.bgColor = 0xff131c1b;
      #else
      FlxG.bgColor = {rgb: 0x131c1b, a: 0xff};
      #end       
      FlxG.mouse.show();
       
      _count = 0;
      _observer_key = PubNub.room.register({type: "world"}, function(message) {
        trace(message);
      });

      //create a button with the label Start and set an on click function
      var startButton = new FlxButton(0, 0, "Start", onStartClick);
      //add the button to the state draw list
      var keypad = new Keypad(200, 200, function(room) {
        trace("They selected " + room);
        });

      add(keypad);
      
      trace ("added keypad");
      //add(startButton);
      trace("Making generator");
      
      var g = new Generator( 1, true, true );  
      trace("Adding generator");
      add(g);  

      
    }
 
    //The on click handler for the start button
    private function onStartClick( ):Void
    {
      //Tell Flixel to change the active game state to the actual game
      //FlxG.switchState( new Theatre( ) );
      var pub_msg_1 = {
        type: "hello",
        data: Sys.systemName(),
        action: "" + _count
    }
      var pub_msg_2 = {
        type: "world",
        action: "" + _count
      }
      PubNub.room.send(pub_msg_1);
      PubNub.room.send(pub_msg_2);
      _count += 1;
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
