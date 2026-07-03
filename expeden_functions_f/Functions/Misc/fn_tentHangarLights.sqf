params ["_object",objNull,[objNull]];
if (isNull _object) exitWith {};

_helper = "Sign_Arrow_Large_Cyan_F" createVehicle getPosATL _object;
_helper attachTo [_object,[-0.5,0,-2]];