params ["_object",objNull,[objNull]];
if (isNull _object) exitWith {};

_helper = "Sign_Arrow_Large_Cyan_F" createVehicle getPosATL _object;
_helper attachTo [_object,[-0.5,0,-2]];
_helper setObjectTexture [0, '#(argb,8,8,3)color(0,0,0,0,ca)'];

_actionID =
[
    _helper,
    "Get Back to Main Menu",
    "\a3\Ui_f\data\IGUI\Cfg\HoldActions\holdAction_hack_ca.paa",
    "\a3\Ui_f\data\IGUI\Cfg\HoldActions\holdAction_hack_ca.paa",
    "_this distance _target < 5",
    nil,
    {
    },
    {
    },
    {
        playSound3D ['A3\Sounds_F\environment\structures\church\bell_small.wss', _target, false, [getPosASL _target # 0, getPosASL _target # 1, 5.805], 1.4125376, 1, 500, 0, false]
    },
    {
    },
    [],
    1,
    15,
    false
]
call BIS_fnc_holdActionAdd;

_object setVariable ["Globe_bellTowerObjects", [_helper,_actionID]];