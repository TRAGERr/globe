class CfgPatches
{
	class A3_Structures_F_Globe_Civilian_SportsGrounds
	{
		addonRootClass="A3_Structures_F_Globe";
		requiredAddons[]=
		{
			"A3_Structures_F_Globe_Civilian"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Land_FinishGate_01_narrow_empty",
			"Land_FinishGate_01_wide_empty",
			"Land_BC_Basket_02_F",
			"Land_SwedishWall_01_F",
			"Land_VaultingBox_large_F",
			"Land_VaultingGoat_F",
			"Land_Bench_06_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class ThingX;
	class SportsGrounds_base_F;
	class Land_BC_Basket_02_F: SportsGrounds_base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		mapSize=2.0309901;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.99000001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Land_BC_Basket_02_F.jpg";
		_generalMacro="Land_BC_Basket_02_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgVehicles_Land_BC_Basket_F0";
		model="\A3\Structures_F_Enoch\Furniture\School_Equipment\basketball_korb.p3d";
		icon="iconObject_2x3";
		DLC="Enoch";
		editorCategory="EdCat_Things";
		editorSubcategory="EdSubcat_Sports";
		vehicleClass="Objects_Sports";
		accuracy=1000;
		keepHorizontalPlacement=1;
		reversed=1;
	};
	class Land_SwedishWall_01_F: SportsGrounds_base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		mapSize=9.1900005;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.47499999;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Land_SwedishWall_01_F.jpg";
		_generalMacro="Land_SwedishWall_01_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_Globe_CfgVehicles_Land_SwedishWall_01_F0";
		model="\A3\structures_f_enoch\furniture\school_equipment\gym_ladder.p3d";
		destrType="DestructWall";
		icon="iconObject_1x2";
		editorCategory="EdCat_Things";
		editorSubcategory="EdSubcat_Sports";
		vehicleClass="Objects_Sports";
		DLC="Enoch";
		accuracy=1000;
		cost=5000;
	};
	class Land_VaultingBox_large_F: ThingX
	{
		author="$STR_A3_Bohemia_Interactive";
		mapSize=1.95;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.419;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Land_VaultingBox_large_F.jpg";
		_generalMacro="Land_VaultingBox_large_F";
		scope=2;
		scopeCurator=2;
		icon="iconObject_1x2";
		DLC="Enoch";
		displayName="$STR_expEden_vaulting_box_large";
		model="\A3\structures_f_enoch\furniture\school_equipment\vaulting_box_large.p3d";
		destrType="DestructNo";
		editorCategory="EdCat_Things";
		editorSubcategory="EdSubcat_Sports";
		vehicleClass="Objects_Sports";
		accuracy=1000;
		cost=1000;
	};
	class Land_VaultingBox_small_F: Land_VaultingBox_large_F
	{
		author="$STR_A3_Bohemia_Interactive";
		mapSize=0.85000002;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.24699999;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Land_VaultingBox_small_F.jpg";
		_generalMacro="Land_VaultingBox_small_F";
		displayName="$STR_expEden_vaulting_box_small";
		model="\A3\structures_f_enoch\furniture\school_equipment\vaulting_box_small.p3d";
	};
	class Land_VaultingGoat_F: Land_VaultingBox_large_F
	{
		author="$STR_A3_Bohemia_Interactive";
		mapSize=0.95501107;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.24699999;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Land_VaultingGoat_F.jpg";
		_generalMacro="Land_VaultingGoat_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_expEden_vaulting_goat";
		model="\A3\structures_f_enoch\furniture\school_equipment\vaulting_goat.p3d";
		icon="iconObject_5x2";
	};
	class Land_Bench_06_F: Land_VaultingBox_large_F
	{
		author="$STR_A3_Bohemia_Interactive";
		mapSize=1.5550036;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.00699999;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Land_Bench_06_F.jpg";
		_generalMacro="Land_Bench_06_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_expEden_long_bench";
		model="\A3\structures_f_enoch\furniture\school_equipment\long_bench.p3d";
		icon="iconObject_3x1";
	};
	class Land_FinishGate_01_narrow_empty: SportsGrounds_base_F
	{
		author="O&T Expansion Eden";
		mapSize=11.79;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=2.904;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_FinishGate_01_narrow_empty.jpg";
		_generalMacro="Land_FinishGate_01_narrow_empty";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_FinishGate_01_narrow_empty0";
		model="\A3\Structures_F_Kart\Civ\SportsGrounds\FinishGate_01_narrow_F.p3d";
		icon="iconObject_7x1";
		editorCategory="EdCat_Structures_Altis";
		editorSubcategory="EdSubcat_Sports";
		vehicleClass="Structures_Sports";
		accuracy=1000;
		side=3;
		keepHorizontalPlacement=1;
		hiddenSelections[]=
		{
			"Camo_1"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
	};
	class Land_FinishGate_01_wide_empty: Land_FinishGate_01_narrow_empty
	{
		author="O&T Expansion Eden";
		mapSize=15.39;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=2.904;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_FinishGate_01_wide_empty.jpg";
		_generalMacro="Land_FinishGate_01_wide_empty";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_FinishGate_01_wide_empty0";
		model="\A3\Structures_F_Kart\Civ\SportsGrounds\FinishGate_01_wide_F.p3d";
		icon="iconObject_10x1";
	};
};
