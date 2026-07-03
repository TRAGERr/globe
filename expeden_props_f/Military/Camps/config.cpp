class CfgPatches
{
	class A3_Props_F_Globe_Military_Camps
	{
		addonRootClass="A3_Props_F_Globe";
		requiredAddons[]=
		{
			"A3_Props_F_Globe_Military"
		};
		requiredVersion=0.1;
		units[]=
		{
			"SatelliteAntenna_01_Small_G",
			"SatelliteAntenna_01_Small_Mounted_G",
			"SatelliteAntenna_01_Mounted_G",
			"SatelliteAntenna_01_noSupport_G",
			"SatelliteAntenna_01_noSupport_small_G",
			"Land_TripodScreen_01_large_VIDEO_F",
			"TripodScreen_01_large_VIDEO_placeholder",
			"Land_TripodScreen_01_large_NATO_F",
			"Land_TripodScreen_01_large_sand_NATO_F",
			"Land_TripodScreen_01_large_black_NATO_F",
			"Land_TripodScreen_01_large_FD14_F",
			"Land_TripodScreen_01_large_sand_FD14_F",
			"Land_TripodScreen_01_large_black_FD14_F",
			"Land_TripodScreen_01_dual_v1_FD14_F",
			"Land_TripodScreen_01_dual_v1_black_FD14_F",
			"Land_TripodScreen_01_dual_v1_sand_FD14_F",
			"Land_Tablet_02_FD14_F",
			"Land_Tablet_02_black_FD14_F",
			"Land_Tablet_02_sand_FD14_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Land_TentSolar_01_base_F;
	class Items_base_F;
	class NonStrategic;
	class Land_SatelliteAntenna_01_F;
	class Land_PortableCabinet_01_base_F;
	class Land_PortableDesk_01_base_F;
	class Land_PortableCabinet_01_animated_base_F;
	class Land_Laptop_unfolded_F;
	class Land_TripodScreen_01_dual_v1_F;
	class Land_TripodScreen_01_large_F;
	class Land_Tablet_02_F;
	class Land_TripodScreen_01_large_VIDEO_F: Land_TripodScreen_01_large_F
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=1.043;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Land_TripodScreen_01_large_VIDEO_F.jpg";
		_generalMacro="Land_TripodScreen_01_large_VIDEO_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_TripodScreen_01_large_VIDEO_F0";
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"a3\props_f_exp\military\camps\data\tripodscreen_01_co.paa"
		};
		reversed=1;
		class EventHandlers
		{
			class Globe_TripodScreenVideo
			{
				postInit="_this call expEden_fnc_playVideoLoopEXP";
			};
		};
		class Attributes
		{
			class SwitchTextureHull
			{
				property="SwitchTextureHull";
				displayName="$STR_Globe_hull0";
				control="Combo";
				expression="_this setObjectTextureGlobal [10, _value]";
				defaultValue="'a3\props_f_exp\military\camps\data\tripodscreen_01_co.paa'";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="$STR_A3_TEXTURESOURCES_OLIVE0";
						value="a3\props_f_exp\military\camps\data\tripodscreen_01_co.paa";
						picture="a3\props_f_exp\military\camps\data\tripodscreen_01_co.paa";
					};
					class 2
					{
						name="$STR_a3_texturesources_sand0";
						value="a3\Props_F_Enoch\Military\Camps\data\TripodScreen_01_sand_CO.paa";
						picture="a3\Props_F_Enoch\Military\Camps\data\TripodScreen_01_sand_CO.paa";
					};
					class 3
					{
						name="$STR_a3_texturesources_black0";
						value="a3\Props_F_Enoch\Military\Camps\data\TripodScreen_01_black_CO.paa";
						picture="a3\Props_F_Enoch\Military\Camps\data\TripodScreen_01_black_CO.paa";
					};
				};
			};
		};
	};
	class TripodScreen_01_large_VIDEO_placeholder: Land_TripodScreen_01_large_VIDEO_F
	{
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\TripodScreen_01_large_VIDEO_placeholder.jpg";
		_generalMacro="TripodScreen_01_large_VIDEO_placeholder";
		displayName="$STR_Globe_CfgVehicles_TripodScreen_01_large_VIDEO_placeholder0";
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"\a3\props_f_exp\military\camps\data\tripodscreen_01_co.paa"
		};
		class EventHandlers
		{
			class Globe_TripodScreenVideo
			{
				postInit="_this call expEden_fnc_playVideoLoopEXP_placeholder";
			};
		};
	};
	class Land_TripodScreen_01_large_NATO_F: Land_TripodScreen_01_large_F
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=1.043;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Land_TripodScreen_01_large_NATO_F.jpg";
		_generalMacro="Land_TripodScreen_01_large_NATO_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_Globe_CfgVehicles_Land_TripodScreen_01_large_NATO_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_exp\data\Img\lobby\ui_campaign_lobby_background_co.paa",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"\a3\props_f_exp\military\camps\data\tripodscreen_01_co.paa"
		};
		reversed=1;
		class Attributes
		{
			class SwitchTexture
			{
				property="SwitchTexture";
				displayName="$STR_A3_expEden_Leaflet_05_announcements_Attributes_SwitchTexture_displayName_F0";
				control="Combo";
				expression="_this setObjectTextureGlobal [0, _value]";
				defaultValue="'\A3\missions_f_exp\data\Img\lobby\ui_campaign_lobby_background_co.paa'";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="$STR_A3_Globe_CfgVehicles_Land_TripodScreen_01_large_NATO_F_Attributes_values0";
						value="\A3\missions_f_exp\data\Img\lobby\ui_campaign_lobby_background_co.paa";
						picture="\A3\missions_f_exp\data\Img\lobby\ui_campaign_lobby_background_co.paa";
					};
					class 2
					{
						name="$STR_A3_Globe_CfgVehicles_Land_TripodScreen_01_large_NATO_F_Attributes_values1";
						value="\A3\missions_f_exp\data\Img\lobby\ui_campaign_lobby_background2_co.paa";
						picture="\A3\missions_f_exp\data\Img\lobby\ui_campaign_lobby_background2_co.paa";
					};
					class 3
					{
						name="Top Secret";
						value="\A3\missions_f_exp\data\Img\lobby\ui_campaign_lobby_restricted_ca.paa";
						picture="\A3\missions_f_exp\data\Img\lobby\ui_campaign_lobby_restricted_ca.paa";
					};
					class 4
					{
						name="$STR_A3_Globe_CfgVehicles_Land_TripodScreen_01_large_NATO_F_Attributes_values2";
						value="\A3\missions_f_exp\data\Img\exp_m01_monitor_ca.paa";
						picture="\A3\missions_f_exp\data\Img\exp_m01_monitor_ca.paa";
					};
				};
			};
			class SwitchTextureHull
			{
				property="SwitchTextureHull";
				displayName="$STR_Globe_hull0";
				control="Combo";
				expression="_this setObjectTextureGlobal [10, _value]";
				defaultValue="'a3\props_f_exp\military\camps\data\tripodscreen_01_co.paa'";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="$STR_A3_TEXTURESOURCES_OLIVE0";
						value="a3\props_f_exp\military\camps\data\tripodscreen_01_co.paa";
						picture="a3\props_f_exp\military\camps\data\tripodscreen_01_co.paa";
					};
					class 2
					{
						name="$STR_a3_texturesources_sand0";
						value="a3\Props_F_Enoch\Military\Camps\data\TripodScreen_01_sand_CO.paa";
						picture="a3\Props_F_Enoch\Military\Camps\data\TripodScreen_01_sand_CO.paa";
					};
					class 3
					{
						name="$STR_a3_texturesources_black0";
						value="a3\Props_F_Enoch\Military\Camps\data\TripodScreen_01_black_CO.paa";
						picture="a3\Props_F_Enoch\Military\Camps\data\TripodScreen_01_black_CO.paa";
					};
				};
			};
		};
	};
	class Land_TripodScreen_01_large_sand_NATO_F: Land_TripodScreen_01_large_NATO_F
	{
		editorPreview="";
		_generalMacro="Land_TripodScreen_01_large_sand_NATO_F";
		scope=1;
		scopeCurator=0;
		displayName="$STR_A3_Globe_CfgVehicles_Land_TripodScreen_01_large_sand_NATO_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_exp\data\Img\lobby\ui_campaign_lobby_background_co.paa",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"\a3\Props_F_Enoch\Military\Camps\data\TripodScreen_01_sand_CO.paa"
		};
	};
	class Land_TripodScreen_01_large_black_NATO_F: Land_TripodScreen_01_large_NATO_F
	{
		editorPreview="";
		_generalMacro="Land_TripodScreen_01_large_black_NATO_F";
		scope=1;
		scopeCurator=0;
		displayName="$STR_A3_Globe_CfgVehicles_Land_TripodScreen_01_large_black_NATO_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_exp\data\Img\lobby\ui_campaign_lobby_background_co.paa",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"\a3\Props_F_Enoch\Military\Camps\data\TripodScreen_01_black_CO.paa"
		};
	};
	class Land_TripodScreen_01_large_FD14_F: Land_TripodScreen_01_large_F
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=1.043;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Land_TripodScreen_01_large_FD14_F.jpg";
		_generalMacro="Land_TripodScreen_01_large_FD14_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_Globe_CfgVehicles_Land_TripodScreen_01_large_FD14_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\Missions_F_Beta\Data\Img\Monitors\laptop_fd14_1_co.paa",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"a3\props_f_exp\military\camps\data\tripodscreen_01_co.paa"
		};
		reversed=1;
		class Attributes
		{
			class SwitchTexture
			{
				property="SwitchTexture";
				displayName="$STR_A3_expEden_Leaflet_05_announcements_Attributes_SwitchTexture_displayName_F0";
				control="Combo";
				expression="_this setObjectTextureGlobal [0, _value]";
				defaultValue="'\A3\Missions_F_Beta\Data\Img\Monitors\laptop_fd14_1_co.paa'";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="$STR_A3_Globe_CfgVehicles_Land_TripodScreen_01_large_FD14_F_Attributes_SwitchTexture_values_name0";
						value="\A3\Missions_F_Beta\Data\Img\Monitors\laptop_fd14_1_co.paa";
						picture="\A3\Missions_F_Beta\Data\Img\Monitors\laptop_fd14_1_co.paa";
					};
					class 2
					{
						name="$STR_A3_Globe_CfgVehicles_Land_TripodScreen_01_large_FD14_F_Attributes_SwitchTexture_values_name1";
						value="\A3\Missions_F_Beta\Data\Img\Monitors\monitor_fd14_1_co.paa";
						picture="\A3\Missions_F_Beta\Data\Img\Monitors\monitor_fd14_1_co.paa";
					};
					class 3
					{
						name="$STR_A3_Globe_CfgVehicles_Land_TripodScreen_01_large_FD14_F_Attributes_SwitchTexture_values_name2";
						value="\A3\Missions_F_Beta\Data\Img\Monitors\monitor_fd14_2_co.paa";
						picture="\A3\Missions_F_Beta\Data\Img\Monitors\monitor_fd14_2_co.paa";
					};
					class 4
					{
						name="$STR_A3_Globe_CfgVehicles_Land_TripodScreen_01_large_FD14_F_Attributes_SwitchTexture_values_name3";
						value="\A3\Missions_F_Beta\Data\Img\Monitors\monitor_fd14_3_co.paa";
						picture="\A3\Missions_F_Beta\Data\Img\Monitors\monitor_fd14_3_co.paa";
					};
				};
			};
			class SwitchTextureHull
			{
				property="SwitchTextureHull";
				displayName="$STR_Globe_hull0";
				control="Combo";
				expression="_this setObjectTextureGlobal [10, _value]";
				defaultValue="'a3\props_f_exp\military\camps\data\tripodscreen_01_co.paa'";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="$STR_A3_TEXTURESOURCES_OLIVE0";
						value="a3\props_f_exp\military\camps\data\tripodscreen_01_co.paa";
						picture="a3\props_f_exp\military\camps\data\tripodscreen_01_co.paa";
					};
					class 2
					{
						name="$STR_a3_texturesources_sand0";
						value="a3\Props_F_Enoch\Military\Camps\data\TripodScreen_01_sand_CO.paa";
						picture="a3\Props_F_Enoch\Military\Camps\data\TripodScreen_01_sand_CO.paa";
					};
					class 3
					{
						name="$STR_a3_texturesources_black0";
						value="a3\Props_F_Enoch\Military\Camps\data\TripodScreen_01_black_CO.paa";
						picture="a3\Props_F_Enoch\Military\Camps\data\TripodScreen_01_black_CO.paa";
					};
				};
			};
		};
	};
	class Land_TripodScreen_01_large_sand_FD14_F: Land_TripodScreen_01_large_FD14_F
	{
		editorPreview="";
		_generalMacro="Land_TripodScreen_01_large_sand_FD14_F";
		scope=1;
		scopeCurator=0;
		displayName="$STR_A3_Globe_CfgVehicles_Land_TripodScreen_01_large_sand_FD14_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\Missions_F_Beta\Data\Img\Monitors\laptop_fd14_1_co.paa",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"\a3\Props_F_Enoch\Military\Camps\data\TripodScreen_01_sand_CO.paa"
		};
	};
	class Land_TripodScreen_01_large_black_FD14_F: Land_TripodScreen_01_large_FD14_F
	{
		editorPreview="";
		_generalMacro="Land_TripodScreen_01_large_black_FD14_F";
		scope=1;
		scopeCurator=0;
		displayName="$STR_A3_Globe_CfgVehicles_Land_TripodScreen_01_large_black_FD14_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\Missions_F_Beta\Data\Img\Monitors\laptop_fd14_1_co.paa",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"\a3\Props_F_Enoch\Military\Camps\data\TripodScreen_01_black_CO.paa"
		};
	};
	class Land_TripodScreen_01_dual_v1_FD14_F: Land_TripodScreen_01_dual_v1_F
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.81;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_f_expEden\Data\CfgVehicles\Land_TripodScreen_01_dual_v1_FD14_F.jpg";
		_generalMacro="Land_TripodScreen_01_dual_v1_FD14_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_Globe_CfgVehicles_Land_TripodScreen_01_dual_v1_FD14_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\Missions_F_Beta\data\img\monitors\monitor_fd14_1_co.paa",
			"\A3\Missions_F_Beta\data\img\monitors\monitor_fd14_2_co.paa",
			"a3\props_f_exp\military\camps\data\tripodscreen_01_co.paa"
		};
		reversed=1;
		class Attributes
		{
			class SwitchTexture0
			{
				property="SwitchTexture0";
				displayName="$STR_A3_expEden_Leaflet_05_announcements_Attributes_SwitchTexture_displayName_F0";
				control="Combo";
				expression="_this setObjectTextureGlobal [0, _value]";
				defaultValue="'\A3\Missions_F_Beta\data\img\monitors\monitor_fd14_1_co.paa'";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="$STR_A3_Globe_CfgVehicles_Land_TripodScreen_01_large_FD14_F_Attributes_SwitchTexture_values_name0";
						value="\A3\Missions_F_Beta\Data\Img\Monitors\laptop_fd14_1_co.paa";
						picture="\A3\Missions_F_Beta\Data\Img\Monitors\laptop_fd14_1_co.paa";
					};
					class 2
					{
						name="$STR_A3_Globe_CfgVehicles_Land_TripodScreen_01_large_FD14_F_Attributes_SwitchTexture_values_name1";
						value="\A3\Missions_F_Beta\Data\Img\Monitors\monitor_fd14_1_co.paa";
						picture="\A3\Missions_F_Beta\Data\Img\Monitors\monitor_fd14_1_co.paa";
					};
					class 3
					{
						name="$STR_A3_Globe_CfgVehicles_Land_TripodScreen_01_large_FD14_F_Attributes_SwitchTexture_values_name2";
						value="\A3\Missions_F_Beta\Data\Img\Monitors\monitor_fd14_2_co.paa";
						picture="\A3\Missions_F_Beta\Data\Img\Monitors\monitor_fd14_2_co.paa";
					};
					class 4
					{
						name="$STR_A3_Globe_CfgVehicles_Land_TripodScreen_01_large_FD14_F_Attributes_SwitchTexture_values_name3";
						value="\A3\Missions_F_Beta\Data\Img\Monitors\monitor_fd14_3_co.paa";
						picture="\A3\Missions_F_Beta\Data\Img\Monitors\monitor_fd14_3_co.paa";
					};
				};
			};
			class SwitchTexture1
			{
				property="SwitchTexture1";
				displayName="$STR_A3_expEden_Leaflet_05_announcements_Attributes_SwitchTexture_displayName_F0";
				control="Combo";
				expression="_this setObjectTextureGlobal [1, _value]";
				defaultValue="'\A3\Missions_F_Beta\data\img\monitors\monitor_fd14_2_co.paa'";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="$STR_A3_Globe_CfgVehicles_Land_TripodScreen_01_large_FD14_F_Attributes_SwitchTexture_values_name0";
						value="\A3\Missions_F_Beta\Data\Img\Monitors\laptop_fd14_1_co.paa";
						picture="\A3\Missions_F_Beta\Data\Img\Monitors\laptop_fd14_1_co.paa";
					};
					class 2
					{
						name="$STR_A3_Globe_CfgVehicles_Land_TripodScreen_01_large_FD14_F_Attributes_SwitchTexture_values_name1";
						value="\A3\Missions_F_Beta\Data\Img\Monitors\monitor_fd14_1_co.paa";
						picture="\A3\Missions_F_Beta\Data\Img\Monitors\monitor_fd14_1_co.paa";
						defaultValue=2;
					};
					class 3
					{
						name="$STR_A3_Globe_CfgVehicles_Land_TripodScreen_01_large_FD14_F_Attributes_SwitchTexture_values_name2";
						value="\A3\Missions_F_Beta\Data\Img\Monitors\monitor_fd14_2_co.paa";
						picture="\A3\Missions_F_Beta\Data\Img\Monitors\monitor_fd14_2_co.paa";
					};
					class 4
					{
						name="$STR_A3_Globe_CfgVehicles_Land_TripodScreen_01_large_FD14_F_Attributes_SwitchTexture_values_name3";
						value="\A3\Missions_F_Beta\Data\Img\Monitors\monitor_fd14_3_co.paa";
						picture="\A3\Missions_F_Beta\Data\Img\Monitors\monitor_fd14_3_co.paa";
					};
				};
			};
			class SwitchTextureHull
			{
				property="SwitchTextureHull";
				displayName="$STR_Globe_hull0";
				control="Combo";
				expression="_this setObjectTextureGlobal [2, _value]";
				defaultValue="'a3\props_f_exp\military\camps\data\tripodscreen_01_co.paa'";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="$STR_A3_TEXTURESOURCES_OLIVE0";
						value="a3\props_f_exp\military\camps\data\tripodscreen_01_co.paa";
						picture="a3\props_f_exp\military\camps\data\tripodscreen_01_co.paa";
					};
					class 2
					{
						name="$STR_a3_texturesources_sand0";
						value="a3\Props_F_Enoch\Military\Camps\data\TripodScreen_01_sand_CO.paa";
						picture="a3\Props_F_Enoch\Military\Camps\data\TripodScreen_01_sand_CO.paa";
					};
					class 3
					{
						name="$STR_a3_texturesources_black0";
						value="a3\Props_F_Enoch\Military\Camps\data\TripodScreen_01_black_CO.paa";
						picture="a3\Props_F_Enoch\Military\Camps\data\TripodScreen_01_black_CO.paa";
					};
				};
			};
		};
	};
	class Land_TripodScreen_01_dual_v1_black_FD14_F: Land_TripodScreen_01_dual_v1_FD14_F
	{
		editorPreview="\A3\EditorPreviews_f_expEden\Data\CfgVehicles\Land_TripodScreen_01_dual_v1_black_FD14_F.jpg";
		_generalMacro="Land_TripodScreen_01_dual_v1_black_FD14_F";
		scope=1;
		scopeCurator=0;
		displayName="$STR_A3_Globe_CfgVehicles_Land_TripodScreen_01_dual_v1_black_FD14_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\Missions_F_Beta\data\img\monitors\monitor_fd14_1_co.paa",
			"\A3\Missions_F_Beta\data\img\monitors\monitor_fd14_2_co.paa",
			"a3\Props_F_Enoch\Military\Camps\data\TripodScreen_01_black_CO.paa"
		};
	};
	class Land_TripodScreen_01_dual_v1_sand_FD14_F: Land_TripodScreen_01_dual_v1_FD14_F
	{
		editorPreview="\A3\EditorPreviews_f_expEden\Data\CfgVehicles\Land_TripodScreen_01_dual_v1_sand_FD14_F.jpg";
		_generalMacro="Land_TripodScreen_01_dual_v1_sand_FD14_F";
		scope=1;
		scopeCurator=0;
		displayName="$STR_A3_Globe_CfgVehicles_Land_TripodScreen_01_dual_v1_sand_FD14_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\Missions_F_Beta\data\img\monitors\monitor_fd14_1_co.paa",
			"\A3\Missions_F_Beta\data\img\monitors\monitor_fd14_2_co.paa",
			"a3\Props_F_Enoch\Military\Camps\data\TripodScreen_01_sand_CO.paa"
		};
	};
	class Land_Tablet_02_FD14_F: Land_Tablet_02_F
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.034000002;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Tablet_02_FD14_F.jpg";
		_generalMacro="Land_Tablet_02_FD14_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_Globe_CfgVehicles_Land_Tablet_02_FD14_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\Missions_F_Beta\data\img\monitors\tablet_fd14_1_co.paa",
			"a3\props_f_exp_a\military\equipment\data\ruggedtablet_co.paa"
		};
		class Attributes
		{
			class SwitchTexture
			{
				property="SwitchTexture";
				displayName="$STR_A3_expEden_Leaflet_05_announcements_Attributes_SwitchTexture_displayName_F0";
				control="Combo";
				expression="_this setObjectTextureGlobal [0, _value]";
				defaultValue="'\A3\Missions_F_Beta\data\img\monitors\tablet_fd14_1_co.paa'";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="$STR_A3_CFGVEHICLES_LAND_NOTEPAD_F0";
						value="\A3\Missions_F_Beta\data\img\monitors\tablet_fd14_1_co.paa";
						picture="\A3\Missions_F_Beta\data\img\monitors\tablet_fd14_1_co.paa";
					};
					class 2
					{
						name="$STR_A3_SHOWCASE_TANKS_MISSION_NAME";
						value="\A3\Missions_F_Beta\data\img\monitors\tablet_fd14_2_co.paa";
						picture="\A3\Missions_F_Beta\data\img\monitors\tablet_fd14_2_co.paa";
					};
					class 3
					{
						name="$STR_A3_Globe_CfgVehicles_Land_TripodScreen_01_large_FD14_F_Attributes_SwitchTexture_values_name0";
						value="\A3\Missions_F_Beta\Data\Img\Monitors\laptop_fd14_1_co.paa";
						picture="\A3\Missions_F_Beta\Data\Img\Monitors\laptop_fd14_1_co.paa";
					};
					class 4
					{
						name="$STR_A3_Globe_CfgVehicles_Land_TripodScreen_01_large_FD14_F_Attributes_SwitchTexture_values_name1";
						value="\A3\Missions_F_Beta\Data\Img\Monitors\monitor_fd14_1_co.paa";
						picture="\A3\Missions_F_Beta\Data\Img\Monitors\monitor_fd14_1_co.paa";
					};
					class 5
					{
						name="$STR_A3_Globe_CfgVehicles_Land_TripodScreen_01_large_FD14_F_Attributes_SwitchTexture_values_name2";
						value="\A3\Missions_F_Beta\Data\Img\Monitors\monitor_fd14_2_co.paa";
						picture="\A3\Missions_F_Beta\Data\Img\Monitors\monitor_fd14_2_co.paa";
					};
					class 6
					{
						name="$STR_A3_Globe_CfgVehicles_Land_TripodScreen_01_large_FD14_F_Attributes_SwitchTexture_values_name3";
						value="\A3\Missions_F_Beta\Data\Img\Monitors\monitor_fd14_3_co.paa";
						picture="\A3\Missions_F_Beta\Data\Img\Monitors\monitor_fd14_3_co.paa";
					};
				};
			};
			class SwitchTextureHull
			{
				property="SwitchTextureHull";
				displayName="$STR_Globe_hull0";
				control="Combo";
				expression="_this setObjectTextureGlobal [0, _value]";
				defaultValue="(getObjectTextures _this) param [0,'',['']]";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="$STR_A3_TEXTURESOURCES_OLIVE0";
						value="a3\props_f_exp_a\military\equipment\data\ruggedtablet_co.paa";
						picture="a3\props_f_exp_a\military\equipment\data\ruggedtablet_co.paa";
					};
					class 2
					{
						name="$STR_a3_texturesources_black0";
						value="a3\Props_F_Enoch\Military\Camps\data\RuggedTablet_black_CO.paa";
						picture="a3\Props_F_Enoch\Military\Camps\data\RuggedTablet_black_CO.paa";
					};
					class 3
					{
						name="$STR_a3_texturesources_sand0";
						value="a3\Props_F_Enoch\Military\Camps\data\RuggedTablet_sand_CO.paa";
						picture="a3\Props_F_Enoch\Military\Camps\data\RuggedTablet_sand_CO.paa";
					};
				};
			};
		};
	};
	class Land_Tablet_02_black_FD14_F: Land_Tablet_02_FD14_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Tablet_02_black_FD14_F.jpg";
		_generalMacro="Land_Tablet_02_black_FD14_F";
		scope=1;
		scopeCurator=0;
		displayName="$STR_A3_Globe_CfgVehicles_Land_Tablet_02_black_FD14_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\Missions_F_Beta\data\img\monitors\tablet_fd14_1_co.paa",
			"a3\Props_F_Enoch\Military\Camps\data\RuggedTablet_black_CO.paa"
		};
	};
	class Land_Tablet_02_sand_FD14_F: Land_Tablet_02_FD14_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Tablet_02_sand_FD14_F.jpg";
		_generalMacro="Land_Tablet_02_sand_FD14_F";
		scope=1;
		scopeCurator=0;
		displayName="$STR_A3_Globe_CfgVehicles_Land_Tablet_02_sand_FD14_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\Missions_F_Beta\data\img\monitors\tablet_fd14_1_co.paa",
			"a3\Props_F_Enoch\Military\Camps\data\RuggedTablet_sand_CO.paa"
		};
	};
	class Land_PortableCabinet_01_bookcase_base_F: Land_PortableCabinet_01_base_F
	{
		class Attributes
		{
			class RandomBooks
			{
				property="RandomBooks";
				displayName="$STR_Globe_Land_PortableCabinet_01_bookcase_base_F_Attributes_RandomBooks";
				tooltip="$STR_Globe_Land_PortableCabinet_01_bookcase_base_F_Attributes_RandomBooks_Tooltip";
				control="CheckboxStateReversed";
				defaultValue="false";
				expression="if (_value) then {_this call compile preprocessFileLineNumbers '\A3\Props_F_Globe\Military\Camps\scripts\randomize_books.sqf'}";
			};
		};
	};
	class Land_PortableCabinet_01_7drawers_base_F: Land_PortableCabinet_01_animated_base_F
	{
		class Attributes
		{
			class RandomDrawers
			{
				property="RandomDrawers";
				displayName="$STR_Globe_Land_PortableCabinet_01_bookcase_base_F_Attributes_RandomDrawers";
				tooltip="$STR_Globe_CfgVehicles_Land_PortableDesk_01_base_F_Attributes_RandomizeDesk1";
				control="CheckboxStateReversed";
				defaultValue="false";
				expression="if (_value) then {_this call compile preprocessFileLineNumbers '\A3\Props_F_Globe\Military\Camps\scripts\randomize_drawers.sqf'}";
			};
		};
	};
	class Land_PortableCabinet_01_4drawers_base_F: Land_PortableCabinet_01_animated_base_F
	{
		class Attributes
		{
			class RandomDrawers
			{
				property="RandomDrawers";
				displayName="$STR_Globe_Land_PortableCabinet_01_bookcase_base_F_Attributes_RandomDrawers";
				tooltip="$STR_Globe_CfgVehicles_Land_PortableDesk_01_base_F_Attributes_RandomizeDesk1";
				control="Checkbox";
				defaultValue="false";
				expression="if (_value) then {_this call compile preprocessFileLineNumbers '\A3\Props_F_Globe\Military\Camps\scripts\randomize_drawers.sqf'}";
			};
		};
	};
	class Land_PortableCabinet_01_medical_base_F: Land_PortableCabinet_01_animated_base_F
	{
		class Attributes
		{
			class RandomDrawers
			{
				property="RandomDrawers";
				displayName="$STR_Globe_Land_PortableCabinet_01_bookcase_base_F_Attributes_RandomDrawers";
				tooltip="$STR_Globe_CfgVehicles_Land_PortableDesk_01_base_F_Attributes_RandomizeDesk1";
				control="CheckboxStateReversed";
				defaultValue="false";
				expression="if (_value) then {_this call compile preprocessFileLineNumbers '\A3\Props_F_Globe\Military\Camps\scripts\randomize_drawers.sqf'}";
			};
		};
	};
	class Land_PortableDesk_01_animated_base_F: Land_PortableDesk_01_base_F
	{
		class Attributes
		{
			class RandomizeDesk
			{
				property="RandomizeDesk";
				displayName="$STR_Globe_Land_PortableCabinet_01_bookcase_base_F_Attributes_RandomDrawers";
				tooltip="$STR_Globe_CfgVehicles_Land_PortableDesk_01_base_F_Attributes_RandomizeDesk1";
				control="CheckboxStateReversed";
				defaultValue="false";
				expression="if (_value) then {_this call compile preprocessFileLineNumbers '\A3\Props_F_Globe\Military\Camps\scripts\randomize_desks.sqf'}";
			};
		};
	};
	class Land_SatelliteAntenna_01_small_base_F: Land_SatelliteAntenna_01_F
	{
		class Attributes
		{
			class SatelliteAntennaType
			{
				displayName="$STR_A3_CFGVEHICLES_MODULECURATORADDICON_F_ARGUMENTS_TEXTURE";
				property="SatelliteAntennaType";
				control="Combo";
				expression="_this setObjectTextureGlobal [0,_value];";
				defaultValue="(getObjectTextures _this) param [0,'',['']]";
				typeName="STRING";
				class Values
				{
					class BROWN
					{
						name="$STR_A3_TEXTURESOURCES_BROWN0";
						value="a3\props_f_exp\military\camps\data\satelliteantenna_co.paa";
						picture="a3\props_f_exp\military\camps\data\satelliteantenna_co.paa";
					};
					class OLIVE
					{
						name="$STR_A3_TEXTURESOURCES_OLIVE0";
						value="a3\props_f_enoch\military\camps\data\SatelliteAntenna_Olive_CO.paa";
						picture="a3\props_f_enoch\military\camps\data\SatelliteAntenna_Olive_CO.paa";
					};
					class BLACK
					{
						name="$STR_A3_TEXTURESOURCES_BLACK0";
						value="a3\props_f_enoch\military\camps\data\SatelliteAntenna_Black_CO.paa";
						picture="a3\props_f_enoch\military\camps\data\SatelliteAntenna_Black_CO.paa";
					};
					class SAND
					{
						name="$STR_A3_TEXTURESOURCES_SAND0";
						value="a3\props_f_enoch\military\camps\data\SatelliteAntenna_Sand_CO.paa";
						picture="a3\props_f_enoch\military\camps\data\SatelliteAntenna_Sand_CO.paa";
					};
				};
			};
			class Tripod_hide_source
			{
				property="Tripod_hide_source";
				displayName="$STR_Globe_CfgVehicles_SatelliteAntenna_01_Attributes_Tripod_hide_source_dn0";
				control="CheckboxNumber";
				defaultValue=0;
				expression="_this animateSource ['%s',_value,true]";
			};
			class Wall_Mount_hide_source
			{
				property="Wall_Mount_hide_source";
				displayName="$STR_Globe_CfgVehicles_SatelliteAntenna_01_Attributes_Wall_Mount_hide_source_dn0";
				control="CheckboxNumber";
				defaultValue=1;
				expression="_this animateSource ['%s',_value,true]";
			};
		};
	};
	class Land_SatelliteAntenna_01_mounted_base_F: NonStrategic
	{
		class Attributes
		{
			class SatelliteAntennaType
			{
				displayName="$STR_A3_CFGVEHICLES_MODULECURATORADDICON_F_ARGUMENTS_TEXTURE";
				property="SatelliteAntennaType";
				control="Combo";
				expression="_this setObjectTextureGlobal [0,_value];";
				defaultValue="(getObjectTextures _this) param [0,'',['']]";
				typeName="STRING";
				class Values
				{
					class BROWN
					{
						name="$STR_A3_TEXTURESOURCES_BROWN0";
						value="a3\props_f_exp\military\camps\data\satelliteantenna_co.paa";
						picture="a3\props_f_exp\military\camps\data\satelliteantenna_co.paa";
					};
					class OLIVE
					{
						name="$STR_A3_TEXTURESOURCES_OLIVE0";
						value="a3\props_f_enoch\military\camps\data\SatelliteAntenna_Olive_CO.paa";
						picture="a3\props_f_enoch\military\camps\data\SatelliteAntenna_Olive_CO.paa";
					};
					class BLACK
					{
						name="$STR_A3_TEXTURESOURCES_BLACK0";
						value="a3\props_f_enoch\military\camps\data\SatelliteAntenna_Black_CO.paa";
						picture="a3\props_f_enoch\military\camps\data\SatelliteAntenna_Black_CO.paa";
					};
					class SAND
					{
						name="$STR_A3_TEXTURESOURCES_SAND0";
						value="a3\props_f_enoch\military\camps\data\SatelliteAntenna_Sand_CO.paa";
						picture="a3\props_f_enoch\military\camps\data\SatelliteAntenna_Sand_CO.paa";
					};
				};
			};
			class Tripod_hide_source
			{
				property="Tripod_hide_source";
				displayName="$STR_Globe_CfgVehicles_SatelliteAntenna_01_Attributes_Tripod_hide_source_dn0";
				control="CheckboxNumber";
				defaultValue=1;
				expression="_this animateSource ['%s',_value,true]";
			};
			class Wall_Mount_hide_source
			{
				property="Wall_Mount_hide_source";
				displayName="$STR_Globe_CfgVehicles_SatelliteAntenna_01_Attributes_Wall_Mount_hide_source_dn0";
				control="CheckboxNumber";
				defaultValue=0;
				expression="_this animateSource ['%s',_value,true]";
			};
		};
	};
	class Land_SatelliteAntenna_01_small_mounted_base_F: Land_SatelliteAntenna_01_mounted_base_F
	{
	};
	class SatelliteAntenna_01_Small_G: Land_SatelliteAntenna_01_small_base_F
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"tripod_hide",
					0
				},
				
				{
					"wall_mount_hide",
					1
				}
			};
			hide[]={};
			verticalOffset=0.505;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\SatelliteAntenna_01_Small_G.jpg";
		_generalMacro="SatelliteAntenna_01_Small_G";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_SatelliteAntenna_01_Small_G0";
		hiddenSelectionsTextures[]=
		{
			"a3\props_f_exp\military\camps\data\satelliteantenna_co.paa"
		};
	};
	class SatelliteAntenna_01_Small_Mounted_G: Land_SatelliteAntenna_01_small_mounted_base_F
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=0;
			animate[]=
			{
				
				{
					"tripod_hide",
					1
				},
				
				{
					"wall_mount_hide",
					0
				}
			};
			hide[]={};
			verticalOffset=0.50400001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\SatelliteAntenna_01_Small_Mounted_G.jpg";
		_generalMacro="SatelliteAntenna_01_Small_Mounted_G";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_SatelliteAntenna_01_Small_Mounted_G0";
		hiddenSelectionsTextures[]=
		{
			"a3\props_f_exp\military\camps\data\satelliteantenna_co.paa"
		};
	};
	class SatelliteAntenna_01_Mounted_G: Land_SatelliteAntenna_01_mounted_base_F
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=0;
			animate[]=
			{
				
				{
					"tripod_hide",
					1
				},
				
				{
					"wall_mount_hide",
					0
				}
			};
			hide[]={};
			verticalOffset=0.91500002;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\SatelliteAntenna_01_Mounted_G.jpg";
		_generalMacro="SatelliteAntenna_01_Mounted_G";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_SatelliteAntenna_01_Mounted_G0";
		hiddenSelectionsTextures[]=
		{
			"a3\props_f_exp\military\camps\data\satelliteantenna_co.paa"
		};
	};
	class SatelliteAntenna_01_noSupport_base_G: Items_base_F
	{
		author="O&T Expansion Eden";
		mapSize=1.4400001;
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\SatelliteAntenna_01_noSupport_G.jpg";
		_generalMacro="SatelliteAntenna_01_noSupport_G";
		scope=0;
		scopeCurator=0;
		displayName="$STR_Globe_CfgVehicles_SatelliteAntenna_01_noSupport_G0";
		icon="iconObject_5x4";
		editorCategory="EdCat_Things";
		editorSubcategory="EdSubcat_Electronics";
		destrType="DestructNo";
		model="\A3\Props_F_Enoch\Military\Camps\SatelliteAntenna_01_F.p3d";
		hiddenSelections[]=
		{
			"Camo_1"
		};
		hiddenSelectionsTextures[]=
		{
			"a3\props_f_exp\military\camps\data\satelliteantenna_co.paa"
		};
		class AnimationSources
		{
			class Tripod_hide_source
			{
				source="user";
				initPhase=1;
				animPeriod=0;
			};
			class Wall_Mount_hide_source: Tripod_hide_source
			{
				initPhase=1;
			};
		};
		class Attributes
		{
			class SatelliteAntennaType
			{
				displayName="$STR_A3_CFGVEHICLES_MODULECURATORADDICON_F_ARGUMENTS_TEXTURE";
				property="SatelliteAntennaType";
				control="Combo";
				expression="_this setObjectTextureGlobal [0,_value];";
				defaultValue="(getObjectTextures _this) param [0,'',['']]";
				typeName="STRING";
				class Values
				{
					class BROWN
					{
						name="$STR_A3_TEXTURESOURCES_BROWN0";
						value="a3\props_f_exp\military\camps\data\satelliteantenna_co.paa";
						picture="a3\props_f_exp\military\camps\data\satelliteantenna_co.paa";
					};
					class OLIVE
					{
						name="$STR_A3_TEXTURESOURCES_OLIVE0";
						value="a3\props_f_enoch\military\camps\data\SatelliteAntenna_Olive_CO.paa";
						picture="a3\props_f_enoch\military\camps\data\SatelliteAntenna_Olive_CO.paa";
					};
					class BLACK
					{
						name="$STR_A3_TEXTURESOURCES_BLACK0";
						value="a3\props_f_enoch\military\camps\data\SatelliteAntenna_Black_CO.paa";
						picture="a3\props_f_enoch\military\camps\data\SatelliteAntenna_Black_CO.paa";
					};
					class SAND
					{
						name="$STR_A3_TEXTURESOURCES_SAND0";
						value="a3\props_f_enoch\military\camps\data\SatelliteAntenna_Sand_CO.paa";
						picture="a3\props_f_enoch\military\camps\data\SatelliteAntenna_Sand_CO.paa";
					};
				};
			};
			class Tripod_hide_source
			{
				property="Tripod_hide_source";
				displayName="$STR_Globe_CfgVehicles_SatelliteAntenna_01_Attributes_Tripod_hide_source_dn0";
				control="CheckboxNumber";
				defaultValue=1;
				expression="_this animateSource ['%s',_value,true]";
			};
			class Wall_Mount_hide_source
			{
				property="Wall_Mount_hide_source";
				displayName="$STR_Globe_CfgVehicles_SatelliteAntenna_01_Attributes_Wall_Mount_hide_source_dn0";
				control="CheckboxNumber";
				defaultValue=1;
				expression="_this animateSource ['%s',_value,true]";
			};
		};
	};
	class SatelliteAntenna_01_noSupport_G: SatelliteAntenna_01_noSupport_base_G
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"tripod_hide",
					1
				},
				
				{
					"wall_mount_hide",
					1
				}
			};
			hide[]={};
			verticalOffset=0.91900003;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\SatelliteAntenna_01_noSupport_G.jpg";
		_generalMacro="SatelliteAntenna_01_noSupport_G";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_SatelliteAntenna_01_noSupport_G0";
		hiddenSelectionsTextures[]=
		{
			"a3\props_f_exp\military\camps\data\satelliteantenna_co.paa"
		};
	};
	class SatelliteAntenna_01_noSupport_small_base_G: SatelliteAntenna_01_noSupport_base_G
	{
		author="O&T Expansion Eden";
		editorPreview="";
		_generalMacro="SatelliteAntenna_01_noSupport_smal_base_G";
		displayName="";
		model="\A3\Props_F_Enoch\Military\Camps\SatelliteAntenna_01_small_F.p3d";
	};
	class SatelliteAntenna_01_noSupport_small_G: SatelliteAntenna_01_noSupport_small_base_G
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"tripod_hide",
					1
				},
				
				{
					"wall_mount_hide",
					1
				}
			};
			hide[]={};
			verticalOffset=0.505;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\SatelliteAntenna_01_noSupport_small_G.jpg";
		_generalMacro="SatelliteAntenna_01_noSupport_small_G";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_SatelliteAntenna_01_noSupport_small_G0";
	};
	class Land_TentSolar_01_folded_base_F: Land_TentSolar_01_base_F
	{
		destrType="DestructNo";
		class DestructionEffects
		{
		};
	};
};
