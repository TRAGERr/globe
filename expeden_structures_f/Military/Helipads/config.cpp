class CfgPatches
{
	class Structures_Globe_Military_Military
	{
		addonRootClass="A3_Structures_F_Globe";
		requiredAddons[]=
		{
			"A3_Structures_F_Globe_Military"
		};
		requiredVersion=0.1;
		units[]=
		{
			"JumpTarget_decal",
			"Land_HelipadCircle_G_noLC",
			"Land_HelipadCivil_G_noLC",
			"Land_HelipadRescue_G_noLC",
			"Land_HelipadSquare_G_noLC"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Land_BagFence_End_F;
	class Helipad_base_F;
	class HelipadCivil_decal: Helipad_base_F
	{
		mapSize=10;
		_generalMacro="HelipadCivil_decal";
		scope=1;
		scopeCurator=0;
		displayName="$STR_Globe_HelipadCivil_decal";
		hiddenSelections[]=
		{
			"usertexture"
		};
		hiddenSelectionsTextures[]=
		{
			"a3\structures_f\mil\helipads\data\helipadcivil_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"a3\structures_f\mil\helipads\data\helipads.rvmat"
		};
		model="\A3\Misc_F\Helpers\UserTexture10m.p3d";
		accuracy=1000;
	};
	class HelipadSquare_decal: HelipadCivil_decal
	{
		_generalMacro="HelipadSquare_decal";
		displayName="$STR_Globe_HelipadSquare_decal";
		hiddenSelectionsTextures[]=
		{
			"a3\structures_f\mil\helipads\data\helipadsquare_ca.paa"
		};
		icon="iconObject_1x1";
		scope=1;
		scopeCurator=0;
	};
	class HelipadCircle_decal: HelipadCivil_decal
	{
		_generalMacro="HelipadCircle_decal";
		displayName="$STR_Globe_HelipadCircle_decal";
		hiddenSelectionsTextures[]=
		{
			"a3\structures_f\mil\helipads\data\helipadcircle_ca.paa"
		};
		scope=1;
		scopeCurator=0;
	};
	class HelipadRescue_decal: HelipadCivil_decal
	{
		_generalMacro="HelipadRescue_decal";
		displayName="$STR_Globe_HelipadRescue_decal";
		hiddenSelectionsTextures[]=
		{
			"a3\structures_f\mil\helipads\data\helipadrescue_ca.paa"
		};
		scope=1;
		scopeCurator=0;
	};
	class JumpTarget_decal: HelipadCivil_decal
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\JumpTarget_decal.jpg";
		_generalMacro="JumpTarget_decal";
		displayName="$STR_Globe_JumpTarget_decal";
		hiddenSelectionsTextures[]=
		{
			"a3\structures_f\mil\helipads\data\jumptarget_ca.paa"
		};
		scope=2;
		scopeCurator=2;
	};
	class Land_HelipadCircle_G_noLC: Helipad_base_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Land_HelipadCircle_F.jpg";
		_generalMacro="Land_HelipadCircle_G_noLC";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_HelipadCircle_G_noLC0";
		model="\a3\structures_f_globe\Military\Helipads\helipadcircle_g_nolc.p3d";
		accuracy=1000;
	};
	class Land_HelipadCivil_G_noLC: Helipad_base_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Land_HelipadCivil_F.jpg";
		_generalMacro="Land_HelipadCivil_G_noLC";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_HelipadCivil_G_noLC0";
		model="\a3\structures_f_globe\Military\Helipads\helipadcivil_g_nolc.p3d";
		accuracy=1000;
	};
	class Land_HelipadRescue_G_noLC: Helipad_base_F
	{
		author="O&T Expansion Eden";
		mapSize=12.53;
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Land_HelipadRescue_F.jpg";
		_generalMacro="Land_HelipadRescue_G_noLC";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_HelipadRescue_G_noLC0";
		model="\a3\structures_f_globe\Military\Helipads\helipadrescue_g_nolc.p3d";
		icon="iconObject_1x1";
		accuracy=1000;
	};
	class Land_HelipadSquare_G_noLC: Helipad_base_F
	{
		author="O&T Expansion Eden";
		mapSize=11.92;
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Land_HelipadSquare_F.jpg";
		_generalMacro="Land_HelipadSquare_G_noLC";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_HelipadSquare_G_noLC0";
		model="\a3\structures_f_globe\Military\Helipads\helipadsquare_g_nolc.p3d";
		icon="iconObject_1x1";
		accuracy=1000;
	};
};
