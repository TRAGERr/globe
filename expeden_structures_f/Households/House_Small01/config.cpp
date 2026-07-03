class CfgPatches
{
	class Structures_Globe_Households_House_Small01
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
	class Land_i_House_Small_01_V1_F;
	class Land_u_House_Small_01_V1_F;
	class Land_u_House_Small_01_V1_dam_F: Land_u_House_Small_01_V1_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_u_House_Small_01_V1_dam_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_u_House_Small_01_V1_dam_F0";
	};
	class Land_i_House_Small_01_V1_dam_F: Land_i_House_Small_01_V1_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_i_House_Small_01_V1_dam_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_i_House_Small_01_V1_dam_F0";
	};
	class Land_i_House_Small_01_V2_dam_F: Land_i_House_Small_01_V1_dam_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_i_House_Small_01_V2_dam_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_i_House_Small_01_V2_dam_F0";
	};
	class Land_i_House_Small_01_V3_dam_F: Land_i_House_Small_01_V1_dam_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_i_House_Small_01_V3_dam_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_i_House_Small_01_V3_dam_F0";
	};
};
