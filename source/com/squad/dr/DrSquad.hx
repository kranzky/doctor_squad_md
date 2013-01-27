package com.squad.dr;

import nme.Lib;
import org.flixel.FlxGame;
import com.squad.dr.PubNub;

class DrSquad extends FlxGame
{
  public function new()
  {
    var stageWidth:Int = Lib.current.stage.stageWidth;
    var stageHeight:Int = Lib.current.stage.stageHeight;
    var ratioX:Float = stageWidth / 640;
    var ratioY:Float = stageHeight / 480;
    var ratio:Float = Math.min(ratioX, ratioY);
    super(Math.floor(stageWidth / ratio), Math.floor(stageHeight / ratio), Lobby, ratio, 30, 30);
    //forceDebugger = true;
  }
}
