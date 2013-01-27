package com.squad.dr.tools;
import com.squad.dr.widgets.Button;
import com.squad.dr.widgets.Widget;
import com.squad.dr.PubNub;

class Scalpel extends Tool
{
  public override function initialise(attributes:Dynamic)
  {
    //attributes.image_name = "assets/dr/tools/scalpel.png";
    attributes.image_info = Widget.IMAGEINFO_SQUAREBUTTON;
    attributes.tool_name = "Scalpel";
    super.initialise(attributes);
  }

  public override function onToolClick(): Void
  {
    DrSquad.log("Scalpel was clicked");
    PubNub.room.send({type: "tool", action: "scalpel", widgetId: _widgetId, data:""});
  }
}
