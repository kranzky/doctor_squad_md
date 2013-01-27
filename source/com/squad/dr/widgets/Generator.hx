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
    private var _listen_key:Int = 0;

    public override function initialise(attributes:Dynamic)
    {
        DrSquad.log("new generator");
        //var x = 100;
        //var y = 100;
        //var x = 75;
        //var y = 550;
        _darkness = new FlxSprite(0, 0);
        _darkness.makeGraphic(FlxG.width, FlxG.height, 0xff000000); //colours are ARGB
        //_darkness.blend = nme.display.BlendMode.SCREEN;

        attributes.x = 40;
        attributes.y = 600;
        _button = new Button(attributes.x, attributes.y, "Generator", buttonPushed);
        //_button.loadGraphic( "assets/dr/square_button.png", false, false, 45, 45);
        //_button.loadGraphic( "assets/dr/Buttons-11.png", false, false, 45, 45);
        _power = 30.0;
        if (is_owner())
        {
          add(_button);
        }

        add(_darkness);
        updateState();

        _listen_key = PubNub.room.register({widgetId: _widgetId});
    }

    private function _updatePower(power):Void
    {
        if (!is_owner()) {
            _power = power;
            DrSquad.log("Generator received power " + _power);
            updateState();
        }
    }

    public override function update()
    {
        super.update();
        PubNub.room.consume(_listen_key, function(message) {
            switch(message.action) {
                case "power":
                    _updatePower(Std.parseFloat(message.data));
            }
        });
        if (_power > 0)
        {
            _power = _power - (FlxG.elapsed);
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

    public override function destroy()
    {
        PubNub.room.deregister(_listen_key);
        super.destroy();
    }

    private function _sendPowerLevel( )
    {
        DrSquad.log("Sending power " + _power);
        PubNub.room.send({type: "generator", action: "power", widgetId: _widgetId, data: _power+""});
        updateState();
    }

    public function buttonPushed():Void
    {
        DrSquad.log("Added power");
        _power += 1.0;
        if (_power > 30.0)
        _power = 30.0;
    }

    private function updateState():Void
    {
        var lightLevel = (_power / 25);
        if (lightLevel > 1.0)
        lightLevel = 1.0;
        var alpha = 0.9 - (lightLevel*0.9);
        _darkness.alpha = alpha;
    }
}
