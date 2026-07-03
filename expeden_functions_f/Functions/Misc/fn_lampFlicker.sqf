params
[
    "_object",
    "_mode"
];
if (is3DEN) exitWith {};

switch _mode do 
{

    case "fast":
    {
        _object spawn
        {
            waitUntil {time > 0};

            while {true} do 
            {
                if (    (!alive _this)     ||      (isNull _this)       ||      (_this getHitPointDamage "#light_1_hitpoint" isEqualTo 1)         ) exitWith {};

                _this switchLight "ON";
                playSound3D ["a3\sounds_f\arsenal\sfx\shared\zeroing_knob_tick_plastic.wss", _this, false, (_this modelToWorldWorld (_this selectionPosition "light_1_pos")), 0.17, 1, 20, 0, true];

                sleep (0.075 + random 0.25);

                _this switchLight "OFF";
                playSound3D ["a3\sounds_f\arsenal\sfx\shared\zeroing_knob_tick_metal.wss", _this, false, (_this modelToWorldWorld (_this selectionPosition "light_1_pos")), 0.17, 1, 20, 0, true];

                sleep (0.075 + random 0.15);
            };
        };
    };

    case "contact":
    {
        _object spawn
        {
            waitUntil {time > 0};

            while {true} do 
            {
                if (    (!alive _this)     ||      (isNull _this)       ||      (_this getHitPointDamage "#light_1_hitpoint" isEqualTo 1)         ) exitWith {};

                _this switchLight "ON";
                private _sound = _this say3D ["Globe_EB",20];
                _sound attachTo [_this, [0,0,0], "light_1_pos"];

                sleep (0.8 + random 0.4);

                deleteVehicle _sound;
                _this switchLight "OFF";

                sleep (0.075 + random 0.2);
            };
        };
    };

    default{};

};





