package com.squad.dr.tools;
import com.squad.dr.widgets.Button;
import com.squad.dr.PubNub;
import org.flixel.FlxGroup;

class Syringe extends Tool
{
  private var _drugButtonsGroup: FlxGroup;
  private var _drugButtons: Array<Button>;
  private var _drugNames: Array<String>;
  private var _showDrugs: Bool;

  public override function initialise(attributes:Dynamic)
  {
    attributes.image_name = "assets/dr/tools/syringe.png";
    attributes.tool_name = "Syringe";
    super.initialise(attributes);
    _drugNames = attributes.drugs;
    _drugButtons = new Array<Button>();
    var index = 0;
    _drugButtonsGroup = new FlxGroup();
    for (drugname in _drugNames)
    {
      var b = new Button(attributes.X, attributes.Y-index*20-20, drugname,
        function(){onDrugButtonClick(drugname);}, _canInteract);
      _drugButtons.push(b);
      _drugButtonsGroup.add(b);
      index ++;
    }
    _showDrugs = true;
    add(_drugButtonsGroup);
    toggleShowDrugs();
  }

  private function toggleShowDrugs()
  {
    _showDrugs = !_showDrugs;
    if (_showDrugs)
    {
      add(_drugButtonsGroup);
    }
    else
    {
      remove(_drugButtonsGroup);
    }
  }

  public function onDrugButtonClick(drugname:String): Void
  {
    if (is_owner()) {
      trace("drug button clicked: " + drugname);
      PubNub.room.send({type: "tool", action: "syringe", widgetId: _widgetId, data: drugname});
      toggleShowDrugs();
    }
  }

  public override function onToolClick(): Void
  {
    if (is_owner()) {
      trace("Clicked the syringe");
      toggleShowDrugs();
    }
  }
}
