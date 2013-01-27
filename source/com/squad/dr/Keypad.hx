package com.squad.dr;

import nme.Lib;
import org.flixel.FlxGroup;
import org.flixel.plugin.pxText.PxButton;
import org.flixel.FlxText;
import org.flixel.FlxSound;


class Keypad extends FlxGroup
{ 
  private var _display:FlxText;
  private var _value:String = "";
  private var _callback:String -> Void;
  private var _prompt:String;
  private var _numDigits:Int;

  public function new(x, y, callback_, prompt, numDigits=6)
  {
    _callback = callback_;
    _prompt = prompt;
    _numDigits = numDigits;
    super();
    DrSquad.log("new keypad");
    _display = new FlxText(x, y, 300, _prompt);
    _display.setColor( 0xffff00 );
    _display.size = 18;
    _updateUI();
    add(_display);

    var button;
    for (i in 0...10)
    {
      var c = i+1;
      var ii = 0;
      var s = "";
      if(c <= 9)
      {
        s = c + "";
      }
      else if(c == 10)
      {
        s = "0";
        ii = 1;
      }
      button = new PxButton(x+((i+ii)%3)*45, y+50+Std.int(i/3)*45, s, 
        function() {
          
          //var beep = new FlxSound();
          //beep.loadEmbedded("Beep", false, false);
          //beep.play();

          if (_value.length < _numDigits)
          {
            _value += s;
          
            if (_value.length == _numDigits)
            {
              trace("DONE: " + _value);
              if (_callback != null)
              {
                _callback( _value );
              }
              _value = "";
            }
            _updateUI();
          }
        });
      button.loadGraphic( "assets/dr/square_button.png", false, false, 45, 45);
      add(button);
    }

    //add the button to the state draw list

    DrSquad.log("added keypad");
  }

  private function _updateUI()
  {
    if( _value == "")
    {
      _display.text = _prompt;
    } 
    else
    {
      _display.text = _value;
    }
  }
}