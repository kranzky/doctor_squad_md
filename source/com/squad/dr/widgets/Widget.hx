package com.squad.dr.widgets;

import org.flixel.FlxGroup;
import com.squad.dr.PubNub;

class Widget extends FlxGroup
{
  public var _canInteract:Bool;
  private var _widgetId:Int;
  private var _ownerId:Int;

  public function new(widgetId = null, ownerId = null, canInteract = false)
  {
    super();
    _widgetId = widgetId;
    _ownerId = ownerId;
    _canInteract = canInteract;
    initialise();
  }

  public function initialise():Void
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
