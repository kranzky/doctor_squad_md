package com.squad.dr.widgets;

import org.flixel.FlxSprite;
import org.flixel.FlxG;
import org.flixel.FlxButton;
import org.flixel.plugin.pxText.PxButton;

import com.squad.dr.PubNub;
import com.squad.dr.widgets.Widget;

class Generator extends Widget
{
    private var _darkness: FlxSprite;
    private var _button: Button;
    private var _power:Float = 30.0;
    private var _sendTimer:Float = 1.0;

    public function new ( widgetId, owned, canInteract )
    {
        trace("new generator");
        var x = 100;
        var y = 100;
        super( widgetId, owned, canInteract );
        _darkness = new FlxSprite(0, 0);
        _darkness.makeGraphic(FlxG.width, FlxG.height, 0xff000000); //colours are ARGB
        //_darkness.fill(0x0000ff);
        _darkness.blend = nme.display.BlendMode.SCREEN;

        _button = new Button(x, y, "Generator", buttonPushed, _canInteract);
        _button.loadGraphic( "assets/dr/square_button.png", false, false, 45, 45);
        _power = 30.0;
        add(_darkness);
        add(_button);
        updateState();
    }

    public override function message(action:String, data:String)
    {
        if (action == "power" && ! _owned)
        {
        _power = Std.parseFloat(data);
        trace("Generator recieved power " +_power);

        }
        updateState();
    }

    public override function update()
    {
        super.update();
        if (_power > 0)
        {
        _power = _power - (FlxG.elapsed*2);
        if (_power < 0)
            _power = 0.0;
        }
        if (_owned)
        {
        _sendTimer -= FlxG.elapsed;
        if(_sendTimer < 0.0)
        {
            _sendTimer += 1.0;
            _sendPowerLevel();
        }
        }
        updateState();
    }

    private function _sendPowerLevel( )
    {

        trace("Sending power " + _power);
        send( "power", "" + _power );
        updateState();
    }

    public function buttonPushed():Void
    {
        trace("Added power");
        _power += 1.0;
        if (_power > 30.0)
        _power = 30.0;
    }

    private function updateState():Void
    {
        var lightLevel = (_power / 25);
        if (lightLevel > 1.0)
        lightLevel = 1.0;
        var alpha = 1 - lightLevel;
        _darkness.alpha = alpha;
    }
}
