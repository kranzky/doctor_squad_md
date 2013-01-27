package com.squad.dr;

import org.flixel.FlxState;

import com.squad.dr.widgets.Widget;
import com.squad.dr.widgets.Generator;
import com.squad.dr.tools.Scalpel;
import com.squad.dr.tools.Syringe;
import com.squad.dr.widgets.Clipboard;

class Spawner
{
  private static var _is_valid:Bool;
  public static var god(_get_god, null):Spawner;
  public function new():Void
  {
    if (!_is_valid) {
      throw "Don't create Spawner directly, silly. Get a room.";
    }
  }
  private static function _get_god():Spawner
  {
    if (god == null) {
      _is_valid = true;
      god = new Spawner();
      _is_valid = false;
    }
    return god;
  }

  private var _world:FlxState;
  private var _key:Int;

  public function oversee(world:FlxState)
  {
    _world = world;
    _key = PubNub.room.register({type: 'GOD'}, _process);
  }

  public function abandon(world:FlxState)
  {
    _world = null;
    PubNub.room.deregister(_key);
  }

  public function create(type, owner_id:Null<Int> = null, widget_id:Null<Int> = null) {
    if (owner_id == null) {
      owner_id = User.me.id;
    }
    if (widget_id == null) {
      widget_id = 1000000 + Std.random(1000000);
    }
    PubNub.room.send({
      type: 'GOD',
      action: 'spawn',
      data: type,
      ownerId: owner_id,
      widgetId: widget_id
    });
  }

  private function _process(message)
  {
    var type:String = message.data;
    var widget_id:Int = message.widgetId;
    var owner_id:Int = message.ownerId;
    switch(type) {
      case 'Generator':
        _world.add(new Generator(widget_id, owner_id));
      case 'Syringe':
        _world.add(new Syringe(widget_id, owner_id, 400,400, ["Adrenaline", "Ephidrine", "Paradoxamol"]));
      case 'Clipboard':
        _world.add(new Clipboard(widget_id, owner_id));
    }
  }

}
