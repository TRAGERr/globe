if (!isServer) exitWith {};

private _object = param [0, objNull];

private _books = selectRandom 
[
	"\A3\Missions_F_AoW\Data\Img\book_cover_culture_co.paa",
	"\A3\Missions_F_AoW\Data\Img\book_cover_latin_co.paa",
	"\a3\Props_F_Enoch\Items\Documents\data\Paperback_co.paa",
	"\a3\Props_F_Enoch\Items\Documents\data\Book_01_co.paa",
	"\a3\Props_F_Enoch\Items\Documents\data\Book_02_co.paa",
	"\a3\Props_F_Enoch\Items\Documents\data\Book_03_co.paa",
	"\a3\Props_F_Enoch\Items\Documents\data\Book_04_co.paa",
	"\a3\Props_F_Enoch\Items\Documents\data\Book_05_co.paa",
	"\a3\Props_F_Enoch\Items\Documents\data\Book_06_co.paa"
];
_object setObjectTextureGlobal [0, _books];

true