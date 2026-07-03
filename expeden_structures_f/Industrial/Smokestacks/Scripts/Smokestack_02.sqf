params["_object"];
if (isNull _object || is3DEN) exitWith {};

if (isServer) then 
{

	private _smoke = createVehicle ['Particle_MediumSmoke_F', [0,0,0], [], 0, "CAN_COLLIDE"];
	_smoke attachTo [_object, [0.0799561,-0.858887,23.7197]];

	_object setVariable ["Globe_effects",_smoke,true];

};