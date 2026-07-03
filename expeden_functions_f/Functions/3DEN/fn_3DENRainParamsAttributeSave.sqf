params ["_ctrlGroup"];
private _world = configFile >> "CfgWorlds" >> worldName >> "RainParticles";

private _fnc_getNumber = 
{
    params ["_idc", "_conf"];

    private _t = ctrlText (_ctrlGroup controlsGroupCtrl _idc);
    if (_t != "") exitWith 
	{
		parseNumber _t
	};
    getNumber (_world >> _conf)
};

private _tex = ctrlText (_ctrlGroup controlsGroupCtrl 117);
if (_tex == "") then 
{
    private _idx = lbCurSel (_ctrlGroup controlsGroupCtrl 100);
    _tex = if (_idx >= 0) then 
	{
		(_ctrlGroup controlsGroupCtrl 100) lbData _idx
	}
	else
	{
		getText (_world >> "rainDropTexture")
	};
};

private _colStr = ctrlText (_ctrlGroup controlsGroupCtrl 110);
private _col = getArray (_world >> "dropColor");
if (_col isEqualTo []) then 
{
	_col = [0.1,0.1,0.1,0.1]
};
if (_colStr != "") then 
{
    private _arr = (_colStr splitString "[] ," joinString ",") splitString ",";
    if (count _arr >= 3) then
	{
        _col = 
		[
			parseNumber (_arr select 0),
			parseNumber (_arr select 1),
			parseNumber (_arr select 2),
			if (count _arr > 3) then 
			{
				parseNumber (_arr select 3)
			} else {1}
		];
    };
};

[
    _tex,
    [101, "texDropCount"		] call _fnc_getNumber,
    [102, "minRainDensity"		] call _fnc_getNumber,
    [103, "effectRadius"		] call _fnc_getNumber,
    [104, "windCoef"			] call _fnc_getNumber,
    [105, "dropSpeed"			] call _fnc_getNumber,
    [106, "rndSpeed"			] call _fnc_getNumber,
    [107, "rndDir"				] call _fnc_getNumber,
    [108, "dropWidth"			] call _fnc_getNumber,
    [109, "dropHeight"			] call _fnc_getNumber,
    _col,
    [111, "lumSunFront"			] call _fnc_getNumber,
    [112, "lumSunBack"			] call _fnc_getNumber,
    [113, "refractCoef"			] call _fnc_getNumber,
    [114, "refractSaturation"	] call _fnc_getNumber,
    cbChecked 					(_ctrlGroup controlsGroupCtrl 115),
    cbChecked 					(_ctrlGroup controlsGroupCtrl 116)
]