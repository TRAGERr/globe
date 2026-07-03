params ["_object"];

waitUntil {time > 0};

private _init = time + (random 5);
waitUntil {time >= _init};

_object animateSource ['Turret_source', (random [-180,0,180]), false];
_object animateSource ['Gun_source', (random [-5,5,15]), false];

_object spawn
{
	private _waitInit = time + (random 5);
	waitUntil {time >= _waitInit};

	scriptName "expEden_fnc_VRTargetTurretGunLiveMove - Handle Turret";
	while {alive _this && simulationEnabled _this} do 
	{
		_this animateSource ['Turret_source', (random [-180,0,180]), false];

		private _wait = time + (random 5);
		waitUntil {time >= _wait};
	};
};

_object spawn
{
	private _waitInit = time + (random 5);
	waitUntil {time >= _waitInit};

	scriptName "expEden_fnc_VRTargetTurretGunLiveMove - Handle Gun";
	while {alive _this && simulationEnabled _this} do 
	{
		_this animateSource ['Gun_source', (random [-5,1,15]), false];

		private _wait = time + (random 4.5);
		waitUntil {time >= _wait};
	};
};