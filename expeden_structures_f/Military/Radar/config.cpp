class CfgPatches
{
	class A3_Structures_F_Globe_Military_Radar
	{
		addonRootClass="A3_Structures_F_Globe";
		requiredAddons[]=
		{
			"A3_Structures_F_Globe_Military"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Land_Radar_01_antenna_NoHoops",
			"Land_Radar_01_airshaft_F",
			"Land_Radar_01_cooler_ruins"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class NonStrategic;
	class Ruins_F;
	class Land_Radar_01_cooler_ruins: Ruins_F
	{
		author="O&T Expansion Eden";
		mapSize=24.65;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.45500001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Radar_01_airshaft_ruins.jpg";
		_generalMacro="Land_Radar_01_cooler_ruins";
		scope=2;
		scopeCurator=0;
		displayName="$STR_Globe_CfgVehicles_Land_Radar_01_cooler_ruins0";
		model="\A3\Structures_F_Enoch\Military\Radar\radar_01_cooler_ruins_f.p3d";
		icon="iconObject_3x2";
		editorCategory="EdCat_Ruins_Enoch";
		editorSubcategory="EdSubcat_Military";
	};
	class Land_Radar_01_airshaft_ruins: Ruins_F
	{
		author="O&T Expansion Eden";
		mapSize=24.65;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.45500001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Radar_01_airshaft_ruins.jpg";
		_generalMacro="Land_Radar_01_airshaft_ruins";
		scope=2;
		scopeCurator=0;
		displayName="$STR_Globe_CfgVehicles_Land_Radar_01_airshaft_ruins0";
		model="\A3\Structures_F_Enoch\Military\Radar\radar_01_airshaft_ruins_f.p3d";
		icon="iconObject_3x2";
		editorCategory="EdCat_Ruins_Enoch";
		editorSubcategory="EdSubcat_Military";
	};
	class Land_Radar_01_antenna_NoHoops: NonStrategic
	{
		author="O&T Expansion Eden";
		mapSize=44.02;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=25.249001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Radar_01_antenna_NoHoops.jpg";
		_generalMacro="Land_Radar_01_antenna_NoHoops";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_Radar_01_antenna_NoHoops0";
		model="\a3\structures_f_enoch\military\radar\radar_01_antenna_body_f.p3d";
		icon="iconObject_3x2";
		editorCategory="EdCat_Structures_Enoch";
		editorSubcategory="EdSubcat_Military";
		vehicleClass="Structures_Military";
	};
};
