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

    var pub_key = "pub-c-0834dc19-81c6-4378-9ab7-db3d457d9472";
    var sub_key = "sub-c-132a21ec-66ec-11e2-903d-12313f022c90";
    var channel = "kranzky";
    _pubnub = new PubNub(pub_key, sub_key, channel);

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
      var object = {
        message: "hello",
        counter: _counter,
        system: Sys.systemName()
      };
      _pubnub.send(object);
      _counter += 1;
    }
    _pubnub.read(function(message) {
      trace("READ: " + message);
      var object = Json.parse(message);
    });
  }
}
