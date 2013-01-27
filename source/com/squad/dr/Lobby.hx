package com.squad.dr;

import haxe.Json;

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
import com.squad.dr.tools.Toolbar;
import com.squad.dr.tools.Scalpel;
import com.squad.dr.tools.Syringe;

class Lobby extends FlxState
{
	override public function create():Void
    {
      #if !neko
    FlxG.bgColor = 0xff631c1b;
      #else
      FlxG.bgColor = {rgb: 0x131c1b, a: 0xff};
      #end
      FlxG.mouse.show();

      //add the entry keypad
      var keypad = new Keypad(200, 200, function(room) {
        PubNub.room.set_channel(room);
        FlxG.switchState(new WaitingRoom());
        }, "Room Number");

      add(keypad);

      trace ("added keypad");
    }

    //The on click handler for the start button
    private function onStartClick( ):Void
    {
      //Tell Flixel to change the active game state to the actual game
      //FlxG.switchState( new Theatre( ) );
    }

    override public function destroy():Void
    {
      super.destroy();
    }

    override public function update():Void
    {
      super.update();
    }
}
