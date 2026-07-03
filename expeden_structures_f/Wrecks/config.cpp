class CfgPatches
{
	class Structures_Globe_Wreks
	{
		addonRootClass="A3_Structures_F_Globe";
		requiredAddons[]=
		{
			"A3_Structures_F_Globe"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Heli_Light_01_wreck",
			"Heli_Light_02_wreck",
			"Heli_Attack_01_wreck",
			"Heli_Attack_02_wreck",
			"Heli_Transport_01_wreck",
			"Heli_Transport_02_wreck",
			"Heli_Light_03_wreck",
			"Plane_CAS_01_wreck",
			"Plane_CAS_02_wreck",
			"Plane_Civil_01_wreck",
			"VTOL_01_wreck",
			"VTOL_02_wreck",
			"Heli_Transport_03_wreck",
			"Heli_Transport_04_wreck_Box",
			"Heli_Transport_04_wreck_Fuel",
			"Heli_Transport_04_wreck",
			"APC_Tracked_01_wreck",
			"APC_Tracked_02_wreck_AA",
			"APC_Tracked_02_wreck_Cannon",
			"APC_Tracked_03_wreck",
			"MBT_03_wreck",
			"MBT_01_wreck",
			"MBT_02_wreck",
			"AFV_Wheeled_01_wreck",
			"LT_01_wreck_ATAA",
			"MBT_04_wreck",
			"Truck_01_wreck",
			"Truck_03_wreck_Base",
			"Truck_03_wreck_Device",
			"Truck_03_wreck_Fuel",
			"Truck_03_wreck_Repair",
			"Truck_01_wreck_Box",
			"Truck_01_wreck_Fuel",
			"Truck_01_wreck_Mover",
			"Van_02_wreck_Medevac",
			"Van_02_wreck_Transport",
			"Van_02_wreck_Vehicle",
			"Plane_Fighter_01_wreck",
			"Plane_Fighter_02_wreck",
			"Plane_Fighter_03_wreck",
			"Plane_Fighter_04_wreck",
			"LT_01_wreck_Cannon",
			"LT_01_wreck_Scout"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Wreck_base_F;
	class ThingX;
	class Wrecks_Globe_base: ThingX
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=1.855;
			verticalOffsetWorld=0;
			init="''";
		};
		_generalMacro="Wrecks_Globe_base";
		class Armory
		{
			disabled=1;
		};
		accuracy=0.5;
		icon="iconObject_1x1";
		editorCategory="EdCat_Wrecks";
		editorSubcategory="EdSubcat_APCs";
		model="\A3\Air_F_Jets\Plane_Fighter_01\Plane_Fighter_01_wreck_F.p3d";
		typicalCargo[]={};
		transportAmmo=0;
		transportRepair=0;
		transportFuel=0;
		transportSoldier=0;
		vehicleClass="Wreck";
		destrType="DestructNo";
	};
	class Heli_Light_01_wreck: Wrecks_Globe_base
	{
		author="O&T Expansion Eden";
		_generalMacro="Heli_Light_01_wreck";
		displayName="$STR_Globe_CfgVehicles_Heli_Light_01_wreck0";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Heli_Light_01_wreck.jpg";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Helicopters";
		model="\a3\air_f\heli_light_01\heli_light_01_wreck_f";
	};
	class Heli_Light_02_wreck: Heli_Light_01_wreck
	{
		author="O&T Expansion Eden";
		_generalMacro="Heli_Light_02_wreck";
		displayName="$STR_Globe_CfgVehicles_Heli_Light_02_wreck0";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Heli_Light_02_wreck.jpg";
		model="\a3\air_f\heli_light_02\heli_light_02_wreck_f";
	};
	class Heli_Attack_01_wreck: Heli_Light_01_wreck
	{
		author="O&T Expansion Eden";
		_generalMacro="Heli_Attack_01_wreck";
		displayName="$STR_Globe_CfgVehicles_Heli_Attack_01_wreck0";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Heli_Attack_01_wreck.jpg";
		model="\a3\air_f_beta\heli_attack_01\heli_attack_01_wreck_f";
	};
	class Heli_Attack_02_wreck: Heli_Light_01_wreck
	{
		author="O&T Expansion Eden";
		_generalMacro="Heli_Attack_02_wreck";
		displayName="$STR_Globe_CfgVehicles_Heli_Attack_02_wreck0";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Heli_Attack_02_wreck.jpg";
		model="\a3\air_f_beta\heli_attack_02\heli_attack_02_wreck_f";
	};
	class Heli_Transport_01_wreck: Heli_Light_01_wreck
	{
		author="O&T Expansion Eden";
		_generalMacro="Heli_Transport_01_wreck";
		displayName="$STR_Globe_CfgVehicles_Heli_Transport_01_wreck0";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Heli_Transport_01_wreck.jpg";
		model="\a3\air_f_beta\heli_transport_01\heli_transport_01_wreck_f";
	};
	class Heli_Transport_02_wreck: Heli_Light_02_wreck
	{
		author="O&T Expansion Eden";
		_generalMacro="Heli_Transport_02_wreck";
		displayName="$STR_Globe_CfgVehicles_Heli_Transport_02_wreck0";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Heli_Transport_02_wreck.jpg";
		model="\a3\air_f_beta\heli_transport_02\heli_transport_02_wreck_f";
	};
	class Heli_Light_03_wreck: Heli_Light_02_wreck
	{
		author="O&T Expansion Eden";
		_generalMacro="Heli_Light_03_wreck";
		displayName="$STR_Globe_CfgVehicles_Heli_Light_03_wreck0";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Heli_Light_03_wreck.jpg";
		model="\a3\air_f_epb\heli_light_03\heli_light_03_wreck_f";
	};
	class Plane_CAS_01_wreck: Heli_Light_02_wreck
	{
		author="O&T Expansion Eden";
		_generalMacro="Plane_CAS_01_wreck";
		displayName="$STR_Globe_CfgVehicles_Plane_CAS_01_wreck0";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Plane_CAS_01_wreck.jpg";
		model="\a3\air_f_epc\plane_cas_01\plane_cas_01_wreck_f";
		editorSubcategory="EdSubcat_Planes";
	};
	class Plane_CAS_02_wreck: Heli_Light_02_wreck
	{
		author="O&T Expansion Eden";
		_generalMacro="Plane_CAS_02_wreck";
		displayName="$STR_Globe_CfgVehicles_Plane_CAS_02_wreck0";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Plane_CAS_02_wreck.jpg";
		model="\a3\air_f_epc\plane_cas_02\plane_cas_02_wreck_f";
		editorSubcategory="EdSubcat_Planes";
	};
	class Plane_Civil_01_wreck: Heli_Light_02_wreck
	{
		author="O&T Expansion Eden";
		_generalMacro="Plane_Civil_01_wreck";
		displayName="$STR_Globe_CfgVehicles_Plane_Civil_01_wreck0";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Plane_Civil_01_wreck.jpg";
		model="\a3\air_f_exp\plane_civil_01\plane_civil_01_basic_wreck_f";
		editorSubcategory="EdSubcat_Planes";
	};
	class VTOL_01_wreck: Heli_Light_02_wreck
	{
		author="O&T Expansion Eden";
		_generalMacro="VTOL_01_wreck";
		displayName="$STR_Globe_CfgVehicles_VTOL_01_wreck0";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VTOL_01_wreck.jpg";
		model="\a3\air_f_exp\vtol_01\vtol_01_vehicle_wreck_f";
		editorSubcategory="EdSubcat_Planes";
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2",
			"Camo_3",
			"Camo_4"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT01_olive_CO.paa",
			"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT02_olive_CO.paa",
			"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT03_olive_CO.paa",
			"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT04_olive_CO.paa"
		};
		class Attributes
		{
			class Selection1
			{
				displayName="$STR_credit_fp2engine";
				property="Selection1";
				control="Combo";
				expression="_this setObjectTextureGlobal [0,_value];";
				defaultValue="'\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT01_olive_CO.paa'";
				typeName="STRING";
				class Values
				{
					class Value1
					{
						name="$STR_A3_TEXTURESOURCES_OLIVE0";
						value="\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT01_olive_CO.paa";
						picture="\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT01_olive_CO.paa";
					};
					class Value2
					{
						name="$STR_A3_TEXTURESOURCES_BLUE0";
						value="\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT01_blue_CO.paa";
						picture="\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT01_blue_CO.paa";
					};
					class Empty
					{
						name="$STR_A3_CfgVehicles_moduleCuratorSetObjectCost_F_Arguments_show_values_no";
						value="";
						picture="";
					};
				};
			};
			class Selection2: Selection1
			{
				displayName="$STR_Globe_tail0";
				property="Selection2";
				expression="_this setObjectTextureGlobal [1,_value];";
				defaultValue="'\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT02_olive_CO.paa'";
				class Values: Values
				{
					class Value1: Value1
					{
						value="\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT02_olive_CO.paa";
						picture="\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT02_olive_CO.paa";
					};
					class Value2: Value2
					{
						value="\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT02_blue_CO.paa";
						picture="\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT02_blue_CO.paa";
					};
				};
			};
			class Selection3: Selection1
			{
				displayName="$STR_Globe_wings0";
				property="Selection3";
				expression="_this setObjectTextureGlobal [2,_value];";
				defaultValue="'\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT03_olive_CO.paa'";
				class Values: Values
				{
					class Value1: Value1
					{
						value="\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT03_olive_CO.paa";
						picture="\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT03_olive_CO.paa";
					};
					class Value2: Value2
					{
						value="\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT03_blue_CO.paa";
						picture="\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT03_blue_CO.paa";
					};
				};
			};
			class Selection4: Selection1
			{
				displayName="$STR_a3_helilandinggear_main_title";
				property="Selection4";
				expression="_this setObjectTextureGlobal [3,_value];";
				defaultValue="'\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT04_olive_CO.paa'";
				class Values: Values
				{
					class Value1: Value1
					{
						value="\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT04_olive_CO.paa";
						picture="\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT04_olive_CO.paa";
					};
					class Value2: Value2
					{
						value="\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT04_blue_CO.paa";
						picture="\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT04_blue_CO.paa";
					};
				};
			};
		};
	};
	class VTOL_02_wreck: Heli_Light_02_wreck
	{
		author="O&T Expansion Eden";
		_generalMacro="VTOL_02_wreck";
		displayName="$STR_Globe_CfgVehicles_VTOL_02_wreck0";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\VTOL_02_wreck.jpg";
		model="\a3\air_f_exp\vtol_02\vtol_02_vehicle_wreck_f";
		editorSubcategory="EdSubcat_Planes";
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2",
			"Camo_3",
			"Camo_4"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT01_bhex_CO.paa",
			"\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT02_bhex_CO.paa",
			"\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_L_bhex_CO.paa",
			"\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_R_bhex_CO.paa"
		};
		class Attributes
		{
			class Selection1
			{
				displayName="$STR_credit_fp2engine";
				property="Selection1";
				control="Combo";
				expression="_this setObjectTextureGlobal [0,_value];";
				defaultValue="'\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT01_bhex_CO.paa'";
				typeName="STRING";
				class Values
				{
					class Value1
					{
						name="$STR_A3_TEXTURESOURCES_HEX0";
						value="\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT01_bhex_CO.paa";
						picture="\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT01_bhex_CO.paa";
					};
					class Value2
					{
						name="$STR_A3_TEXTURESOURCES_GREENHEX0";
						value="\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT01_ghex_CO.paa";
						picture="\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT01_ghex_CO.paa";
					};
					class Value3
					{
						name="$STR_A3_TEXTURESOURCES_GREY0";
						value="\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT01_CO.paa";
						picture="\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT01_CO.paa";
					};
					class Empty
					{
						name="$STR_A3_CfgVehicles_moduleCuratorSetObjectCost_F_Arguments_show_values_no";
						value="";
						picture="";
					};
				};
			};
			class Selection2: Selection1
			{
				displayName="$STR_a3_helilandinggear_main_title";
				property="Selection2";
				expression="_this setObjectTextureGlobal [1,_value];";
				defaultValue="'\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT02_bhex_CO.paa'";
				class Values: Values
				{
					class Value1: Value1
					{
						value="\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT02_bhex_CO.paa";
						picture="\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT02_bhex_CO.paa";
					};
					class Value2: Value2
					{
						value="\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT02_ghex_CO.paa";
						picture="\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT02_ghex_CO.paa";
					};
					class Value3: Value3
					{
						value="\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT02_CO.paa";
						picture="\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT02_CO.paa";
					};
				};
			};
			class Selection3: Selection1
			{
				displayName="$STR_Globe_mRotor0";
				property="Selection3";
				expression="_this setObjectTextureGlobal [2,_value];";
				defaultValue="'\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_L_bhex_CO.paa'";
				class Values: Values
				{
					class Value1: Value1
					{
						value="\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_L_bhex_CO.paa";
						picture="\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_L_bhex_CO.paa";
					};
					class Value2: Value2
					{
						value="\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_L_ghex_CO.paa";
						picture="\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_L_ghex_CO.paa";
					};
					class Value3: Value3
					{
						value="\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_L_CO.paa";
						picture="\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_L_CO.paa";
					};
				};
			};
			class Selection4: Selection1
			{
				displayName="$STR_Globe_wings0";
				property="Selection4";
				expression="_this setObjectTextureGlobal [3,_value];";
				defaultValue="'\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_R_bhex_CO.paa'";
				class Values: Values
				{
					class Value1: Value1
					{
						value="\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_R_bhex_CO.paa";
						picture="\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_R_bhex_CO.paa";
					};
					class Value2: Value2
					{
						value="\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_R_ghex_CO.paa";
						picture="\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_R_ghex_CO.paa";
					};
					class Value3: Value3
					{
						value="\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_R_CO.paa";
						picture="\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_R_CO.paa";
					};
				};
			};
		};
	};
	class Heli_Transport_03_wreck: Heli_Light_02_wreck
	{
		author="O&T Expansion Eden";
		_generalMacro="Heli_Transport_03_wreck";
		displayName="$STR_Globe_CfgVehicles_Heli_Transport_03_wreck0";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Heli_Transport_03_wreck.jpg";
		model="\a3\air_f_heli\heli_transport_03\heli_transport_03_wreck_f";
	};
	class Heli_Transport_04_wreck_Box: Heli_Light_02_wreck
	{
		author="O&T Expansion Eden";
		_generalMacro="Heli_Transport_04_wreck_Box";
		displayName="$STR_Globe_CfgVehicles_Heli_Transport_04_wreck_Box0";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Heli_Transport_04_wreck_Box.jpg";
		model="\a3\air_f_heli\heli_transport_04\heli_transport_04_box_wreck_f";
	};
	class Heli_Transport_04_wreck_Fuel: Heli_Light_02_wreck
	{
		author="O&T Expansion Eden";
		_generalMacro="Heli_Transport_04_wreck_Fuel";
		displayName="$STR_Globe_CfgVehicles_Heli_Transport_04_wreck_Fuel0";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Heli_Transport_04_wreck_Fuel.jpg";
		model="\a3\air_f_heli\heli_transport_04\heli_transport_04_fuel_wreck_f";
	};
	class Heli_Transport_04_wreck: Heli_Light_02_wreck
	{
		author="O&T Expansion Eden";
		_generalMacro="Heli_Transport_04_wreck";
		displayName="$STR_Globe_CfgVehicles_Heli_Transport_04_wreck0";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Heli_Transport_04_wreck.jpg";
		model="\a3\air_f_heli\heli_transport_04\heli_transport_04_wreck_f";
	};
	class APC_Tracked_01_wreck: Heli_Light_02_wreck
	{
		author="O&T Expansion Eden";
		_generalMacro="APC_Tracked_01_wreck";
		displayName="$STR_Globe_CfgVehicles_APC_Tracked_01_wreck0";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\APC_Tracked_01_wreck.jpg";
		model="\a3\armor_f_beta\apc_tracked_01\apc_tracked_01_wreck_f";
		editorSubcategory="EdSubcat_APCs";
	};
	class APC_Tracked_02_wreck_AA: Heli_Light_02_wreck
	{
		author="O&T Expansion Eden";
		_generalMacro="APC_Tracked_02_wreck_AA";
		displayName="$STR_Globe_CfgVehicles_APC_Tracked_02_wreck_AA0";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\APC_Tracked_02_wreck_AA.jpg";
		model="\a3\armor_f_beta\apc_tracked_02\apc_tracked_02_aa_wreck_f";
		editorSubcategory="EdSubcat_APCs";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\armor_f_beta\apc_tracked_02\data\apc_tracked_02_ext_01_hexarid_co.paa",
			"\a3\armor_f_beta\apc_tracked_02\data\apc_tracked_02_ext_02_hexarid_co.paa",
			"\a3\armor_f_beta\apc_tracked_01\data\apc_tracked_01_aa_tower_opfor_co.paa"
		};
		class Attributes
		{
			class ZSU39TigrisHULL
			{
				displayName="$STR_Globe_hull0";
				property="ZSU39TigrisHULL";
				control="Combo";
				expression="_this setObjectTextureGlobal [0,_value];";
				defaultValue="'\a3\armor_f_beta\apc_tracked_02\data\apc_tracked_02_ext_01_hexarid_co.paa'";
				typeName="STRING";
				class Values
				{
					class Hex
					{
						name="$STR_A3_texturesources_hex0";
						value="\a3\armor_f_beta\apc_tracked_02\data\apc_tracked_02_ext_01_hexarid_co.paa";
						picture="\a3\armor_f_beta\apc_tracked_02\data\apc_tracked_02_ext_01_hexarid_co.paa";
					};
					class HexGreen
					{
						name="$STR_A3_texturesources_greenhex0";
						value="A3\Armor_F_Exp\APC_Tracked_02\Data\APC_Tracked_02_ext_01_AA_ghex_CO.paa";
						picture="A3\Armor_F_Exp\APC_Tracked_02\Data\APC_Tracked_02_ext_01_AA_ghex_CO.paa";
					};
					class Empty
					{
						name="$STR_A3_CfgVehicles_moduleCuratorSetObjectCost_F_Arguments_show_values_no";
						value="";
						picture="";
					};
				};
			};
			class ZSU39TigrisTracks: ZSU39TigrisHULL
			{
				displayName="$STR_Globe_tracks0";
				property="ZSU39TigrisTracks";
				expression="_this setObjectTextureGlobal [1,_value];";
				defaultValue="'\a3\armor_f_beta\apc_tracked_02\data\apc_tracked_02_ext_02_hexarid_co.paa'";
				class Values: Values
				{
					class Hex: Hex
					{
						value="\a3\armor_f_beta\apc_tracked_02\data\apc_tracked_02_ext_02_hexarid_co.paa";
						picture="\a3\armor_f_beta\apc_tracked_02\data\apc_tracked_02_ext_02_hexarid_co.paa";
					};
					class HexGreen: HexGreen
					{
						value="A3\Armor_F_Exp\APC_Tracked_02\Data\APC_Tracked_02_ext_02_ghex_CO.paa";
						picture="A3\Armor_F_Exp\APC_Tracked_02\Data\APC_Tracked_02_ext_02_ghex_CO.paa";
					};
				};
			};
			class ZSU39TigrisTurret: ZSU39TigrisHULL
			{
				displayName="$STR_Globe_turret0";
				property="ZSU39TigrisTurret";
				expression="_this setObjectTextureGlobal [2,_value];";
				defaultValue="'\a3\armor_f_beta\apc_tracked_01\data\apc_tracked_01_aa_tower_opfor_co.paa'";
				class Values: Values
				{
					class Hex: Hex
					{
						value="\a3\armor_f_beta\apc_tracked_01\data\apc_tracked_01_aa_tower_opfor_co.paa";
						picture="\a3\armor_f_beta\apc_tracked_01\data\apc_tracked_01_aa_tower_opfor_co.paa";
					};
					class HexGreen: HexGreen
					{
						value="A3\Armor_F_Exp\APC_Tracked_02\Data\APC_Tracked_01_AA_Tower_ghex_CO.paa";
						picture="A3\Armor_F_Exp\APC_Tracked_02\Data\APC_Tracked_01_AA_Tower_ghex_CO.paa";
					};
				};
			};
		};
	};
	class APC_Tracked_02_wreck_Cannon: Heli_Light_02_wreck
	{
		author="O&T Expansion Eden";
		_generalMacro="APC_Tracked_02_wreck_Cannon";
		displayName="$STR_Globe_CfgVehicles_APC_Tracked_02_wreck_Cannon0";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\APC_Tracked_02_wreck_Cannon.jpg";
		model="\a3\armor_f_beta\apc_tracked_02\apc_tracked_02_cannon_wreck_f";
		editorSubcategory="EdSubcat_APCs";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"A3\Armor_F_Beta\APC_Tracked_02\Data\apc_tracked_02_ext_01_hexarid_co.paa",
			"A3\Armor_F_Beta\APC_Tracked_02\Data\apc_tracked_02_ext_02_hexarid_co.paa",
			"A3\Armor_F_Beta\APC_Tracked_02\Data\rcws30_opfor_co.paa"
		};
		class Attributes
		{
			class Selection1
			{
				displayName="$STR_Globe_hull0";
				property="Selection1";
				control="Combo";
				expression="_this setObjectTextureGlobal [0,_value];";
				defaultValue="'A3\Armor_F_Beta\APC_Tracked_02\Data\apc_tracked_02_ext_01_hexarid_co.paa'";
				typeName="STRING";
				class Values
				{
					class Value1
					{
						name="$STR_A3_TEXTURESOURCES_HEX0";
						value="A3\Armor_F_Beta\APC_Tracked_02\Data\apc_tracked_02_ext_01_hexarid_co.paa";
						picture="A3\Armor_F_Beta\APC_Tracked_02\Data\apc_tracked_02_ext_01_hexarid_co.paa";
					};
					class Value2
					{
						name="$STR_A3_TEXTURESOURCES_GREENHEX0";
						value="\A3\Armor_F_Exp\APC_Tracked_02\Data\APC_Tracked_02_ext_01_ghex_CO.paa";
						picture="\A3\Armor_F_Exp\APC_Tracked_02\Data\APC_Tracked_02_ext_01_ghex_CO.paa";
					};
					class Empty
					{
						name="$STR_A3_CfgVehicles_moduleCuratorSetObjectCost_F_Arguments_show_values_no";
						value="";
						picture="";
					};
				};
			};
			class Selection2: Selection1
			{
				displayName="$STR_Globe_tracks0";
				property="Selection2";
				expression="_this setObjectTextureGlobal [1,_value];";
				defaultValue="'A3\Armor_F_Beta\APC_Tracked_02\Data\apc_tracked_02_ext_02_hexarid_co.paa'";
				class Values: Values
				{
					class Value1: Value1
					{
						value="A3\Armor_F_Beta\APC_Tracked_02\Data\apc_tracked_02_ext_02_hexarid_co.paa";
						picture="A3\Armor_F_Beta\APC_Tracked_02\Data\apc_tracked_02_ext_02_hexarid_co.paa";
					};
					class Value2: Value2
					{
						value="\A3\Armor_F_Exp\APC_Tracked_02\Data\APC_Tracked_02_ext_02_ghex_CO.paa";
						picture="\A3\Armor_F_Exp\APC_Tracked_02\Data\APC_Tracked_02_ext_02_ghex_CO.paa";
					};
				};
			};
			class Selection3: Selection1
			{
				displayName="$STR_Globe_turret0";
				property="Selection3";
				expression="_this setObjectTextureGlobal [2,_value];";
				defaultValue="'A3\Armor_F_Beta\APC_Tracked_02\Data\rcws30_opfor_co.paa'";
				class Values: Values
				{
					class Value1: Value1
					{
						value="A3\Armor_F_Beta\APC_Tracked_02\Data\rcws30_opfor_co.paa";
						picture="A3\Armor_F_Beta\APC_Tracked_02\Data\rcws30_opfor_co.paa";
					};
					class Value2: Value2
					{
						value="\A3\Armor_F_Exp\APC_Tracked_02\Data\RCWS30_ghex_CO.paa";
						picture="\A3\Armor_F_Exp\APC_Tracked_02\Data\RCWS30_ghex_CO.paa";
					};
				};
			};
		};
	};
	class APC_Tracked_03_wreck: Heli_Light_02_wreck
	{
		author="O&T Expansion Eden";
		_generalMacro="APC_Tracked_03_wreck";
		displayName="$STR_Globe_CfgVehicles_APC_Tracked_03_wreck0";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\APC_Tracked_03_wreck.jpg";
		model="\a3\armor_f_epb\apc_tracked_03\apc_tracked_03_wreck_f";
		editorSubcategory="EdSubcat_APCs";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"CamoNet",
			"CamoSlat"
		};
		hiddenSelectionsTextures[]=
		{
			"A3\armor_f_epb\apc_tracked_03\data\apc_tracked_03_ext_indp_co.paa",
			"A3\armor_f_epb\apc_tracked_03\data\apc_tracked_03_ext2_indp_co.paa",
			"A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa",
			"A3\armor_f\data\cage_aaf_co.paa"
		};
		class Attributes
		{
			class Selection1
			{
				displayName="$STR_a3_rscdisplaywelcome_tank_pard_list12_title";
				property="Selection1";
				control="Combo";
				expression="_this setObjectTextureGlobal [0,_value];";
				defaultValue="'A3\armor_f_epb\apc_tracked_03\data\apc_tracked_03_ext_indp_co.paa'";
				typeName="STRING";
				class Values
				{
					class Value1
					{
						name="$STR_A3_TEXTURESOURCES_INDEP0";
						value="A3\armor_f_epb\apc_tracked_03\data\apc_tracked_03_ext_indp_co.paa";
						picture="A3\armor_f_epb\apc_tracked_03\data\apc_tracked_03_ext_indp_co.paa";
					};
					class Value2
					{
						name="$STR_A3_C_CfgVehicles_Offroad_01_civil_base_F_TextureSources_EAF0";
						value="\A3\Armor_F_Enoch\apc_tracked_03\data\apc_tracked_03_ext_eaf_co.paa";
						picture="\A3\Armor_F_Enoch\apc_tracked_03\data\apc_tracked_03_ext_eaf_co.paa";
					};
					class Empty
					{
						name="$STR_A3_CfgVehicles_moduleCuratorSetObjectCost_F_Arguments_show_values_no";
						value="";
						picture="";
					};
				};
			};
			class Selection2: Selection1
			{
				displayName="$STR_Globe_hull0";
				property="Selection2";
				expression="_this setObjectTextureGlobal [1,_value];";
				defaultValue="'\A3\armor_f_epb\apc_tracked_03\data\apc_tracked_03_ext2_indp_co.paa'";
				class Values: Values
				{
					class Value1: Value1
					{
						value="\A3\armor_f_epb\apc_tracked_03\data\apc_tracked_03_ext2_indp_co.paa";
						picture="\A3\armor_f_epb\apc_tracked_03\data\apc_tracked_03_ext2_indp_co.paa";
					};
					class Value2: Value2
					{
						value="\A3\Armor_F_Enoch\apc_tracked_03\data\apc_tracked_03_ext2_eaf_co.paa";
						picture="\A3\Armor_F_Enoch\apc_tracked_03\data\apc_tracked_03_ext2_eaf_co.paa";
					};
				};
			};
		};
	};
	class MBT_03_wreck: Heli_Light_02_wreck
	{
		author="O&T Expansion Eden";
		_generalMacro="MBT_03_wreck";
		displayName="$STR_Globe_CfgVehicles_MBT_03_wreck0";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\MBT_03_wreck.jpg";
		model="\a3\armor_f_epb\mbt_03\mbt_03_wreck_f";
		editorSubcategory="EdSubcat_Tanks";
	};
	class MBT_01_wreck: Heli_Light_02_wreck
	{
		author="O&T Expansion Eden";
		_generalMacro="MBT_01_wreck";
		displayName="$STR_Globe_CfgVehicles_MBT_01_wreck0";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\MBT_01_wreck.jpg";
		model="\a3\armor_f_gamma\mbt_01\mbt_01_wreck_f";
		editorSubcategory="EdSubcat_Tanks";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"CamoNet"
		};
		hiddenSelectionsTextures[]=
		{
			"A3\armor_f_gamma\MBT_01\Data\MBT_01_body_CO.paa",
			"A3\armor_f_gamma\MBT_01\Data\MBT_01_tow_CO.paa",
			"A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
		};
		class Attributes
		{
			class Selection1
			{
				displayName="$STR_Globe_hull0";
				property="Selection1";
				control="Combo";
				expression="_this setObjectTextureGlobal [0,_value];";
				defaultValue="'A3\armor_f_gamma\MBT_01\Data\MBT_01_body_CO.paa'";
				typeName="STRING";
				class Values
				{
					class Value1
					{
						name="$STR_A3_TextureSources_Sand0";
						value="A3\armor_f_gamma\MBT_01\Data\MBT_01_body_CO.paa";
						picture="A3\armor_f_gamma\MBT_01\Data\MBT_01_body_CO.paa";
					};
					class Value2
					{
						name="$STR_A3_TEXTURESOURCES_OLIVE0";
						value="\A3\Armor_F_Exp\MBT_01\data\MBT_01_body_olive_CO.paa";
						picture="\A3\Armor_F_Exp\MBT_01\data\MBT_01_body_olive_CO.paa";
					};
					class Empty
					{
						name="$STR_A3_CfgVehicles_moduleCuratorSetObjectCost_F_Arguments_show_values_no";
						value="";
						picture="";
					};
				};
			};
		};
	};
	class MBT_02_wreck: Heli_Light_02_wreck
	{
		author="O&T Expansion Eden";
		_generalMacro="MBT_02_wreck";
		displayName="$STR_Globe_CfgVehicles_MBT_02_wreck0";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\MBT_02_wreck.jpg";
		model="\a3\armor_f_gamma\mbt_02\mbt_02_wreck_f";
		editorSubcategory="EdSubcat_Tanks";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"a3\armor_f_gamma\mbt_02\data\mbt_02_body_co.paa"
		};
		class Attributes
		{
			class Selection1
			{
				displayName="$STR_Globe_hull0";
				property="Selection1";
				control="Combo";
				expression="_this setObjectTextureGlobal [0,_value];";
				defaultValue="'a3\armor_f_gamma\mbt_02\data\mbt_02_body_co.paa'";
				typeName="STRING";
				class Values
				{
					class Value1
					{
						name="$STR_A3_TEXTURESOURCES_HEX0";
						value="a3\armor_f_gamma\mbt_02\data\mbt_02_body_co.paa";
						picture="a3\armor_f_gamma\mbt_02\data\mbt_02_body_co.paa";
					};
					class Value2
					{
						name="$STR_A3_TEXTURESOURCES_GREENHEX0";
						value="\a3\Armor_F_Exp\MBT_02\Data\MBT_02_body_ghex_CO.paa";
						picture="\a3\Armor_F_Exp\MBT_02\Data\MBT_02_body_ghex_CO.paa";
					};
					class Value3
					{
						name="$STR_A3_TEXTURESOURCES_GREY0";
						value="\a3\Armor_F_Decade\MBT_02\Data\MBT_02_body_expo_CO.paa";
						picture="\a3\Armor_F_Decade\MBT_02\Data\MBT_02_body_expo_CO.paa";
					};
					class Empty
					{
						name="$STR_A3_CfgVehicles_moduleCuratorSetObjectCost_F_Arguments_show_values_no";
						value="";
						picture="";
					};
				};
			};
		};
	};
	class AFV_Wheeled_01_wreck: Heli_Light_02_wreck
	{
		author="O&T Expansion Eden";
		_generalMacro="AFV_Wheeled_01_wreck";
		displayName="$STR_a3_cfgvehicles_land_wreck_afv_wheeled_01_f0";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\AFV_Wheeled_01_wreck.jpg";
		model="\a3\armor_f_tank\afv_wheeled_01\afv_wheeled_01_wreck_f";
		editorSubcategory="EdSubcat_APCs";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"CamoNet",
			"CamoSlat"
		};
		hiddenSelectionsTextures[]=
		{
			"a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT1_CO.paa",
			"a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT2_CO.paa",
			"a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_wheel_CO.paa",
			"a3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
			"A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_CO.paa"
		};
		class Attributes
		{
			class Selection1
			{
				displayName="$STR_Globe_hull0";
				property="Selection1";
				control="Combo";
				expression="_this setObjectTextureGlobal [0,_value];";
				defaultValue="'\a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT1_CO.paa'";
				typeName="STRING";
				class Values
				{
					class Value1
					{
						name="$STR_A3_TEXTURESOURCES_SAND0";
						value="\a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT1_CO.paa";
						picture="\a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT1_CO.paa";
					};
					class Value2
					{
						name="$STR_A3_TEXTURESOURCES_GREEN0";
						value="\a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT1_green_CO.paa";
						picture="\a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT1_green_CO.paa";
					};
					class Empty
					{
						name="$STR_A3_CfgVehicles_moduleCuratorSetObjectCost_F_Arguments_show_values_no";
						value="";
						picture="";
					};
				};
			};
			class Selection2: Selection1
			{
				displayName="$STR_a3_helilandinggear_main_title";
				property="Selection2";
				expression="_this setObjectTextureGlobal [1,_value];";
				defaultValue="'\a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT2_CO.paa'";
				class Values: Values
				{
					class Value1: Value1
					{
						value="\a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT2_CO.paa";
						picture="\a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT2_CO.paa";
					};
					class Value2: Value2
					{
						value="\a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT2_green_CO.paa";
						picture="\a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT2_green_CO.paa";
					};
				};
			};
		};
	};
	class LT_01_wreck_ATAA: Heli_Light_02_wreck
	{
		author="O&T Expansion Eden";
		_generalMacro="LT_01_wreck_ATAA";
		displayName="$STR_Globe_CfgVehicles_LT_01_wreck_ATAA0";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\LT_01_wreck_ATAA.jpg";
		model="\a3\armor_f_tank\lt_01\lt_01_aa_wreck_f";
		editorSubcategory="EdSubcat_Tanks";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"CamoNet",
			"CamoSlat"
		};
		hiddenSelectionsTextures[]=
		{
			"A3\armor_f_tank\lt_01\data\lt_01_main_co.paa",
			"A3\armor_f_tank\lt_01\data\lt_01_at_co.paa",
			"A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa",
			"A3\armor_f\data\cage_aaf_co.paa"
		};
		class Attributes
		{
			class Selection1
			{
				displayName="$STR_Globe_hull0";
				property="Selection1";
				control="Combo";
				expression="_this setObjectTextureGlobal [0,_value];";
				defaultValue="'A3\armor_f_tank\lt_01\data\lt_01_main_co.paa'";
				typeName="STRING";
				class Values
				{
					class Value1
					{
						name="$STR_A3_TEXTURESOURCES_INDEP0";
						value="A3\armor_f_tank\lt_01\data\lt_01_main_co.paa";
						picture="A3\armor_f_tank\lt_01\data\lt_01_main_co.paa";
					};
					class Value2
					{
						name="$STR_A3_TEXTURESOURCES_olive0";
						value="\A3\armor_f_tank\lt_01\data\lt_01_main_olive_co.paa";
						picture="\A3\armor_f_tank\lt_01\data\lt_01_main_olive_co.paa";
					};
					class Empty
					{
						name="$STR_A3_CfgVehicles_moduleCuratorSetObjectCost_F_Arguments_show_values_no";
						value="";
						picture="";
					};
				};
			};
			class Selection2: Selection1
			{
				displayName="$STR_a3_rscdisplayanimviewer_textitem_tooltip";
				property="Selection2";
				expression="_this setObjectTextureGlobal [1,_value];";
				defaultValue="'A3\armor_f_tank\lt_01\data\lt_01_at_co.paa'";
				class Values: Values
				{
					class Value1: Value1
					{
						name="$STR_A3_TEXTURESOURCES_INDEP0";
						value="A3\armor_f_tank\lt_01\data\lt_01_at_co.paa";
						picture="A3\armor_f_tank\lt_01\data\lt_01_at_co.paa";
					};
					class Value2: Value2
					{
						name="$STR_A3_TEXTURESOURCES_olive0";
						value="\A3\armor_f_tank\lt_01\data\lt_01_at_olive_co.paa";
						picture="\A3\armor_f_tank\lt_01\data\lt_01_at_olive_co.paa";
					};
				};
			};
		};
	};
	class LT_01_wreck_Cannon: LT_01_wreck_ATAA
	{
		author="O&T Expansion Eden";
		_generalMacro="LT_01_wreck_Cannon";
		displayName="$STR_Globe_CfgVehicles_LT_01_wreck_Cannon0";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\LT_01_wreck_Cannon.jpg";
		model="\a3\armor_f_tank\lt_01\lt_01_cannon_wreck_f";
		hiddenSelectionsTextures[]=
		{
			"A3\armor_f_tank\lt_01\data\lt_01_main_co.paa",
			"A3\armor_f_tank\lt_01\data\lt_01_cannon_co.paa",
			"A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa",
			"A3\armor_f\data\cage_aaf_co.paa"
		};
		class Attributes
		{
			class Selection1
			{
				displayName="$STR_Globe_hull0";
				property="Selection1";
				control="Combo";
				expression="_this setObjectTextureGlobal [0,_value];";
				defaultValue="'A3\armor_f_tank\lt_01\data\lt_01_main_co.paa'";
				typeName="STRING";
				class Values
				{
					class Value1
					{
						name="$STR_A3_TEXTURESOURCES_INDEP0";
						value="A3\armor_f_tank\lt_01\data\lt_01_main_co.paa";
						picture="A3\armor_f_tank\lt_01\data\lt_01_main_co.paa";
					};
					class Value2
					{
						name="$STR_A3_TEXTURESOURCES_olive0";
						value="\A3\armor_f_tank\lt_01\data\lt_01_main_olive_co.paa";
						picture="\A3\armor_f_tank\lt_01\data\lt_01_main_olive_co.paa";
					};
					class Empty
					{
						name="$STR_A3_CfgVehicles_moduleCuratorSetObjectCost_F_Arguments_show_values_no";
						value="";
						picture="";
					};
				};
			};
			class Selection2: Selection1
			{
				displayName="$STR_a3_vr_heli_weapons_stage4_title";
				property="Selection2";
				expression="_this setObjectTextureGlobal [1,_value];";
				defaultValue="'A3\armor_f_tank\lt_01\data\lt_01_cannon_co.paa'";
				class Values: Values
				{
					class Value1: Value1
					{
						value="A3\armor_f_tank\lt_01\data\lt_01_cannon_co.paa";
						picture="A3\armor_f_tank\lt_01\data\lt_01_cannon_co.paa";
					};
					class Value2: Value2
					{
						value="\A3\armor_f_tank\lt_01\data\lt_01_cannon_olive_co.paa";
						picture="\A3\armor_f_tank\lt_01\data\lt_01_cannon_olive_co.paa";
					};
				};
			};
		};
	};
	class LT_01_wreck_Scout: LT_01_wreck_ATAA
	{
		author="O&T Expansion Eden";
		_generalMacro="LT_01_wreck_Scout";
		displayName="$STR_Globe_CfgVehicles_LT_01_wreck_Scout0";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\LT_01_wreck_Scout.jpg";
		model="\a3\armor_f_tank\lt_01\lt_01_scout_wreck_f";
		hiddenSelectionsTextures[]=
		{
			"A3\armor_f_tank\lt_01\data\lt_01_main_co.paa",
			"A3\armor_f_tank\lt_01\data\lt_01_radar_co.paa",
			"A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa",
			"A3\armor_f\data\cage_aaf_co.paa"
		};
		class Attributes
		{
			class Selection1
			{
				displayName="$STR_Globe_hull0";
				property="Selection1";
				control="Combo";
				expression="_this setObjectTextureGlobal [0,_value];";
				defaultValue="'A3\armor_f_tank\lt_01\data\lt_01_main_co.paa'";
				typeName="STRING";
				class Values
				{
					class Value1
					{
						name="$STR_A3_TEXTURESOURCES_INDEP0";
						value="A3\armor_f_tank\lt_01\data\lt_01_main_co.paa";
						picture="A3\armor_f_tank\lt_01\data\lt_01_main_co.paa";
					};
					class Value2
					{
						name="$STR_A3_TEXTURESOURCES_olive0";
						value="\A3\armor_f_tank\lt_01\data\lt_01_main_olive_co.paa";
						picture="\A3\armor_f_tank\lt_01\data\lt_01_main_olive_co.paa";
					};
					class Empty
					{
						name="$STR_A3_CfgVehicles_moduleCuratorSetObjectCost_F_Arguments_show_values_no";
						value="";
						picture="";
					};
				};
			};
			class Selection2: Selection1
			{
				displayName="$STR_a3_cfgvehicles_land_radar_f0";
				property="Selection2";
				expression="_this setObjectTextureGlobal [1,_value];";
				defaultValue="'A3\armor_f_tank\lt_01\data\lt_01_radar_co.paa'";
				class Values: Values
				{
					class Value1: Value1
					{
						value="A3\armor_f_tank\lt_01\data\lt_01_radar_co.paa";
						picture="A3\armor_f_tank\lt_01\data\lt_01_radar_co.paa";
					};
					class Value2: Value2
					{
						value="\A3\armor_f_tank\lt_01\data\lt_01_radar_olive_co.paa";
						picture="\A3\armor_f_tank\lt_01\data\lt_01_radar_olive_co.paa";
					};
				};
			};
		};
	};
	class MBT_04_wreck: Heli_Light_02_wreck
	{
		author="O&T Expansion Eden";
		_generalMacro="MBT_04_wreck";
		displayName="$STR_Globe_CfgVehicles_MBT_04_wreck0";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\MBT_04_wreck.jpg";
		model="\a3\armor_f_tank\mbt_04\MBT_04_wreck_F";
		editorSubcategory="EdSubcat_Tanks";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"CamoNet"
		};
		hiddenSelectionsTextures[]=
		{
			"a3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_1_CO.paa",
			"a3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_2_CO.paa",
			"A3\Armor_F\Data\camonet_CSAT_Stripe_Desert_CO.paa"
		};
		class Attributes
		{
			class Selection1
			{
				displayName="$STR_Globe_hull0";
				property="Selection1";
				control="Combo";
				expression="_this setObjectTextureGlobal [0,_value];";
				defaultValue="'a3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_1_CO.paa'";
				typeName="STRING";
				class Values
				{
					class Value1
					{
						name="$STR_A3_TEXTURESOURCES_GREY0";
						value="a3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_1_CO.paa";
						picture="a3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_1_CO.paa";
					};
					class Value2
					{
						name="$STR_A3_TEXTURESOURCES_JUNGLE0";
						value="\a3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_jungle_1_CO.paa";
						picture="\a3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_jungle_1_CO.paa";
					};
					class Value3
					{
						name="$STR_A3_TEXTURESOURCES_GREENHEX0";
						value="\a3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_green_hex_1_CO.paa";
						picture="\a3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_green_hex_1_CO.paa";
					};
					class Value4
					{
						name="$STR_A3_TEXTURESOURCES_HEX0";
						value="\a3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_brown_hex_1_CO.paa";
						picture="\a3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_brown_hex_1_CO.paa";
					};
					class Empty
					{
						name="$STR_A3_CfgVehicles_moduleCuratorSetObjectCost_F_Arguments_show_values_no";
						value="";
						picture="";
					};
				};
			};
		};
	};
	class Truck_01_wreck: Heli_Light_02_wreck
	{
		author="O&T Expansion Eden";
		_generalMacro="Truck_01_wreck";
		displayName="$STR_Globe_CfgVehicles_Truck_01_wreck0";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Truck_01_wreck.jpg";
		model="\a3\soft_f_beta\truck_01\truck_01_wreck_f";
		editorSubcategory="EdSubcat_Cars";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa",
			"\a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa",
			"\a3\soft_f_beta\truck_01\data\truck_01_cargo_co.paa"
		};
		class Attributes
		{
			class Selection1
			{
				displayName="$STR_Globe_hull0";
				property="Selection1";
				control="Combo";
				expression="_this setObjectTextureGlobal [0,_value];";
				defaultValue="'\a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa'";
				typeName="STRING";
				class Values
				{
					class Value1
					{
						name="$STR_A3_TEXTURESOURCES_Sand0";
						value="\a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa";
						picture="\a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa";
					};
					class Value2
					{
						name="$STR_A3_TEXTURESOURCES_Olive0";
						value="\a3\soft_f_Exp\truck_01\data\truck_01_ext_01_olive_co.paa";
						picture="\a3\soft_f_Exp\truck_01\data\truck_01_ext_01_olive_co.paa";
					};
					class Empty
					{
						name="$STR_A3_CfgVehicles_moduleCuratorSetObjectCost_F_Arguments_show_values_no";
						value="";
						picture="";
					};
				};
			};
			class Selection2: Selection1
			{
				displayName="$STR_credit_fp2engine";
				property="Selection2";
				expression="_this setObjectTextureGlobal [1,_value];";
				defaultValue="'\a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa'";
				class Values: Values
				{
					class Value1: Value1
					{
						value="\a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa";
						picture="\a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa";
					};
					class Value2: Value2
					{
						value="\a3\soft_f_Exp\truck_01\data\truck_01_ext_02_olive_co.paa";
						picture="\a3\soft_f_Exp\truck_01\data\truck_01_ext_02_olive_co.paa";
					};
				};
			};
			class Selection3: Selection1
			{
				displayName="$STR_dn_platform";
				property="Selection3";
				expression="_this setObjectTextureGlobal [2,_value];";
				defaultValue="'\a3\soft_f_beta\truck_01\data\truck_01_cargo_co.paa'";
				class Values: Values
				{
					class Value1: Value1
					{
						value="\a3\soft_f_beta\truck_01\data\truck_01_cargo_co.paa";
						picture="\a3\soft_f_beta\truck_01\data\truck_01_cargo_co.paa";
					};
					class Value2: Value2
					{
						value="\a3\soft_f_Exp\truck_01\data\truck_01_cargo_olive_co.paa";
						picture="\a3\soft_f_Exp\truck_01\data\truck_01_cargo_olive_co.paa";
					};
				};
			};
		};
	};
	class Truck_03_wreck_Base: Heli_Light_02_wreck
	{
		author="O&T Expansion Eden";
		_generalMacro="Truck_03_wreck_Base";
		displayName="$STR_Globe_CfgVehicles_Truck_03_wreck_Base0";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Truck_03_wreck_Base.jpg";
		model="\a3\soft_f_epc\truck_03\truck_03_base_wreck_f";
		editorSubcategory="EdSubcat_Cars";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_CO.paa",
			"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_CO.paa",
			"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_cargo_CO.paa"
		};
		class Attributes
		{
			class Selection1
			{
				displayName="$STR_credit_fp2engine";
				property="Selection1";
				control="Combo";
				expression="_this setObjectTextureGlobal [0,_value];";
				defaultValue="'\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_CO.paa'";
				typeName="STRING";
				class Values
				{
					class Value1
					{
						name="$STR_A3_TEXTURESOURCES_HEX0";
						value="\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_CO.paa";
						picture="\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_CO.paa";
					};
					class Value2
					{
						name="$STR_A3_TEXTURESOURCES_GREENHEX0";
						value="\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa";
						picture="\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa";
					};
					class Empty
					{
						name="$STR_A3_CfgVehicles_moduleCuratorSetObjectCost_F_Arguments_show_values_no";
						value="";
						picture="";
					};
				};
			};
			class Selection2: Selection1
			{
				displayName="$STR_a3_helilandinggear_main_title";
				property="Selection2";
				expression="_this setObjectTextureGlobal [1,_value];";
				defaultValue="'\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_CO.paa'";
				class Values: Values
				{
					class Value1: Value1
					{
						value="\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_CO.paa";
						picture="\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_CO.paa";
					};
					class Value2: Value2
					{
						value="\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa";
						picture="\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa";
					};
				};
			};
			class Selection3: Selection1
			{
				displayName="$STR_dn_platform";
				property="Selection3";
				expression="_this setObjectTextureGlobal [2,_value];";
				defaultValue="'\A3\Soft_F_EPC\Truck_03\Data\Truck_03_cargo_CO.paa'";
				class Values: Values
				{
					class Value1: Value1
					{
						value="\A3\Soft_F_EPC\Truck_03\Data\Truck_03_cargo_CO.paa";
						picture="\A3\Soft_F_EPC\Truck_03\Data\Truck_03_cargo_CO.paa";
					};
					class Value2: Value2
					{
						value="\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cargo_ghex_CO.paa";
						picture="\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cargo_ghex_CO.paa";
					};
				};
			};
		};
	};
	class Truck_03_wreck_Device: Heli_Light_02_wreck
	{
		author="O&T Expansion Eden";
		_generalMacro="Truck_03_wreck_Device";
		displayName="$STR_Globe_CfgVehicles_Truck_03_wreck_Device0";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Truck_03_wreck_Device.jpg";
		model="\a3\soft_f_epc\truck_03\truck_03_Device_wreck_f";
		editorSubcategory="EdSubcat_Cars";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4",
			"Camo5"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_CO.paa",
			"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_CO.paa",
			"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_cargo_CO.paa",
			"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa",
			"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"
		};
		class Attributes
		{
			class Selection1
			{
				displayName="$STR_credit_fp2engine";
				property="Selection1";
				control="Combo";
				expression="_this setObjectTextureGlobal [0,_value];";
				defaultValue="'\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_CO.paa'";
				typeName="STRING";
				class Values
				{
					class Value1
					{
						name="$STR_A3_TEXTURESOURCES_HEX0";
						value="\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_CO.paa";
						picture="\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_CO.paa";
					};
					class Value2
					{
						name="$STR_A3_TEXTURESOURCES_GREENHEX0";
						value="\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa";
						picture="\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa";
					};
					class Empty
					{
						name="$STR_A3_CfgVehicles_moduleCuratorSetObjectCost_F_Arguments_show_values_no";
						value="";
						picture="";
					};
				};
			};
			class Selection2: Selection1
			{
				displayName="$STR_a3_helilandinggear_main_title";
				property="Selection2";
				expression="_this setObjectTextureGlobal [1,_value];";
				defaultValue="'\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_CO.paa'";
				class Values: Values
				{
					class Value1: Value1
					{
						value="\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_CO.paa";
						picture="\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_CO.paa";
					};
					class Value2: Value2
					{
						value="\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa";
						picture="\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa";
					};
				};
			};
			class Selection3: Selection1
			{
				displayName="$STR_dn_platform";
				property="Selection3";
				expression="_this setObjectTextureGlobal [2,_value];";
				defaultValue="'\A3\Soft_F_EPC\Truck_03\Data\Truck_03_cargo_CO.paa'";
				class Values: Values
				{
					class Value1: Value1
					{
						value="\A3\Soft_F_EPC\Truck_03\Data\Truck_03_cargo_CO.paa";
						picture="\A3\Soft_F_EPC\Truck_03\Data\Truck_03_cargo_CO.paa";
					};
					class Value2: Value2
					{
						value="\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cargo_ghex_CO.paa";
						picture="\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cargo_ghex_CO.paa";
					};
				};
			};
			class Selection4: Selection1
			{
				displayName="$STR_Globe_eastWind0";
				property="Selection4";
				expression="_this setObjectTextureGlobal [3,_value];";
				defaultValue="'\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa'";
				class Values: Values
				{
					class Value1: Value1
					{
						value="\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa";
						picture="\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa";
					};
				};
			};
			class Selection5: Selection1
			{
				displayName="$STR_Globe_eastWind1";
				property="Selection5";
				expression="_this setObjectTextureGlobal [4,_value];";
				defaultValue="'\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa'";
				class Values: Values
				{
					class Value1: Value1
					{
						value="\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa";
						picture="\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa";
					};
				};
			};
		};
	};
	class Truck_03_wreck_Fuel: Heli_Light_02_wreck
	{
		author="O&T Expansion Eden";
		_generalMacro="Truck_03_wreck_Fuel";
		displayName="$STR_Globe_CfgVehicles_Truck_03_wreck_Fuel0";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Truck_03_wreck_Fuel.jpg";
		model="\a3\soft_f_epc\truck_03\truck_03_fuel_wreck_f";
		editorSubcategory="EdSubcat_Cars";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_CO.paa",
			"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_CO.paa",
			"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ammo_CO.paa"
		};
		class Attributes
		{
			class Selection1
			{
				displayName="$STR_credit_fp2engine";
				property="Selection1";
				control="Combo";
				expression="_this setObjectTextureGlobal [0,_value];";
				defaultValue="'\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_CO.paa'";
				typeName="STRING";
				class Values
				{
					class Value1
					{
						name="$STR_A3_TEXTURESOURCES_HEX0";
						value="\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_CO.paa";
						picture="\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_CO.paa";
					};
					class Value2
					{
						name="$STR_A3_TEXTURESOURCES_GREENHEX0";
						value="\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa";
						picture="\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa";
					};
					class Empty
					{
						name="$STR_A3_CfgVehicles_moduleCuratorSetObjectCost_F_Arguments_show_values_no";
						value="";
						picture="";
					};
				};
			};
			class Selection2: Selection1
			{
				displayName="$STR_a3_helilandinggear_main_title";
				property="Selection2";
				expression="_this setObjectTextureGlobal [1,_value];";
				defaultValue="'\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_CO.paa'";
				class Values: Values
				{
					class Value1: Value1
					{
						value="\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_CO.paa";
						picture="\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_CO.paa";
					};
					class Value2: Value2
					{
						value="\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa";
						picture="\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa";
					};
				};
			};
			class Selection3: Selection1
			{
				displayName="$STR_a3_campaign_b_m03_marker01";
				property="Selection3";
				expression="_this setObjectTextureGlobal [2,_value];";
				defaultValue="'\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ammo_CO.paa'";
				class Values: Values
				{
					class Value1: Value1
					{
						value="\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ammo_CO.paa";
						picture="\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ammo_CO.paa";
					};
					class Value2: Value2
					{
						value="\A3\Soft_F_Exp\Truck_03\Data\Truck_03_fuel_ghex_CO.paa";
						picture="\A3\Soft_F_Exp\Truck_03\Data\Truck_03_fuel_ghex_CO.paa";
					};
				};
			};
		};
	};
	class Truck_03_wreck_Repair: Heli_Light_02_wreck
	{
		author="O&T Expansion Eden";
		_generalMacro="Truck_03_wreck_Repair";
		displayName="$STR_Globe_CfgVehicles_Truck_03_wreck_Repair0";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Truck_03_wreck_Repair.jpg";
		model="\a3\soft_f_epc\truck_03\truck_03_repair_wreck_f";
		editorSubcategory="EdSubcat_Cars";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_CO.paa",
			"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_CO.paa",
			"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ammo_CO.paa"
		};
		class Attributes
		{
			class Selection1
			{
				displayName="$STR_credit_fp2engine";
				property="Selection1";
				control="Combo";
				expression="_this setObjectTextureGlobal [0,_value];";
				defaultValue="'\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_CO.paa'";
				typeName="STRING";
				class Values
				{
					class Value1
					{
						name="$STR_A3_TEXTURESOURCES_HEX0";
						value="\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_CO.paa";
						picture="\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_CO.paa";
					};
					class Value2
					{
						name="$STR_A3_TEXTURESOURCES_GREENHEX0";
						value="\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa";
						picture="\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa";
					};
					class Empty
					{
						name="$STR_A3_CfgVehicles_moduleCuratorSetObjectCost_F_Arguments_show_values_no";
						value="";
						picture="";
					};
				};
			};
			class Selection2: Selection1
			{
				displayName="$STR_a3_helilandinggear_main_title";
				property="Selection2";
				expression="_this setObjectTextureGlobal [1,_value];";
				defaultValue="'\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_CO.paa'";
				class Values: Values
				{
					class Value1: Value1
					{
						value="\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_CO.paa";
						picture="\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_CO.paa";
					};
					class Value2: Value2
					{
						value="\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa";
						picture="\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa";
					};
				};
			};
			class Selection3: Selection1
			{
				displayName="$STR_CRATE_CONTAINER_NAME";
				property="Selection3";
				expression="_this setObjectTextureGlobal [2,_value];";
				defaultValue="'\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ammo_CO.paa'";
				class Values: Values
				{
					class Value1: Value1
					{
						value="\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ammo_CO.paa";
						picture="\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ammo_CO.paa";
					};
					class Value2: Value2
					{
						value="\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ammo_ghex_CO.paa";
						picture="\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ammo_ghex_CO.paa";
					};
				};
			};
		};
	};
	class Truck_01_wreck_Box: Heli_Light_02_wreck
	{
		author="O&T Expansion Eden";
		_generalMacro="Truck_01_wreck_Box";
		displayName="$STR_Globe_CfgVehicles_Truck_01_wreck_Box0";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Truck_01_wreck_Box.jpg";
		model="\a3\soft_f_gamma\truck_01\truck_01_box_wreck_f";
		editorSubcategory="EdSubcat_Cars";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa",
			"\a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa",
			"\A3\Soft_F_Gamma\Truck_01\Data\truck_01_ammo_CO.paa"
		};
		class Attributes
		{
			class Selection1
			{
				displayName="$STR_Globe_hull0";
				property="Selection1";
				control="Combo";
				expression="_this setObjectTextureGlobal [0,_value];";
				defaultValue="'\a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa'";
				typeName="STRING";
				class Values
				{
					class Value1
					{
						name="$STR_A3_TEXTURESOURCES_Sand0";
						value="\a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa";
						picture="\a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa";
					};
					class Value2
					{
						name="$STR_A3_TEXTURESOURCES_Olive0";
						value="\a3\soft_f_Exp\truck_01\data\truck_01_ext_01_olive_co.paa";
						picture="\a3\soft_f_Exp\truck_01\data\truck_01_ext_01_olive_co.paa";
					};
					class Empty
					{
						name="$STR_A3_CfgVehicles_moduleCuratorSetObjectCost_F_Arguments_show_values_no";
						value="";
						picture="";
					};
				};
			};
			class Selection2: Selection1
			{
				displayName="$STR_credit_fp2engine";
				property="Selection2";
				expression="_this setObjectTextureGlobal [1,_value];";
				defaultValue="'\a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa'";
				class Values: Values
				{
					class Value1: Value1
					{
						value="\a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa";
						picture="\a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa";
					};
					class Value2: Value2
					{
						value="\a3\soft_f_Exp\truck_01\data\truck_01_ext_02_olive_co.paa";
						picture="\a3\soft_f_Exp\truck_01\data\truck_01_ext_02_olive_co.paa";
					};
				};
			};
			class Selection3: Selection1
			{
				displayName="$STR_dn_platform";
				property="Selection3";
				expression="_this setObjectTextureGlobal [2,_value];";
				defaultValue="'\a3\soft_f_gamma\truck_01\data\truck_01_ammo_co.paa'";
				class Values: Values
				{
					class Value1: Value1
					{
						value="\a3\soft_f_gamma\truck_01\data\truck_01_ammo_co.paa";
						picture="\a3\soft_f_gamma\truck_01\data\truck_01_ammo_co.paa";
					};
					class Value2: Value2
					{
						value="\A3\Soft_F_Exp\Truck_01\Data\truck_01_ammo_olive_CO.paa";
						picture="\A3\Soft_F_Exp\Truck_01\Data\truck_01_ammo_olive_CO.paa";
					};
				};
			};
		};
	};
	class Truck_01_wreck_Fuel: Heli_Light_02_wreck
	{
		author="O&T Expansion Eden";
		_generalMacro="Truck_01_wreck_fuel";
		displayName="$STR_Globe_CfgVehicles_Truck_01_wreck_fuel0";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Truck_01_wreck_fuel.jpg";
		model="\a3\soft_f_gamma\truck_01\truck_01_fuel_wreck_f";
		editorSubcategory="EdSubcat_Cars";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa",
			"\a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa",
			"\A3\Soft_F_Gamma\Truck_01\Data\truck_01_Fuel_CO.paa"
		};
		class Attributes
		{
			class Selection1
			{
				displayName="$STR_Globe_hull0";
				property="Selection1";
				control="Combo";
				expression="_this setObjectTextureGlobal [0,_value];";
				defaultValue="'\a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa'";
				typeName="STRING";
				class Values
				{
					class Value1
					{
						name="$STR_A3_TEXTURESOURCES_Sand0";
						value="\a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa";
						picture="\a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa";
					};
					class Value2
					{
						name="$STR_A3_TEXTURESOURCES_Olive0";
						value="\a3\soft_f_Exp\truck_01\data\truck_01_ext_01_olive_co.paa";
						picture="\a3\soft_f_Exp\truck_01\data\truck_01_ext_01_olive_co.paa";
					};
					class Empty
					{
						name="$STR_A3_CfgVehicles_moduleCuratorSetObjectCost_F_Arguments_show_values_no";
						value="";
						picture="";
					};
				};
			};
			class Selection2: Selection1
			{
				displayName="$STR_a3_helilandinggear_main_title";
				property="Selection2";
				expression="_this setObjectTextureGlobal [1,_value];";
				defaultValue="'\a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa'";
				class Values: Values
				{
					class Value1: Value1
					{
						value="\a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa";
						picture="\a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa";
					};
					class Value2: Value2
					{
						value="\a3\soft_f_Exp\truck_01\data\truck_01_ext_02_olive_co.paa";
						picture="\a3\soft_f_Exp\truck_01\data\truck_01_ext_02_olive_co.paa";
					};
				};
			};
			class Selection3: Selection1
			{
				displayName="$STR_a3_campaign_b_m03_marker01";
				property="Selection3";
				expression="_this setObjectTextureGlobal [2,_value];";
				defaultValue="'\a3\soft_f_gamma\truck_01\data\truck_01_fuel_co.paa'";
				class Values: Values
				{
					class Value1: Value1
					{
						value="\a3\soft_f_gamma\truck_01\data\truck_01_fuel_co.paa";
						picture="\a3\soft_f_gamma\truck_01\data\truck_01_fuel_co.paa";
					};
					class Value2: Value2
					{
						value="\A3\Soft_F_Exp\Truck_01\Data\truck_01_Fuel_olive_CO.paa";
						picture="\A3\Soft_F_Exp\Truck_01\Data\truck_01_Fuel_olive_CO.paa";
					};
				};
			};
		};
	};
	class Truck_01_wreck_Mover: Heli_Light_02_wreck
	{
		author="O&T Expansion Eden";
		_generalMacro="Truck_01_wreck_mover";
		displayName="$STR_Globe_CfgVehicles_Truck_01_wreck_mover0";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Truck_01_wreck_mover.jpg";
		model="\a3\soft_f_gamma\truck_01\truck_01_mover_wreck_f";
		editorSubcategory="EdSubcat_Cars";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa",
			"\a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa",
			"\A3\Soft_F_Gamma\Truck_01\Data\truck_01_mprimer_CO.paa"
		};
		class Attributes
		{
			class Selection1
			{
				displayName="$STR_Globe_hull0";
				property="Selection1";
				control="Combo";
				expression="_this setObjectTextureGlobal [0,_value];";
				defaultValue="'\a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa'";
				typeName="STRING";
				class Values
				{
					class Value1
					{
						name="$STR_A3_TEXTURESOURCES_Sand0";
						value="\a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa";
						picture="\a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa";
					};
					class Value2
					{
						name="$STR_A3_TEXTURESOURCES_Olive0";
						value="\a3\soft_f_Exp\truck_01\data\truck_01_ext_01_olive_co.paa";
						picture="\a3\soft_f_Exp\truck_01\data\truck_01_ext_01_olive_co.paa";
					};
					class Empty
					{
						name="$STR_A3_CfgVehicles_moduleCuratorSetObjectCost_F_Arguments_show_values_no";
						value="";
						picture="";
					};
				};
			};
			class Selection2: Selection1
			{
				displayName="$STR_a3_helilandinggear_main_title";
				property="Selection2";
				expression="_this setObjectTextureGlobal [1,_value];";
				defaultValue="'\a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa'";
				class Values: Values
				{
					class Value1: Value1
					{
						value="\a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa";
						picture="\a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa";
					};
					class Value2: Value2
					{
						value="\a3\soft_f_Exp\truck_01\data\truck_01_ext_02_olive_co.paa";
						picture="\a3\soft_f_Exp\truck_01\data\truck_01_ext_02_olive_co.paa";
					};
				};
			};
			class Selection3: Selection1
			{
				displayName="$STR_a3_campaign_b_m03_marker01";
				property="Selection3";
				expression="_this setObjectTextureGlobal [2,_value];";
				defaultValue="'\A3\Soft_F_Gamma\Truck_01\Data\truck_01_mprimer_CO.paa'";
				class Values: Values
				{
					class Value1: Value1
					{
						value="\A3\Soft_F_Gamma\Truck_01\Data\truck_01_mprimer_CO.paa";
						picture="\A3\Soft_F_Gamma\Truck_01\Data\truck_01_mprimer_CO.paa";
					};
					class Value2: Value2
					{
						value="\A3\Soft_F_Exp\Truck_01\Data\truck_01_mprimer_olive_CO.paa";
						picture="\A3\Soft_F_Exp\Truck_01\Data\truck_01_mprimer_olive_CO.paa";
					};
				};
			};
		};
	};
	class Van_02_wreck_Medevac: Heli_Light_02_wreck
	{
		author="O&T Expansion Eden";
		_generalMacro="Van_02_wreck_Medevac";
		displayName="$STR_Globe_CfgVehicles_Van_02_wreck_Medevac0";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Van_02_wreck_Medevac.jpg";
		model="\a3\soft_f_orange\van_02\van_02_medevac_wreck_f";
		editorSubcategory="EdSubcat_Cars";
	};
	class Van_02_wreck_Transport: Heli_Light_02_wreck
	{
		author="O&T Expansion Eden";
		_generalMacro="Van_02_wreck_Transport";
		displayName="$STR_Globe_CfgVehicles_Van_02_wreck_Transport0";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Van_02_wreck_Transport.jpg";
		model="\a3\soft_f_orange\van_02\van_02_transport_wreck_f";
		editorSubcategory="EdSubcat_Cars";
	};
	class Van_02_wreck_Vehicle: Heli_Light_02_wreck
	{
		author="O&T Expansion Eden";
		_generalMacro="Van_02_wreck_Vehicle";
		displayName="$STR_Globe_CfgVehicles_Van_02_wreck_Vehicle0";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Van_02_wreck_Vehicle.jpg";
		model="\a3\soft_f_orange\van_02\Van_02_vehicle_wreck_F";
		editorSubcategory="EdSubcat_Cars";
	};
	class Plane_Fighter_01_wreck: Heli_Light_02_wreck
	{
		author="O&T Expansion Eden";
		_generalMacro="Plane_Fighter_01_wreck";
		displayName="$STR_A3_Fighter_01_wreck_name";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Plane_Fighter_01_wreck.jpg";
		model="\A3\Air_F_Jets\Plane_Fighter_01\Plane_Fighter_01_wreck_F.p3d";
		editorSubcategory="EdSubcat_Planes";
	};
	class Plane_Fighter_02_wreck: Heli_Light_02_wreck
	{
		author="O&T Expansion Eden";
		_generalMacro="Plane_Fighter_02_wreck";
		displayName="$STR_A3_Fighter_02_wreck_name";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Plane_Fighter_02_wreck.jpg";
		model="\A3\Air_F_Jets\Plane_Fighter_02\Plane_Fighter_02_wreck_F.p3d";
		editorSubcategory="EdSubcat_Planes";
		memoryPointTaskMarker="TaskMarker_1_pos";
	};
	class Plane_Fighter_03_wreck: Heli_Light_02_wreck
	{
		author="O&T Expansion Eden";
		_generalMacro="Plane_Fighter_03_wreck";
		displayName="$STR_Globe_CfgVehicles_Plane_Fighter_03_wreck0";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Plane_Fighter_03_wreck.jpg";
		model="\A3\Air_F_Gamma\Plane_Fighter_03\Plane_Fighter_03_wreck_F.p3d";
		editorSubcategory="EdSubcat_Planes";
		transportSoldier=1;
		memoryPointTaskMarker="TaskMarker_1_pos";
	};
	class Plane_Fighter_04_wreck: Heli_Light_02_wreck
	{
		author="O&T Expansion Eden";
		_generalMacro="Plane_Fighter_04_wreck";
		displayName="$STR_A3_Fighter_04_wreck_name";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Plane_Fighter_04_wreck.jpg";
		model="\A3\Air_F_Jets\Plane_Fighter_04\Plane_Fighter_04_wreck_F.p3d";
		editorSubcategory="EdSubcat_Planes";
	};
	class Land_V3S_wreck_F: Wreck_base_F
	{
		numberOfDoors=6;
		class UserActions
		{
			class OpenDoor_6
			{
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName="$STR_DN_OUT_O_DOOR";
				position="Door_6_trigger";
				priority=11;
				actionNamedSel="Door_6_action";
				radius=1.75;
				aiMaxRange=5.25;
				onlyForPlayer=0;
				condition="((this animationSourcePhase 'Door_6_sound_source') < 0.5) && (cameraOn isKindOf 'CAManBase')";
				statement="([this, 6, 1] call BIS_fnc_Door)";
			};
			class CloseDoor_6: OpenDoor_6
			{
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName="$STR_DN_OUT_C_DOOR";
				priority=11;
				condition="((this animationSourcePhase 'Door_6_sound_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_6', 0]) != 1) && (cameraOn isKindOf 'CAManBase')";
				statement="([this, 6, 0] call BIS_fnc_Door)";
			};
		};
		actionBegin6="OpenDoor_6";
		actionEnd6="OpenDoor_6";
	};
};
