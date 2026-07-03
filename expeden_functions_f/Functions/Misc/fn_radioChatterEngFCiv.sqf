params["_radio"];
if (isNull _radio) exitWith {};
if (!isServer) exitWith {_radio remoteExecCall ['expEden_fnc_radioChatterEngFCiv',2]};

private _soundSource = createSoundSource ["Sound_RadioChatterCIV_ATC_SFX", (getPosATL _radio), [], 0];
_soundSource attachTo [_radio];

_radio setVariable ["Globe_soundSource",_soundSource,isServer];