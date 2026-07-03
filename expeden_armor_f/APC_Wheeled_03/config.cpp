class CfgPatches
{
	class A3_Armor_F_expEden_APC_Wheeled_03
	{
		addonRootClass="A3_Armor_F_expEden";
		requiredAddons[]=
		{
			"A3_Armor_F_expEden"
		};
		requiredVersion=0.1;
		units[]=
		{
			"B_APC_Wheeled_03_cannon_2_F",
			"B_APC_Wheeled_03_cannon_3_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class B_APC_Wheeled_03_base_F;
	class B_APC_Wheeled_03_cannon_F: B_APC_Wheeled_03_base_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\B_APC_Wheeled_03_cannon_F.jpg";
		class SimpleObject
		{
			init="[this, 'Guerilla_01', false, false] call bis_fnc_initVehicle";
		};
		scope=2;
		faction="BLU_G_F";
		crew="B_L_Soldier_3_F";
		displayName="$STR_A3_CFGVEHICLES_APC_WHEELED_03_WAPC1";
		DLC="Tacops";
	};
	class B_APC_Wheeled_03_cannon_2_F: B_APC_Wheeled_03_cannon_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\B_APC_Wheeled_03_cannon_2_F.jpg";
		class SimpleObject
		{
			init="[this, 'Guerilla_02', false, false] call bis_fnc_initVehicle";
		};
		displayName="$STR_A3_CFGVEHICLES_APC_WHEELED_03_WAPC2";
		DLC="Tacops";
		hiddenSelectionsTextures[]=
		{
			"A3\Data_F_Tacops\data\APC_Wheeled_03_Ext_IG_02_CO.paa",
			"A3\Data_F_Tacops\data\APC_Wheeled_03_Ext2_IG_02_CO.paa",
			"A3\Data_F_Tacops\data\RCWS30_IG_02_CO.paa",
			"A3\Data_F_Tacops\data\APC_Wheeled_03_Ext_alpha_IG_02_CO.paa",
			"A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
			"A3\armor_f\data\cage_sand_co.paa"
		};
	};
	class B_APC_Wheeled_03_cannon_3_F: B_APC_Wheeled_03_cannon_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\B_APC_Wheeled_03_cannon_3_F.jpg";
		class SimpleObject
		{
			init="[this, 'Guerilla_03', false, false] call bis_fnc_initVehicle";
		};
		displayName="$STR_A3_CFGVEHICLES_APC_WHEELED_03_WAPC3";
		DLC="Tacops";
		hiddenSelectionsTextures[]=
		{
			"A3\Data_F_Tacops\data\APC_Wheeled_03_Ext_IG_03_CO.paa",
			"A3\Data_F_Tacops\data\APC_Wheeled_03_Ext2_IG_03_CO.paa",
			"A3\Data_F_Tacops\data\RCWS30_IG_03_CO.paa",
			"A3\Data_F_Tacops\data\APC_Wheeled_03_Ext_alpha_IG_03_CO.paa",
			"A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
			"A3\armor_f\data\cage_sand_co.paa"
		};
	};
};
