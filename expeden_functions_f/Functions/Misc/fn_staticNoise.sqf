scriptName "O&amp;T Expansion Eden - Handle Static Noise";

/*
	Author: Trager

	Description:
		Static Noise Effect on OBJECT(0) in activation RADIUS(1) for any SELECTION(2)

	Parameter(s):
		0 (OBJECT): Object
		1 (RADIUS): NUMBER - in meters, noise will begin when the PLAYER is inside (default: 50)

*/
if (is3DEN) exitWith {};
if (!hasInterface) exitWith {};

params
[
	["_object",objNull,[objNull]],
	["_distance",20],
	["_selection",1]
];

if (player distance _object < _distance) then 
{
	_object setObjectTexture [_selection, "\A3\Missions_F_AoW\Data\Img\showcase_future_static_01_co.paa"];

	sleep 0.015;

	_object setObjectTexture [_selection, "\A3\Missions_F_AoW\Data\Img\showcase_future_static_03_co.paa"];

	sleep 0.015;

	_object setObjectTexture [_selection, "\A3\Missions_F_AoW\Data\Img\showcase_future_static_02_co.paa"];

	sleep 0.015;

	_object setObjectTexture [_selection, "\A3\Missions_F_AoW\Data\Img\showcase_future_static_04_co.paa"];

	sleep 0.015;
};

if (alive _object) then 
{
	[_object, _distance, _selection] spawn expEden_fnc_staticNoise
};