if (!isServer) exitWith {false};

private _object = param [0, objNull];

private _textures = selectRandom 
[
	"\a3\missions_f_beta\data\img\decals\decal_bonusB1_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_bonusB2_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_bonusB3_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_bonusB4_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_bonusB5_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_bonusC1_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_bonusC2_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_bonusC3_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_bonusC4_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_bonusC5_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_bonusD1_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_bonusD2_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_bonusD3_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_bonusD4_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_bonusD5_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_bonusH1_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_bonusH2_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_bonusH3_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_bonusH4_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_bonusH5_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_bonusA1_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_bonusA2_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_bonusA3_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_bonusA4_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_bonusA5_ca.paa"
];

_object setObjectTextureGlobal [3, _textures];

true