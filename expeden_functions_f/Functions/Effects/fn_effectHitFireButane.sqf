(_this # 0) params
[
	"_object",
	"",
	"",
	"_pos",
	"_velocity",
	"_selection",
	"_ammo",
	"_impactVector",
	"",
	"",
	"_direct"
];

private _posModel = _object worldToModelVisual (ASLtoAGL _pos);

private _particleSource = "#particlesource" createVehicleLocal [0,0,0];
_particleSource attachTo [_object, [0,0,0]];
_particleSource setParticleClass "ExhaustSmokeOnWater";

private _actionTime		= time + 0.25;
private _vectorModel	= (_object vectorWorldToModel _impactVector) vectorMultiply -1.7;
private _localVector = _object vectorModelToWorldVisual _vectorModel;

_object addForce [_localVector, _posModel];
_object addTorque [0.4,0.4,1.3];

playSound3D ["a3\sounds_f_orange\arsenal\explosives\clusterbomb\uxo_exp_01.wss", _object, false, getPosASL _object, 1.73, 2, 130, 0, (!isServer)];
playSound3D ["a3\sounds_f_orange\arsenal\explosives\debris_dust_cloud_light.wss", _object, false, getPosASL _object, 1.2, 2, 80, 0, (!isServer)];

// waitUntil {time >= _actionTime};

// deleteVehicle _particleSource;