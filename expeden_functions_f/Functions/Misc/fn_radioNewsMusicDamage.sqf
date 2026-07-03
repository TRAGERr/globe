params["_radio"];
if (!alive _radio) exitWith {};

private _sparksEffect 	= createVehicle		["#particlesource", 		getPosATL _radio, [], 0, "NONE"];
private _sparksSound 	= createSoundSource ["Sound_SparklesWreck1", 	getPosATL _radio, [], 0];
private _smokeEffect 	= createVehicle 	["#particlesource", 		getPosATL _radio, [], 0, "NONE"];
private _smokeSound 	= createSoundSource ["Sound_SmokeWreck1", 		getPosATL _radio, [], 0];
{
	_x attachTo [_radio, [0,0,0]]
} forEach [_sparksEffect, _sparksSound, _smokeEffect, _smokeSound];

_sparksEffect setParticleClass "AvionicsSparks";
_smokeEffect setParticleClass "AvionicsSmoke";

sleep 0.25;

deleteVehicle _sparksEffect;
_radio setDamage 1;

sleep 1.25;

deleteVehicle _sparksSound;