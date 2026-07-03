if (!isServer) exitWith {false};

private _object = param [0, objNull];

private _textures = selectRandom 
[
	"\a3\missions_f_beta\data\img\decals\decal_bonusD1_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_bonusD2_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_bonusD3_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_bonusD4_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_bonusD5_ca.paa"
];

_object setObjectTextureGlobal [3, _textures];

true