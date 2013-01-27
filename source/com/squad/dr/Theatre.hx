package com.squad.dr;

import com.squad.dr.Game;

import org.flixel.FlxSprite;
import org.flixel.FlxG;
import org.flixel.FlxText;
import org.flixel.FlxState;
import org.flixel.FlxSprite;

class Theatre extends FlxState
{
  static var _game:Game;
  override public function create():Void
  {
    var _background = new FlxSprite(0, 0);
    _background.makeGraphic(FlxG.width, FlxG.height, 0xffaabbee); //colours are ARGB
    add(_background);
    Spawner.god.oversee(this);
    _game = new Game();
  }

  override public function update():Void
  {
    PubNub.room.pump();
    _game.update();
    Spawner.god.update();
    super.update();
  }

  override public function destroy():Void
  {
    Spawner.god.abandon();
    super.destroy();
  }
}

