
params ["_object"];
if (is3DEN || isNull _object) exitWith {};

if (!isServer) exitWith
{
	_object remoteExec ['expEden_fnc_razorWire', 2];
};

private _trigger = createTrigger ["EmptyDetector", getPosWorld _object, false];
_trigger setTriggerActivation ["ANY", "PRESENT", true];
_trigger setTriggerArea [1, 4, (direction _object) + 90, true, 1.5];
_trigger setTriggerStatements
[
	"this",
	"thisTrigger remoteExec ['expEden_fnc_razorWireDamage',0];",
	""
];

_object setVariable ["Globe_RzrWireTrg", _trigger, true];