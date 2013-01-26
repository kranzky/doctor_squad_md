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

class Lobby extends FlxState
{
	override public function create():Void
    {
      #if !neko
      FlxG.bgColor = 0xff131c1b;
      #else
      FlxG.bgColor = {rgb: 0x131c1b, a: 0xff};
      #end
      FlxG.mouse.show();

      var keypad = new Keypad(200, 200, function(room) {
        PubNub.room.set_channel(room);
        FlxG.switchState(new WaitingRoom());
      });

      add(keypad);
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
