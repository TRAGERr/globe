params ["_uav", "_pos"];

sleep 10;
waitUntil {(_uav distance2D _pos) < 300};

private _targets = _pos nearEntities [["Man"], 625];
{
	private _unit = _x;
	if (alive _unit) then 
	{
		[_unit, [_uav, 4]] remoteExec ['reveal'];
	}
} forEach _targets;

private _targetSpeed = 160 / 3.6; 
private _step = 0.135;
while {true} do 
{
	private _uavPos = getPosVisual _uav;
	private _dist = _uavPos distance _pos;

	if (!alive _uav || _dist < 3 || (_uavPos # 2) < 3) exitWith {};

	private _currentDir	= vectorDirVisual _uav;
	private _targetDir	= vectorNormalized (_uavPos vectorFromTo _pos);
	private _diff		= _targetDir vectorDiff _currentDir;
	private _interpDir 	= vectorNormalized (_currentDir vectorAdd (_diff vectorMultiply _step));
	private _sideVec 	= _interpDir vectorCrossProduct [0,0,1];
	private _upVec 		= _sideVec vectorCrossProduct _interpDir;

	_uav setVectorDirAndUp [_interpDir, _upVec];
	private _randomSpeed = _targetSpeed + ((random 2 - 1) / 3.6);

	_uav setVelocity (_interpDir vectorMultiply _randomSpeed);

	sleep 0.2;
};