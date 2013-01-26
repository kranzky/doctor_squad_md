package com.squad.dr.widgets;

import org.flixel.FlxGroup;
import com.squad.dr.PubNub;

class Widget extends FlxGroup
{
  public var _canInteract:Bool;
  public var _pubnub: PubNub;
          
  private var _widgetId:Int;
  private var _owned:Bool = false;

  public function new( widgetId, pubnub, owned, canInteract )
  {
    super();
    _widgetId = widgetId;
    _canInteract = canInteract;
    _pubnub = pubnub;
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
    _pubnub.send( message );
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
