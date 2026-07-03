if (!isServer) exitWith {false};

private _object = param [0, objNull];

private _textures = selectRandom 
[
	"\a3\missions_f_beta\data\img\decals\decal_rifle1_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_rifle2_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_rifle3_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_rifle4_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_rifle5_ca.paa"
];

_object setObjectTextureGlobal [3, _textures];

true