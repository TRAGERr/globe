params ["_side"];
private _sideIndex = [west, east, resistance, civilian] find _side;
if (_sideIndex == -1) then
{
	private _allDisabled = true;
	{
		if (_x) then
		{
			_allDisabled = false
		}
	} forEach _showData;
	!(_allDisabled)
}
else
{
	_showData select _sideIndex
};