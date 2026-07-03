params["_object"];
if (!alive _object) exitWith {};

private _sparksEffect = createVehicle ["#particlesource", position _object, [], 0, "NONE"];
private _sparksSound = createSoundSource ["Sound_SparklesWreck2", position _object, [], 0];
private _smokeEffect = createVehicle ["#particlesource", position _object, [], 0, "NONE"];
private _smokeSound = createSoundSource ["Sound_SmokeWreck1", position _object, [], 0];

{
	_x attachTo [_object, [0,0.2,0.2]]
} forEach [_sparksEffect, _sparksSound, _smokeEffect, _smokeSound];

_sparksEffect setParticleClass "AvionicsSparks";
_smokeEffect setParticleClass "AvionicsSmoke";

_object setDamage 1;

sleep 1.5;

deleteVehicle [_sparksEffect, _sparksSound];