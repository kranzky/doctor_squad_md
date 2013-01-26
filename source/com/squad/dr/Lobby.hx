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
       
      //create a button with the label Start and set an on click function
      var startButton = new FlxButton(0, 0, "Start", onStartClick);
      //add the button to the state draw list
      add(startButton);
      
    }
 
    //The on click handler for the start button
    private function onStartClick( ):Void
    {
      //Tell Flixel to change the active game state to the actual game
      FlxG.switchState( new Theatre( ) );
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