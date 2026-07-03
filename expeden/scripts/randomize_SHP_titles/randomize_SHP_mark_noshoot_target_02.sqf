if (!isServer) exitWith {false};

private _object = param [0, objNull];

private _textures = selectRandom 
[
	"\a3\missions_f_beta\data\img\decals\decal_penetrate1_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_penetrate2_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_penetrate3_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_penetrate4_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_penetrate5_ca.paa"
];

_object setObjectTextureGlobal [3, _textures];

true