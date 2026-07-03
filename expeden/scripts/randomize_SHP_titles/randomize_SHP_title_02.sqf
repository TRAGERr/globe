if (!isServer) exitWith {false};

private _object = param [0, objNull];

private _textures = selectRandom 
[
	"\a3\missions_f_beta\data\img\decals\decal_bonusH1_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_bonusH2_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_bonusH3_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_bonusH4_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_bonusH5_ca.paa"
];

_object setObjectTextureGlobal [3, _textures];

true