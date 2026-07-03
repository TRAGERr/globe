
params["_object"];
if (isNull _object || is3DEN) exitWith {};

if (isServer) then 
{

	private _sound = createVehicle ['SoundSetSource_Sfx_ElectricMotor04_01_G', [0,0,0], [], 0, "CAN_COLLIDE"];
	_sound attachTo [_object, [1.71326,-2.86914,-16.9143]];

	private _smoke = createVehicle ['Particle_MediumSmoke_F', [0,0,0], [], 0, "CAN_COLLIDE"];
	_smoke attachTo [_object, [0.629883,0.946289,18.4803]];

	_object setVariable ["Globe_effects",[_sound, _smoke],true];

};