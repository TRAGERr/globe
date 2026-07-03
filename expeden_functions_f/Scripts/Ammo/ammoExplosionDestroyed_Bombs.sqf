if (is3DEN) exitWith {};

_this spawn
{
	private _dummy = createVehicleLocal ["Bo_Mk82", _this, [], 0, "CAN_COLLIDE"];
	sleep 1;
	deleteVehicle _dummy;
};