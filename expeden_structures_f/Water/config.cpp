class CfgPatches
{
	class Structures_Globe_Water
	{
		addonRootClass="A3_Structures_F_Globe";
		requiredAddons[]=
		{
			"A3_Structures_F_Globe"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Pond_small_01",
			"Pond_small_02",
			"Pond_small_03",
			"Pond_small_square",
			"Pond_middle_01",
			"Pond_middle_02",
			"Pond_middle_TShaped",
			"Pond_large_01",
			"Pond_01_big"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class NonStrategic;
	class Ponds_base: NonStrategic
	{
		scope=0;
		scopeCurator=0;
		icon="iconObject_1x1";
		editorCategory="EdCat_Structures";
		editorSubcategory="EdSubcat_Aquatic";
		destrType="DestructNo";
	};
	class Pond_01_big: Ponds_base
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.081;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="";
		_generalMacro="Pond_01_big";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Pond_01_big0";
		model="\A3\Structures_F_Enoch\Water\Pond_big_01.p3d";
	};
	class Pond_small_01: Pond_01_big
	{
		scope=2;
		scopeCurator=2;
		editorPreview="";
		_generalMacro="Pond_small_01";
		displayName="$STR_Globe_CfgVehicles_Pond_small_010";
		model="\a3\map_altis\data\Water\test_ad_quarry01.p3d";
	};
	class Pond_small_02: Pond_01_big
	{
		scope=2;
		scopeCurator=2;
		editorPreview="";
		_generalMacro="Pond_small_02";
		displayName="$STR_Globe_CfgVehicles_Pond_small_020";
		model="\a3\map_altis\data\Water\test_reservoir01.p3d";
	};
	class Pond_small_03: Pond_01_big
	{
		scope=2;
		scopeCurator=2;
		editorPreview="";
		_generalMacro="Pond_small_03";
		displayName="$STR_Globe_CfgVehicles_Pond_small_030";
		model="\a3\map_altis\data\Water\test_wf_lower.p3d";
	};
	class Pond_small_square: Pond_01_big
	{
		scope=2;
		scopeCurator=2;
		editorPreview="";
		_generalMacro="Pond_small_square";
		displayName="$STR_Globe_CfgVehicles_Pond_small_square0";
		model="\a3\map_altis\data\Water\water_tile.p3d";
	};
	class Pond_middle_01: Pond_01_big
	{
		scope=2;
		scopeCurator=2;
		editorPreview="";
		_generalMacro="Pond_middle_01";
		displayName="$STR_Globe_CfgVehicles_Pond_middle_010";
		model="\a3\map_altis\data\Water\test_reservoir01.p3d";
	};
	class Pond_middle_02: Pond_01_big
	{
		scope=2;
		scopeCurator=2;
		editorPreview="";
		_generalMacro="Pond_middle_02";
		displayName="$STR_Globe_CfgVehicles_Pond_middle_020";
		model="\a3\map_altis\data\Water\test_wf_upper.p3d";
	};
	class Pond_middle_TShaped: Pond_01_big
	{
		scope=2;
		scopeCurator=2;
		editorPreview="";
		_generalMacro="Pond_middle_TShaped";
		displayName="$STR_Globe_CfgVehicles_Pond_middle_TShaped0";
		model="\a3\map_altis\data\Water\test_swamp01.p3d";
	};
	class Pond_large_01: Pond_01_big
	{
		scope=2;
		scopeCurator=2;
		editorPreview="";
		_generalMacro="Pond_large_01";
		displayName="$STR_Globe_CfgVehicles_Pond_large_010";
		model="\a3\map_altis\data\Water\test_dam01.p3d";
	};
};
