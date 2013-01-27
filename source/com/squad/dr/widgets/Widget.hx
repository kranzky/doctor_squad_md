package com.squad.dr.widgets;

import org.flixel.FlxGroup;
import org.flixel.FlxObject;
//import addons.NestedSprite;
import com.squad.dr.PubNub;

class Widget extends FlxGroup
{
  private var _widgetId:Int;
  private var _ownerId:Int;

  private var x = 0;
  private var y = 0;

  public function new(widgetId, ownerId, attributes:Dynamic)
  {
    super();
    _widgetId = widgetId;
    _ownerId = ownerId;
    initialise(attributes);
  }

  public function moveTo(X, Y)
  {
    var dx = x - X;
    var dy = y - Y;
    for (child in members)
    {
        if (Std.is(child, FlxObject))
        { 
          var flxobject = cast(child, FlxObject); 
          flxobject.x += dx;
          flxobject.y += dy;
        }
      
    }

  }

  public function initialise(attributes:Dynamic):Void
  {
    // override me
  }

  public function is_owner():Bool
  {
    if (_ownerId == User.me.id) {
      return true;
    }
    return false;
  }
}
