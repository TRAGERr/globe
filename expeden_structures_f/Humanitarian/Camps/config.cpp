class CfgPatches
{
	class Structures_Globe_Humanitarian_Camps
	{
		addonRootClass="A3_Structures_F_Globe";
		requiredAddons[]=
		{
			"Structures_Globe_Humanitarian"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Land_MedicalTent_01_floor_light_G_noLC",
			"Land_MedicalTent_01_floor_dark_G_noLC"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Land_MedicalTent_01_floor_base_F;
	class Land_MedicalTent_01_floor_light_G_noLC: Land_MedicalTent_01_floor_base_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_MedicalTent_01_floor_light_F.jpg";
		_generalMacro="Land_MedicalTent_01_floor_light_G_noLC";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_MedicalTent_01_floor_light_G_noLC0";
		model="\a3\structures_f_globe\Humanitarian\Camps\medicaltent_01_floor_light_g_nolc.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\structures_f_orange\humanitarian\camps\data\medicaltent_01_floor_light_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\structures_f_orange\humanitarian\camps\data\medicaltent_01_floor_f.rvmat"
		};
	};
	class Land_MedicalTent_01_floor_dark_G_noLC: Land_MedicalTent_01_floor_base_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_MedicalTent_01_floor_dark_F.jpg";
		_generalMacro="Land_MedicalTent_01_floor_dark_G_noLC";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_MedicalTent_01_floor_dark_G_noLC0";
		model="\a3\structures_f_globe\Humanitarian\Camps\medicaltent_01_floor_dark_g_nolc.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\structures_f_orange\humanitarian\camps\data\medicaltent_01_floor_dark_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\structures_f_orange\humanitarian\camps\data\medicaltent_01_floor_f.rvmat"
		};
	};
};
