package widgets;

import com.haxepunk.World;
import kranzky.PubNub;

class Widget
{

  public var _canInteract:Bool;
  private var _pubnub:PubNub;
  private var _widgetId:Int;

  public function new( widgetId, pubnub, canInteract )
  {
    _canInteract = canInteract;
    _pubnub = pubnub;
    initialise();
  }

  public function send( action, data ):Void
  {
    var message:Publishable = {
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

  public function add( world:World ):Void
  {
    // override me
  }

  public function remove( world:World ):Void
  {
    // override me
  }

  public function update():Void
  {
    // override me
  }
}

