class CfgPatches
{
	class A3_Props_F_Globe_Civilian_InfoBoards
	{
		addonRootClass="A3_Props_F_Globe";
		requiredAddons[]=
		{
			"A3_Props_F_Globe_Civilian"
		};
		requiredVersion=0.1;
		units[]=
		{
			"MapBoard_Pink",
			"MapBoard_01_Wall_Pink",
			"Land_WhiteBoard_FD_F",
			"Land_MapBoard_01_Wall_FD_F",
			"Land_WhiteBoard_oldman_F",
			"Land_MapBoard_01_Wall_oldman_F",
			"Land_WhiteBoard_vanila_F",
			"Land_MapBoard_01_Wall_vanila_F",
			"Land_WhiteBoard_Orange_F",
			"Land_WhiteBoard_Orange_random_F",
			"Land_MapBoard_01_Wall_Orange_F",
			"Land_MapBoard_01_Wall_Orange_random_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Land_MapBoard_F;
	class Land_MapBoard_01_Wall_base_F;
	class Land_WhiteBoard_FD_F: Land_MapBoard_F
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.96899998;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_WhiteBoard_FD_F.jpg";
		_generalMacro="Land_WhiteBoard_FD_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_expEden_Land_WhiteBoard_FD_F";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_beta\data\img\whiteboards\whiteboard_sp_fd01_CO.paa"
		};
		class Attributes
		{
			class SwitchTexture
			{
				property="SwitchTexture";
				displayName="$STR_expEden_Land_selectScenario_F";
				control="Combo";
				expression="_this setObjectTextureGlobal [0, _value]";
				defaultValue="'\A3\missions_f_beta\data\img\whiteboards\whiteboard_sp_fd01_CO.paa'";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="$STR_A3_firing_drills_sp_fd01_name";
						value="\A3\missions_f_beta\data\img\whiteboards\whiteboard_sp_fd01_CO.paa";
						picture="\A3\missions_f_beta\data\img\whiteboards\whiteboard_sp_fd01_CO.paa";
					};
					class 2
					{
						name="$STR_A3_firing_drills_sp_fd02_name";
						value="\A3\missions_f_beta\data\img\whiteboards\whiteboard_sp_fd02_CO.paa";
						picture="\A3\missions_f_beta\data\img\whiteboards\whiteboard_sp_fd02_CO.paa";
					};
					class 3
					{
						name="$STR_A3_firing_drills_sp_fd03_name";
						value="\A3\missions_f_beta\data\img\whiteboards\whiteboard_sp_fd03_CO.paa";
						picture="\A3\missions_f_beta\data\img\whiteboards\whiteboard_sp_fd03_CO.paa";
					};
					class 4
					{
						name="$STR_A3_firing_drills_sp_fd04_name";
						value="\A3\missions_f_beta\data\img\whiteboards\whiteboard_sp_fd04_CO.paa";
						picture="\A3\missions_f_beta\data\img\whiteboards\whiteboard_sp_fd04_CO.paa";
					};
					class 5
					{
						name="$STR_A3_firing_drills_sp_fd05_name";
						value="\A3\missions_f_gamma\data\img\whiteboards\whiteboard_sp_fd05_CO.paa";
						picture="\A3\missions_f_gamma\data\img\whiteboards\whiteboard_sp_fd05_CO.paa";
					};
					class 6
					{
						name="$STR_A3_firing_drills_sp_fd06_name";
						value="\A3\missions_f_gamma\data\img\whiteboards\whiteboard_sp_fd06_CO.paa";
						picture="\A3\missions_f_gamma\data\img\whiteboards\whiteboard_sp_fd06_CO.paa";
					};
					class 7
					{
						name="$STR_A3_firing_drills_sp_fd07_name";
						value="\A3\missions_f_gamma\data\img\whiteboards\whiteboard_sp_fd07_CO.paa";
						picture="\A3\missions_f_gamma\data\img\whiteboards\whiteboard_sp_fd07_CO.paa";
					};
					class 8
					{
						name="$STR_A3_firing_drills_sp_fd08_name";
						value="\A3\missions_f_gamma\data\img\whiteboards\whiteboard_sp_fd08_CO.paa";
						picture="\A3\missions_f_gamma\data\img\whiteboards\whiteboard_sp_fd08_CO.paa";
					};
					class 9
					{
						name="$STR_A3_firing_drills_sp_fd09_name";
						value="\A3\missions_f_gamma\data\img\whiteboards\whiteboard_sp_fd09_CO.paa";
						picture="\A3\missions_f_gamma\data\img\whiteboards\whiteboard_sp_fd09_CO.paa";
					};
					class 10
					{
						name="$STR_A3_firing_drills_sp_fd10_name";
						value="\A3\missions_f_gamma\data\img\whiteboards\whiteboard_sp_fd10_CO.paa";
						picture="\A3\missions_f_gamma\data\img\whiteboards\whiteboard_sp_fd10_CO.paa";
					};
					class 11
					{
						name="$STR_A3_firing_drills_cof_purple01_name";
						value="\A3\missions_f_mark\data\img\whiteboards\whiteboard_sp_fd11_CO.paa";
						picture="\A3\missions_f_mark\data\img\whiteboards\whiteboard_sp_fd11_CO.paa";
					};
					class 12
					{
						name="$STR_A3_firing_drills_cof_purple02_name";
						value="\A3\missions_f_mark\data\img\whiteboards\whiteboard_sp_fd12_CO.paa";
						picture="\A3\missions_f_mark\data\img\whiteboards\whiteboard_sp_fd12_CO.paa";
					};
					class 13
					{
						name="$STR_A3_firing_drills_cof_purple03_name";
						value="\A3\missions_f_mark\data\img\whiteboards\whiteboard_sp_fd13_CO.paa";
						picture="\A3\missions_f_mark\data\img\whiteboards\whiteboard_sp_fd13_CO.paa";
					};
					class 14
					{
						name="$STR_A3_firing_drills_cof_grey01_name";
						value="\A3\missions_f_beta\data\img\whiteboards\whiteboard_sp_fd14_a_CO.paa";
						picture="\A3\missions_f_beta\data\img\whiteboards\whiteboard_sp_fd14_a_CO.paa";
					};
					class 15
					{
						name="$STR_A3_firing_drills_cof_grey02_name";
						value="\A3\missions_f_beta\data\img\whiteboards\whiteboard_sp_fd14_b_CO.paa";
						picture="\A3\missions_f_beta\data\img\whiteboards\whiteboard_sp_fd14_b_CO.paa";
					};
					class 16
					{
						name="$STR_A3_firing_drills_cof_grey03_name";
						value="\A3\missions_f_beta\data\img\whiteboards\whiteboard_sp_fd14_c_CO.paa";
						picture="\A3\missions_f_beta\data\img\whiteboards\whiteboard_sp_fd14_c_CO.paa";
					};
				};
			};
		};
	};
	class Land_WhiteBoard_Oldman_F: Land_MapBoard_F
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.96899998;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_WhiteBoard_oldman_F.jpg";
		_generalMacro="Land_WhiteBoard_oldman_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_expEden_Land_WhiteBoard_Oldman_F";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_oldman\data\img\Whiteboards\CSAT_Whtb_Oumere_mosq_co.paa"
		};
		class Attributes
		{
			class SwitchTexture
			{
				property="SwitchTexture";
				displayName="$STR_expEden_Land_WhiteBoard_Oldman_selectSide_F";
				control="Combo";
				expression="_this setObjectTextureGlobal [0, _value]";
				defaultValue="'\A3\missions_f_oldman\data\img\Whiteboards\CSAT_Whtb_Oumere_mosq_co.paa'";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="$STR_A3_CFGFACTIONCLASSES_OPF_F0";
						value="\A3\missions_f_oldman\data\img\Whiteboards\CSAT_Whtb_Oumere_mosq_co.paa";
						picture="\A3\missions_f_oldman\data\img\Whiteboards\CSAT_Whtb_Oumere_mosq_co.paa";
					};
					class 2
					{
						name="$STR_A3_CFGFACTIONCLASSES_IND_C_F0";
						value="\A3\missions_f_oldman\data\img\Whiteboards\SYN_Whtb_Cerebu_co.paa";
						picture="\A3\missions_f_oldman\data\img\Whiteboards\SYN_Whtb_Cerebu_co.paa";
					};
					class 3
					{
						name="$STR_A3_CFGFACTIONCLASSES_IND_C_F0";
						value="\a3\Structures_F_Oldman\signs\boards\data\mapboard_tanoa_syndikat_co.paa";
						picture="\a3\Structures_F_Oldman\signs\boards\data\mapboard_tanoa_syndikat_co.paa";
					};
				};
			};
		};
	};
	class Land_WhiteBoard_Vanila_F: Land_MapBoard_F
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.96899998;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_WhiteBoard_vanila_F.jpg";
		_generalMacro="Land_WhiteBoard_vanila_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_expEden_Land_WhiteBoard_vanila_F";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_epa\data\img\whiteboards\whiteboard_A_in_lz_CO.paa"
		};
		class Attributes
		{
			class SwitchTexture
			{
				property="SwitchTexture";
				displayName="$STR_expEden_Land_WhiteBoard_vanila_selectScenario_F";
				control="Combo";
				expression="_this setObjectTextureGlobal [0, _value]";
				defaultValue="'\A3\missions_f_epa\data\img\whiteboards\whiteboard_A_in_lz_CO.paa'";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="$STR_expEden_Land_WhiteBoard_vanila_00_F";
						value="\A3\missions_f_epa\data\img\whiteboards\whiteboard_A_in_lz_CO.paa";
						picture="\A3\missions_f_epa\data\img\whiteboards\whiteboard_A_in_lz_CO.paa";
					};
					class 2
					{
						name="$STR_expEden_Land_WhiteBoard_vanila_02_F";
						value="\A3\missions_f_epa\data\img\whiteboards\whiteboard_A_in_camp_CO.paa";
						picture="\A3\missions_f_epa\data\img\whiteboards\whiteboard_A_in_camp_CO.paa";
					};
					class 3
					{
						name="$STR_A3_a_m01_mission_name";
						value="\A3\missions_f_epa\data\img\whiteboards\whiteboard_briefing_A_m01_CO.paa";
						picture="\A3\missions_f_epa\data\img\whiteboards\whiteboard_briefing_A_m01_CO.paa";
					};
					class 4
					{
						name="$STR_A3_a_m02_mission_name";
						value="\A3\missions_f_epa\data\img\whiteboards\whiteboard_briefing_A_m02_CO.paa";
						picture="\A3\missions_f_epa\data\img\whiteboards\whiteboard_briefing_A_m02_CO.paa";
					};
					class 5
					{
						name="$STR_A3_a_m03_mission_name";
						value="\A3\missions_f_epa\data\img\whiteboards\whiteboard_briefing_A_m03_CO.paa";
						picture="\A3\missions_f_epa\data\img\whiteboards\whiteboard_briefing_A_m03_CO.paa";
					};
					class 6
					{
						name="$STR_A3_campaign_a_m04_mission_name";
						value="\A3\missions_f_epa\data\img\whiteboards\whiteboard_briefing_A_m04_CO.paa";
						picture="\A3\missions_f_epa\data\img\whiteboards\whiteboard_briefing_A_m04_CO.paa";
					};
					class 7
					{
						name="$STR_A3_a_m05_mission_name";
						value="\A3\missions_f_epa\data\img\whiteboards\whiteboard_briefing_A_m05_CO.paa";
						picture="\A3\missions_f_epa\data\img\whiteboards\whiteboard_briefing_A_m05_CO.paa";
					};
					class 8
					{
						name="$STR_A3_a_out_mission_name";
						value="\A3\missions_f_epa\data\img\whiteboards\whiteboard_briefing_A_out_CO.paa";
						picture="\A3\missions_f_epa\data\img\whiteboards\whiteboard_briefing_A_out_CO.paa";
					};
					class 9
					{
						name="$STR_A3_B_in_mission_name";
						value="\A3\missions_f_epa\data\img\whiteboards\MapBoard_Altis_C_in1_CO.paa";
						picture="\A3\missions_f_epa\data\img\whiteboards\MapBoard_Altis_C_in1_CO.paa";
					};
					class 10
					{
						name="$STR_A3_B_hub01_mission_name";
						value="\A3\missions_f_epa\data\img\papermaps\papermap_briefing_B_hub01_CO.paa";
						picture="\A3\missions_f_epa\data\img\papermaps\papermap_briefing_B_hub01_CO.paa";
					};
				};
			};
		};
	};
	class Land_WhiteBoard_Orange_F: Land_MapBoard_F
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.96899998;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_WhiteBoard_Orange_F.jpg";
		_generalMacro="Land_WhiteBoard_Orange_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_expEden_Land_WhiteBoard_Orange_F";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_orange\Data\Img\Showcase_LawsOfWar\whiteboard_main_CO.paa"
		};
		class Attributes
		{
			class SwitchTexture
			{
				property="SwitchTexture";
				displayName="$STR_expEden_Land_WhiteBoard_Orange_selectScenario_F";
				control="Combo";
				expression="if (_value == 'script') then {   _this call compile preprocessFileLineNumbers '\A3\Props_F_Globe\Civilian\InfoBoards\scripts\MapBoardPostWar_camo.sqf'				} else {		_this setObjectTextureGlobal [0, _value]					}";
				defaultValue="'\A3\missions_f_orange\Data\Img\Showcase_LawsOfWar\whiteboard_main_CO.paa'";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="$STR_expEden_Land_WhiteBoard_Orange_selectScenario_F_01";
						value="\A3\missions_f_orange\Data\Img\Showcase_LawsOfWar\whiteboard_main_CO.paa";
						picture="\A3\missions_f_orange\Data\Img\Showcase_LawsOfWar\whiteboard_main_CO.paa";
					};
					class 2
					{
						name="$STR_A3_orange_faction_idap_activity_title";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\whiteboard_area_activity_CO.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\whiteboard_area_activity_CO.paa";
					};
					class 3
					{
						name="$STR_expEden_Land_InfoStand_V1_IDAP_F_AttributesSelect10";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\whiteboard_area_aid_CO.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\whiteboard_area_aid_CO.paa";
					};
					class 4
					{
						name="$STR_A3_CFGVEHICLES_C_IDAP_HELI_TRANSPORT_02_F0";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\whiteboard_area_air_CO.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\whiteboard_area_air_CO.paa";
					};
					class 5
					{
						name="$STR_expEden_Land_InfoStand_V1_IDAP_F_AttributesSelect05";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\whiteboard_area_autonomous_CO.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\whiteboard_area_autonomous_CO.paa";
					};
					class 6
					{
						name="$STR_expEden_Land_InfoStand_V1_IDAP_F_AttributesSelect10";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\whiteboard_area_expo_CO.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\whiteboard_area_expo_CO.paa";
					};
					class 7
					{
						name="$STR_TOOLTIP_INFORMATION";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\whiteboard_area_idap_CO.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\whiteboard_area_idap_CO.paa";
					};
					class 8
					{
						name="$STR_A3_Orange_Faction_IDAP_IHL_title";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\whiteboard_area_ihl_CO.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\whiteboard_area_ihl_CO.paa";
					};
					class 9
					{
						name="$STR_A3_Orange_Faction_IDAP_marker";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\whiteboard_area_kiosk_CO.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\whiteboard_area_kiosk_CO.paa";
					};
					class 10
					{
						name="$STR_A3_SHOWCASE_FACTION_BLUFOR_GROUND_TITLE";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\whiteboard_area_land_CO.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\whiteboard_area_land_CO.paa";
					};
					class 11
					{
						name="$STR_expEden_Land_WhiteBoard_Orange_selectScenario_F_13";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\whiteboard_idap1_CO.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\whiteboard_idap1_CO.paa";
					};
					class 12
					{
						name="$STR_BRIEF_OBJECTIVES";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\whiteboard_idap2_CO.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\whiteboard_idap2_CO.paa";
					};
					class 13
					{
						name="$STR_expEden_Land_WhiteBoard_Orange_selectScenario_F_17";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\whiteboard_idap3_CO.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\whiteboard_idap3_CO.paa";
					};
					class 14
					{
						name="$STR_expEden_Land_WhiteBoard_Orange_selectScenario_F_14";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\whiteboard_idap4_CO.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\whiteboard_idap4_CO.paa";
					};
					class 15
					{
						name="$STR_expEden_Land_WhiteBoard_Orange_selectScenario_F_15";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\whiteboard_idap5_CO.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\whiteboard_idap5_CO.paa";
					};
					class 16
					{
						name="$STR_expEden_Land_WhiteBoard_Orange_selectScenario_F_16";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\whiteboard_idap6_CO.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\whiteboard_idap6_CO.paa";
					};
					class 17
					{
						name="$STR_expEden_Land_WhiteBoard_Orange_CampSplendid_F";
						value="\A3\missions_f_orange\Data\Img\Orange_Compositions\A1\Whiteboard_CampSplendid_CO.paa";
						picture="\A3\missions_f_orange\Data\Img\Orange_Compositions\A1\Whiteboard_CampSplendid_CO.paa";
					};
					class 18
					{
						name="$STR_expEden_Land_WhiteBoard_Orange_CampSplendid_PostWar_F";
						value="script";
						picture="\A3\missions_f_orange\Data\Img\Orange_Compositions\A1\Whiteboard_CampSplendid_PostWar_CO.paa";
					};
				};
			};
		};
	};
	class Land_WhiteBoard_Orange_random_F: Land_WhiteBoard_Orange_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_WhiteBoard_Orange_random_F.jpg";
		_generalMacro="Land_WhiteBoard_Orange_random_F";
		displayName="$STR_A3_Globe_CfgVehicles_Land_WhiteBoard_Orange_random_F0";
		class EventHandlers
		{
			init="(_this # 0) call compile preprocessFileLineNumbers '\A3\Props_F_Globe\Civilian\InfoBoards\scripts\randomize.sqf'";
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
		};
	};
	class Land_MapBoard_01_Wall_FD_F: Land_MapBoard_01_Wall_base_F
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.55199999;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_MapBoard_01_Wall_FD_F.jpg";
		_generalMacro="Land_MapBoard_01_Wall_FD_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_Globe_CfgVehicles_Land_MapBoard_01_Wall_FD_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_beta\data\img\whiteboards\whiteboard_sp_fd01_CO.paa"
		};
		class Attributes
		{
			class SwitchTexture
			{
				property="SwitchTexture";
				displayName="$STR_expEden_Land_selectScenario_F";
				control="Combo";
				expression="_this setObjectTextureGlobal [0, _value]";
				defaultValue="'\A3\missions_f_beta\data\img\whiteboards\whiteboard_sp_fd01_CO.paa'";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="$STR_A3_firing_drills_sp_fd01_name";
						value="\A3\missions_f_beta\data\img\whiteboards\whiteboard_sp_fd01_CO.paa";
						picture="\A3\missions_f_beta\data\img\whiteboards\whiteboard_sp_fd01_CO.paa";
					};
					class 2
					{
						name="$STR_A3_firing_drills_sp_fd02_name";
						value="\A3\missions_f_beta\data\img\whiteboards\whiteboard_sp_fd02_CO.paa";
						picture="\A3\missions_f_beta\data\img\whiteboards\whiteboard_sp_fd02_CO.paa";
					};
					class 3
					{
						name="$STR_A3_firing_drills_sp_fd03_name";
						value="\A3\missions_f_beta\data\img\whiteboards\whiteboard_sp_fd03_CO.paa";
						picture="\A3\missions_f_beta\data\img\whiteboards\whiteboard_sp_fd03_CO.paa";
					};
					class 4
					{
						name="$STR_A3_firing_drills_sp_fd04_name";
						value="\A3\missions_f_beta\data\img\whiteboards\whiteboard_sp_fd04_CO.paa";
						picture="\A3\missions_f_beta\data\img\whiteboards\whiteboard_sp_fd04_CO.paa";
					};
					class 5
					{
						name="$STR_A3_firing_drills_sp_fd05_name";
						value="\A3\missions_f_gamma\data\img\whiteboards\whiteboard_sp_fd05_CO.paa";
						picture="\A3\missions_f_gamma\data\img\whiteboards\whiteboard_sp_fd05_CO.paa";
					};
					class 6
					{
						name="$STR_A3_firing_drills_sp_fd06_name";
						value="\A3\missions_f_gamma\data\img\whiteboards\whiteboard_sp_fd06_CO.paa";
						picture="\A3\missions_f_gamma\data\img\whiteboards\whiteboard_sp_fd06_CO.paa";
					};
					class 7
					{
						name="$STR_A3_firing_drills_sp_fd07_name";
						value="\A3\missions_f_gamma\data\img\whiteboards\whiteboard_sp_fd07_CO.paa";
						picture="\A3\missions_f_gamma\data\img\whiteboards\whiteboard_sp_fd07_CO.paa";
					};
					class 8
					{
						name="$STR_A3_firing_drills_sp_fd08_name";
						value="\A3\missions_f_gamma\data\img\whiteboards\whiteboard_sp_fd08_CO.paa";
						picture="\A3\missions_f_gamma\data\img\whiteboards\whiteboard_sp_fd08_CO.paa";
					};
					class 9
					{
						name="$STR_A3_firing_drills_sp_fd09_name";
						value="\A3\missions_f_gamma\data\img\whiteboards\whiteboard_sp_fd09_CO.paa";
						picture="\A3\missions_f_gamma\data\img\whiteboards\whiteboard_sp_fd09_CO.paa";
					};
					class 10
					{
						name="$STR_A3_firing_drills_sp_fd10_name";
						value="\A3\missions_f_gamma\data\img\whiteboards\whiteboard_sp_fd10_CO.paa";
						picture="\A3\missions_f_gamma\data\img\whiteboards\whiteboard_sp_fd10_CO.paa";
					};
					class 11
					{
						name="$STR_A3_firing_drills_cof_purple01_name";
						value="\A3\missions_f_mark\data\img\whiteboards\whiteboard_sp_fd11_CO.paa";
						picture="\A3\missions_f_mark\data\img\whiteboards\whiteboard_sp_fd11_CO.paa";
					};
					class 12
					{
						name="$STR_A3_firing_drills_cof_purple02_name";
						value="\A3\missions_f_mark\data\img\whiteboards\whiteboard_sp_fd12_CO.paa";
						picture="\A3\missions_f_mark\data\img\whiteboards\whiteboard_sp_fd12_CO.paa";
					};
					class 13
					{
						name="$STR_A3_firing_drills_cof_purple03_name";
						value="\A3\missions_f_mark\data\img\whiteboards\whiteboard_sp_fd13_CO.paa";
						picture="\A3\missions_f_mark\data\img\whiteboards\whiteboard_sp_fd13_CO.paa";
					};
					class 14
					{
						name="$STR_A3_firing_drills_cof_grey01_name";
						value="\A3\missions_f_beta\data\img\whiteboards\whiteboard_sp_fd14_a_CO.paa";
						picture="\A3\missions_f_beta\data\img\whiteboards\whiteboard_sp_fd14_a_CO.paa";
					};
					class 15
					{
						name="$STR_A3_firing_drills_cof_grey02_name";
						value="\A3\missions_f_beta\data\img\whiteboards\whiteboard_sp_fd14_b_CO.paa";
						picture="\A3\missions_f_beta\data\img\whiteboards\whiteboard_sp_fd14_b_CO.paa";
					};
					class 16
					{
						name="$STR_A3_firing_drills_cof_grey03_name";
						value="\A3\missions_f_beta\data\img\whiteboards\whiteboard_sp_fd14_c_CO.paa";
						picture="\A3\missions_f_beta\data\img\whiteboards\whiteboard_sp_fd14_c_CO.paa";
					};
				};
			};
		};
	};
	class Land_MapBoard_01_Wall_Oldman_F: Land_MapBoard_01_Wall_base_F
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.55199999;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_MapBoard_01_Wall_oldman_F.jpg";
		_generalMacro="Land_MapBoard_01_Wall_oldman_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_Globe_CfgVehicles_Land_MapBoard_01_Wall_oldman_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_oldman\data\img\Whiteboards\CSAT_Whtb_Oumere_mosq_co.paa"
		};
		class Attributes
		{
			class SwitchTexture
			{
				property="SwitchTexture";
				displayName="$STR_expEden_Land_WhiteBoard_Oldman_selectSide_F";
				control="Combo";
				expression="_this setObjectTextureGlobal [0, _value]";
				defaultValue="'\A3\missions_f_oldman\data\img\Whiteboards\CSAT_Whtb_Oumere_mosq_co.paa'";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="$STR_A3_CFGFACTIONCLASSES_OPF_F0";
						value="\A3\missions_f_oldman\data\img\Whiteboards\CSAT_Whtb_Oumere_mosq_co.paa";
						picture="\A3\missions_f_oldman\data\img\Whiteboards\CSAT_Whtb_Oumere_mosq_co.paa";
					};
					class 2
					{
						name="$STR_A3_CFGFACTIONCLASSES_IND_C_F0";
						value="\A3\missions_f_oldman\data\img\Whiteboards\SYN_Whtb_Cerebu_co.paa";
						picture="\A3\missions_f_oldman\data\img\Whiteboards\SYN_Whtb_Cerebu_co.paa";
					};
					class 3
					{
						name="$STR_A3_CFGFACTIONCLASSES_IND_C_F0";
						value="\a3\Structures_F_Oldman\signs\boards\data\mapboard_tanoa_syndikat_co.paa";
						picture="\a3\Structures_F_Oldman\signs\boards\data\mapboard_tanoa_syndikat_co.paa";
					};
				};
			};
		};
	};
	class Land_MapBoard_01_Wall_Vanila_F: Land_MapBoard_01_Wall_base_F
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.55199999;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_MapBoard_01_Wall_vanila_F.jpg";
		_generalMacro="Land_MapBoard_01_Wall_vanila_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_Globe_CfgVehicles_Land_MapBoard_01_Wall_vanila_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_epa\data\img\whiteboards\whiteboard_A_in_lz_CO.paa"
		};
		class Attributes
		{
			class SwitchTexture
			{
				property="SwitchTexture";
				displayName="$STR_expEden_Land_WhiteBoard_vanila_selectScenario_F";
				control="Combo";
				expression="_this setObjectTextureGlobal [0, _value]";
				defaultValue="'\A3\missions_f_epa\data\img\whiteboards\whiteboard_A_in_lz_CO.paa'";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="$STR_expEden_Land_WhiteBoard_vanila_00_F";
						value="\A3\missions_f_epa\data\img\whiteboards\whiteboard_A_in_lz_CO.paa";
						picture="\A3\missions_f_epa\data\img\whiteboards\whiteboard_A_in_lz_CO.paa";
					};
					class 2
					{
						name="$STR_expEden_Land_WhiteBoard_vanila_02_F";
						value="\A3\missions_f_epa\data\img\whiteboards\whiteboard_A_in_camp_CO.paa";
						picture="\A3\missions_f_epa\data\img\whiteboards\whiteboard_A_in_camp_CO.paa";
					};
					class 3
					{
						name="$STR_A3_a_m01_mission_name";
						value="\A3\missions_f_epa\data\img\whiteboards\whiteboard_briefing_A_m01_CO.paa";
						picture="\A3\missions_f_epa\data\img\whiteboards\whiteboard_briefing_A_m01_CO.paa";
					};
					class 4
					{
						name="$STR_A3_a_m02_mission_name";
						value="\A3\missions_f_epa\data\img\whiteboards\whiteboard_briefing_A_m02_CO.paa";
						picture="\A3\missions_f_epa\data\img\whiteboards\whiteboard_briefing_A_m02_CO.paa";
					};
					class 5
					{
						name="$STR_A3_a_m03_mission_name";
						value="\A3\missions_f_epa\data\img\whiteboards\whiteboard_briefing_A_m03_CO.paa";
						picture="\A3\missions_f_epa\data\img\whiteboards\whiteboard_briefing_A_m03_CO.paa";
					};
					class 6
					{
						name="$STR_A3_campaign_a_m04_mission_name";
						value="\A3\missions_f_epa\data\img\whiteboards\whiteboard_briefing_A_m04_CO.paa";
						picture="\A3\missions_f_epa\data\img\whiteboards\whiteboard_briefing_A_m04_CO.paa";
					};
					class 7
					{
						name="$STR_A3_a_m05_mission_name";
						value="\A3\missions_f_epa\data\img\whiteboards\whiteboard_briefing_A_m05_CO.paa";
						picture="\A3\missions_f_epa\data\img\whiteboards\whiteboard_briefing_A_m05_CO.paa";
					};
					class 8
					{
						name="$STR_A3_a_out_mission_name";
						value="\A3\missions_f_epa\data\img\whiteboards\whiteboard_briefing_A_out_CO.paa";
						picture="\A3\missions_f_epa\data\img\whiteboards\whiteboard_briefing_A_out_CO.paa";
					};
					class 9
					{
						name="$STR_A3_B_in_mission_name";
						value="\A3\missions_f_epa\data\img\whiteboards\MapBoard_Altis_C_in1_CO.paa";
						picture="\A3\missions_f_epa\data\img\whiteboards\MapBoard_Altis_C_in1_CO.paa";
					};
					class 10
					{
						name="$STR_A3_B_hub01_mission_name";
						value="\A3\missions_f_epa\data\img\papermaps\papermap_briefing_B_hub01_CO.paa";
						picture="\A3\missions_f_epa\data\img\papermaps\papermap_briefing_B_hub01_CO.paa";
					};
				};
			};
		};
	};
	class Land_MapBoard_01_Wall_Orange_F: Land_MapBoard_01_Wall_base_F
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.55199999;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_MapBoard_01_Wall_Orange_F.jpg";
		_generalMacro="Land_MapBoard_01_Wall_Orange_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_Globe_CfgVehicles_Land_MapBoard_01_Wall_Orange_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_orange\Data\Img\Showcase_LawsOfWar\whiteboard_main_CO.paa"
		};
		class Attributes
		{
			class SwitchTexture
			{
				property="SwitchTexture";
				displayName="$STR_expEden_Land_WhiteBoard_Orange_selectScenario_F";
				control="Combo";
				expression="if (_value == 'script') then {    _this call compile preprocessFileLineNumbers '\A3\Props_F_Globe\Civilian\InfoBoards\scripts\MapBoardPostWar_camo.sqf'				} else {		_this setObjectTextureGlobal [0, _value]					}";
				defaultValue="'\A3\missions_f_orange\Data\Img\Showcase_LawsOfWar\whiteboard_main_CO.paa'";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="$STR_expEden_Land_WhiteBoard_Orange_selectScenario_F_01";
						value="\A3\missions_f_orange\Data\Img\Showcase_LawsOfWar\whiteboard_main_CO.paa";
						picture="\A3\missions_f_orange\Data\Img\Showcase_LawsOfWar\whiteboard_main_CO.paa";
					};
					class 2
					{
						name="$STR_A3_orange_faction_idap_activity_title";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\whiteboard_area_activity_CO.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\whiteboard_area_activity_CO.paa";
					};
					class 3
					{
						name="$STR_expEden_Land_InfoStand_V1_IDAP_F_AttributesSelect10";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\whiteboard_area_aid_CO.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\whiteboard_area_aid_CO.paa";
					};
					class 4
					{
						name="$STR_A3_CFGVEHICLES_C_IDAP_HELI_TRANSPORT_02_F0";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\whiteboard_area_air_CO.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\whiteboard_area_air_CO.paa";
					};
					class 5
					{
						name="$STR_expEden_Land_InfoStand_V1_IDAP_F_AttributesSelect05";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\whiteboard_area_autonomous_CO.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\whiteboard_area_autonomous_CO.paa";
					};
					class 6
					{
						name="$STR_expEden_Land_InfoStand_V1_IDAP_F_AttributesSelect10";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\whiteboard_area_expo_CO.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\whiteboard_area_expo_CO.paa";
					};
					class 7
					{
						name="$STR_TOOLTIP_INFORMATION";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\whiteboard_area_idap_CO.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\whiteboard_area_idap_CO.paa";
					};
					class 8
					{
						name="$STR_A3_Orange_Faction_IDAP_IHL_title";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\whiteboard_area_ihl_CO.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\whiteboard_area_ihl_CO.paa";
					};
					class 9
					{
						name="$STR_A3_Orange_Faction_IDAP_marker";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\whiteboard_area_kiosk_CO.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\whiteboard_area_kiosk_CO.paa";
					};
					class 10
					{
						name="$STR_A3_SHOWCASE_FACTION_BLUFOR_GROUND_TITLE";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\whiteboard_area_land_CO.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\whiteboard_area_land_CO.paa";
					};
					class 11
					{
						name="$STR_expEden_Land_WhiteBoard_Orange_selectScenario_F_13";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\whiteboard_idap1_CO.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\whiteboard_idap1_CO.paa";
					};
					class 12
					{
						name="$STR_BRIEF_OBJECTIVES";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\whiteboard_idap2_CO.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\whiteboard_idap2_CO.paa";
					};
					class 13
					{
						name="$STR_expEden_Land_WhiteBoard_Orange_selectScenario_F_17";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\whiteboard_idap3_CO.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\whiteboard_idap3_CO.paa";
					};
					class 14
					{
						name="$STR_expEden_Land_WhiteBoard_Orange_selectScenario_F_14";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\whiteboard_idap4_CO.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\whiteboard_idap4_CO.paa";
					};
					class 15
					{
						name="$STR_expEden_Land_WhiteBoard_Orange_selectScenario_F_15";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\whiteboard_idap5_CO.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\whiteboard_idap5_CO.paa";
					};
					class 16
					{
						name="$STR_expEden_Land_WhiteBoard_Orange_selectScenario_F_16";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\whiteboard_idap6_CO.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\whiteboard_idap6_CO.paa";
					};
					class 17
					{
						name="$STR_expEden_Land_WhiteBoard_Orange_CampSplendid_F";
						value="\A3\missions_f_orange\Data\Img\Orange_Compositions\A1\Whiteboard_CampSplendid_CO.paa";
						picture="\A3\missions_f_orange\Data\Img\Orange_Compositions\A1\Whiteboard_CampSplendid_CO.paa";
					};
					class 18
					{
						name="$STR_expEden_Land_WhiteBoard_Orange_CampSplendid_PostWar_F";
						value="script";
						picture="\A3\missions_f_orange\Data\Img\Orange_Compositions\A1\Whiteboard_CampSplendid_PostWar_CO.paa";
					};
				};
			};
		};
	};
	class Land_MapBoard_01_Wall_Orange_random_F: Land_MapBoard_01_Wall_Orange_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_MapBoard_01_Wall_Orange_random_F.jpg";
		_generalMacro="Land_MapBoard_01_Wall_Orange_random_F";
		displayName="$STR_A3_Globe_CfgVehicles_Land_MapBoard_01_Wall_Orange_random_F0";
		class EventHandlers
		{
			init="(_this # 0) call compile preprocessFileLineNumbers '\A3\Props_F_Globe\Civilian\InfoBoards\scripts\randomize.sqf'";
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
		};
	};
	class MapBoard_Pink: Land_MapBoard_F
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.96899998;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\MapBoard_Pink.jpg";
		_generalMacro="MapBoard_Pink";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_MapBoard_Pink0";
		hiddenSelectionsTextures[]=
		{
			"\a3\missions_f_bootcamp\data\img\whiteboards\ScoreBoard.paa"
		};
	};
	class MapBoard_01_Wall_Pink: Land_MapBoard_01_Wall_base_F
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.55199999;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\MapBoard_01_Wall_Pink.jpg";
		_generalMacro="MapBoard_01_Wall_Pink";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_MapBoard_01_Wall_Pink0";
		hiddenSelectionsTextures[]=
		{
			"\a3\missions_f_bootcamp\data\img\whiteboards\ScoreBoard.paa"
		};
	};
};
