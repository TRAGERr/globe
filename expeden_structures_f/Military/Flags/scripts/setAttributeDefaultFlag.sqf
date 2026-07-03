
if (!is3DEN) exitWith {};
params["_object"];
if (isNull _object) exitWith {};

private _flagInit       = (getText (configfile >> 'CfgVehicles' >> (typeOf _object) >> "EventHandlers" >> "init"));
if (_flagTexture isEqualTo "") exitWith {};
private _flagInitPath   = (((_flagInit splitString " ") # 4) regexReplace ["'", ""]);
_this set3DENAttribute ["Flag_Property", (flagTexture _this)];