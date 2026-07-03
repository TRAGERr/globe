class CfgPatches
{
	class Structures_Globe_Signs_Directions
	{
		addonRootClass="A3_Structures_F_Globe";
		requiredAddons[]=
		{
			"Structures_Globe_Signs"
		};
		requiredVersion=0.1;
		units[]=
		{
			"RoadSign_Direction_01",
			"LandMarkTile_07",
			"LandMarkTile_25",
			"Sign_DirectionStratis_Mike26AB",
			"Sign_DirectionStratis_campRogainFR",
			"Sign_DirectionStratis_campRogainFRVR",
			"Sign_DirectionStratis_Mike26FR",
			"Sign_DirectionStratis_Mike26_left",
			"Sign_DirectionStratis_Mike26_right"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class RoadSign_01_wild;
	class House_F;
	class Signs_base_F;
	class RoadSign_Direction_Base: Signs_base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="RoadSign_Direction_Base";
		icon="iconObject_2x1";
		editorCategory="EdCat_Signs";
		editorSubcategory="EdSubcat_RoadSigns_Enoch";
		armor=100;
		destrType="DestructWall";
		keepHorizontalPlacement=1;
	};
	class RoadSign_Direction_01: RoadSign_Direction_Base
	{
		mapSize=0.72299999;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.412;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_Direction_01.jpg";
		_generalMacro="RoadSign_Direction_01";
		scope=1;
		scopeCurator=0;
		DLC="Enoch";
		displayName="$STR_Globe_RoadSign_Direction_01";
		model="\a3\structures_f_enoch\Signs\City\Sign_Adamow_start.p3d";
	};
	class LandMarkTile_07: House_F
	{
		author="$STR_A3_Bohemia_Interactive";
		mapSize=2.6700001;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.36500001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\LandMarkTile_07.jpg";
		_generalMacro="LandMarkTile_07";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicle_LandMarkTile_070";
		model="\A3\Structures_F_EXP\Infrastructure\Runways\runwaytilenumber_07_f.p3d";
		icon="iconObject_3x1";
		editorCategory="EdCat_Signs";
		editorSubcategory="EdSubcat_Airports";
		vehicleClass="Signs";
		destrType="DestructNo";
		cost=1000;
		featureSize=13;
		keepHorizontalPlacement=0;
	};
	class LandMarkTile_25: House_F
	{
		author="$STR_A3_Bohemia_Interactive";
		mapSize=2.6700001;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.36500001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\LandMarkTile_25.jpg";
		_generalMacro="LandMarkTile_25";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicle_LandMarkTile_250";
		model="\A3\Structures_F_EXP\Infrastructure\Runways\runwaytilenumber_25_f.p3d";
		icon="iconObject_3x1";
		editorCategory="EdCat_Signs";
		editorSubcategory="EdSubcat_Airports";
		vehicleClass="Signs";
		destrType="DestructNo";
		cost=1000;
		featureSize=13;
		keepHorizontalPlacement=0;
	};
	class Sign_DirectionStratis_Mike26AB: RoadSign_01_wild
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Sign_DirectionStratis_Mike26AB.jpg";
		_generalMacro="Sign_DirectionStratis_Mike26AB";
		displayName="$STR_Globe_CfgVehicle_Sign_DirectionStratis_Mike26AB0";
		model="\A3\Signs_F\SignSpecial\SignSpec_Dir_ab-mk26_f.p3d";
		editorCategory="EdCat_Signs";
		editorSubcategory="EdSubcat_Default";
	};
	class Sign_DirectionStratis_campRogainFR: Sign_DirectionStratis_Mike26AB
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Sign_DirectionStratis_campRogainFR.jpg";
		_generalMacro="Sign_DirectionStratis_campRogainFR";
		displayName="$STR_Globe_CfgVehicle_Sign_DirectionStratis_campRogainFR0";
		model="\A3\Signs_F\SignSpecial\SignSpec_Dir_cr-fr_f.p3d";
	};
	class Sign_DirectionStratis_campRogainFRVR: Sign_DirectionStratis_Mike26AB
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Sign_DirectionStratis_campRogainFRVR.jpg";
		_generalMacro="Sign_DirectionStratis_campRogainFRVR";
		displayName="$STR_Globe_CfgVehicle_Sign_DirectionStratis_campRogainFRVR0";
		model="\A3\Signs_F\SignSpecial\signspec_dir_fr-cr-vr_f.p3d";
	};
	class Sign_DirectionStratis_Mike26FR: Sign_DirectionStratis_Mike26AB
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Sign_DirectionStratis_Mike26FR.jpg";
		_generalMacro="Sign_DirectionStratis_Mike26FR";
		displayName="$STR_Globe_CfgVehicle_Sign_DirectionStratis_Mike26FR0";
		model="\A3\Signs_F\SignSpecial\signspec_dir_fr-mk26_f.p3d";
	};
	class Sign_DirectionStratis_Mike26_left: Sign_DirectionStratis_Mike26AB
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Sign_DirectionStratis_Mike26_left.jpg";
		_generalMacro="Sign_DirectionStratis_Mike26_left";
		displayName="$STR_Globe_CfgVehicle_Sign_DirectionStratis_Mike26_left0";
		model="\A3\Signs_F\SignSpecial\signspec_dirl_mk26_f.p3d";
	};
	class Sign_DirectionStratis_Mike26_right: Sign_DirectionStratis_Mike26AB
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Sign_DirectionStratis_Mike26_right.jpg";
		_generalMacro="Sign_DirectionStratis_Mike26_right";
		displayName="$STR_Globe_CfgVehicle_Sign_DirectionStratis_Mike26_right0";
		model="\A3\Signs_F\SignSpecial\signspec_dirr_mk26_f.p3d";
	};
};
