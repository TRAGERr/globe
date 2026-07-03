class CfgPatches
{
	class A3_Animals_F_Globe_Dog
	{
		addonRootClass="A3_expEden_Animals_F";
		requiredAddons[]=
		{
			"A3_expEden_Animals_F"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Animal;
	class Animal_Base_F: Animal
	{
		class EventHandlers;
	};
	class Dog_Base_F: Animal_Base_F
	{
		class EventHandlers: EventHandlers
		{
		};
	};
	class Alsatian_Base_F: Dog_Base_F
	{
		class EventHandlers: EventHandlers
		{
		};
	};
	class Fin_Base_F: Dog_Base_F
	{
		class EventHandlers: EventHandlers
		{
		};
	};
	class Fin_sand_F: Fin_Base_F
	{
		editorPreview="\a3\editorpreviews_f_expEden\data\CfgVehicles\Fin_sand_F.jpg";
		scope=2;
	};
	class Fin_blackwhite_F: Fin_Base_F
	{
		editorPreview="\a3\editorpreviews_f_expEden\data\CfgVehicles\Fin_blackwhite_F.jpg";
		scope=2;
	};
	class Fin_ocherwhite_F: Fin_Base_F
	{
		editorPreview="\a3\editorpreviews_f_expEden\data\CfgVehicles\Fin_ocherwhite_F.jpg";
		scope=2;
	};
	class Fin_tricolour_F: Fin_Base_F
	{
		editorPreview="\a3\editorpreviews_f_expEden\data\CfgVehicles\Fin_tricolour_F.jpg";
		scope=2;
	};
	class Fin_random_F: Fin_Base_F
	{
		editorPreview="\a3\editorpreviews_f_expEden\data\CfgVehicles\Fin_random_F.jpg";
		displayName="$STR_A3_Globe_CfgVehicles_Fin_random_F0";
		scope=2;
		class EventHandlers: EventHandlers
		{
			postInit="(_this # 0) call bis_fnc_animalRandomization;";
		};
	};
	class Alsatian_Sand_F: Alsatian_Base_F
	{
		editorPreview="\a3\editorpreviews_f_expEden\data\CfgVehicles\Alsatian_Sand_F.jpg";
		scope=2;
	};
	class Alsatian_Black_F: Alsatian_Base_F
	{
		editorPreview="\a3\editorpreviews_f_expEden\data\CfgVehicles\Alsatian_Black_F.jpg";
		scope=2;
	};
	class Alsatian_Sandblack_F: Alsatian_Base_F
	{
		editorPreview="\a3\editorpreviews_f_expEden\data\CfgVehicles\Alsatian_Sandblack_F.jpg";
		scope=2;
	};
	class Alsatian_Random_F: Alsatian_Base_F
	{
		editorPreview="\a3\editorpreviews_f_expEden\data\CfgVehicles\Alsatian_Random_F.jpg";
		displayName="$STR_A3_Globe_CfgVehicles_Alsatian_random_F0";
		scope=2;
		class EventHandlers: EventHandlers
		{
			postInit="(_this # 0) call bis_fnc_animalRandomization;";
		};
	};
};
