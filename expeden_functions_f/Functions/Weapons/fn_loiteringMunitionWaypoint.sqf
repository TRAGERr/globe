params ["_uav","_pos"];
if (isNull _uav) exitWith {};

if (!isServer) exitWith 
{
	[_uav, _pos] remoteExecCall ['expEden_fnc_loiteringMunitionWaypoint', 2]
};

private _wp = (group _uav) addWaypoint [_pos, 0];
_wp setWaypointType "MOVE";
_wp setWaypointSpeed "FULL";
_wp setWaypointBehaviour "SAFE";

_uav flyInHeight (random [304.8,381,457.2]);

[_uav, _pos] spawn
{
	params ["_uav", "_pos"];

	waitUntil {(getPosATL _uav # 2) > 10};
	sleep (random 9);

	while {alive _uav} do
	{
		private _dist = _uav distance _pos; 
		if (!alive _uav || _dist < 50 || (random 100 <= 2)) exitwith {};
		
		private _burstcount = 2 + round (random 4);
		for "_i" from 1 to _burstcount do 
		{ 
			(driver _uav) forceWeaponFire ["CMFlareLauncher", "AIBurst"];
			sleep 0.23; 
		}; 

		private _delay = linearConversion [300, 1000, _dist, 4.5, 7, true];
		sleep _delay;
	}; 
};