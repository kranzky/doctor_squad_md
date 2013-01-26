package com.squad.dr.tools;
import com.squad.dr.widgets.Widget;
import com.squad.dr.widgets.Button;
import org.flixel.FlxSprite;
import org.flixel.FlxG;
import org.flixel.FlxGroup;


class Toolbar extends FlxGroup
{

  private static var _instance : Toolbar;

  private function new()
  {
    super();
  }

  public static function getInstance() : Toolbar
  {
    if (_instance == null)
      _instance = new Toolbar();
    return _instance;
  }

  public function addTool(tool: Tool) : Void
  {
    add(tool);
    resize();
  }

  public function resize() : Void
  {
    var index = 0;
    if (this.length > 0)
    {
      for (t in members)
      {
        var tool : Tool;
        tool = cast(t, Tool);

        //tool.moveTo(cast(FlxG.width * index/ this.length, Int), FlxG.height-50);
        tool.moveTo(100, 100);
        index++;
      }
    }
  }

}
