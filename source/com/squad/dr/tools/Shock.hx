package com.squad.dr.tools;

import com.squad.dr.widgets.Button;
import com.squad.dr.PubNub;

class Shock extends Tool
{
  public override function initialise(attributes:Dynamic)
  {
    attributes.image_name = "assets/dr/tools/scrub_brush.png";
    attributes.tool_name =  "Shock";
    super.initialise(attributes);
  }

  public override function onToolClick(): Void
  {
    DrSquad.log("Shock was clicked");
    PubNub.room.send({type: "tool", action: "shock", widgetId: _widgetId, data:""});
  }
}
