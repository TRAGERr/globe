if (is3DEN) exitWith {};

_this spawn
{
	private _dummy = createVehicleLocal ["R_230mm_HE", _this, [], 0, "CAN_COLLIDE"];
	sleep 1;
	deleteVehicle _dummy;
};