params["_object"];

switch (typeOf _object) do 
{
	case "FeltBase_01_theHumanCost":
	{
		[_object, ["\a3\Missions_F_AoW\Data\Img\Showcase_AoW_stand_text_01_ca.paa",nil,-1],localize "STR_A3_Showcase_AoW_stand_text_01"] call BIS_fnc_initInspectable;
	};
	case "FeltBase_01_beInTheLoop":
	{
		[_object, ["\a3\Missions_F_AoW\Data\Img\Showcase_AoW_stand_text_02_ca.paa",nil,-1],localize "STR_A3_Showcase_AoW_stand_text_02"] call BIS_fnc_initInspectable;
	};
};