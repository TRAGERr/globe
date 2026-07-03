if (!isServer) exitWith {};

private _object = param [0, objNull];

private _idap = selectRandom 
[
	"\a3\missions_f_orange\data\img\showcase_lawsofwar\whiteboard_main_co.paa",
	"\a3\missions_f_orange\data\img\faction_idap\whiteboard_area_activity_co.paa",
	"\a3\missions_f_orange\data\img\faction_idap\whiteboard_area_aid_co.paa",
	"\a3\missions_f_orange\data\img\faction_idap\whiteboard_area_air_co.paa",
	"\a3\missions_f_orange\data\img\faction_idap\whiteboard_area_autonomous_co.paa",
	"\a3\missions_f_orange\data\img\faction_idap\whiteboard_area_expo_co.paa",
	"\a3\missions_f_orange\data\img\faction_idap\whiteboard_area_idap_co.paa",
	"\a3\missions_f_orange\data\img\faction_idap\whiteboard_area_ihl_co.paa",
	"\a3\missions_f_orange\data\img\faction_idap\whiteboard_area_kiosk_co.paa",
	"\a3\missions_f_orange\data\img\faction_idap\whiteboard_area_land_co.paa",
	"\a3\missions_f_orange\data\img\faction_idap\whiteboard_idap1_co.paa",
	"\a3\missions_f_orange\data\img\faction_idap\whiteboard_idap2_co.paa",
	"\a3\missions_f_orange\data\img\faction_idap\whiteboard_idap3_co.paa",
	"\a3\missions_f_orange\data\img\faction_idap\whiteboard_idap4_co.paa",
	"\a3\missions_f_orange\data\img\faction_idap\whiteboard_idap5_co.paa",
	"\a3\missions_f_orange\data\img\faction_idap\whiteboard_idap6_co.paa",
	"\a3\missions_f_orange\data\img\orange_compositions\a1\whiteboard_campsplendid_co.paa",
	"\a3\missions_f_orange\data\img\orange_compositions\a1\whiteboard_campsplendid_postwar_co.paa"
];

_object setObjectTextureGlobal [0, _idap];
if (_idap == '\a3\missions_f_orange\data\img\orange_compositions\a1\whiteboard_campsplendid_postwar_co.paa') then
{
    _object setObjectMaterialGlobal [0, "a3\props_f_globe\Civilian\InfoBoards\Data\mapboard_camo_bulletholes.rvmat"];
};

true