package com.squad.dr;
 
import org.flixel.FlxSprite;
import org.flixel.FlxG;
import org.flixel.FlxText;
import org.flixel.FlxState;
 
class Theatre extends FlxState
{
  //this will be the text displayed to show some vital  info on object pools
  private var debug:FlxText;
  //used to show the player instructions on inputs
  private var controls:FlxText;

  //create all the game state objects, overriding create is the best place    
  override public function create():Void
  {
    //initialise the game Registry
     
    //create your text
    controls = new FlxText(0, 0, 360, "Press Ctrl to Fire! ---------- Press 1 / 2 / 3 to change Fire Type!");
    debug = new FlxText(0, 10, 200, "");
     
    //add your objects to the game stage to be drawn
    add(debug);
    add(controls);
     
     
  }
   
  override public function update():Void
  {
    //update the debug text to tell us some useful things about the bullets FlxGroup
     
    //dont forget to update the rest of the core state and everything in it
    super.update();
  }
   
}
