package com.squad.dr;

import org.flixel.FlxG;
import org.flixel.FlxState;
import org.flixel.FlxSprite;
import org.flixel.FlxPoint;
import org.flixel.FlxButton;


class About extends FlxState
{

  override public function create():Void
  {
    trace("showing splash screen");
    FlxG.mouse.show();
    FlxG.bgColor = 0xff000000;

    add(new FlxButton(280, 760, "So Wow", _onDoneClick));
  }

  override public function destroy():Void
  {
    super.destroy();
  }

  override public function update():Void
  {
    super.update();
  }

  private function _onDoneClick( ):Void
  {
    FlxG.switchState(new Menu());
  }
}