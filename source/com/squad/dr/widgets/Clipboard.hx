package com.squad.dr.widgets;

import org.flixel.FlxSprite;
import org.flixel.FlxG;
import org.flixel.FlxText;

import com.squad.dr.PubNub;
import com.squad.dr.widgets.Widget;

typedef Step = {
  var message : String;
  var action  : String;
  var data    : String;
}

class Clipboard extends Widget
{
  private var _steps:Array<Step>;
  private var _currentStep:Int=0;
  private var _messageLabel:FlxText;
  private var _finished:Bool=false;

  public override function initialise()
  {
    _steps = new Array<Step>();

    var step = {
      message: "Inject Adrenaline",
      action:  "syringe",
      data:    "Adrenaline"
    }
    _steps.push(step);

    step = {
      message: "Inject Ephidrine",
      action:  "syringe",
      data:    "Ephidrine"
    }
    _steps.push(step);

    // TODO deregister callback
    PubNub.room.register({type: "tool"}, function(message) {
      trace( "message" );
      trace( message );
      trace( "_steps[_currentStep]" );
      trace( _steps[_currentStep] );
      if (message.action == _steps[_currentStep].action &&
          _steps[_currentStep].data == "" || _steps[_currentStep].data == message.data )
      { 
        trace("Good Job!");
        _stepComplete();
      }
    });
    _messageLabel = new FlxText(0, 0, 4800, "Your tasklist..." );
    _messageLabel.size = 12;
    add(_messageLabel);

    _updateUI();
  }

  
  private function _stepComplete() {
    PubNub.room.send({type: "clipboard", action: "stepcomplete", widgetId: _widgetId, data: _steps[_currentStep].message});
    if (_steps.length > _currentStep+1) {
      _currentStep += 1;
    } else {
      PubNub.room.send({type: "clipboard", action: "complete", widgetId: _widgetId});
      _finished = true;
    }
    _updateUI();
  }

  private function _updateUI()
  {
    if( _finished )
      _messageLabel.text = "All done good job!";
    else
      _messageLabel.text = _steps[_currentStep].message;
  }

  public override function update()
  {
    super.update();
  }

}
