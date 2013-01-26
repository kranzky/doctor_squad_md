package widgets;

import kranzky.PubNub;

import com.haxepunk.Entity;
import com.haxepunk.graphics.Image;
import com.haxepunk.utils.Input;
import com.haxepunk.World;
import com.haxepunk.HXP;

class Switch extends Entity
{
  public var on:Bool;
  private var _callback:Void -> Void;
  public var switchable:Bool = false;

  public function new(x, y, callbackFunction, switchable_)
  {
    trace("switch instantiated");
    super(x,y);
    trace("new switch");

    switchable = switchable_;
    on = true;
    setHitbox(45, 45);
    _callback = callbackFunction;
    updateState(); // turn off and setup arts
  }

  public override function update()
  {
    handleInput();
    super.update();
  }

  private function handleInput()
  {
    if (Input.mousePressed)
    {
      if (collidePoint(x, y, world.mouseX, world.mouseY))
      {
        if(switchable) 
          _toggle();
      }
    }
  }

  public function turnOn():Void
  {
    on = true;
    updateState();
  }

  public function turnOff():Void
  {
    on = false;
    updateState();
  }

  private function _turnedOn():Void
  {
    on = true;
    updateState();
    if (_callback != null) _callback();
  }

  public function _turnedOff():Void
  {
    on = false;
    updateState();
    if (_callback != null) _callback();
  }

  public function _toggle():Void
  {
    if(on)
      _turnedOff();
    else
      _turnedOn();
  }

  private function updateState():Void
  {
    if(on) 
    {
      graphic = Image.createRect(45, 45, 0x00FF00);
    } else {
      graphic = Image.createRect(45, 45, 0xFF0000);
    }
  }
}