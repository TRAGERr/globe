class CfgPatches
{
	class Structures_Globe_Signs_Companies
	{
		addonRootClass="A3_Structures_F_Globe";
		requiredAddons[]=
		{
			"Structures_Globe_Signs"
		};
		requiredVersion=0.1;
		units[]=
		{
			"SignMonolith_Roof_CargoTransport_01",
			"SignMonolith_Wall_Hotel_01",
			"SignMonolith_Wall_Hotel_02",
			"VantlandSign_01",
			"CampingTable_CharitySign_01",
			"CampingTable_CharitySign_02",
			"SignAd_Bootcamp_Go",
			"SignAd_Bootcamp_GrenadesFiringRange",
			"SignAd_Bootcamp_InfantryObstacleCourse",
			"SignAd_Bootcamp_Karts",
			"SignAd_Bootcamp_VehiclesFiringRange",
			"SignAd_Bootcamp_VehiclesObstacleCourse",
			"SignAd_Bootcamp_WeaponsFiringRange",
			"SignAd_Bootcamp_WrongWay"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class AttachedSigns_base_F;
	class Signs_base_F;
	class SignAd_Sponsor_F;
	class VantlandSign_01: Signs_base_F
	{
		author="O&T Expansion Eden";
		mapSize=5;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=1.1030097;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VantlandSign_01.jpg";
		_generalMacro="VantlandSign_01";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_VantlandSign_01";
		model="\a3\missions_f_aow\data\Objects\Vantland_Sign_Simple.p3d";
		icon="iconObject_4x1";
		destrType="DestructNo";
		editorSubcategory="EdSubcat_Residential_City";
	};
	class CampingTable_CharitySign_01: Signs_base_F
	{
		author="O&T Expansion Eden";
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
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\CampingTable_CharitySign_01.jpg";
		_generalMacro="CampingTable_CharitySign_01";
		scope=2;
		scopeCurator=2;
		DLC="AoW";
		displayName="$STR_Globe_Land_CampingTable_CharitySign_01";
		model="\a3\missions_f_aow\data\Objects\charitySign_01_Simple.p3d";
		icon="iconObject_2x1";
		editorCategory="EdCat_Furniture";
		editorSubcategory="EdSubcat_Camping";
		vehicleClass="Structures_Fences";
		armor=500;
		destrType="DestructTent";
		cost=1000;
	};
	class CampingTable_CharitySign_02: CampingTable_CharitySign_01
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\CampingTable_CharitySign_02.jpg";
		_generalMacro="CampingTable_CharitySign_02";
		displayName="$STR_Globe_Land_CampingTable_CharitySign_02";
		model="\a3\missions_f_aow\data\Objects\charitySign_02_Simple.p3d";
	};
	class SignAd_Bootcamp_Go: SignAd_Sponsor_F
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=1.041;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\SignAd_Bootcamp_Go.jpg";
		_generalMacro="SignAd_Bootcamp_Go";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_SignAd_Bootcamp_Go0";
		DLC="";
		hiddenSelectionsTextures[]=
		{
			"\a3\missions_f_bootcamp\data\img\signs\Board_Go.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\data_f\default_alpha.rvmat"
		};
	};
	class SignAd_Bootcamp_GrenadesFiringRange: SignAd_Bootcamp_Go
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\SignAd_Bootcamp_GrenadesFiringRange.jpg";
		_generalMacro="SignAd_Bootcamp_GrenadesFiringRange";
		displayName="$STR_Globe_CfgVehicles_SignAd_Bootcamp_GrenadesFiringRange0";
		hiddenSelectionsTextures[]=
		{
			"\a3\missions_f_bootcamp\data\img\signs\Board_GrenadesFiringRange.paa"
		};
	};
	class SignAd_Bootcamp_InfantryObstacleCourse: SignAd_Bootcamp_Go
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\SignAd_Bootcamp_InfantryObstacleCourse.jpg";
		_generalMacro="SignAd_Bootcamp_InfantryObstacleCourse";
		displayName="$STR_Globe_CfgVehicles_SignAd_Bootcamp_InfantryObstacleCourse0";
		hiddenSelectionsTextures[]=
		{
			"\a3\missions_f_bootcamp\data\img\signs\Board_InfantryObstacleCourse.paa"
		};
	};
	class SignAd_Bootcamp_Karts: SignAd_Bootcamp_Go
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\SignAd_Bootcamp_Karts.jpg";
		_generalMacro="SignAd_Bootcamp_Karts";
		displayName="$STR_Globe_CfgVehicles_SignAd_Bootcamp_Karts0";
		hiddenSelectionsTextures[]=
		{
			"\a3\missions_f_bootcamp\data\img\signs\Board_Karts.paa"
		};
	};
	class SignAd_Bootcamp_VehiclesFiringRange: SignAd_Bootcamp_Go
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\SignAd_Bootcamp_VehiclesFiringRange.jpg";
		_generalMacro="SignAd_Bootcamp_VehiclesFiringRange";
		displayName="$STR_Globe_CfgVehicles_SignAd_Bootcamp_VehiclesFiringRange0";
		hiddenSelectionsTextures[]=
		{
			"\a3\missions_f_bootcamp\data\img\signs\Board_VehiclesFiringRange.paa"
		};
	};
	class SignAd_Bootcamp_VehiclesObstacleCourse: SignAd_Bootcamp_Go
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\SignAd_Bootcamp_VehiclesObstacleCourse.jpg";
		_generalMacro="SignAd_Bootcamp_VehiclesObstacleCourse";
		displayName="$STR_Globe_CfgVehicles_SignAd_Bootcamp_VehiclesObstacleCourse0";
		hiddenSelectionsTextures[]=
		{
			"\a3\missions_f_bootcamp\data\img\signs\Board_VehiclesObstacleCourse.paa"
		};
	};
	class SignAd_Bootcamp_WeaponsFiringRange: SignAd_Bootcamp_Go
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\SignAd_Bootcamp_WeaponsFiringRange.jpg";
		_generalMacro="SignAd_Bootcamp_WeaponsFiringRange";
		displayName="$STR_Globe_CfgVehicles_SignAd_Bootcamp_WeaponsFiringRange0";
		hiddenSelectionsTextures[]=
		{
			"\a3\missions_f_bootcamp\data\img\signs\Board_WeaponsFiringRange.paa"
		};
	};
	class SignAd_Bootcamp_WrongWay: SignAd_Bootcamp_Go
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\SignAd_Bootcamp_WrongWay.jpg";
		_generalMacro="SignAd_Bootcamp_WrongWay";
		displayName="$STR_Globe_CfgVehicles_SignAd_Bootcamp_WrongWay0";
		hiddenSelectionsTextures[]=
		{
			"\a3\missions_f_bootcamp\data\img\signs\Board_WrongWay.paa"
		};
	};
	class Land_AttachedSign_01_v1_F: AttachedSigns_base_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\AttachedSign_01_v1.jpg";
		displayName="$STR_AttachedSign_01_v1";
		editorCategory="EdCat_Structures_Tanoa";
		editorSubcategory="EdSubcat_Services";
		scope=2;
		scopeCurator=2;
	};
	class Land_AttachedSign_01_v2_F: AttachedSigns_base_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\AttachedSign_01_v2.jpg";
		displayName="$STR_AttachedSign_01_v2";
		editorCategory="EdCat_Structures_Tanoa";
		editorSubcategory="EdSubcat_Services";
		scope=2;
		scopeCurator=2;
	};
	class Land_AttachedSign_01_v3_F: AttachedSigns_base_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\AttachedSign_01_v3.jpg";
		displayName="$STR_AttachedSign_01_v3";
		editorCategory="EdCat_Structures_Tanoa";
		editorSubcategory="EdSubcat_Services";
		scope=2;
		scopeCurator=2;
	};
	class Land_AttachedSign_01_v4_F: AttachedSigns_base_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\AttachedSign_01_v4.jpg";
		displayName="$STR_AttachedSign_01_v4";
		editorCategory="EdCat_Structures_Tanoa";
		editorSubcategory="EdSubcat_Services";
		scope=2;
		scopeCurator=2;
	};
	class Land_AttachedSign_02_v1_F: AttachedSigns_base_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\AttachedSign_02_v1.jpg";
		displayName="$STR_AttachedSign_02_v1";
		editorCategory="EdCat_Structures_Tanoa";
		editorSubcategory="EdSubcat_Services";
		scope=2;
		scopeCurator=2;
	};
	class Land_AttachedSign_02_v2_F: AttachedSigns_base_F
	{
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\AttachedSign_02_v2.jpg";
		displayName="$STR_AttachedSign_02_v2";
		editorCategory="EdCat_Structures_Tanoa";
		editorSubcategory="EdSubcat_Services";
		scope=2;
		scopeCurator=2;
	};
	class Land_AttachedSign_02_v3_F: AttachedSigns_base_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\AttachedSign_02_v3.jpg";
		displayName="$STR_AttachedSign_02_v3";
		editorCategory="EdCat_Structures_Tanoa";
		editorSubcategory="EdSubcat_Services";
		scope=2;
		scopeCurator=2;
	};
	class Land_AttachedSign_02_v4_F: AttachedSigns_base_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\AttachedSign_02_v4.jpg";
		displayName="$STR_AttachedSign_02_v4";
		editorCategory="EdCat_Structures_Tanoa";
		editorSubcategory="EdSubcat_Services";
		scope=2;
		scopeCurator=2;
	};
	class Land_AttachedSign_03_v1_F: AttachedSigns_base_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\AttachedSign_03_v1.jpg";
		displayName="$STR_AttachedSign_03_v1";
		editorCategory="EdCat_Structures_Tanoa";
		editorSubcategory="EdSubcat_Services";
		scope=2;
		scopeCurator=2;
	};
	class Land_AttachedSign_03_v2_F: AttachedSigns_base_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\AttachedSign_03_v2.jpg";
		displayName="$STR_AttachedSign_03_v2";
		editorCategory="EdCat_Structures_Tanoa";
		editorSubcategory="EdSubcat_Services";
		scope=2;
		scopeCurator=2;
	};
	class Land_Billboard_01_v1_F: AttachedSigns_base_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Billboard_01_v1.jpg";
		displayName="$STR_Billboard_01_v1";
		editorCategory="EdCat_Structures_Tanoa";
		editorSubcategory="EdSubcat_Services";
		scope=2;
		scopeCurator=2;
	};
	class Land_Billboard_01_v2_F: AttachedSigns_base_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Billboard_01_v2.jpg";
		displayName="$STR_Billboard_01_v2";
		editorCategory="EdCat_Structures_Tanoa";
		editorSubcategory="EdSubcat_Services";
		scope=2;
		scopeCurator=2;
	};
	class Land_Billboard_02_v1_F: AttachedSigns_base_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Billboard_02_v1.jpg";
		displayName="$STR_Billboard_02_v1";
		editorCategory="EdCat_Structures_Tanoa";
		editorSubcategory="EdSubcat_Services";
		scope=2;
		scopeCurator=2;
	};
	class Land_Billboard_02_v2_F: AttachedSigns_base_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Billboard_02_v2.jpg";
		displayName="$STR_Billboard_02_v2";
		editorCategory="EdCat_Structures_Tanoa";
		editorSubcategory="EdSubcat_Services";
		scope=2;
		scopeCurator=2;
	};
	class Land_CornerAds_01_v1_F: AttachedSigns_base_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\CornerAds_01_v1.jpg";
		displayName="$STR_CornerAds_01_v1";
		editorCategory="EdCat_Structures_Tanoa";
		editorSubcategory="EdSubcat_Services";
		scope=2;
		scopeCurator=2;
	};
	class Land_CornerAds_01_v2_F: AttachedSigns_base_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\CornerAds_01_v2.jpg";
		displayName="$STR_CornerAds_01_v2";
		editorCategory="EdCat_Structures_Tanoa";
		editorSubcategory="EdSubcat_Services";
		scope=2;
		scopeCurator=2;
	};
	class Land_CornerAds_01_v3_F: AttachedSigns_base_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\CornerAds_01_v3.jpg";
		displayName="$STR_CornerAds_01_v3";
		editorCategory="EdCat_Structures_Tanoa";
		editorSubcategory="EdSubcat_Services";
		scope=2;
		scopeCurator=2;
	};
	class Land_CornerAds_01_v4_F: AttachedSigns_base_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\CornerAds_01_v4.jpg";
		displayName="$STR_CornerAds_01_v4";
		editorCategory="EdCat_Structures_Tanoa";
		editorSubcategory="EdSubcat_Services";
		scope=2;
		scopeCurator=2;
	};
	class Land_CornerAds_02_v1_F: AttachedSigns_base_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\CornerAds_02_v1.jpg";
		displayName="$STR_CornerAds_02_v1";
		editorCategory="EdCat_Structures_Tanoa";
		editorSubcategory="EdSubcat_Services";
		scope=2;
		scopeCurator=2;
	};
	class Land_CornerAds_02_v2_F: AttachedSigns_base_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\CornerAds_02_v2.jpg";
		displayName="$STR_CornerAds_02_v2";
		editorCategory="EdCat_Structures_Tanoa";
		editorSubcategory="EdSubcat_Services";
		scope=2;
		scopeCurator=2;
	};
	class AttachedSign_01_v1: Land_AttachedSign_01_v1_F
	{
		_generalMacro="AttachedSign_01_v1";
		scope=1;
		scopeCurator=0;
	};
	class AttachedSign_01_v2: Land_AttachedSign_01_v2_F
	{
		_generalMacro="AttachedSign_01_v2";
		scope=1;
		scopeCurator=0;
	};
	class AttachedSign_01_v3: Land_AttachedSign_01_v3_F
	{
		_generalMacro="AttachedSign_01_v3";
		scope=1;
		scopeCurator=0;
	};
	class AttachedSign_01_v4: Land_AttachedSign_01_v4_F
	{
		_generalMacro="AttachedSign_01_v4";
		scope=1;
		scopeCurator=0;
	};
	class AttachedSign_02_v1: Land_AttachedSign_02_v1_F
	{
		_generalMacro="AttachedSign_02_v1";
		scope=1;
		scopeCurator=0;
	};
	class AttachedSign_02_v2: Land_AttachedSign_02_v2_F
	{
		_generalMacro="AttachedSign_02_v2";
		scope=1;
		scopeCurator=0;
	};
	class AttachedSign_02_v3: Land_AttachedSign_02_v3_F
	{
		_generalMacro="AttachedSign_02_v3";
		scope=1;
		scopeCurator=0;
	};
	class AttachedSign_02_v4: Land_AttachedSign_02_v4_F
	{
		_generalMacro="AttachedSign_02_v4";
		scope=1;
		scopeCurator=0;
	};
	class AttachedSign_03_v1: Land_AttachedSign_03_v1_F
	{
		_generalMacro="AttachedSign_03_v1";
		scope=1;
		scopeCurator=0;
	};
	class AttachedSign_03_v2: Land_AttachedSign_03_v2_F
	{
		_generalMacro="AttachedSign_03_v2";
		scope=1;
		scopeCurator=0;
	};
	class Billboard_01_v1: Land_Billboard_01_v1_F
	{
		_generalMacro="Billboard_01_v1";
		scope=1;
		scopeCurator=0;
	};
	class Billboard_01_v2: Land_Billboard_01_v2_F
	{
		_generalMacro="Billboard_01_v2";
		scope=1;
		scopeCurator=0;
	};
	class Billboard_02_v1: Land_Billboard_02_v1_F
	{
		_generalMacro="Billboard_02_v1";
		scope=1;
		scopeCurator=0;
	};
	class Billboard_02_v2: Land_Billboard_02_v2_F
	{
		_generalMacro="Billboard_02_v2";
		scope=1;
		scopeCurator=0;
	};
	class CornerAds_01_v1: Land_CornerAds_01_v1_F
	{
		_generalMacro="CornerAds_01_v1";
		scope=1;
		scopeCurator=0;
	};
	class CornerAds_01_v2: Land_CornerAds_01_v2_F
	{
		_generalMacro="CornerAds_01_v2";
		scope=1;
		scopeCurator=0;
	};
	class CornerAds_01_v3: Land_CornerAds_01_v3_F
	{
		_generalMacro="CornerAds_01_v3";
		scope=1;
		scopeCurator=0;
	};
	class CornerAds_01_v4: Land_CornerAds_01_v4_F
	{
		_generalMacro="CornerAds_01_v4";
		scope=1;
		scopeCurator=0;
	};
	class CornerAds_02_v1: Land_CornerAds_02_v1_F
	{
		_generalMacro="CornerAds_01_v1";
		scope=1;
		scopeCurator=0;
	};
	class CornerAds_02_v2: Land_CornerAds_02_v2_F
	{
		_generalMacro="CornerAds_01_v1";
		scope=1;
		scopeCurator=0;
	};
	class Land_CorporateSign_01_mine_F: Signs_base_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\CorporateSign_01_mine.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_CorporateSign_01_mine";
		editorCategory="EdCat_Structures_Tanoa";
		editorSubcategory="EdSubcat_Services";
	};
	class Land_CorporateSign_01_scf_F: Signs_base_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\CorporateSign_01_scf.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_CorporateSign_01_scf";
		editorCategory="EdCat_Structures_Tanoa";
		editorSubcategory="EdSubcat_Services";
	};
	class Land_CorporateSign_02_airport_F: Signs_base_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\CorporateSign_02_airport.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_CorporateSign_02_airport";
		editorCategory="EdCat_Structures_Tanoa";
		editorSubcategory="EdSubcat_Airports";
	};
	class Land_CorporateSign_02_harbor_F: Signs_base_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\CorporateSign_02_harbor.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_CorporateSign_02_harbor";
		editorCategory="EdCat_Structures_Tanoa";
		editorSubcategory="EdSubcat_Services";
	};
	class Land_CorporateSign_03_ranch_F: Signs_base_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\CorporateSign_03_ranch.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_CorporateSign_03_ranch";
		editorCategory="EdCat_Signs";
		editorSubcategory="EdSubcat_Advertisements";
	};
	class Land_SignWarning_02_crocodiles_F: Signs_base_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\SignWarning_02_crocodiles.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_SignWarning_02_crocodiles";
		editorCategory="EdCat_Signs";
		editorSubcategory="EdSubcat_WarningSigns";
	};
	class CorporateSign_01_mine: Land_CorporateSign_01_mine_F
	{
		_generalMacro="CorporateSign_01_mine";
		scope=1;
		scopeCurator=0;
	};
	class CorporateSign_01_scf: Land_CorporateSign_01_scf_F
	{
		_generalMacro="CorporateSign_01_scf";
		scope=1;
		scopeCurator=0;
	};
	class CorporateSign_02_airport: Land_CorporateSign_02_airport_F
	{
		_generalMacro="CorporateSign_02_airport";
		scope=1;
		scopeCurator=0;
	};
	class CorporateSign_02_harbor: Land_CorporateSign_02_harbor_F
	{
		_generalMacro="CorporateSign_02_harbor";
		scope=1;
		scopeCurator=0;
	};
	class CorporateSign_03_ranch: Land_CorporateSign_03_ranch_F
	{
		_generalMacro="CorporateSign_03_ranch";
		scope=1;
		scopeCurator=0;
	};
	class SignWarning_02_crocodiles: Land_SignWarning_02_crocodiles_F
	{
		_generalMacro="SignWarning_02_crocodiles";
		scope=1;
		scopeCurator=0;
	};
	class SignMonolith_Roof_CargoTransport_01: Signs_base_F
	{
		author="O&T Expansion Eden";
		mapSize=5;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=1.1030097;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\SignMonolith_Roof_cargoTransport_01.jpg";
		_generalMacro="SignMonolith_Roof_cargoTransport_01";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicle_SignMonolith_Roof_cargoTransport_010";
		model="\a3\signs_f\signs_ad\signsad_roof_cargotrans_f";
		icon="iconObject_5x1";
		destrType="DestructNo";
		editorSubcategory="EdSubcat_Residential_City";
	};
	class SignMonolith_Wall_Hotel_01: Signs_base_F
	{
		author="O&T Expansion Eden";
		mapSize=5;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=1.1030097;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\SignMonolith_Wall_Hotel_01.jpg";
		_generalMacro="SignMonolith_Wall_Hotel_01";
		scope=2;
		scopeCurator=2;
		displayName="$STR_a3_cfgmarkers_loc_tourism";
		model="\a3\signs_f\signs_ad\signsad_v_hotel_f";
		icon="iconObject_1x3";
		destrType="DestructNo";
		editorSubcategory="EdSubcat_Residential_City";
	};
	class SignMonolith_Wall_Hotel_02: Signs_base_F
	{
		author="O&T Expansion Eden";
		mapSize=5;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=1.1030097;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\SignMonolith_Wall_Hotel_02.jpg";
		_generalMacro="SignMonolith_Wall_Hotel_02";
		scope=2;
		scopeCurator=2;
		displayName="$STR_a3_cfgmarkers_loc_tourism";
		model="\a3\signs_f\signs_ad\signsad_w_pharmacy_f";
		icon="iconObject_1x1";
		destrType="DestructNo";
		editorSubcategory="EdSubcat_Residential_City";
	};
};
