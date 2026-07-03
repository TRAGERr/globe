if (!isServer) exitWith {false};

private _object = param [0, objNull];

private _textures = selectRandom 
[
	"\a3\missions_f_beta\data\img\decals\decal_vault1_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_vault2_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_vault3_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_vault4_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_vault5_ca.paa"
];

_object setObjectTextureGlobal [3, _textures];

true