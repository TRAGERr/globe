params ["_controlGroup"];

private _savedValue = [false, false, false, false];
{
	private _idc = _x;
	private _checkbox = _controlGroup controlsGroupCtrl _idc;

	if (!isNull _checkbox) then 
	{
		_savedValue set [_forEachIndex, cbChecked _checkbox];
	};
} forEach [101, 102, 103, 104];

_savedValue