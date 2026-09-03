class CfgPatches
{
	class A3_Animals_F_Globe_Chicken
	{
		addonRootClass="A3_expEden_Animals_F";
		requiredAddons[]=
		{
			"A3_expEden_Animals_F",
			"A3_Animals_F_Beta",
			"A3_Data_F"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Animal_Base_F;
	class Fowl_Base_F: Animal_Base_F
	{
		class EventHandlers;
	};
	class Hen_random_F: Fowl_Base_F
	{
		editorPreview="\a3\editorpreviews_f_expEden\data\CfgVehicles\Hen_random_F.jpg";
		displayName="$STR_A3_Globe_CfgVehicles_Hen_random_F0";
		scope=2;
		class EventHandlers: EventHandlers
		{
			class Globe_anmlRndEH
			{
				postInit="(_this # 0) call bis_fnc_animalRandomization;";
			};
		};
	};
	class Cock_random_F: Fowl_Base_F
	{
		editorPreview="\a3\editorpreviews_f_expEden\data\CfgVehicles\Cock_random_F.jpg";
		displayName="$STR_A3_Globe_CfgVehicles_Cock_random_F0";
		scope=2;
		class EventHandlers: EventHandlers
		{
			class Globe_anmlRndEH
			{
				postInit="(_this # 0) call bis_fnc_animalRandomization;";
			};
		};
	};
	class Cock_white_F: Cock_random_F
	{
		editorPreview="\a3\editorpreviews_f_expEden\data\CfgVehicles\Cock_white_F.jpg";
		scope=2;
		class EventHandlers: EventHandlers
		{
			class Globe_anmlRndEH: Globe_anmlRndEH
			{
				postInit="";
			};
		};
	};
};
