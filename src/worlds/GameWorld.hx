package worlds;

import kranzky.PubNub;
import widgets.Generator;
import widgets.Widget;

import haxe.Json;

import com.haxepunk.HXP;
import com.haxepunk.World;
import com.haxepunk.utils.Input;
import com.haxepunk.graphics.Text;
import com.haxepunk.Entity;

class GameWorld extends World
{
  private var _counter:Int;
  private var _pubnub:PubNub;
  private var _messageImage:Text;
  private var _messageEntity:Entity;

  private var _widgets:Array<Widget>;
  private var _id:Int;
  private var _readyTimer:Float = 0;

  private var _gameMaster:Bool = true;

  public function new()
  {
    super();

    _id = Std.int(Math.random()*65536);

    _counter = 1;

    // Create a PubNub instance to handle all messaging. This is for a specific
    // channel, so you might start off with a lobby channel then create one
    // more for the game channel (with a unique name for that game session)
    var pub_key = "pub-c-0834dc19-81c6-4378-9ab7-db3d457d9472";
    var sub_key = "sub-c-132a21ec-66ec-11e2-903d-12313f022c90";
    var channel = "kranzky";
    _pubnub = new PubNub(pub_key, sub_key, channel);

    _messageImage = new Text("Hello");
    var x = HXP.screen.width/2;
    var y = HXP.screen.height/2;
    _messageEntity = new Entity(x, y, _messageImage);

    _widgets = new Array<Widget>();
  }

  public override function begin()
  {
    add(_messageEntity);
    _readyTimer = 1.0;
  }

  public function ready():Void
  {
    if (_gameMaster)
      spawnWidget( "generator", _id );
  }

  public function spawnWidget( type, ownerId )
  {
    var widgetId:Int = Std.int( Math.random() * 65535 );
    var spawnMsg:Publishable = {
      type: "spawn",
      data: "generator",
      ownerId: ownerId,
      widgetId: widgetId
    }
    _pubnub.send(spawnMsg);
  }

  private function addWidget( type, ownerId, widgetId )
  {
    if( type == "generator" )
    {
      var generator = new Generator( widgetId, _pubnub, (ownerId == _id) );
      generator.add( this );
      _widgets.push( generator );
    }
  }

  public override function update()
  {

    if (_readyTimer < 0)
    {
      ready();
      _readyTimer = 0;
    }
    else if (_readyTimer > 0)
    {
      _readyTimer -= HXP.elapsed;
    }

    if (Input.mousePressed && false) {
      if (_messageImage.text == "Hello") {
        _messageImage.text = "World";
      } else {
        _messageImage.text = "Hello";
      }
      // Publish an object to subscribers. I suggest you use small hashes like
      // this without nesting or arrays of values if possible; I had lots of
      // pain with Json parsing. Also, each send creates a new thread, so it's
      // possible to exhaust threads and crash if you spam this. The PubNub
      // class should probably instance a pool of threads for sending and reuse
      // them in a round-robin. But I'm too tired for that right now.

    }
    // Reading requires you give it a callback. This is because it unpicks the
    // array of results returned, so one call to read may hit the callback
    // multiple times, one for each object read. You can do Json parsing in the
    // callback to get the object pack, provided the crappy haxe Json parser
    // can handle it. The parsing should be done within PubNub so you just get
    // an object back, but I didn't know how to specify the message type to the
    // anonymous function.
    _pubnub.read(function(message) {
      trace("READ: " + message);
      var object = Json.parse(message);

      if (object.type == "spawn")
      {
        addWidget( object.data, object.ownerId, object.widgetId );
      } 
      else if (object.type == "widget")
      {
        for (widget in _widgets) {
          widget.received( object );
        }
      }
    });

    super.update();
    // Also update widgets (they're not entities)
    for (widget in _widgets) {
      widget.update();
    }
  }
}
