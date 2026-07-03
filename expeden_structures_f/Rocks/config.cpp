class CfgPatches
{
	class Structures_Globe_Rocks
	{
		addonRootClass="A3_Structures_F_Globe";
		requiredAddons[]=
		{
			"A3_Structures_F_Globe"
		};
		requiredVersion=0.1;
		units[]=
		{
			"SharpStones_erosion_Water_bunch",
			"SharpStones_erosion_Water_few"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Land_SharpStones_erosion;
	class SharpStones_erosion_Water_bunch: Land_SharpStones_erosion
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\SharpStones_erosion_Water_bunch.jpg";
		_generalMacro="SharpStones_erosion_Water_bunch";
		displayName="$STR_Globe_CfgVehicles_SharpStones_erosion_Water_bunch0";
		model="\A3\Plants_F\Clutter\c_sharpStones_erosion.p3d";
	};
	class SharpStones_erosion_Water_few: Land_SharpStones_erosion
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\SharpStones_erosion_Water_few.jpg";
		_generalMacro="SharpStones_erosion_Water_few";
		displayName="$STR_Globe_CfgVehicles_SharpStones_erosion_Water_few0";
		model="\A3\Plants_F\Clutter\c_sharpStones_erosion_v2.p3d";
	};
};
