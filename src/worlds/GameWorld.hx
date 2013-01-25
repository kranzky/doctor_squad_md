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
  public function new()
  {
    super();

    trace(Sys.systemName());

    _pub_channel = start_pub("kranzky");
    _sub_channel = start_sub("kranzky");
  }

  public override function begin()
  {
    _messageImage = new Text("Hello");
    _messageEntity = new Entity(HXP.screen.width/2, HXP.screen.height/2, _messageImage);
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
      _pub_channel.sendMessage("hello-from-" + Sys.systemName());
    }
    var response = Thread.readMessage(false);
    if (response != null) {
      trace("READ: " + response);
    } 
  }

  public function start_pub(channel):Thread
  {
    var thread = Thread.create(_pub_thread);
    thread.sendMessage(Thread.current());
    thread.sendMessage(channel);
    return thread;
  }

  public function start_sub(channel):Thread
  {
    var thread = Thread.create(_sub_thread);
    thread.sendMessage(Thread.current());
    thread.sendMessage(channel);
    return thread;
  }

  //------------------------------------------------------------------------------

  private function _http_error(error) {
    trace("HTTP ERROR : " + Std.string(error));
  }

  private function _pub_thread():Void
  {
    trace("PUB THREAD STARTING");

    var main:Thread = Thread.readMessage(true);
    var channel = Thread.readMessage(true);

    while(true) {
      var message = Thread.readMessage(true);
      trace("PUB:"+message);
      var URL = "http://pubsub.pubnub.com/publish/pub-c-0834dc19-81c6-4378-9ab7-db3d457d9472/sub-c-132a21ec-66ec-11e2-903d-12313f022c90/0/" + channel + "/0/" + Json.stringify(message);
      var client = new haxe.Http(URL);
      client.onError = _http_error;
      client.onData = _pub_response;
      client.request(false);
      Sys.sleep(.1);
    }
  }

  private function _pub_response(body) {
    trace("HTTP RESP : " + body);
  }

  private function _sub_thread():Void
  {
    trace("SUB: STARTING");

    var main:Thread = Thread.readMessage(true);
    var channel = Thread.readMessage(true);
    var time_token = "0";

    while(true) {
      var url = "http://pubsub.pubnub.com/subscribe/sub-c-132a21ec-66ec-11e2-903d-12313f022c90/" + channel + "/0/" + time_token;
      var client = new haxe.Http(url);
      client.onError = _http_error;
      client.onData = function(body) {
        trace("HTTP RESP : " + body);
        var data = Json.parse(body);
        time_token = data[1];      
        main.sendMessage(data[0]);
      };
      client.request(false);
      Sys.sleep(.1);
    }

  }

  private var _messageImage:Text;
  private var _messageEntity:Entity;
  private var _time_token:String;

  private var _sub_channel:Thread;
  private var _pub_channel:Thread;
}
