class CfgPatches
{
	class A3_Structures_F_Globe_VR_Helpers
	{
		addonRootClass="A3_Structures_F_Globe";
		requiredAddons[]=
		{
			"A3_Structures_F_Globe_VR"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Reflector_Cone_01_G_searchlight_noFlare",
			"Reflector_Cone_01_G_searchlight",
			"Land_3DEN_BoundingBoxBase_G",
			"Land_3DEN_Cursor_G",
			"Land_3DEN_Ellipse_G",
			"Land_3DEN_EllipseLimited_G",
			"Land_3DEN_Rectangle_G",
			"Land_3DEN_RectangleLimited_G",
			"Sign_Arrow_Small",
			"Beacon_orange",
			"BeaconBlinker_orange_pattern1",
			"BeaconBlinker_orange_pattern2",
			"Beacon_white",
			"BeaconBlinker_white_pattern1",
			"BeaconBlinker_white_pattern2",
			"Beacon_green",
			"BeaconBlinker_green_pattern1",
			"BeaconBlinker_green_pattern2",
			"Beacon_red",
			"BeaconBlinker_red_pattern1",
			"BeaconBlinker_red_pattern2",
			"Beacon_blue",
			"BeaconBlinker_blue_pattern1",
			"BeaconBlinker_blue_pattern2",
			"Reflector_Cone_02_F",
			"VR_3DSelector_01_exit_spinning",
			"VR_3DSelector_01_complete_spinning",
			"VR_3DSelector_01_incomplete_spinning",
			"VR_3DSelector_01_default_spinning",
			"Bust_european_01_man",
			"Bust_persian_01_man",
			"Bust_asian_01_man",
			"Bust_african_01_man",
			"Sign_Rainbow_01",
			"Sign_Rectangle_01_white",
			"Sign_Laserbeam_01"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class NonStrategic;
	class Reflector_Base_F;
	class Reflector_Cone_01_base_F;
	class VR_3DSelector_01_exit_F;
	class VR_3DSelector_01_complete_F;
	class VR_3DSelector_01_incomplete_F;
	class VR_3DSelector_01_default_F;
	class Helper_Base_F;
	class VR_Helper_Base_F;
	class Lamps_base_F;
	class Reflector_Cone_02_F: Lamps_base_F
	{
		DLC="Jets";
		icon="iconObject_circle";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_Globe_CfgVehicles_Reflector_Cone_02_F0";
		editorCategory="EdCat_Things";
		editorSubcategory="EdSubcat_Lamps";
		model="\a3\boat_f_jets\Carrier_01\VolumeLightCar.p3d";
		simulation="house";
		reversed=1;
	};
	class Sphere_3DEN: NonStrategic
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_Sphere_3DEN";
		icon="iconObject_circle";
		accuracy=1000;
		vehicleClass="Helpers";
		editorCategory="EdCat_Signs";
		editorSubcategory="EdSubcat_Helpers";
		class Attributes
		{
			class ObjectTextureCustom0
			{
				displayName="$STR_3den_object_attribute_objecttexturecustom0_displayname";
				tooltip="$STR_3den_object_attribute_objecttexturecustom_tooltip";
				property="ObjectTextureCustom0";
				control="Edit";
				expression="_this setObjectTextureGlobal [0,_value]";
				defaultValue="(getObjectTextures _this) param [0,'',['']]";
			};
			class ObjectTextureCustom1
			{
				displayName="$STR_3den_object_attribute_objecttexturecustom1_displayname";
				tooltip="$STR_3den_object_attribute_objecttexturecustom_tooltip";
				property="ObjectTextureCustom1";
				control="Edit";
				expression="_this setObjectTextureGlobal [1,_value]";
				defaultValue="(getObjectTextures _this) param [1,'',['']]";
			};
		};
	};
	class SphereNoGround_3DEN: Sphere_3DEN
	{
		displayName="$STR_Globe_SphereNoGround_3DEN";
	};
	class Sign_Laserbeam_01: Helper_Base_F
	{
		author="O&T Expansion Eden";
		mapSize=2;
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Sign_Laserbeam_01.jpg";
		_generalMacro="Sign_Laserbeam_01";
		scope=1;
		scopeCurator=0;
		displayName="$STR_A3_Globe_CfgVehicles_Sign_Laserbeam_01";
		model="\a3\data_f\laserbeam.p3d";
		icon="iconObject_1x2";
		accuracy=1000;
	};
	class Sign_Rectangle_01_white: Helper_Base_F
	{
		author="O&T Expansion Eden";
		mapSize=2;
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Sign_Rectangle_01_white.jpg";
		_generalMacro="Sign_Rectangle_01_white";
		scope=2;
		scopeCurator=2;
		displayName="$STR_3den_attributes_shapetrigger_rectangle";
		model="\a3\data_f\rect.p3d";
		icon="iconObject_1x1";
		accuracy=1000;
	};
	class Sign_Rainbow_01: Helper_Base_F
	{
		author="O&T Expansion Eden";
		mapSize=2;
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Sign_Rainbow_01.jpg";
		_generalMacro="Sign_Rectangle_01_white";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_Globe_CfgVehicles_Sign_Rainbow_01";
		model="\a3\data_f\rainbow.p3d";
		icon="iconObject_circle";
		accuracy=1000;
	};
	class Bust_african_01_man: Helper_Base_F
	{
		author="O&T Expansion Eden";
		mapSize=0.0043600001;
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Bust_african_01_man.jpg";
		_generalMacro="Bust_african_01_man";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Bust_Male_African0";
		model="\A3\Characters_F\Heads\M_African_01.p3d";
		icon="iconObject_circle";
		accuracy=1000;
		editorCategory="EdCat_VRObjects";
		editorSubcategory="EdSubcat_Personnel";
		hiddenSelections[]=
		{
			"personality",
			"injury_head",
			"head_injury"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\heads\data\m_african_01_co.paa",
			"\a3\characters_f\heads\data\m_african_01_co.paa",
			"\a3\characters_f\heads\data\m_african_01_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\characters_f\heads\data\m_african_01.rvmat",
			"\a3\characters_f\heads\data\m_african_01.rvmat",
			"\a3\characters_f\heads\data\m_african_01.rvmat"
		};
		class Attributes
		{
			class AfricanBustTextureList
			{
				property="AfricanBustTextureList";
				displayName="$STR_3den_object_attribute_objecttexturecustom1_displayname";
				control="Combo";
				expression="_this setObjectTextureGlobal [0, _value]; _this setObjectTextureGlobal [1, _value]; _this setObjectTextureGlobal [2, _value];";
				defaultValue="'\A3\Characters_F\Heads\Data\m_african_01_co.paa'";
				typeName="STRING";
				class values
				{
					class Williams
					{
						name="$STR_A3_NATOMen_LastNames112";
						value="\A3\Characters_F\Heads\Data\m_african_01_co.paa";
						picture="\A3\Characters_F\Heads\Data\m_african_01_co.paa";
					};
					class Hasan
					{
						name="$STR_A3_AFROMEN_FIRSTNAMES9";
						value="\A3\Characters_F\Heads\Data\m_african_02_co.paa";
						picture="\A3\Characters_F\Heads\Data\m_african_02_co.paa";
					};
					class Jesus
					{
						name="$STR_A3_CivMen_FirstNames26";
						value="\A3\Characters_F\Heads\Data\m_african_03_co.paa";
						picture="\A3\Characters_F\Heads\Data\m_african_03_co.paa";
					};
					class Barklem
					{
						name="Barklem";
						value="\A3\Characters_F_Tacops\Heads\Data\m_Barklem_co.paa";
						picture="\A3\Characters_F_Tacops\Heads\Data\m_Barklem_co.paa";
					};
				};
			};
			class AfricanBustMaterialList
			{
				property="AfricanBustMaterialList";
				displayName="$STR_3den_object_attribute_objectmaterialcustom1_displayname";
				control="Combo";
				expression="_this setObjectMaterialGlobal [0, _value]; _this setObjectMaterialGlobal [1, _value]; _this setObjectMaterialGlobal [2, _value];";
				defaultValue="'\A3\Characters_F\Heads\Data\m_african_01_co.paa'";
				typeName="STRING";
				class values
				{
					class Williams
					{
						name="$STR_A3_NATOMen_LastNames112";
						value="\A3\Characters_F\Heads\Data\m_african_01.rvmat";
						picture="\A3\Characters_F\Heads\Data\m_african_01_co.paa";
					};
					class WilliamsInjury
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_WilliamsInjury_name0";
						value="\A3\Characters_F\Heads\Data\m_african_01_injury.rvmat";
						picture="\A3\Characters_F\Heads\Data\m_african_01_co.paa";
					};
					class WilliamsSick: WilliamsInjury
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_WilliamsSick_name0";
						value="\A3\Characters_F_Oldman\Heads\Data\m_african_01_sick.rvmat";
					};
					class WilliamsCamo: WilliamsInjury
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_WilliamsCamo_name0";
						value="\A3\Characters_F_Mark\Heads\Data\m_camo_african_01.rvmat";
					};
					class WilliamsCamoInjury: WilliamsInjury
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_WilliamsCamoInjury_name0";
						value="\A3\Characters_F_Mark\Heads\Data\m_camo_african_01_injury.rvmat";
					};
					class Hasan
					{
						name="$STR_A3_AFROMEN_FIRSTNAMES9";
						value="\A3\Characters_F\Heads\Data\m_african_02.rvmat";
						picture="\A3\Characters_F\Heads\Data\m_african_02_co.paa";
					};
					class HasanInjury: Hasan
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_HasanInjury_name0";
						value="\A3\Characters_F\Heads\Data\m_african_02_injury.rvmat";
					};
					class HasanSick: Hasan
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_HasanSick_name0";
						value="\A3\Characters_F_Oldman\Heads\Data\m_african_02_sick.rvmat";
					};
					class HasanCamo: Hasan
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_HasanCamo_name0";
						value="\A3\Characters_F_Mark\Heads\Data\m_camo_african_02.rvmat";
					};
					class HasanCamoInjury: Hasan
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_HasanCamoInjury_name0";
						value="\A3\Characters_F_Mark\Heads\Data\m_camo_african_02_injury.rvmat";
					};
					class Jesus
					{
						name="$STR_A3_CivMen_FirstNames26";
						value="\A3\Characters_F\Heads\Data\m_african_03.rvmat";
						picture="\A3\Characters_F\Heads\Data\m_african_03_co.paa";
					};
					class JesusInjury: Jesus
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_JesusInjury_name0";
						value="\A3\Characters_F\Heads\Data\m_african_03_injury.rvmat";
					};
					class JesusnSick: Jesus
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_JesusSick_name0";
						value="\A3\Characters_F_Oldman\Heads\Data\m_african_03_sick.rvmat";
					};
					class JesusCamo: Jesus
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_JesusCamo_name0";
						value="\A3\Characters_F_Mark\Heads\Data\m_camo_african_03.rvmat";
					};
					class JesusCamoInjury: Jesus
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_JesusCamoInjury_name0";
						value="\A3\Characters_F_Mark\Heads\Data\m_camo_african_03_injury.rvmat";
					};
					class Barklem
					{
						name="$STR_A3_TO_C03_CfgIdentities_Barklem_name";
						value="\A3\Characters_F_Tacops\Heads\Data\m_Barklem.rvmat";
						picture="\A3\Characters_F_Tacops\Heads\Data\m_Barklem_co.paa";
					};
					class BarklemInjury: WilliamsInjury
					{
						name="$STR_A3_TO_C03_CfgIdentities_Barklem_name";
						value="\A3\Characters_F_Tacops\Heads\Data\m_Barklem.rvmat";
						picture="\A3\Characters_F_Tacops\Heads\Data\m_Barklem_co.paa";
					};
				};
			};
		};
	};
	class Bust_asian_01_man: Bust_african_01_man
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Bust_asian_01_man.jpg";
		_generalMacro="Bust_asian_01_man";
		displayName="$STR_Globe_CfgVehicles_Bust_Male_asian0";
		model="\A3\Characters_F\Heads\M_Asian_01.p3d";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\heads\data\m_asian_01_co.paa",
			"\a3\characters_f\heads\data\m_asian_01_co.paa",
			"\a3\characters_f\heads\data\m_asian_01_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\characters_f\heads\data\m_asian_01.rvmat",
			"\a3\characters_f\heads\data\m_asian_01.rvmat",
			"\a3\characters_f\heads\data\m_asian_01.rvmat"
		};
		class Attributes
		{
			class AsianBustTextureList
			{
				property="AsianBustTextureList";
				displayName="$STR_3den_object_attribute_objecttexturecustom1_displayname";
				control="Combo";
				expression="_this setObjectTextureGlobal [0, _value]; _this setObjectTextureGlobal [1, _value]; _this setObjectTextureGlobal [2, _value];";
				defaultValue="'\A3\Characters_F\Heads\Data\m_Asian_01_co.paa'";
				typeName="STRING";
				class values
				{
					class Ximi
					{
						name="$STR_A3_AsianMen_LastNames24";
						value="\A3\Characters_F\Heads\Data\m_Asian_01_co.paa";
						picture="\A3\Characters_F\Heads\Data\m_Asian_01_co.paa";
					};
					class Jeong
					{
						name="$STR_A3_AsianMen_LastNames7";
						value="\A3\Characters_F\Heads\Data\m_Asian_02_co.paa";
						picture="\A3\Characters_F\Heads\Data\m_Asian_02_co.paa";
					};
					class Tung
					{
						name="$STR_A3_AsianMen_LastNames21";
						value="\A3\Characters_F\Heads\Data\m_Asian_03_co.paa";
						picture="\A3\Characters_F\Heads\Data\m_Asian_03_co.paa";
					};
					class Lee
					{
						name="$STR_A3_CfgFaces_Man_A3_AsianHead_A3_040";
						value="\A3\Characters_F_Exp\Heads\Data\m_Asian_04_co.paa";
						picture="\A3\Characters_F_Exp\Heads\Data\m_Asian_04_co.paa";
					};
					class Chan
					{
						name="$STR_A3_CfgFaces_Man_A3_AsianHead_A3_050";
						value="\A3\Characters_F_Exp\Heads\Data\m_Asian_05_co.paa";
						picture="\A3\Characters_F_Exp\Heads\Data\m_Asian_05_co.paa";
					};
					class Yeung
					{
						name="$STR_A3_CfgFaces_Man_A3_AsianHead_A3_060";
						value="\A3\Characters_F_Exp\Heads\Data\m_Asian_06_co.paa";
						picture="\A3\Characters_F_Exp\Heads\Data\m_Asian_06_co.paa";
					};
					class Wong
					{
						name="$STR_A3_CfgFaces_Man_A3_AsianHead_A3_070";
						value="\A3\Characters_F_Exp\Heads\Data\m_Asian_07_co.paa";
						picture="\A3\Characters_F_Exp\Heads\Data\m_Asian_07_co.paa";
					};
				};
			};
			class AsianBustMaterialList
			{
				property="AsianBustMaterialList";
				displayName="$STR_3den_object_attribute_objectmaterialcustom1_displayname";
				control="Combo";
				expression="_this setObjectMaterialGlobal [0, _value]; _this setObjectMaterialGlobal [1, _value]; _this setObjectMaterialGlobal [2, _value];";
				defaultValue="'\A3\Characters_F\Heads\Data\m_Asian_01.rvmat'";
				typeName="STRING";
				class values
				{
					class Ximi
					{
						name="$STR_A3_AsianMen_LastNames24";
						value="\A3\Characters_F\Heads\Data\m_Asian_01.rvmat";
						picture="\A3\Characters_F\Heads\Data\m_Asian_01_co.paa";
					};
					class XimiInjury
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_XimiInjury_name0";
						value="\A3\Characters_F\Heads\Data\m_Asian_01_injury.rvmat";
						picture="\A3\Characters_F\Heads\Data\m_Asian_01_co.paa";
					};
					class XimiSick
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_XimiSick_name0";
						value="\A3\Characters_F_Oldman\Heads\Data\m_asian_01_sick.rvmat";
						picture="\A3\Characters_F\Heads\Data\m_Asian_01_co.paa";
					};
					class XimiCamo
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_XimiCamo_name0";
						value="\A3\Characters_F_Mark\Heads\Data\m_camo_Asian_01.rvmat";
						picture="\A3\Characters_F\Heads\Data\m_Asian_01_co.paa";
					};
					class XimiCamoInjury
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_XimiCamoInjury_name0";
						value="\A3\Characters_F_Mark\Heads\Data\m_camo_Asian_01_injury.rvmat";
						picture="\A3\Characters_F\Heads\Data\m_Asian_01_co.paa";
					};
					class Jeong
					{
						name="$STR_A3_AsianMen_LastNames7";
						value="\A3\Characters_F\Heads\Data\m_Asian_02.rvmat";
						picture="\A3\Characters_F\Heads\Data\m_Asian_02_co.paa";
					};
					class JeongInjury
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_JeongInjury_name0";
						value="\A3\Characters_F\Heads\Data\m_Asian_02_injury.rvmat";
						picture="\A3\Characters_F\Heads\Data\m_Asian_02_co.paa";
					};
					class JeongSick
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_JeongSick_name0";
						value="\A3\Characters_F_Oldman\Heads\Data\m_Asian_02_sick.rvmat";
						picture="\A3\Characters_F\Heads\Data\m_Asian_02_co.paa";
					};
					class JeongCamo
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_JeongCamo_name0";
						value="\A3\Characters_F_Mark\Heads\Data\m_camo_Asian_02.rvmat";
						picture="\A3\Characters_F\Heads\Data\m_Asian_02_co.paa";
					};
					class JeongCamoInjury
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_JeongCamoInjury_name0";
						value="\A3\Characters_F_Mark\Heads\Data\m_camo_Asian_02_injury.rvmat";
						picture="\A3\Characters_F\Heads\Data\m_Asian_02_co.paa";
					};
					class Tung
					{
						name="$STR_A3_AsianMen_LastNames21";
						value="\A3\Characters_F\Heads\Data\m_Asian_03.rvmat";
						picture="\A3\Characters_F\Heads\Data\m_Asian_03_co.paa";
					};
					class TungInjury
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_TungInjury_name0";
						value="\A3\Characters_F\Heads\Data\m_Asian_03_injury.rvmat";
						picture="\A3\Characters_F\Heads\Data\m_Asian_03_co.paa";
					};
					class TungSick
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_TungSick_name0";
						value="\A3\Characters_F_Oldman\Heads\Data\m_Asian_03_sick.rvmat";
						picture="\A3\Characters_F\Heads\Data\m_Asian_03_co.paa";
					};
					class TungCamo
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_TungCamo_name0";
						value="\A3\Characters_F_Mark\Heads\Data\m_camo_Asian_03.rvmat";
						picture="\A3\Characters_F\Heads\Data\m_Asian_03_co.paa";
					};
					class TungCamoInjury
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_TungCamoInjury_name0";
						value="\A3\Characters_F_Mark\Heads\Data\m_camo_Asian_03_injury.rvmat";
						picture="\A3\Characters_F\Heads\Data\m_Asian_03_co.paa";
					};
					class Lee
					{
						name="$STR_A3_CfgFaces_Man_A3_AsianHead_A3_040";
						value="\A3\Characters_F_Exp\Heads\Data\m_Asian_04.rvmat";
						picture="\A3\Characters_F_Exp\Heads\Data\m_Asian_04_co.paa";
					};
					class LeeInjury
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_LeeInjury_name0";
						value="\A3\Characters_F_Exp\Heads\Data\m_Asian_04_injury.rvmat";
						picture="\A3\Characters_F_Exp\Heads\Data\m_Asian_04_co.paa";
					};
					class LeeSick
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_LeeSick_name0";
						value="\A3\Characters_F_Oldman\Heads\Data\m_Asian_04_sick.rvmat";
						picture="\A3\Characters_F_Exp\Heads\Data\m_Asian_04_co.paa";
					};
					class Chan
					{
						name="$STR_A3_CfgFaces_Man_A3_AsianHead_A3_050";
						value="\A3\Characters_F_Exp\Heads\Data\m_Asian_05.rvmat";
						picture="\A3\Characters_F_Exp\Heads\Data\m_Asian_05_co.paa";
					};
					class ChanInjury
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_ChanInjury_name0";
						value="\A3\Characters_F_Exp\Heads\Data\m_Asian_05_injury.rvmat";
						picture="\A3\Characters_F_Exp\Heads\Data\m_Asian_05_co.paa";
					};
					class ChanSick
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_ChanSick_name0";
						value="\A3\Characters_F_Exp\Heads\Data\m_Asian_05_sick.rvmat";
						picture="\A3\Characters_F_Exp\Heads\Data\m_Asian_05_co.paa";
					};
					class Yeung
					{
						name="$STR_A3_CfgFaces_Man_A3_AsianHead_A3_060";
						value="\A3\Characters_F_Exp\Heads\Data\m_Asian_06.rvmat";
						picture="\A3\Characters_F_Exp\Heads\Data\m_Asian_06_co.paa";
					};
					class YeungInjury
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_YeungInjury_name0";
						value="\A3\Characters_F\Heads\Data\m_Asian_06_injury.rvmat";
						picture="\A3\Characters_F_Exp\Heads\Data\m_Asian_06_co.paa";
					};
					class YeungSick
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_YeungSick_name0";
						value="\A3\Characters_F_Oldman\Heads\Data\m_Asian_06_sick.rvmat";
						picture="\A3\Characters_F_Exp\Heads\Data\m_Asian_06_co.paa";
					};
					class Wong
					{
						name="$STR_A3_CfgFaces_Man_A3_AsianHead_A3_070";
						value="\A3\Characters_F_Exp\Heads\Data\m_Asian_07.rvmat";
						picture="\A3\Characters_F_Exp\Heads\Data\m_Asian_07_co.paa";
					};
					class WongInjury
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_WongInjury_name0";
						value="\A3\Characters_F\Heads\Data\m_Asian_07_injury.rvmat";
						picture="\A3\Characters_F_Exp\Heads\Data\m_Asian_07_co.paa";
					};
					class WongSick
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_WongSick_name0";
						value="\A3\Characters_F_Oldman\Heads\Data\m_Asian_07_sick.rvmat";
						picture="\A3\Characters_F_Exp\Heads\Data\m_Asian_07_co.paa";
					};
				};
			};
		};
	};
	class Bust_persian_01_man: Bust_african_01_man
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Bust_persian_01_man.jpg";
		_generalMacro="Bust_persian_01_man";
		displayName="$STR_Globe_CfgVehicles_Bust_Male_persian0";
		model="\A3\Characters_F\Heads\m_persian_01.p3d";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Heads\Data\m_persian_01_co.paa",
			"\A3\Characters_F\Heads\Data\m_persian_01_co.paa",
			"\A3\Characters_F\Heads\Data\m_persian_01_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Characters_F\Heads\Data\m_persian_01.rvmat",
			"\A3\Characters_F\Heads\Data\m_persian_01.rvmat",
			"\A3\Characters_F\Heads\Data\m_persian_01.rvmat"
		};
		class Attributes
		{
			class PersianBustTextureList
			{
				property="PersianBustTextureList";
				displayName="$STR_3den_object_attribute_objecttexturecustom1_displayname";
				control="Combo";
				expression="_this setObjectTextureGlobal [0, _value]; _this setObjectTextureGlobal [1, _value]; _this setObjectTextureGlobal [2, _value];";
				defaultValue="'\A3\Characters_F\Heads\Data\m_persian_01_co.paa'";
				typeName="STRING";
				class values
				{
					class Bahadur
					{
						name="$STR_A3_TakistaniMen_LastNames11";
						value="\A3\Characters_F\Heads\Data\m_persian_01_co.paa";
						picture="\A3\Characters_F\Heads\Data\m_persian_01_co.paa";
					};
					class BahadurCamoA
					{
						name="$STR_A3_cfgFaces_Man_A3_PersianHead_A3_04_a0";
						value="\A3\Characters_F_Mark\Heads\Data\m_persian_04_a_co.paa";
						picture="\A3\Characters_F_Mark\Heads\Data\m_persian_04_a_co.paa";
					};
					class BahadurCamoL
					{
						name="$STR_A3_cfgFaces_Man_A3_PersianHead_A3_04_l0";
						value="\A3\Characters_F_Mark\Heads\Data\m_persian_04_l_co.paa";
						picture="\A3\Characters_F_Mark\Heads\Data\m_persian_04_l_co.paa";
					};
					class BahadurCamoSA
					{
						name="$STR_A3_cfgFaces_Man_A3_PersianHead_A3_04_sa0";
						value="\A3\Characters_F_Mark\Heads\Data\m_persian_04_sa_co.paa";
						picture="\A3\Characters_F_Mark\Heads\Data\m_persian_04_sa_co.paa";
					};
					class Jalali
					{
						name="$STR_A3_TakistaniMen_LastNames27";
						value="\A3\Characters_F\Heads\Data\m_persian_02_co.paa";
						picture="\A3\Characters_F\Heads\Data\m_persian_02_co.paa";
					};
					class Sabet
					{
						name="$STR_A3_TakistaniMen_LastNames46";
						value="\A3\Characters_F\Heads\Data\m_persian_03_co.paa";
						picture="\A3\Characters_F\Heads\Data\m_persian_03_co.paa";
					};
					class Namdar
					{
						name="$STR_a3_o_story_colonel_f0";
						value="\A3\Characters_F_EPB\Heads\Data\m_white_17_co.paa";
						picture="\A3\Characters_F_EPB\Heads\Data\m_white_17_co.paa";
					};
				};
			};
			class PersianBustMaterialList
			{
				property="PersianBustMaterialList";
				displayName="$STR_3den_object_attribute_objectmaterialcustom1_displayname";
				control="Combo";
				expression="_this setObjectMaterialGlobal [0, _value]; _this setObjectMaterialGlobal [1, _value]; _this setObjectMaterialGlobal [2, _value];";
				defaultValue="'\A3\Characters_F\Heads\Data\m_persian_01.rvmat'";
				typeName="STRING";
				class values
				{
					class Bahadur
					{
						name="$STR_A3_TakistaniMen_LastNames11";
						value="\A3\Characters_F\Heads\Data\m_persian_01.rvmat";
						picture="\A3\Characters_F\Heads\Data\m_persian_01_co.paa";
					};
					class BahadurInjury
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_BahadurInjury_name0";
						value="\A3\Characters_F\Heads\Data\m_persian_01_injury.rvmat";
						picture="\A3\Characters_F\Heads\Data\m_persian_01_co.paa";
					};
					class BahadurSick: BahadurInjury
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_BahadurSick_name0";
						value="\A3\Characters_F_Oldman\Heads\Data\m_persian_01_sick.rvmat";
					};
					class BahadurCamo: BahadurInjury
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_BahadurCamo_name0";
						value="\A3\Characters_F_Mark\Heads\Data\m_camo_persian_01.rvmat";
					};
					class BahadurCamoA
					{
						name="$STR_A3_cfgFaces_Man_A3_PersianHead_A3_04_a0";
						value="\A3\Characters_F_Mark\Heads\Data\m_persian_04_a.rvmat";
						picture="\A3\Characters_F_Mark\Heads\Data\m_persian_04_a_co.paa";
					};
					class BahadurCamoL
					{
						name="$STR_A3_cfgFaces_Man_A3_PersianHead_A3_04_l0";
						value="\A3\Characters_F_Mark\Heads\Data\m_persian_04_l.rvmat";
						picture="\A3\Characters_F_Mark\Heads\Data\m_persian_04_l_co.paa";
					};
					class BahadurCamoSA
					{
						name="$STR_A3_cfgFaces_Man_A3_PersianHead_A3_04_sa0";
						value="\A3\Characters_F_Mark\Heads\Data\m_persian_04_sa.rvmat";
						picture="\A3\Characters_F_Mark\Heads\Data\m_persian_04_sa_co.paa";
					};
					class BahadurCamoInjury: BahadurInjury
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_BahadurCamoInjury_name0";
						value="\A3\Characters_F_Mark\Heads\Data\m_camo_persian_01_injury.rvmat";
					};
					class Jalali
					{
						name="$STR_A3_TakistaniMen_LastNames27";
						value="\A3\Characters_F\Heads\Data\m_persian_02_co.paa";
						picture="\A3\Characters_F\Heads\Data\m_persian_02_co.paa";
					};
					class JalaliInjury: Jalali
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_JalaliInjury_name0";
						value="\A3\Characters_F\Heads\Data\m_persian_02_injury.rvmat";
						picture="\A3\Characters_F\Heads\Data\m_persian_02_co.paa";
					};
					class JalaliSick: Jalali
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_JalaliSick_name0";
						value="\A3\Characters_F_Oldman\Heads\Data\m_persian_02_sick.rvmat";
					};
					class JalaliCamo: Jalali
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_JalaliCamo_name0";
						value="\A3\Characters_F_Mark\Heads\Data\m_camo_persian_02.rvmat";
					};
					class JalaliCamoInjury: Jalali
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_JalaliCamoInjury_name0";
						value="\A3\Characters_F_Mark\Heads\Data\m_camo_persian_02_injury.rvmat";
					};
					class Sabet
					{
						name="$STR_A3_TakistaniMen_LastNames46";
						value="\A3\Characters_F\Heads\Data\m_persian_03_co.paa";
						picture="\A3\Characters_F\Heads\Data\m_persian_03_co.paa";
					};
					class SabetInjury: Sabet
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_SabetInjury_name0";
						value="\A3\Characters_F\Heads\Data\m_persian_03_injury.rvmat";
						picture="\A3\Characters_F\Heads\Data\m_persian_03_co.paa";
					};
					class SabetSick: Sabet
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_SabetSick_name0";
						value="\A3\Characters_F_Oldman\Heads\Data\m_persian_03_sick.rvmat";
					};
					class SabetCamo: Sabet
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_SabetCamo_name0";
						value="\A3\Characters_F_Mark\Heads\Data\m_camo_persian_03.rvmat";
					};
					class SabetCamoInjury: Sabet
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_SabetCamoInjury_name0";
						value="\A3\Characters_F_Mark\Heads\Data\m_camo_persian_03_injury.rvmat";
					};
					class Namdar
					{
						name="$STR_a3_o_story_colonel_f0";
						value="\A3\Characters_F_EPB\Heads\Data\m_white_17.rvmat";
						picture="\A3\Characters_F_EPB\Heads\Data\m_white_17_co.paa";
					};
					class NamdarInjury: Namdar
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_NamdarInjury_name0";
						value="\A3\Characters_F_EPB\Heads\Data\m_white_17_injury.rvmat";
					};
				};
			};
		};
	};
	class Bust_european_01_man: Bust_african_01_man
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Bust_european_01_man.jpg";
		_generalMacro="Bust_european_01_man";
		displayName="$STR_Globe_CfgVehicles_Bust_Male_european0";
		model="\A3\Characters_F\Heads\m_white_01.p3d";
		hiddenSelectionsTextures[]=
		{
			"\a3\Characters_F_Enoch\Heads\data\m_livonianHead_1_co.paa",
			"\a3\Characters_F_Enoch\Heads\data\m_livonianHead_1_co.paa",
			"\a3\Characters_F_Enoch\Heads\data\m_livonianHead_1_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\Characters_F_Enoch\Heads\data\m_livonianHead_1.rvmat",
			"\a3\Characters_F_Enoch\Heads\data\m_livonianHead_1.rvmat",
			"\a3\Characters_F_Enoch\Heads\data\m_livonianHead_1.rvmat"
		};
		class Attributes
		{
			class EuropeanBustTextureList
			{
				property="EuropeanBustTextureList";
				displayName="$STR_3den_object_attribute_objecttexturecustom1_displayname";
				control="Combo";
				expression="_this setObjectTextureGlobal [0, _value]; _this setObjectTextureGlobal [1, _value]; _this setObjectTextureGlobal [2, _value];";
				defaultValue="'\a3\Characters_F_Enoch\Heads\data\m_livonianHead_1_co.paa'";
				typeName="STRING";
				class values
				{
					class Nowak
					{
						name="$STR_A3_C_CfgFaces_Man_A3_LivonianHead_10";
						value="\a3\Characters_F_Enoch\Heads\data\m_livonianHead_1_co.paa";
						picture="\a3\Characters_F_Enoch\Heads\data\m_livonianHead_1_co.paa";
					};
					class Gorecki
					{
						name="$STR_A3_C_CfgFaces_Man_A3_LivonianHead_20";
						value="\a3\Characters_F_Enoch\Heads\data\m_livonianHead_2_co.paa";
						picture="\a3\Characters_F_Enoch\Heads\data\m_livonianHead_2_co.paa";
					};
					class Kowalski
					{
						name="$STR_A3_C_CfgFaces_Man_A3_LivonianHead_30";
						value="\a3\Characters_F_Enoch\Heads\data\m_livonianHead_3_co.paa";
						picture="\a3\Characters_F_Enoch\Heads\data\m_livonianHead_3_co.paa";
					};
					class Stolarski
					{
						name="$STR_A3_C_CfgFaces_Man_A3_LivonianHead_40";
						value="\a3\Characters_F_Enoch\Heads\data\m_livonianHead_4_co.paa";
						picture="\a3\Characters_F_Enoch\Heads\data\m_livonianHead_4_co.paa";
					};
					class Burak
					{
						name="$STR_A3_C_CfgFaces_Man_A3_LivonianHead_50";
						value="\a3\Characters_F_Enoch\Heads\data\m_livonianHead_5_co.paa";
						picture="\a3\Characters_F_Enoch\Heads\data\m_livonianHead_5_co.paa";
					};
					class Kawa
					{
						name="$STR_A3_C_CfgFaces_Man_A3_LivonianHead_60";
						value="\a3\Characters_F_Enoch\Heads\data\m_livonianHead_6_co.paa";
						picture="\a3\Characters_F_Enoch\Heads\data\m_livonianHead_6_co.paa";
					};
					class Janowski
					{
						name="$STR_A3_C_CfgFaces_Man_A3_LivonianHead_70";
						value="\a3\Characters_F_Enoch\Heads\data\m_livonianHead_7_co.paa";
						picture="\a3\Characters_F_Enoch\Heads\data\m_livonianHead_7_co.paa";
					};
					class Sternik
					{
						name="$STR_A3_C_CfgFaces_Man_A3_LivonianHead_80";
						value="\a3\Characters_F_Enoch\Heads\data\m_livonianHead_8_co.paa";
						picture="\a3\Characters_F_Enoch\Heads\data\m_livonianHead_8_co.paa";
					};
					class Zielinski
					{
						name="$STR_A3_C_CfgFaces_Man_A3_LivonianHead_90";
						value="\a3\Characters_F_Enoch\Heads\data\m_livonianHead_9_co.paa";
						picture="\a3\Characters_F_Enoch\Heads\data\m_livonianHead_9_co.paa";
					};
					class Rabinowicz
					{
						name="$STR_A3_C_CfgFaces_Man_A3_LivonianHead_100";
						value="\a3\Characters_F_Enoch\Heads\data\m_livonianHead_10_co.paa";
						picture="\a3\Characters_F_Enoch\Heads\data\m_livonianHead_10_co.paa";
					};
					class Ivanov
					{
						name="$STR_A3_C_CfgFaces_Man_A3_RussianHead_10";
						value="\a3\Characters_F_Enoch\Heads\data\m_russianHead_1_co.paa";
						picture="\a3\Characters_F_Enoch\Heads\data\m_russianHead_1_co.paa";
					};
					class Petrenko
					{
						name="$STR_A3_C_CfgFaces_Man_A3_RussianHead_20";
						value="\a3\Characters_F_Enoch\Heads\data\m_russianHead_2_co.paa";
						picture="\a3\Characters_F_Enoch\Heads\data\m_russianHead_2_co.paa";
					};
					class Krupin
					{
						name="$STR_A3_C_CfgFaces_Man_A3_RussianHead_30";
						value="\a3\Characters_F_Enoch\Heads\data\m_russianHead_3_co.paa";
						picture="\a3\Characters_F_Enoch\Heads\data\m_russianHead_3_co.paa";
					};
					class Adamovichv
					{
						name="$STR_A3_C_CfgFaces_Man_A3_RussianHead_40";
						value="\a3\Characters_F_Enoch\Heads\data\m_russianHead_4_co.paa";
						picture="\a3\Characters_F_Enoch\Heads\data\m_russianHead_4_co.paa";
					};
					class Yakhin
					{
						name="$STR_A3_C_CfgFaces_Man_A3_RussianHead_50";
						value="\a3\Characters_F_Enoch\Heads\data\m_russianHead_5_co.paa";
						picture="\a3\Characters_F_Enoch\Heads\data\m_russianHead_5_co.paa";
					};
					class Sturrock
					{
						name="Sturrock";
						value="\A3\Characters_F_Tacops\Heads\Data\m_Sturrock_co.paa";
						picture="\A3\Characters_F_Tacops\Heads\Data\m_Sturrock_co.paa";
					};
					class Bayh
					{
						name="$STR_A3_NATOMen_LastNames90";
						value="\A3\Characters_F\Heads\Data\m_White_01_co.paa";
						picture="\A3\Characters_F\Heads\Data\m_White_01_co.paa";
					};
					class Burr
					{
						name="$STR_A3_NATOMen_LastNames91";
						value="\A3\Characters_F\Heads\Data\m_White_02_co.paa";
						picture="\A3\Characters_F\Heads\Data\m_White_02_co.paa";
					};
					class Coburn
					{
						name="$STR_A3_NATOMen_LastNames92";
						value="\A3\Characters_F\Heads\Data\m_White_03_co.paa";
						picture="\A3\Characters_F\Heads\Data\m_White_03_co.paa";
					};
					class Collins
					{
						name="$STR_A3_NATOMen_LastNames93";
						value="\A3\Characters_F\Heads\Data\m_White_04_co.paa";
						picture="\A3\Characters_F\Heads\Data\m_White_04_co.paa";
					};
					class Campbell
					{
						name="$STR_A3_NATOMen_LastNames94";
						value="\A3\Characters_F\Heads\Data\m_White_05_co.paa";
						picture="\A3\Characters_F\Heads\Data\m_White_05_co.paa";
					};
					class Dayton
					{
						name="$STR_A3_NATOMen_LastNames95";
						value="\A3\Characters_F\Heads\Data\m_White_06_co.paa";
						picture="\A3\Characters_F\Heads\Data\m_White_06_co.paa";
					};
					class Dorgan
					{
						name="$STR_A3_NATOMen_LastNames96";
						value="\A3\Characters_F\Heads\Data\m_White_07_co.paa";
						picture="\A3\Characters_F\Heads\Data\m_White_07_co.paa";
					};
					class Halliwell
					{
						name="$STR_A3_NATOMen_LastNames97";
						value="\A3\Characters_F\Heads\Data\m_White_08_co.paa";
						picture="\A3\Characters_F\Heads\Data\m_White_08_co.paa";
					};
					class Johnson
					{
						name="$STR_A3_NATOMen_LastNames98";
						value="\A3\Characters_F\Heads\Data\m_White_09_co.paa";
						picture="\A3\Characters_F\Heads\Data\m_White_09_co.paa";
					};
					class Martinez
					{
						name="$STR_A3_NATOMen_LastNames103";
						value="\A3\Characters_F\Heads\Data\m_White_10_co.paa";
						picture="\A3\Characters_F\Heads\Data\m_White_10_co.paa";
					};
					class Kirby
					{
						name="$STR_A3_NATOMen_LastNames100";
						value="\A3\Characters_F\Heads\Data\m_White_11_co.paa";
						picture="\A3\Characters_F\Heads\Data\m_White_11_co.paa";
					};
					class Reed
					{
						name="$STR_A3_NATOMen_LastNames106";
						value="\A3\Characters_F\Heads\Data\m_White_12_co.paa";
						picture="\A3\Characters_F\Heads\Data\m_White_12_co.paa";
					};
					class Santorum
					{
						name="$STR_A3_NATOMen_LastNames107";
						value="\A3\Characters_F\Heads\Data\m_White_13_co.paa";
						picture="\A3\Characters_F\Heads\Data\m_White_13_co.paa";
					};
					class Smith
					{
						name="$STR_A3_NATOMen_LastNames108";
						value="\A3\Characters_F\Heads\Data\m_White_14_co.paa";
						picture="\A3\Characters_F\Heads\Data\m_White_14_co.paa";
					};
					class Snowe
					{
						name="$STR_a3_natomen_lastnames109";
						value="\A3\Characters_F\Heads\Data\m_White_15_co.paa";
						picture="\A3\Characters_F\Heads\Data\m_White_15_co.paa";
					};
					class Kelly
					{
						name="$STR_a3_natomen_lastnames83";
						value="\A3\Characters_F_EPB\Heads\Data\m_White_16_co.paa";
						picture="\A3\Characters_F_EPB\Heads\Data\m_White_16_co.paa";
					};
					class OConnor
					{
						name="$STR_a3_natomen_lastnames89";
						value="\A3\Characters_F_EPB\Heads\Data\m_White_17_co.paa";
						picture="\A3\Characters_F_EPB\Heads\Data\m_White_17_co.paa";
					};
					class Byrne
					{
						name="$STR_a3_natomen_lastnames87";
						value="\A3\Characters_F_EPB\Heads\Data\m_White_18_co.paa";
						picture="\A3\Characters_F_EPB\Heads\Data\m_White_18_co.paa";
					};
					class OBrien
					{
						name="$STR_a3_natomen_lastnames86";
						value="\A3\Characters_F_EPB\Heads\Data\m_White_19_co.paa";
						picture="\A3\Characters_F_EPB\Heads\Data\m_White_19_co.paa";
					};
					class Walsh
					{
						name="$STR_A3_natomen_lastnames85";
						value="\A3\Characters_F_EPB\Heads\Data\m_White_20_co.paa";
						picture="\A3\Characters_F_EPB\Heads\Data\m_White_20_co.paa";
					};
					class OSullivan
					{
						name="$STR_A3_natomen_lastnames84";
						value="\A3\Characters_F_EPB\Heads\Data\m_White_21_co.paa";
						picture="\A3\Characters_F_EPB\Heads\Data\m_White_21_co.paa";
					};
					class KirbyCamoA
					{
						name="$STR_A3_cfgfaces_man_a3_whitehead_22_a0";
						value="\A3\Characters_F_Mark\Heads\Data\m_White_22_a_co.paa";
						picture="\A3\Characters_F_Mark\Heads\Data\m_White_22_a_co.paa";
					};
					class KirbyCamoL
					{
						name="$STR_A3_cfgfaces_man_a3_whitehead_22_l0";
						value="\A3\Characters_F_Mark\Heads\Data\m_White_22_a_co.paa";
						picture="\A3\Characters_F_Mark\Heads\Data\m_White_22_a_co.paa";
					};
					class KirbyCamoSA
					{
						name="$STR_A3_cfgfaces_man_a3_whitehead_22_sa0";
						value="\A3\Characters_F_Mark\Heads\Data\m_White_22_sa_co.paa";
						picture="\A3\Characters_F_Mark\Heads\Data\m_White_22_sa_co.paa";
					};
					class Nathan
					{
						name="$STR_a3_natomen_firstnames75";
						value="\a3\Characters_F_Orange\Heads\data\m_white_22_co.paa";
						picture="\a3\Characters_F_Orange\Heads\data\m_white_22_co.paa";
					};
					class Capek
					{
						name="Capek";
						value="\a3\Characters_F_Enoch\Heads\data\m_capek_co.paa";
						picture="\a3\Characters_F_Enoch\Heads\data\m_capek_co.paa";
					};
					class Dillon
					{
						name="Dillon";
						value="\a3\Characters_F_Enoch\Heads\data\m_dillon_co.paa";
						picture="\a3\Characters_F_Enoch\Heads\data\m_dillon_co.paa";
					};
					class Homewood
					{
						name="Homewood";
						value="\a3\Characters_F_Enoch\Heads\data\m_homewood_co.paa";
						picture="\a3\Characters_F_Enoch\Heads\data\m_homewood_co.paa";
					};
					class Kesson
					{
						name="Kesson";
						value="\a3\Characters_F_Enoch\Heads\data\m_kesson_co.paa";
						picture="\a3\Characters_F_Enoch\Heads\data\m_kesson_co.paa";
					};
					class Kingsly
					{
						name="Kingsly";
						value="\a3\Characters_F_Enoch\Heads\data\m_kingsly_co.paa";
						picture="\a3\Characters_F_Enoch\Heads\data\m_kingsly_co.paa";
					};
					class Severov
					{
						name="Severov";
						value="\a3\Characters_F_Enoch\Heads\data\m_kruglikov_co.paa";
						picture="\a3\Characters_F_Enoch\Heads\data\m_kruglikov_co.paa";
					};
					class Smolko
					{
						name="Smolko";
						value="\a3\Characters_F_Enoch\Heads\data\m_smolko_co.paa";
						picture="\a3\Characters_F_Enoch\Heads\data\m_smolko_co.paa";
					};
					class Stype
					{
						name="Stype";
						value="\a3\Characters_F_Enoch\Heads\data\m_stype_co.paa";
						picture="\a3\Characters_F_Enoch\Heads\data\m_stype_co.paa";
					};
					class Rudwell
					{
						name="Rudwell";
						value="\a3\Characters_F_Enoch\Heads\data\m_rudwell_co.paa";
						picture="\a3\Characters_F_Enoch\Heads\data\m_rudwell_co.paa";
					};
				};
			};
			class EuropeanBustMaterialList
			{
				property="EuropeanBustMaterialList";
				displayName="$STR_3den_object_attribute_objectmaterialcustom1_displayname";
				control="Combo";
				expression="_this setObjectMaterialGlobal [0, _value]; _this setObjectMaterialGlobal [1, _value]; _this setObjectMaterialGlobal [2, _value];";
				defaultValue="'\a3\Characters_F_Enoch\Heads\data\m_livonianHead_1.rvmat'";
				typeName="STRING";
				class values
				{
					class Nowak
					{
						name="$STR_A3_C_CfgFaces_Man_A3_LivonianHead_10";
						value="\a3\Characters_F_Enoch\Heads\data\m_livonianHead_1.rvmat";
						picture="\a3\Characters_F_Enoch\Heads\data\m_livonianHead_1_co.paa";
					};
					class NowakInjury: Nowak
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_NowakInjury_name0";
						value="\a3\Characters_F_Enoch\Heads\data\m_livonianHead_1_injury.rvmat";
					};
					class Gorecki
					{
						name="$STR_A3_C_CfgFaces_Man_A3_LivonianHead_20";
						value="\a3\Characters_F_Enoch\Heads\data\m_livonianHead_2.rvmat";
						picture="\a3\Characters_F_Enoch\Heads\data\m_livonianHead_2_co.paa";
					};
					class GoreckiInjury: Gorecki
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_GoreckiInjury_name0";
						value="\A3\Characters_F\Heads\Data\m_livonianHead_2_injury.rvmat";
					};
					class Kowalski
					{
						name="$STR_A3_C_CfgFaces_Man_A3_LivonianHead_30";
						value="\a3\Characters_F_Enoch\Heads\data\m_livonianHead_3.rvmat";
						picture="\a3\Characters_F_Enoch\Heads\data\m_livonianHead_3_co.paa";
					};
					class KowalskiInjury: Kowalski
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_KowalskiInjury_name0";
						value="\A3\Characters_F\Heads\Data\m_livonianHead_3_injury.rvmat";
					};
					class Stolarski
					{
						name="$STR_A3_C_CfgFaces_Man_A3_LivonianHead_40";
						value="\a3\Characters_F_Enoch\Heads\data\m_livonianHead_4.rvmat";
						picture="\a3\Characters_F_Enoch\Heads\data\m_livonianHead_4_co.paa";
					};
					class StolarskiInjury: Stolarski
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_StolarskiInjury_name0";
						value="\A3\Characters_F\Heads\Data\m_livonianHead_4_injury.rvmat";
					};
					class Burak
					{
						name="$STR_A3_C_CfgFaces_Man_A3_LivonianHead_50";
						value="\a3\Characters_F_Enoch\Heads\data\m_livonianHead_5.rvmat";
						picture="\a3\Characters_F_Enoch\Heads\data\m_livonianHead_5_co.paa";
					};
					class BurakiInjury: Burak
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_BurakInjury_name0";
						value="\A3\Characters_F\Heads\Data\m_livonianHead_5_injury.rvmat";
					};
					class Kawa
					{
						name="$STR_A3_C_CfgFaces_Man_A3_LivonianHead_60";
						value="\a3\Characters_F_Enoch\Heads\data\m_livonianHead_6.rvmat";
						picture="\a3\Characters_F_Enoch\Heads\data\m_livonianHead_6_co.paa";
					};
					class KawaInjury: Kawa
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_KawaInjury_name0";
						value="\A3\Characters_F\Heads\Data\m_livonianHead_6_injury.rvmat";
					};
					class Janowski
					{
						name="$STR_A3_C_CfgFaces_Man_A3_LivonianHead_70";
						value="\a3\Characters_F_Enoch\Heads\data\m_livonianHead_7.rvmat";
						picture="\a3\Characters_F_Enoch\Heads\data\m_livonianHead_7_co.paa";
					};
					class JanowskiInjury: Janowski
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_JanowskiInjury_name0";
						value="\A3\Characters_F\Heads\Data\m_livonianHead_7_injury.rvmat";
					};
					class Sternik
					{
						name="$STR_A3_C_CfgFaces_Man_A3_LivonianHead_80";
						value="\a3\Characters_F_Enoch\Heads\data\m_livonianHead_8.rvmat";
						picture="\a3\Characters_F_Enoch\Heads\data\m_livonianHead_8_co.paa";
					};
					class SternikInjury: Sternik
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_SternikInjury_name0";
						value="\A3\Characters_F\Heads\Data\m_livonianHead_8_injury.rvmat";
					};
					class Zielinski
					{
						name="$STR_A3_C_CfgFaces_Man_A3_LivonianHead_90";
						value="\a3\Characters_F_Enoch\Heads\data\m_livonianHead_9.rvmat";
						picture="\a3\Characters_F_Enoch\Heads\data\m_livonianHead_9_co.paa";
					};
					class ZielinskiInjury: Zielinski
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_ZielinskiInjury_name0";
						value="\A3\Characters_F\Heads\Data\m_livonianHead_9_injury.rvmat";
					};
					class Rabinowicz
					{
						name="$STR_A3_C_CfgFaces_Man_A3_LivonianHead_100";
						value="\a3\Characters_F_Enoch\Heads\data\m_livonianHead_10.rvmat";
						picture="\a3\Characters_F_Enoch\Heads\data\m_livonianHead_10_co.paa";
					};
					class RabinowiczInjury: Rabinowicz
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_RabinowiczInjury_name0";
						value="\A3\Characters_F\Heads\Data\m_livonianHead_10_injury.rvmat";
					};
					class Ivanov
					{
						name="$STR_A3_C_CfgFaces_Man_A3_RussianHead_10";
						value="\a3\Characters_F_Enoch\Heads\data\m_russianHead_1.rvmat";
						picture="\a3\Characters_F_Enoch\Heads\data\m_russianHead_1_co.paa";
					};
					class IvanovInjury: Ivanov
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_IvanovInjury_name0";
						value="\A3\Characters_F\Heads\Data\m_russianHead_1_injury.rvmat";
					};
					class Petrenko
					{
						name="$STR_A3_C_CfgFaces_Man_A3_RussianHead_20";
						value="\a3\Characters_F_Enoch\Heads\data\m_russianHead_2.rvmat";
						picture="\a3\Characters_F_Enoch\Heads\data\m_russianHead_2_co.paa";
					};
					class PetrenkoInjury: Petrenko
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_PetrenkoInjury_name0";
						value="\A3\Characters_F\Heads\Data\m_russianHead_2_injury.rvmat";
					};
					class Krupin
					{
						name="$STR_A3_C_CfgFaces_Man_A3_RussianHead_30";
						value="\a3\Characters_F_Enoch\Heads\data\m_russianHead_3.rvmat";
						picture="\a3\Characters_F_Enoch\Heads\data\m_russianHead_3_co.paa";
					};
					class KrupinInjury: Krupin
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_KrupinInjury_name0";
						value="\A3\Characters_F\Heads\Data\m_russianHead_3_injury.rvmat";
					};
					class Adamovichv
					{
						name="$STR_A3_C_CfgFaces_Man_A3_RussianHead_40";
						value="\a3\Characters_F_Enoch\Heads\data\m_russianHead_4.rvmat";
						picture="\a3\Characters_F_Enoch\Heads\data\m_russianHead_4_co.paa";
					};
					class AdamovichvInjury: Adamovichv
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_AdamovichvInjury_name0";
						value="\A3\Characters_F\Heads\Data\m_russianHead_4_injury.rvmat";
					};
					class Yakhin
					{
						name="$STR_A3_C_CfgFaces_Man_A3_RussianHead_50";
						value="\a3\Characters_F_Enoch\Heads\data\m_russianHead_5.rvmat";
						picture="\a3\Characters_F_Enoch\Heads\data\m_russianHead_5_co.paa";
					};
					class YakhinInjury: Yakhin
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_YakhinInjury_name0";
						value="\A3\Characters_F\Heads\Data\m_russianHead_4_injury.rvmat";
					};
					class Sturrock
					{
						name="$STR_A3_to_c03_cfgIdentities_pariah_nameShort";
						value="\A3\Characters_F_Tacops\Heads\Data\m_Sturrock.rvmat";
						picture="\A3\Characters_F_Tacops\Heads\Data\m_Sturrock_co.paa";
					};
					class SturrockInjury: Sturrock
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_SturrockInjury_name0";
						value="\A3\Characters_F\Heads\Data\m_White_01_injury.rvmat";
					};
					class Bayh
					{
						name="$STR_A3_NATOMen_LastNames90";
						value="\A3\Characters_F\Heads\Data\m_White_01.rvmat";
						picture="\A3\Characters_F\Heads\Data\m_White_01_co.paa";
					};
					class BayhInjury: Bayh
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_BayhInjury_name0";
						value="\A3\Characters_F\Heads\Data\m_White_01_injury.rvmat";
					};
					class BayhCamo: Bayh
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_BayhCamo_name0";
						value="\A3\Characters_F_Mark\Heads\Data\m_camo_White_01.rvmat";
					};
					class Burr
					{
						name="$STR_A3_NATOMen_LastNames91";
						value="\A3\Characters_F\Heads\Data\m_White_02.rvmat";
						picture="\A3\Characters_F\Heads\Data\m_White_02_co.paa";
					};
					class BurrInjury: Burr
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_BurrInjury_name0";
						value="\A3\Characters_F\Heads\Data\m_White_02_injury.rvmat";
					};
					class BurrCamo: Burr
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_BurrCamo_name0";
						value="\A3\Characters_F_Mark\Heads\Data\m_camo_White_02.rvmat";
					};
					class Coburn
					{
						name="$STR_A3_NATOMen_LastNames92";
						value="\A3\Characters_F\Heads\Data\m_White_03.rvmat";
						picture="\A3\Characters_F\Heads\Data\m_White_03_co.paa";
					};
					class CoburnInjury: Coburn
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_CoburnInjury_name0";
						value="\A3\Characters_F\Heads\Data\m_White_03_injury.rvmat";
					};
					class CoburnCamo: Coburn
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_CoburnCamo_name0";
						value="\A3\Characters_F_Mark\Heads\Data\m_camo_White_03.rvmat";
					};
					class Collins
					{
						name="$STR_A3_NATOMen_LastNames93";
						value="\A3\Characters_F\Heads\Data\m_White_04.rvmat";
						picture="\A3\Characters_F\Heads\Data\m_White_04_co.paa";
					};
					class CollinsInjury: Collins
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_CollinsInjury_name0";
						value="\A3\Characters_F\Heads\Data\m_White_04_injury.rvmat";
					};
					class CollinsCamo: Collins
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_CollinsCamo_name0";
						value="\A3\Characters_F_Mark\Heads\Data\m_camo_White_04.rvmat";
					};
					class Campbell
					{
						name="$STR_A3_NATOMen_LastNames94";
						value="\A3\Characters_F\Heads\Data\m_White_05.rvmat";
						picture="\A3\Characters_F\Heads\Data\m_White_05_co.paa";
					};
					class CampbellInjury: Campbell
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_CampbellInjury_name0";
						value="\A3\Characters_F\Heads\Data\m_White_05_injury.rvmat";
					};
					class CampbellCamo: Campbell
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_CampbellCamo_name0";
						value="\A3\Characters_F_Mark\Heads\Data\m_camo_White_05.rvmat";
					};
					class Dayton
					{
						name="$STR_A3_NATOMen_LastNames95";
						value="\A3\Characters_F\Heads\Data\m_White_06.rvmat";
						picture="\A3\Characters_F\Heads\Data\m_White_06_co.paa";
					};
					class DaytonInjury: Dayton
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_DaytonInjury_name0";
						value="\A3\Characters_F\Heads\Data\m_White_06_injury.rvmat";
					};
					class DaytonCamo: Dayton
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_DaytonCamo_name0";
						value="\A3\Characters_F_Mark\Heads\Data\m_camo_White_06.rvmat";
					};
					class Dorgan
					{
						name="$STR_A3_NATOMen_LastNames96";
						value="\A3\Characters_F\Heads\Data\m_White_07.rvmat";
						picture="\A3\Characters_F\Heads\Data\m_White_07_co.paa";
					};
					class DorganInjury: Dorgan
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_DorganInjury_name0";
						value="\A3\Characters_F\Heads\Data\m_White_07_injury.rvmat";
					};
					class DorganCamo: Dorgan
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_DorganCamo_name0";
						value="\A3\Characters_F_Mark\Heads\Data\m_camo_White_07.rvmat";
					};
					class Halliwell
					{
						name="$STR_A3_NATOMen_LastNames97";
						value="\A3\Characters_F\Heads\Data\m_White_08.rvmat";
						picture="\A3\Characters_F\Heads\Data\m_White_08_co.paa";
					};
					class HalliwellInjury: Halliwell
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_HalliwellInjury_name0";
						value="\A3\Characters_F\Heads\Data\m_White_08_injury.rvmat";
					};
					class HalliwellCamo: Halliwell
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_HalliwellCamo_name0";
						value="\A3\Characters_F_Mark\Heads\Data\m_camo_White_08.rvmat";
					};
					class Johnson
					{
						name="$STR_A3_NATOMen_LastNames98";
						value="\A3\Characters_F\Heads\Data\m_White_09.rvmat";
						picture="\A3\Characters_F\Heads\Data\m_White_09_co.paa";
					};
					class JohnsonInjury: Johnson
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_JohnsonInjury_name0";
						value="\A3\Characters_F\Heads\Data\m_White_09_injury.rvmat";
					};
					class JohnsonCamo: Johnson
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_JohnsonCamo_name0";
						value="\A3\Characters_F_Mark\Heads\Data\m_camo_White_09.rvmat";
					};
					class Martinez
					{
						name="$STR_A3_NATOMen_LastNames103";
						value="\A3\Characters_F\Heads\Data\m_White_10.rvmat";
						picture="\A3\Characters_F\Heads\Data\m_White_10_co.paa";
					};
					class MartinezInjury: Martinez
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_MartinezInjury_name0";
						value="\A3\Characters_F\Heads\Data\m_White_10_injury.rvmat";
					};
					class MartinezCamo: Martinez
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_MartinezCamo_name0";
						value="\A3\Characters_F_Mark\Heads\Data\m_camo_White_10.rvmat";
					};
					class Kirby
					{
						name="$STR_A3_NATOMen_LastNames100";
						value="\A3\Characters_F\Heads\Data\m_White_11.rvmat";
						picture="\A3\Characters_F\Heads\Data\m_White_11_co.paa";
					};
					class KirbyInjury: Kirby
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_KirbyInjury_name0";
						value="\A3\Characters_F\Heads\Data\m_White_11_injury.rvmat";
					};
					class KirbyCamo: Kirby
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_KirbyCamo_name0";
						value="\A3\Characters_F_Mark\Heads\Data\m_camo_White_11.rvmat";
					};
					class Reed
					{
						name="$STR_A3_NATOMen_LastNames106";
						value="\A3\Characters_F\Heads\Data\m_White_12.rvmat";
						picture="\A3\Characters_F\Heads\Data\m_White_12_co.paa";
					};
					class ReedInjury: Reed
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_ReedInjury_name0";
						value="\A3\Characters_F\Heads\Data\m_White_12_injury.rvmat";
					};
					class ReedCamo: Reed
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_ReedCamo_name0";
						value="\A3\Characters_F_Mark\Heads\Data\m_camo_White_12.rvmat";
					};
					class Santorum
					{
						name="$STR_A3_NATOMen_LastNames107";
						value="\A3\Characters_F\Heads\Data\m_White_13.rvmat";
						picture="\A3\Characters_F\Heads\Data\m_White_13_co.paa";
					};
					class SantorumInjury: Santorum
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_SantorumInjury_name0";
						value="\A3\Characters_F\Heads\Data\m_White_13_injury.rvmat";
					};
					class SantorumCamo: Santorum
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_SantorumCamo_name0";
						value="\A3\Characters_F_Mark\Heads\Data\m_camo_White_13.rvmat";
					};
					class Smith
					{
						name="$STR_A3_NATOMen_LastNames108";
						value="\A3\Characters_F\Heads\Data\m_White_14.rvmat";
						picture="\A3\Characters_F\Heads\Data\m_White_14_co.paa";
					};
					class SmithInjury: Smith
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_SmithInjury_name0";
						value="\A3\Characters_F\Heads\Data\m_White_14_injury.rvmat";
					};
					class SmithCamo: Smith
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_SmithCamo_name0";
						value="\A3\Characters_F_Mark\Heads\Data\m_camo_White_14.rvmat";
					};
					class Snowe
					{
						name="$str_a3_natomen_lastnames109";
						value="\A3\Characters_F\Heads\Data\m_White_15.rvmat";
						picture="\A3\Characters_F\Heads\Data\m_White_15_co.paa";
					};
					class SnoweInjury: Snowe
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_SnoweInjury_name0";
						value="\A3\Characters_F\Heads\Data\m_White_15_injury.rvmat";
					};
					class SnoweCamo: Snowe
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_SnoweCamo_name0";
						value="\A3\Characters_F_Mark\Heads\Data\m_camo_White_15.rvmat";
					};
					class Kelly
					{
						name="$str_a3_natomen_lastnames83";
						value="\A3\Characters_F_EPB\Heads\Data\m_White_16.rvmat";
						picture="\A3\Characters_F_EPB\Heads\Data\m_White_16_co.paa";
					};
					class KellyInjury: Kelly
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_KellyInjury_name0";
						value="\A3\Characters_F_EPB\Heads\Data\m_White_16_injury.rvmat";
					};
					class KellySick: Kelly
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_KellySick_name0";
						value="\A3\Characters_F_Oldman\Heads\Data\m_white_16_sick.rvmat";
					};
					class KellyCamo: Kelly
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_KellyCamo_name0";
						value="\A3\Characters_F_Mark\Heads\Data\m_camo_White_16.rvmat";
					};
					class OConnor
					{
						name="$STR_a3_natomen_lastnames89";
						value="\A3\Characters_F_EPB\Heads\Data\m_White_17.rvmat";
						picture="\A3\Characters_F_EPB\Heads\Data\m_White_17_co.paa";
					};
					class OConnorInjury: OConnor
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_OConnorInjury_name0";
						value="\A3\Characters_F_EPB\Heads\Data\m_White_17_injury.rvmat";
					};
					class OConnorSick: OConnor
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_KellySick_name0";
						value="\A3\Characters_F_Oldman\Heads\Data\m_white_17_sick.rvmat";
					};
					class OConnorCamo: OConnor
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_OConnorCamo_name0";
						value="\A3\Characters_F_Mark\Heads\Data\m_camo_White_17.rvmat";
					};
					class Byrne
					{
						name="$STR_a3_natomen_lastnames87";
						value="\A3\Characters_F_EPB\Heads\Data\m_White_18.rvmat";
						picture="\A3\Characters_F_EPB\Heads\Data\m_White_18_co.paa";
					};
					class ByrneInjury: Byrne
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_ByrneInjury_name0";
						value="\A3\Characters_F_EPB\Heads\Data\m_White_18_injury.rvmat";
					};
					class ByrneSick: Byrne
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_ByrneSick_name0";
						value="\A3\Characters_F_Oldman\Heads\Data\m_white_18_sick.rvmat";
					};
					class ByrneCamo: Byrne
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_ByrneCamo_name0";
						value="\A3\Characters_F_Mark\Heads\Data\m_camo_White_18.rvmat";
					};
					class OBrien
					{
						name="$STR_a3_natomen_lastnames86";
						value="\A3\Characters_F_EPB\Heads\Data\m_White_19.rvmat";
						picture="\A3\Characters_F_EPB\Heads\Data\m_White_19_co.paa";
					};
					class OBrienInjury: OBrien
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_OBrienInjury_name0";
						value="\A3\Characters_F_EPB\Heads\Data\m_White_19_injury.rvmat";
					};
					class OBrienSick: OBrien
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_OBrienSick_name0";
						value="\A3\Characters_F_Oldman\Heads\Data\m_white_19_sick.rvmat";
					};
					class OBrienCamo: OBrien
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_OBrienCamo_name0";
						value="\A3\Characters_F_Mark\Heads\Data\m_camo_White_19.rvmat";
					};
					class Walsh
					{
						name="$STR_A3_natomen_lastnames85";
						value="\A3\Characters_F_EPB\Heads\Data\m_White_20.rvmat";
						picture="\A3\Characters_F_EPB\Heads\Data\m_White_20_co.paa";
					};
					class WalshInjury: Walsh
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_WalshInjury_name0";
						value="\A3\Characters_F_EPB\Heads\Data\m_White_20_injury.rvmat";
					};
					class WalshSick: Walsh
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_WalshSick_name0";
						value="\A3\Characters_F_Oldman\Heads\Data\m_white_20_sick.rvmat";
					};
					class WalshCamo: Walsh
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_WalshCamo_name0";
						value="\A3\Characters_F_Mark\Heads\Data\m_camo_White_20.rvmat";
					};
					class OSullivan
					{
						name="$STR_A3_natomen_lastnames84";
						value="\A3\Characters_F_EPB\Heads\Data\m_White_21.rvmat";
						picture="\A3\Characters_F_EPB\Heads\Data\m_White_21_co.paa";
					};
					class OSullivanInjury: OSullivan
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_OSullivanInjury_name0";
						value="\A3\Characters_F_EPB\Heads\Data\m_White_21_injury.rvmat";
					};
					class OSullivanSick: OSullivan
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_OSullivanSick_name0";
						value="\A3\Characters_F_Oldman\Heads\Data\m_white_21_sick.rvmat";
					};
					class OSullivanCamo: OSullivan
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_OSullivanCamo_name0";
						value="\A3\Characters_F_Mark\Heads\Data\m_camo_White_21.rvmat";
					};
					class KirbyCamoA
					{
						name="$STR_A3_cfgfaces_man_a3_whitehead_22_a0";
						value="\A3\Characters_F_Mark\Heads\Data\m_White_22_a.rvmat";
						picture="\A3\Characters_F_Mark\Heads\Data\m_White_22_a_co.paa";
					};
					class KirbyCamoAInjury: KirbyCamoA
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_KirbyCamoAInjury_name0";
						value="\A3\Characters_F_Mark\Heads\Data\m_White_22_a_injury.rvmat";
					};
					class KirbyCamoL
					{
						name="$STR_A3_cfgfaces_man_a3_whitehead_22_l0";
						value="\A3\Characters_F_Mark\Heads\Data\m_White_22_a.rvmat";
						picture="\A3\Characters_F_Mark\Heads\Data\m_White_22_a_co.paa";
					};
					class KirbyCamoLInjury: KirbyCamoL
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_KirbyCamoLInjury_name0";
						value="\A3\Characters_F_Mark\Heads\Data\m_White_22_l_injury.rvmat";
					};
					class KirbyCamoSA
					{
						name="$STR_A3_cfgfaces_man_a3_whitehead_22_sa0";
						value="\A3\Characters_F_Mark\Heads\Data\m_White_22_sa.rvmat";
						picture="\A3\Characters_F_Mark\Heads\Data\m_White_22_sa_co.paa";
					};
					class KirbyCamoSAInjury: KirbyCamoSA
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_KirbyCamoSAInjury_name0";
						value="\A3\Characters_F_Mark\Heads\Data\m_White_22_sa_injury.rvmat";
					};
					class Nathan
					{
						name="$STR_a3_natomen_firstnames75";
						value="\a3\Characters_F_Orange\Heads\data\m_white_22.rvmat";
						picture="\a3\Characters_F_Orange\Heads\data\m_white_22_co.paa";
					};
					class NathanInjury: Nathan
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_NathanInjury_name0";
						value="\A3\Characters_F_Mark\Heads\Data\m_white_22_injury.rvmat";
					};
					class Capek
					{
						name="Capek";
						value="\a3\Characters_F_Enoch\Heads\data\m_capek.rvmat";
						picture="\a3\Characters_F_Enoch\Heads\data\m_capek_co.paa";
					};
					class CapekInjury: Capek
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_CapekInjury_name0";
						value="\a3\Characters_F_Enoch\Heads\data\m_capek_injury.rvmat";
					};
					class Dillon
					{
						name="Dillon";
						value="\a3\Characters_F_Enoch\Heads\data\m_dillon.rvmat";
						picture="\a3\Characters_F_Enoch\Heads\data\m_dillon_co.paa";
					};
					class DillonInjury: Dillon
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_DillonInjury_name0";
						value="\a3\Characters_F_Enoch\Heads\data\m_dillon_injury.rvmat";
					};
					class Homewood
					{
						name="Homewood";
						value="\a3\Characters_F_Enoch\Heads\data\m_homewood.rvmat";
						picture="\a3\Characters_F_Enoch\Heads\data\m_homewood_co.paa";
					};
					class HomewoodInjury: Homewood
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_HomewoodInjury_name0";
						value="\a3\Characters_F_Enoch\Heads\data\m_Homewood_injury.rvmat";
					};
					class Kesson
					{
						name="Kesson";
						value="\a3\Characters_F_Enoch\Heads\data\m_kesson.rvmat";
						picture="\a3\Characters_F_Enoch\Heads\data\m_kesson_co.paa";
					};
					class KessonInjury: Kesson
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_KessonInjury_name0";
						value="\a3\Characters_F_Enoch\Heads\data\m_Kesson_injury.rvmat";
					};
					class Kingsly
					{
						name="Kingsly";
						value="\a3\Characters_F_Enoch\Heads\data\m_kingsly.rvmat";
						picture="\a3\Characters_F_Enoch\Heads\data\m_kingsly_co.paa";
					};
					class KingslyInjury: Kingsly
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_KingslyInjury_name0";
						value="\a3\Characters_F_Enoch\Heads\data\m_Kingsly_injury.rvmat";
					};
					class Severov
					{
						name="Severov";
						value="\a3\Characters_F_Enoch\Heads\data\m_kruglikov.rvmat";
						picture="\a3\Characters_F_Enoch\Heads\data\m_kruglikov_co.paa";
					};
					class SeverovInjury: Severov
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_SeverovInjury_name0";
						value="\a3\Characters_F_Enoch\Heads\data\m_kruglikov_injury.rvmat";
					};
					class Smolko
					{
						name="Smolko";
						value="\a3\Characters_F_Enoch\Heads\data\m_smolko.rvmat";
						picture="\a3\Characters_F_Enoch\Heads\data\m_smolko_co.paa";
					};
					class SmolkoInjury: Smolko
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_SmolkoInjury_name0";
						value="\a3\Characters_F_Enoch\Heads\data\m_smolko_injury.rvmat";
					};
					class Stype
					{
						name="Stype";
						value="\a3\Characters_F_Enoch\Heads\data\m_stype.rvmat";
						picture="\a3\Characters_F_Enoch\Heads\data\m_stype_co.paa";
					};
					class StypeInjury: Stype
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_StypeInjury_name0";
						value="\a3\Characters_F_Enoch\Heads\data\m_Stype_injury.rvmat";
					};
					class Rudwell
					{
						name="Rudwell";
						value="\a3\Characters_F_Enoch\Heads\data\m_rudwell.rvmat";
						picture="\a3\Characters_F_Enoch\Heads\data\m_rudwell_co.paa";
					};
					class RudwellInjury: Rudwell
					{
						name="$STR_Globe_CfgVehicles_Bust_Male_African_Attributes_AfricanBustMaterialList_RudwellInjury_name0";
						value="\a3\Characters_F_Enoch\Heads\data\m_Rudwell_injury.rvmat";
					};
				};
			};
		};
	};
	class VR_3DSelector_01_default_spinning: VR_3DSelector_01_default_F
	{
		_generalMacro="VR_3DSelector_01_default_spinning";
		scope=1;
		scopeCurator=0;
		displayName="STR_Globe_CfgVehicles_VR_3DSelector_01_default_spinning0";
	};
	class VR_3DSelector_01_incomplete_spinning: VR_3DSelector_01_incomplete_F
	{
		_generalMacro="VR_3DSelector_01_incomplete_spinning";
		scope=1;
		scopeCurator=0;
		displayName="STR_Globe_CfgVehicles_VR_3DSelector_01_incomplete_spinning0";
	};
	class VR_3DSelector_01_complete_spinning: VR_3DSelector_01_complete_F
	{
		_generalMacro="VR_3DSelector_01_complete_spinning";
		scope=1;
		scopeCurator=0;
		displayName="STR_Globe_CfgVehicles_VR_3DSelector_01_complete_spinning0";
	};
	class VR_3DSelector_01_exit_spinning: VR_3DSelector_01_exit_F
	{
		_generalMacro="VR_3DSelector_01_exit_spinning";
		scope=1;
		scopeCurator=0;
		displayName="STR_Globe_CfgVehicles_VR_3DSelector_01_exit_spinning0";
	};
	class VR_Crew_base: VR_Helper_Base_F
	{
		author="O&T Expansion Eden";
		mapSize=0.91000003;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.149;
			verticalOffsetWorld=0;
			init="''";
		};
		_generalMacro="VR_Crew_base";
		scope=1;
		scopeCurator=0;
		model="\A3\Data_F\Proxies\Gunner_Hunter\Commander.p3d";
		icon="iconMan";
		displayName="$STR_b_crew_f0";
		editorCategory="EdCat_VRObjects";
		editorSubcategory="EdSubcat_Personnel";
	};
	class VR_Crew_commander_01: VR_Crew_base
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_Commander_01.jpg";
		_generalMacro="VR_Crew_Commander_01";
		scope=2;
		scopeCurator=2;
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\Gunner_Hunter\Commander.p3d";
	};
	class VR_Crew_commander_03: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_commander_03.jpg";
		_generalMacro="VR_Crew_commander_03";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\T100k\Commander.p3d";
	};
	class VR_Crew_commander_04: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_commander_04.jpg";
		_generalMacro="VR_Crew_commander_04";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\Slammer\Commander.p3d";
	};
	class VR_Crew_commander_05: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_commander_05.jpg";
		_generalMacro="VR_Crew_commander_05";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\SDV\Commander.p3d";
	};
	class VR_Crew_driver_01: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_driver_01.jpg";
		_generalMacro="VR_Crew_driver_01";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\driver_quadbike\driver.p3d";
	};
	class VR_Crew_driver_02: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_driver_02.jpg";
		_generalMacro="VR_Crew_driver_02";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\driver_offroad\driver.p3d";
	};
	class VR_Crew_driver_03: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_driver_03.jpg";
		_generalMacro="VR_Crew_driver_03";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\driver_mid01\driver.p3d";
	};
	class VR_Crew_driver_04: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_driver_04.jpg";
		_generalMacro="VR_Crew_driver_04";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\driver_high01\driver.p3d";
	};
	class VR_Crew_driver_05: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_driver_05.jpg";
		_generalMacro="VR_Crew_driver_05";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\driver_boat01\driver.p3d";
	};
	class VR_Crew_driver_06: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_driver_06.jpg";
		_generalMacro="VR_Crew_driver_06";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\crew_tank01\driver.p3d";
	};
	class VR_Crew_driver_07: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_driver_07.jpg";
		_generalMacro="VR_Crew_driver_07";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\Van\driver.p3d";
	};
	class VR_Crew_driver_08: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_driver_08.jpg";
		_generalMacro="VR_Crew_driver_08";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\Truck_Heavy\driver.p3d";
	};
	class VR_Crew_driver_09: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_driver_09.jpg";
		_generalMacro="VR_Crew_driver_09";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\T100k\driver.p3d";
	};
	class VR_Crew_driver_10: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_driver_10.jpg";
		_generalMacro="VR_Crew_driver_10";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\Small_boat\driver.p3d";
	};
	class VR_Crew_driver_11: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_driver_11.jpg";
		_generalMacro="VR_Crew_driver_11";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\SDV\driver.p3d";
	};
	class VR_Crew_driver_12: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_driver_12.jpg";
		_generalMacro="VR_Crew_driver_12";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\SDV\driver.p3d";
	};
	class VR_Crew_driver_13: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_driver_13.jpg";
		_generalMacro="VR_Crew_driver_13";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\Rubber_boat\driver.p3d";
	};
	class VR_Crew_driver_14: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_driver_14.jpg";
		_generalMacro="VR_Crew_driver_14";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\Quadbike\driver.p3d";
	};
	class VR_Crew_driver_15: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_driver_15.jpg";
		_generalMacro="VR_Crew_driver_15";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\Offroad\driver.p3d";
	};
	class VR_Crew_driver_16: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_driver_16.jpg";
		_generalMacro="VR_Crew_driver_16";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\Fishing_boat\driver.p3d";
	};
	class VR_Crew_driver_17: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_driver_17.jpg";
		_generalMacro="VR_Crew_driver_17";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\Assault_boat\driver.p3d";
	};
	class VR_Crew_driver_18: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_driver_18.jpg";
		_generalMacro="VR_Crew_driver_18";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\Assault_boat\driver.p3d";
	};
	class VR_Crew_gunner_01: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_gunner_01.jpg";
		_generalMacro="VR_Crew_gunner_01";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\pilot_Heli_Attack_01\gunner.p3d";
	};
	class VR_Crew_gunner_02: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_gunner_02.jpg";
		_generalMacro="VR_Crew_gunner_02";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\gunner_staticlauncher\gunner.p3d";
	};
	class VR_Crew_gunner_03: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_gunner_03.jpg";
		_generalMacro="VR_Crew_gunner_03";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\gunner_static_low01\gunner.p3d";
	};
	class VR_Crew_gunner_04: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_gunner_04.jpg";
		_generalMacro="VR_Crew_gunner_04";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\gunner_standup01_minigun\gunner.p3d";
	};
	class VR_Crew_gunner_05: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_gunner_05.jpg";
		_generalMacro="VR_Crew_gunner_05";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\gunner_hunter\gunner.p3d";
	};
	class VR_Crew_gunner_06: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_gunner_06.jpg";
		_generalMacro="VR_Crew_gunner_06";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\gunner_fennek\gunner.p3d";
	};
	class VR_Crew_gunner_07: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_gunner_07.jpg";
		_generalMacro="VR_Crew_gunner_07";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\driver_crusherugv\gunner.p3d";
	};
	class VR_Crew_gunner_08: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_gunner_08.jpg";
		_generalMacro="VR_Crew_gunner_08";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\T100k\gunner.p3d";
	};
	class VR_Crew_gunner_09: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_gunner_09.jpg";
		_generalMacro="VR_Crew_gunner_09";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\StaticTurret\gunner.p3d";
	};
	class VR_Crew_gunner_10: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_gunner_10.jpg";
		_generalMacro="VR_Crew_gunner_10";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\Mortar\gunner.p3d";
	};
	class VR_Crew_gunner_11: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_gunner_11.jpg";
		_generalMacro="VR_Crew_gunner_11";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\Mk6\gunner.p3d";
	};
	class VR_Crew_gunner_12: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_gunner_12.jpg";
		_generalMacro="VR_Crew_gunner_12";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\Hound_MATV\gunner.p3d";
	};
	class VR_Crew_gunner_13: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_gunner_13.jpg";
		_generalMacro="VR_Crew_gunner_13";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\Heli_Transport_01\gunner.p3d";
	};
	class VR_Crew_gunner_14: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_gunner_14.jpg";
		_generalMacro="VR_Crew_gunner_14";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\Heli_Light_02\gunner.p3d";
	};
	class VR_Crew_gunner_16: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_gunner_16.jpg";
		_generalMacro="VR_Crew_gunner_16";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\Heli_Attack_02\gunner.p3d";
	};
	class VR_Crew_gunner_15: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_gunner_15.jpg";
		_generalMacro="VR_Crew_gunner_15";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\Assault_boat\gunner.p3d";
	};
	class VR_Crew_passanger_01: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_passanger_01.jpg";
		_generalMacro="VR_Crew_passanger_01";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\passenger_scooter\Cargo.p3d";
	};
	class VR_Crew_passanger_02: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_passanger_02.jpg";
		_generalMacro="VR_Crew_passanger_02";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\passenger_quadbike\Cargo.p3d";
	};
	class VR_Crew_passanger_03: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_passanger_03.jpg";
		_generalMacro="VR_Crew_passanger_03";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\passenger_mantisrear\Cargo.p3d";
	};
	class VR_Crew_passanger_04: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_passanger_04.jpg";
		_generalMacro="VR_Crew_passanger_04";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\passenger_low01\Cargo.p3d";
	};
	class VR_Crew_passanger_05: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_passanger_05.jpg";
		_generalMacro="VR_Crew_passanger_05";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\passenger_hunter_front\Cargo.p3d";
	};
	class VR_Crew_passanger_06: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_passanger_06.jpg";
		_generalMacro="VR_Crew_passanger_06";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\passenger_hunter_back\Cargo.p3d";
	};
	class VR_Crew_passanger_07: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_passanger_07.jpg";
		_generalMacro="VR_Crew_passanger_07";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\passenger_generic01_leanright\Cargo.p3d";
	};
	class VR_Crew_passanger_08: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_passanger_08.jpg";
		_generalMacro="VR_Crew_passanger_08";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\passenger_generic01_leanleft\Cargo.p3d";
	};
	class VR_Crew_passanger_09: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_passanger_09.jpg";
		_generalMacro="VR_Crew_passanger_09";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\passenger_generic01_foldhands\Cargo.p3d";
	};
	class VR_Crew_passanger_10: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_passanger_10.jpg";
		_generalMacro="VR_Crew_passanger_10";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\passenger_flatground_leanleft\Cargo.p3d";
	};
	class VR_Crew_passanger_26: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_passanger_26.jpg";
		_generalMacro="VR_Crew_passanger_26";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\passenger_flatground_crosslegs\Cargo.p3d";
	};
	class VR_Crew_passanger_11: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_passanger_11.jpg";
		_generalMacro="VR_Crew_passanger_11";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\passenger_boat_rightrear\Cargo.p3d";
	};
	class VR_Crew_passanger_12: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_passanger_12.jpg";
		_generalMacro="VR_Crew_passanger_12";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\passenger_boat_holdright2\Cargo.p3d";
	};
	class VR_Crew_passanger_13: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_passanger_13.jpg";
		_generalMacro="VR_Crew_passanger_13";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\passenger_boat_holdright\Cargo.p3d";
	};
	class VR_Crew_passanger_14: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_passanger_14.jpg";
		_generalMacro="VR_Crew_passanger_14";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\passenger_boat_holdleft2\Cargo.p3d";
	};
	class VR_Crew_passanger_15: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_passanger_15.jpg";
		_generalMacro="VR_Crew_passanger_15";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\passenger_boat_holdleft\Cargo.p3d";
	};
	class VR_Crew_passanger_16: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_passanger_16.jpg";
		_generalMacro="VR_Crew_passanger_16";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\passenger_apc_narrow_generic03\Cargo.p3d";
	};
	class VR_Crew_passanger_18: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_passanger_18.jpg";
		_generalMacro="VR_Crew_passanger_18";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\passenger_apc_narrow_generic02\Cargo.p3d";
	};
	class VR_Crew_passanger_19: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_passanger_19.jpg";
		_generalMacro="VR_Crew_passanger_19";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\passenger_apc_narrow_generic01\Cargo.p3d";
	};
	class VR_Crew_passanger_20: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_passanger_20.jpg";
		_generalMacro="VR_Crew_passanger_20";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\passenger_apc_generic04\Cargo.p3d";
	};
	class VR_Crew_passanger_21: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_passanger_21.jpg";
		_generalMacro="VR_Crew_passanger_21";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\passenger_apc_generic03\Cargo.p3d";
	};
	class VR_Crew_passanger_22: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_passanger_22.jpg";
		_generalMacro="VR_Crew_passanger_22";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\passenger_apc_generic02\Cargo.p3d";
	};
	class VR_Crew_passanger_23: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_passanger_23.jpg";
		_generalMacro="VR_Crew_passanger_23";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\passenger_apc_generic01\Cargo.p3d";
	};
	class VR_Crew_passanger_24: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_passanger_24.jpg";
		_generalMacro="VR_Crew_passanger_24";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\medevac_cargo\Cargo.p3d";
	};
	class VR_Crew_passanger_25: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_passanger_25.jpg";
		_generalMacro="VR_Crew_passanger_25";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\driver_crusherugv\Cargo.p3d";
	};
	class VR_Crew_passanger_KIA_01: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_passanger_KIA_01.jpg";
		_generalMacro="VR_Crew_passanger_KIA_01";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\Truck_Heavy\KIA_Cargo04.p3d";
	};
	class VR_Crew_passanger_KIA_02: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_passanger_KIA_02.jpg";
		_generalMacro="VR_Crew_passanger_KIA_02";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\Truck_Heavy\KIA_Cargo03.p3d";
	};
	class VR_Crew_passanger_KIA_03: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_passanger_KIA_03.jpg";
		_generalMacro="VR_Crew_passanger_KIA_03";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\Truck_Heavy\KIA_Cargo02.p3d";
	};
	class VR_Crew_passanger_27: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_passanger_27.jpg";
		_generalMacro="VR_Crew_passanger_27";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\Truck_Heavy\Cargo03.p3d";
	};
	class VR_Crew_passanger_28: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_passanger_28.jpg";
		_generalMacro="VR_Crew_passanger_28";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\Truck_Heavy\Cargo02.p3d";
	};
	class VR_Crew_passanger_29: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_passanger_29.jpg";
		_generalMacro="VR_Crew_passanger_29";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\Truck_Heavy\Cargo01.p3d";
	};
	class VR_Crew_passanger_30: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_passanger_30.jpg";
		_generalMacro="VR_Crew_passanger_30";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\Small_boat\Cargo.p3d";
	};
	class VR_Crew_passanger_31: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_passanger_31.jpg";
		_generalMacro="VR_Crew_passanger_31";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\Rubber_boat\Cargo04.p3d";
	};
	class VR_Crew_passanger_32: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_passanger_32.jpg";
		_generalMacro="VR_Crew_passanger_32";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\Rubber_boat\Cargo03.p3d";
	};
	class VR_Crew_passanger_33: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_passanger_33.jpg";
		_generalMacro="VR_Crew_passanger_33";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\Rubber_boat\Cargo02.p3d";
	};
	class VR_Crew_passanger_34: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_passanger_34.jpg";
		_generalMacro="VR_Crew_passanger_34";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\Rubber_boat\Cargo01.p3d";
	};
	class VR_Crew_passanger_35: VR_Crew_commander_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VR_Crew_passanger_35.jpg";
		_generalMacro="VR_Crew_passanger_35";
		displayName="$STR_b_crew_f0";
		model="\A3\Data_F\Proxies\Truck_Heavy\Cargo04.p3d";
	};
	class Sign_Arrow_Small: Helper_Base_F
	{
		author="O&T Expansion Eden";
		mapSize=2;
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Sign_Arrow_Small.jpg";
		_generalMacro="Sign_Arrow_Small";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CFGVEHICLES_Sign_Arrow_Small0";
		model="\A3\data_f\ParticleEffects\Universal\Test_Arrow.p3d";
		icon="iconObject_circle";
		accuracy=1000;
		class Attributes
		{
		};
	};
	class Beacon_orange: Reflector_Base_F
	{
		author="O&T Expansion Eden";
		scope=2;
		scopeCurator=2;
		_generalMacro="Beacon_orange";
		displayName="$STR_Globe_CfgVehicles_Beacon_orange0";
		icon="iconObject_circle";
		editorCategory="EdCat_Things";
		editorSubcategory="EdSubcat_Lamps";
		class MarkerLights
		{
			class Light_1
			{
				color[]={1,0.50196099,0};
				ambient[]={0.5,0.2509805,0};
				intensity=1000;
				name="Light_1_pos";
				useFlare=1;
				flareSize=1.7;
				flareMaxDistance=2000;
				blinking=0;
				dayLight=0;
				drawLight=0;
				activeLight=0;
				class Attenuation
				{
					start=0;
					constant=10;
					linear=6;
					quadratic=4;
					hardLimitStart=12;
					hardLimitEnd=15;
				};
			};
		};
		featureType=2;
	};
	class BeaconBlinker_orange_pattern1: Beacon_orange
	{
		_generalMacro="BeaconBlinker_orange_pattern1";
		displayName="$STR_Globe_CfgVehicles_BeaconBlinker_orange_pattern10";
		class MarkerLights: MarkerLights
		{
			class Light_1: Light_1
			{
				blinking=1;
				blinkingPatternGuarantee=0;
				blinkingPattern=0.80000001;
				blinkingStartsOn=1;
			};
		};
	};
	class BeaconBlinker_orange_pattern2: BeaconBlinker_orange_pattern1
	{
		_generalMacro="BeaconBlinker_orange_pattern2";
		displayName="$STR_Globe_CfgVehicles_BeaconBlinker_orange_pattern20";
		class MarkerLights: MarkerLights
		{
			class Light_1: Light_1
			{
				blinkingPattern=0.80000001;
				blinkingStartsOn=0;
			};
		};
	};
	class Beacon_white: Beacon_orange
	{
		_generalMacro="Beacon_white";
		displayName="$STR_Globe_CfgVehicles_Beacon_white0";
		class MarkerLights: MarkerLights
		{
			class Light_1: Light_1
			{
				color[]={1,1,1};
				ambient[]={0.5,0.5,0.5};
			};
		};
	};
	class BeaconBlinker_white_pattern1: Beacon_white
	{
		_generalMacro="BeaconBlinker_white_pattern1";
		displayName="$STR_Globe_CfgVehicles_BeaconBlinker_white_pattern10";
		class MarkerLights: MarkerLights
		{
			class Light_1: Light_1
			{
				blinking=1;
				blinkingPatternGuarantee=0;
				blinkingPattern=0.80000001;
				blinkingStartsOn=1;
			};
		};
	};
	class BeaconBlinker_white_pattern2: BeaconBlinker_white_pattern1
	{
		_generalMacro="BeaconBlinker_white_pattern2";
		displayName="$STR_Globe_CfgVehicles_BeaconBlinker_white_pattern20";
		class MarkerLights: MarkerLights
		{
			class Light_1: Light_1
			{
				blinkingPattern=0.80000001;
				blinkingStartsOn=0;
			};
		};
	};
	class Beacon_green: Beacon_orange
	{
		_generalMacro="Beacon_green";
		displayName="$STR_Globe_CfgVehicles_Beacon_green0";
		class MarkerLights: MarkerLights
		{
			class Light_1: Light_1
			{
				color[]={0,1,0};
				ambient[]={0,1,0};
			};
		};
	};
	class BeaconBlinker_green_pattern1: Beacon_green
	{
		_generalMacro="BeaconBlinker_green_pattern1";
		displayName="$STR_Globe_CfgVehicles_BeaconBlinker_green_pattern10";
		class MarkerLights: MarkerLights
		{
			class Light_1: Light_1
			{
				blinking=1;
				blinkingPatternGuarantee=0;
				blinkingPattern=0.80000001;
				blinkingStartsOn=1;
			};
		};
	};
	class BeaconBlinker_green_pattern2: BeaconBlinker_green_pattern1
	{
		_generalMacro="BeaconBlinker_green_pattern2";
		displayName="$STR_Globe_CfgVehicles_BeaconBlinker_green_pattern20";
		class MarkerLights: MarkerLights
		{
			class Light_1: Light_1
			{
				blinkingPattern=0.80000001;
				blinkingStartsOn=0;
			};
		};
	};
	class Beacon_red: Beacon_orange
	{
		_generalMacro="Beacon_red";
		displayName="$STR_Globe_CfgVehicles_Beacon_red0";
		class MarkerLights: MarkerLights
		{
			class Light_1: Light_1
			{
				color[]={1,0,0};
				ambient[]={0.5,0,0};
			};
		};
	};
	class BeaconBlinker_red_pattern1: Beacon_red
	{
		_generalMacro="BeaconBlinker_red_pattern1";
		displayName="$STR_Globe_CfgVehicles_BeaconBlinker_red_pattern10";
		class MarkerLights: MarkerLights
		{
			class Light_1: Light_1
			{
				blinking=1;
				blinkingPatternGuarantee=0;
				blinkingPattern=0.80000001;
				blinkingStartsOn=1;
			};
		};
	};
	class BeaconBlinker_red_pattern2: BeaconBlinker_red_pattern1
	{
		_generalMacro="BeaconBlinker_red_pattern2";
		displayName="$STR_Globe_CfgVehicles_BeaconBlinker_red_pattern20";
		class MarkerLights: MarkerLights
		{
			class Light_1: Light_1
			{
				blinkingPattern=0.80000001;
				blinkingStartsOn=0;
			};
		};
	};
	class Beacon_blue: Beacon_orange
	{
		_generalMacro="Beacon_blue";
		displayName="$STR_Globe_CfgVehicles_Beacon_blue0";
		class MarkerLights: MarkerLights
		{
			class Light_1: Light_1
			{
				color[]={0,0,1};
				ambient[]={0,0,0.5};
			};
		};
	};
	class BeaconBlinker_blue_pattern1: Beacon_blue
	{
		_generalMacro="BeaconBlinker_blue_pattern1";
		displayName="$STR_Globe_CfgVehicles_BeaconBlinker_blue_pattern10";
		class MarkerLights: MarkerLights
		{
			class Light_1: Light_1
			{
				blinking=1;
				blinkingPatternGuarantee=0;
				blinkingPattern=0.80000001;
				blinkingStartsOn=1;
			};
		};
	};
	class BeaconBlinker_blue_pattern2: BeaconBlinker_blue_pattern1
	{
		_generalMacro="BeaconBlinker_blue_pattern2";
		displayName="$STR_Globe_CfgVehicles_BeaconBlinker_blue_pattern20";
		class MarkerLights: MarkerLights
		{
			class Light_1: Light_1
			{
				blinkingPattern=0.80000001;
				blinkingStartsOn=0;
			};
		};
	};
	class 3DEN_Helper_base_G: NonStrategic
	{
		author="O&T Expansion Eden";
		mapSize=2;
		_generalMacro="3DEN_Helper_base_G";
		scope=0;
		scopeCurator=0;
		displayName="";
		model="\A3\Weapons_F\empty.p3d";
		icon="iconObject";
		destrType="DestructNo";
		vehicleClass="Helpers";
		editorCategory="EdCat_Signs";
		editorSubcategory="EdSubcat_Helpers";
		accuracy=0.5;
		armor=0;
		keepHorizontalPlacement=1;
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		hiddenSelectionsMaterials[]={};
		class DestructionEffects
		{
		};
	};
	class Land_3DEN_BoundingBoxBase_G: 3DEN_Helper_base_G
	{
		author="O&T Expansion Eden";
		mapSize=0.91000003;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=1.049;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="";
		_generalMacro="Land_3DEN_BoundingBoxBase_G";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_3DEN_BoundingBoxBase_G0";
		model="\a3\3den\objects\boundingboxbase.p3d";
		icon="iconObject_1x1";
	};
	class Land_3DEN_Cursor_G: 3DEN_Helper_base_G
	{
		author="O&T Expansion Eden";
		mapSize=0.91000003;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=1.049;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="";
		_generalMacro="Land_3DEN_Cursor_G";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_3DEN_Cursor_G0";
		model="\a3\3den\objects\cursor.p3d";
		icon="iconObject_circle";
	};
	class Land_3DEN_Ellipse_G: 3DEN_Helper_base_G
	{
		author="O&T Expansion Eden";
		mapSize=0.91000003;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=1.049;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="";
		_generalMacro="Land_3DEN_Ellipse_G";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_3DEN_Ellipse_G0";
		model="\a3\3den\objects\ellipse.p3d";
		icon="iconObject_circle";
	};
	class Land_3DEN_EllipseLimited_G: 3DEN_Helper_base_G
	{
		author="O&T Expansion Eden";
		mapSize=0.91000003;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=1.049;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="";
		_generalMacro="Land_3DEN_EllipseLimited_G";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_3DEN_EllipseLimited_G0";
		model="\a3\3den\objects\ellipselimited.p3d";
		icon="iconObject_circle";
	};
	class Land_3DEN_Rectangle_G: 3DEN_Helper_base_G
	{
		author="O&T Expansion Eden";
		mapSize=0.91000003;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=1.049;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="";
		_generalMacro="Land_3DEN_Rectangle_G";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_3DEN_Rectangle_G0";
		model="\a3\3den\objects\rectangle.p3d";
		icon="iconObject_1x1";
	};
	class Land_3DEN_RectangleLimited_G: 3DEN_Helper_base_G
	{
		author="O&T Expansion Eden";
		mapSize=0.91000003;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=1.049;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="";
		_generalMacro="Land_3DEN_RectangleLimited_G";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_3DEN_RectangleLimited_G0";
		model="\a3\3den\objects\rectanglelimited.p3d";
		icon="iconObject_1x1";
	};
	class Reflector_Cone_01_G_searchlight: Reflector_Cone_01_base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Reflector_Cone_01_G_searchlight0";
		class Reflectors
		{
			class Light
			{
				position="light_pos";
				direction="light_dir";
				hitpoint="";
				selection="light";
				color[]={0.25,0.25,0.60000002};
				ambient[]={0.25,0.25,0.60000002};
				intensity=10000;
				size=1;
				coneFadeCoef=1;
				innerAngle=20;
				outerAngle=55;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=0.0040000002;
					hardLimitStart=1700;
					hardLimitEnd=2800;
				};
			};
			class Flare
			{
				position="light_pos";
				direction="light_dir";
				hitpoint="";
				selection="light";
				color[]={0.25,0.25,0.60000002};
				ambient[]={0.25,0.25,0.60000002};
				size=1;
				innerAngle=30;
				outerAngle=175;
				coneFadeCoef=10;
				intensity=100;
				useFlare=1;
				dayLight=0;
				flareSize=1.85;
				flareMaxDistance=1400;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=0;
					quadratic=10;
					hardLimitStart=0;
					hardLimitEnd=0.89999998;
				};
			};
		};
		aggregateReflectors[]=
		{

			{
				"Light"
			},
			
			{
				"Flare"
			}
		};
	};
	class Reflector_Cone_01_G_searchlight_noFlare: Reflector_Cone_01_base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Reflector_Cone_01_G_searchlight_noFlare0";
		class Reflectors
		{
			class Light
			{
				position="light_pos";
				direction="light_dir";
				hitpoint="";
				selection="light";
				color[]={0.25,0.25,0.60000002};
				ambient[]={0.25,0.25,0.60000002};
				intensity=10000;
				size=1;
				coneFadeCoef=1;
				innerAngle=20;
				outerAngle=55;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=0.0040000002;
					hardLimitStart=1700;
					hardLimitEnd=2800;
				};
			};
		};
		aggregateReflectors[]=
		{

			{
				"Light"
			}
		};
	};
};
