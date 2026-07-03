params["_unit"];

switch (typeOf _unit) do 
{
	case "GalleryDioramaUnit_01_IDAP_Doggo":
	{
		[_unit, ["\a3\Missions_F_AoW\Data\Img\Showcase_AoW_diorama_screen_inforgraphic_ca.paa",nil,-1],localize "STR_A3_Showcase_AoW_infographic1"] call BIS_fnc_initInspectable;
	};
	case "GalleryDioramaUnit_01_IDAP_UAV":
	{
		[_unit, ["\a3\Missions_F_AoW\Data\Img\Showcase_AoW_diorama_screen_inforgraphic_v2_ca.paa",nil,-1],localize "STR_A3_Showcase_AoW_infographic2"] call BIS_fnc_initInspectable;
	};
};