class CfgPatches
{
	class Structures_Globe_Infrastructure_Runway
	{
		addonRootClass="A3_Structures_F_Globe";
		requiredAddons[]=
		{
			"A3_Structures_F_Globe_Infrastructure"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Land_NavigLight_3_short_F",
			"Land_NavigLight_3_short_yellow",
			"Land_NavigLight_3_short_white",
			"Land_NavigLight_white",
			"Land_NavigLight_red",
			"Land_NavigLight_3_yellow",
			"Land_NavigLight_3_white",
			"Land_NavigLight_3_white",
			"Land_runway_edgelight_yellow_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class House;
	class Land_VASICore;
	class Land_NavigLight: House
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_NavigLight.jpg";
		displayName="$STR_Globe_CfgVehicles_Land_NavigLight_yellow0";
		scope=2;
		scopeCurator=2;
		class MarkerLights
		{
			class Light_1;
		};
	};
	class Land_NavigLight_white: Land_NavigLight
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_NavigLight.jpg";
		displayName="$STR_Globe_CfgVehicles_Land_NavigLight_white0";
		class MarkerLights: MarkerLights
		{
			class Light_1: Light_1
			{
				color[]={1,0.94999999,0.85000002};
			};
		};
	};
	class Land_NavigLight_red: Land_NavigLight
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_NavigLight.jpg";
		displayName="$STR_Globe_CfgVehicles_Land_NavigLight_red0";
		class MarkerLights: MarkerLights
		{
			class Light_1: Light_1
			{
				color[]={0.89999998,0,0};
			};
		};
	};
	class Land_NavigLight_3_F: Land_NavigLight
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_NavigLight_3_F.jpg";
		displayName="$STR_Globe_CfgVehicles_Land_NavigLight_3_F0";
		class MarkerLights: MarkerLights
		{
			class Light_1;
			class Light_2;
			class Light_3;
		};
	};
	class Land_NavigLight_3_yellow: Land_NavigLight_3_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_NavigLight_3_F.jpg";
		displayName="$STR_Globe_CfgVehicles_Land_NavigLight_3_yellow0";
		class MarkerLights: MarkerLights
		{
			class Light_1: Light_1
			{
				color[]={0.89999998,0.0099999998,0.0099999998};
			};
		};
	};
	class Land_NavigLight_3_white: Land_NavigLight_3_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_NavigLight_3_F.jpg";
		displayName="$STR_Globe_CfgVehicles_Land_NavigLight_3_white0";
		class MarkerLights: MarkerLights
		{
			class Light_1: Light_1
			{
				color[]={1,0.94999999,0.85000002};
			};
		};
	};
	class Land_Flush_Light_green_F: Land_NavigLight
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Flush_Light_green_F.jpg";
		displayName="$STR_Globe_CfgVehicles_Land_Flush_Light_green_F0";
	};
	class Land_Flush_Light_red_F: Land_Flush_Light_green_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Flush_Light_red_F.jpg";
		displayName="$STR_Globe_CfgVehicles_Land_Flush_Light_red_F0";
	};
	class Land_Flush_Light_yellow_F: Land_Flush_Light_green_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Flush_Light_yellow_F.jpg";
		displayName="$STR_Globe_CfgVehicles_Land_Flush_Light_yellow_F0";
	};
	class Land_Runway_edgeLight: Land_NavigLight
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Runway_edgeLight.jpg";
		displayName="$STR_Globe_CfgVehicles_Land_Runway_edgeLightF0";
		class MarkerLights: MarkerLights
		{
			class Light_1: Light_1
			{
			};
		};
	};
	class Land_runway_edgelight_blue_F: Land_Runway_edgeLight
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_runway_edgelight_blue_F.jpg";
		displayName="$STR_Globe_CfgVehicles_Land_runway_edgelight_blue_F0";
	};
	class Land_runway_edgelight_yellow_F: Land_Runway_edgeLight
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_runway_edgelight_yellow_F.jpg";
		displayName="$STR_Globe_CfgVehicles_Land_runway_edgelight_yellow_F0";
		class MarkerLights: MarkerLights
		{
			class Light_1: Light_1
			{
				color[]={0.85000002,0.85000002,0.050000001};
			};
		};
	};
	class Land_Runway_PAPI: Land_VASICore
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Runway_PAPI.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_Runway_PAPI_10";
	};
	class Land_Runway_PAPI_2: Land_Runway_PAPI
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Runway_PAPI.jpg";
		displayName="$STR_Globe_CfgVehicles_Land_Runway_PAPI_20";
	};
	class Land_Runway_PAPI_3: Land_Runway_PAPI
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Runway_PAPI.jpg";
		displayName="$STR_Globe_CfgVehicles_Land_Runway_PAPI_30";
	};
	class Land_Runway_PAPI_4: Land_Runway_PAPI
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Runway_PAPI.jpg";
		displayName="$STR_Globe_CfgVehicles_Land_Runway_PAPI_40";
	};
	class Land_NavigLight_3_short_F: Land_NavigLight_3_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_NavigLight_3_short_F.jpg";
		displayName="$STR_Globe_CfgVehicles_Land_NavigLight_3_short_F0";
		class MarkerLights: MarkerLights
		{
			class Light_1;
			class Light_2;
			class Light_3;
		};
	};
	class Land_NavigLight_3_short_yellow: Land_NavigLight_3_short_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_NavigLight_3_short_F.jpg";
		displayName="$STR_Globe_CfgVehicles_Land_NavigLight_3_short_yellow0";
		class MarkerLights: MarkerLights
		{
			class Light_1: Light_1
			{
				color[]={0.89999998,0.0099999998,0.0099999998};
			};
		};
	};
	class Land_NavigLight_3_short_white: Land_NavigLight_3_short_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_NavigLight_3_short_F.jpg";
		displayName="$STR_Globe_CfgVehicles_Land_NavigLight_3_short_white0";
		class MarkerLights: MarkerLights
		{
			class Light_1: Light_1
			{
				color[]={1,0.94999999,0.85000002};
			};
		};
	};
};
