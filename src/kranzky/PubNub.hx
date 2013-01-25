package kranzky;

import haxe.Json;
import cpp.vm.Thread;

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
