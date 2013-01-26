package com.squad.dr.tools;
import com.squad.dr.widgets.Button;
import com.squad.dr.PubNub;

class Scalpel extends Tool
{
  public function new(widgetId, owned, canInteract, X, Y)
  {
    super(widgetId, owned, canInteract, X, Y, "assets/dr/tools/scalpel.png", "Scalpel");
  }

  public override function onToolClick(): Void
  {
    trace("Scalpel was clicked");
  }
}
