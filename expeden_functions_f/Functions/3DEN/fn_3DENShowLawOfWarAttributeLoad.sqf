
params ["_controlGroup","_value"];
 
if (isNil "_value" || {!(_value isEqualType [])} || {count _value != 4}) then 
{
	_value = [false, false, false, false];
};

{
	private _idc = _x;
	private _checkbox = _controlGroup controlsGroupCtrl _idc;
	if (!isNull _checkbox) then 
	{
		private _isChecked = _value select _forEachIndex;
		_checkbox cbSetChecked _isChecked;
	};
} forEach [101, 102, 103, 104];