params ["_uav", "_pos"];
if (isNull _uav) exitWith {};
if (!canSuspend) exitWith 
{
    [_uav,_pos] spawn expEden_fnc_loiteringMunitionLaunchScript
};
waitUntil {time > 0};
sleep 1;

detach _uav;
[_uav, _pos] remoteExecCall ['expEden_fnc_loiteringMunitionWaypoint', 2];
[_uav, _pos] remoteExec     ['expEden_fnc_loiteringMunitionDive', _uav];
[_uav, [0,34,0]] remoteExec ['setVelocityModelSpace',_uav];