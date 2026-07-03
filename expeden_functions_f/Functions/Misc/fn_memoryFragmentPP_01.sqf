/*
 *
 *	Author: Laws of War DLC dev team, modif. by Trager
 *
 *	Description:
 *		Original: "a3\missions_f_orange\campaign\functions\fn_memoryfragment.sqf"
 *
 *	Parameter(s):
 *	
 *
 *	Returns:
 *	n
 */
params [
	["_object",if !(isnil "this") then {this} else {objNull},[objNull]],
	["_effectData",[],[[],0]]
];

//--- Remove previous instance (used for debugging)
_effects = _object getVariable ["bis_effects",[]];
if (count _effects > 0) then {
	{deleteVehicle (_x select 0)} forEach _effects;
	{_object removeAction _x;} forEach (actionIDs _object);
};

#ifndef DEBUG
	if (_object isKindOf "Helper_Base_F") then {
		[_object, [0, "#(argb,8,8,3)color(0,0,0,0)"]] remoteExec ["setObjectTexture", 0, true];
	};
#endif

_effectData params [
	["_effectSize",1.5,[0]],
	["_effectOffset",[0,0,0],[[]]]
];

private _effect = createVehicle ["#particlesource",getPosATL _object,[],0,"can_collide"];
_effect setParticleParams [
#ifdef DEBUG
	["\A3\data_f\ParticleEffects\Universal\Universal",16,7,48,1],
#else
	["\A3\data_f\ParticleEffects\Universal\Refract",1,0,1,0],
#endif
	"",
	"Billboard",
	1,
	0.2,
	[0,0,0],
	[0,0,0],
	1,
	1.275,
	1,
	0,
	[_effectSize],
	[[0,0,0,0.0],[0,0,0,0.5],[0,0,0,0.0]],
	[1],
	0.1,
	0.05,
	"",
	"",
	"",
	0,
	false,
	0,
	[]
];
_effect setParticleRandom [
	0,
	[0,0,0],
	[0,0,0],
	1,
	0.1,
	[0,0,0,0],
	0,
	0,
	1,
	0
];
_effect setDropInterval 0.01;
_effects = [[_effect,0.01]];

//--- Create light
private _light = createVehicle ["#lightpoint",getPosATL _object,[],0,"can_collide"];
_light setlightambient [0.05,0.05,0.05]; 
_light setlightcolor [0.2,0.2,0.2];
_light setlightbrightness 200;
_light setLightAttenuation [0,100,100,0,0.1,1];
_light setlightdaylight true;
_effects pushback [_light,200];
	
//--- Sound
//_effects pushback ["Sound_MemoryFragment",getPosATL _object];
//v2
//private "_trigger";
//_trigger = createTrigger ["EmptyDetector",position _object];
//_trigger setTriggerStatements ["true", "", ""];
////_trigger setSoundEffect ["", "", "", "Sound_MemoryFragment"];
//v3
_effects = createSoundSource ["Sound_MemoryFragment", getPosATL _object, [], 0];

//--- Attach to object (if it's simulated)
if !(isnull group _object) then {
	{
		_x attachTo [_object,_offset];
	} forEach _effects;
};