package com.squad.dr.widgets;

import org.flixel.FlxGroup;
import org.flixel.FlxObject;
//import addons.NestedSprite;
import com.squad.dr.PubNub;

class Widget extends FlxGroup
{
  public var _canInteract:Bool;
  private var _widgetId:Int;
  private var _owned:Bool = false;

  private var x = 0;
  private var y = 0;

  public function new( widgetId, owned, canInteract )
  {
    super();
    _widgetId = widgetId;
    _canInteract = canInteract;
    _owned = owned;
    initialise();
  }

  public function send( action, data ):Void
  {
    return;      
    var message = {
    type: "widget",
    action: action,
    data: data,
    widgetId: _widgetId
    };
    PubNub.room.send( message );
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

  public function initialise():Void
  {
    // override me
  }

  public function received( object ):Void
  {
    if (object.widgetId == _widgetId) 
    {
    this.message( object.action, object.data );
    }
  }

  public function message( action:String, data:String )
  {
    // override me
  } 

  /*
  override public function update():Void
  {
      // override me
  }
  */
}
