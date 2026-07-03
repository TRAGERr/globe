if (!isServer) exitWith {};
params["_lantern"];

_lantern setObjectTextureGlobal
[
	0,
	selectRandom
	[
		"\a3\Props_F_Decade\Civilian\Camping\Data\Lantern_01_Black_CO.paa",
		"\a3\Props_F_Decade\Civilian\Camping\Data\Lantern_01_Blue_CO.paa",
		"\a3\Props_F_Decade\Civilian\Camping\Data\Lantern_01_Green_CO.paa",
		"\a3\Props_F_Decade\Civilian\Camping\Data\Lantern_01_Red_CO.paa"
	]
];