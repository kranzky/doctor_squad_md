package com.squad.dr.widgets;

import org.flixel.FlxButton;
import com.squad.dr.PubNub;

class Button extends FlxButton
{
  private var _buttoncallback:Void -> Void;
  public var usable:Bool = false;

  public function new(x, y, callbackFunction, usable_)
  {
    trace("button instantiated");
    super(x, y, "Hello", _pushed);
    trace("new button");

    usable = usable_;
    _buttoncallback = callbackFunction;
    
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

  private function updateState():Void
  {
    trace("Button was pushed!");
  }
  
}
