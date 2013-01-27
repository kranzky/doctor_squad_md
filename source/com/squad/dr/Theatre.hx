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

  override public function create():Void
  {
    #if !neko
    FlxG.bgColor = 0xffaabbee;
    #else
    FlxG.bgColor = {rgb: 0xaabbee, a: 0xff};
    #end

    fore = new FlxGroup();
    mid  = new FlxGroup();
    back = new FlxGroup();

    add(back);
    add(mid);
    add(fore);

    Spawner.god.oversee(this);
    _game = new Game();

    var heartbeat = new Heartbeat(0,0);
    back.add(heartbeat);
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

