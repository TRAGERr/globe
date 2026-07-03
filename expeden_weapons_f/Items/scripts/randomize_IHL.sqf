if (!isServer) exitWith {false};

private _object = param [0, objNull];

private _ihl = selectRandom 
[
		"\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_distinction_CA.paa",
		"\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_good_faith_CA.paa",
		"\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_ihl_CA.paa",
		"\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_military_necessity_CA.paa",
		"\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_mine_hunt_CA.paa",
		"\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_open_day_CA.paa",
		"\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_precaution_CA.paa",
		"\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_prisoners_CA.paa",
		"\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_proportionality_CA.paa",
		"\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_showcase_low_CA.paa",
		"\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_unnecessary_suffering_CA.paa"
];

_object setObjectTextureGlobal [0, _ihl];

true