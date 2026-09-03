params ["_uav", "_pos"];
if (!canSuspend) exitWith 
{
    [_uav,_pos] spawn expEden_fnc_loiteringMunitionLaunchScript
};
waitUntil {time > 0};
if (isNull _uav) exitWith {};
sleep 1;
_uav engineOn true;
_uav setAirplaneThrottle 1;
_uav disableBrakes true;

sleep 2;

detach _uav;
[_uav, _pos] remoteExecCall ['expEden_fnc_loiteringMunitionWaypoint', 2];
[_uav, _pos] remoteExec     ['expEden_fnc_loiteringMunitionDive', _uav];
for "_i" from 1 to 35 do
{
	if (!alive _uav) exitWith {};

	private _currentVel = velocityModelSpace _uav;
    [_uav, [0, (_currentVel select 1) + 2.5, 0]] remoteExec ['setVelocityModelSpace',_uav];

	sleep 0.025;
};