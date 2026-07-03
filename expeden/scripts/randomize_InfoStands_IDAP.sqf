if (!isServer) exitWith {false};

private _object = param [0, objNull];

private _info = selectRandom 
[
	"\a3\missions_f_orange\Data\Img\Faction_IDAP\info_aid1_CO.paa",
	"\a3\missions_f_orange\Data\Img\Faction_IDAP\info_aid2_CO.paa",
	"\a3\missions_f_orange\Data\Img\Faction_IDAP\info_aid3_CO.paa",
	"\a3\missions_f_orange\Data\Img\Faction_IDAP\info_demining_drone_CO.paa",
	"\a3\missions_f_orange\Data\Img\Faction_IDAP\info_drone_CO.paa",
	"\a3\missions_f_orange\Data\Img\Faction_IDAP\info_eh302_CO.paa",
	"\a3\missions_f_orange\Data\Img\Faction_IDAP\info_idap1_CO.paa",
	"\a3\missions_f_orange\Data\Img\Faction_IDAP\info_idap2_CO.paa",
	"\a3\missions_f_orange\Data\Img\Faction_IDAP\info_idap3_CO.paa",
	"\a3\missions_f_orange\Data\Img\Faction_IDAP\info_idap4_CO.paa",
	"\a3\missions_f_orange\Data\Img\Faction_IDAP\info_idap5_CO.paa",
	"\a3\missions_f_orange\Data\Img\Faction_IDAP\info_ihl1_CO.paa",
	"\a3\missions_f_orange\Data\Img\Faction_IDAP\info_ihl2_CO.paa",
	"\a3\missions_f_orange\Data\Img\Faction_IDAP\info_ihl3_CO.paa",
	"\a3\missions_f_orange\Data\Img\Faction_IDAP\info_mb_4wd_CO.paa",
	"\a3\missions_f_orange\Data\Img\Faction_IDAP\info_offroad_CO.paa",
	"\a3\missions_f_orange\Data\Img\Faction_IDAP\info_ugv_CO.paa",
	"\a3\missions_f_orange\Data\Img\Faction_IDAP\info_utility_drone_CO.paa",
	"\a3\missions_f_orange\Data\Img\Faction_IDAP\info_utility_drone_medical_CO.paa",
	"\a3\missions_f_orange\Data\Img\Faction_IDAP\info_van_ambulance_CO.paa",
	"\a3\missions_f_orange\Data\Img\Faction_IDAP\info_van_cargo_CO.paa",
	"\a3\missions_f_orange\Data\Img\Faction_IDAP\info_van_transport_CO.paa",
	"\a3\missions_f_orange\Data\Img\Faction_IDAP\info_vr1_CO.paa",
	"\a3\missions_f_orange\Data\Img\Faction_IDAP\info_vr2_CO.paa",
	"\a3\missions_f_orange\Data\Img\Faction_IDAP\info_vr3_CO.paa",
	"\a3\missions_f_orange\Data\Img\Faction_IDAP\info_zamak_transport_CO.paa",
	"\a3\missions_f_orange\Data\Img\Faction_IDAP\info_zamak_transport_covered_CO.paa",
	"\a3\missions_f_orange\Data\Img\Faction_IDAP\info_zamak_water_CO.paa"
];

_object setObjectTextureGlobal [0, _info];

true