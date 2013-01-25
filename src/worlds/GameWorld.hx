package worlds;
 
import haxe.Json;

import cpp.vm.Thread;

import com.haxepunk.HXP;
import com.haxepunk.World;
import com.haxepunk.utils.Input;
import com.haxepunk.graphics.Text;
import com.haxepunk.Entity;
 
class GameWorld extends World
{
  private var _messageImage:Text;
  private var _messageEntity:Entity;
  private var _sub_channel:Thread;
  private var _pub_channel:Thread;
  private var _counter:Int;

  public function new()
  {
    super();

    _pub_channel = start_pub("kranzky");
    _sub_channel = start_sub("kranzky");

    _messageImage = new Text("Hello");
    _messageEntity = new Entity(HXP.screen.width/2, HXP.screen.height/2, _messageImage);

    _counter = 1;
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
      _pub_channel.sendMessage("hello-from-" + Sys.systemName() + "-" + _counter);
      _counter += 1;
    }
    var response = Thread.readMessage(false);
    if (response != null) {
      trace("READ: " + response);
    } 
  }

  //------------------------------------------------------------------------------

  public function start_pub(channel):Thread
  {
    var thread = Thread.create(function():Void {
      var main:Thread = Thread.readMessage(true);
      var channel = Thread.readMessage(true);

      while(true) {
        var message = Thread.readMessage(true);
        var URL = "http://pubsub.pubnub.com/publish/pub-c-0834dc19-81c6-4378-9ab7-db3d457d9472/sub-c-132a21ec-66ec-11e2-903d-12313f022c90/0/" + channel + "/0/" + Json.stringify(message);
        var client = new haxe.Http(URL);
        client.onError = function(error) {
          trace("PUB ERROR : " + Std.string(error));
        };
        client.onData = function(data) {
          // NOOP
        };
        client.request(false);
      }
    });

    thread.sendMessage(Thread.current());
    thread.sendMessage(channel);

    return thread;
  }

  public function start_sub(channel):Thread
  {
    var thread = Thread.create(function():Void {
      var main:Thread = Thread.readMessage(true);
      var channel = Thread.readMessage(true);
      var time_token = "0";

      while(true) {
        var url = "http://pubsub.pubnub.com/subscribe/sub-c-132a21ec-66ec-11e2-903d-12313f022c90/" + channel + "/0/" + time_token;
        var client = new haxe.Http(url);
        client.onError = function(error) {
          trace("SUB ERROR : " + Std.string(error));
        };
        client.onData = function(body) {
          var data = Json.parse(body);
          time_token = data[1];
          main.sendMessage(data[0]);
        };
        client.request(false);
      }
    });

    thread.sendMessage(Thread.current());
    thread.sendMessage(channel);

    return thread;
  }
}
