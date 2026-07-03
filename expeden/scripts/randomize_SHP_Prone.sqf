if (!isServer) exitWith {false};

private _object = param [0, objNull];

private _textures = selectRandom 
[
	"\a3\missions_f_beta\data\img\decals\decal_prone1_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_prone2_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_prone3_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_prone4_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_prone5_ca.paa"
];

_object setObjectTextureGlobal [1, _textures];

true