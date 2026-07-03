params ["_uav"];
if (isNull _uav) exitWith {};

_uav engineOn true;
_uav setAirplaneThrottle 1;
_uav disableBrakes true;

sleep 8;

[_uav, ["Land_Carrier_01_wire_snap_sound", 350, 1.3, 0, 0, true]] remoteExec ["say3D", 0];

sleep 0.85;

detach _uav;

for "_i" from 1 to 35 do
{
	if (!alive _uav) exitWith {};

	private _currentVel = velocityModelSpace _uav;
	_uav setVelocityModelSpace [0, (_currentVel select 1) + 2.5, 0];

	sleep 0.025;
};