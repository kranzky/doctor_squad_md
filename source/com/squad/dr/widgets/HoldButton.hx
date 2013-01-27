package com.squad.dr.widgets;

import org.flixel.FlxButton;
import com.squad.dr.widgets.Button;
import com.squad.dr.PubNub;
import org.flixel.FlxG;

class HoldButton extends Button
{
  private var _heldTime = 0.0;
  private var _complete = false;
  private var _targetTime = 0.0;
  private var _heldcallback = null;

  public function setHoldAction(num, cb)
  {
    _targetTime = num;
    _heldcallback = cb;
  }
  
  public function resetButton()
  {
    _heldTime = 0.0;
    _complete = false;
  }

  public override function update()
  {
    super.update();
    if ( status == FlxButton.PRESSED)
    {
      if (!_complete)
        _heldTime += FlxG.elapsed;
    }
    else
      resetButton();

    if (_heldTime >= _targetTime)
    {
      if (!_complete)
      {
        _complete = true;
        if (_heldcallback != null)
        {
          _heldcallback();
        }
      }
    }
  }

  public function getHeldTime()
  {
    return _heldTime;
  }
}
