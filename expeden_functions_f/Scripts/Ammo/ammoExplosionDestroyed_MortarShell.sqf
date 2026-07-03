if (is3DEN) exitWith {};

_this spawn
{
	private _dummy = createVehicleLocal ["Sh_82mm_AMOS", _this, [], 0, "CAN_COLLIDE"];
	sleep 1;
	deleteVehicle _dummy;
};