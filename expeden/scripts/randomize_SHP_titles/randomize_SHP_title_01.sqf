if (!isServer) exitWith {false};

private _object = param [0, objNull];

private _textures = selectRandom 
[
	"\a3\missions_f_beta\data\img\decals\decal_bonusA1_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_bonusA2_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_bonusA3_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_bonusA4_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_bonusA5_ca.paa"
];

_object setObjectTextureGlobal [3, _textures];

true