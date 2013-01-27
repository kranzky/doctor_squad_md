package com.squad.dr.tools;
import com.squad.dr.widgets.Widget;
import com.squad.dr.widgets.Button;
import org.flixel.FlxSprite;
import org.flixel.FlxGroup;
import com.squad.dr.PubNub;

class Tool extends Widget
{
  private var _toolbutton: Button;

  //you can pass in a callback if you like, otherwise 'onToolClick' is the default
  public function new(widgetId, ownerId: Int, X, Y, imagename: String, toolname: String, ?callBack)
  {
    //super(widgetId, owned, canInteract);
    super(widgetId, ownerId);
    var cb = callBack;
    if (cb == null)
      cb = onToolClick;

    _toolbutton = new Button(X, Y, toolname, cb);
    _toolbutton.loadGraphic(imagename, false, false);

    add(_toolbutton);
  }


  //default button callback if none is specified
  public function onToolClick()
  {
    //override this
  }

}
