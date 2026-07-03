params
[
    ["_object",objNull,[objNull]]
];
if (isNull _object) exitWith {};

if (!isServer) exitWith 
{
    _object remoteExecCall ["expEden_fnc_respawnRallySoundFX", 2];
};

private _soundSource = createVehicle ["SoundSetSource_Sfx_EmptyAir", getPosATL _object, [], 0];
_soundSource attachTo [_object, [0,-0.6,0]];

_object setVariable ["Globe_respRlySFX",_soundSource,isServer];