if (!isServer) exitWith {false};

private _object = param [0, objNull];

private _decal = selectRandom 
[
	"\A3\structures_f_enoch\cultural\Calvary_03\Data\Calvary_03_decal_01_ca.paa",
	"\A3\structures_f_enoch\cultural\Calvary_03\Data\Calvary_03_decal_02_ca.paa",
	"\A3\structures_f_enoch\cultural\Calvary_03\Data\Calvary_03_decal_03_ca.paa",
	"\A3\structures_f_enoch\cultural\Calvary_03\Data\Calvary_03_decal_04_ca.paa",
	"\A3\structures_f_enoch\cultural\Calvary_03\Data\Calvary_03_decal_ca.paa"
];

_object setObjectTextureGlobal [0, _decal];

true