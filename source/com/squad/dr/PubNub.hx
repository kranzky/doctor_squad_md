package com.squad.dr;

import haxe.Json;

import cpp.vm.Thread;

typedef Publishable = {
  @:optional var type : String;
  @:optional var action : String;
  @:optional var data : String;
  @:optional var ownerId : Int;
  @:optional var widgetId : Int;
}

class PubNub
{
  private var _sub_thread:Thread;
  private var _pub_url:String;

  // ref: http://www.pubnub.com/tutorial/http-rest-push-api
  public function new(pub_key, sub_key, channel)
  {
    var service = "http://pubsub.pubnub.com";
    _sub_thread = _create_subscriber(service+"/subscribe/"+sub_key+"/"+channel+"/0/");
    _pub_url = service+"/publish/"+pub_key+"/"+sub_key+"/0/"+channel+"/0/";
  }

  // TODO: sending spawns a new thread. This is because a single thread can't
  // process a rapid succession of sends quickly enough, so they get buffered
  // up significantly, which causes a massive delay. Brad saw this last night
  // just before we left. It's fixed now, but rather than creating a new thread
  // each call, we should round-robin to a thread pool.
  public function send(object):Void
  {
    var pub_thread = _create_publisher(_pub_url);
    pub_thread.sendMessage(object);
  }

  // TODO: we should padd a Json object back to notify instead of a string, but
  // I don't know how to specify the method signature for the notify function.
  // The complexity here is that the message we read may be a comma-separated
  // list of objects, but we want to notify one object at a time, plus the fact
  // that the read queue may require multiple reads to empty.
  public function read(notify):Void
  {
    var regex_content = ~/^(\{.*?\}),(.*)$/;
    var message = Thread.readMessage(false);
    while (message != null) {
      while(true) {
          if (regex_content.match(message)) {
            notify(regex_content.matched(1));
            message = regex_content.matched(2);
          } else {
            notify(message);
            break;
          }
        }
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
