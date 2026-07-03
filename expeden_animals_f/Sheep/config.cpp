class CfgPatches
{
	class A3_Animals_F_Globe_Sheep
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
	class Sheep_random_F: Animal_Base_F
	{
		editorPreview="\a3\editorpreviews_f_expEden\data\CfgVehicles\Sheep_random_F.jpg";
		displayName="$STR_A3_Globe_CfgVehicles_Sheep_random_F0";
		scope=2;
		class EventHandlers: EventHandlers
		{
			postInit="(_this select 0) call bis_fnc_animalRandomization;";
		};
	};
};
