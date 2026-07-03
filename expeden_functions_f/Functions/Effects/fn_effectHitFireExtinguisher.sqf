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

if (_object getVariable ["Globe_FEHit", false]) exitWith {};

if (_direct && (_ammo # 0 > 4)) then
{
    _object setVariable ["Globe_FEHit", true, isServer];

    private _posModel = _object worldToModelVisual (ASLtoAGL _pos);

    private _particleSource = "#particlesource" createVehicleLocal [0,0,0];
    _particleSource attachTo [_object, [0,0,0]];
    _particleSource setParticleCircle [0, [0, 0, 0]];
    _particleSource setParticleRandom [0, [0, 0, 0], [0, 0, 0], 12, 0.25, [0, 0, 0, 1], 1, 0];
    _particleSource setDropInterval 0.05;

    private _actionTime		= time + 1.025;
    private _vectorModel	= (_object vectorWorldToModel _impactVector) vectorMultiply -1.7;
    private _localVector = _object vectorModelToWorldVisual _vectorModel;

    _object addForce [_localVector, _posModel];
    _object addTorque [0.4,0.4,1.3];
    _particleSource setParticleParams [["\a3\Data_f\ParticleEffects\Universal\Universal.p3d", 16, 12, 8, 0], "", "Billboard", 1, 1.5, [0,0,0.2], _localVector vectorMultiply -0.05, 2, 0.1, 0.8, 18, [0.5, 3, 6], [[1, 1, 1, 0.9], [1, 1, 1, 0.4], [1, 1, 1, 0]], [0.08, 0.7, 0.1], 0.1, 0, "", "", _object];

    playSound3D ["a3\sounds_f_orange\arsenal\explosives\clusterbomb\uxo_exp_01.wss", _object, false, getPosASL _object, 1.73, 2, 130, 0, (!isServer)];
    playSound3D ["a3\sounds_f_orange\arsenal\explosives\debris_dust_cloud_light.wss", _object, false, getPosASL _object, 1.2, 2, 80, 0, (!isServer)];

    waitUntil {time >= _actionTime};

    deleteVehicle _particleSource;
};