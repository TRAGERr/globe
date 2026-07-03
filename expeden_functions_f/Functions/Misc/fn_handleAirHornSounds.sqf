params ["_airHorn", objNull];
if (isNull _airHorn) exitWith {};

format ["playSound3D ['a3\sounds_f\weapons\horns\truck_horn_%1.wss', _airHorn, false, getPosASL _airHorn, 5, 1 + (random 0.4), 600, 0, true]", selectRandom [1,2,4]];





playSound3D [format["'a3\sounds_f\weapons\horns\truck_horn_%1.wss'", selectRandom [1,2,4]], _airHorn, false, getPosASL _airHorn, 5, 1 + (random 0.4), 600, 0, true];