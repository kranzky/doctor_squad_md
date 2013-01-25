package worlds;

import kranzky.PubNub;

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

  public function new()
  {
    super();

    _counter = 1;

    // Create a PubNub instance to handle all messaging. This is for a specific
    // channel, so you might start off with a lobby channel then create one
    // more for the game channel (with a unique name for that game session)
    var pub_key = "pub-c-0834dc19-81c6-4378-9ab7-db3d457d9472";
    var sub_key = "sub-c-132a21ec-66ec-11e2-903d-12313f022c90";
    var channel = "kranzky";
    var pool_size = 10;
    _pubnub = new PubNub(pub_key, sub_key, channel, pool_size);

    _messageImage = new Text("Hello");
    var x = HXP.screen.width/2;
    var y = HXP.screen.height/2;
    _messageEntity = new Entity(x, y, _messageImage);
  }

  public override function begin()
  {
    add(_messageEntity);
  }

  public override function update()
  {
    if (Input.mousePressed) {
      if (_messageImage.text == "Hello") {
        _messageImage.text = "World";
      } else {
        _messageImage.text = "Hello";
      }
      // Publish an object to subscribers. I suggest you use small hashes like
      // this without nesting or arrays of values if possible; I had lots of
      // pain with Json parsing.
      var object = {
        message: "hello",
        counter: _counter,
        system: Sys.systemName()
      };
      _pubnub.send(object);
      _counter += 1;
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
    });
  }
}
