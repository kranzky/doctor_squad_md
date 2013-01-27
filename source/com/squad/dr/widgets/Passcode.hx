package com.squad.dr.widgets;

import org.flixel.FlxSprite;

import com.squad.dr.widgets.Widget;
import com.squad.dr.Keypad;
import com.squad.dr.PubNub;

class Passcode extends Widget
{
    public override function initialise(attributes:Dynamic)
    {
      trace("new passcode");

      //add the entry keypad
      var keypad = new Keypad(attributes.x, attributes.y, function(code) {
        PubNub.room.send({type: "tool", action: "passcode", data: code});
        }, "SECURITY CODE");

      add(keypad);
    }
}
