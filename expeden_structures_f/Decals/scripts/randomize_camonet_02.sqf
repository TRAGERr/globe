
if (!isServer) exitWith {false};

private _object = param [0, objNull];

private _materails = selectRandom 
[
	"\A3\Structures_F\Mil\Shelters\Data\CamoNet_BLUFOR.rvmat",
	"\A3\Structures_F\Mil\Shelters\Data\CamoNet_OPFOR.rvmat"
];
private _textures = selectRandom 
[
	"\A3\Structures_F\Mil\Shelters\Data\CamoNet_OPFOR_CO.paa",
	"\A3\Structures_F\Mil\Shelters\Data\CamoNet_BLUFOR_CO.paa",
	"\A3\Structures_F\Mil\Shelters\Data\CamoNet_INDP_CO.paa"
];

_object setObjectMaterialGlobal [0, _materails];
_object setObjectTextureGlobal [0, _textures];

true