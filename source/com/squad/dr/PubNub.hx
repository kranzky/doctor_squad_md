package com.squad.dr;

import haxe.Json;
import haxe.FastList;

import cpp.vm.Thread;

typedef PubMsg = {
  @:optional var type : String;
  @:optional var action : String;
  @:optional var data : String;
  @:optional var attributes : Dynamic;
  @:optional var ownerId : Null<Int>;
  @:optional var widgetId : Null<Int>;
}

class Observer
{
  public var key:Int;

  private var _pub_msg:PubMsg;
  private var _queue:Array<PubMsg>;
  private static var _next_key:Int = 0;

  public function new(pub_msg:PubMsg)
  {
    key = ++_next_key;
    _pub_msg = pub_msg;
    _queue = new Array<PubMsg>();
  }

  public function notify(pub_msg:PubMsg):Void
  {
    if (_wants(pub_msg)) {
      _queue.push(pub_msg);
    }
  }

  public function consume(notify:(PubMsg -> Void)):Void
  {
    _queue.reverse();
    var pub_msg:PubMsg;
    while (true) {
      pub_msg = _queue.pop();
      if (pub_msg == null) {
        break;
      }
      notify(pub_msg);
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
  private var _observers:FastList<Observer>;
  private var _queue:Array<PubMsg>;
  private static var _is_valid:Bool;
  public static var room(_get_a_room, null):PubNub;
  private var _channel:String;
  public function new():Void
  {
    if (!_is_valid) {
      throw "Don't create PubNub directly, silly. Get a room.";
    }
    _observers = new FastList<Observer>();
    _queue = new Array<PubMsg>();
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
    _channel = channel;
  }

  public function send(pub_msg:PubMsg):Void
  {
    if (_channel == null) {
      throw "Set the channel first.";
    }
    _queue.push(pub_msg);
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
    _queue.reverse();
    var sub_msg:PubMsg;
    while (true) {
      sub_msg = _queue.pop();
      if (sub_msg == null) {
        break;
      }
      _notify_observers(sub_msg);
    }
  }

  public function register(pub_msg:PubMsg):Int
  {
    var observer = new Observer(pub_msg);
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

  public function consume(key:Int, notify:(PubMsg -> Void)):Void
  {
    for (observer in _observers) {
      if (key == observer.key) {
        observer.consume(notify);
      }
    }
  }

  private function _notify_observers(pub_msg:PubMsg):Void
  {
    for (observer in _observers) {
      observer.notify(pub_msg);
    }
  }
}
