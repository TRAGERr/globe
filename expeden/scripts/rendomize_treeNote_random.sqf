if (!isServer) exitWith {false};

private _object = param [0, objNull];

private _treenote = selectRandom 
[
	"\A3\missions_f_orange\data\img\orange_compositions\tree\treenote_01_co.paa",
	"\A3\missions_f_orange\data\img\orange_compositions\tree\treenote_02_co.paa",
	"\A3\missions_f_orange\data\img\orange_compositions\tree\treenote_03_co.paa"
];

_object setObjectTextureGlobal [0, _treenote];

true