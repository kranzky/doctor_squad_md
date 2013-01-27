package com.squad.dr.tools;
import com.squad.dr.widgets.Widget;
import com.squad.dr.widgets.Button;
import org.flixel.FlxSprite;
import com.squad.dr.PubNub;

class Tool extends Widget
{
  private var _toolbutton: Button;

  //you can pass in a callback if you like, otherwise 'onToolClick' is the default
  public override function initialise(attributes:Dynamic)
  {
    super.initialise(attributes);
    var cb = attributes.callBack;
    if (cb == null)
      cb = onToolClick;

    _toolbutton = new Button(attributes.x, attributes.y, attributes.tool_name, cb);
    _toolbutton.setImageInfo(attributes.image_info); //.image_info.imagename, false, false, attributes.image_info.xsize, attributes.image_info.ysize);

    add(_toolbutton);
  }


  //default button callback if none is specified
  public function onToolClick()
  {
    //override this
  }

}
