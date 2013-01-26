package widgets;

import kranzky.PubNub;
import com.haxepunk.Entity;
import com.haxepunk.graphics.Image;
import com.haxepunk.utils.Input;
import com.haxepunk.World;
import com.haxepunk.HXP;

class Generator extends Widget
{

  private var _darkness:Entity;
  private var _switch:Switch;

  public override function initialise():Void
  {
    trace("new generator");
    var _darknessImage = Image.createRect(HXP.screen.width, HXP.screen.height, 0x000000);
    var x = 0.0;
    var y = 0.0;
    _darkness = new Entity(x, y, _darknessImage);

    x = HXP.screen.width/2;
    y = HXP.screen.height/2;
    _switch = new Switch(x, y, switchChanged, _canInteract);
    updateState();
  }

  public override function message(action:String, data:String)
  {
    trace("Generator recieved message");
    if (action == "switch")
    {
      if (data == "on") {
        _switch.turnOn();
      } else {
        _switch.turnOff();
      }
    }
    updateState();
  }

  public override function update()
  {
    // widget state updated here (eg fade out an element)
  }

  public override function add( world:World ):Void
  {
    world.add(_switch);
    world.add(_darkness);
  }

  public override function remove( world:World ):Void
  {
    world.remove(_switch);
    world.remove(_darkness);
  }

  private function switchChanged():Void
  {
    trace("we clicked switch");

    // send msg
    var msg:Publishable = {
      type: "widget",
      action: "switch",
      data: _switch.on ? "on" : "off",
      widgetId: _widgetId
    }
    this.send( msg );
  }

  private function updateState():Void
  {
    if(_switch.on) 
    {
      cast(_darkness.graphic, Image).alpha = 0.1;
    } else {
      cast(_darkness.graphic, Image).alpha = 0.8;
    }
  }
  
}
