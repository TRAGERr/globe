params ["_module", "_units", "_activated"];

if (!isServer || !_activated) exitWith {};

if ({local _x} count (objectCurators _module) > 0) then
{
	_module hideObject false;
	_module setPosATL (getPosATL _module);
};

sleep 5;
private _pos		= getPosATL	_module;
private _moduleDir	= getDir	_module;
private _type		=			_module getVariable ["type", 0];

private _uavClass = switch _type do
{

	case 0:
	{
		"B_UAV_02_LM_G"
	};
	case 1:
	{
		"O_UAV_02_LM_G"
	};
	case 2:
	{
		"I_UAV_02_LM_G"
	};
	default
	{
		"B_UAV_02_LM_G"
	};
};

private _spawnDir = _moduleDir % 360;
private _spawnPos = _pos getPos [2000, _spawnDir];
_spawnPos set [2,250];

private _uav = createVehicle [_uavClass, _spawnPos, [], 0, "FLY"];
createVehicleCrew _uav;

[_uav, _pos] spawn expEden_fnc_loiteringMunitionLaunchScript;
deletevehicle _module;