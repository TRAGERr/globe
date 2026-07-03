params["_UAV"];

/* _UAV enableRopeAttach true;

private _mineAT = "Land_DroneDropMineAT_01" createVehicle getPosATL _UAV;
_mineAT setPhysicsCollisionFlag false;
_mineAT enableRopeAttach true;
_UAV setVariable ['Globe_mine',_mineAT,isServer];


private _rope = ropeCreate [_UAV, [0,0,-0.3],0.5,nil,nil,nil,1];
_rope setPhysicsCollisionFlag false;
_rope enableRopeAttach true;
_UAV setVariable ['Globe_rope',_rope,isServer];

_UAV disableCollisionWith _rope;
_rope disableCollisionWith _UAV;

[_mineAT, [0,0,0],[0,-0.07,0]] ropeAttachTo (ropes _UAV # 0); */



private _mineAT = createSimpleObject ["A3\Weapons_f\Explosives\mine_at.p3d", getPosASL _UAV, false];
_mineAT setPhysicsCollisionFlag false;

_UAV setVariable ['Globe_mine',_mineAT,isServer];

_mineAT attachTo [_UAV,[0,0,0]];