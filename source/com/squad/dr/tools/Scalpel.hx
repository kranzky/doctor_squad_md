package com.squad.dr.tools;
import com.squad.dr.widgets.Button;
import com.squad.dr.PubNub;

class Scalpel extends Tool
{
  public function new(widgetId, ownerId, canInteract, X, Y)
  {
    super(widgetId, ownerId, X, Y, "assets/dr/tools/scalpel.png", "Scalpel");
  }

  public override function onToolClick(): Void
  {
    trace("Scalpel was clicked");
  }
}
