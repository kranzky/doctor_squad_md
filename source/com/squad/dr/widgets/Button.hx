package com.squad.dr.widgets;

import org.flixel.FlxButton;
import com.squad.dr.PubNub;

class Button extends FlxButton
{
  private var _buttoncallback:Void -> Void;

  public function new(x, y, labeltext, callbackFunction)
  {
    trace("button instantiated");
    super(x, y, labeltext, _pushed);
    
    trace("new button");
    _buttoncallback = callbackFunction;
   
   onDown = onHeld; 
  }

  /*
  public override function update()
  {
    super.update();
  }
  */
  public function _pushed()
  {
    trace("button callback fired");
    updateState();
    if (_buttoncallback != null)
      _buttoncallback();
  }

  public function onHeld()
  {
    //override if you care about when the button is being held down
  }

  private function updateState():Void
  {
    trace("Button was pushed!");
  }
  
}
