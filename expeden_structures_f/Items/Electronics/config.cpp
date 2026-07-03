class CfgPatches
{
	class A3_Structures_F_Globe_Items_Electronics
	{
		addonRootClass="A3_Structures_F_Globe";
		requiredAddons[]=
		{
			"A3_Structures_F_Globe_Items"
		};
		requiredVersion=0.1;
		units[]=
		{
			"PortableLongRangeRadioMilitary_RadioChatEngA_01_G",
			"PortableLongRangeRadio_RadioChatEngC_01_G",
			"PortableLongRangeRadio_RadioChatEngFCiv_01_G",
			"SurvivalRadio_G_on",
			"Land_FMradio_on",
			"PortableLongRangeRadioMilitary_EmptyAir",
			"PortableLongRangeRadio_EmptyAir",
			"Portable_generator_enabled",
			"Land_PCSet_01_WinUpd_F",
			"Land_PowerGenerator_on",
			"PortableLongRangeRadioMilitary_RadioChatFas",
			"PortableLongRangeRadio_RadioChatEngF",
			"Land_PortableLongRangeRadioMilitary_F",
			"PortableLongRangeRadioMilitary_RadioChatEng",
			"PortableLongRangeRadioMilitary_RadioChatChi",
			"Land_Laptop_unfolded_AAN_02_F",
			"Land_Laptop_unfolded_AAN_01_F",
			"Land_FlatTV_01_forecast_F",
			"Land_PCSet_01_screen_CombatAudio_F",
			"Land_PCSet_01_screen_EndGame_F",
			"Land_PCSet_01_screen_Spectator_F",
			"Land_PCSet_01_screen_Respawn_F",
			"Land_PCSet_01_screen_Quickplay_F",
			"Land_PCSet_01_screen_Launcher_F",
			"Land_PCSet_01_screen_DynamicGroups_F",
			"Land_PCSet_01_screen_MainMenu_F",
			"Land_PCSet_01_screen_GameOptions_F",
			"Land_PCSet_01_screen_VRTraining_F",
			"Land_PCSet_01_screen_VirtualArsenal_F",
			"Land_PCSet_01_screen_GameMaster_F",
			"Land_PCSet_01_screen_FieldManual_F",
			"Land_PCSet_01_screen_CommunityGuide_F",
			"Land_PCSet_01_screen_EdenEditor_F",
			"Land_Tablet_01_IDAP_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Land_Tablet_01_F;
	class Land_PowerGenerator_F;
	class Land_PortableLongRangeRadio_F;
	class Barracks_acc_proxy_2;
	class Land_Portable_generator_F;
	class Barracks_acc_proxy_1;
	class Barracks_acc_proxy_5;
	class ThingX;
	class Items_base_F: ThingX
	{
		class EventHandlers;
	};
	class Land_SurvivalRadio_F;
	class Land_FMradio_F: Items_base_F
	{
		class Attributes
		{
			class Land_FMradio_F_musicEnable
			{
				displayName="$STR_3DEN_TRIGGER_ATTRIBUTE_MUSIC_DISPLAYNAME";
				tooltip="$STR_expEden_Land_FMradio_F_musicEnable_tooltip";
				property="Land_FMradio_F_musicEnable";
				control="Checkbox";
				defaultValue="false";
				expression="_this setVariable ['expEden_FMRadioMusic_enable', _value, isServer]";
			};
		};
		class UserActions
		{
			class RadioOn
			{
				displayNameDefault="<img image='\A3\ui_f\data\igui\cfg\actions\take_ca.paa' size='1.8' shadow=2 /><img image='\a3\ui_f\data\igui\rscingameui\rscunitinfoairrtdfull\ico_cpt_music_on_ca.paa' size='1.9' shadow=2 />";
				displayName="$STR_A3_FIRING_DRILLS_RADIO_ON";
				position="";
				priority=0.0099999998;
				radius=2.25;
				onlyForPlayer=1;
				condition="(!(isNil {this getVariable 'expEden_FMRadioMusic_enable'})) && alive this && ((this getVariable ['expEden_FMRadioMusic_enable',false]) isEqualTo false)";
				statement="[this, true] remoteExecCall ['expEden_fnc_radioNewsMusicActions',2]";
			};
			class RadioOff
			{
				displayNameDefault="<img image='\A3\ui_f\data\igui\cfg\actions\take_ca.paa' size='1.8' shadow=2 /><img image='\a3\ui_f\data\igui\rscingameui\rscunitinfoairrtdfull\ico_cpt_music_off_ca.paa' size='1.9' shadow=2 />";
				displayName="$STR_A3_FIRING_DRILLS_RADIO_OFF";
				position="";
				priority=0.0099999998;
				radius=2.25;
				onlyForPlayer=1;
				condition="(!(isNil {this getVariable 'expEden_FMRadioMusic_enable'})) && alive this && ((this getVariable ['expEden_FMRadioMusic_enable',false]) isEqualTo true) && ((this getVariable ['Globe_radioTrackSrc',objNull]) isNotEqualTo objNull)";
				statement="[this, false] remoteExecCall ['expEden_fnc_radioNewsMusicActions',2]";
			};
		};
		class EventHandlers: EventHandlers
		{
			class Globe_FMradioEHs
			{
				postInit="(_this # 0) spawn expEden_fnc_radioNewsMusic";
				hitPart="if (isDamageAllowed ((_this # 0) # 0)) then {((_this # 0) # 0) remoteExec ['expEden_fnc_radioNewsMusicDamage',2]}";
				deleted="(_this # 0) setDamage 1;";
				killed="(_this # 0) setDamage 1;";
			};
		};
	};
	class SurvivalRadio_G_on: Land_SurvivalRadio_F
	{
		author="O&T Expansion Eden";
		_generalMacro="SurvivalRadio_G_on";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_SurvivalRadio_G_on0";
		class UserActions
		{
			class RadioOn
			{
				displayNameDefault="<img image='\A3\ui_f\data\igui\cfg\actions\take_ca.paa' size='1.8' shadow=2 /><img image='\a3\ui_f\data\igui\rscingameui\rscunitinfoairrtdfull\ico_cpt_music_on_ca.paa' size='1.9' shadow=2 />";
				displayName="$STR_A3_FIRING_DRILLS_RADIO_ON";
				position="";
				priority=0.0099999998;
				radius=2.25;
				onlyForPlayer=1;
				condition="(!(isNil {this getVariable 'expEden_FMRadioMusic_enable'})) && alive this && ((this getVariable ['expEden_FMRadioMusic_enable',false]) isEqualTo false)";
				statement="[this, true] remoteExecCall ['expEden_fnc_radioNewsMusicActions',2]";
			};
			class RadioOff
			{
				displayNameDefault="<img image='\A3\ui_f\data\igui\cfg\actions\take_ca.paa' size='1.8' shadow=2 /><img image='\a3\ui_f\data\igui\rscingameui\rscunitinfoairrtdfull\ico_cpt_music_off_ca.paa' size='1.9' shadow=2 />";
				displayName="$STR_A3_FIRING_DRILLS_RADIO_OFF";
				position="";
				priority=0.0099999998;
				radius=2.25;
				onlyForPlayer=1;
				condition="(!(isNil {this getVariable 'expEden_FMRadioMusic_enable'})) && alive this && ((this getVariable ['expEden_FMRadioMusic_enable',false]) isEqualTo true) && ((this getVariable ['Globe_radioTrackSrc',objNull]) isNotEqualTo objNull)";
				statement="[this, false] remoteExecCall ['expEden_fnc_radioNewsMusicActions',2]";
			};
		};
		class EventHandlers
		{
			class Globe_SurvivalRadioEHs
			{
				postInit="(_this # 0) setVariable ['expEden_FMRadioMusic_enable', true, isServer]; (_this # 0) spawn expEden_fnc_radioNewsMusic";
				hitPart="if (isDamageAllowed ((_this # 0) # 0)) then {((_this # 0) # 0) remoteExec ['expEden_fnc_radioNewsMusicDamage',2]}";
				deleted="(_this # 0) setDamage 1;";
				killed=" (_this # 0) setDamage 1;";
			};
		};
	};
	class Land_FMradio_on: Land_FMradio_F
	{
		author="O&T Expansion Eden";
		_generalMacro="Land_FMradio_on";
		displayName="$STR_Globe_CfgVehicles_Land_FMradio_on0";
		class Attributes
		{
		};
		class EventHandlers: EventHandlers
		{
			class Globe_FMradioEHs: Globe_FMradioEHs
			{
				postInit="(_this # 0) setVariable ['expEden_FMRadioMusic_enable', true, isServer]; (_this # 0) spawn expEden_fnc_radioNewsMusic;";
				hitPart="if (isDamageAllowed ((_this # 0) # 0)) then {((_this # 0) # 0) remoteExec ['expEden_fnc_radioNewsMusicDamage',2]};";
			};
		};
	};
	class Land_PCSet_01_screen_F: Items_base_F
	{
		class Attributes
		{
			class Land_PCSet_01_screen_F_destroyElectronics
			{
				displayName="$STR_3DEN_OBJECT_ATTRIBUTE_ALLOWDAMAGE_DISPLAYNAME";
				tooltip="$STR_expEden_Land_FMradio_F_destroyElectronics_tooltip";
				property="Land_PCSet_01_screen_F_destroyElectronics";
				control="Checkbox";
				defaultValue="false";
				expression="_this setVariable ['expEden_PCSetScreenDmg_enable', _value, isServer]";
			};
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
		class EventHandlers: EventHandlers
		{
			postInit="(_this # 0) call expEden_fnc_PCSetInit";
		};
	};
	class Land_PCSet_01_case_F: Items_base_F
	{
		class UserActions
		{
			class PCSetCaseOn
			{
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\take_ca.paa' size='2.5' />";
				displayName="$STR_Opt_enable";
				position="";
				priority=0.0099999998;
				radius=3.5;
				onlyForPlayer=1;
				condition="(this getVariable ['Globe_actionShow',true]) && alive this && ((this getVariable ['BIS_fnc_EXP_m01_destroyElectronics_destroyed',false]) isNotEqualTo true)";
				statement="this spawn expEden_fnc_PCSetEnable";
			};
		};
		class EventHandlers: EventHandlers
		{
			class Globe_PCSetCaseEH
			{
				hitPart="if (isDamageAllowed ((_this # 0) # 0)) then {((_this # 0) # 0) remoteExec ['expEden_fnc_PCSetDamage',2]};";
			};
		};
	};
	class Land_PCSet_01_screen_EdenEditor_F: Land_PCSet_01_screen_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_PCSet_01_screen_EdenEditor_F.jpg";
		_generalMacro="Land_PCSet_01_screen_EdenEditor_F";
		displayName="$STR_A3_Globe_CfgVehicles_Land_PCSet_01_screen_EdenEditor_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\Missions_F_Beta\data\img\monitors\tablet_fd14_3_co.paa"
		};
		class Attributes
		{
			class SwitchTexture
			{
				property="SwitchTexture";
				displayName="$STR_A3_expEden_Leaflet_05_announcements_Attributes_SwitchTexture_displayName_F0";
				control="Combo";
				expression="_this setObjectTextureGlobal [0, _value]";
				defaultValue="'\A3\Missions_F_Beta\data\img\monitors\tablet_fd14_3_co.paa'";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="FD 14";
						value="\A3\Missions_F_Beta\data\img\monitors\tablet_fd14_3_co.paa";
						picture="\A3\Missions_F_Beta\data\img\monitors\tablet_fd14_3_co.paa";
					};
					class 2
					{
						name="End Game";
						value="\A3\Data_F_Exp\Images\FeatureEden_co.paa";
						picture="\A3\Data_F_Exp\Images\FeatureEden_co.paa";
					};
					class 3
					{
						name="Strike Back";
						value="\A3\Data_F_Exp_B\Data\FM_Learn_EdenEditor_ca.paa";
						picture="\A3\Data_F_Exp_B\Data\FM_Learn_EdenEditor_ca.paa";
					};
				};
			};
		};
		class EventHandlers: EventHandlers
		{
			class Globe_PCSetScreenEH
			{
				hitPart="if (isDamageAllowed ((_this # 0) # 0)) then {((_this # 0) # 0) setObjectTextureGlobal [0, 'a3\missions_f_exp\data\img\exp_m01_monitor_ca.paa']};";
			};
		};
	};
	class Land_PCSet_01_screen_CommunityGuide_F: Land_PCSet_01_screen_EdenEditor_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_PCSet_01_screen_CommunityGuide_F.jpg";
		_generalMacro="Land_PCSet_01_screen_CommunityGuide_F";
		displayName="$STR_A3_Globe_CfgVehicles_Land_PCSet_01_screen_CommunityGuide_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\Data_F_Bootcamp\Data\FM_Learn_Bootcamp2_ca.paa"
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
	class Land_PCSet_01_screen_FieldManual_F: Land_PCSet_01_screen_EdenEditor_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_PCSet_01_screen_FieldManual_F.jpg";
		_generalMacro="Land_PCSet_01_screen_FieldManual_F";
		displayName="$STR_A3_Globe_CfgVehicles_Land_PCSet_01_screen_FieldManual_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\Data_F_Bootcamp\Data\FM_Learn_Bootcamp3_ca.paa"
		};
		class Attributes
		{
			class SwitchTexture
			{
				property="SwitchTexture";
				displayName="$STR_A3_expEden_Leaflet_05_announcements_Attributes_SwitchTexture_displayName_F0";
				control="Combo";
				expression="_this setObjectTextureGlobal [0, _value]";
				defaultValue="'\A3\Data_F_Bootcamp\Data\FM_Learn_Bootcamp3_ca.paa'";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="$STR_A3_FM_Welcome0";
						value="\A3\Data_F_Bootcamp\Data\FM_Learn_Bootcamp3_ca.paa";
						picture="\A3\Data_F_Bootcamp\Data\FM_Learn_Bootcamp3_ca.paa";
					};
					class 2
					{
						name="$STR_A3_orange_faction_idap_ihl_title";
						value="\a3\missions_f_orange\data\img\faction_idap\tv_field_manual_co.paa";
						picture="\a3\missions_f_orange\data\img\faction_idap\tv_field_manual_co.paa";
					};
				};
			};
		};
	};
	class Land_PCSet_01_screen_GameMaster_F: Land_PCSet_01_screen_EdenEditor_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_PCSet_01_screen_GameMaster_F.jpg";
		_generalMacro="Land_PCSet_01_screen_GameMaster_F";
		displayName="$STR_A3_Globe_CfgVehicles_Land_PCSet_01_screen_GameMaster_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\Data_F_Bootcamp\Data\FM_Learn_Bootcamp4_ca.paa"
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
	class Land_PCSet_01_screen_VirtualArsenal_F: Land_PCSet_01_screen_EdenEditor_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_PCSet_01_screen_VirtualArsenal_F.jpg";
		_generalMacro="Land_PCSet_01_screen_VirtualArsenal_F";
		displayName="$STR_A3_Globe_CfgVehicles_Land_PCSet_01_screen_VirtualArsenal_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\Data_F_Bootcamp\Data\FM_Learn_Bootcamp5_ca.paa"
		};
		class Attributes
		{
			class SwitchTexture
			{
				property="SwitchTexture";
				displayName="$STR_A3_expEden_Leaflet_05_announcements_Attributes_SwitchTexture_displayName_F0";
				control="Combo";
				expression="_this setObjectTextureGlobal [0, _value]";
				defaultValue="'\A3\Data_F_Bootcamp\Data\FM_Learn_Bootcamp5_ca.paa'";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="old";
						value="\A3\Data_F_Bootcamp\Data\FM_Learn_Bootcamp5_ca.paa";
						picture="\A3\Data_F_Bootcamp\Data\FM_Learn_Bootcamp5_ca.paa";
					};
					class 2
					{
						name="BIS_fnc_traceBullets";
						value="\A3\Data_F_Exp\Images\FeatureEquipment_co.paa";
						picture="\A3\Data_F_Exp\Images\FeatureEquipment_co.paa";
					};
				};
			};
		};
	};
	class Land_PCSet_01_screen_VRTraining_F: Land_PCSet_01_screen_EdenEditor_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_PCSet_01_screen_VRTraining_F.jpg";
		_generalMacro="Land_PCSet_01_screen_VRTraining_F";
		displayName="$STR_A3_Globe_CfgVehicles_Land_PCSet_01_screen_VRTraining_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\Data_F_Bootcamp\Data\FM_Learn_Bootcamp6_ca.paa"
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
	class Land_PCSet_01_screen_GameOptions_F: Land_PCSet_01_screen_EdenEditor_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_PCSet_01_screen_GameOptions_F.jpg";
		_generalMacro="Land_PCSet_01_screen_GameOptions_F";
		DLC="Expansion";
		displayName="$STR_A3_Globe_CfgVehicles_Land_PCSet_01_screen_GameOptions_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\Data_F_Exp\Images\FeatureDifficulty_ca.paa"
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
	class Land_PCSet_01_screen_MainMenu_F: Land_PCSet_01_screen_EdenEditor_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_PCSet_01_screen_MainMenu_F.jpg";
		_generalMacro="Land_PCSet_01_screen_MainMenu_F";
		DLC="Expansion";
		displayName="$STR_A3_Globe_CfgVehicles_Land_PCSet_01_screen_MainMenu_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\Data_F_Exp\Images\FeatureFonts_co.paa"
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
	class Land_PCSet_01_screen_DynamicGroups_F: Land_PCSet_01_screen_EdenEditor_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_PCSet_01_screen_DynamicGroups_F.jpg";
		_generalMacro="Land_PCSet_01_screen_DynamicGroups_F";
		DLC="Expansion";
		displayName="$STR_A3_Globe_CfgVehicles_Land_PCSet_01_screen_DynamicGroups_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\Data_F_Exp\Images\FeatureGroups_co.paa"
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
	class Land_PCSet_01_screen_Launcher_F: Land_PCSet_01_screen_EdenEditor_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_PCSet_01_screen_Launcher_F.jpg";
		_generalMacro="Land_PCSet_01_screen_Launcher_F";
		DLC="Expansion";
		displayName="$STR_A3_Globe_CfgVehicles_Land_PCSet_01_screen_Launcher_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\Data_F_Exp\Images\FeatureLauncher_co.paa"
		};
		class Attributes
		{
			class SwitchTexture
			{
				property="SwitchTexture";
				displayName="$STR_A3_expEden_Leaflet_05_announcements_Attributes_SwitchTexture_displayName_F0";
				control="Combo";
				expression="_this setObjectTextureGlobal [0, _value]";
				defaultValue="'\A3\Data_F_Exp\Images\FeatureLauncher_co.paa'";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="$STR_A3_rscdisplaymultiplayer_servers";
						value="\A3\Data_F_Exp\Images\FeatureLauncher_co.paa";
						picture="\A3\Data_F_Exp\Images\FeatureLauncher_co.paa";
					};
					class 2
					{
						name="$STR_A3_ModDependency1";
						value="\A3\Data_F_Exp_A\Data\FM_Learn_Nexus5_ca.paa";
						picture="\A3\Data_F_Exp_A\Data\FM_Learn_Nexus5_ca.paa";
					};
					class 3
					{
						name="mods";
						value="\A3\Data_F_Exp_B\Data\FM_Learn_LauncherServerBrowser_ca.paa";
						picture="\A3\Data_F_Exp_B\Data\FM_Learn_LauncherServerBrowser_ca.paa";
					};
				};
			};
		};
	};
	class Land_PCSet_01_screen_Quickplay_F: Land_PCSet_01_screen_EdenEditor_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_PCSet_01_screen_Quickplay_F.jpg";
		_generalMacro="Land_PCSet_01_screen_Quickplay_F";
		DLC="Expansion";
		displayName="$STR_A3_Globe_CfgVehicles_Land_PCSet_01_screen_Quickplay_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\Data_F_Exp\Images\FeatureQuickplay_co.paa"
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
	class Land_PCSet_01_screen_Respawn_F: Land_PCSet_01_screen_EdenEditor_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_PCSet_01_screen_Respawn_F.jpg";
		_generalMacro="Land_PCSet_01_screen_Respawn_F";
		DLC="Expansion";
		displayName="$STR_A3_Globe_CfgVehicles_Land_PCSet_01_screen_Respawn_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\Data_F_Exp\Images\FeatureRespawn_co.paa"
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
	class Land_PCSet_01_screen_Spectator_F: Land_PCSet_01_screen_EdenEditor_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_PCSet_01_screen_Spectator_F.jpg";
		_generalMacro="Land_PCSet_01_screen_Spectator_F";
		DLC="Expansion";
		displayName="$STR_A3_Globe_CfgVehicles_Land_PCSet_01_screen_Spectator_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\Data_F_Exp\Images\FeatureSpectator_co.paa"
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
	class Land_PCSet_01_screen_EndGame_F: Land_PCSet_01_screen_EdenEditor_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_PCSet_01_screen_EndGame_F.jpg";
		_generalMacro="Land_PCSet_01_screen_EndGame_F";
		DLC="Expansion";
		displayName="$STR_A3_Globe_CfgVehicles_Land_PCSet_01_screen_EndGame_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\Data_F_Exp_A\Data\FM_Learn_Nexus2_ca.paa"
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
	class Land_PCSet_01_screen_CombatAudio_F: Land_PCSet_01_screen_EdenEditor_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_PCSet_01_screen_CombatAudio_F.jpg";
		_generalMacro="Land_PCSet_01_screen_CombatAudio_F";
		DLC="Expansion";
		displayName="$STR_A3_Globe_CfgVehicles_Land_PCSet_01_screen_CombatAudio_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\Data_F_Exp_B\Data\FM_Learn_CombatAudio_ca.paa"
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
	class Land_Tablet_01_IDAP_F: Land_Tablet_01_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Tablet_01_IDAP_F.jpg";
		_generalMacro="Land_Tablet_01_IDAP_F";
		displayName="$STR_A3_Globe_CfgVehicles_Land_Tablet_01_IDAP_F0";
		DLC="AoW";
		hiddenSelectionsTextures[]=
		{
			"\A3\Missions_F_AoW\Data\Img\Textures\idap_tablet_co.paa"
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
	class Land_FlatTV_01_forecast_F: Items_base_F
	{
		author="O&T Expansion Eden";
		mapSize=0.93000001;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.31099999;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Land_FlatTV_01_forecast_F.jpg";
		_generalMacro="Land_FlatTV_01_forecast_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_expEden_FlatTV_01";
		model="\A3\Structures_F_Heli\Items\Electronics\FlatTV_01_F.p3d";
		DLC="Orange";
		icon="iconObject_5x1";
		editorSubcategory="EdSubcat_Electronics";
		hiddenSelections[]=
		{
			"Camo_1"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_forecast_01_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Data_F\Lights\Lamp_lcd.rvmat"
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
	class Land_Laptop_unfolded_AAN_01_F: Items_base_F
	{
		author="O&T Expansion Eden";
		mapSize=0.44999999;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.156;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Laptop_unfolded_AAN_01_F.jpg";
		_generalMacro="Land_Laptop_unfolded_AAN_01_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_Globe_CfgVehicles_Land_Laptop_unfolded_AAN_01_F0";
		model="\A3\Structures_F\Items\Electronics\Laptop_unfolded_F.p3d";
		icon="iconObject_3x2";
		editorSubcategory="EdSubcat_Electronics";
		cost=3000;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C8\aan_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Structures_F\Items\Electronics\Data\electronics_screens.rvmat"
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
		reversed=1;
		class EventHandlers
		{
			init="_this call expEden_fnc_showAANArticle1_init";
		};
	};
	class Land_Laptop_unfolded_AAN_02_F: Items_base_F
	{
		author="O&T Expansion Eden";
		mapSize=0.44999999;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.156;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Laptop_unfolded_AAN_02_F.jpg";
		_generalMacro="Land_Laptop_unfolded_AAN_02_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_Globe_CfgVehicles_Land_Laptop_unfolded_AAN_02_F0";
		model="\A3\Structures_F\Items\Electronics\Laptop_unfolded_F.p3d";
		icon="iconObject_3x2";
		editorSubcategory="EdSubcat_Electronics";
		cost=3000;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Missions_F_Orange\Data\Img\Faction_IDAP\laptop_campaign_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Structures_F\Items\Electronics\Data\electronics_screens.rvmat"
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
		reversed=1;
		class EventHandlers
		{
			init="_this call expEden_fnc_showAANArticle2_init;";
		};
	};
	class Transformer_enabled_01: Barracks_acc_proxy_1
	{
		author="O&T Expansion Eden";
		displayName="$STR_Globe_CfgVehicles_Transformer_enabled_010";
		simulation="fountain";
		sound="Transformer_enabled_Sound_03";
	};
	class Transformer_enabled_02: Barracks_acc_proxy_5
	{
		author="O&T Expansion Eden";
		displayName="$STR_Globe_CfgVehicles_Transformer_enabled_020";
		simulation="fountain";
		sound="Transformer_enabled_Sound_04";
	};
	class Transformer_enabled_Counter: Barracks_acc_proxy_2
	{
		author="O&T Expansion Eden";
		displayName="$STR_Globe_CfgVehicles_Transformer_enabled_Counter0";
		simulation="fountain";
		sound="Transformer_enabled_Sound_02";
	};
	class Portable_generator_enabled: Land_Portable_generator_F
	{
		author="O&T Expansion Eden";
		_generalMacro="Portable_generator_enabled";
		displayName="$STR_Globe_cfgVehicles_Portable_generator_enabled0";
		class EventHandlers
		{
			postInit="(_this # 0) call expEden_fnc_createSoundSetSource";
			killed="deleteVehicle ((_this # 0) getVariable 'Globe_soundSource');";
			deleted="deleteVehicle ((_this # 0) getVariable 'Globe_soundSource');";
			unregisteredFromWorld3DEN="deleteVehicle ((_this # 0) getVariable 'Globe_soundSource');";
		};
	};
	class Land_PCSet_01_screen_random_F: Land_PCSet_01_screen_EdenEditor_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_PCSet_01_screen_EdenEditor_F.jpg";
		_generalMacro="Land_PCSet_01_screen_random_F";
		displayName="$STR_Globe_CfgVehicles_Land_PCSet_01_screen_random_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\Missions_F_Beta\data\img\monitors\tablet_fd14_3_co.paa"
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
		class EventHandlers
		{
			class Globe_PCSetScreenEH
			{
				hitPart="((_this # 0) # 0) setObjectTextureGlobal [0, 'a3\missions_f_exp\data\img\exp_m01_monitor_ca.paa'];";
			};
			init="_this call compile preprocessFileLineNumbers 'A3\Structures_F_Globe\Items\Electronics\Scripts\randomizeScreen.sqf'";
		};
	};
	class Land_PortableLongRangeRadioMilitary_F: Items_base_F
	{
		author="O&T Expansion Eden";
		mapSize=0.19;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.019000001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Land_PortableLongRangeRadioMilitary_F.jpg";
		_generalMacro="Land_PortableLongRangeRadioMilitary_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_expEden_Land_PortableLongRangeRadioMilitary_F";
		model="\A3\characters_f\BLUFOR\radio_b.p3d";
		icon="iconObject_1x3";
		editorSubcategory="EdSubcat_Electronics";
		cost=1000;
	};
	class PortableLongRangeRadioMilitary_RadioChatEng: Land_PortableLongRangeRadioMilitary_F
	{
		author="O&T Expansion Eden";
		_generalMacro="PortableLongRangeRadioMilitary_RadioChatEng";
		displayName="$STR_Globe_CfgVehicles_PortableLongRangeRadioMilitary_RadioChat0";
		class EventHandlers
		{
			postInit="(_this # 0) call expEden_fnc_radioChatterEng;";
			killed="deleteVehicle ((_this # 0) getVariable 'Globe_soundSource');";
			deleted="deleteVehicle ((_this # 0) getVariable 'Globe_soundSource');";
			unregisteredFromWorld3DEN="deleteVehicle ((_this # 0) getVariable 'Globe_soundSource');";
		};
	};
	class PortableLongRangeRadioMilitary_RadioChatChi: PortableLongRangeRadioMilitary_RadioChatEng
	{
		_generalMacro="PortableLongRangeRadioMilitary_RadioChatChi";
		displayName="$STR_Globe_CfgVehicles_PortableLongRangeRadioMilitary_RadioChat1";
		class EventHandlers: EventHandlers
		{
			postInit="(_this # 0) call expEden_fnc_radioChatterChi;";
		};
	};
	class PortableLongRangeRadio_RadioChatEngF: Land_PortableLongRangeRadio_F
	{
		author="O&T Expansion Eden";
		_generalMacro="PortableLongRangeRadio_RadioChatEngF";
		displayName="$STR_Globe_CfgVehicles_PortableLongRangeRadioMilitary_RadioChat2";
		class EventHandlers
		{
			postInit="(_this # 0) call expEden_fnc_radioChatterEngF;";
			killed="deleteVehicle ((_this # 0) getVariable 'Globe_soundSource');";
			deleted="deleteVehicle ((_this # 0) getVariable 'Globe_soundSource');";
			unregisteredFromWorld3DEN="deleteVehicle ((_this # 0) getVariable 'Globe_soundSource');";
		};
	};
	class FMradio_sportGame_01: Land_FMradio_F
	{
		_generalMacro="FMradio_sportGame";
		displayName="$STR_A3_CfgVehicles_FMradio_sportGame_010";
		class EventHandlers
		{
			postInit="(_this # 0) call expEden_fnc_createSoundSetSource";
			killed="deleteVehicle ((_this # 0) getVariable 'Globe_soundSource');";
			deleted="deleteVehicle ((_this # 0) getVariable 'Globe_soundSource');";
			unregisteredFromWorld3DEN="deleteVehicle ((_this # 0) getVariable 'Globe_soundSource');";
		};
		class Attributes
		{
		};
	};
	class Land_PCSet_01_SoftwareReboot_F: Land_PCSet_01_screen_EdenEditor_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Land_PCSet_01_SoftwareReboot_F.jpg";
		_generalMacro="Land_PCSet_01_SoftwareReboot_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_expEden_Land_PCSet_01_SoftwareReboot_F";
		DLC="Oldman";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_oldman\Data\img\Screens\CSATNtbReboot25_co.paa"
		};
		class Attributes
		{
			class RebootProgress
			{
				displayName="$STR_expEden_Land_PCSet_01_SoftwareReboot_progress_animation_F";
				tooltip="Cyclic animation change, it never ends";
				property="RebootProgress";
				control="Checkbox";
				defaultValue="false";
				expression="if (_value) then {_this spawn expEden_fnc_PCSetRebooting}";
			};
			class SwitchTexture
			{
				property="SwitchTexture";
				displayName="$STR_expEden_Land_PCSet_01_SoftwareReboot_progress_F";
				control="Combo";
				expression="_this setObjectTextureGlobal [0, _value]";
				defaultValue="'\A3\missions_f_oldman\Data\img\Screens\CSATNtbReboot25_co.paa'";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="$STR_expEden_Land_PCSet_01_SoftwareReboot_progress25_F";
						value="\A3\missions_f_oldman\Data\img\Screens\CSATNtbReboot25_co.paa";
						picture="\A3\missions_f_oldman\Data\img\Screens\CSATNtbReboot25_co.paa";
					};
					class 2
					{
						name="$STR_expEden_Land_PCSet_01_SoftwareReboot_progress50_F";
						value="\A3\missions_f_oldman\Data\img\Screens\CSATNtbReboot50_co.paa";
						picture="\A3\missions_f_oldman\Data\img\Screens\CSATNtbReboot50_co.paa";
					};
					class 3
					{
						name="$STR_expEden_Land_PCSet_01_SoftwareReboot_progress75_F";
						value="\A3\missions_f_oldman\Data\img\Screens\CSATNtbReboot75_co.paa";
						picture="\A3\missions_f_oldman\Data\img\Screens\CSATNtbReboot75_co.paa";
					};
				};
			};
		};
		class EventHandlers: EventHandlers
		{
			class Globe_PCSetScreenEH
			{
				hitPart="if (isDamageAllowed ((_this # 0) # 0)) then {((_this # 0) # 0) setObjectTextureGlobal [0, 'a3\missions_f_exp\data\img\exp_m01_monitor_ca.paa']; ((_this # 0) # 0) setDamage 1};";
			};
		};
	};
	class Land_PCSet_01_CSAT_turrets_F: Land_PCSet_01_screen_EdenEditor_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Land_PCSet_01_CSAT_turrets_F.jpg";
		_generalMacro="Land_PCSet_01_CSAT_turrets_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_expEden_Land_PCSet_01_CSAT_turrets_F";
		DLC="Oldman";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_oldman\Data\img\Screens\CSATNtbTurretsOnline_co.paa"
		};
		class Attributes
		{
			class SwitchTexture
			{
				property="SwitchTexture";
				displayName="$STR_expEden_Land_PCSet_01_CSAT_turrets_status_F";
				control="Combo";
				expression="_this setObjectTextureGlobal [0, _value]";
				defaultValue="'\A3\missions_f_oldman\Data\img\Screens\CSATNtbTurretsOnline_co.paa'";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="$STR_ENABLED";
						value="\A3\missions_f_oldman\Data\img\Screens\CSATNtbTurretsOnline_co.paa";
						picture="\A3\missions_f_oldman\Data\img\Screens\CSATNtbTurretsOnline_co.paa";
					};
					class 2
					{
						name="$STR_DISABLE_CONTROLLER";
						value="\A3\missions_f_oldman\Data\img\Screens\CSATNtbTurretsOffline_co.paa";
						picture="\A3\missions_f_oldman\Data\img\Screens\CSATNtbTurretsOffline_co.paa";
					};
				};
			};
		};
	};
	class Land_PCSet_01_cameraError_F: Land_PCSet_01_screen_EdenEditor_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Land_PCSet_01_cameraError_F.jpg";
		_generalMacro="Land_PCSet_01_cameraError_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_expEden_Land_PCSet_01_cameraError_F";
		DLC="Tank";
		hiddenSelectionsTextures[]=
		{
			"\A3\armor_f\data\pip_cover_csat_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\armor_f\data\pip_screens.rvmat"
		};
		class Attributes
		{
			class SwitchTexture
			{
				property="SwitchTexture";
				displayName="$STR_EVAL_TYPESIDE";
				control="Combo";
				expression="_this setObjectTextureGlobal [0, _value]";
				defaultValue="'\A3\armor_f\data\pip_cover_csat_co.paa'";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="$STR_A3_CFGFACTIONCLASSES_OPF_F0";
						value="\A3\armor_f\data\pip_cover_csat_co.paa";
						picture="\A3\armor_f\data\pip_cover_csat_co.paa";
					};
					class 2
					{
						name="$STR_A3_CFGFACTIONCLASSES_IND_F0";
						value="\A3\armor_f\data\pip_cover_indp_co.paa";
						picture="\A3\armor_f\data\pip_cover_indp_co.paa";
					};
					class 3
					{
						name="$STR_A3_CFGFACTIONCLASSES_IND_F0";
						value="\A3\armor_f\data\pip_cover_indp1_co.paa";
						picture="\A3\armor_f\data\pip_cover_indp1_co.paa";
					};
					class 4
					{
						name="$STR_A3_CFGFACTIONCLASSES_BLU_F0";
						value="\A3\armor_f\data\pip_cover_nato_co.paa";
						picture="\A3\armor_f\data\pip_cover_nato_co.paa";
					};
				};
			};
		};
	};
	class Land_PCSet_01_screen_TOH_F: Land_PCSet_01_screen_EdenEditor_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Land_PCSet_01_screen_TOH_F.jpg";
		_generalMacro="Land_PCSet_01_screen_TOH_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_expEden_Land_PCSet_01_screen_TOH_F";
		DLC="Orange";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_orange\data\img\orange_compositions\n4\n4_screencenter.paa"
		};
		class Attributes
		{
			class SwitchTexture
			{
				property="SwitchTexture";
				displayName="$STR_expEden_Land_PCSet_01_screen_TOH_select_F";
				control="Combo";
				expression="_this setObjectTextureGlobal [0, _value]";
				defaultValue="'\A3\missions_f_orange\data\img\orange_compositions\n4\n4_screencenter.paa'";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="$STR_expEden_Land_PCSet_01_screen_TOH_select_01_F";
						value="\A3\missions_f_orange\data\img\orange_compositions\n4\n4_screencenter.paa";
						picture="\A3\missions_f_orange\data\img\orange_compositions\n4\n4_screencenter.paa";
					};
					class 2
					{
						name="$STR_CAMEFFECT_LEFT";
						value="\A3\missions_f_orange\data\img\orange_compositions\n4\n4_screenleft.paa";
						picture="\A3\missions_f_orange\data\img\orange_compositions\n4\n4_screenleft.paa";
					};
					class 3
					{
						name="$STR_CAMEFFECT_RIGHT";
						value="\A3\missions_f_orange\data\img\orange_compositions\n4\n4_screenright.paa";
						picture="\A3\missions_f_orange\data\img\orange_compositions\n4\n4_screenright.paa";
					};
				};
			};
		};
	};
	class Land_PCSet_01_WinUpd_F: Land_PCSet_01_screen_EdenEditor_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Land_PCSet_01_WinUpd_F.jpg";
		_generalMacro="Land_PCSet_01_WinUpd_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_expEden_Land_PCSet_01_WinUpd_F";
		DLC="Orange";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_orange\Data\Img\Showcase_LawsOfWar\monitor_vr_updating_na_CO.paa"
		};
		class Attributes
		{
		};
	};
	class Land_PCSet_01_vrSims_F: Land_PCSet_01_screen_EdenEditor_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Land_PCSet_01_vrSims_F.jpg";
		_generalMacro="Land_PCSet_01_vrSims_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_expEden_Land_PCSet_01_vrSims_F";
		DLC="Orange";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_orange\Data\Img\Showcase_LawsOfWar\monitor_vr_sim1_CO.paa"
		};
		class Attributes
		{
			class SwitchTexture
			{
				property="SwitchTexture";
				displayName="$STR_A3_VR_SELECT_COURSE";
				control="Combo";
				expression="_this setObjectTextureGlobal [0, _value]";
				defaultValue="'\A3\missions_f_orange\Data\Img\Showcase_LawsOfWar\monitor_vr_sim1_CO.paa'";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="$STR_A3_ORANGE_SHOWCASE_LAWSOFWAR_TASK_SIM1_SHORT";
						value="\A3\missions_f_orange\Data\Img\Showcase_LawsOfWar\monitor_vr_sim1_CO.paa";
						picture="\A3\missions_f_orange\Data\Img\Showcase_LawsOfWar\monitor_vr_sim1_CO.paa";
					};
					class 2
					{
						name="$STR_A3_ORANGE_SHOWCASE_LAWSOFWAR_TASK_SIM1_SHORT_na";
						value="\A3\missions_f_orange\Data\Img\Showcase_LawsOfWar\monitor_vr_sim1_na_CO.paa";
						picture="\A3\missions_f_orange\Data\Img\Showcase_LawsOfWar\monitor_vr_sim1_na_CO.paa";
					};
					class 3
					{
						name="$STR_A3_ORANGE_SHOWCASE_LAWSOFWAR_TASK_SIM2_SHORT";
						value="\A3\missions_f_orange\Data\Img\Showcase_LawsOfWar\monitor_vr_sim2_CO.paa";
						picture="\A3\missions_f_orange\Data\Img\Showcase_LawsOfWar\monitor_vr_sim2_CO.paa";
					};
					class 4
					{
						name="$STR_A3_ORANGE_SHOWCASE_LAWSOFWAR_TASK_SIM2_SHORT_na";
						value="\A3\missions_f_orange\Data\Img\Showcase_LawsOfWar\monitor_vr_sim2_na_CO.paa";
						picture="\A3\missions_f_orange\Data\Img\Showcase_LawsOfWar\monitor_vr_sim2_na_CO.paa";
					};
					class 5
					{
						name="$STR_A3_ORANGE_SHOWCASE_LAWSOFWAR_TASK_SIM3_SHORT";
						value="\A3\missions_f_orange\Data\Img\Showcase_LawsOfWar\monitor_vr_sim3_CO.paa";
						picture="\A3\missions_f_orange\Data\Img\Showcase_LawsOfWar\monitor_vr_sim3_CO.paa";
					};
					class 6
					{
						name="$STR_A3_ORANGE_SHOWCASE_LAWSOFWAR_TASK_SIM3_SHORT_na";
						value="\A3\missions_f_orange\Data\Img\Showcase_LawsOfWar\monitor_vr_sim3_na_CO.paa";
						picture="\A3\missions_f_orange\Data\Img\Showcase_LawsOfWar\monitor_vr_sim3_na_CO.paa";
					};
				};
			};
		};
	};
	class PortableLongRangeRadioMilitary_RadioChatFas: PortableLongRangeRadioMilitary_RadioChatEng
	{
		author="O&T Expansion Eden";
		_generalMacro="PortableLongRangeRadioMilitary_RadioChatFas";
		displayName="$STR_Globe_CfgVehicles_PortableLongRangeRadioMilitary_RadioChat3";
		class EventHandlers: EventHandlers
		{
			postInit="(_this # 0) call expEden_fnc_radioChatterFas;";
		};
	};
	class Land_PowerGenerator_on: Land_PowerGenerator_F
	{
		author="O&T Expansion Eden";
		_generalMacro="Land_PowerGenerator_on";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_PowerGenerator_on0";
		class EventHandlers
		{
			postInit="(_this # 0) call expEden_fnc_createSoundSetSource";
			killed="deleteVehicle ((_this # 0) getVariable 'Globe_soundSource');";
			deleted="deleteVehicle ((_this # 0) getVariable 'Globe_soundSource');";
			unregisteredFromWorld3DEN="deleteVehicle ((_this # 0) getVariable 'Globe_soundSource');";
		};
	};
	class PortableLongRangeRadioMilitary_EmptyAir: Land_PortableLongRangeRadioMilitary_F
	{
		author="O&T Expansion Eden";
		_generalMacro="PortableLongRangeRadioMilitary_EmptyAir";
		displayName="$STR_Globe_CfgVehicles_PortableLongRangeRadioMilitary_EmptyAir0";
		class EventHandlers
		{
			postInit="(_this # 0) call expEden_fnc_createSoundSetSource;";
			killed="deleteVehicle ((_this # 0) getVariable 'Globe_soundSource');";
			deleted="deleteVehicle ((_this # 0) getVariable 'Globe_soundSource');";
			unregisteredFromWorld3DEN="deleteVehicle ((_this # 0) getVariable 'Globe_soundSource');";
		};
	};
	class PortableLongRangeRadio_EmptyAir: Land_PortableLongRangeRadio_F
	{
		author="O&T Expansion Eden";
		_generalMacro="PortableLongRangeRadio_EmptyAir";
		displayName="$STR_Globe_CfgVehicles_PortableLongRangeRadio_EmptyAir0";
		class EventHandlers
		{
			postInit="(_this # 0) call expEden_fnc_createSoundSetSource;";
			killed="deleteVehicle ((_this # 0) getVariable 'Globe_soundSource');";
			deleted="deleteVehicle ((_this # 0) getVariable 'Globe_soundSource');";
			unregisteredFromWorld3DEN="deleteVehicle ((_this # 0) getVariable 'Globe_soundSource');";
		};
	};
	class PortableLongRangeRadioMilitary_RadioChatEngA_01_G: Land_PortableLongRangeRadioMilitary_F
	{
		author="O&T Expansion Eden";
		_generalMacro="PortableLongRangeRadioMilitary_RadioChatEngA_01_G";
		displayName="$STR_Globe_CfgVehicles_PortableLongRangeRadioMilitary_RadioChatEngA_01_G0";
		class EventHandlers
		{
			postInit="(_this # 0) call expEden_fnc_radioChatterAltian;";
			killed="deleteVehicle ((_this # 0) getVariable 'Globe_soundSource');";
			deleted="deleteVehicle ((_this # 0) getVariable 'Globe_soundSource');";
			unregisteredFromWorld3DEN="deleteVehicle ((_this # 0) getVariable 'Globe_soundSource');";
		};
	};
	class PortableLongRangeRadio_RadioChatEngC_01_G: Land_PortableLongRangeRadio_F
	{
		author="O&T Expansion Eden";
		_generalMacro="PortableLongRangeRadio_RadioChatEngC_01_G";
		displayName="$STR_Globe_CfgVehicles_PortableLongRangeRadio_RadioChatEngC_01_G0";
		class EventHandlers
		{
			postInit="(_this # 0) call expEden_fnc_radioChatterEngC;";
			killed="deleteVehicle ((_this # 0) getVariable 'Globe_soundSource');";
			deleted="deleteVehicle ((_this # 0) getVariable 'Globe_soundSource');";
			unregisteredFromWorld3DEN="deleteVehicle ((_this # 0) getVariable 'Globe_soundSource');";
		};
	};
	class PortableLongRangeRadio_RadioChatEngFCiv_01_G: Land_PortableLongRangeRadio_F
	{
		author="O&T Expansion Eden";
		_generalMacro="PortableLongRangeRadio_RadioChatEngFCiv_01_G";
		displayName="$STR_Globe_CfgVehicles_PortableLongRangeRadio_RadioChatEngFCiv_01_G0";
		class EventHandlers
		{
			postInit="(_this # 0) call expEden_fnc_radioChatterEngFCiv;";
			killed="deleteVehicle ((_this # 0) getVariable 'Globe_soundSource');";
			deleted="deleteVehicle ((_this # 0) getVariable 'Globe_soundSource');";
			unregisteredFromWorld3DEN="deleteVehicle ((_this # 0) getVariable 'Globe_soundSource');";
		};
	};
};
