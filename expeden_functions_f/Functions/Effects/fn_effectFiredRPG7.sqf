params 
[
	["_unit",		objNull,[objNull]],
	["_weapon",		"",		[""]],
	["_muzzle",		"",		[""]],
	["_mode",		"",		[""]],
	["_ammo",		"",		[""]],
	["_magazine",	"",		[""]],
	["_projectile",	objNull,[objNull]]
];

waitUntil {_projectile distance _unit >= 14 && !isNull _projectile};
if (isNull _projectile) exitWith {};

playSound3D 
[
	"a3\sounds_f_tank\arsenal\weapons\launchers\vorona\" + selectRandom
	[
		"vorona_closeshot_01.wss",
		"vorona_closeshot_02.wss",
		"vorona_closeshot_03.wss",
		"vorona_closeshot_04.wss"
	],
	_projectile,
	false,
	getPosASL _projectile,
	5,
	1,
	200,
	0,
	true
];

private _source = "#particlesource" createVehicleLocal getPosATL _projectile;
_source setParticleClass "AutoCannonFired";
sleep 0.1;
deleteVehicle _source;