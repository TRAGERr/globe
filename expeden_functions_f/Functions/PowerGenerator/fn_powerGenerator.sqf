params ["_object"];

private _sound = "SoundSetSource_Sfx_PowerGenerator_Forcer_01" createVehicle [0,0,0];

_object setVariable ["Globe_powerGenerator_objects", [_sound]];

_sound attachTo [_object,[0,-1,0]];