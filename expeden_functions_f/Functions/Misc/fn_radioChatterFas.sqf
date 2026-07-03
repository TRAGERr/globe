params["_militartyRadio"];
if (isNull _militartyRadio) exitWith {};
if (!isServer) exitWith {_militartyRadio remoteExecCall ['expEden_fnc_radioChatterFas',2]};

private _soundSource = createSoundSource ["Sound_RadioChatterCSAT_farsi_SFX", (getPosATL _militartyRadio), [], 0];
_soundSource attachTo [_militartyRadio];

_militartyRadio setVariable ["Globe_soundSource",_soundSource,isServer];