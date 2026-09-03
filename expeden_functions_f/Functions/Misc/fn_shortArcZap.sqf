params["_trigger"];
if (is3DEN || isNull _trigger) exitWith {};

while {triggerActivated _trigger} do
{
	private _currentList = list _trigger;
	{
		if (alive _x && _x isKindOf "Man") then
		{
		  	[_x, _x] call expEden_fnc_shortArcZapTransformerFX;
		};
	} forEach _currentList;
	sleep 0.2;
};