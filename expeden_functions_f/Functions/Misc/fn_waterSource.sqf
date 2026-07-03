params["_object"];
if (isNull _object) exitWith {};
if !(isNull (_object getVariable "Globe_waterSource")) exitWith {};

private _particle = "#particleSource" createVehicleLocal (getPosATL _object);
_particle attachTo [_object, [0,-0.12,-0.24]];
_particle setParticleCircle [0, [0, 0, 0]];
_particle setParticleRandom [0, [0, 0, 0], [0, 0, 0], 53, 0.25, [0, 0, 0, 1], 0, 0];
_particle setParticleParams [["\A3\data_f\Cl_water.p3d",1,0,1], "", "Billboard", 0.5, 0.25, [0,0,-0.3],[0,0,0],0, 1, 1, 0.001,[0.3,0.3,0.3],[[0.8,0.8,1,0.1],[0.8,0.8,1,0.1],[0.8,0.8,1,0.1]],[1], 1, 0, "", "", _object];
_particle setDropInterval 0.01;

private _soundSource = 'SoundSetSource_Sfx_Water_source_on' createVehicleLocal (getPosATL _object);
_soundSource attachTo [_object, [0,-0.1,-0.23]];

_object setVariable ["Globe_waterSourceObjects",[_particle,_soundSource],isServer];