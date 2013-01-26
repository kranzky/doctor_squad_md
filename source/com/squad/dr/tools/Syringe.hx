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

  public function new(widgetId, owned, canInteract, X, Y, drugs: Array<String>)
  {

    super(widgetId, owned, canInteract, X, Y, "assets/dr/tools/syringe.png", "Syringe");
    _drugNames = drugs;
    _drugButtons = new Array<Button>();
    var index = 0;
    _drugButtonsGroup = new FlxGroup();
    for (drugname in drugs)
    {
      var b = new Button(X, Y-index*20, drugname, 
        function(){onDrugButtonClick(drugname);}, canInteract); 
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
    trace("drug button clicked: " + drugname);
    toggleShowDrugs();
  }

  public override function onToolClick(): Void
  {
    trace("Clicked the syringe");
    toggleShowDrugs();
  }
}
