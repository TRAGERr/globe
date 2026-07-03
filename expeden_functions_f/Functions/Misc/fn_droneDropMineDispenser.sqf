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
		_this # 1: type loaded magazine (AT or AP mines) for dummy visual

	Returns:
        n

*/
params["_UAV"];

if (!isServer && isMultiplayer) exitWith 
{
    _UAV remoteExecCall ['expEden_fnc_droneDropMineDispenser',2]
};
if (isNull _UAV || !(alive _UAV)) exitWith {false};
deleteVehicle (_UAV getVariable "Globe_mines");

switch (true) do 
{

	case (_UAV magazinesTurret [-1] isEqualTo ["DroneDropMineDispenserAPERS_magazine"]):
	{
		private _mine1 = createSimpleObject ["\A3\Weapons_F\explosives\mine_ap.p3d", getPosASL _UAV, false];
		_mine1 attachTo [_UAV,[-0.1,0,-0.03]];
		_mine1 setPhysicsCollisionFlag false;

		private _mine2 = createSimpleObject ["\A3\Weapons_F\explosives\mine_ap.p3d", getPosASL _UAV, false];
		_mine2 attachTo [_UAV,[-0.1,0.1,-0.03]];
		_mine2 setPhysicsCollisionFlag false;

		private _mine3 = createSimpleObject ["\A3\Weapons_F\explosives\mine_ap.p3d", getPosASL _UAV, false];
		_mine3 attachTo [_UAV,[0.1,0.1,-0.03]];
		_mine3 setPhysicsCollisionFlag false;

		private _mine4 = createSimpleObject ["\A3\Weapons_F\explosives\mine_ap.p3d", getPosASL _UAV, false];
		_mine4 attachTo [_UAV,[0.1,-0.1,-0.03]];
		_mine4 setPhysicsCollisionFlag false;

		_UAV setVariable ['Globe_mines',[_mine1,_mine2,_mine3,_mine4],true];
	};

	case (_UAV magazinesTurret [-1] isEqualTo ["DroneDropMineDispenserAPERSmd_magazine"]):
	{
		private _mine1 = createSimpleObject ["\A3\Weapons_F_Orange\Explosives\APERSmineDispenser_AP.p3d", getPosASL _UAV, false];
		_mine1 attachTo [_UAV,[-0.1,0,-0.03]];
		_mine1 setPhysicsCollisionFlag false;

		private _mine2 = createSimpleObject ["\A3\Weapons_F_Orange\Explosives\APERSmineDispenser_AP.p3d", getPosASL _UAV, false];
		_mine2 attachTo [_UAV,[-0.1,0.1,-0.03]];
		_mine2 setPhysicsCollisionFlag false;

		private _mine3 = createSimpleObject ["\A3\Weapons_F_Orange\Explosives\APERSmineDispenser_AP.p3d", getPosASL _UAV, false];
		_mine3 attachTo [_UAV,[0.1,0.1,-0.03]];
		_mine3 setPhysicsCollisionFlag false;

		private _mine4 = createSimpleObject ["\A3\Weapons_F_Orange\Explosives\APERSmineDispenser_AP.p3d", getPosASL _UAV, false];
		_mine4 attachTo [_UAV,[0.1,-0.1,-0.03]];
		_mine4 setPhysicsCollisionFlag false;

		private _mine5 = createSimpleObject ["\A3\Weapons_F_Orange\Explosives\APERSmineDispenser_AP.p3d", getPosASL _UAV, false];
		_mine5 attachTo [_UAV,[0.1,-0.05,-0.03]];
		_mine5 setPhysicsCollisionFlag false;

		_UAV setVariable ['Globe_mines',[_mine1,_mine2,_mine3,_mine4,_mine5],true];
	};

	case (_UAV magazinesTurret [-1] isEqualTo ["DroneDropMineDispenserAPERSpfm1_magazine"]):
	{
		private _mine1 = createSimpleObject ["\rhsafrf\addons\rhs_airweapons\rhs_m_pfm1_d.p3d", getPosASL _UAV, false];
		_mine1 attachTo [_UAV,[-0.1,0,-0.03]];
		_mine1 setPhysicsCollisionFlag false;

		private _mine2 = createSimpleObject ["\rhsafrf\addons\rhs_airweapons\rhs_m_pfm1_d.p3d", getPosASL _UAV, false];
		_mine2 attachTo [_UAV,[-0.1,0.1,-0.03]];
		_mine2 setPhysicsCollisionFlag false;

		private _mine3 = createSimpleObject ["\rhsafrf\addons\rhs_airweapons\rhs_m_pfm1_d.p3d", getPosASL _UAV, false];
		_mine3 attachTo [_UAV,[-0.1,0.2,-0.03]];
		_mine3 setPhysicsCollisionFlag false;

		private _mine4 = createSimpleObject ["\rhsafrf\addons\rhs_airweapons\rhs_m_pfm1_d.p3d", getPosASL _UAV, false];
		_mine4 attachTo [_UAV,[0.1,0,-0.03]];
		_mine4 setPhysicsCollisionFlag false;

		private _mine5 = createSimpleObject ["\rhsafrf\addons\rhs_airweapons\rhs_m_pfm1_d.p3d", getPosASL _UAV, false];
		_mine5 attachTo [_UAV,[0.1,0.1,-0.03]];
		_mine5 setPhysicsCollisionFlag false;

		private _mine6 = createSimpleObject ["\rhsafrf\addons\rhs_airweapons\rhs_m_pfm1_d.p3d", getPosASL _UAV, false];
		_mine6 attachTo [_UAV,[0.1,0.2,-0.03]];
		_mine6 setPhysicsCollisionFlag false;

		_UAV setVariable ['Globe_mines',[_mine1,_mine2,_mine3,_mine4,_mine5,_mine6],true];
	};

	case (_UAV magazinesTurret [-1] isEqualTo ["DroneDropMineDispenserATptm1_magazine"]):
	{
		private _mine1 = createSimpleObject ["\rhsafrf\addons\rhs_airweapons\rhs_m_ptm1_d.p3d", getPosASL _UAV, false];
		_mine1 attachTo [_UAV,[-0.1,0,-0.03]];
		_mine1 setPhysicsCollisionFlag false;

		private _mine2 = createSimpleObject ["\rhsafrf\addons\rhs_airweapons\rhs_m_ptm1_d.p3d", getPosASL _UAV, false];
		_mine2 attachTo [_UAV,[0.1,0.1,-0.03]];
		_mine2 setPhysicsCollisionFlag false;

		_UAV setVariable ['Globe_mines',[_mine1,_mine2],true];
	};

	case (_UAV magazinesTurret [-1] isEqualTo ["DroneDropMineDispenserAPERSpmn2_magazine"]):
	{
		private _mine1 = createSimpleObject ["\rhsafrf\addons\rhs_weapons\mines\rhs_pmn2.p3d", getPosASL _UAV, false];
		_mine1 attachTo [_UAV,[-0.13,0,-0.03]];
		_mine1 setPhysicsCollisionFlag false;

		private _mine2 = createSimpleObject ["\rhsafrf\addons\rhs_weapons\mines\rhs_pmn2.p3d", getPosASL _UAV, false];
		_mine2 attachTo [_UAV,[0.1,0.1,-0.03]];
		_mine2 setPhysicsCollisionFlag false;

		_UAV setVariable ['Globe_mines',[_mine1,_mine2],true];
	};


	default
	{
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

		_UAV setVariable ['Globe_mines',_mineAT,true];
	};

};

true