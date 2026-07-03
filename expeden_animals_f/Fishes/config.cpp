class CfgPatches
{
	class A3_Animals_F_Globe_Fishes
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
	class Fish_Base_F;
	class Salema_F: Fish_Base_F
	{
		editorPreview="\a3\editorpreviews_f_expEden\data\CfgVehicles\Salema_F.jpg";
		scope=2;
	};
	class Ornate_random_F: Fish_Base_F
	{
		editorPreview="\a3\editorpreviews_f_expEden\data\CfgVehicles\Ornate_random_F.jpg";
		displayName="$STR_A3_Globe_CfgVehicles_Ornate_random_F0";
		scope=2;
	};
	class Mackerel_F: Fish_Base_F
	{
		editorPreview="\a3\editorpreviews_f_expEden\data\CfgVehicles\Mackerel_F.jpg";
		scope=2;
	};
	class Tuna_F: Fish_Base_F
	{
		editorPreview="\a3\editorpreviews_f_expEden\data\CfgVehicles\Tuna_F.jpg";
		scope=2;
	};
	class Mullet_F: Fish_Base_F
	{
		editorPreview="\a3\editorpreviews_f_expEden\data\CfgVehicles\Mullet_F.jpg";
		scope=2;
	};
	class CatShark_F: Fish_Base_F
	{
		editorPreview="\a3\editorpreviews_f_expEden\data\CfgVehicles\CatShark_F.jpg";
		scope=2;
	};
};
