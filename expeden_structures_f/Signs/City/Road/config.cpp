class CfgPatches
{
	class Structures_Globe_Signs_City_Road
	{
		addonRootClass="A3_Structures_F_Globe";
		requiredAddons[]=
		{
			"Structures_Globe_Signs_City"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Sign_TouristDirect_01",
			"Sign_noDumpRubbish_01",
			"Sign_Port_01_straight",
			"Sign_Port_01_left",
			"Sign_Port_01_right",
			"RoadSign_Livonia_accommodation",
			"RoadSign_Livonia_airport",
			"RoadSign_Livonia_chippings",
			"RoadSign_Livonia_deadend",
			"RoadSign_Livonia_deadend_left",
			"RoadSign_Livonia_deadend_left_new",
			"RoadSign_Livonia_deadend_right",
			"RoadSign_Livonia_deadend_right_new",
			"RoadSign_Livonia_buses",
			"RoadSign_Livonia_cow",
			"RoadSign_Livonia_crossbuck",
			"RoadSign_Livonia_crossbuck_stop",
			"RoadSign_Livonia_crossroadmain",
			"RoadSign_Livonia_danger",
			"RoadSign_Livonia_danger_new",
			"RoadSign_Livonia_deer",
			"RoadSign_Livonia_downhill",
			"RoadSign_Livonia_flyawaygrit",
			"RoadSign_Livonia_restaurant",
			"RoadSign_Livonia_heightlimit",
			"RoadSign_Livonia_left",
			"RoadSign_Livonia_left_new",
			"RoadSign_Livonia_leftDirection",
			"RoadSign_Livonia_main",
			"RoadSign_Livonia_main_end",
			"RoadSign_Livonia_noDriving",
			"RoadSign_Livonia_noDriving_new",
			"RoadSign_Livonia_noDrivingWronWay",
			"RoadSign_Livonia_oneway",
			"RoadSign_Livonia_parking",
			"RoadSign_Livonia_pedestrianCrossing",
			"RoadSign_Livonia_priority",
			"RoadSign_Livonia_priority_new",
			"RoadSign_Livonia_railcross80",
			"RoadSign_Livonia_railcross160",
			"RoadSign_Livonia_railcross240",
			"RoadSign_Livonia_right",
			"RoadSign_Livonia_rightDirection",
			"RoadSign_Livonia_serpentine_left",
			"RoadSign_Livonia_serpentine_right",
			"RoadSign_Livonia_service",
			"RoadSign_Livonia_snow",
			"RoadSign_Livonia_snowchains",
			"RoadSign_Livonia_snowchains_end",
			"RoadSign_Livonia_speed_20",
			"RoadSign_Livonia_speed_50",
			"RoadSign_Livonia_stop",
			"RoadSign_Livonia_stop_new",
			"RoadSign_Livonia_stopprohibited",
			"RoadSign_Livonia_noEntry_tractor",
			"RoadSign_Livonia_RailTrackCrossing",
			"RoadSign_Livonia_RailTrackCrossingBarrier",
			"RoadSign_Livonia_uphill",
			"RoadSign_Livonia_waitingProhibited",
			"RoadCone_L_off",
			"RoadCone_L_v2",
			"RoadCone_L_v2_off",
			"RoadBarrier_small_off",
			"RoadBarrier_small_v2",
			"RoadBarrier_small_v2_off",
			"VergePost_03",
			"RoadSign_01_wild",
			"RoadSign_01_unevenRoad_Altis",
			"RoadSign_01_SteepU",
			"RoadSign_01_SteepD",
			"RoadSign_01_rocks",
			"RoadSign_01_pedestrianCrossing",
			"RoadSign_01_ramp",
			"RoadSign_01_other",
			"RoadSign_01_cows",
			"RoadSign_01_looseChippings",
			"RoadSign_01_aircraft",
			"RoadSign_01_stop",
			"RoadSign_01_speedLimit_end",
			"RoadSign_01_speedLimit80",
			"RoadSign_01_speedLimit80_damaged",
			"RoadSign_01_speedLimit70",
			"RoadSign_01_speedLimit50",
			"RoadSign_01_speedLimit30",
			"RoadSign_02_priority",
			"RoadSign_03_pedestrianZone",
			"RoadSign_03_noStopping",
			"RoadSign_03_noPowerVehicles",
			"RoadSign_03_noPollutingVehicles",
			"RoadSign_03_noPassage",
			"RoadSign_03_noParkingAltOdd",
			"RoadSign_03_noParkingAltEven",
			"RoadSign_03_noParking",
			"RoadSign_03_noOvertakingTruck",
			"RoadSign_03_noOvertaking",
			"RoadSign_03_noEntry",
			"RoadSign_03_noDriving",
			"RoadSign_03_junctionrow",
			"RoadSign_03_junction",
			"RoadSign_04_toilet",
			"RoadSign_04_taxiRank",
			"RoadSign_04_restaurant",
			"RoadSign_04_refreshments",
			"RoadSign_04_picnicSite",
			"RoadSign_04_petrolStation",
			"RoadSign_04_pedestrianCrossing",
			"RoadSign_04_hotel",
			"RoadSign_04_firstAid",
			"RoadSign_04_deadEnd",
			"RoadSign_01_dangerBend_single_left",
			"RoadSign_01_dangerBend_single_right",
			"RoadSign_01_dangerBends_left",
			"RoadSign_01_dangerBends_right",
			"RoadSign_01_crosroad",
			"RoadSign_03_turnRight1",
			"RoadSign_03_turnRight2",
			"RoadSign_03_turnLeft2",
			"RoadSign_03_turnLeft1",
			"RoadSign_03_forward",
			"ArrowDesk_R_single",
			"ArrowDesk_L_single"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class RoadBarrier_small_F;
	class RoadCone_L_F;
	class Signs_base_F;
	class RoadSign_City_Base;
	class RoadSign_01_wild: RoadSign_City_Base
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
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_01_wild.jpg";
		_generalMacro="RoadSign_01_wild";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_RoadSigns";
		displayName="$STR_a3_mdl_sites_disp_site_ambient";
		icon="iconObject_triangle";
		model="\A3\Signs_F\SignT\SignT_WarningWild.p3d";
	};
	class RoadSign_01_unevenRoad_Altis: RoadSign_01_wild
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_01_unevenRoad_Altis.jpg";
		_generalMacro="RoadSign_01_unevenRoad_Altis";
		displayName="$STR_Globe_CfgVehicle_RoadSign_01_unevenRoad_Altis0";
		icon="iconObject_triangle";
		model="\A3\Signs_F\SignT\SignT_warningUnevenRoad.p3d";
	};
	class RoadSign_01_SteepU: RoadSign_01_wild
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_01_SteepU.jpg";
		_generalMacro="RoadSign_01_SteepU";
		displayName="$STR_Globe_CfgVehicle_RoadSign_01_SteepU0";
		icon="iconObject_triangle";
		model="\A3\Signs_F\SignT\SignT_warningSteepUp.p3d";
	};
	class RoadSign_01_SteepD: RoadSign_01_wild
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_01_SteepD.jpg";
		_generalMacro="RoadSign_01_SteepD";
		displayName="$STR_Globe_CfgVehicle_RoadSign_01_SteepD0";
		icon="iconObject_triangle";
		model="\A3\Signs_F\SignT\SignT_warningSteepDown.p3d";
	};
	class RoadSign_01_rocks: RoadSign_01_wild
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_01_Rocks.jpg";
		_generalMacro="RoadSign_01_Rocks";
		displayName="$STR_a3_cfgeditorsubcategories_edsubcat_rocks0";
		icon="iconObject_triangle";
		model="\A3\Signs_F\SignT\SignT_warningRocks.p3d";
	};
	class RoadSign_01_pedestrianCrossing: RoadSign_01_wild
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_01_PedestrianCrossing.jpg";
		_generalMacro="RoadSign_01_PedestrianCrossing";
		displayName="$STR_a3_cfgvehicles_land_pedestriancrossing_01_6m_6str_f0";
		icon="iconObject_triangle";
		model="\A3\Signs_F\SignT\SignT_warningPedCrossing.p3d";
	};
	class RoadSign_01_ramp: RoadSign_01_wild
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_01_Ramp.jpg";
		_generalMacro="RoadSign_01_Ramp";
		displayName="$STR_Globe_CfgVehicle_RoadSign_01_Ramp0";
		icon="iconObject_triangle";
		model="\A3\Signs_F\SignT\SignT_warningRamp.p3d";
	};
	class RoadSign_01_other: RoadSign_01_wild
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_01_other.jpg";
		_generalMacro="RoadSign_01_other";
		displayName="$STR_3den_attributes_behaviour_aware_text";
		icon="iconObject_triangle";
		model="\A3\Signs_F\SignT\SignT_warningOther.p3d";
	};
	class RoadSign_01_cows: RoadSign_01_wild
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_01_cows.jpg";
		_generalMacro="RoadSign_01_cows";
		displayName="$STR_a3_mdl_sites_disp_site_ambient";
		icon="iconObject_triangle";
		model="\A3\Signs_F\SignT\SignT_warningCows.p3d";
	};
	class RoadSign_01_looseChippings: RoadSign_01_wild
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_01_looseChippings.jpg";
		_generalMacro="RoadSign_01_looseChippings";
		displayName="$STR_Globe_CfgVehicle_RoadSign_01_looseChippings0";
		icon="iconObject_triangle";
		model="\A3\Signs_F\SignT\SignT_warningChippings.p3d";
	};
	class RoadSign_01_aircraft: RoadSign_01_wild
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_01_aircraft.jpg";
		_generalMacro="RoadSign_01_aircraft";
		displayName="$STR_a3_cfgeditorsubcategories_edsubcat_planes0";
		icon="iconObject_triangle";
		model="\A3\Signs_F\SignT\SignT_warningaircraft.p3d";
	};
	class RoadSign_01_stop: RoadSign_01_wild
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_01_stop.jpg";
		_generalMacro="RoadSign_01_stop";
		displayName="$STR_a3_stop";
		icon="iconObject_circle";
		model="\A3\Signs_F\SignT\SignT_stop.p3d";
	};
	class RoadSign_01_speedLimit_end: RoadSign_01_wild
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_01_speedLimit_end.jpg";
		_generalMacro="RoadSign_01_speedLimit_end";
		displayName="$STR_Globe_CfgVehicle_RoadSign_01_speedLimit_end0";
		icon="iconObject_circle";
		model="\A3\Signs_F\SignT\SignT_speedlimitend.p3d";
	};
	class RoadSign_01_speedLimit80: RoadSign_01_wild
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_01_speedLimit80.jpg";
		_generalMacro="RoadSign_01_speedLimit80";
		displayName="$STR_Globe_CfgVehicle_RoadSign_01_speedLimit800";
		icon="iconObject_circle";
		model="\A3\Signs_F\SignT\SignT_speedlimit80.p3d";
		class EventHandlers
		{
			hitPart="(_this # 0) spawn expEden_fnc_roadSignSpeedLimit80Destriction";
		};
	};
	class RoadSign_01_speedLimit80_damaged: RoadSign_01_wild
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_01_speedLimit80_damaged.jpg";
		_generalMacro="RoadSign_01_speedLimit80_damaged";
		displayName="$STR_Globe_CfgVehicle_RoadSign_01_speedLimit80_damaged0";
		icon="iconObject_circle";
		model="\A3\Signs_F\SignT\SignT_speedlimit80_d.p3d";
	};
	class RoadSign_01_speedLimit70: RoadSign_01_wild
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_01_speedLimit70.jpg";
		_generalMacro="RoadSign_01_speedLimit70";
		displayName="$STR_Globe_CfgVehicle_RoadSign_01_speedLimit700";
		icon="iconObject_circle";
		model="\A3\Signs_F\SignT\SignT_speedlimit70.p3d";
	};
	class RoadSign_01_speedLimit50: RoadSign_01_wild
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_01_speedLimit50.jpg";
		_generalMacro="RoadSign_01_speedLimit50";
		displayName="$STR_Globe_CfgVehicle_RoadSign_01_speedLimit500";
		icon="iconObject_circle";
		model="\A3\Signs_F\SignT\SignT_speedlimit50.p3d";
	};
	class RoadSign_01_speedLimit30: RoadSign_01_wild
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_01_speedLimit30.jpg";
		_generalMacro="RoadSign_01_speedLimit30";
		displayName="$STR_Globe_CfgVehicle_RoadSign_01_speedLimit300";
		icon="iconObject_circle";
		model="\A3\Signs_F\SignT\SignT_speedlimit30.p3d";
	};
	class ArrowDesk_R_single: RoadSign_01_wild
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\ArrowDesk_R_single.jpg";
		_generalMacro="ArrowDesk_R_single";
		displayName="$STR_Globe_CfgVehicle_ArrowDesk_R_single0";
		model="\A3\Signs_F\SignT\SignT_sharpbendright.p3d";
	};
	class ArrowDesk_L_single: RoadSign_01_wild
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\ArrowDesk_L_single.jpg";
		_generalMacro="ArrowDesk_L_single";
		displayName="$STR_Globe_CfgVehicle_ArrowDesk_L_single0";
		model="\A3\Signs_F\SignT\SignT_sharpbendleft.p3d";
	};
	class RoadSign_02_priority: RoadSign_01_wild
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_02_priority.jpg";
		_generalMacro="RoadSign_02_priority";
		displayName="$STR_a3_modules_moduleomintel_f_attributes_priority0";
		model="\A3\Signs_F\SignT\SignT_priority.p3d";
		icon="iconObject_diamond";
	};
	class RoadSign_03_pedestrianZone: RoadSign_01_wild
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_03_pedestrianZone.jpg";
		_generalMacro="RoadSign_03_pedestrianZone";
		displayName="$STR_Globe_CfgVehicle_RoadSign_03_pedestrianZone0";
		icon="iconObject_circle";
		model="\A3\Signs_F\SignT\SignT_pedestrianzone.p3d";
	};
	class RoadSign_03_noStopping: RoadSign_01_wild
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_03_noStopping.jpg";
		_generalMacro="RoadSign_03_noStopping";
		displayName="$STR_Globe_CfgVehicle_RoadSign_03_noStopping0";
		icon="iconObject_circle";
		model="\A3\Signs_F\SignT\SignT_nostopping.p3d";
	};
	class RoadSign_03_noPowerVehicles: RoadSign_01_wild
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_03_noPowerVehicles.jpg";
		_generalMacro="RoadSign_03_noPowerVehicles";
		displayName="$STR_Globe_CfgVehicle_RoadSign_03_noPowerVehicles0";
		icon="iconObject_circle";
		model="\A3\Signs_F\SignT\SignT_nopowervehs.p3d";
	};
	class RoadSign_03_noPollutingVehicles: RoadSign_01_wild
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_03_noPollutingVehicles.jpg";
		_generalMacro="RoadSign_03_noPollutingVehicles";
		displayName="$STR_Globe_CfgVehicle_RoadSign_03_noPollutingVehicles0";
		icon="iconObject_circle";
		model="\A3\Signs_F\SignT\SignT_nopollutingvehs.p3d";
	};
	class RoadSign_03_noPassage: RoadSign_01_wild
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_03_noPassage.jpg";
		_generalMacro="RoadSign_03_noPassage";
		displayName="$STR_a3_stop";
		icon="iconObject_circle";
		model="\A3\Signs_F\SignT\SignT_nopassage.p3d";
	};
	class RoadSign_03_noParkingAltOdd: RoadSign_01_wild
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_03_noParkingAltOdd.jpg";
		_generalMacro="RoadSign_03_noParkingAltOdd";
		displayName="$STR_Globe_CfgVehicle_RoadSign_03_noParkingAltOdd0";
		icon="iconObject_circle";
		model="\A3\Signs_F\SignT\SignT_noparkingaltodd.p3d";
	};
	class RoadSign_03_noParkingAltEven: RoadSign_01_wild
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_03_noParkingAltEven.jpg";
		_generalMacro="RoadSign_03_noParkingAltEven";
		displayName="$STR_Globe_CfgVehicle_RoadSign_03_noParkingAltEven0";
		icon="iconObject_circle";
		model="\A3\Signs_F\SignT\SignT_noparkingalteven.p3d";
	};
	class RoadSign_03_noParking: RoadSign_01_wild
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_03_noParking.jpg";
		_generalMacro="RoadSign_03_noParking";
		displayName="$STR_Globe_CfgVehicle_RoadSign_03_noParking0";
		icon="iconObject_circle";
		model="\A3\Signs_F\SignT\SignT_noparking.p3d";
	};
	class RoadSign_03_noOvertakingTruck: RoadSign_01_wild
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_03_noOvertakingTruck.jpg";
		_generalMacro="RoadSign_03_noOvertakingTruck";
		displayName="$STR_Globe_CfgVehicle_RoadSign_03_noOvertakingTruck0";
		model="\A3\Signs_F\SignT\SignT_noovertakingtruck.p3d";
	};
	class RoadSign_03_noOvertaking: RoadSign_01_wild
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_03_noOvertaking.jpg";
		_generalMacro="RoadSign_03_noOvertaking";
		displayName="$STR_Globe_CfgVehicle_RoadSign_03_noOvertaking0";
		model="\A3\Signs_F\SignT\SignT_noovertaking.p3d";
	};
	class RoadSign_03_noEntry: RoadSign_01_wild
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_03_noEntry.jpg";
		_generalMacro="RoadSign_03_noEntry";
		displayName="$STR_Globe_CfgVehicle_RoadSign_03_noEntry0";
		icon="iconObject_circle";
		model="\A3\Signs_F\SignT\SignT_noEntry.p3d";
	};
	class RoadSign_03_noDriving: RoadSign_01_wild
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_03_noDriving.jpg";
		_generalMacro="RoadSign_03_noDriving";
		displayName="$STR_Globe_CfgVehicle_RoadSign_03_noDriving0";
		icon="iconObject_circle";
		model="\A3\Signs_F\SignT\SignT_noDriving.p3d";
	};
	class RoadSign_03_junctionrow: RoadSign_01_wild
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_03_junctionrow.jpg";
		_generalMacro="RoadSign_03_junctionrow";
		displayName="$STR_Globe_CfgVehicle_RoadSign_03_junctionrow0";
		icon="iconObject_triangle";
		model="\A3\Signs_F\SignT\SignT_JunctionRow.p3d";
	};
	class RoadSign_03_junction: RoadSign_01_wild
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_03_junction.jpg";
		_generalMacro="RoadSign_03_junction";
		displayName="$STR_Globe_CfgVehicle_RoadSign_03_junctionrow0";
		icon="iconObject_triangle";
		model="\A3\Signs_F\SignT\SignT_junction.p3d";
	};
	class RoadSign_04_toilet: RoadSign_01_wild
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_04_toilet.jpg";
		_generalMacro="RoadSign_04_toilet";
		displayName="$STR_Globe_CfgVehicle_RoadSign_04_toilet0";
		icon="iconObject_1x1";
		model="\A3\Signs_F\SignT\SignT_infotoilet.p3d";
	};
	class RoadSign_04_taxiRank: RoadSign_01_wild
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_04_taxiRank.jpg";
		_generalMacro="RoadSign_04_taxiRank";
		displayName="$STR_Globe_CfgVehicle_RoadSign_04_taxiRank0";
		icon="iconObject_1x1";
		model="\A3\Signs_F\SignT\SignT_infotaxirank.p3d";
	};
	class RoadSign_04_restaurant: RoadSign_01_wild
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_04_restaurant.jpg";
		_generalMacro="RoadSign_04_restaurant";
		displayName="$STR_Globe_CfgVehicle_RoadSign_04_restaurant0";
		icon="iconObject_1x1";
		model="\A3\Signs_F\SignT\SignT_infoRestaurant.p3d";
	};
	class RoadSign_04_refreshments: RoadSign_01_wild
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_04_refreshments.jpg";
		_generalMacro="RoadSign_04_refreshments";
		displayName="$STR_Globe_CfgVehicle_RoadSign_04_refreshments0";
		icon="iconObject_1x1";
		model="\A3\Signs_F\SignT\SignT_inforefreshments.p3d";
	};
	class RoadSign_04_picnicSite: RoadSign_01_wild
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_04_picnicSite.jpg";
		_generalMacro="RoadSign_04_picnicSite";
		displayName="$STR_a3_cfgeditorsubcategories_edsubcat_camping0";
		icon="iconObject_1x1";
		model="\A3\Signs_F\SignT\SignT_infopicnicsite.p3d";
	};
	class RoadSign_04_petrolStation: RoadSign_01_wild
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_04_petrolstation.jpg";
		_generalMacro="RoadSign_04_petrolstation";
		displayName="$STR_a3_cfgvehicles_land_fuelstation_feed_f0";
		icon="iconObject_1x1";
		model="\A3\Signs_F\SignT\SignT_infopetrolstation.p3d";
	};
	class RoadSign_04_pedestrianCrossing: RoadSign_01_wild
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_04_pedestrianCrossing.jpg";
		_generalMacro="RoadSign_04_pedestrianCrossing";
		displayName="$STR_a3_cfgvehicles_land_pedestriancrossing_01_6m_6str_f0";
		icon="iconObject_1x1";
		model="\A3\Signs_F\SignT\SignT_infopedcrossing.p3d";
	};
	class RoadSign_04_hotel: RoadSign_01_wild
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_04_hotel.jpg";
		_generalMacro="RoadSign_04_hotel";
		displayName="$STR_a3_cfgmarkers_loc_tourism";
		icon="iconObject_1x1";
		model="\A3\Signs_F\SignT\SignT_infohotel.p3d";
	};
	class RoadSign_04_firstAid: RoadSign_01_wild
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_04_firstAid.jpg";
		_generalMacro="RoadSign_04_firstAid";
		displayName="$STR_a3_c_cfgvehicles_land_healthcenter_01_f0";
		icon="iconObject_1x1";
		model="\A3\Signs_F\SignT\SignT_infofirstaid.p3d";
	};
	class RoadSign_04_deadEnd: RoadSign_01_wild
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_04_deadEnd.jpg";
		_generalMacro="RoadSign_04_deadEnd";
		displayName="$STR_Globe_CfgVehicle_RoadSign_04_deadEnd0";
		icon="iconObject_1x1";
		model="\A3\Signs_F\SignT\SignT_deadEnd.p3d";
	};
	class RoadSign_01_dangerBend_single_left: RoadSign_01_wild
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_01_dangerBend_single_left.jpg";
		_generalMacro="RoadSign_01_dangerBend_single_left";
		displayName="$STR_Globe_CfgVehicle_RoadSign_01_dangerBend_single_left0";
		icon="iconObject_triangle";
		model="\A3\Signs_F\SignT\SignT_dangerBendL.p3d";
	};
	class RoadSign_01_dangerBend_single_right: RoadSign_01_wild
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_01_dangerBend_single_right.jpg";
		_generalMacro="RoadSign_01_dangerBend_single_right";
		displayName="$STR_Globe_CfgVehicle_RoadSign_01_dangerBend_single_right0";
		icon="iconObject_triangle";
		model="\A3\Signs_F\SignT\SignT_dangerBendR.p3d";
	};
	class RoadSign_01_dangerBends_left: RoadSign_01_wild
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_01_dangerBends_left.jpg";
		_generalMacro="RoadSign_01_dangerBends_left";
		displayName="$STR_Globe_CfgVehicle_RoadSign_01_dangerBends_left0";
		icon="iconObject_triangle";
		model="\A3\Signs_F\SignT\SignT_dangerBendsL.p3d";
	};
	class RoadSign_01_dangerBends_right: RoadSign_01_wild
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_01_dangerBends_right.jpg";
		_generalMacro="RoadSign_01_dangerBends_right";
		displayName="$STR_Globe_CfgVehicle_RoadSign_01_dangerBends_right0";
		icon="iconObject_triangle";
		model="\A3\Signs_F\SignT\SignT_dangerBendsR.p3d";
	};
	class RoadSign_01_crosroad: RoadSign_01_wild
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_01_crosroad.jpg";
		_generalMacro="RoadSign_01_crosroad";
		displayName="$STR_Globe_CfgVehicle_RoadSign_03_junctionrow0";
		icon="iconObject_triangle";
		model="\A3\Signs_F\SignT\SignT_crosroad.p3d";
	};
	class RoadSign_03_turnRight1: RoadSign_01_wild
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_03_turnRight1.jpg";
		_generalMacro="RoadSign_03_turnRight1";
		displayName="$STR_a3_arguments_direction_relative1_90_0";
		icon="iconObject_circle";
		model="\A3\Signs_F\SignT\SignT_commandedDirectionTurnRight.p3d";
	};
	class RoadSign_03_turnRight2: RoadSign_01_wild
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_03_turnRight2.jpg";
		_generalMacro="RoadSign_03_turnRight2";
		displayName="$STR_a3_arguments_direction_relative1_90_0";
		icon="iconObject_circle";
		model="\A3\Signs_F\SignT\SignT_commandedDirectionRight.p3d";
	};
	class RoadSign_03_turnLeft2: RoadSign_01_wild
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_03_turnLeft2.jpg";
		_generalMacro="RoadSign_03_turnLeft2";
		displayName="$STR_a3_arguments_direction_relative1_180_0";
		icon="iconObject_circle";
		model="\A3\Signs_F\SignT\SignT_commandeddirectionleft.p3d";
	};
	class RoadSign_03_turnLeft1: RoadSign_01_wild
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_03_turnLeft1.jpg";
		_generalMacro="RoadSign_03_turnLeft1";
		displayName="$STR_a3_arguments_direction_relative1_180_0";
		icon="iconObject_circle";
		model="\A3\Signs_F\SignT\SignT_commandeddirectionturnleft.p3d";
	};
	class RoadSign_03_forward: RoadSign_01_wild
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_03_forward.jpg";
		_generalMacro="RoadSign_03_forward";
		displayName="$STR_a3_arguments_direction_relative1_0_0";
		icon="iconObject_circle";
		model="\A3\Signs_F\SignT\SignT_commandeddirectionforward.p3d";
	};
	class VergePost_03: Signs_base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		mapSize=0.25;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.0020000001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VergePost_03.jpg";
		_generalMacro="VergePost_03";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_VergePost_030";
		model="\A3\Signs_F\SignT\Vergepost_F.p3d";
		icon="iconObject_1x1";
		editorSubcategory="EdSubcat_RoadSigns";
	};
	class Land_SignCommand_01_giveWay_F: Signs_base_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_SignCommand_01_giveWay_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicle_RoadSign_04_giveWay0";
		icon="iconObject_triangle";
	};
	class Land_SignCommand_01_goStraight_F: Signs_base_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_SignCommand_01_goStraight_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_a3_arguments_direction_relative1_0_0";
		icon="iconObject_circle";
	};
	class Land_SignCommand_01_priority_F: Signs_base_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_SignCommand_01_priority_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_a3_modules_moduleomintel_f_attributes_priority0";
		icon="iconObject_diamond";
	};
	class Land_SignCommand_01_stop_F: Signs_base_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_SignCommand_01_stop_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_a3_stop";
		icon="iconObject_circle";
	};
	class Land_SignCommand_01_turnLeft_F: Signs_base_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_SignCommand_01_turnLeft_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_a3_arguments_direction_relative1_180_0";
		icon="iconObject_circle";
	};
	class Land_SignCommand_01_turnLeftAhead_F: Signs_base_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_SignCommand_01_turnLeftAhead_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_a3_arguments_direction_relative1_180_0";
		icon="iconObject_circle";
	};
	class Land_SignCommand_01_turnRight_F: Signs_base_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_SignCommand_01_turnRight_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_a3_arguments_direction_relative1_90_0";
		icon="iconObject_circle";
	};
	class Land_SignCommand_01_turnRightAhead_F: Signs_base_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_SignCommand_01_turnRightAhead_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_a3_arguments_direction_relative1_90_0";
		icon="iconObject_circle";
	};
	class Land_SignInfo_01_deadEnd_F: Signs_base_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_SignInfo_01_deadEnd_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicle_RoadSign_04_deadEnd0";
		icon="iconObject_1x1";
	};
	class Land_SignInfo_01_firstAid_F: Signs_base_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_SignInfo_01_firstAid_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_a3_c_cfgvehicles_land_healthcenter_01_f0";
		icon="iconObject_1x1";
	};
	class Land_SignInfo_01_fuelStation_F: Signs_base_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_SignInfo_01_fuelStation_F.jpg";
		scope=2;
		scopeCurator=2;
		icon="iconObject_1x1";
		displayName="$STR_a3_cfgvehicles_land_fuelstation_feed_f0";
	};
	class Land_SignInfo_01_hotel_F: Signs_base_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_SignInfo_01_hotel_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_a3_cfgmarkers_loc_tourism";
		icon="iconObject_1x1";
	};
	class Land_SignInfo_01_pedestrianCrossing_F: Signs_base_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_SignInfo_01_pedestrianCrossing_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_a3_cfgvehicles_land_pedestriancrossing_01_6m_6str_f0";
		icon="iconObject_1x1";
	};
	class Land_SignInfo_01_pedestrianZone_F: Signs_base_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_SignInfo_01_pedestrianZone_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicle_RoadSign_03_pedestrianZone0";
		icon="iconObject_circle";
	};
	class Land_SignInfo_01_picnicSite_F: Signs_base_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_SignInfo_01_picnicSite_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_a3_cfgeditorsubcategories_edsubcat_camping0";
		icon="iconObject_1x1";
	};
	class Land_SignInfo_01_reduceSpeed_F: Signs_base_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_SignInfo_01_reduceSpeed_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicle_Land_SignInfo_01_reduceSpeed_F0";
		icon="iconObject_1x1";
	};
	class Land_SignInfo_01_refreshments_F: Signs_base_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_SignInfo_01_refreshments_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicle_RoadSign_04_refreshments0";
		icon="iconObject_1x1";
	};
	class Land_SignInfo_01_restaurant_F: Signs_base_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_SignInfo_01_restaurant_F.jpg";
		scope=2;
		scopeCurator=2;
		icon="iconObject_1x1";
		displayName="$STR_Globe_CfgVehicle_RoadSign_04_restaurant0";
	};
	class Land_SignInfo_01_taxi_F: Signs_base_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_SignInfo_01_taxi_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicle_RoadSign_04_taxiRank0";
		icon="iconObject_1x1";
	};
	class Land_SignInfo_01_toilet_F: Signs_base_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_SignInfo_01_toilet_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicle_RoadSign_04_toilet0";
		icon="iconObject_1x1";
	};
	class Land_SignRestrict_01_noDriving_F: Signs_base_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_SignRestrict_01_noDriving_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicle_Land_SignRestrict_01_noDriving_F0";
		icon="iconObject_circle";
	};
	class Land_SignRestrict_01_noEntry_F: Signs_base_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_SignRestrict_01_noEntry_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicle_RoadSign_03_noEntry0";
		icon="iconObject_circle";
	};
	class Land_SignRestrict_01_noOvertaking_F: Signs_base_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_SignRestrict_01_noOvertaking_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicle_RoadSign_03_noOvertaking0";
		icon="iconObject_circle";
	};
	class Land_SignRestrict_01_noOvertakingTruck_F: Signs_base_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_SignRestrict_01_noOvertakingTruck_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicle_RoadSign_03_noOvertakingTruck0";
		icon="iconObject_circle";
	};
	class Land_SignRestrict_01_noParking_F: Signs_base_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_SignRestrict_01_noParking_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicle_RoadSign_03_noParking0";
		icon="iconObject_circle";
	};
	class Land_SignRestrict_01_noParkingAltEven_F: Signs_base_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_SignRestrict_01_noParkingAltEven_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicle_RoadSign_03_noParkingAltEven0";
		icon="iconObject_circle";
	};
	class Land_SignRestrict_01_noParkingAltOdd_F: Signs_base_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_SignRestrict_01_noParkingAltOdd_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicle_RoadSign_03_noParkingAltOdd0";
		icon="iconObject_circle";
	};
	class Land_SignRestrict_01_noPassage_F: Signs_base_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_SignRestrict_01_noPassage_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicle_Land_SignRestrict_01_noDriving_F0";
		icon="iconObject_circle";
	};
	class Land_SignRestrict_01_noPollutingVehicles_F: Signs_base_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_SignRestrict_01_noPollutingVehicles_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicle_RoadSign_03_noPollutingVehicles0";
		icon="iconObject_circle";
	};
	class Land_SignRestrict_01_noPoweredVehicles_F: Signs_base_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_SignRestrict_01_noPoweredVehicles_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicle_RoadSign_03_noPowerVehicles0";
		icon="iconObject_circle";
	};
	class Land_SignRestrict_01_noStopping_F: Signs_base_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_SignRestrict_01_noStopping_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicle_RoadSign_03_noStopping0";
		icon="iconObject_circle";
	};
	class Land_SignRestrict_01_speedLimit_30_F: Signs_base_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_SignRestrict_01_speedLimit_30_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicle_RoadSign_01_speedLimit300";
		icon="iconObject_circle";
	};
	class Land_SignRestrict_01_speedLimit_50_F: Signs_base_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_SignRestrict_01_speedLimit_50_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicle_RoadSign_01_speedLimit500";
		icon="iconObject_circle";
	};
	class Land_SignRestrict_01_speedLimit_70_F: Signs_base_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_SignRestrict_01_speedLimit_70_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicle_RoadSign_01_speedLimit700";
		icon="iconObject_circle";
	};
	class Land_SignRestrict_01_speedLimit_80_d_F: Signs_base_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_SignRestrict_01_speedLimit_80_d_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicle_RoadSign_01_speedLimit80_damaged0";
		icon="iconObject_circle";
	};
	class Land_SignRestrict_01_speedLimit_80_F: Signs_base_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_SignRestrict_01_speedLimit_80_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicle_RoadSign_01_speedLimit800";
		icon="iconObject_circle";
		class EventHandlers
		{
			hitPart="(_this # 0) spawn expEden_fnc_roadSignSpeedLimit80Destriction";
		};
	};
	class Land_SignRestrict_01_speedLimit_end_F: Signs_base_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_SignRestrict_01_speedLimit_end_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicle_RoadSign_01_speedLimit_end0";
		icon="iconObject_circle";
	};
	class Land_SignRestrict_01_speedLimit_national_F: Signs_base_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_SignRestrict_01_speedLimit_national_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicle_RoadSign_01_speedLimit800";
		icon="iconObject_1x1";
	};
	class Land_SignWarning_01_aircrafts_F: Signs_base_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_SignWarning_01_aircrafts_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_a3_cfgeditorsubcategories_edsubcat_planes0";
		icon="iconObject_triangle";
	};
	class Land_SignWarning_01_animals_F: Signs_base_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_SignWarning_01_animals_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_a3_mdl_sites_disp_site_ambient";
		icon="iconObject_triangle";
	};
	class Land_SignWarning_01_bend_left_F: Signs_base_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_SignWarning_01_bend_left_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicle_RoadSign_01_dangerBend_single_left0";
		icon="iconObject_triangle";
	};
	class Land_SignWarning_01_bend_right_F: Signs_base_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_SignWarning_01_bend_right_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicle_RoadSign_01_dangerBend_single_right0";
		icon="iconObject_triangle";
	};
	class Land_SignWarning_01_crossRoad_F: Signs_base_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_SignWarning_01_crossRoad_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicle_RoadSign_03_junctionrow0";
		icon="iconObject_triangle";
	};
	class Land_SignWarning_01_doubleBend_left_F: Signs_base_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_SignWarning_01_doubleBend_left_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicle_RoadSign_01_dangerBends_left0";
		icon="iconObject_triangle";
	};
	class Land_SignWarning_01_doubleBend_right_F: Signs_base_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_SignWarning_01_doubleBend_right_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicle_RoadSign_01_dangerBends_right0";
		icon="iconObject_triangle";
	};
	class Land_SignWarning_01_herds_F: Signs_base_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_SignWarning_01_herds_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_a3_mdl_sites_disp_site_ambient";
		icon="iconObject_triangle";
	};
	class Land_SignWarning_01_chippings_F: Signs_base_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_SignWarning_01_chippings_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicle_RoadSign_01_looseChippings0";
		icon="iconObject_triangle";
	};
	class Land_SignWarning_01_junction_F: Signs_base_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_SignWarning_01_junction_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicle_RoadSign_03_junctionrow0";
		icon="iconObject_triangle";
	};
	class Land_SignWarning_01_junctionRoW_F: Signs_base_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_SignWarning_01_junctionRoW_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicle_RoadSign_03_junctionrow0";
		icon="iconObject_triangle";
	};
	class Land_SignWarning_01_other_F: Signs_base_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_SignWarning_01_other_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_3den_attributes_behaviour_aware_text";
		icon="iconObject_triangle";
	};
	class Land_SignWarning_01_pedestrianCrossing_F: Signs_base_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_SignWarning_01_pedestrianCrossing_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_a3_cfgvehicles_land_pedestriancrossing_01_6m_6str_f0";
		icon="iconObject_triangle";
	};
	class Land_SignWarning_01_ramp_F: Signs_base_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_SignWarning_01_ramp_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicle_RoadSign_01_Ramp0";
		icon="iconObject_triangle";
	};
	class Land_SignWarning_01_roadworks_F: Signs_base_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_SignWarning_01_roadworks_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicle_Land_SignWarning_01_roadworks_F0";
		icon="iconObject_triangle";
	};
	class Land_SignWarning_01_rocks_F: Signs_base_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_SignWarning_01_rocks_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_a3_cfgeditorsubcategories_edsubcat_rocks0";
		icon="iconObject_triangle";
	};
	class Land_SignWarning_01_steepDown_F: Signs_base_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_SignWarning_01_steepDown_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicle_Land_SignWarning_01_steepDown_F0";
		icon="iconObject_triangle";
	};
	class Land_SignWarning_01_steepUp_F: Signs_base_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_SignWarning_01_steepUp_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicle_RoadSign_01_Steep0";
		icon="iconObject_triangle";
	};
	class Land_SignWarning_01_stopOnRequest_F: Signs_base_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_SignWarning_01_stopOnRequest_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicle_Land_SignWarning_01_stopOnRequest_F0";
		icon="iconObject_triangle";
	};
	class Land_SignWarning_01_unevenRoad_F: Signs_base_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_SignWarning_01_unevenRoad_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicle_RoadSign_01_unevenRoad_Altis0";
		icon="iconObject_triangle";
	};
	class Land_Sign_01_sharpBend_left_F: Signs_base_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Sign_01_sharpBend_left_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_Sign_01_sharpBend_left_F0";
	};
	class Land_Sign_01_sharpBend_right_F: Signs_base_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Sign_01_sharpBend_right_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_Sign_01_sharpBend_right_F0";
	};
	class RoadSign_Livonia_accommodation: Signs_base_F
	{
		author="O&T Expansion Eden";
		_generalMacro="RoadSign_Livonia_accommodation";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_Livonia_accommodation.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_a3_cfgmarkers_loc_tourism";
		editorSubcategory="EdSubcat_RoadSigns";
		icon="iconObject_2x3";
		model="\a3\structures_f_enoch\signs\warnings\sign_accomodation.p3d";
	};
	class RoadSign_Livonia_airport: RoadSign_Livonia_accommodation
	{
		_generalMacro="RoadSign_Livonia_airport";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_Livonia_airport.jpg";
		displayName="$STR_a3_cfgeditorsubcategories_edsubcat_planes0";
		icon="iconObject_triangle";
		model="\a3\structures_f_enoch\signs\warnings\sign_airport.p3d";
	};
	class RoadSign_Livonia_chippings: RoadSign_Livonia_accommodation
	{
		_generalMacro="RoadSign_Livonia_chippings";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_Livonia_chippings.jpg";
		displayName="$STR_Globe_CfgVehicle_RoadSign_01_looseChippings0";
		icon="iconObject_triangle";
		model="\a3\structures_f_enoch\signs\warnings\sign_badroadside.p3d";
	};
	class RoadSign_Livonia_deadend: RoadSign_Livonia_accommodation
	{
		_generalMacro="RoadSign_Livonia_deadend";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_Livonia_deadend.jpg";
		displayName="$STR_Globe_CfgVehicle_RoadSign_04_deadEnd0";
		icon="iconObject_1x1";
		model="\a3\structures_f_enoch\signs\warnings\sign_blindway.p3d";
	};
	class RoadSign_Livonia_deadend_left: RoadSign_Livonia_accommodation
	{
		_generalMacro="RoadSign_Livonia_deadend_left";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_Livonia_deadend_left.jpg";
		displayName="$STR_Globe_CfgVehicle_RoadSign_Livonia_deadend_left0";
		icon="iconObject_1x1";
		model="\a3\structures_f_enoch\signs\warnings\sign_blindway_left.p3d";
	};
	class RoadSign_Livonia_deadend_left_new: RoadSign_Livonia_accommodation
	{
		_generalMacro="RoadSign_Livonia_deadend_left_new";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_Livonia_deadend_left_new.jpg";
		displayName="$STR_Globe_CfgVehicle_RoadSign_Livonia_deadend_left_new0";
		icon="iconObject_1x1";
		model="\a3\structures_f_enoch\signs\warnings\sign_blindway_left_new.p3d";
	};
	class RoadSign_Livonia_deadend_right: RoadSign_Livonia_accommodation
	{
		_generalMacro="RoadSign_Livonia_deadend_right";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_Livonia_deadend_right.jpg";
		displayName="$STR_Globe_CfgVehicle_RoadSign_Livonia_deadend_right0";
		icon="iconObject_1x1";
		model="\a3\structures_f_enoch\signs\warnings\sign_blindway_right.p3d";
	};
	class RoadSign_Livonia_deadend_right_new: RoadSign_Livonia_accommodation
	{
		_generalMacro="RoadSign_Livonia_deadend_right_new";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_Livonia_deadend_right_new.jpg";
		displayName="$STR_Globe_CfgVehicle_RoadSign_Livonia_deadend_right_new0";
		icon="iconObject_1x1";
		model="\a3\structures_f_enoch\signs\warnings\sign_blindway_right_new.p3d";
	};
	class RoadSign_Livonia_buses: RoadSign_Livonia_accommodation
	{
		_generalMacro="RoadSign_Livonia_buses";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_Livonia_buses.jpg";
		displayName="$STR_dn_buses";
		icon="iconObject_2x3";
		model="\a3\structures_f_enoch\signs\warnings\sign_bus.p3d";
	};
	class RoadSign_Livonia_cow: RoadSign_Livonia_accommodation
	{
		_generalMacro="RoadSign_Livonia_cow";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_Livonia_cow.jpg";
		displayName="$STR_a3_mdl_sites_disp_site_ambient";
		icon="iconObject_triangle";
		model="\a3\structures_f_enoch\signs\warnings\sign_cow.p3d";
	};
	class RoadSign_Livonia_crossbuck: RoadSign_Livonia_accommodation
	{
		_generalMacro="RoadSign_Livonia_crossbuck";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_Livonia_crossbuck.jpg";
		displayName="$STR_a3_cfgeditorsubcategories_edsubcat_railways0";
		icon="iconObject_10x1";
		model="\a3\structures_f_enoch\signs\warnings\sign_crossbuck.p3d";
	};
	class RoadSign_Livonia_crossbuck_stop: RoadSign_Livonia_accommodation
	{
		_generalMacro="RoadSign_Livonia_crossbuck_stop";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_Livonia_crossbuck_stop.jpg";
		displayName="$STR_Globe_CfgVehicle_RoadSign_Livonia_crossbuck_stop0";
		icon="iconObject_10x1";
		model="\a3\structures_f_enoch\signs\warnings\sign_crossbuck_stop.p3d";
	};
	class RoadSign_Livonia_crossroadmain: RoadSign_Livonia_accommodation
	{
		_generalMacro="RoadSign_Livonia_crossroadmain";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_Livonia_crossroadmain.jpg";
		displayName="$STR_Globe_CfgVehicle_RoadSign_03_junctionrow0";
		icon="iconObject_triangle";
		model="\a3\structures_f_enoch\signs\warnings\sign_crossroadmain.p3d";
	};
	class RoadSign_Livonia_danger: RoadSign_Livonia_accommodation
	{
		_generalMacro="RoadSign_Livonia_danger";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_Livonia_danger.jpg";
		displayName="$STR_Globe_CfgVehicle_RoadSign_Livonia_danger0";
		icon="iconObject_triangle";
		model="\a3\structures_f_enoch\signs\warnings\sign_danger.p3d";
	};
	class RoadSign_Livonia_danger_new: RoadSign_Livonia_accommodation
	{
		_generalMacro="RoadSign_Livonia_danger_new";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_Livonia_danger_new.jpg";
		displayName="$STR_Globe_CfgVehicle_RoadSign_Livonia_danger_new0";
		icon="iconObject_triangle";
		model="\a3\structures_f_enoch\signs\warnings\sign_danger_new.p3d";
	};
	class RoadSign_Livonia_deer: RoadSign_Livonia_accommodation
	{
		_generalMacro="RoadSign_Livonia_deer";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_Livonia_deer.jpg";
		displayName="$STR_a3_mdl_sites_disp_site_ambient";
		icon="iconObject_triangle";
		model="\a3\structures_f_enoch\signs\warnings\sign_deer.p3d";
	};
	class RoadSign_Livonia_downhill: RoadSign_Livonia_accommodation
	{
		_generalMacro="RoadSign_Livonia_downhill";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_Livonia_downhill.jpg";
		displayName="$STR_Globe_CfgVehicle_RoadSign_Livonia_downhill0";
		icon="iconObject_triangle";
		model="\a3\structures_f_enoch\signs\warnings\sign_downhill.p3d";
	};
	class RoadSign_Livonia_flyawaygrit: RoadSign_Livonia_accommodation
	{
		_generalMacro="RoadSign_Livonia_flyawaygrit";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_Livonia_flyawaygrit.jpg";
		displayName="$STR_Globe_CfgVehicle_RoadSign_01_looseChippings0";
		icon="iconObject_triangle";
		model="\a3\structures_f_enoch\signs\warnings\sign_flyawaygrit.p3d";
	};
	class RoadSign_Livonia_restaurant: RoadSign_Livonia_accommodation
	{
		_generalMacro="RoadSign_Livonia_restaurant";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_Livonia_restaurant.jpg";
		displayName="$STR_Globe_CfgVehicle_RoadSign_04_restaurant0";
		icon="iconObject_2x3";
		model="\a3\structures_f_enoch\signs\warnings\sign_food.p3d";
	};
	class RoadSign_Livonia_heightlimit: RoadSign_Livonia_accommodation
	{
		_generalMacro="RoadSign_Livonia_heightlimit";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_Livonia_heightlimit.jpg";
		displayName="$STR_Globe_CfgVehicle_RoadSign_Livonia_heightlimit0";
		icon="iconObject_circle";
		model="\a3\structures_f_enoch\signs\warnings\sign_heightlimit.p3d";
	};
	class RoadSign_Livonia_left: RoadSign_Livonia_accommodation
	{
		_generalMacro="RoadSign_Livonia_left";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_Livonia_left.jpg";
		displayName="$STR_Globe_CfgVehicle_RoadSign_Livonia_left0";
		icon="iconObject_triangle";
		model="\a3\structures_f_enoch\signs\warnings\sign_left.p3d";
	};
	class RoadSign_Livonia_left_new: RoadSign_Livonia_accommodation
	{
		_generalMacro="RoadSign_Livonia_left_new";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_Livonia_left_new.jpg";
		displayName="$STR_Globe_CfgVehicle_RoadSign_Livonia_left_new0";
		icon="iconObject_triangle";
		model="\a3\structures_f_enoch\signs\warnings\sign_left_new.p3d";
	};
	class RoadSign_Livonia_leftDirection: RoadSign_Livonia_accommodation
	{
		_generalMacro="RoadSign_Livonia_leftDirection";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_Livonia_leftDirection.jpg";
		displayName="$STR_a3_arguments_direction_relative1_180_0";
		icon="iconObject_circle";
		model="\a3\structures_f_enoch\signs\warnings\sign_leftdirection.p3d";
	};
	class RoadSign_Livonia_main: RoadSign_Livonia_accommodation
	{
		_generalMacro="RoadSign_Livonia_main";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_Livonia_main.jpg";
		displayName="$STR_a3_modules_moduleomintel_f_attributes_priority0";
		icon="iconObject_diamond";
		model="\a3\structures_f_enoch\signs\warnings\sign_main.p3d";
	};
	class RoadSign_Livonia_main_end: RoadSign_Livonia_accommodation
	{
		_generalMacro="RoadSign_Livonia_main_end";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_Livonia_main_end.jpg";
		displayName="$STR_a3_modules_moduleomintel_f_attributes_priority0";
		icon="iconObject_diamond";
		model="\a3\structures_f_enoch\signs\warnings\sign_main_end.p3d";
	};
	class RoadSign_Livonia_noDriving: RoadSign_Livonia_accommodation
	{
		_generalMacro="RoadSign_Livonia_noDriving";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_Livonia_noDriving.jpg";
		displayName="$STR_Globe_CfgVehicle_RoadSign_Livonia_noDriving0";
		icon="iconObject_circle";
		model="\a3\structures_f_enoch\signs\warnings\sign_nodriving.p3d";
	};
	class RoadSign_Livonia_noDriving_new: RoadSign_Livonia_accommodation
	{
		_generalMacro="RoadSign_Livonia_noDriving_new";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_Livonia_noDriving_new.jpg";
		displayName="$STR_Globe_CfgVehicle_RoadSign_Livonia_noDriving_new0";
		icon="iconObject_circle";
		model="\a3\structures_f_enoch\signs\warnings\sign_nodriving_new.p3d";
	};
	class RoadSign_Livonia_noDrivingWronWay: RoadSign_Livonia_accommodation
	{
		_generalMacro="RoadSign_Livonia_noDrivingWronWay";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_Livonia_noDrivingWronWay.jpg";
		displayName="$STR_a3_stop";
		icon="iconObject_circle";
		model="\a3\structures_f_enoch\signs\warnings\sign_nodrivingwronway.p3d";
	};
	class RoadSign_Livonia_oneway: RoadSign_Livonia_accommodation
	{
		_generalMacro="RoadSign_Livonia_oneway";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_Livonia_oneway.jpg";
		displayName="$STR_a3_arguments_direction_relative1_0_0";
		icon="iconObject_1x1";
		model="\a3\structures_f_enoch\signs\warnings\sign_oneway.p3d";
	};
	class RoadSign_Livonia_parking: RoadSign_Livonia_accommodation
	{
		_generalMacro="RoadSign_Livonia_parking";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_Livonia_parking.jpg";
		displayName="$STR_Globe_CfgVehicle_RoadSign_Livonia_parking0";
		icon="iconObject_2x3";
		model="\a3\structures_f_enoch\signs\warnings\sign_parking.p3d";
	};
	class RoadSign_Livonia_pedestrianCrossing: RoadSign_Livonia_accommodation
	{
		_generalMacro="RoadSign_Livonia_pedestrianCrossing";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_Livonia_pedestrianCrossing.jpg";
		displayName="$STR_a3_cfgvehicles_land_pedestriancrossing_01_6m_6str_f0";
		icon="iconObject_1x1";
		model="\a3\structures_f_enoch\signs\warnings\sign_pedcrossing.p3d";
	};
	class RoadSign_Livonia_priority: RoadSign_Livonia_accommodation
	{
		_generalMacro="RoadSign_Livonia_priority";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_Livonia_priority.jpg";
		displayName="$STR_Globe_CfgVehicle_RoadSign_Livonia_priority0";
		icon="iconObject_triangle";
		model="\a3\structures_f_enoch\signs\warnings\sign_priority.p3d";
	};
	class RoadSign_Livonia_priority_new: RoadSign_Livonia_accommodation
	{
		_generalMacro="RoadSign_Livonia_priority_new";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_Livonia_priority_new.jpg";
		displayName="$STR_Globe_CfgVehicle_RoadSign_Livonia_priority_new0";
		icon="iconObject_triangle";
		model="\a3\structures_f_enoch\signs\warnings\sign_priority_new.p3d";
	};
	class RoadSign_Livonia_railcross80: RoadSign_Livonia_accommodation
	{
		_generalMacro="RoadSign_Livonia_railcross80";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_Livonia_railcross80.jpg";
		displayName="$STR_Globe_CfgVehicle_RoadSign_Livonia_railcross800";
		icon="iconObject_2x5";
		model="\a3\structures_f_enoch\signs\warnings\sign_railcross_80m.p3d";
	};
	class RoadSign_Livonia_railcross160: RoadSign_Livonia_accommodation
	{
		_generalMacro="RoadSign_Livonia_railcross160";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_Livonia_railcross160.jpg";
		displayName="$STR_Globe_CfgVehicle_RoadSign_Livonia_railcross1600";
		icon="iconObject_2x5";
		model="\a3\structures_f_enoch\signs\warnings\sign_railcross_160m.p3d";
	};
	class RoadSign_Livonia_railcross240: RoadSign_Livonia_accommodation
	{
		_generalMacro="RoadSign_Livonia_railcross240";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_Livonia_railcross240.jpg";
		displayName="$STR_Globe_CfgVehicle_RoadSign_Livonia_railcross2400";
		icon="iconObject_2x5";
		model="\a3\structures_f_enoch\signs\warnings\sign_railcross_240m.p3d";
	};
	class RoadSign_Livonia_right: RoadSign_Livonia_accommodation
	{
		_generalMacro="RoadSign_Livonia_right";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_Livonia_right.jpg";
		displayName="$STR_Globe_CfgVehicle_RoadSign_01_dangerBend_single_right0";
		icon="iconObject_triangle";
		model="\a3\structures_f_enoch\signs\warnings\sign_right.p3d";
	};
	class RoadSign_Livonia_rightDirection: RoadSign_Livonia_accommodation
	{
		_generalMacro="RoadSign_Livonia_rightDirection";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_Livonia_rightDirection.jpg";
		displayName="$STR_a3_arguments_direction_relative1_90_0";
		icon="iconObject_circle";
		model="\a3\structures_f_enoch\signs\warnings\sign_rightdirection.p3d";
	};
	class RoadSign_Livonia_serpentine_left: RoadSign_Livonia_accommodation
	{
		_generalMacro="RoadSign_Livonia_serpentine_left";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_Livonia_serpentine_left.jpg";
		displayName="$STR_Globe_CfgVehicle_RoadSign_01_dangerBends_left0";
		icon="iconObject_triangle";
		model="\a3\structures_f_enoch\signs\warnings\sign_serpentine_left.p3d";
	};
	class RoadSign_Livonia_serpentine_right: RoadSign_Livonia_accommodation
	{
		_generalMacro="RoadSign_Livonia_serpentine_right";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_Livonia_serpentine_right.jpg";
		displayName="$STR_Globe_CfgVehicle_RoadSign_01_dangerBends_right0";
		icon="iconObject_triangle";
		model="\a3\structures_f_enoch\signs\warnings\sign_serpentine_right.p3d";
	};
	class RoadSign_Livonia_service: RoadSign_Livonia_accommodation
	{
		_generalMacro="RoadSign_Livonia_service";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_Livonia_service.jpg";
		displayName="$STR_a3_cfgvehicles_land_carservice_f0";
		icon="iconObject_2x3";
		model="\a3\structures_f_enoch\signs\warnings\sign_service.p3d";
	};
	class RoadSign_Livonia_snow: RoadSign_Livonia_accommodation
	{
		_generalMacro="RoadSign_Livonia_snow";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_Livonia_snow.jpg";
		displayName="$STR_Globe_CfgVehicle_RoadSign_Livonia_snow0";
		icon="iconObject_triangle";
		model="\a3\structures_f_enoch\signs\warnings\sign_snow_new.p3d";
	};
	class RoadSign_Livonia_snowchains: RoadSign_Livonia_accommodation
	{
		_generalMacro="RoadSign_Livonia_snowchains";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_Livonia_snowchains.jpg";
		displayName="$STR_Globe_CfgVehicle_RoadSign_Livonia_snowchains0";
		icon="iconObject_circle";
		model="\a3\structures_f_enoch\signs\warnings\sign_snowchains.p3d";
	};
	class RoadSign_Livonia_snowchains_end: RoadSign_Livonia_accommodation
	{
		_generalMacro="RoadSign_Livonia_snowchains_end";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_Livonia_snowchains_end.jpg";
		displayName="$STR_Globe_CfgVehicle_RoadSign_Livonia_snowchains_end0";
		icon="iconObject_circle";
		model="\a3\structures_f_enoch\signs\warnings\sign_snowchains_end.p3d";
	};
	class RoadSign_Livonia_speed_20: RoadSign_Livonia_accommodation
	{
		_generalMacro="RoadSign_Livonia_speed_20";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_Livonia_speed_20.jpg";
		displayName="$STR_Globe_CfgVehicle_RoadSign_Livonia_speed_200";
		icon="iconObject_circle";
		model="\a3\structures_f_enoch\signs\warnings\sign_speed20.p3d";
	};
	class RoadSign_Livonia_speed_50: RoadSign_Livonia_accommodation
	{
		_generalMacro="RoadSign_Livonia_speed_50";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_Livonia_speed_50.jpg";
		displayName="$STR_Globe_CfgVehicle_RoadSign_01_speedLimit500";
		icon="iconObject_circle";
		model="\a3\structures_f_enoch\signs\warnings\sign_speed50.p3d";
	};
	class RoadSign_Livonia_stop: RoadSign_Livonia_accommodation
	{
		_generalMacro="RoadSign_Livonia_stop";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_Livonia_stop.jpg";
		displayName="$STR_Globe_CfgVehicle_RoadSign_Livonia_stop0";
		icon="iconObject_circle";
		model="\a3\structures_f_enoch\signs\warnings\sign_stop.p3d";
	};
	class RoadSign_Livonia_stop_new: RoadSign_Livonia_accommodation
	{
		_generalMacro="RoadSign_Livonia_stop_new";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_Livonia_stop_new.jpg";
		displayName="$STR_Globe_CfgVehicle_RoadSign_Livonia_stop_new0";
		icon="iconObject_circle";
		model="\a3\structures_f_enoch\signs\warnings\sign_stop_new.p3d";
	};
	class RoadSign_Livonia_stopprohibited: RoadSign_Livonia_accommodation
	{
		_generalMacro="RoadSign_Livonia_stopprohibited";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_Livonia_stopprohibited.jpg";
		displayName="$STR_Globe_CfgVehicle_RoadSign_03_noStopping0";
		icon="iconObject_circle";
		model="\a3\structures_f_enoch\signs\warnings\sign_stopprohibited.p3d";
	};
	class RoadSign_Livonia_noEntry_tractor: RoadSign_Livonia_accommodation
	{
		_generalMacro="RoadSign_Livonia_noEntry_tractor";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_Livonia_noEntry_tractor.jpg";
		displayName="$STR_Globe_CfgVehicle_RoadSign_03_noEntry0";
		icon="iconObject_circle";
		model="\a3\structures_f_enoch\signs\warnings\sign_tractorprohibited.p3d";
	};
	class RoadSign_Livonia_RailTrackCrossing: RoadSign_Livonia_accommodation
	{
		_generalMacro="RoadSign_Livonia_RailTrackCrossing";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_Livonia_RailTrackCrossing.jpg";
		displayName="$STR_Globe_CfgVehicle_RoadSign_Livonia_RailTrackCrossing0";
		icon="iconObject_triangle";
		model="\a3\structures_f_enoch\signs\warnings\sign_train.p3d";
	};
	class RoadSign_Livonia_RailTrackCrossingBarrier: RoadSign_Livonia_accommodation
	{
		_generalMacro="RoadSign_Livonia_RailTrackCrossingBarrier";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_Livonia_RailTrackCrossingBarrier.jpg";
		displayName="$STR_Globe_CfgVehicle_RoadSign_Livonia_RailTrackCrossingBarrier0";
		icon="iconObject_triangle";
		model="\a3\structures_f_enoch\signs\warnings\sign_train2.p3d";
	};
	class RoadSign_Livonia_uphill: RoadSign_Livonia_accommodation
	{
		_generalMacro="RoadSign_Livonia_uphill";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_Livonia_uphill.jpg";
		displayName="$STR_Globe_CfgVehicle_RoadSign_Livonia_uphill0";
		icon="iconObject_triangle";
		model="\a3\structures_f_enoch\signs\warnings\sign_uphill.p3d";
	};
	class RoadSign_Livonia_waitingProhibited: RoadSign_Livonia_accommodation
	{
		_generalMacro="RoadSign_Livonia_waitingProhibited";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_Livonia_waitingProhibited.jpg";
		displayName="$STR_Globe_CfgVehicle_RoadSign_03_noParking0";
		icon="iconObject_circle";
		model="\a3\structures_f_enoch\signs\warnings\sign_waitingprohibited.p3d";
	};
	class RoadCone_L_off: RoadCone_L_F
	{
		author="O&T Expansion Eden";
		_generalMacro="RoadCone_L_off";
		displayName="$STR_Globe_CfgVehicles_RoadCone_L_off0";
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
			class DisableActions
			{
				displayName="$STR_A3_CfgVehicles_Land_BattlefieldCross_01_base_F_Attributes_DisableActions0";
				property="DisableActions";
				control="Checkbox";
				defaultValue=0;
				expression="_this setVariable ['Globe_disableAction',_value,isServer]";
			};
			class DisableInit
			{
				displayName="$STR_Action_searchLights_off";
				property="DisableInit";
				control="Checkbox";
				defaultValue=1;
				expression="_this setVariable ['Globe_disableInit',_value,isServer]";
			};
		};
		class UserActions
		{
			class Enable
			{
				displayName="$STR_MPRole_enable";
				displayNameDefault="<img image='\A3\ui_f\data\igui\cfg\actions\take_ca.paa' size='1.8' shadow=2 /><img image='\a3\ui_f\data\igui\cfg\actions\ico_cpt_land_on_ca.paa' size='1.8' shadow=2 />";
				position="Light_1_pos";
				actionNamedSel="";
				radius=1.7;
				onlyForPlayer=1;
				priority=5;
				showWindow=1;
				condition="(alive this) && (simulationEnabled this) && {!(this getVariable ['Globe_disableAction',false])} && (lightIsOn this isEqualTo 'OFF')";
				statement="[this, 'ON'] remoteExec ['switchLight',0,this];";
			};
			class Disable: Enable
			{
				displayName="$STR_MPRole_disable";
				displayNameDefault="<img image='\A3\ui_f\data\igui\cfg\actions\take_ca.paa' size='1.8' shadow=2 /><img image='\a3\ui_f\data\igui\cfg\actions\ico_cpt_land_off_ca.paa' size='1.8' shadow=2 />";
				condition="(alive this) && (simulationEnabled this) && {!(this getVariable ['Globe_disableAction',false])} && (lightIsOn this isEqualTo 'ON')";
				statement="[this, 'OFF'] remoteExec ['switchLight',0,this];";
			};
		};
		class EventHandlers
		{
			class Globe_RoadConeLight
			{
				postInit="if (!is3DEN) then { if (((_this # 0) getVariable ['Globe_disableInit',false])) then { (_this # 0) switchLight 'ON' } else { (_this # 0) switchLight 'OFF' } }";
			};
		};
	};
	class RoadCone_L_v2: RoadCone_L_F
	{
		author="O&T Expansion Eden";
		_generalMacro="RoadCone_L_v2";
		displayName="$STR_Globe_CfgVehicles_RoadCone_L_v20";
		class MarkerLights
		{
			class Light_1
			{
				color[]={1,0.69999999,0};
				ambient[]={0.001,0,0};
				intensity=1000;
				name="Light_1_pos";
				blinking=0;
				useFlare=1;
				flareSize=1;
				flareMaxDistance=400;
				activeLight=0;
				dayLight=0;
				drawLight=0;
			};
		};
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
			class DisableActions
			{
				displayName="$STR_A3_CfgVehicles_Land_BattlefieldCross_01_base_F_Attributes_DisableActions0";
				property="DisableActions";
				control="Checkbox";
				defaultValue=0;
				expression="_this setVariable ['Globe_disableAction',_value,isServer]";
			};
			class DisableInit
			{
				displayName="$STR_Action_searchLights_off";
				property="DisableInit";
				control="Checkbox";
				defaultValue=0;
				expression="_this setVariable ['Globe_disableInit',_value,isServer]";
			};
		};
		class UserActions
		{
			class Enable
			{
				displayName="$STR_MPRole_enable";
				displayNameDefault="<img image='\A3\ui_f\data\igui\cfg\actions\take_ca.paa' size='1.8' shadow=2 /><img image='\a3\ui_f\data\igui\cfg\actions\ico_cpt_land_on_ca.paa' size='1.8' shadow=2 />";
				position="Light_1_pos";
				actionNamedSel="";
				radius=1.7;
				onlyForPlayer=1;
				priority=5;
				showWindow=1;
				condition="(alive this) && (simulationEnabled this) && {!(this getVariable ['Globe_disableAction',false])} && (lightIsOn this isEqualTo 'OFF')";
				statement="[this, 'ON'] remoteExec ['switchLight',0,this];";
			};
			class Disable: Enable
			{
				displayName="$STR_MPRole_disable";
				displayNameDefault="<img image='\A3\ui_f\data\igui\cfg\actions\take_ca.paa' size='1.8' shadow=2 /><img image='\a3\ui_f\data\igui\cfg\actions\ico_cpt_land_off_ca.paa' size='1.8' shadow=2 />";
				condition="(alive this) && (simulationEnabled this) && {!(this getVariable ['Globe_disableAction',false])} && (lightIsOn this isEqualTo 'ON')";
				statement="[this, 'OFF'] remoteExec ['switchLight',0,this];";
			};
		};
	};
	class RoadCone_L_v2_off: RoadCone_L_v2
	{
		author="O&T Expansion Eden";
		_generalMacro="RoadCone_L_v2_off";
		displayName="$STR_Globe_CfgVehicles_RoadCone_L_v2_off0";
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
			class DisableActions
			{
				displayName="$STR_A3_CfgVehicles_Land_BattlefieldCross_01_base_F_Attributes_DisableActions0";
				property="DisableActions";
				control="Checkbox";
				defaultValue=0;
				expression="_this setVariable ['Globe_disableAction',_value,isServer]";
			};
			class DisableInit
			{
				displayName="$STR_Action_searchLights_off";
				property="DisableInit";
				control="Checkbox";
				defaultValue=1;
				expression="_this setVariable ['Globe_disableInit',_value,isServer]";
			};
		};
		class EventHandlers
		{
			class Globe_RoadConeLight
			{
				postInit="if (!is3DEN) then { if (((_this # 0) getVariable ['Globe_disableInit',false])) then { (_this # 0) switchLight 'ON' } else { (_this # 0) switchLight 'OFF' } }";
			};
		};
	};
	class RoadBarrier_small_off: RoadBarrier_small_F
	{
		author="O&T Expansion Eden";
		_generalMacro="RoadBarrier_small_off";
		displayName="$STR_Globe_CfgVehicles_RoadBarrier_small_off0";
		class Attributes
		{
			class DisableActions
			{
				displayName="$STR_A3_CfgVehicles_Land_BattlefieldCross_01_base_F_Attributes_DisableActions0";
				property="DisableActions";
				control="Checkbox";
				defaultValue=0;
				expression="_this setVariable ['Globe_disableAction',_value,isServer]";
			};
			class DisableInit
			{
				displayName="$STR_Action_searchLights_off";
				property="DisableInit";
				control="Checkbox";
				defaultValue=1;
				expression="_this setVariable ['Globe_disableInit',_value,isServer]";
			};
		};
		class UserActions
		{
			class Enable
			{
				displayName="$STR_MPRole_enable";
				displayNameDefault="<img image='\A3\ui_f\data\igui\cfg\actions\take_ca.paa' size='1.8' shadow=2 /><img image='\a3\ui_f\data\igui\cfg\actions\ico_cpt_land_on_ca.paa' size='1.8' shadow=2 />";
				position="Light_1_pos";
				actionNamedSel="";
				radius=1.7;
				onlyForPlayer=1;
				priority=5;
				showWindow=1;
				condition="(alive this) && (simulationEnabled this) && {!(this getVariable ['Globe_disableAction',false])} && (lightIsOn this isEqualTo 'OFF')";
				statement="[this, 'ON'] remoteExec ['switchLight',0,this];";
			};
			class Disable: Enable
			{
				displayName="$STR_MPRole_disable";
				displayNameDefault="<img image='\A3\ui_f\data\igui\cfg\actions\take_ca.paa' size='1.8' shadow=2 /><img image='\a3\ui_f\data\igui\cfg\actions\ico_cpt_land_off_ca.paa' size='1.8' shadow=2 />";
				condition="(alive this) && (simulationEnabled this) && {!(this getVariable ['Globe_disableAction',false])} && (lightIsOn this isEqualTo 'ON')";
				statement="[this, 'OFF'] remoteExec ['switchLight',0,this];";
			};
		};
		class EventHandlers
		{
			class Globe_RoadBarrierLight
			{
				postInit="if (!is3DEN) then { if (((_this # 0) getVariable ['Globe_disableInit',false])) then { (_this # 0) switchLight 'ON' } else { (_this # 0) switchLight 'OFF' } }";
			};
		};
	};
	class RoadBarrier_small_v2: RoadCone_L_v2
	{
		author="O&T Expansion Eden";
		mapSize=0.77999997;
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"light_1_blinking",
					1
				}
			};
			hide[]=
			{
				"zasleh",
				"zadni svetlo",
				"brzdove svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=0.63999999;
			verticalOffsetWorld=0;
			init="''";
		};
		_generalMacro="RoadBarrier_small_v2";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_RoadBarrier_small_v20";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\RoadBarrier_small_F.jpg";
		model="\A3\Signs_F\SignT\RoadBarrier_small_F.p3d";
		icon="iconObject_1x1";
		armor=200;
		hiddenselections[]={};
		hiddenselectionstextures[]={};
		class Attributes
		{
			class DisableActions
			{
				displayName="$STR_A3_CfgVehicles_Land_BattlefieldCross_01_base_F_Attributes_DisableActions0";
				property="DisableActions";
				control="Checkbox";
				defaultValue=0;
				expression="_this setVariable ['Globe_disableAction',_value,isServer]";
			};
			class DisableInit
			{
				displayName="$STR_Action_searchLights_off";
				property="DisableInit";
				control="Checkbox";
				defaultValue=0;
				expression="_this setVariable ['Globe_disableInit',_value,isServer]";
			};
		};
		class UserActions
		{
			class Enable
			{
				displayName="$STR_MPRole_enable";
				displayNameDefault="<img image='\A3\ui_f\data\igui\cfg\actions\take_ca.paa' size='1.8' shadow=2 /><img image='\a3\ui_f\data\igui\cfg\actions\ico_cpt_land_on_ca.paa' size='1.8' shadow=2 />";
				position="Light_1_pos";
				actionNamedSel="";
				radius=1.7;
				onlyForPlayer=1;
				priority=5;
				showWindow=1;
				condition="(alive this) && (simulationEnabled this) && {!(this getVariable ['Globe_disableAction',false])} && (lightIsOn this isEqualTo 'OFF')";
				statement="[this, 'ON'] remoteExec ['switchLight',0,this];";
			};
			class Disable: Enable
			{
				displayName="$STR_MPRole_disable";
				displayNameDefault="<img image='\A3\ui_f\data\igui\cfg\actions\take_ca.paa' size='1.8' shadow=2 /><img image='\a3\ui_f\data\igui\cfg\actions\ico_cpt_land_off_ca.paa' size='1.8' shadow=2 />";
				condition="(alive this) && (simulationEnabled this) && {!(this getVariable ['Globe_disableAction',false])} && (lightIsOn this isEqualTo 'ON')";
				statement="[this, 'OFF'] remoteExec ['switchLight',0,this];";
			};
		};
	};
	class RoadBarrier_small_v2_off: RoadBarrier_small_v2
	{
		author="O&T Expansion Eden";
		_generalMacro="RoadBarrier_small_v2";
		displayName="$STR_Globe_CfgVehicles_RoadBarrier_small_v2_off0";
		class Attributes
		{
			class DisableActions
			{
				displayName="$STR_A3_CfgVehicles_Land_BattlefieldCross_01_base_F_Attributes_DisableActions0";
				property="DisableActions";
				control="Checkbox";
				defaultValue=0;
				expression="_this setVariable ['Globe_disableAction',_value,isServer]";
			};
			class DisableInit
			{
				displayName="$STR_Action_searchLights_off";
				property="DisableInit";
				control="Checkbox";
				defaultValue=1;
				expression="_this setVariable ['Globe_disableInit',_value,isServer]";
			};
		};
		class EventHandlers
		{
			class Globe_RoadBarrierLight
			{
				postInit="if (!is3DEN) then { if (((_this # 0) getVariable ['Globe_disableInit',false])) then { (_this # 0) switchLight 'ON' } else { (_this # 0) switchLight 'OFF' } }";
			};
		};
	};
	class Sign_noDumpRubbish_01: RoadSign_Livonia_accommodation
	{
		_generalMacro="Sign_noDumpRubbish_01";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Sign_noDumpRubbish_01.jpg";
		displayName="$STR_Globe_CfgVehicle_Sign_noDumpRubbish_010";
		icon="iconObject_circle";
		model="\a3\signs_f\signs_ad\signs_nodump_f";
	};
	class Sign_Port_01_straight: RoadSign_Livonia_accommodation
	{
		_generalMacro="Sign_Port_01_straight";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Sign_Port_01_straight.jpg";
		displayName="$STR_Globe_CfgVehicle_Sign_Port_01_straight0";
		icon="iconObject_2x1";
		model="\a3\signs_f\signs_ad\signsad_r_harbourdirect_f";
	};
	class Sign_Port_01_left: RoadSign_Livonia_accommodation
	{
		_generalMacro="Sign_Port_01_left";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Sign_Port_01_left.jpg";
		displayName="$STR_Globe_CfgVehicle_Sign_Port_01_left0";
		icon="iconObject_2x1";
		model="\a3\signs_f\signs_ad\signsad_r_harbourleft_f";
	};
	class Sign_Port_01_right: RoadSign_Livonia_accommodation
	{
		_generalMacro="Sign_Port_01_right";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Sign_Port_01_right.jpg";
		displayName="$STR_Globe_CfgVehicle_Sign_Port_01_right0";
		icon="iconObject_2x1";
		model="\a3\signs_f\signs_ad\signsad_r_harbourleft_f";
	};
	class Sign_TouristDirect_01: RoadSign_Livonia_accommodation
	{
		_generalMacro="Sign_TouristDirect_01";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Sign_TouristDirect_01.jpg";
		displayName="$STR_Globe_CfgVehicle_Sign_TouristDirect_010";
		icon="iconObject_1x3";
		model="\a3\signs_f\signs_ad\signsad_touristdirect_f";
	};
};
