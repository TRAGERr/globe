if (is3DEN) exitWith {};

_this spawn
{
	private _dummy = createVehicleLocal ["BombDemine_01_SubAmmo_F", _this, [], 0, "CAN_COLLIDE"];
	sleep 1;
	deleteVehicle _dummy;
};