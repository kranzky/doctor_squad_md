package com.squad.dr.widgets;

import org.flixel.FlxGroup;
import com.squad.dr.PubNub;

class Widget extends FlxGroup
{
  public var _canInteract:Bool;
  private var _widgetId:Int;
  private var _owned:Bool = false;

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
