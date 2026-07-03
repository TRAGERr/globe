class CfgPatches
{
	class Structures_Globe_Military_TentHangar
	{
		addonRootClass="A3_Structures_F_Globe";
		requiredAddons[]=
		{
			"A3_Structures_F_Globe_Military"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Land_TentHangar_V1_F;
	class Land_TentHangar_V1_dam_F: Land_TentHangar_V1_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_TentHangar_V1_dam_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_TentHangar_V1_dam_F0";
	};
};
