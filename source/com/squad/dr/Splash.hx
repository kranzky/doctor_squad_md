package com.squad.dr;

import org.flixel.FlxG;
import org.flixel.FlxState;
import org.flixel.FlxSprite;


class Splash extends FlxState
{
  private var _timeToStart:Float;

  override public function create():Void
  {
    trace("showing splash screen");
    FlxG.mouse.hide();
    FlxG.bgColor = 0xffffffff;

    var logo = new FlxSprite(70, 200);
    logo.loadGraphic("assets/dr/rocketlabs.png");
    add(logo);

    _timeToStart = 2.0;
  }

  override public function destroy():Void
  {
    super.destroy();
  }

  override public function update():Void
  {
    super.update();

    _timeToStart -= FlxG.elapsed;

    if (_timeToStart < 0.0)
    {
      trace("Finished splash screen");
      FlxG.switchState(new Lobby());
    }
  }

}