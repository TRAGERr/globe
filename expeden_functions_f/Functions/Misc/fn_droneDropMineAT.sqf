/*
	Author:
        Trager

	Description:
        Mine with variable is dummy, was deleted after mine fired
		todo handle rearm come back dummy mine model
			hide/unhide
			getter rearm

	Execution:
        UAV_01 event handler post init

	Parameter(s):
		_this # 0: UAV object

	Returns:
        n

*/
params["_UAV"];

if (!isServer && isMultiplayer) exitWith 
{
    _UAV remoteExecCall ['expEden_fnc_droneDropMineAT',2]
};
if (isNull _UAV || !(alive _UAV)) exitWith {false};
deleteVehicle (_UAV getVariable "Globe_mine");

private _mineAT = if (_UAV magazinesTurret [-1] isEqualTo ["DroneDropMineAT_TM62M_magazine"]) then 
{ 
	createSimpleObject ["rhsafrf\addons\rhs_weapons\mines\rhs_tm62m.p3d", getPosASL _UAV, false];
}
else
{
	createSimpleObject ["A3\Weapons_f\Explosives\mine_at.p3d", getPosASL _UAV, false];
};
_mineAT setPhysicsCollisionFlag false;
_mineAT attachTo [_UAV,[0,0,-0.03]];

_UAV setVariable ['Globe_mine',_mineAT,true];

true