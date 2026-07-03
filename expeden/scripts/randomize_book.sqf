if (!isServer) exitWith {false};

private _object = param [0, objNull];

private _textures = selectRandom 
[
	"\a3\Props_F_Enoch\Items\Documents\data\Book_01_co.paa",
	"\a3\Props_F_Enoch\Items\Documents\data\Book_02_co.paa",
	"\a3\Props_F_Enoch\Items\Documents\data\Book_03_co.paa",
	"\a3\Props_F_Enoch\Items\Documents\data\Book_04_co.paa",
	"\a3\Props_F_Enoch\Items\Documents\data\Book_05_co.paa",
	"\a3\Props_F_Enoch\Items\Documents\data\Book_06_co.paa"
];

_object setObjectTextureGlobal [0, _textures];

true