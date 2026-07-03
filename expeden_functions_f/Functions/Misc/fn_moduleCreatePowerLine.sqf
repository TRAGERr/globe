params ["_logic"];

private _modelPath = _logic getVariable ["ModuleCPW_model", "a3\data_f\proxies\rope\rope_3m.p3d"];
if (_modelPath == "" || {!(_modelPath isEqualType "")}) then
{
	_modelPath = "a3\data_f\proxies\rope\rope_3m.p3d";
};

private _synced = synchronizedObjects _logic;
if (count _synced < 2) exitWith {};

private _sorted 	= [];
private _currentObj = [_synced, [], {_logic distance _x}, "ASCEND"] call BIS_fnc_sortBy select 0;
_sorted pushBack _currentObj;
_synced 			= _synced - [_currentObj];

while {count _synced > 0} do
{
	private _nextObj	= [_synced, [], {_currentObj distance _x}, "ASCEND"] call BIS_fnc_sortBy select 0;
	_sorted pushBack _nextObj;
	_synced 			= _synced - [_nextObj];
	_currentObj 		= _nextObj;
};

for "_j" from 0 to (count _sorted - 2) do
{
	private _obj1 	= _sorted select _j;
	private _obj2 	= _sorted select (_j + 1);

	private _pos1 	= getPosASL _obj1;
	private _pos2 	= getPosASL _obj2;

	private _posZ1 	= _pos1 select 2;
	private _posZ2 	= _pos2 select 2;

	private _dis 	= _pos1 distance2D _pos2;
	private _dir 	= _pos1 getDir _pos2;

	private _segmentsCount 	= ceil (_dis / (_logic getVariable ["ModuleCPW_segmentLength", 2.9]));
	private _length 		= _dis / _segmentsCount;
	private _dropMax 		= -_dis * (_logic getVariable ["ModuleCPW_SagCoef", 0.04]);

	private _posZPrev = _posZ1;

	for "_i" from _length to (_dis + _length * 0.1) step _length do
	{
		private _drop = _dropMax * sin ((_i / _dis) * 180);
		private _pos = _pos1 getPos [_i, _dir];

		private _currentZ = (linearConversion [0, _dis, _i, _posZ1, _posZ2]) + _drop;
		_pos set [2, _currentZ];

		private _line = createSimpleObject [_modelPath, _pos];
		_line setDir _dir;

		[_line, 90 + atan ((_currentZ - _posZPrev) / _length), 0] call bis_fnc_setPitchBank;

		_posZPrev = _currentZ;
	};
};

switch ((_logic getVariable ["ModuleCPW_action", 0])) do
{

	case 0:
	{
		deleteVehicle _logic;
	};

	case 1:
	{
		(synchronizedObjects _logic) findIf {_x hideObjectGlobal true};
		deleteVehicle _logic;
	};

	case 2:
	{
		(synchronizedObjects _logic) findIf {deleteVehicle _x};
		deleteVehicle _logic;
	};
};