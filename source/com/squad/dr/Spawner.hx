package com.squad.dr;

import org.flixel.FlxState;

import com.squad.dr.widgets.Widget;
import com.squad.dr.widgets.Generator;
import com.squad.dr.tools.Scalpel;
import com.squad.dr.tools.Syringe;
import com.squad.dr.tools.Shock;
import com.squad.dr.tools.Suction;
import com.squad.dr.widgets.Clipboard;
import com.squad.dr.widgets.Passcode;

import com.squad.dr.Theatre;

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

  private var _world:Theatre;
  private var _listen_key:Int;

  public function oversee(world:Theatre)
  {
    _world = world;
    PubNub.room.deregister(_listen_key);
    _listen_key = PubNub.room.register({type: 'GOD'});
  }

  public function abandon()
  {
    _world = null;
    PubNub.room.deregister(_listen_key);
  }

  public function create(type, owner_id:Null<Int>, widget_id:Null<Int>, attributes) {
    trace( "ownerId: " + owner_id );
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
      attributes: attributes,
      ownerId: owner_id,
      widgetId: widget_id
    });
  }

  public function update()
  {
    PubNub.room.consume(_listen_key, _process);
  }

  private function _process(message)
  {
    var type:String = message.data;
    var widget_id:Int = message.widgetId;
    var owner_id:Int = message.ownerId;
    var attributes = message.attributes;
    if (attributes.local == true && owner_id != User.me.id) {
      return;
    }
    switch(type) {
      case 'Generator':
        _world.fore.add(new Generator(widget_id, owner_id, attributes));
      case 'Scalpel':
        _world.back.add(new Scalpel(widget_id, owner_id, attributes));
      case 'Syringe':
        _world.back.add(new Syringe(widget_id, owner_id, attributes));
      case 'Clipboard':
        _world.mid.add(new Clipboard(widget_id, owner_id, attributes));
      case 'Passcode':
        _world.back.add(new Passcode(widget_id, owner_id, attributes));
      case 'Shock':
        _world.back.add(new Shock(widget_id, owner_id, attributes));
      case 'Suction':
        _world.back.add(new Suction(widget_id, owner_id, attributes));
    }
  }

}
