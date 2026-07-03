if (is3DEN) exitWith {};

_this spawn
{
	private _dummy = createVehicleLocal ["GrenadeHandSabotaged_01_G", _this, [], 0, "CAN_COLLIDE"];
	sleep 1;
	deleteVehicle _dummy;
};