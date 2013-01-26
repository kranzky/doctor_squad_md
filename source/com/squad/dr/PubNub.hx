package com.squad.dr;

import haxe.Json;
import haxe.FastList;

import cpp.vm.Thread;

typedef PubMsg = {
  @:optional var type : String;
  @:optional var action : String;
  @:optional var data : String;
  @:optional var ownerId : Null<Int>;
  @:optional var widgetId : Null<Int>;
}

class Observer
{
  public var key:Int;

  private var _pub_msg:PubMsg;
  private var _notify:(PubMsg -> Void);

  private static var _next_key:Int = 0;

  public function new(pub_msg:PubMsg, notify:(PubMsg -> Void))
  {
    key = ++_next_key;
    _pub_msg = pub_msg;
    _notify = notify;
  }

  public function notify(pub_msg:PubMsg):Void
  {
    if (_wants(pub_msg)) {
      _notify(pub_msg);
    }
  }

  private function _wants(pub_msg:PubMsg):Bool
  {
    if (_pub_msg.type != null &&
        pub_msg.type != null &&
        _pub_msg.type != pub_msg.type) {
      return false;
    }
    if (_pub_msg.action != null &&
        pub_msg.action != null &&
        _pub_msg.action != pub_msg.action) {
      return false;
    }
    if (_pub_msg.ownerId != null &&
        pub_msg.ownerId != null &&
        _pub_msg.ownerId != pub_msg.ownerId) {
      return false;
    }
    if (_pub_msg.widgetId != null &&
        pub_msg.widgetId != null &&
        _pub_msg.widgetId != pub_msg.widgetId) {
      return false;
    }
    return true;
  }

}

class PubNub
{
  private var _sub_thread:Thread;
  private var _pub_url:String;
  private var _channel:String;
  private var _observers:FastList<Observer>;

  private static var _is_valid:Bool;
  public static var room(_get_a_room, null):PubNub;
  public function new():Void
  {
    if (!_is_valid) {
      throw "Don't create PubNub directly, silly. Get a room.";
    }
    _observers = new FastList<Observer>();
  }
  private static function _get_a_room():PubNub
  {
    if (room == null) {
      _is_valid = true;
      room = new PubNub();
      _is_valid = false;
    }
    return room;
  }

  public function get_channel():String
  {
    return _channel;
  }

  // ref: http://www.pubnub.com/tutorial/http-rest-push-api
  public function set_channel(channel)
  {
    var service = "http://pubsub.pubnub.com";
    var pub_key = "pub-c-0834dc19-81c6-4378-9ab7-db3d457d9472";
    var sub_key = "sub-c-132a21ec-66ec-11e2-903d-12313f022c90";

    _sub_thread = _create_subscriber(service+"/subscribe/"+sub_key+"/"+channel+"/0/");
    _pub_url = service+"/publish/"+pub_key+"/"+sub_key+"/0/"+channel+"/0/";
    _channel = channel;
  }

  // TODO: sending spawns a new thread. This is because a single thread can't
  // process a rapid succession of sends quickly enough, so they get buffered
  // up significantly, which causes a massive delay. Brad saw this last night
  // just before we left. It's fixed now, but rather than creating a new thread
  // each call, we should round-robin to a thread pool.
  public function send(pub_msg:PubMsg):Void
  {
    if (_channel == null) {
      throw "Set the channel first.";
    }
    var pub_thread = _create_publisher(_pub_url);
    pub_thread.sendMessage(pub_msg);
  }

  // TODO: we should pass a Json object back to notify instead of a string, but
  // I don't know how to specify the method signature for the notify function.
  // The complexity here is that the message we read may be a comma-separated
  // list of objects, but we want to notify one object at a time, plus the fact
  // that the read queue may require multiple reads to empty.
  public function pump():Void
  {
    if (_channel == null) {
      throw "Set the channel first.";
    }
    var regex_content = ~/^(\{.*?\}),(.*)$/;
    var message = Thread.readMessage(false);
    while (message != null) {
      while(true) {
          if (regex_content.match(message)) {
            _notify_observers(regex_content.matched(1));
            message = regex_content.matched(2);
          } else {
            _notify_observers(message);
            break;
          }
        }
      message = Thread.readMessage(false);
    }
  }

  public function register(pub_msg:PubMsg, notify):Int
  {
    var observer = new Observer(pub_msg, notify);
    _observers.add(observer);
    return observer.key;
  }

  public function deregister(key:Int):Void
  {
    for (observer in _observers) {
      if (key == observer.key) {
        _observers.remove(observer);
      }
    }
  }

  private function _notify_observers(message:String):Void
  {
    var pub_msg:PubMsg = Json.parse(message);
    for (observer in _observers) {
      observer.notify(pub_msg);
    }
  }

  static private function _create_publisher(base):Thread
  {
    var thread = Thread.create(function():Void {
      var base = Thread.readMessage(true);
      var pub_msg:PubMsg = Thread.readMessage(true);
      var url = base + Json.stringify(pub_msg);
      var client = new haxe.Http(url);
      var success = false;
      client.setHeader('Accept', 'application/json');
      client.noShutdown = true;
      client.onError = function(error) {
        trace("PUB ERROR : " + Std.string(error) + " : " + pub_msg);
        success = false;
      };
      client.onData = function(data) {
        success = true;
      };
      while (!success) {
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
      var regex_response = ~/^\[\[(.*)\],"(.*)"\]$/;
      while(true) {
        var url = base + time_token;
        var client = new haxe.Http(url);
        client.setHeader('Accept', 'application/json');
        client.noShutdown = true;
        client.onError = function(error) {
          trace("SUB ERROR : " + Std.string(error));
        };
        client.onData = function(data) {
          regex_response.match(data);
          time_token = regex_response.matched(2);
          var payload = regex_response.matched(1);
          if (payload.length > 2) {
            main.sendMessage(payload);
          }
        };
        client.request(false);
      }
    });
    thread.sendMessage(Thread.current());
    thread.sendMessage(base);
    return thread;
  }
}
