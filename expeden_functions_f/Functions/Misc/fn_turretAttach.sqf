params[["_turret",objNull,[objNull]]];
if (isNull _turret) exitWith {};

if (is3DEN) then 
{
	if (_turret get3DENAttribute "desableWeaponDisassembly" isEqualTo [true]) then	 //--→ disable disassembly ability, when turret will raised again it's moved to start pos
	{
		_turret set3DENAttribute ["desableWeaponDisassembly", false]
	}
}
else
{
	if (!(isNil "ace_dragging_fnc_setDraggable") || !(isNil "ace_dragging_fnc_setCarryable")) then	//--→ ACE support, skip if no ACE loaded
	{
		[_x, false] call ace_dragging_fnc_setDraggable;
		[_x, false] call ace_dragging_fnc_setCarryable
	};
	[_turret, BIS_functions_mainscope] call BIS_fnc_attachToRelative	//--→ main attach to vanilla global object
};