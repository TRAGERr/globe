params["_object"];
if (!hasInterface) exitWith {false};
if (!canSuspend) exitWith {_this spawn expEden_fnc_galaxyRotation};

private _angle = ((vectorUp _object) # 1);
while {alive _object && simulationEnabled _object} do 
{
	_angle = _angle + 0.0005;
	private _yyy = cos (deg _angle);
	private _zzz = sin (deg _angle);
	_object setVectorUp [((vectorUp _object) # 0), _yyy, _zzz]; 
		
	sleep 0.001; 
};

true