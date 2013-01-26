package com.squad.dr;

import com.squad.dr.Game;

import org.flixel.FlxSprite;
import org.flixel.FlxG;
import org.flixel.FlxText;
import org.flixel.FlxState;

class Theatre extends FlxState
{
  static var _game:Game;
  override public function create():Void
  {
    Spawner.god.oversee(this);
    _game = new Game();
  }

  override public function update():Void
  {
    PubNub.room.pump();
    _game.update();
    super.update();
  }

  override public function destroy():Void
  {
    Spawner.god.abandon(this);
    super.destroy();
  }
}

