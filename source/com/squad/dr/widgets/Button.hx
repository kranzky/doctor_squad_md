package com.squad.dr.widgets;

import org.flixel.FlxButton;
import org.flixel.FlxSound;
import com.squad.dr.PubNub;

class Button extends FlxButton
{

  public static var STYLE_SQUARE = 0;
  public static var STYLE_LONG = 1;
  public static var STYLE_ROUND = 2;
  private var _buttoncallback:Void -> Void;

  public function new(x, y, labeltext, callbackFunction, ?style = 0)
  {
    DrSquad.log("button instantiated");
    super(x, y, labeltext, _pushed);
    switch(style)
    {
      case STYLE_SQUARE:
        setImageInfo(Widget.IMAGEINFO_SQUAREBUTTON);
        //loadGraphic("assets/dr/Buttons-11.png", false, false, 255, 255);
      case STYLE_LONG:
        setImageInfo(Widget.IMAGEINFO_LONGBUTTON);
        //loadGraphic("assets/dr/Buttons-12.png", false, false, 255, 767);
      case STYLE_ROUND:
        setImageInfo(Widget.IMAGEINFO_ROUNDBUTTON);
        //loadGraphic("assets/dr/Buttons-10.png", false, false, 255, 255);
    }
    
    DrSquad.log("new button");
    _buttoncallback = callbackFunction;
   
   onDown = onHeld; 
  }

  public function setImageInfo(imageinfo)
  {
    loadGraphic(imageinfo.imagename, true, false, imageinfo.xsize, imageinfo.ysize);
    scale.x = scale.y = 0.5;
    setLabelSane(); 
  }

  public function setLabelSane()
  {
    labelOffset.x = 0; //width/2;
    labelOffset.y = height/2;
    resetHelpers();
    //label.size = 12;
    label.scale.x = label.scale.y = 2.0;

  }

  /*
  public override function update()
  {
    super.update();
  }
  */
  public function _pushed()
  {
    DrSquad.log("button callback fired");

    //var beep = new FlxSound();
    //beep.loadEmbedded("Beep", false, false);
    //beep.play();

    updateState();
    if (_buttoncallback != null)
      _buttoncallback();
  }

  public function onHeld()
  {
    //override if you care about when the button is being held down
  }

  private function updateState():Void
  {
    DrSquad.log("Button was pushed!");
  }
  
}
