package com.squad.dr.tools;
import com.squad.dr.widgets.HoldButton;
import com.squad.dr.widgets.Widget;
import org.flixel.FlxSprite;
import com.squad.dr.PubNub;

class Suction extends Widget
{
  private var _suctionButton: HoldButton;
  private var _labelBase = "Suction";
  private var _suctionTime = 1.0;
  private var _progbar:FlxSprite;
  private var _progbarOuter: FlxSprite;

  public override function initialise(attributes: Dynamic)
  {
    attributes.image_name = "assets/dr/hold_button.png";
    attributes.tool_name = "Suction";
    _suctionTime = 5.0;
    super.initialise(attributes);
    _suctionButton = new HoldButton(attributes.x, attributes.y, attributes.tool_name, onClick);
    _suctionButton.loadGraphic(attributes.image_name, false, false, 45, 45);
    _suctionButton.setHoldAction(_suctionTime, suctionDone);
    _progbar = new FlxSprite(attributes.x, attributes.y - 50);
    _progbar.makeGraphic(100, 30, 0x8800ff00);
    _progbarOuter =  new FlxSprite(attributes.x-1, attributes.y-51);
    _progbarOuter.makeGraphic(103, 33, 0xff000000);
    add(_suctionButton);
    add(_progbarOuter);
    add(_progbar);
  }

  public override function update()
  {
    super.update();
    var percent = _suctionButton.getHeldTime() * 100.0 / _suctionTime;
    _progbar.scale.x = percent/100.0;
    //_suctionButton.label.text = _labelBase + "(" + percent + ")";
  }

  public function suctionDone()
  {
      trace("The suction was complete (client side)");
      PubNub.room.send({type: "tool", action: "suction", widgetId: _widgetId, data: "complete"});
  }

  public function onClick(): Void
  {
    trace("hold button clicked??");
  }
}
