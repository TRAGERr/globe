class CfgPatches
{
	class A3_Supplies_F_expEden
	{
		author="Trager";
		name="O&T Expansion Eden - Ammoboxes and Supplies";
		url="https://steamcommunity.com/workshop/filedetails/?id=1923321700";
		requiredAddons[]=
		{
			"A3_expEden"
		};
		requiredVersion=0.1;
		units[]=
		{
			"B_RadioBag_01_digi_G_RespawnRally",
			"B_RadioBag_01_wdl_G_RespawnRally",
			"B_RadioBag_01_mtp_G_RespawnRally",
			"B_RadioBag_01_tropic_G_RespawnRally",
			"B_RadioBag_01_black_G_RespawnRally",
			"B_RadioBag_01_hex_G_RespawnRally",
			"B_RadioBag_01_oucamo_G_RespawnRally",
			"B_RadioBag_01_ghex_G_RespawnRally",
			"B_RadioBag_01_eaf_G_RespawnRally",
			"B_RadioBag_01_wdl_G_RespawnRallyPoint",
			"B_RadioBag_01_mtp_G_RespawnRallyPoint",
			"B_RadioBag_01_tropic_G_RespawnRallyPoint",
			"B_RadioBag_01_black_G_RespawnRallyPoint",
			"B_RadioBag_01_hex_G_RespawnRallyPoint",
			"B_RadioBag_01_oucamo_G_RespawnRallyPoint",
			"B_RadioBag_01_ghex_G_RespawnRallyPoint",
			"B_RadioBag_01_digi_G_RespawnRallyPoint",
			"B_RadioBag_01_eaf_G_RespawnRallyPoint"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class B_RadioBag_01_wdl_F;
	class B_RadioBag_01_mtp_F;
	class B_RadioBag_01_tropic_F;
	class B_RadioBag_01_black_F;
	class B_RadioBag_01_hex_F;
	class B_RadioBag_01_oucamo_F;
	class B_RadioBag_01_ghex_F;
	class B_RadioBag_01_digi_F;
	class B_RadioBag_01_eaf_F;
	class Camping_base_F;
	class B_RadioBag_01_wdl_G_RespawnRally: Camping_base_F
	{
		author="O&T Expansion Eden";
		mapSize=3.0699999;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.61900002;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Land_TentDome_F.jpg";
		_generalMacro="B_RadioBag_01_wdl_G_RespawnRally";
		scope=1;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_B_RadioBag_01_wdl_G_RespawnRallyPoint0";
		model="A3\Supplies_F_Enoch\Bags\B_RadioBag_01_F";
		icon="iconObject_circle";
		cost=1000;
		faction="Interactive_F";
		vehicleCategory="Interactive_F";
		vehicleClass="Respawn";
		respawnType="inf";
		respawnNearbyPlayers=1;
		class EventHandlers
		{
			class Globe_respBcpkEH
			{
				init="['init', _this] spawn BIS_fnc_respawnBackpack;					(_this # 0) call expEden_fnc_respawnRallySFX;";
				deleted="['deleted', _this] call BIS_fnc_respawnBackpack;				(deleteVehicle ((_this # 0) getVariable 'Globe_respRlySFX'));";
				disassembled="['disassembled', _this] call BIS_fnc_respawnBackpack;		(deleteVehicle ((_this # 0) getVariable 'Globe_respRlySFX'));";
				killed="deleteVehicle ((_this # 0) getVariable 'Globe_respRlySFX')";
				unregisteredFromWorld3DEN="deleteVehicle ((_this # 0) getVariable 'Globe_respRlySFX')";
			};
		};
		class assembleInfo
		{
			primary=1;
			base="";
			assembleTo="";
			displayName="$STR_Globe_CfgVehicles_B_RadioBag_01_wdl_G_RespawnRallyPoint0";
			dissasembleTo[]=
			{
				"B_RadioBag_01_wdl_G_RespawnRallyPoint"
			};
		};
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"a3\supplies_f_enoch\bags\data\B_RadioBag_01_WDL_CO.paa"
		};
	};
	class B_RadioBag_01_mtp_G_RespawnRally: B_RadioBag_01_wdl_G_RespawnRally
	{
		author="O&T Expansion Eden";
		_generalMacro="B_RadioBag_01_mtp_G_RespawnRally";
		displayName="$STR_Globe_CfgVehicles_B_RadioBag_01_mtp_G_RespawnRallyPoint0";
		class assembleInfo: assembleInfo
		{
			displayName="$STR_Globe_CfgVehicles_B_RadioBag_01_mtp_G_RespawnRallyPoint0";
			dissasembleTo[]=
			{
				"B_RadioBag_01_mtp_G_RespawnRallyPoint"
			};
		};
		hiddenSelectionsTextures[]=
		{
			"a3\supplies_f_enoch\bags\data\b_radiobag_01_mtp_co.paa"
		};
	};
	class B_RadioBag_01_tropic_G_RespawnRally: B_RadioBag_01_wdl_G_RespawnRally
	{
		author="O&T Expansion Eden";
		_generalMacro="B_RadioBag_01_tropic_G_RespawnRally";
		displayName="$STR_Globe_CfgVehicles_B_RadioBag_01_tropic_G_RespawnRallyPoint0";
		class assembleInfo: assembleInfo
		{
			displayName="$STR_Globe_CfgVehicles_B_RadioBag_01_tropic_G_RespawnRallyPoint0";
			dissasembleTo[]=
			{
				"B_RadioBag_01_tropic_G_RespawnRallyPoint"
			};
		};
		hiddenSelectionsTextures[]=
		{
			"a3\supplies_f_enoch\bags\data\b_radiobag_01_tropic_co.paa"
		};
	};
	class B_RadioBag_01_black_G_RespawnRally: B_RadioBag_01_wdl_G_RespawnRally
	{
		author="O&T Expansion Eden";
		_generalMacro="B_RadioBag_01_black_G_RespawnRally";
		displayName="$STR_Globe_CfgVehicles_B_RadioBag_01_black_G_RespawnRallyPoint0";
		class assembleInfo: assembleInfo
		{
			displayName="$STR_Globe_CfgVehicles_B_RadioBag_01_black_G_RespawnRallyPoint0";
			dissasembleTo[]=
			{
				"B_RadioBag_01_black_G_RespawnRallyPoint"
			};
		};
		hiddenSelectionsTextures[]=
		{
			"a3\supplies_f_enoch\bags\data\b_radiobag_01_black_co.paa"
		};
	};
	class B_RadioBag_01_hex_G_RespawnRally: B_RadioBag_01_wdl_G_RespawnRally
	{
		author="O&T Expansion Eden";
		_generalMacro="B_RadioBag_01_hex_G_RespawnRally";
		displayName="$STR_Globe_CfgVehicles_B_RadioBag_01_hex_G_RespawnRallyPoint0";
		class assembleInfo: assembleInfo
		{
			displayName="$STR_Globe_CfgVehicles_B_RadioBag_01_hex_G_RespawnRallyPoint0";
			dissasembleTo[]=
			{
				"B_RadioBag_01_hex_G_RespawnRallyPoint"
			};
		};
		hiddenSelectionsTextures[]=
		{
			"a3\supplies_f_enoch\bags\data\b_radiobag_01_hex_co.paa"
		};
	};
	class B_RadioBag_01_oucamo_G_RespawnRally: B_RadioBag_01_wdl_G_RespawnRally
	{
		author="O&T Expansion Eden";
		_generalMacro="B_RadioBag_01_oucamo_G_RespawnRally";
		displayName="$STR_Globe_CfgVehicles_B_RadioBag_01_oucamo_G_RespawnRallyPoint0";
		class assembleInfo: assembleInfo
		{
			displayName="$STR_Globe_CfgVehicles_B_RadioBag_01_oucamo_G_RespawnRallyPoint0";
			dissasembleTo[]=
			{
				"B_RadioBag_01_oucamo_G_RespawnRallyPoint"
			};
		};
		hiddenSelectionsTextures[]=
		{
			"a3\supplies_f_enoch\bags\data\B_RadioBag_01_urban_CO.paa"
		};
	};
	class B_RadioBag_01_ghex_G_RespawnRally: B_RadioBag_01_wdl_G_RespawnRally
	{
		author="O&T Expansion Eden";
		_generalMacro="B_RadioBag_01_ghex_G_RespawnRally";
		displayName="$STR_Globe_CfgVehicles_B_RadioBag_01_ghex_G_RespawnRallyPoint0";
		class assembleInfo: assembleInfo
		{
			displayName="$STR_Globe_CfgVehicles_B_RadioBag_01_ghex_G_RespawnRallyPoint0";
			dissasembleTo[]=
			{
				"B_RadioBag_01_ghex_G_RespawnRallyPoint"
			};
		};
		hiddenSelectionsTextures[]=
		{
			"a3\supplies_f_enoch\bags\data\b_radiobag_01_ghex_co.paa"
		};
	};
	class B_RadioBag_01_eaf_G_RespawnRally: B_RadioBag_01_wdl_G_RespawnRally
	{
		author="O&T Expansion Eden";
		_generalMacro="B_RadioBag_01_eaf_G_RespawnRally";
		displayName="$STR_Globe_CfgVehicles_B_RadioBag_01_eaf_G_RespawnRallyPoint0";
		class assembleInfo: assembleInfo
		{
			displayName="$STR_Globe_CfgVehicles_B_RadioBag_01_eaf_G_RespawnRallyPoint0";
			dissasembleTo[]=
			{
				"B_RadioBag_01_eaf_G_RespawnRallyPoint"
			};
		};
		hiddenSelectionsTextures[]=
		{
			"a3\supplies_f_enoch\bags\data\b_radiobag_01_eaf_co.paa"
		};
	};
	class B_RadioBag_01_digi_G_RespawnRally: B_RadioBag_01_wdl_G_RespawnRally
	{
		author="O&T Expansion Eden";
		_generalMacro="B_RadioBag_01_digi_G_RespawnRally";
		displayName="$STR_Globe_CfgVehicles_B_RadioBag_01_digi_G_RespawnRallyPoint0";
		class assembleInfo: assembleInfo
		{
			displayName="$STR_Globe_CfgVehicles_B_RadioBag_01_digi_G_RespawnRallyPoint0";
			dissasembleTo[]=
			{
				"B_RadioBag_01_digi_G_RespawnRallyPoint"
			};
		};
		hiddenSelectionsTextures[]=
		{
			"a3\supplies_f_enoch\bags\data\B_RadioBag_01_AAF_CO.paa"
		};
	};
	class B_RadioBag_01_wdl_G_RespawnRallyPoint: B_RadioBag_01_wdl_F
	{
		author="O&T Expansion Eden";
		_generalMacro="B_RadioBag_01_wdl_G_RespawnRallyPoint";
		displayName="$STR_Globe_CfgVehicles_B_RadioBag_01_wdl_G_RespawnRallyPoint0";
		faction="Interactive_F";
		vehicleCategory="Interactive_F";
		vehicleClass="Respawn";
		class assembleInfo
		{
			primary=1;
			base="";
			assembleTo="B_RadioBag_01_wdl_G_RespawnRally";
			displayName="$STR_Globe_CfgVehicles_B_RadioBag_01_wdl_G_RespawnRallyPoint0";
			dissasembleTo[]={};
		};
	};
	class B_RadioBag_01_mtp_G_RespawnRallyPoint: B_RadioBag_01_mtp_F
	{
		author="O&T Expansion Eden";
		_generalMacro="B_RadioBag_01_mtp_G_RespawnRallyPoint";
		displayName="$STR_Globe_CfgVehicles_B_RadioBag_01_mtp_G_RespawnRallyPoint0";
		faction="Interactive_F";
		vehicleCategory="Interactive_F";
		vehicleClass="Respawn";
		class assembleInfo
		{
			primary=1;
			base="";
			assembleTo="B_RadioBag_01_mtp_G_RespawnRally";
			displayName="$STR_Globe_CfgVehicles_B_RadioBag_01_mtp_G_RespawnRallyPoint0";
			dissasembleTo[]={};
		};
	};
	class B_RadioBag_01_tropic_G_RespawnRallyPoint: B_RadioBag_01_tropic_F
	{
		author="O&T Expansion Eden";
		_generalMacro="B_RadioBag_01_tropic_G_RespawnRallyPoint";
		displayName="$STR_Globe_CfgVehicles_B_RadioBag_01_tropic_G_RespawnRallyPoint0";
		faction="Interactive_F";
		vehicleCategory="Interactive_F";
		vehicleClass="Respawn";
		class assembleInfo
		{
			primary=1;
			base="";
			assembleTo="B_RadioBag_01_tropic_G_RespawnRally";
			displayName="$STR_Globe_CfgVehicles_B_RadioBag_01_tropic_G_RespawnRallyPoint0";
			dissasembleTo[]={};
		};
	};
	class B_RadioBag_01_black_G_RespawnRallyPoint: B_RadioBag_01_black_F
	{
		author="O&T Expansion Eden";
		_generalMacro="B_RadioBag_01_black_G_RespawnRallyPoint";
		displayName="$STR_Globe_CfgVehicles_B_RadioBag_01_black_G_RespawnRallyPoint0";
		faction="Interactive_F";
		vehicleCategory="Interactive_F";
		vehicleClass="Respawn";
		class assembleInfo
		{
			primary=1;
			base="";
			assembleTo="B_RadioBag_01_black_G_RespawnRally";
			displayName="$STR_Globe_CfgVehicles_B_RadioBag_01_black_G_RespawnRallyPoint0";
			dissasembleTo[]={};
		};
	};
	class B_RadioBag_01_hex_G_RespawnRallyPoint: B_RadioBag_01_hex_F
	{
		author="O&T Expansion Eden";
		_generalMacro="B_RadioBag_01_hex_G_RespawnRallyPoint";
		displayName="$STR_Globe_CfgVehicles_B_RadioBag_01_hex_G_RespawnRallyPoint0";
		faction="Interactive_F";
		vehicleCategory="Interactive_F";
		vehicleClass="Respawn";
		class assembleInfo
		{
			primary=1;
			base="";
			assembleTo="B_RadioBag_01_hex_G_RespawnRally";
			displayName="$STR_Globe_CfgVehicles_B_RadioBag_01_hex_G_RespawnRallyPoint0";
			dissasembleTo[]={};
		};
	};
	class B_RadioBag_01_oucamo_G_RespawnRallyPoint: B_RadioBag_01_oucamo_F
	{
		author="O&T Expansion Eden";
		_generalMacro="B_RadioBag_01_oucamo_G_RespawnRallyPoint";
		displayName="$STR_Globe_CfgVehicles_B_RadioBag_01_oucamo_G_RespawnRallyPoint0";
		faction="Interactive_F";
		vehicleCategory="Interactive_F";
		vehicleClass="Respawn";
		class assembleInfo
		{
			primary=1;
			base="";
			assembleTo="B_RadioBag_01_oucamo_G_RespawnRally";
			displayName="$STR_Globe_CfgVehicles_B_RadioBag_01_oucamo_G_RespawnRallyPoint0";
			dissasembleTo[]={};
		};
	};
	class B_RadioBag_01_ghex_G_RespawnRallyPoint: B_RadioBag_01_ghex_F
	{
		author="O&T Expansion Eden";
		_generalMacro="B_RadioBag_01_ghex_G_RespawnRallyPoint";
		displayName="$STR_Globe_CfgVehicles_B_RadioBag_01_ghex_G_RespawnRallyPoint0";
		faction="Interactive_F";
		vehicleCategory="Interactive_F";
		vehicleClass="Respawn";
		class assembleInfo
		{
			primary=1;
			base="";
			assembleTo="B_RadioBag_01_ghex_G_RespawnRally";
			displayName="$STR_Globe_CfgVehicles_B_RadioBag_01_ghex_G_RespawnRallyPoint0";
			dissasembleTo[]={};
		};
	};
	class B_RadioBag_01_digi_G_RespawnRallyPoint: B_RadioBag_01_digi_F
	{
		author="O&T Expansion Eden";
		_generalMacro="B_RadioBag_01_digi_G_RespawnRallyPoint";
		displayName="$STR_Globe_CfgVehicles_B_RadioBag_01_digi_G_RespawnRallyPoint0";
		faction="Interactive_F";
		vehicleCategory="Interactive_F";
		vehicleClass="Respawn";
		class assembleInfo
		{
			primary=1;
			base="";
			assembleTo="B_RadioBag_01_digi_G_RespawnRally";
			displayName="$STR_Globe_CfgVehicles_B_RadioBag_01_digi_G_RespawnRallyPoint0";
			dissasembleTo[]={};
		};
	};
	class B_RadioBag_01_eaf_G_RespawnRallyPoint: B_RadioBag_01_eaf_F
	{
		author="O&T Expansion Eden";
		_generalMacro="B_RadioBag_01_eaf_G_RespawnRallyPoint";
		displayName="$STR_Globe_CfgVehicles_B_RadioBag_01_eaf_G_RespawnRallyPoint0";
		faction="Interactive_F";
		vehicleCategory="Interactive_F";
		vehicleClass="Respawn";
		class assembleInfo
		{
			primary=1;
			base="";
			assembleTo="B_RadioBag_01_eaf_G_RespawnRally";
			displayName="$STR_Globe_CfgVehicles_B_RadioBag_01_eaf_G_RespawnRallyPoint0";
			dissasembleTo[]={};
		};
	};
};