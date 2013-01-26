package com.squad.dr;

import nme.Lib;
import org.flixel.FlxGroup;
import org.flixel.plugin.pxText.PxButton;
import org.flixel.FlxText;
  
class Keypad extends FlxGroup
{ 
  private var _display:FlxText;
  private var _value:String = "";
  private var _callback:String -> Void;

  public function new(x, y, callback_)
  {
    _callback = callback_;
    super();
    trace("new keypad");
    _display = new FlxText(x, y, 300, "RARA");
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
          if (_value.length < 6)
          {
            _value += s;
            _updateUI();
          
            if (_value.length == 6)
            {
              trace("DONE: " + _value);
              if (_callback != null)
              {
                _callback( _value );
              }
            }
          }
        });
      button.loadGraphic( "assets/dr/square_button.png", false, false, 45, 45);
      add(button);
    }

    //add the button to the state draw list

    trace ("added keypad");
  }

  private function _updateUI()
  {
    if( _value == "")
    {
      _display.text = "Room Number";
    } 
    else
    {
      _display.text = _value;
    }
  }
}