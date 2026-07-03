if (!isServer) exitWith {false};

private _object = param [0, objNull];

private _textures = selectRandom 
[
	"\a3\missions_f_beta\data\img\decals\decal_lean_left1_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_lean_left2_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_lean_left3_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_lean_left4_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_lean_left5_ca.paa"
];

_object setObjectTextureGlobal [2, _textures];

true