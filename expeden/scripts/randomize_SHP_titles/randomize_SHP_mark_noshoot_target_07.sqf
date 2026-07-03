if (!isServer) exitWith {false};

private _object = param [0, objNull];

private _textures = selectRandom 
[
	"\a3\missions_f_beta\data\img\decals\decal_target_target1_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_target_target2_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_target_target3_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_target_target4_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_target_target5_ca.paa"
];

_object setObjectTextureGlobal [3, _textures];

true