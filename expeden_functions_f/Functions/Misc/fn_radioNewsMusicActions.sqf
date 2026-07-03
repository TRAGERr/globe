
/*
	Author: 
		Trager

	Description:
		- Выполняется с помощью CfgVehicle → className → UserActions
		- Позволяет игрокам выключить определёный объект выполняемый expEden_fnc_radioNewsMusic или включить

	Parameter(s):
		n

	Returns:
		n

*/

params
[
	["_radio",objNull,[objNull]],
	"_bool"
];
if (isNull _radio) exitWith {};

if (!isServer) exitWith 
{
	[_radio, _bool] remoteExecCall ["expEden_fnc_radioNewsMusicActions", 2]
};

if (_bool) then 
{
	_radio remoteExec ['expEden_fnc_radioNewsMusic', 0];
	_radio setVariable ["expEden_FMRadioMusic_enable",true,true];
}
else
{
	deleteVehicle (_radio getVariable "Globe_radioTrackSrc");
	_radio setVariable ["expEden_FMRadioMusic_enable",false,true];
};