package com.squad.dr;

import nme.Lib;
import org.flixel.FlxGame;
import com.squad.dr.PubNub;
  
class DrSquad extends FlxGame
{ 
  private var _pubnub:PubNub;
  public function new()
  {
    var stageWidth:Int = Lib.current.stage.stageWidth;
    var stageHeight:Int = Lib.current.stage.stageHeight;
    var ratioX:Float = stageWidth / 640;
    var ratioY:Float = stageHeight / 480;
    var ratio:Float = Math.min(ratioX, ratioY);
    super(Math.floor(stageWidth / ratio), Math.floor(stageHeight / ratio), Lobby, ratio, 30, 30);
    forceDebugger = true;
    
    var pub_key = "pub-c-0834dc19-81c6-4378-9ab7-db3d457d9472";
    var sub_key = "sub-c-132a21ec-66ec-11e2-903d-12313f022c90";
    var channel = "kranzky";
    _pubnub = new PubNub(pub_key, sub_key, channel);
  }
}
