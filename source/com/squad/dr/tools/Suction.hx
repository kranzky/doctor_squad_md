package com.squad.dr.tools;
import com.squad.dr.widgets.HoldButton;
import com.squad.dr.widgets.Widget;
import org.flixel.FlxSprite;
import org.flixel.FlxButton;
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
    attributes.image_info = Widget.IMAGEINFO_SQUAREBUTTON;
    attributes.tool_name = "Suction";
    _suctionTime = 5.0;
    super.initialise(attributes);
    _suctionButton = new HoldButton(attributes.x, attributes.y, attributes.tool_name, onClick);
    _suctionButton.setImageInfo(attributes.image_info);
    _suctionButton.setHoldAction(_suctionTime, suctionDone);
    var offx = _suctionButton.x + _suctionButton.width/4;
    var offy = _suctionButton.y + _suctionButton.height/4;
    _progbar = new FlxSprite(offx, offy);
    _progbar.makeGraphic(100, 30, 0x8800ff00);
    _progbarOuter =  new FlxSprite(offx-1, offy - 1);
    _progbarOuter.makeGraphic(103, 33, 0xff000000);
    add(_suctionButton);
    add(_progbarOuter);
    add(_progbar);
  }

  public override function update()
  {
    super.update();
    if (_suctionButton.status == FlxButton.NORMAL)
    {  
      _progbar.alpha = 0;
      _progbarOuter.alpha = 0;
    }
    else
    {
      _progbar.alpha = 1;
      _progbarOuter.alpha = 1;
    }
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
