package com.squad.dr.widgets;

import org.flixel.FlxSprite;
import org.flixel.FlxG;
import org.flixel.FlxButton;
import org.flixel.plugin.pxText.PxButton;

import com.squad.dr.widgets.Widget;

class Generator extends Widget
{
    private var _darkness: FlxSprite;
    private var _button: Button;
    private var _power:Float = 30.0;
    private var _sendTimer:Float = 1.0;

    public override function initialise(attributes:Dynamic)
    {
        trace("new generator");
        var x = 100;
        var y = 100;
        _darkness = new FlxSprite(0, 0);
        _darkness.makeGraphic(FlxG.width, FlxG.height, 0xff000000); //colours are ARGB
        //_darkness.blend = nme.display.BlendMode.SCREEN;

        _button = new Button(x, y, "Generator", buttonPushed);
        _button.loadGraphic( "assets/dr/square_button.png", false, false, 45, 45);
        _power = 30.0;
        if (is_owner())
        {
          add(_button);
        }
        
        add(_darkness);
        updateState();

        PubNub.room.register({widgetId: _widgetId}, function(message) {
            switch(message.action) {
                case "power":
                    _updatePower(Std.parseFloat(message.data));
            }
        });
    }

    private function _updatePower(power):Void
    {
        if (!is_owner()) {
            _power = power;
            trace("Generator received power " + _power);
            updateState();
        }
    }

    public override function update()
    {
        super.update();
        if (_power > 0)
        {
            _power = _power - (FlxG.elapsed*2);
            if (_power < 0)
            {
                _power = 0.0;
            }
            if (is_owner()) {
                _sendTimer -= FlxG.elapsed;
                if(_sendTimer < 0.0)
                {
                    _sendTimer += 1.0;
                    _sendPowerLevel();
                }
            }
            updateState();
        }
    }

    private function _sendPowerLevel( )
    {
        trace("Sending power " + _power);
        PubNub.room.send({type: "generator", action: "power", widgetId: _widgetId, data: _power+""});
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
