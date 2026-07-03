if (!isServer) exitWith {false};

private _object = param [0, objNull];

private _textures = selectRandom 
[
	"A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_01_CO.paa",
	"A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_02_CO.paa",
	"A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_03_CO.paa",
	"A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_05_CO.paa",
	"A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_06_CO.paa",
	"A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_07_CO.paa",
	"A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_08_CO.paa",
	"A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_09_CO.paa"
];

_object setObjectTextureGlobal [0, _textures];

true