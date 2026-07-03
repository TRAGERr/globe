if (!isServer) exitWith {false};

private _object = param [0, objNull];

private _textures = selectRandom 
[
	"\a3\missions_f_beta\data\img\decals\decal_target_right1_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_target_right2_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_target_right3_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_target_right4_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_target_right5_ca.paa"
];

_object setObjectTextureGlobal [3, _textures];

true