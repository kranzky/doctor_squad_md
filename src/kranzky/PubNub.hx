package kranzky;

import haxe.Json;

import cpp.vm.Thread;

class PubNub
{
  private var _sub_thread:Thread;
  private var _pub_url:String;

  public function new(pub_key, sub_key, channel)
  {
    var service = "http://pubsub.pubnub.com";
    _sub_thread = _create_subscriber(service+"/subscribe/"+sub_key+"/"+channel+"/0/");
    _pub_url = service+"/publish/"+pub_key+"/"+sub_key+"/0/"+channel+"/0/";
  }

  public function send(object):Void
  {
    var pub_thread = _create_publisher(_pub_url);
    pub_thread.sendMessage(object);
  }

  public function read(notify):Void
  {
    var message = Thread.readMessage(false);
    while (message != null) {
      notify(message);
      message = Thread.readMessage(false);
    }
  }

  static private function _create_publisher(base):Thread
  {
    var thread = Thread.create(function():Void {
      var base = Thread.readMessage(true);
      var object = Thread.readMessage(true);
      var url = base + Json.stringify(object);
      var client = new haxe.Http(url);
      client.setHeader('Accept', 'application/json');
      client.noShutdown = true;
      client.onError = function(error) {
        trace("PUB ERROR : " + Std.string(error));
      };
      client.onData = function(data) {
        // NOOP
      };
      client.request(false);
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
      var r = ~/^\[(.*),"(.*)"\]$/;
      while(true) {
        var url = base + time_token;
        var client = new haxe.Http(url);
        client.setHeader('Accept', 'application/json');
        client.noShutdown = true;
        client.onError = function(error) {
          trace("SUB ERROR : " + Std.string(error));
        };
        client.onData = function(data) {
          r.match(data);
          var object = Json.parse(r.matched(1));
          time_token = r.matched(2);
          main.sendMessage(object);
        };
        client.request(false);
      }
    });
    thread.sendMessage(Thread.current());
    thread.sendMessage(base);
    return thread;
  }
}
