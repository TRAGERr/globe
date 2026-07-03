class CfgPatches
{
	class Props_Globe_Humanitarian_Supplies
	{
		addonRootClass="A3_Props_F_Globe";
		requiredAddons[]=
		{
			"Props_Globe_Humanitarian"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Orange_01_part_small",
			"Orange_01_splatter",
			"WaterBottle_01_splatter",
			"Orange_01_pard",
			"Pumpkin_01_part"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Items_base_F;
	class Land_Orange_01_F;
	class Land_Pumpkin_01_F;
	class Orange_01_part: Land_Orange_01_F
	{
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.041000001;
			verticalOffsetWorld=0;
			init="''";
		};
		simulation="house";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Orange_01_part.jpg";
		_generalMacro="Orange_01_part";
		displayName="$STR_Globe_CfgVehicles_Orange_01_part0";
		model="\A3\Props_F_Orange\Humanitarian\Supplies\Particles\Orange_01_part_F.p3d";
		destrType="DestructNo";
		class EventHandlers
		{
		};
	};
	class Orange_01_part_small: Orange_01_part
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Orange_01_part_small.jpg";
		_generalMacro="Orange_01_part_small";
		displayName="$STR_Globe_CfgVehicles_Orange_01_part_small0";
		model="\a3\data_f_orange\particleeffects\universal\orangedrop.p3d";
	};
	class Orange_01_splatter: Orange_01_part
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Orange_01_splatter.jpg";
		_generalMacro="Orange_01_splatter";
		displayName="$STR_Globe_CfgVehicles_Orange_01_splatter0";
		model="\a3\data_f_orange\particleeffects\universal\orangedrops.p3d";
	};
	class Pumpkin_01_part: Land_Pumpkin_01_F
	{
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.041000001;
			verticalOffsetWorld=0;
			init="''";
		};
		simulation="house";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Pumpkin_01_part.jpg";
		_generalMacro="Pumpkin_01_part";
		displayName="$STR_Globe_CfgVehicles_Pumpkin_01_part0";
		model="\A3\Props_F_Orange\Humanitarian\Supplies\Particles\Pumpkin_01_part_F.p3d";
		destrType="DestructNo";
		class EventHandlers
		{
		};
	};
	class WaterBottle_01_splatter: Items_base_F
	{
		author="O&T Expansion Eden";
		mapSize=0.80000001;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.5990001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\WaterBottle_01_splatter.jpg";
		_generalMacro="WaterBottle_01_splatter";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_WaterBottle_01_splatter0";
		model="\a3\data_f_mark\particleeffects\universal\waterdrops.p3d";
		DLC="Orange";
		icon="iconObject_1x1";
		editorSubcategory="EdSubcat_Humanitarian";
	};
};
