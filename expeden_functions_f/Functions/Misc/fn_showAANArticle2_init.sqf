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
		//_articleAAN02 = execVM "\A3\Functions_F_Globe\Scripts\Articles\AAN_02.sqf";
		//_articleAAN02 = [] spawn BIS_Orange_fnc_showCampaignArticle;
		_articleAAN02 = [] execVM "\a3\Missions_F_Orange\Campaign\Functions\fn_showCampaignArticle.sqf"
	},
	{},
	[],
	0.5,
	0,
	false,
	false
] call bis_fnc_holdActionAdd;