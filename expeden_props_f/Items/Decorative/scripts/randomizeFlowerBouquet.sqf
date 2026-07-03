if (!isServer) exitWith {};
private _object = param [0, objNull];

private _texture = selectRandom 
[
	"a3\Props_F_AoW\Items\Decorative\Data\flowerbouquet_01_f_orange_co.paa",
	"a3\Props_F_AoW\Items\Decorative\Data\flowerbouquet_01_f_red_co.paa",
	"a3\Props_F_AoW\Items\Decorative\Data\flowerbouquet_01_f_white_co.paa"
];

_object setObjectTextureGlobal [0, _texture];

_texture