if (!isServer) exitWith {false};

private _object = param [0, objNull];

private _textures = selectRandom 
[
	"\a3\missions_f_beta\data\img\decals\decal_crouch1_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_crouch2_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_crouch3_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_crouch4_ca.paa",
	"\a3\missions_f_beta\data\img\decals\decal_crouch5_ca.paa"
];

_object setObjectTextureGlobal [0, _textures];

true