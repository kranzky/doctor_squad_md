package worlds;

import haxe.Json;

import cpp.vm.Thread;

import com.haxepunk.HXP;
import com.haxepunk.World;
import com.haxepunk.utils.Input;
import com.haxepunk.graphics.Text;
import com.haxepunk.Entity;

class PubNub
{
  private var _pub_thread:Thread;
  private var _sub_thread:Thread;

  public function new(pub_key, sub_key, channel)
  {
    var service = "http://pubsub.pubnub.com";
    _pub_thread = _create_publisher(service+"/publish/"+pub_key+"/"+sub_key+"/0/"+channel+"/0/");
    _sub_thread = _create_subscriber(service+"/subscribe/"+sub_key+"/"+channel+"/0/");
  }

  public function send(object):Void
  {
    _pub_thread.sendMessage(object);
  }

  public function read():Dynamic
  {
    return Thread.readMessage(false);
  }

  static private function _create_publisher(base):Thread
  {
    var thread = Thread.create(function():Void {
      var base = Thread.readMessage(true);
      while(true) {
        var object = Thread.readMessage(true);
        var url = base + Json.stringify(object);
        var client = new haxe.Http(url);
        client.onError = function(error) {
          trace("PUB ERROR : " + Std.string(error));
        };
        client.onData = function(data) {
          // NOOP
        };
        client.request(false);
      }
    });
    thread.sendMessage(base);
    return thread;
  }

  static private function _create_subscriber(base):Thread
  {
    var thread = Thread.create(function():Void {
      var main:Thread = Thread.readMessage(true);
      var base = Thread.readMessage(true);
      var time_token = "0";
      while(true) {
        var url = base + time_token;
        var client = new haxe.Http(url);
        client.onError = function(error) {
          trace("SUB ERROR : " + Std.string(error));
        };
        client.onData = function(data) {
          var object = Json.parse(data);
          time_token = object[1];
          main.sendMessage(object[0]);
        };
        client.request(false);
      }
    });
    thread.sendMessage(Thread.current());
    thread.sendMessage(base);
    return thread;
  }
}

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
      _pubnub.send("hello-from-" + Sys.systemName() + "-" + _counter);
      _counter += 1;
    }
    var response = _pubnub.read();
    if (response != null) {
      trace("READ: " + response);
    }
  }
}
