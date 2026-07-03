/* params["_object"];
if (!is3DEN) exitWith {};
//--→ if Globe_turretAttachLogic_created already created synchronize new object to Globe_turretAttachLogic
if (!isNull Globe_turretAttachLogic) exitWith 
{
	add3DENConnection ["Sync", [Globe_turretAttachLogic], _object];
};

//--→ one logic object on mission, all Static turrets will be syncsed
Globe_turretAttachLogic = create3DENEntity ["Logic", "Logic", position _object];
Globe_turretAttachLogic set3DENAttribute
[
	"init",
	"[this] call expEden_fnc_turretAttach"
];
Globe_turretAttachLogic set3DENAttribute
[
	"name",
	"Globe_turretAttachLogic"
];
add3DENConnection ["Sync", [Globe_turretAttachLogic], _object];
// missionNamespace setVariable ["Globe_turretAttachLogic_created", true, true];

if (_object get3DENAttribute "desableWeaponDisassembly" isEqualTo [true]) then
{
	_object set3DENAttribute ["desableWeaponDisassembly", false]
};

//--→ no one sync - exit
if (get3DENConnections _object isEqualTo []) exitWith
{
	// delete3DENEntities [missionNamespace getVariable ["Globe_turretAttachLogic_created", objNull]]
	delete3DENEntities [Globe_turretAttachLogic];
};
 */