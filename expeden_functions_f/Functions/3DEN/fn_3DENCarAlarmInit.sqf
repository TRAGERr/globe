/*

	Author: 
		Trager

	Description:
		Marked area of an object on the map with a marker of type "building"

	Parameter(s):
		0 (OBJECT): Object

	Returns:
		true/false on complete

*/
if (!(_this isKindOf 'Car')) exitWith
{
	
	['“expEden_fnc_3DENCarAlarmInit”: OBJECT must be a Car - function disabled on unsupported objects', 1] call BIS_fnc_3DENNotification;
	_this set3DENAttribute ['CarAlarm', false];
	_this clear3DENAttribute "CarAlarm";

	false
};

['init', _this] call BIS_fnc_carAlarm;

true