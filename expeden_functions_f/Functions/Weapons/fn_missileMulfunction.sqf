params ["_object", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];
if (isNull _object || isNull _projectile) exitWith {};

private _malfChance = (_object getVariable ['Globe_missileMulf', 0]);
if (random 1 > _malfChance) exitWith {};

if (!canSuspend) exitWith
{
	_this spawn expEden_fnc_missileMulfunction;
};

if (!isServer) exitWith
{
	_this remoteExec ["expEden_fnc_missileMulfunction", 2];
};

sleep (1 + (random 1));

private _sourceSmoke = "#particlesource" createVehicle (getPosATL _projectile);
_sourceSmoke setParticleClass "CannonFired1";
_sourceSmoke attachTo [_projectile];

private _pos			= getPosATL _object;
private _weaponDirVector= _object weaponDirection _weapon;
private _weaponDir		= (_weaponDirVector # 0) atan2 (_weaponDirVector # 1);
if (_weaponDir < 0) then
{
	_weaponDir = _weaponDir + 360;
};
private _randomAngle = _weaponDir + (random 40 - 20);
private _distance = random [600,1000,1500];
private _posX = (_pos # 0) + (sin _randomAngle * _distance);
private _posY = (_pos # 1) + (cos _randomAngle * _distance);
private _dummy = createVehicle ["LaserTargetC", [_posX, _posY, 0], [], 0, "CAN_COLLIDE"];
[_projectile, [_dummy, true]] remoteExecCall ["setMissileTarget", owner _projectile];

waitUntil {isNull _projectile};
deleteVehicle [_dummy, _sourceSmoke];