package com.squad.dr;

import org.flixel.FlxG;

class Game
{
  var _frame:Float;
  var _timer:Float;
  var _state:String;

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
      _switch_to('Spawn');
    }
  }

  private function _state_spawn()
  {
    Spawner.god.create('Generator');
    _switch_to('Play');
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
