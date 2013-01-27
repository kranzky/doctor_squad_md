package com.squad.dr;

import org.flixel.FlxG;
import org.flixel.FlxState;
import org.flixel.FlxSprite;
import org.flixel.FlxPoint;


class Splash extends FlxState
{
  private var _remainingTime:Float;
  private var _doneSplash:Bool;

  private var kSplashTime:Float = 2.0;


  override public function create():Void
  {
    DrSquad.log("showing splash screen");
    FlxG.mouse.hide();
    FlxG.bgColor = 0xffffffff;

    var logo = new FlxSprite(70, 200);
    logo.loadGraphic("assets/dr/rocketlabs.png");
    add(logo);

    _remainingTime = kSplashTime;
  }

  override public function destroy():Void
  {
    super.destroy();
  }

  override public function update():Void
  {
    super.update();

    _remainingTime -= FlxG.elapsed;

    if (_remainingTime < 0.0)
    {
      if (!_doneSplash)
      {
        _doneSplash = true;
        DrSquad.log("Finished splash screen, moving to menu");
        FlxG.switchState(new Menu());
      }
    }
  }

}


