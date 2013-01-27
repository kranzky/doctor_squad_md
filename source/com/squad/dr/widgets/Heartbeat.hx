package com.squad.dr.widgets;

import org.flixel.FlxObject;
import org.flixel.FlxSprite;
import org.flixel.FlxG;
import org.flixel.FlxSound;
import org.flixel.FlxText;
import org.flixel.FlxPath;
import org.flixel.FlxPoint;


class Heartbeat extends FlxSprite
{
  private var _audioBeatTime:Float;
  private var _beatSound:FlxSound;
  private var _path:FlxPath;
  private var _time:Float;
  private var _frequency:Float = 7.5;
  private var _flatlining:Bool;
  private var _listen_key:Int = 0;

  private var kOffsetX:Float = 600.0;
  private var kOffsetY:Float = 100.0;
  private var kScaleFactor:Float = 5.0;
  private var kMaxPoints = 100.0;

  public function new(x, y)
  {
    super(x, y);

    trace("heartbeat new");
    makeGraphic(640, 200, 0xff000000); //colours are ARGB
    _path = new FlxPath();   
    _path.ignoreDrawDebug = false; 

    _listen_key = PubNub.room.register({type: "clipboard"});

    _audioBeatTime = 0.0;
    _beatSound = new FlxSound();
    //_beatSound.autoDestroy = false;
    //_beatSound.loadStream("assets/dr/audio/ThemeCut.mp3", false, false);
    _beatSound.loadEmbedded("Heartbeat", false, false);
  }

  public override function update():Void
  {
    super.update();

    _time += FlxG.elapsed;

    if (_time > Math.PI / 5.0)
      _time -= 2 * Math.PI / 5.0;

    var newY:Float = 0.5;
    if (!_flatlining)
      newY = Math.tan((Std.int(_time * 20) / 20.0) * _frequency) * kScaleFactor;
    newY += kOffsetY;

    //trace(newY);

    var newX:Float = kOffsetX + _time;

    if (_path.nodes.length == kMaxPoints)
    {
      //reuse and reposition existing point
      var point:FlxPoint = _path.removeAt(0);
      point.x = newX;
      point.y = newY;
      _path.addPoint(point);
    }
    else
    {
      //new point for the pool
      _path.add(newX, newY);
    }

    //update positions of all nodes to make them scroll across to the left
    for (point in _path.nodes)
    {
      point.x -= FlxG.elapsed * 200.0;
    }


    _audioBeatTime -= FlxG.elapsed;
    if (_audioBeatTime < 0.0 && (newY > 120.0 || newY < 35.0))
    {
      //play audio if we haven't just played it
      _audioBeatTime = 0.45;

      _beatSound = new FlxSound();
      _beatSound.loadEmbedded("Heartbeat", false, false);

      _beatSound.setVolume(1.0);
      //_beatSound.stop();
      _beatSound.play(false);
      //trace("beat");
      //trace(_beatSound);
    }

    //trace(_path.nodes.length);
  }

  public override function destroy():Void
  {
    PubNub.room.deregister(_listen_key);
    super.destroy();
  }


  public function flatline():Void
  {
    _flatlining = true;
  }

  public function beat():Void
  {
    _flatlining = false;
  }


  override public function draw():Void
  {
    //_path.drawDebug(FlxG.camera);
    super.draw();

    this.pixels.clear(0xff000000);

    var gfx = FlxG.flashGfx;
    gfx.clear();

    var lastPoint = null;
    for (point in _path.nodes)
    {
      if (lastPoint != null)
      {
        var StartX:Float = lastPoint.x;
        var StartY:Float = lastPoint.y;
        var EndX:Float = point.x;
        var EndY:Float = point.y;

        //Draw line
        gfx.moveTo(StartX,StartY);
        gfx.lineStyle(3, 0xff00ff00, 1);
        gfx.lineTo(EndX,EndY);
      }

      lastPoint = point;
    }
    
    //Cache line to bitmap
    this.pixels.draw(FlxG.flashGfxSprite);
  }   
}
