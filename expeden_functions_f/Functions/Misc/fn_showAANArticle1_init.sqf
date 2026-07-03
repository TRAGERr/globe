params["_object"];
[ 
	_object,
	localize "STR_A3_Globe_article_aan_holdAction_name",
	"\a3\Missions_F_Orange\Data\Img\Showcase_LawsOfWar\action_view_article_ca.paa",
	"\a3\Missions_F_Orange\Data\Img\Showcase_LawsOfWar\action_view_article_ca.paa",
	"_this distance _target < 1.5",
	"_this distance _target < 1.5",
	nil,
	{},
	{
		_articleAAN01 = execVM "\A3\Functions_F_Globe\Scripts\Articles\AAN_01.sqf";
	},
	{},
	[],
	0.5,
	0,
	false,
	false
] call bis_fnc_holdActionAdd;