
if (!isServer) exitWith {false};

private _object = param [0, objNull];

private _materails = selectRandom 
[
	"\A3\Structures_F\Mil\Shelters\Data\CamoNet_BLUFOR.rvmat",
	"\A3\Structures_F\Mil\Shelters\Data\CamoNet_OPFOR.rvmat"
];
private _textures = selectRandom 
[
	"\A3\Structures_F\Mil\Shelters\Data\CamoNet_OPFOR_CA.paa",
	"\A3\Structures_F_Exp\Military\Camonets\Data\CamoNet_ghex_CA.paa",
	"\A3\Structures_F_Enoch\Military\Camonets\Data\CamoNet_wdl_CA.paa",
	"\A3\Structures_F\Mil\Shelters\Data\CamoNet_BLUFOR_CA.paa",
	"\A3\Structures_F\Mil\Shelters\Data\CamoNet_INDP_CA.paa"
];

_object setObjectMaterialGlobal [0, _materails];
_object setObjectTextureGlobal [0, _textures];

true