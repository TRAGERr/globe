class CfgPatches
{
	class Structures_Globe_Households_House_Small03
	{
		addonRootClass="A3_Structures_F_Globe";
		requiredAddons[]=
		{
			"Structures_Globe_Households"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Land_i_House_Small_03_V1_F;
	class Land_i_House_Small_03_V1_dam_F: Land_i_House_Small_03_V1_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_i_House_Small_03_V1_dam_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_i_House_Small_03_V1_dam_F0";
	};
};
