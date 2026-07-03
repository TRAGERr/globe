disableSerialization;
private _display = findDisplay 9000;
private _uav = _display getVariable ["Globe_assignedUAV", objNull];
private _pos = _display getVariable ["Globe_selTgtPos", []];

if (isNull _uav || !alive _uav) exitWith {};
if (_pos isEqualTo []) exitWith {};
if (isEngineOn _uav) exitWith {};

closeDialog 0;
deleteMarkerLocal "Globe_mrkTgt";

private _dist = _uav distance _pos;
private _dispersionRadius = (_dist / 1000) * 2.2;
private _pos = _pos getPos [random _dispersionRadius, random 360];
_pos set [2, 0];

{
	[_uav, _x] call BIS_fnc_holdActionRemove;
} forEach [0, 1, 2, 4, 5, 6, 7];

_uav remoteExec ['expEden_fnc_loiteringMunitionLaunchPush', _uav];
[_uav, _pos] remoteExecCall ['expEden_fnc_loiteringMunitionWaypoint', 2];
[_uav, _pos] remoteExec ['expEden_fnc_loiteringMunitionDive', _uav];