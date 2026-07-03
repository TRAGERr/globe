class CfgPatches
{
	class Structures_Globe_Cultural_Church_04
	{
		addonRootClass="A3_Structures_F_Globe";
		requiredAddons[]=
		{
			"A3_Structures_F_Globe_Cultural"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Church_04_small_lightyellow_damaged_bitum"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Land_Church_04_small_lightyellow_damaged_F;
	class Church_04_small_lightyellow_damaged_bitum: Land_Church_04_small_lightyellow_damaged_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Church_04_small_lightyellow_damaged_bitum.jpg";
		_generalMacro="Church_04_small_lightyellow_damaged_bitum";
		displayName="$STR_Globe_CfgVehicles_Church_04_small_lightyellow_damaged_bitum0";
		model="\A3\Structures_F_Enoch\Cultural\Church_04\Church_04_small_damaged_F.p3d";
	};
};
