if (!isServer) exitWith {false};

private _object = param [0, objNull];

private _textures = selectRandom 
[
	"\a3\missions_f_beta\data\img\decals\decal_noshoot_target1_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_noshoot_target2_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_noshoot_target3_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_noshoot_target4_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_noshoot_target5_ca.paa"
];

_object setObjectTextureGlobal [0, _textures];

true