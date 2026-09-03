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
_uav forceSpeed 45;
_uav flyInHeight (random [104.8,120,157.2]);

[_uav, _pos] spawn
{
	params ["_uav", "_pos"];

	waitUntil {sleep 1; !(alive _uav) || (getPosATL _uav # 2) > 90};
	if (!alive _uav) exitWith {};

	private _startDist = _uav distance _pos;
	if (_startDist < 600) exitWith {};

	private _targetPctAt600 = 0.17 + (random 0.13); 
	private _maxAmmo = 120;

	while {alive _uav} do 
	{
		private _currentDist = _uav distance _pos;
		if (!alive _uav || (_currentDist < 30)|| ((getPosATL _uav # 2) < 5)) exitWith {};

		private _ammoCount = _uav ammo "CMFlareLauncher";
		if (_ammoCount == 0) exitWith {};

		private _burstCount = 1;
		private _burstDelay = 0.15+ (random 0.15);
		private _nextDelay	= 1;
		private _speed = (speed _uav) / 3.6; 
		if (_speed < 5) then {_speed = 5};

		switch (true) do 
		{

			case (_currentDist < 550): 
			{
				if (_currentDist > 200) then 
				{
					_burstCount = 2 + round(random 2);
					_burstDelay = 0.10+ (random 0.10);

					private _distToDrop = _currentDist - 200;
					private _timeToDrop = _distToDrop / _speed;
					private _salvosLeft = _ammoCount / _burstCount;
					
					_nextDelay = (_timeToDrop / (_salvosLeft max 1)) - (_burstCount * _burstDelay);
					_nextDelay = (_nextDelay max 0.1) min 1.5;
				} 
				else 
				{
					_nextDelay=5;
				};
			};

			case (_currentDist < 600): 
			{
				_burstCount = 2;
				_nextDelay = 0.5;
			};

			default 
			{
				_burstCount = 2 + round(random 1);
				_burstDelay = 0.15+(random 0.15);

				private _ammoTargetAt600 = round (_maxAmmo * _targetPctAt600);
				private _ammoToBurn = (_ammoCount - _ammoTargetAt600) max 1; 
				private _distTo600 = _currentDist - 600;
				private _timeTo600 = _distTo600 / _speed;
				private _salvosNeeded = _ammoToBurn / _burstCount;

				_nextDelay = (_timeTo600 / (_salvosNeeded max 1)) - (_burstCount * _burstDelay);
				_nextDelay = (_nextDelay max 0.5) min 8;
			};

		};

		for "_i" from 1 to _burstCount do 
		{
			if (!alive _uav || {(_uav ammo "CMFlareLauncher") == 0}) exitWith {};
			
			(driver _uav) forceWeaponFire ["CMFlareLauncher", "AIBurst"];
			sleep _burstDelay;
		};

		sleep _nextDelay;
	};
};
