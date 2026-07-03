class CfgPatches
{
	class Structures_Globe_Industrial_ConcreteMixingPlant
	{
		addonRootClass="A3_Structures_F_Globe";
		requiredAddons[]=
		{
			"Structures_Globe_Industrial"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgVehicles
{
	class House_F;
	class Land_cmp_Shed_dam_F: House_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_cmp_Shed_dam_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_cmp_Shed_dam_F0";
	};
};
