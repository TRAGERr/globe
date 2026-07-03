/*
	Author: Trager

	Description:
		Damage select window(s) in Eden by attribute
		[(_this,'Land_Destroyer_01_hull_02_F'] call bis_fnc_destroyer01GetShipPart),'glass_12_hide','glass_12_unhide'] call expEden_fnc_Destroyer01HandleDamage3den;

	Parameter(s):
		0 (OBJECT): Object
		1 (HIDE SELECTION): name of hide selection
		2 (UNHIDE SELECTION) name of hide selection

	Returns:
		n

*/

params
[
	"_object",
	"_selectionHide",
	"_selectionUnhide"
];

_object animate [_selectionHide, 1];
_object animate [_selectionUnhide, 1];