if (!isServer) exitWith {false};

private _object = param [0, objNull];

private _textures = selectRandom 
[
	"\a3\missions_f_beta\data\img\decals\decal_watch_out1_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_watch_out2_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_watch_out3_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_watch_out4_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_watch_out5_ca.paa"
];

_object setObjectTextureGlobal [3, _textures];

true