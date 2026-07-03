if (!isServer) exitWith {false};

private _object = param [0, objNull];

private _textures = selectRandom 
[
	"\a3\missions_f_beta\data\img\decals\decal_lean_right1_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_lean_right2_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_lean_right3_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_lean_right4_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_lean_right5_ca.paa"
];

_object setObjectTextureGlobal [2, _textures];

true