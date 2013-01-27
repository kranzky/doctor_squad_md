package com.squad.dr;

import nme.Lib;
import org.flixel.FlxGame;
import org.flixel.FlxState;
import com.squad.dr.PubNub;

class DrSquad extends FlxGame
{
  private var _skipSplash = false;

  public function new()
  {
    var stageWidth:Int = Lib.current.stage.stageWidth;
    var stageHeight:Int = Lib.current.stage.stageHeight;
    var ratioX:Float = stageWidth / 640;
    var ratioY:Float = stageHeight / 480;
    var ratio:Float = Math.min(ratioX, ratioY);

    var gameSizeX = Math.floor(stageWidth / ratio);
    var gameSizeY = Math.floor(stageHeight / ratio);
    var framerate:Int = 30;
    
    if (_skipSplash)
      super(gameSizeX, gameSizeY, Lobby, ratio, framerate, framerate);
    else
      super(gameSizeX, gameSizeY, Splash, ratio, framerate, framerate);


    //forceDebugger = true;
  }
}
