class CfgPatches
{
	class Props_Globe_Items_Electronics
	{
		addonRootClass="A3_Props_F_Globe";
		requiredAddons[]=
		{
			"A3_Props_F_Globe_Items"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Laptop_02_unfolded_ofp_video"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Land_Laptop_02_unfolded_F;
	class Laptop_02_unfolded_ofp_video: Land_Laptop_02_unfolded_F
	{
		scope=2;
		scopeCurator=2;
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Laptop_02_unfolded_ofp_video.jpg";
		_generalMacro="Laptop_02_unfolded_ofp_video";
		displayName="$STR_Globe_Laptop_02_unfolded_ofp_video0";
		class EventHandlers
		{
			postInit="_this spawn expEden_fnc_playVideoLoopOFP;";
		};
	};
};
