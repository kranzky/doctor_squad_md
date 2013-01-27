package com.squad.dr;

import com.squad.dr.widgets.Button;

import org.flixel.FlxG;
import org.flixel.FlxState;
import org.flixel.FlxSprite;
import org.flixel.FlxPoint;
import org.flixel.FlxButton;

class Menu extends FlxState
{
  private var _startButton:FlxButton;
  private var _aboutButton:FlxButton;
  private var _exitButton:FlxButton;

  override public function create():Void
  {
    DrSquad.log("showing menu screen");
    FlxG.mouse.show();
    FlxG.bgColor = 0xffffffff;

    var titleGraphic = new FlxSprite(0, 0);
    titleGraphic.loadGraphic("assets/dr/title.png");
    add(titleGraphic);

    _startButton = new Button(0, 520, "Play", _onStartClick);
    _aboutButton = new Button(200, 520, "About", _onAboutClick);
    _exitButton = new Button(400, 520, "Exit", _onExitClick);

    add(_startButton);
    add(_aboutButton);
    add(_exitButton);
  }

  override public function destroy():Void
  {
    super.destroy();
  }

  override public function update():Void
  {
    super.update();
  }


  //buttons
  private function _onStartClick( ):Void
  {
    FlxG.switchState(new Lobby());
  }

  private function _onAboutClick( ):Void
  {
    FlxG.switchState(new About());
  }

  private function _onExitClick( ):Void
  {
    native.system.System.exit();
  }
}