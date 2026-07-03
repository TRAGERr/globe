if (!isServer) exitWith {false};

private _object = param [0, objNull];

private _tag = selectRandom 
[
	"\A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_tag_01_co.paa",
	"\A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_tag_02_co.paa",
	"\A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_tag_03_co.paa",
	"\A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_tag_04_co.paa",
	"\A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_tag_05_co.paa",
	"\A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_tag_06_co.paa",
	"\A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_tag_07_co.paa"
];

_object setObjectTextureGlobal [0, _tag];

true