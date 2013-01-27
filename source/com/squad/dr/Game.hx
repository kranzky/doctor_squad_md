package com.squad.dr;

import com.squad.dr.Spawner;
import com.squad.dr.User;
import org.flixel.FlxG;

class Game
{
  var _frame:Float;
  var _timer:Float;
  var _state:String;
  var _spawn_index:Int = 0;

  private static var _steps:Array<Array<String>> = [
        ["Need Ephidrine Stat!", "syringe", "Ephidrine"],
        ["Inject Paradoxamol!", "syringe", "Paradoxamol"],
        ["Need Adrenaline Stat!", "syringe", "Adrenaline"],
        ["Incision needed - cut him now!!", "scalpel", ""],
        ["Bloodspurt! I need suction!", "suction", "complete"],
        ["Security Clearance 800813", "passcode", "800813"],
        ["Security Clearance 776776", "passcode", "776776"],
        ["Security Clearance 123456", "passcode", "123456"],
        ["CLEAR!!!!!!!!!", "shock", ""]
      ];

  public function new()
  {
    _frame = 0.0;
    _switch_to("Start");
  }

  public function update()
  {
    var elapsed = FlxG.elapsed;
    _frame += elapsed;
    _timer += elapsed;
    switch(_state) {
      case "Start":
        _state_start();
      case "Spawn":
        _state_spawn();
      case "Play":
        _state_play();
    }
  }

  private function _state_start()
  {
    if (_timer > 2.0) {
      _spawn_index = 0;
      _switch_to('Spawn');
    }
  }

  private function _state_spawn()
  {
    if (User.me.is_boss) {
      if (_timer > 0.2) {
        if (!_spawn_something()) {
          _switch_to('Play');
        }
      }
    } else {
      _switch_to('Play');
    }
  }

  private function _spawn_something():Bool
  {
    switch(_spawn_index) {
      case 0:
        Spawner.god.create('Generator', null, null, {});
          //x: 400,
          //y: 300,
          //local: false
          //});
      case 1:
        Spawner.god.create('Suction', null, null, {
          x: 0,
          y: 200,
          local: true
        });
      case 2:
        Spawner.god.create('Scalpel', User.randomPlayer(), null, {
          x: 200,
          y: 200,
          local: true
        });
      case 3:
        Spawner.god.create('Syringe', User.randomPlayer(), null, {
          x: 400,
          y: 450,
          drugs: ["Adrenaline", "Ephidrine", "Paradoxamol"],
          local: true
        });
      case 4:
        Spawner.god.create('Passcode', User.randomPlayer(), null, {
          x: 250,
          y: 550,
          local: true
        });
      case 5:
        Spawner.god.create('Shock', User.randomPlayer(), null, {
          x: 400,
          y: 200,
          local: true
        });
      default:
        var index = _spawn_index - 6;
        if (index >= User.me.team.length) {
          return false;
        }
        var userId = User.me.team[index];
        Spawner.god.create('Clipboard', userId, null, {
          steps: [ 
            _randomStep(),
            _randomStep(),
            _randomStep(),
            _randomStep(),
            _randomStep(),
            _randomStep(),
            _randomStep(),
            _randomStep(),
            _randomStep(),
            _randomStep(),
            _randomStep(),
            _randomStep(),
            _randomStep(),
            _randomStep(),
            _randomStep(),
            _randomStep(),
            ],
          local: true
        }); 
    }
    _spawn_index += 1;
    return true;
  }

  private function _randomStep()
  {
    var i = Std.int(Math.random() * (_steps.length - 1));
    return _steps[i];
  }

  private function _state_play()
  {
  }

  private function _switch_to(state)
  {
    trace("GAME STATE : " + state);
    _timer = 0.0;
    _state = state;
  }
}
