params ["_uav"];
if (isNull _uav) exitWith {};

if (!isServer) exitWith
{
	_uav remoteExecCall ['expEden_fnc_loiteringMunitionExplosion', 2];
};

private _alt = ((getPosATL _uav) # 2);
if (_alt < 20) then
{
	private _bomb = createVehicle ["explosive_UAVLM_01_G", getPosATL _uav, [], 0, "NONE"];
	_bomb remoteExec ["triggerAmmo"];
	deleteVehicle _uav;
}
else
{
	private _bomb = createVehicle ["explosive_UAVLM_02_G", getPosATL _uav, [], 0, "NONE"];
	_bomb remoteExec ["triggerAmmo"];

	private _wreckMode = getMissionConfigValue ["wreckManagerMode", 0];
	if (_wreckMode  isNotEqualTo 0) then
	{
		addToRemainsCollector [_uav];
	}
	else
	{
		_uav spawn
		{
			sleep 1800;
			deleteVehicle _this;
		}
	};
};
