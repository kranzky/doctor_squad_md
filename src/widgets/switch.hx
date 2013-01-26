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
    toggle(); // turn off and setup arts
    setHitbox(45, 45);
    _callback = callbackFunction;
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
        trace("tapped inside");
        if(switchable) 
          toggle();
      }
      trace("tapped");
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

  private function toggle():Void
  {
    if(on)
      turnOff();
    else
      turnOn();
  }

  private function updateState():Void
  {
    if(on) 
    {
      graphic = Image.createRect(45, 45, 0x00FF00);
    } else {
      graphic = Image.createRect(45, 45, 0xFF0000);
    }
    if (_callback != null) _callback();
  }
}