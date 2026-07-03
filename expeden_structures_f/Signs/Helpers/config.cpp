class CfgPatches
{
	class Structures_Globe_Signs_Helpers
	{
		addonRootClass="A3_Structures_F_Globe";
		requiredAddons[]=
		{
			"Structures_Globe_Signs"
		};
		requiredVersion=0.1;
		units[]=
		{
			"VaporConeCloud_01_G",
			"SoundSetSource_Sfx_portableGenerator",
			"SoundSetSource_Sfx_Water_source_on",
			"SoundSetSource_Sfx_RadioSportGame_01",
			"UserTexture1m_textTamplate",
			"Sign_SphereSkyObject",
			"BrokenGlassPart_01",
			"BrokenGlassPart_02",
			"BrokenGlassPart_03",
			"BrokenGlassPart_04",
			"BrokenGlassPart_05",
			"BrokenGlassPart_06",
			"BrokenGlassPart_07",
			"muzzle_flash_VTOL_01_armed",
			"muzzle_flash_ArtySPG",
			"muzzle_flash_MBTs",
			"muzzle_flash_APC_Tracked_01_AA",
			"muzzle_flash_HMG_02",
			"muzzle_flash_m134minigun",
			"muzzle_flash_HMG_01",
			"muzzle_flash_GMG_01",
			"muzzle_flash_Sparks",
			"muzzle_flash_hgun_ACPC2",
			"muzzle_flash_hgun_Pistol_Signal",
			"muzzle_flash_hgun_Pistol_heavy_01",
			"muzzle_flash_hgun_P07",
			"muzzle_flash_hgun",
			"muzzle_flash_hgun_TEMPTITLE",
			"muzzle_flash_sgun_AA12",
			"muzzle_flash_SMG_01",
			"muzzle_flash_sgun_KSG",
			"muzzle_flash_sgun_M4",
			"muzzle_flash_LMG_Mk200",
			"muzzle_flash_arifle_Mk20",
			"muzzle_flash_arifle_Mx25",
			"muzzle_flash_hgun_PDW2000",
			"muzzle_flash_arifle_SDAR",
			"muzzle_flash_SMG_02",
			"muzzle_flash_arifle_TRG",
			"muzzle_flash_Missile_SAAMI",
			"muzzle_flash_Missile_AA_9x",
			"muzzle_flash_Missile_AGM_65",
			"muzzle_flash_Missile_Zephyr",
			"muzzle_flash_Suppressor_v1",
			"muzzle_flash_Suppressor_v2",
			"muzzle_flash_01",
			"muzzle_flash_02",
			"muzzle_flash_03",
			"Leaf_01",
			"Leaf_01_green",
			"Twig_01",
			"Twig_01_green",
			"Debris_Stone_01",
			"Debris_Metal_01",
			"Debris_Metal_burnt_01",
			"Debris_Metal_burnt_02",
			"Debris_Metal_burnt_03",
			"Sparks_01",
			"Wheat_01",
			"Wheat_01_seed",
			"WoodChip_01"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class SoundSetSource_01_base_F;
	class NonStrategic;
	class Items_base_F;
	class Helper_Base_F;
	class muzzle_flash_VTOL_01_armed: Helper_Base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		mapSize=0.28999999;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.373;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\muzzle_flash_VTOL_01_armed.jpg";
		_generalMacro="muzzle_flash_VTOL_01_armed";
		scope=2;
		displayName="$STR_Globe_CfgVehicles_muzzle_flash_VTOL_01_armed0";
		model="\a3\data_f\proxies\muzzle_Flash\mf_armor_blackfish.p3d";
		icon="iconObject_1x1";
		accuracy=1000;
		class Attributes
		{
			class CreateLightMuzzleFlash
			{
				property="CreateLightMuzzleFlash";
				control="Checkbox";
				displayName="$STR_Globe_CfgVehicles_muzzle_flash_VTOL_01_armed_Attributes_CreateLightMuzzleFlash_displayName0";
				tooltip="$STR_Globe_CfgVehicles_muzzle_flash_VTOL_01_armed_Attributes_CreateLightMuzzleFlash_tooltip0";
				expression="_this setVariable ['Globe_objLightExec',_value,isServer]";
				defaultValue=1;
			};
			class CreateLightMuzzleFlashCustom
			{
				property="CreateLightMuzzleFlashCustom";
				control="edit";
				typeName="STRING";
				displayName="$STR_Globe_CfgVehicles_muzzle_flash_VTOL_01_armed_Attributes_CreateLightMuzzleFlashCustom_displayName0";
				tooltip="$STR_Globe_CfgVehicles_muzzle_flash_VTOL_01_armed_Attributes_CreateLightMuzzleFlashCustom_tooltip0";
				expression="_this setVariable ['Globe_objLightCstm',_value,isServer]";
				defaultValue="''";
			};
		};
		class EventHandlers
		{
			class Globe_mzlFlLightEH
			{
				postInit="[(_this # 0), ((_this # 0) getVariable ['Globe_objLightCstm','FiredLightMed'])] call expEden_fnc_createMuzzleFlashLight;";
				killed="deleteVehicle ((_this # 0) getVariable 'Globe_objLight')";
				deleted="deleteVehicle ((_this # 0) getVariable 'Globe_objLight')";
				unregisteredFromWorld3DEN="deleteVehicle ((_this # 0) getVariable 'Globe_objLight')";
			};
		};
	};
	class muzzle_flash_ArtySPG: muzzle_flash_VTOL_01_armed
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\muzzle_flash_ArtySPG.jpg";
		_generalMacro="muzzle_flash_ArtySPG";
		displayName="$STR_Globe_CfgVehicles_muzzle_flash_ArtySPG0";
		model="\a3\data_f\proxies\muzzle_Flash\mf_armor_m4.p3d";
		class EventHandlers: EventHandlers
		{
			class Globe_mzlFlLightEH: Globe_mzlFlLightEH
			{
				postInit="[(_this # 0), ((_this # 0) getVariable ['Globe_objLightCstm','FiredLightMed'])] call expEden_fnc_createMuzzleFlashLight;";
			};
		};
	};
	class muzzle_flash_MBTs: muzzle_flash_VTOL_01_armed
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\muzzle_flash_MBTs.jpg";
		_generalMacro="muzzle_flash_MBTs";
		displayName="$STR_Globe_CfgVehicles_muzzle_flash_MBTs0";
		model="\a3\data_f\proxies\muzzle_Flash\mf_armor_mbts.p3d";
		class EventHandlers: EventHandlers
		{
			class Globe_mzlFlLightEH: Globe_mzlFlLightEH
			{
				postInit="[(_this # 0), ((_this # 0) getVariable ['Globe_objLightCstm','FiredLightCannon'])] call expEden_fnc_createMuzzleFlashLight;";
			};
		};
	};
	class muzzle_flash_APC_Tracked_01_AA: muzzle_flash_VTOL_01_armed
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\muzzle_flash_APC_Tracked_01_AA.jpg";
		_generalMacro="muzzle_flash_APC_Tracked_01_AA";
		displayName="$STR_Globe_CfgVehicles_muzzle_flash_APC_Tracked_01_AA0";
		model="\a3\data_f\proxies\muzzle_Flash\mf_machinegun_cheetah.p3d";
		class EventHandlers: EventHandlers
		{
			class Globe_mzlFlLightEH: Globe_mzlFlLightEH
			{
				postInit="[(_this # 0), ((_this # 0) getVariable ['Globe_objLightCstm','FiredLightSmall'])] call expEden_fnc_createMuzzleFlashLight;";
			};
		};
	};
	class muzzle_flash_HMG_02: muzzle_flash_VTOL_01_armed
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\muzzle_flash_HMG_02.jpg";
		_generalMacro="muzzle_flash_HMG_02";
		displayName="$STR_Globe_CfgVehicles_muzzle_flash_HMG_020";
		model="\a3\data_f\proxies\muzzle_Flash\mf_machinegun_m2_50.p3d";
		class EventHandlers: EventHandlers
		{
			class Globe_mzlFlLightEH: Globe_mzlFlLightEH
			{
				postInit="[(_this # 0), ((_this # 0) getVariable ['Globe_objLightCstm','FiredLightSmall'])] call expEden_fnc_createMuzzleFlashLight;";
			};
		};
	};
	class muzzle_flash_m134minigun: muzzle_flash_VTOL_01_armed
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\muzzle_flash_m134minigun.jpg";
		_generalMacro="muzzle_flash_m134minigun";
		displayName="$STR_Globe_CfgVehicles_muzzle_flash_m134minigun0";
		model="\a3\data_f\proxies\muzzle_Flash\mf_machinegun_m134minigun.p3d";
		class EventHandlers: EventHandlers
		{
			class Globe_mzlFlLightEH: Globe_mzlFlLightEH
			{
				postInit="[(_this # 0), ((_this # 0) getVariable ['Globe_objLightCstm','FiredLightSmall'])] call expEden_fnc_createMuzzleFlashLight;";
			};
		};
	};
	class muzzle_flash_HMG_01: muzzle_flash_VTOL_01_armed
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\muzzle_flash_HMG_01.jpg";
		_generalMacro="muzzle_flash_HMG_01";
		displayName="$STR_Globe_CfgVehicles_muzzle_flash_HMG_010";
		model="\a3\data_f\proxies\muzzle_Flash\mf_machinegun_mk30.p3d";
		class EventHandlers: EventHandlers
		{
			class Globe_mzlFlLightEH: Globe_mzlFlLightEH
			{
				postInit="[(_this # 0), ((_this # 0) getVariable ['Globe_objLightCstm','FiredLightSmall'])] call expEden_fnc_createMuzzleFlashLight;";
			};
		};
	};
	class muzzle_flash_GMG_01: muzzle_flash_VTOL_01_armed
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\muzzle_flash_GMG_01.jpg";
		_generalMacro="muzzle_flash_GMG_01";
		displayName="$STR_Globe_CfgVehicles_muzzle_flash_GMG_010";
		model="\a3\data_f\proxies\muzzle_Flash\mf_machinegun_mk32.p3d";
		class EventHandlers: EventHandlers
		{
			class Globe_mzlFlLightEH: Globe_mzlFlLightEH
			{
				postInit="[(_this # 0), ((_this # 0) getVariable ['Globe_objLightCstm','FiredLightSmall'])] call expEden_fnc_createMuzzleFlashLight;";
			};
		};
	};
	class muzzle_flash_Sparks: muzzle_flash_VTOL_01_armed
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\muzzle_flash_Sparks.jpg";
		_generalMacro="muzzle_flash_Sparks";
		displayName="$STR_Globe_CfgVehicles_muzzle_flash_Sparks0";
		model="\a3\data_f\proxies\muzzle_Flash\mf_sparks_02.p3d";
		class EventHandlers: EventHandlers
		{
			class Globe_mzlFlLightEH: Globe_mzlFlLightEH
			{
				postInit="[(_this # 0), ((_this # 0) getVariable ['Globe_objLightCstm','SparksLight'])] call expEden_fnc_createMuzzleFlashLight;";
			};
		};
	};
	class muzzle_flash_hgun_ACPC2: muzzle_flash_VTOL_01_armed
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\muzzle_flash_hgun_ACPC2.jpg";
		_generalMacro="muzzle_flash_hgun_ACPC2";
		displayName="$STR_Globe_CfgVehicles_muzzle_flash_hgun_ACPC20";
		model="\a3\data_f\proxies\muzzle_Flash\muzzle_flash_pistol_acp.p3d";
		class EventHandlers: EventHandlers
		{
			class Globe_mzlFlLightEH: Globe_mzlFlLightEH
			{
				postInit="[(_this # 0), ((_this # 0) getVariable ['Globe_objLightCstm','FiredLightSmall'])] call expEden_fnc_createMuzzleFlashLight;";
			};
		};
	};
	class muzzle_flash_hgun_Pistol_Signal: muzzle_flash_VTOL_01_armed
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\muzzle_flash_hgun_Pistol_Signal.jpg";
		_generalMacro="muzzle_flash_hgun_Pistol_Signal";
		displayName="$STR_Globe_CfgVehicles_muzzle_flash_hgun_Pistol_Signal0";
		model="\a3\data_f\proxies\muzzle_flash\muzzle_flash_pistol_flaregun.p3d";
		class EventHandlers: EventHandlers
		{
			class Globe_mzlFlLightEH: Globe_mzlFlLightEH
			{
				postInit="[(_this # 0), ((_this # 0) getVariable ['Globe_objLightCstm','FiredLightSmall'])] call expEden_fnc_createMuzzleFlashLight;";
			};
		};
	};
	class muzzle_flash_hgun_Pistol_heavy_01: muzzle_flash_VTOL_01_armed
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\muzzle_flash_hgun_Pistol_heavy_01.jpg";
		_generalMacro="muzzle_flash_hgun_Pistol_heavy_01";
		displayName="$STR_Globe_CfgVehicles_muzzle_flash_hgun_Pistol_heavy_010";
		model="\a3\data_f\proxies\muzzle_flash\muzzle_flash_pistol_mk26.p3d";
		class EventHandlers: EventHandlers
		{
			class Globe_mzlFlLightEH: Globe_mzlFlLightEH
			{
				postInit="[(_this # 0), ((_this # 0) getVariable ['Globe_objLightCstm','FiredLightSmall'])] call expEden_fnc_createMuzzleFlashLight;";
			};
		};
	};
	class muzzle_flash_hgun_P07: muzzle_flash_VTOL_01_armed
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\muzzle_flash_hgun_P07.jpg";
		_generalMacro="muzzle_flash_hgun_P07";
		displayName="$STR_Globe_CfgVehicles_muzzle_flash_hgun_P070";
		model="\a3\data_f\proxies\muzzle_flash\muzzle_flash_pistol_p07.p3d";
		class EventHandlers: EventHandlers
		{
			class Globe_mzlFlLightEH: Globe_mzlFlLightEH
			{
				postInit="[(_this # 0), ((_this # 0) getVariable ['Globe_objLightCstm','FiredLightSmall'])] call expEden_fnc_createMuzzleFlashLight;";
			};
		};
	};
	class muzzle_flash_hgun: muzzle_flash_VTOL_01_armed
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\muzzle_flash_hgun.jpg";
		_generalMacro="muzzle_flash_hgun";
		displayName="$STR_Globe_CfgVehicles_muzzle_flash_hgun0";
		model="\a3\data_f\proxies\muzzle_flash\muzzle_flash_pistol.p3d";
		class EventHandlers: EventHandlers
		{
			class Globe_mzlFlLightEH: Globe_mzlFlLightEH
			{
				postInit="[(_this # 0), ((_this # 0) getVariable ['Globe_objLightCstm','FiredLightSmall'])] call expEden_fnc_createMuzzleFlashLight;";
			};
		};
	};
	class muzzle_flash_hgun_TEMPTITLE: muzzle_flash_VTOL_01_armed
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\muzzle_flash_hgun_TEMPTITLE.jpg";
		_generalMacro="muzzle_flash_hgun_TEMPTITLE";
		displayName="$STR_Globe_CfgVehicles_muzzle_flash_hgun_TEMPTITLE0";
		model="\a3\data_f\proxies\muzzle_flash\muzzle_flash_pistol_ruger.p3d";
		class EventHandlers: EventHandlers
		{
			class Globe_mzlFlLightEH: Globe_mzlFlLightEH
			{
				postInit="[(_this # 0), ((_this # 0) getVariable ['Globe_objLightCstm','FiredLightSmall'])] call expEden_fnc_createMuzzleFlashLight;";
			};
		};
	};
	class muzzle_flash_sgun_AA12: muzzle_flash_VTOL_01_armed
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\muzzle_flash_sgun_AA12.jpg";
		_generalMacro="muzzle_flash_sgun_AA12";
		displayName="$STR_Globe_CfgVehicles_muzzle_flash_sgun_AA120";
		model="\a3\data_f\proxies\muzzle_flash\muzzle_flash_rifle_aa40.p3d";
		class EventHandlers: EventHandlers
		{
			class Globe_mzlFlLightEH: Globe_mzlFlLightEH
			{
				postInit="[(_this # 0), ((_this # 0) getVariable ['Globe_objLightCstm','FiredLightSmall'])] call expEden_fnc_createMuzzleFlashLight;";
			};
		};
	};
	class muzzle_flash_SMG_01: muzzle_flash_VTOL_01_armed
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\muzzle_flash_SMG_01.jpg";
		_generalMacro="muzzle_flash_SMG_01";
		displayName="$STR_Globe_CfgVehicles_muzzle_flash_SMG_010";
		model="\a3\data_f\proxies\muzzle_flash\muzzle_flash_rifle_kriss.p3d";
		class EventHandlers: EventHandlers
		{
			class Globe_mzlFlLightEH: Globe_mzlFlLightEH
			{
				postInit="[(_this # 0), ((_this # 0) getVariable ['Globe_objLightCstm','FiredLightSmall'])] call expEden_fnc_createMuzzleFlashLight;";
			};
		};
	};
	class muzzle_flash_sgun_KSG: muzzle_flash_VTOL_01_armed
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\muzzle_flash_sgun_KSG.jpg";
		_generalMacro="muzzle_flash_sgun_KSG";
		displayName="$STR_Globe_CfgVehicles_muzzle_flash_sgun_KSG0";
		model="\a3\data_f\proxies\muzzle_flash\muzzle_flash_rifle_ksg.p3d";
		class EventHandlers: EventHandlers
		{
			class Globe_mzlFlLightEH: Globe_mzlFlLightEH
			{
				postInit="[(_this # 0), ((_this # 0) getVariable ['Globe_objLightCstm','FiredLightSmall'])] call expEden_fnc_createMuzzleFlashLight;";
			};
		};
	};
	class muzzle_flash_sgun_M4: muzzle_flash_VTOL_01_armed
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\muzzle_flash_sgun_M4.jpg";
		_generalMacro="muzzle_flash_sgun_M4";
		displayName="$STR_Globe_CfgVehicles_muzzle_flash_sgun_M40";
		model="\a3\data_f\proxies\muzzle_flash\muzzle_flash_rifle_m4.p3d";
		class EventHandlers: EventHandlers
		{
			class Globe_mzlFlLightEH: Globe_mzlFlLightEH
			{
				postInit="[(_this # 0), ((_this # 0) getVariable ['Globe_objLightCstm','FiredLightSmall'])] call expEden_fnc_createMuzzleFlashLight;";
			};
		};
	};
	class muzzle_flash_LMG_Mk200: muzzle_flash_VTOL_01_armed
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\muzzle_flash_LMG_Mk200.jpg";
		_generalMacro="muzzle_flash_LMG_Mk200";
		displayName="$STR_Globe_CfgVehicles_muzzle_flash_LMG_Mk2000";
		model="\a3\data_f\proxies\muzzle_flash\muzzle_flash_rifle_m200.p3d";
		class EventHandlers: EventHandlers
		{
			class Globe_mzlFlLightEH: Globe_mzlFlLightEH
			{
				postInit="[(_this # 0), ((_this # 0) getVariable ['Globe_objLightCstm','FiredLightSmall'])] call expEden_fnc_createMuzzleFlashLight;";
			};
		};
	};
	class muzzle_flash_arifle_Mk20: muzzle_flash_VTOL_01_armed
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\muzzle_flash_arifle_Mk20.jpg";
		_generalMacro="muzzle_flash_arifle_Mk20";
		displayName="$STR_Globe_CfgVehicles_muzzle_flash_arifle_Mk200";
		model="\a3\data_f\proxies\muzzle_flash\muzzle_flash_rifle_mk20.p3d";
		class EventHandlers: EventHandlers
		{
			class Globe_mzlFlLightEH: Globe_mzlFlLightEH
			{
				postInit="[(_this # 0), ((_this # 0) getVariable ['Globe_objLightCstm','FiredLightSmall'])] call expEden_fnc_createMuzzleFlashLight;";
			};
		};
	};
	class muzzle_flash_arifle_Mx25: muzzle_flash_VTOL_01_armed
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\muzzle_flash_arifle_Mx25.jpg";
		_generalMacro="muzzle_flash_arifle_Mx25";
		displayName="$STR_Globe_CfgVehicles_muzzle_flash_arifle_Mx250";
		model="\a3\data_f\proxies\muzzle_flash\muzzle_flash_rifle_mx25.p3d";
		class EventHandlers: EventHandlers
		{
			class Globe_mzlFlLightEH: Globe_mzlFlLightEH
			{
				postInit="[(_this # 0), ((_this # 0) getVariable ['Globe_objLightCstm','FiredLightSmall'])] call expEden_fnc_createMuzzleFlashLight;";
			};
		};
	};
	class muzzle_flash_hgun_PDW2000: muzzle_flash_VTOL_01_armed
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\muzzle_flash_hgun_PDW2000.jpg";
		_generalMacro="muzzle_flash_hgun_PDW2000";
		displayName="$STR_Globe_CfgVehicles_muzzle_flash_hgun_PDW20000";
		model="\a3\data_f\proxies\muzzle_flash\muzzle_flash_rifle_pdw2000.p3d";
		class EventHandlers: EventHandlers
		{
			class Globe_mzlFlLightEH: Globe_mzlFlLightEH
			{
				postInit="[(_this # 0), ((_this # 0) getVariable ['Globe_objLightCstm','FiredLightSmall'])] call expEden_fnc_createMuzzleFlashLight;";
			};
		};
	};
	class muzzle_flash_arifle_SDAR: muzzle_flash_VTOL_01_armed
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\muzzle_flash_arifle_SDAR.jpg";
		_generalMacro="muzzle_flash_arifle_SDAR";
		displayName="$STR_Globe_CfgVehicles_muzzle_flash_arifle_SDAR0";
		model="\a3\data_f\proxies\muzzle_flash\muzzle_flash_rifle_rfb.p3d";
		class EventHandlers: EventHandlers
		{
			class Globe_mzlFlLightEH: Globe_mzlFlLightEH
			{
				postInit="[(_this # 0), ((_this # 0) getVariable ['Globe_objLightCstm','FiredLightSmall'])] call expEden_fnc_createMuzzleFlashLight;";
			};
		};
	};
	class muzzle_flash_SMG_02: muzzle_flash_VTOL_01_armed
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\muzzle_flash_SMG_02.jpg";
		_generalMacro="muzzle_flash_SMG_02";
		displayName="$STR_Globe_CfgVehicles_muzzle_flash_SMG_020";
		model="\a3\data_f\proxies\muzzle_flash\muzzle_flash_rifle_scorpion.p3d";
		class EventHandlers: EventHandlers
		{
			class Globe_mzlFlLightEH: Globe_mzlFlLightEH
			{
				postInit="[(_this # 0), ((_this # 0) getVariable ['Globe_objLightCstm','FiredLightSmall'])] call expEden_fnc_createMuzzleFlashLight;";
			};
		};
	};
	class muzzle_flash_arifle_TRG: muzzle_flash_VTOL_01_armed
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\muzzle_flash_arifle_TRG.jpg";
		_generalMacro="muzzle_flash_arifle_TRG";
		displayName="$STR_Globe_CfgVehicles_muzzle_flash_arifle_TRG0";
		model="\a3\data_f\proxies\muzzle_flash\muzzle_flash_rifle_trg20.p3d";
		class EventHandlers: EventHandlers
		{
			class Globe_mzlFlLightEH: Globe_mzlFlLightEH
			{
				postInit="[(_this # 0), ((_this # 0) getVariable ['Globe_objLightCstm','FiredLightSmall'])] call expEden_fnc_createMuzzleFlashLight;";
			};
		};
	};
	class muzzle_flash_Missile_SAAMI: muzzle_flash_VTOL_01_armed
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\muzzle_flash_Missile_SAAMI.jpg";
		_generalMacro="muzzle_flash_Missile_SAAMI";
		displayName="$STR_Globe_CfgVehicles_muzzle_flash_Missile_SAAMI0";
		model="\a3\data_f\proxies\muzzle_flash\muzzle_flash_rocket_70mm.p3d";
		class EventHandlers: EventHandlers
		{
			class Globe_mzlFlLightEH: Globe_mzlFlLightEH
			{
				postInit="[(_this # 0), ((_this # 0) getVariable ['Globe_objLightCstm','RocketLight'])] call expEden_fnc_createMuzzleFlashLight;";
			};
		};
	};
	class muzzle_flash_Missile_AA_9x: muzzle_flash_VTOL_01_armed
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\muzzle_flash_Missile_AA_9x.jpg";
		_generalMacro="muzzle_flash_Missile_AA_9x";
		displayName="$STR_Globe_CfgVehicles_muzzle_flash_Missile_AA_9x0";
		model="\a3\data_f\proxies\muzzle_flash\muzzle_flash_rocket_aim9x.p3d";
		class EventHandlers: EventHandlers
		{
			class Globe_mzlFlLightEH: Globe_mzlFlLightEH
			{
				postInit="[(_this # 0), ((_this # 0) getVariable ['Globe_objLightCstm','RocketLight'])] call expEden_fnc_createMuzzleFlashLight;";
			};
		};
	};
	class muzzle_flash_Missile_AGM_65: muzzle_flash_VTOL_01_armed
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\muzzle_flash_Missile_AGM_65.jpg";
		_generalMacro="muzzle_flash_Missile_AGM_65";
		displayName="$STR_Globe_CfgVehicles_muzzle_flash_Missile_AGM_650";
		model="\a3\data_f\proxies\muzzle_flash\muzzle_flash_rocket_hellfire.p3d";
		class EventHandlers: EventHandlers
		{
			class Globe_mzlFlLightEH: Globe_mzlFlLightEH
			{
				postInit="[(_this # 0), ((_this # 0) getVariable ['Globe_objLightCstm','RocketLight'])] call expEden_fnc_createMuzzleFlashLight;";
			};
		};
	};
	class muzzle_flash_Missile_Zephyr: muzzle_flash_VTOL_01_armed
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\muzzle_flash_Missile_Zephyr.jpg";
		_generalMacro="muzzle_flash_Missile_Zephyr";
		displayName="$STR_Globe_CfgVehicles_muzzle_flash_Missile_Zephyr0";
		model="\a3\data_f\proxies\muzzle_flash\muzzle_flash_rocket_zephyr.p3d";
		class EventHandlers: EventHandlers
		{
			class Globe_mzlFlLightEH: Globe_mzlFlLightEH
			{
				postInit="[(_this # 0), ((_this # 0) getVariable ['Globe_objLightCstm','RocketLight'])] call expEden_fnc_createMuzzleFlashLight;";
			};
		};
	};
	class muzzle_flash_Suppressor_v1: muzzle_flash_VTOL_01_armed
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\muzzle_flash_Suppressor_v1.jpg";
		_generalMacro="muzzle_flash_Suppressor_v1";
		displayName="$STR_Globe_CfgVehicles_muzzle_flash_Suppressor_v10";
		model="\a3\data_f\proxies\muzzle_flash\muzzle_flash_silencer.p3d";
	};
	class muzzle_flash_Suppressor_v2: muzzle_flash_VTOL_01_armed
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\muzzle_flash_Suppressor_v2.jpg";
		_generalMacro="muzzle_flash_Suppressor_v2";
		displayName="$STR_Globe_CfgVehicles_muzzle_flash_Suppressor_v20";
		model="\a3\data_f\proxies\muzzle_flash\muzzle_flash_suppressor.p3d";
	};
	class muzzle_flash_01: muzzle_flash_VTOL_01_armed
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\muzzle_flash_01.jpg";
		_generalMacro="muzzle_flash_01";
		displayName="$STR_Globe_CfgVehicles_muzzle_flash_010";
		model="\a3\data_f\proxies\muzzle_flash\muzzle_flash1.p3d";
		class EventHandlers: EventHandlers
		{
			class Globe_mzlFlLightEH: Globe_mzlFlLightEH
			{
				postInit="[(_this # 0), ((_this # 0) getVariable ['Globe_objLightCstm','FiredLightSmall'])] call expEden_fnc_createMuzzleFlashLight;";
			};
		};
	};
	class muzzle_flash_02: muzzle_flash_VTOL_01_armed
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\muzzle_flash_02.jpg";
		_generalMacro="muzzle_flash_02";
		displayName="$STR_Globe_CfgVehicles_muzzle_flash_020";
		model="\a3\data_f\proxies\muzzle_flash\muzzle_flash2.p3d";
		class EventHandlers: EventHandlers
		{
			class Globe_mzlFlLightEH: Globe_mzlFlLightEH
			{
				postInit="[(_this # 0), ((_this # 0) getVariable ['Globe_objLightCstm','FiredLightSmall'])] call expEden_fnc_createMuzzleFlashLight;";
			};
		};
	};
	class muzzle_flash_03: muzzle_flash_VTOL_01_armed
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\muzzle_flash_03.jpg";
		_generalMacro="muzzle_flash_03";
		displayName="$STR_Globe_CfgVehicles_muzzle_flash_030";
		model="\a3\data_f\proxies\muzzle_flash\muzzle_flash3.p3d";
		class EventHandlers: EventHandlers
		{
			class Globe_mzlFlLightEH: Globe_mzlFlLightEH
			{
				postInit="[(_this # 0), ((_this # 0) getVariable ['Globe_objLightCstm','FiredLightSmall'])] call expEden_fnc_createMuzzleFlashLight;";
			};
		};
	};
	class Leaf_01: Helper_Base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		mapSize=0.28999999;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.373;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Leaf_01.jpg";
		_generalMacro="Leaf_01";
		scope=1;
		displayName="$STR_Globe_CfgVehicles_Leaf_010";
		model="\A3\Data_F\ParticleEffects\Hit_Leaves\Leaves.p3d";
		icon="\A3\Misc_F\Helpers\data\ui\icons\Sign_Sphere10cm_F";
		accuracy=1000;
		editorCategory="EdCat_Environment";
		editorSubcategory="EdSubcat_Clutter";
		vehicleClass="Objects";
		simulation="thingX";
	};
	class Leaf_01_green: Leaf_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Leaf_01_green.jpg";
		_generalMacro="Leaf_01_green";
		displayName="$STR_Globe_CfgVehicles_Leaf_01_green0";
		model="\A3\Data_F\ParticleEffects\Hit_Leaves\Leaves_Green.p3d";
	};
	class Twig_01: Leaf_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Twig_01.jpg";
		_generalMacro="Twig_01";
		displayName="$STR_Globe_CfgVehicles_Twig_010";
		model="\A3\Data_F\ParticleEffects\Hit_Leaves\Sticks.p3d";
	};
	class Twig_01_green: Leaf_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Twig_01_green.jpg";
		_generalMacro="Twig_01_green";
		displayName="$STR_Globe_CfgVehicles_Twig_01_green0";
		model="\A3\Data_F\ParticleEffects\Hit_Leaves\Sticks_green.p3d";
	};
	class Debris_base: Items_base_F
	{
		editorCategory="EdCat_Things";
		editorSubcategory="EdSubcat_Garbage";
		destrType="DestructNo";
		model="\A3\Structures_F_Enoch\Military\Training\ShellCrater_01_decal_F.p3d";
		icon="iconObject_circle";
		vehicleClass="Garbage";
	};
	class Debris_Stone_01: Debris_base
	{
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.121;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Debris_Stone_01.jpg";
		_generalMacro="Debris_Stone_01";
		scope=2;
		scopeCurator=2;
		model="\A3\Data_F\ParticleEffects\Pstone\PStone.p3d";
		displayName="$STR_Globe_CfgVehicles_Debris_Stone_010";
	};
	class Debris_Metal_01: Debris_Stone_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Debris_Metal_01.jpg";
		_generalMacro="Debris_Metal_01";
		displayName="$STR_Globe_CfgVehicles_Debris_Metal_010";
		model="\A3\Data_F\ParticleEffects\Shard\shard.p3d";
	};
	class Debris_Metal_burnt_01: Debris_Stone_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Debris_Metal_burnt_01.jpg";
		_generalMacro="Debris_Metal_burnt_01";
		displayName="$STR_Globe_CfgVehicles_Debris_Metal_burnt_010";
		model="\A3\Data_F\ParticleEffects\Shard\shard2.p3d";
	};
	class Debris_Metal_burnt_02: Debris_Stone_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Debris_Metal_burnt_02.jpg";
		_generalMacro="Debris_Metal_burnt_02";
		displayName="$STR_Globe_CfgVehicles_Debris_Metal_burnt_020";
		model="\A3\Data_F\ParticleEffects\Shard\shard3.p3d";
	};
	class Debris_Metal_burnt_03: Debris_Stone_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Debris_Metal_burnt_03.jpg";
		_generalMacro="Debris_Metal_burnt_03";
		displayName="$STR_Globe_CfgVehicles_Debris_Metal_burnt_030";
		model="\A3\Data_F\ParticleEffects\Shard\shard4.p3d";
	};
	class Sparks_01: muzzle_flash_VTOL_01_armed
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Sparks_01.jpg";
		_generalMacro="Sparks_01";
		displayName="$STR_expEden_Particle_TrainingMineEffect_F";
		model="\A3\Data_F\ParticleEffects\Universal\SparksBall.p3d";
	};
	class Wheat_01: Leaf_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Wheat_01.jpg";
		_generalMacro="Wheat_01";
		displayName="$STR_c_weat";
		model="\A3\Data_F\ParticleEffects\Universal\Wheat.p3d";
	};
	class Wheat_01_seed: Leaf_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Wheat_01_seed.jpg";
		_generalMacro="Wheat_01_seed";
		displayName="$STR_Globe_CfgVehicles_Wheat_01_seed0";
		model="\A3\Data_F\ParticleEffects\Universal\WheatSeed.p3d";
	};
	class WoodChip_01: Leaf_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\WoodChip_01.jpg";
		_generalMacro="WoodChip_01";
		displayName="$STR_Globe_CfgVehicles_WoodChip_010";
		model="\A3\Data_F\ParticleEffects\Universal\WoodParts_01.p3d";
	};
	class BrokenGlassPart_base: Helper_Base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		mapSize=4.2199998;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.018999999;
			verticalOffsetWorld=0;
			init="''";
		};
		_generalMacro="BrokenGlassPart_01";
		scope=1;
		scopeCurator=0;
		destrType="DestructNo";
		icon="iconObject_1x1";
		class Attributes
		{
		};
	};
	class BrokenGlassPart_01: BrokenGlassPart_base
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\BrokenGlassPart_01.jpg";
		_generalMacro="BrokenGlassPart_01";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_BrokenGlassPart_010";
		model="\A3\data_f\ParticleEffects\Universal\GlassParts_00.p3d";
	};
	class BrokenGlassPart_02: BrokenGlassPart_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\BrokenGlassPart_02.jpg";
		_generalMacro="BrokenGlassPart_02";
		displayName="$STR_Globe_CfgVehicles_BrokenGlassPart_020";
		model="\A3\data_f\ParticleEffects\Universal\GlassParts_01.p3d";
	};
	class BrokenGlassPart_03: BrokenGlassPart_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\BrokenGlassPart_03.jpg";
		_generalMacro="BrokenGlassPart_03";
		displayName="$STR_Globe_CfgVehicles_BrokenGlassPart_030";
		model="\A3\data_f\ParticleEffects\Universal\GlassParts_02.p3d";
	};
	class BrokenGlassPart_04: BrokenGlassPart_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\BrokenGlassPart_04.jpg";
		_generalMacro="BrokenGlassPart_04";
		displayName="$STR_Globe_CfgVehicles_BrokenGlassPart_040";
		model="\A3\data_f\ParticleEffects\Universal\GlassParts_03.p3d";
	};
	class BrokenGlassPart_05: BrokenGlassPart_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\BrokenGlassPart_05.jpg";
		_generalMacro="BrokenGlassPart_05";
		displayName="$STR_Globe_CfgVehicles_BrokenGlassPart_050";
		model="\A3\data_f\ParticleEffects\Universal\GlassParts_04.p3d";
	};
	class BrokenGlassPart_06: BrokenGlassPart_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\BrokenGlassPart_06.jpg";
		_generalMacro="BrokenGlassPart_06";
		displayName="$STR_Globe_CfgVehicles_BrokenGlassPart_060";
		model="\A3\data_f\ParticleEffects\Universal\GlassParts_05.p3d";
	};
	class BrokenGlassPart_07: BrokenGlassPart_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\BrokenGlassPart_07.jpg";
		_generalMacro="BrokenGlassPart_07";
		displayName="$STR_Globe_CfgVehicles_BrokenGlassPart_070";
		model="\A3\data_f\ParticleEffects\Universal\GlassParts_06.p3d";
	};
	class Sign_SphereSkyObject: Helper_Base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		mapSize=0.25;
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Sign_SphereSkyObject.jpg";
		_generalMacro="Sign_SphereSkyObject";
		displayName="$STR_Globe_CfgVehicles_Sign_SphereSkyObject0";
		scope=2;
		scopeCurator=2;
		model="\core\skyobject\skyobject.p3d";
		icon="iconObject_circle";
		accuracy=1000;
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class Attributes
		{
		};
	};
	class UserTexture1m_textTamplate: NonStrategic
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\C4_chalk.jpg";
		_generalMacro="UserTexture1m_textTamplate";
		scope=2;
		displayName="$STR_Globe_CfgVehicles_UserTexture1m_textTamplate0";
		editorCategory="EdCat_Signs";
		editorSubcategory="EdSubcat_BlankSigns";
		vehicleClass="Helpers";
		model="\A3\Misc_F\Helpers\UserTexture1m.p3d";
		icon="iconObject_10x1";
		hiddenSelections[]=
		{
			"usertexture"
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
				defaultValue="getObjectTextures _this select 0";
			};
			class ObjectMaterialCustom0
			{
				displayName="$STR_3den_object_attribute_objectmaterialcustom0_displayname";
				tooltip="$STR_3den_object_attribute_objectmaterialcustom_tooltip";
				property="ObjectMaterialCustom0";
				control="Edit";
				expression="_this setObjectMaterialGlobal [0,_value]";
				defaultValue="getObjectMaterials _this select 0";
			};
		};
		hiddenSelectionsTextures[]=
		{
			"#(rgb,512,512,3)text(1,1,""Caveat"",0.35,""#00000000"",""#000000"",""placeholder"")"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\data_f\default_alpha.rvmat"
		};
	};
	class SoundSetSource_Sfx_Typing_01: SoundSetSource_01_base_F
	{
		class Sounds
		{
			soundSets[]=
			{
				"Sfx_Typing_01_SoundSet"
			};
		};
	};
	class SoundSetSource_Sfx_RadioSportGame_01: SoundSetSource_01_base_F
	{
		class Sounds
		{
			soundSets[]=
			{
				"Sfx_RadioSportGame_01_SoundSet"
			};
		};
	};
	class SoundSetSource_Sfx_Water_source_on: SoundSetSource_01_base_F
	{
		class Sounds
		{
			soundSets[]=
			{
				"Sfx_Water_source_on_SoundSet"
			};
		};
	};
	class SoundSetSource_Sfx_portableGenerator: SoundSetSource_01_base_F
	{
		class Sounds
		{
			soundSets[]=
			{
				"Sfx_portableGenerator_SoundSet"
			};
		};
	};
	class VaporConeCloud_01_G: Helper_Base_F
	{
		author="O&T Expansion Eden";
		mapSize=0.76;
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VaporConeCloud_01.jpg";
		_generalMacro="VaporConeCloud_01_G";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CFGVEHICLES_VaporConeCloud_010";
		model="\a3\data_f_jets\particleeffects\shockcone";
		icon="iconObject_circle";
		accuracy=1000;
		class Attributes
		{
		};
	};
};
class CfgSoundSets
{
	class Sfx_Typing_01_SoundSet
	{
		soundShaders[]=
		{
			"Sfx_Typing_01_SoundShader"
		};
		volumeFactor=0.5;
		frequencyFactor=1;
		spatial=1;
		doppler=0;
		loop=1;
		volumeCurve="InverseSquare1CurveFootsteps";
		distanceFilter="footstepsDistanceFreqAttenuationFilter";
		sound3DProcessingType="Footsteps3DProcessingType";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
	};
	class Sfx_RadioSportGame_01_SoundSet: Sfx_Typing_01_SoundSet
	{
		soundShaders[]=
		{
			"Sfx_RadioSportGame_01_SoundShader"
		};
	};
	class Sfx_Water_source_on_SoundSet: Sfx_Typing_01_SoundSet
	{
		soundShaders[]=
		{
			"Rain_Tiles_Small_01_Heavy_SoundShader"
		};
	};
	class Sfx_PortableGenerator_SoundSet: Sfx_Typing_01_SoundSet
	{
		soundShaders[]=
		{
			"Sfx_PortableGenerator_SoundShader"
		};
	};
};
class CfgSoundShaders
{
	class Sfx_Typing_01_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Orange\missionSFX\orange_journalist_laptop_typing_01",
				1
			},
			
			{
				"a3\missions_f_oldman\data\sound\intel_laptop\1sec\intel_laptop_1sec_01",
				1
			},
			
			{
				"a3\missions_f_oldman\data\sound\intel_laptop\1sec\intel_laptop_1sec_02",
				1
			},
			
			{
				"a3\missions_f_oldman\data\sound\intel_laptop\1sec\intel_laptop_1sec_03",
				1
			},
			
			{
				"a3\missions_f_oldman\data\sound\intel_laptop\2sec\intel_laptop_2sec_01",
				1
			},
			
			{
				"a3\missions_f_oldman\data\sound\intel_laptop\2sec\intel_laptop_2sec_02",
				1
			},
			
			{
				"a3\missions_f_oldman\data\sound\intel_laptop\2sec\intel_laptop_2sec_03",
				1
			},
			
			{
				"a3\missions_f_oldman\data\sound\intel_pc\1sec\intel_pc_1sec_01",
				1
			},
			
			{
				"a3\missions_f_oldman\data\sound\intel_pc\1sec\intel_pc_1sec_02",
				1
			},
			
			{
				"a3\missions_f_oldman\data\sound\intel_pc\1sec\intel_pc_1sec_03",
				1
			},
			
			{
				"a3\missions_f_oldman\data\sound\intel_pc\2sec\intel_pc_2sec_01",
				1
			},
			
			{
				"a3\missions_f_oldman\data\sound\intel_pc\2sec\intel_pc_2sec_02",
				1
			},
			
			{
				"a3\missions_f_oldman\data\sound\intel_pc\2sec\intel_pc_2sec_03",
				1
			},
			
			{
				"A3\Sounds_F_Enoch\Assets\Props\DeconShower_Nozzle_Loop_04",
				1
			}
		};
		volume=1;
		range=20;
	};
	class Sfx_RadioSportGame_01_SoundShader
	{
		samples[]=
		{
			
			{
				"a3\sounds_f_orange\missionsfx\pastambiences\cafe\cafe_sportsgame_01_loop",
				1
			},
			
			{
				"a3\sounds_f_orange\missionsfx\pastambiences\cafe\cafe_sportsgame_02_loop",
				1
			},
			
			{
				"a3\sounds_f_orange\missionsfx\pastambiences\cafe\cafe_sportsgame_03_loop",
				1
			}
		};
		volume=0.91000003;
		range=80;
	};
	class Sfx_PortableGenerator_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Missions_F_Tank\data\sounds\powerGenerator",
				1
			}
		};
		volume=1;
		range=80;
	};
};
