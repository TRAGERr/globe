
params [["_object", objNull, [objNull]]];

if (isNull _object) exitWith {};

if (!canSuspend) exitWith
{
	_object spawn expEden_fnc_switchLightSOS;
};

// Задаем базовые тайминги (в секундах)
private _dot            = 0.2;
private _dash           = 0.6;
private _shortPause     = 0.2;
private _letterPause    = 0.6;
private _loopPause      = 3.0;

while {alive _object} do
{
	_object switchLight "ON";   sleep _dot;
	_object switchLight "OFF";  sleep _shortPause;
	_object switchLight "ON";   sleep _dot;
	_object switchLight "OFF";  sleep _shortPause;
	_object switchLight "ON";   sleep _dot;
	_object switchLight "OFF";  sleep _letterPause;
	
	if (!alive _object) exitWith {};

	_object switchLight "ON";   sleep _dash;
	_object switchLight "OFF";  sleep _shortPause;
	_object switchLight "ON";   sleep _dash;
	_object switchLight "OFF";  sleep _shortPause;
	_object switchLight "ON";   sleep _dash;
	_object switchLight "OFF";  sleep _letterPause;

	if (!alive _object) exitWith {};

	_object switchLight "ON";   sleep _dot;
	_object switchLight "OFF";  sleep _shortPause;
	_object switchLight "ON";   sleep _dot;
	_object switchLight "OFF";  sleep _shortPause;
	_object switchLight "ON";   sleep _dot;
	_object switchLight "OFF";  sleep _loopPause;
};

if (!isNull _object) then {_object switchLight "OFF"};