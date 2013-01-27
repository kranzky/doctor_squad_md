package com.squad.dr;

import com.squad.dr.Game;
import com.squad.dr.widgets.Heartbeat;

import org.flixel.FlxSprite;
import org.flixel.FlxG;
import org.flixel.FlxText;
import org.flixel.FlxState;
import org.flixel.FlxSprite;
import org.flixel.FlxGroup;

class Theatre extends FlxState
{
  static var _game:Game;
  public var fore:FlxGroup;
  public var mid:FlxGroup;
  public var back:FlxGroup;
  public var _heartbeat:Heartbeat;

  override public function create():Void
  {
    var background:FlxSprite = new FlxSprite(0,0, "assets/dr/Background3a.png");
    background.scale.x = background.scale.y = 0.5;
    add(background);

    fore = new FlxGroup();
    mid  = new FlxGroup();
    back = new FlxGroup();

    add(back);
    add(mid);
    add(fore);

    Spawner.god.oversee(this);
    _game = new Game();

    _heartbeat = new Heartbeat(0,0);
    back.add(_heartbeat);
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

