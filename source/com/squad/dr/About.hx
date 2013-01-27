package com.squad.dr;

import com.squad.dr.widgets.Button;

import org.flixel.FlxG;
import org.flixel.FlxState;
import org.flixel.FlxSprite;
import org.flixel.FlxPoint;
import org.flixel.FlxButton;
import com.squad.dr.DrSquad;

class About extends FlxState
{

  override public function create():Void
  {
    DrSquad.log("showing splash screen");
    FlxG.mouse.show();
    FlxG.bgColor = 0xff000000;

    var logo = new FlxSprite(0, 0);
    logo.loadGraphic("assets/dr/about.png");
    add(logo);


    add(new Button(200, 620, "Back", _onDoneClick));
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