class CfgPatches
{
	class Structures_Globe_Civilian_InfoBoards
	{
		addonRootClass="A3_Structures_F_Globe";
		requiredAddons[]=
		{
			"A3_Structures_F_Globe_Civilian"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Land_InfoStand_RegionalDevelopment",
			"Land_InfoStand_BridgeRepair",
			"Noticeboard_Bootcamp_Go",
			"Noticeboard_Bootcamp_GrenadesFiringRange",
			"Noticeboard_Bootcamp_InfantryObstacleCourse",
			"Noticeboard_Bootcamp_Karts",
			"Noticeboard_Bootcamp_VehiclesFiringRange",
			"Noticeboard_Bootcamp_VehiclesObstacleCourse",
			"Noticeboard_Bootcamp_WeaponsFiringRange",
			"Noticeboard_Bootcamp_WrongWay"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Sign_F;
	class Land_Noticeboard_F;
	class Noticeboard_Bootcamp_Go: Land_Noticeboard_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Noticeboard_Bootcamp_Go.jpg";
		_generalMacro="Noticeboard_Bootcamp_Go";
		displayName="$STR_Globe_CfgVehicles_Noticeboard_Bootcamp_Go0";
		DLC="";
		editorSubcategory="EdSubcat_Advertisements";
		hiddenSelectionsTextures[]=
		{
			"\a3\missions_f_bootcamp\data\img\signs\Board_Go.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\data_f\default_alpha.rvmat"
		};
	};
	class Noticeboard_Bootcamp_GrenadesFiringRange: Noticeboard_Bootcamp_Go
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Noticeboard_Bootcamp_GrenadesFiringRange.jpg";
		_generalMacro="Noticeboard_Bootcamp_GrenadesFiringRange";
		displayName="$STR_Globe_CfgVehicles_Noticeboard_Bootcamp_GrenadesFiringRange0";
		hiddenSelectionsTextures[]=
		{
			"\a3\missions_f_bootcamp\data\img\signs\Board_GrenadesFiringRange.paa"
		};
	};
	class Noticeboard_Bootcamp_InfantryObstacleCourse: Noticeboard_Bootcamp_Go
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Noticeboard_Bootcamp_InfantryObstacleCourse.jpg";
		_generalMacro="Noticeboard_Bootcamp_InfantryObstacleCourse";
		displayName="$STR_Globe_CfgVehicles_Noticeboard_Bootcamp_InfantryObstacleCourse0";
		hiddenSelectionsTextures[]=
		{
			"\a3\missions_f_bootcamp\data\img\signs\Board_InfantryObstacleCourse.paa"
		};
	};
	class Noticeboard_Bootcamp_Karts: Noticeboard_Bootcamp_Go
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Noticeboard_Bootcamp_Karts.jpg";
		_generalMacro="Noticeboard_Bootcamp_Karts";
		displayName="$STR_Globe_CfgVehicles_Noticeboard_Bootcamp_Karts0";
		hiddenSelectionsTextures[]=
		{
			"\a3\missions_f_bootcamp\data\img\signs\Board_Karts.paa"
		};
	};
	class Noticeboard_Bootcamp_VehiclesFiringRange: Noticeboard_Bootcamp_Go
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Noticeboard_Bootcamp_VehiclesFiringRange.jpg";
		_generalMacro="Noticeboard_Bootcamp_VehiclesFiringRange";
		displayName="$STR_Globe_CfgVehicles_Noticeboard_Bootcamp_VehiclesFiringRange0";
		hiddenSelectionsTextures[]=
		{
			"\a3\missions_f_bootcamp\data\img\signs\Board_VehiclesFiringRange.paa"
		};
	};
	class Noticeboard_Bootcamp_VehiclesObstacleCourse: Noticeboard_Bootcamp_Go
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Noticeboard_Bootcamp_VehiclesObstacleCourse.jpg";
		_generalMacro="Noticeboard_Bootcamp_VehiclesObstacleCourse";
		displayName="$STR_Globe_CfgVehicles_Noticeboard_Bootcamp_VehiclesObstacleCourse0";
		hiddenSelectionsTextures[]=
		{
			"\a3\missions_f_bootcamp\data\img\signs\Board_VehiclesObstacleCourse.paa"
		};
	};
	class Noticeboard_Bootcamp_WeaponsFiringRange: Noticeboard_Bootcamp_Go
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Noticeboard_Bootcamp_WeaponsFiringRange.jpg";
		_generalMacro="Noticeboard_Bootcamp_WeaponsFiringRange";
		displayName="$STR_Globe_CfgVehicles_Noticeboard_Bootcamp_WeaponsFiringRange0";
		hiddenSelectionsTextures[]=
		{
			"\a3\missions_f_bootcamp\data\img\signs\Board_WeaponsFiringRange.paa"
		};
	};
	class Noticeboard_Bootcamp_WrongWay: Noticeboard_Bootcamp_Go
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Noticeboard_Bootcamp_WrongWay.jpg";
		_generalMacro="Noticeboard_Bootcamp_WrongWay";
		displayName="$STR_Globe_CfgVehicles_Noticeboard_Bootcamp_WrongWay0";
		hiddenSelectionsTextures[]=
		{
			"\a3\missions_f_bootcamp\data\img\signs\Board_WrongWay.paa"
		};
	};
	class Land_InfoStand_RegionalDevelopment: Sign_F
	{
		author="O&T Expansion Eden";
		mapSize=1.36000001;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.70974702;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_InfoStand_RegionalDevelopment.jpg";
		_generalMacro="Land_InfoStand_RegionalDevelopment";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_InfoStand_RegionalDevelopment0";
		model="\a3\signs_f\signs_ad\signsad_b2_constructionsite_f";
		editorCategory="EdCat_Structures_Altis";
		editorSubcategory="EdSubcat_Services";
		icon="iconObject_2x1";
	};
	class Land_InfoStand_BridgeRepair: Sign_F
	{
		author="O&T Expansion Eden";
		mapSize=1;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.3599;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_InfoStand_BridgeRepair.jpg";
		_generalMacro="Land_InfoStand_BridgeRepair";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_InfoStand_BridgeRepair0";
		model="\a3\signs_f\signs_ad\signsad_b_factoryolive_f";
		editorCategory="EdCat_Structures_Altis";
		editorSubcategory="EdSubcat_Services";
		icon="iconObject_1x2";
	};
};
