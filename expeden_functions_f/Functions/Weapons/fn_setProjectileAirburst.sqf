params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];
if (isNull _projectile) exitWith {};

private _triggerDist 	= currentZeroing _gunner;
		_triggerDist	= _triggerDist + (random [-10, 1, 10]);
private _initPos		= getPosATL _gunner;
waitUntil 
{
	((_projectile distance _initPos) >= _triggerDist)
};
triggerAmmo _projectile;