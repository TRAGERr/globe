params ["_ctrlGroup", ["_value", []]];

if (count _value > 0 && { _value select 0 isEqualType true || _value select 0 isEqualType 0 }) then 
{
    _value deleteAt 0;
};

if (_value isEqualTo []) then 
{
    private _cfg = configFile >> "CfgWorlds" >> worldName >> "RainParticles";
    _value = 
	[
        getText   (_cfg >> "rainDropTexture"),
        getNumber (_cfg >> "texDropCount"),
        getNumber (_cfg >> "minRainDensity"),
        getNumber (_cfg >> "effectRadius"),
        getNumber (_cfg >> "windCoef"),
        getNumber (_cfg >> "dropSpeed"),
        getNumber (_cfg >> "rndSpeed"),
        getNumber (_cfg >> "rndDir"),
        getNumber (_cfg >> "dropWidth"),
        getNumber (_cfg >> "dropHeight"),
        getArray  (_cfg >> "dropColor"),
        getNumber (_cfg >> "lumSunFront"),
        getNumber (_cfg >> "lumSunBack"),
        getNumber (_cfg >> "refractCoef"),
        getNumber (_cfg >> "refractSaturation"),
        false,
		false
    ];
};

private _ctrlCombo = _ctrlGroup controlsGroupCtrl 100;
private _ctrlCustom = _ctrlGroup controlsGroupCtrl 117;

private _texture 	= _value select 0;
private _cleanTex 	= if (_texture select [0,1] == "\") then 
{
	_texture select [1]
}
else
{
	_texture
};

private _foundIndex = -1;
for "_i" from 0 to ((lbSize _ctrlCombo) - 1) do
{
    private _data 		= _ctrlCombo lbData _i;
    private _cleanData 	= if (_data select [0,1] == "\") then 
	{
		_data select [1]
	}
	else
	{
		_data
	};
    if (_cleanData == _cleanTex) exitWith {_foundIndex = _i};
};

if (_foundIndex >= 0) then
{
    _ctrlCombo lbSetCurSel _foundIndex;
    _ctrlCustom ctrlSetText "";
}
else
{
    _ctrlCombo lbSetCurSel 0;
    _ctrlCustom ctrlSetText _texture;
};

{
    private _ctrl 	= _ctrlGroup controlsGroupCtrl (_x select 0);
    private _val 	= _value select (_x select 1);
    if (_ctrl isEqualType controlNull) then
	{
        if (_x select 2) then 
		{
			_ctrl cbSetChecked _val
		}
		else
		{
			_ctrl ctrlSetText str _val
		};
    }
}
forEach 
[
    [101, 1, false], 	[102, 2, false], 	[103, 3, false], 	[104, 4, false],
    [105, 5, false], 	[106, 6, false], 	[107, 7, false], 	[108, 8, false],
    [109, 9, false], 	[110, 10, false], 	[111, 11, false], 	[112, 12, false],
    [113, 13, false], 	[114, 14, false], 	[115, 15, true], 	[116, 16, true]
];