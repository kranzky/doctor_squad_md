package widgets;

import com.haxepunk.World;
import kranzky.PubNub;

class Widget
{

  public var _canInteract:Bool;
  private var _pubnub:PubNub;

  public function new( pubnub, canInteract )
  {
    _canInteract = canInteract;
    _pubnub = pubnub;
  }

  public function send( message ):Void
  {
    //_pubnub.send( message );
  }


  public function received( message ):Void
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

