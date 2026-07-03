class CfgPatches
{
	class Props_Globe_Items_Supplies
	{
		addonRootClass="A3_Props_F_Globe";
		requiredAddons[]=
		{
			"A3_Props_F_Globe_Items"
		};
		requiredVersion=0.1;
		units[]=
		{
			"BackpackBox_Univarsal_01_G",
			"WoodenCrate_01_Container",
			"WoodenCrate_01_stack_x3_Container",
			"WoodenCrate_01_stack_x5_Container",
			"BackpackBox_AssaultPack",
			"BackpackBox_Kitbag",
			"BackpackBox_TacticalPack",
			"BackpackBox_FieldPack",
			"BackpackBox_Carryall",
			"BackpackBox_Bergen",
			"BackpackBox_Messenger",
			"BackpackBox_LegStrapBag",
			"BackpackBox_CivilianBackpack_01"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Land_WoodenCrate_01_F;
	class Land_WoodenCrate_01_stack_x3_F;
	class Land_WoodenCrate_01_stack_x5_F;
	class Items_base_F;
	class BackpackBox_base: Items_base_F
	{
		author="O&T Expansion Eden";
		mapSize=0.24969999;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.100001;
			verticalOffsetWorld=0;
			init="''";
		};
		_generalMacro="BackpackBox_base";
		scope=0;
		scopeCurator=0;
		displayName="$STR_A3_CfgVehicles_PlasticCase_01_base_F0";
		model="\A3\Weapons_F\empty.p3d";
		editorSubcategory="EdSubcat_Storage";
		vehicleClass="Container";
		waterLeakiness=100;
		maximumLoad=2000;
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		transportMaxBackpacks=1;
		transportAmmo=0;
		transportRepair=0;
		transportFuel=0;
		supplyRadius=1.4;
		icon="iconBackpack";
		reversed=1;
		class TransportItems
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		hiddenselections[]=
		{
			"camo"
		};
		hiddenselectionsTextures[]=
		{
			"#(argb,8,8,3)color(1,0.6,0.1,1.0,ca)"
		};
		class Attributes
		{
			class Pack
			{
				displayName="$STR_A3_expEden_Leaflet_05_announcements_Attributes_SwitchTexture_displayName_F0";
				property="Pack";
				control="Combo";
				expression="_this setObjectTextureGlobal [0,_value];";
				typeName="STRING";
			};
		};
	};
	class BackpackBox_AssaultPack: BackpackBox_base
	{
		author="O&T Expansion Eden";
		mapSize=0.24969999;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.100001;
			verticalOffsetWorld=0;
			init="''";
		};
		_generalMacro="BackpackBox_AssaultPack";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\BackpackBox_AssaultPack.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_B_assaultPackG0";
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
		maximumLoad=160;
		hiddenSelectionsTextures[]=
		{
			"\A3\weapons_f\ammoboxes\bags\data\backpack_compact_khk_co.paa"
		};
		class Attributes: Attributes
		{
			class Pack: Pack
			{
				defaultValue="'\A3\weapons_f\ammoboxes\bags\data\backpack_compact_khk_co.paa'";
				class Values
				{
					class 1
					{
						name="$STR_A3_B_AssaultPack_khk0";
						value="\A3\weapons_f\ammoboxes\bags\data\backpack_compact_khk_co.paa";
						picture="\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_AssaultPack_khk_ca.paa";
					};
					class 2
					{
						name="$STR_A3_B_AssaultPack_dgtl0";
						value="\A3\weapons_f\ammoboxes\bags\data\backpack_compact_digi_co.paa";
						picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
					};
					class 3
					{
						name="$STR_A3_B_AssaultPack_rgr0";
						value="\A3\weapons_f\ammoboxes\bags\data\backpack_compact_rgr_co.paa";
						picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_rgr_ca.paa";
					};
					class 4
					{
						name="$STR_A3_B_AssaultPack_sgg0";
						value="\A3\weapons_f\ammoboxes\bags\data\backpack_compact_sgg_co.paa";
						picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_sgg_ca.paa";
					};
					class 5
					{
						name="$STR_A3_B_AssaultPack_blk0";
						value="\A3\weapons_f\ammoboxes\bags\data\backpack_compact_blk_co.paa";
						picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_blk_ca.paa";
					};
					class 6
					{
						name="$STR_A3_B_AssaultPack_cbr0";
						value="\A3\weapons_f\ammoboxes\bags\data\backpack_compact_cbr_co.paa";
						picture="\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_AssaultPack_cbr_ca.paa";
					};
					class 7
					{
						name="$STR_A3_B_AssaultPack_mcamo0";
						value="\A3\weapons_f\ammoboxes\bags\data\backpack_compact_mcamo_co.paa";
						picture="\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Compact_mcamo_ca.paa";
					};
					class 8
					{
						name="$STR_A3_B_AssaultPack_ocamo0";
						value="\A3\weapons_f\ammoboxes\bags\data\backpack_compact_ocamo_co.paa";
						picture="\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_AssaultPack_ocamo_ca.paa";
					};
					class 9
					{
						name="$STR_A3_B_AssaultPack_tna_F0";
						picture="\A3\Supplies_F_Exp\Bags\Data\UI\icon_B_AssaultPack_tna_F_ca.paa";
						value="\A3\Supplies_F_Exp\Bags\Data\B_AssaultPack_tna_F_co.paa";
					};
					class 10
					{
						name="$STR_A3_C_CfgVehicles_B_AssaultPack_wdl_F0";
						picture="\a3\Supplies_F_Enoch\Bags\Data\UI\icon_B_AssaultPack_wdl_F_ca.paa";
						value="\A3\Supplies_F_Enoch\bags\data\backpack_compact_wdl_co.paa";
					};
					class 11
					{
						name="$STR_A3_C_CfgVehicles_B_AssaultPack_eaf_F0";
						picture="\a3\Supplies_F_Enoch\Bags\Data\UI\icon_B_AssaultPack_eaf_F_ca.paa";
						value="\A3\Supplies_F_Enoch\bags\data\backpack_compact_eaf_co.paa";
					};
				};
			};
		};
	};
	class BackpackBox_Kitbag: BackpackBox_base
	{
		author="O&T Expansion Eden";
		mapSize=0.24969999;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.100001;
			verticalOffsetWorld=0;
			init="''";
		};
		_generalMacro="BackpackBox_Kitbag";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\BackpackBox_Kitbag.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_BackpackBox_Kitbag0";
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		maximumLoad=280;
		hiddenSelectionsTextures[]=
		{
			"\A3\weapons_f\ammoboxes\bags\data\backpack_fast_rgr_co.paa"
		};
		class Attributes: Attributes
		{
			class Pack: Pack
			{
				defaultValue="'\A3\weapons_f\ammoboxes\bags\data\backpack_fast_rgr_co.paa'";
				class Values
				{
					class 1
					{
						name="$STR_A3_B_AssaultPack_khk0";
						value="\A3\weapons_f\ammoboxes\bags\data\backpack_fast_rgr_co.paa";
						picture="\A3\Weapons_F\ammoboxes\bags\data\ui\icon_B_C_Kitbag_rgr";
					};
					class 2
					{
						name="$STR_A3_B_Kitback_mcamo0";
						value="\A3\weapons_f\ammoboxes\bags\data\backpack_fast_mcamo_co.paa";
						picture="\A3\Weapons_F\ammoboxes\bags\data\ui\icon_B_C_Kitbag_mcamo";
					};
					class 3
					{
						name="$STR_A3_B_Kitback_sgg0";
						value="\A3\weapons_f\ammoboxes\bags\data\backpack_fast_sgg_co.paa";
						picture="\A3\Weapons_F\ammoboxes\bags\data\ui\icon_B_C_Kitbag_sgg";
					};
					class 4
					{
						name="$STR_A3_B_Kitback_cbr0";
						value="\A3\weapons_f\ammoboxes\bags\data\backpack_fast_cbr_co.paa";
						picture="\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_Kitbag_cbr_ca.paa";
					};
					class 5
					{
						name="$STR_A3_B_Kitback_tan0";
						value="\A3\weapons_f\ammoboxes\bags\data\backpack_fast_tan_co.paa";
						picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Kitbag_tan_ca.paa";
					};
					class 6
					{
						name="$STR_Globe_CfgVehicle_B_Kitbag_blk0";
						value="\A3\weapons_f\ammoboxes\bags\data\backpack_fast_blk_co.paa";
						picture="\A3\Supplies_F_expEden\Bags\Data\UI\icon_b_c_kitbag_blk.paa";
					};
					class 7
					{
						name="$STR_Globe_CfgVehicle_B_Kitbag_dgtl0";
						value="\A3\weapons_f\ammoboxes\bags\data\backpack_fast_digi_co.paa";
						picture="\A3\Supplies_F_expEden\Bags\Data\UI\icon_b_c_kitbag_dgtl.paa";
					};
				};
			};
		};
	};
	class BackpackBox_TacticalPack: BackpackBox_base
	{
		author="O&T Expansion Eden";
		mapSize=0.24969999;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.100001;
			verticalOffsetWorld=0;
			init="''";
		};
		_generalMacro="BackpackBox_TacticalPack";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\BackpackBox_TacticalPack.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_BackpackBox_TacticalPack0";
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Small";
		maximumLoad=240;
		hiddenSelectionsTextures[]=
		{
			"\A3\weapons_f\ammoboxes\bags\data\backpack_small_rgr_co.paa"
		};
		class Attributes: Attributes
		{
			class Pack: Pack
			{
				defaultValue="'\A3\weapons_f\ammoboxes\bags\data\backpack_small_rgr_co.paa'";
				class Values
				{
					class 1
					{
						name="$STR_A3_B_TacticalPack_rgr0";
						value="\A3\weapons_f\ammoboxes\bags\data\backpack_small_rgr_co.paa";
						picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Small_rgr.paa";
					};
					class 2
					{
						name="$STR_A3_B_TacticalPack_mcamo0";
						picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Small_mcamo.paa";
						value="\A3\weapons_f\ammoboxes\bags\data\backpack_small_mcamo_co.paa";
					};
					class 3
					{
						name="$STR_A3_B_TacticalPack_ocamo0";
						picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Small_hex.paa";
						value="\A3\weapons_f\ammoboxes\bags\data\backpack_small_hex_co.paa";
					};
					class 4
					{
						name="$STR_A3_B_TacticalPack_blk0";
						picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Small_blk.paa";
						value="\A3\weapons_f\ammoboxes\bags\data\backpack_small_blk_co.paa";
					};
					class 5
					{
						name="$STR_A3_B_TacticalPack_oli0";
						picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Small_oli.paa";
						value="\A3\weapons_f\ammoboxes\bags\data\backpack_small_oli_co.paa";
					};
				};
			};
		};
	};
	class BackpackBox_FieldPack: BackpackBox_base
	{
		author="O&T Expansion Eden";
		mapSize=0.24969999;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.100001;
			verticalOffsetWorld=0;
			init="''";
		};
		_generalMacro="BackpackBox_FieldPack";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\BackpackBox_FieldPack.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_BackpackBox_FieldPack0";
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Gorod";
		maximumLoad=200;
		hiddenSelectionsTextures[]=
		{
			"\A3\weapons_f\ammoboxes\bags\data\backpack_gorod_cbr_co.paa"
		};
		class Attributes: Attributes
		{
			class Pack: Pack
			{
				defaultValue="'\A3\weapons_f\ammoboxes\bags\data\backpack_gorod_cbr_co.paa'";
				class Values
				{
					class 1
					{
						name="$STR_A3_B_FieldPack_cbr0";
						value="\A3\weapons_f\ammoboxes\bags\data\backpack_gorod_cbr_co.paa";
						picture="\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Gorod_cbr_ca.paa";
					};
					class 2
					{
						name="$STR_A3_B_FieldPack_khk0";
						value="\A3\weapons_f\ammoboxes\bags\data\backpack_gorod_khk_co.paa";
						picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Gorod_khk_ca.paa";
					};
					class 3
					{
						name="$STR_A3_B_FieldPack_ocamo0";
						value="\A3\weapons_f\ammoboxes\bags\data\backpack_gorod_hex_co.paa";
						picture="\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Gorod_hex_ca.paa";
					};
					class 4
					{
						name="$STR_A3_B_FieldPack_oucamo0";
						value="\A3\weapons_f\ammoboxes\bags\data\backpack_gorod_oucamo_co.paa";
						picture="\A3\Weapons_F\Ammoboxes\Bags\data\ui\icon_B_C_Gorod_oucamo_ca.paa";
					};
					class 5
					{
						name="$STR_A3_B_FieldPack_blk0";
						value="\A3\weapons_f\ammoboxes\bags\data\backpack_gorod_blk_co.paa";
						picture="\A3\Weapons_F_beta\ammoboxes\bags\data\ui\icon_B_Gorod_blk_ca.paa";
					};
					class 6
					{
						name="$STR_A3_B_FieldPack_oli0";
						value="\A3\weapons_f\ammoboxes\bags\data\backpack_gorod_oli_co.paa";
						picture="\A3\Weapons_F_beta\ammoboxes\bags\data\ui\icon_B_Gorod_oli_ca.paa";
					};
					class 7
					{
						name="$STR_A3_CfgVehicles_B_FieldPack_ghex_F0";
						picture="\A3\Supplies_F_Exp\Bags\Data\UI\icon_B_FieldPack_ghex_F_ca.paa";
						value="\A3\Supplies_F_Exp\Bags\Data\B_FieldPack_ghex_F_co.paa";
					};
					class 8
					{
						name="$STR_A3_C_CfgVehicles_B_FieldPack_green_F0";
						picture="\a3\Supplies_F_Enoch\Bags\Data\UI\icon_B_FieldPack_green_F_ca.paa";
						value="\A3\Supplies_F_Enoch\bags\data\backpack_gorod_RUkhk_co.paa";
					};
					class 9
					{
						name="$STR_A3_C_CfgVehicles_B_FieldPack_taiga_F0";
						picture="\a3\Supplies_F_Enoch\Bags\Data\UI\icon_B_FieldPack_taiga_F_ca.paa";
						value="\A3\Supplies_F_Enoch\bags\data\backpack_gorod_RUtaiga_co.paa";
					};
				};
			};
		};
	};
	class BackpackBox_Carryall: BackpackBox_base
	{
		author="O&T Expansion Eden";
		mapSize=0.24969999;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.100001;
			verticalOffsetWorld=0;
			init="''";
		};
		_generalMacro="BackpackBox_Carryall";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\BackpackBox_Carryall.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_BackpackBox_Carryall0";
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		maximumLoad=320;
		hiddenSelectionsTextures[]=
		{
			"\A3\weapons_f\ammoboxes\bags\data\backpack_tortila_khk_co.paa"
		};
		class Attributes: Attributes
		{
			class Pack: Pack
			{
				defaultValue="'\A3\weapons_f\ammoboxes\bags\data\backpack_tortila_khk_co.paa'";
				class Values
				{
					class 1
					{
						name="$STR_A3_B_Carryall_khk0";
						value="\A3\weapons_f\ammoboxes\bags\data\backpack_tortila_khk_co.paa";
						picture="\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Tortila_khk.paa";
					};
					class 2
					{
						name="$STR_A3_B_Carryall_oucamo0";
						value="\A3\weapons_f\ammoboxes\bags\data\backpack_tortila_oucamo_co.paa";
						picture="\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Tortila_oucamo.paa";
					};
					class 3
					{
						name="$STR_A3_B_Carryall_mcamo0";
						value="\A3\weapons_f\ammoboxes\bags\data\backpack_tortila_mcamo_co.paa";
						picture="\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Tortila_mcamo.paa";
					};
					class 4
					{
						name="$STR_A3_B_Carryall_cbr0";
						value="\A3\weapons_f\ammoboxes\bags\data\backpack_tortila_cbr_co.paa";
						picture="\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Tortila_cbr.paa";
					};
					class 5
					{
						name="$STR_A3_B_Carryall_blk0";
						value="\A3\weapons_f\ammoboxes\bags\data\backpack_tortila_blk_co.paa";
						picture="\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Tortila_blk.paa";
					};
					class 6
					{
						name="$STR_A3_B_Carryall_oli0";
						value="\A3\weapons_f\ammoboxes\bags\data\backpack_tortila_oli_co.paa";
						picture="\A3\weapons_f_beta\ammoboxes\bags\data\ui\icon_B_Tortila_oli_ca.paa";
					};
					class 7
					{
						name="$STR_A3_CfgVehicles_B_Carryall_ghex_F0";
						picture="\A3\Supplies_F_Exp\Bags\Data\UI\icon_B_Carryall_ghex_F_ca.paa";
						value="\A3\Supplies_F_Exp\Bags\Data\B_Carryall_ghex_F_co.paa";
					};
					class 8
					{
						name="$STR_A3_C_CfgVehicles_B_Carryall_green_F0";
						picture="\a3\Supplies_F_Enoch\Bags\Data\UI\icon_B_Carryall_green_F_ca.paa";
						value="\A3\Supplies_F_Enoch\bags\data\backpack_tortila_RUkhk_co.paa";
					};
					class 9
					{
						name="$STR_A3_C_CfgVehicles_B_Carryall_taiga_F0";
						picture="\a3\Supplies_F_Enoch\Bags\Data\UI\icon_B_Carryall_taiga_F_ca.paa";
						value="\A3\Supplies_F_Enoch\bags\data\backpack_tortila_RUtaiga_co.paa";
					};
					class 10
					{
						name="$STR_A3_C_CfgVehicles_B_Carryall_wdl_F0";
						picture="\a3\Supplies_F_Enoch\Bags\Data\UI\icon_B_Carryall_wdl_F_ca.paa";
						value="\A3\Supplies_F_Enoch\bags\data\backpack_tortila_wdl_co.paa";
					};
					class 11
					{
						name="$STR_A3_C_CfgVehicles_B_Carryall_eaf_F0";
						picture="\a3\Supplies_F_Enoch\Bags\Data\UI\icon_B_Carryall_eaf_F_ca.paa";
						value="\A3\Supplies_F_Enoch\bags\data\backpack_tortila_eaf_co.paa";
					};
				};
			};
		};
	};
	class BackpackBox_Bergen: BackpackBox_base
	{
		author="O&T Expansion Eden";
		mapSize=0.24969999;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.100001;
			verticalOffsetWorld=0;
			init="''";
		};
		_generalMacro="BackpackBox_Bergen";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\BackpackBox_Bergen.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_BackpackBox_Bergen0";
		model="\A3\Weapons_F\Ammoboxes\Bags\Backpack_Bergen_F.p3d";
		maximumLoad=480;
		hiddenSelections[]=
		{
			"camo_1"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Supplies_F_Exp\Bags\Data\Bergen_mcamo_CO.paa"
		};
		class Attributes: Attributes
		{
			class Pack: Pack
			{
				defaultValue="'\A3\Supplies_F_Exp\Bags\Data\Bergen_mcamo_CO.paa'";
				class Values
				{
					class 1
					{
						name="$STR_A3_CfgVehicles_B_Bergen_mcamo0";
						picture="\A3\Supplies_F_Exp\Bags\Data\UI\Icon_B_Bergen_mcamo_CA.paa";
						value="\A3\Supplies_F_Exp\Bags\Data\Bergen_mcamo_CO.paa";
					};
					class 2
					{
						name="$STR_A3_CfgVehicles_B_Bergen_dgtl0";
						picture="\A3\Supplies_F_Exp\Bags\Data\UI\Icon_B_Bergen_digi_CA.paa";
						value="\A3\Supplies_F_Exp\Bags\Data\Bergen_digi_CO.paa";
					};
					class 3
					{
						name="$STR_A3_CfgVehicles_B_Bergen_hex0";
						picture="\A3\Supplies_F_Exp\Bags\Data\UI\Icon_B_Bergen_hex_CA.paa";
						value="\A3\Supplies_F_Exp\Bags\Data\Bergen_hex_CO.paa";
					};
					class 4
					{
						name="$STR_A3_CfgVehicles_B_Bergen_tna0";
						picture="\A3\Supplies_F_Exp\Bags\Data\UI\Icon_B_Bergen_tna_CA.paa";
						value="\A3\Supplies_F_Exp\Bags\Data\Bergen_tna_CO.paa";
					};
				};
			};
		};
	};
	class BackpackBox_Messenger: BackpackBox_base
	{
		author="O&T Expansion Eden";
		mapSize=0.24969999;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.100001;
			verticalOffsetWorld=0;
			init="''";
		};
		_generalMacro="BackpackBox_Messenger";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\BackpackBox_Messenger.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_Orange_CfgMods_messengerBag_displayName";
		model="\A3\Supplies_F_Orange\Bags\B_Messenger_F.p3d";
		maximumLoad=140;
		hiddenSelectionsTextures[]=
		{
			"\A3\Supplies_F_Orange\Bags\Data\B_Messenger_Coyote_F_CO.paa"
		};
		class Attributes: Attributes
		{
			class Pack: Pack
			{
				defaultValue="'\A3\Supplies_F_Orange\Bags\Data\B_Messenger_Coyote_F_CO.paa'";
				class Values
				{
					class 1
					{
						name="$STR_A3_CfgVehicles_B_Messenger_Coyote_F0";
						picture="\A3\Supplies_F_Orange\Bags\Data\UI\Icon_B_Messenger_Coyote_CA.paa";
						value="\A3\Supplies_F_Orange\Bags\Data\B_Messenger_Coyote_F_CO.paa";
					};
					class 2
					{
						name="$STR_A3_CfgVehicles_B_Messenger_Olive_F0";
						picture="\A3\Supplies_F_Orange\Bags\Data\UI\Icon_B_Messenger_Olive_CA.paa";
						value="\A3\Supplies_F_Orange\Bags\Data\B_Messenger_Olive_F_CO.paa";
					};
					class 3
					{
						name="$STR_A3_CfgVehicles_B_Messenger_Black_F0";
						picture="\A3\Supplies_F_Orange\Bags\Data\UI\Icon_B_Messenger_Black_CA.paa";
						value="\A3\Supplies_F_Orange\Bags\Data\B_Messenger_Black_F_CO.paa";
					};
					class 4
					{
						name="$STR_A3_CfgVehicles_B_Messenger_Gray_F0";
						picture="\A3\Supplies_F_Orange\Bags\Data\UI\Icon_B_Messenger_Gray_CA.paa";
						value="\A3\Supplies_F_Orange\Bags\Data\B_Messenger_Gray_F_CO.paa";
					};
				};
			};
		};
	};
	class BackpackBox_LegStrapBag: BackpackBox_base
	{
		author="O&T Expansion Eden";
		mapSize=0.24969999;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.100001;
			verticalOffsetWorld=0;
			init="''";
		};
		_generalMacro="BackpackBox_LegStrapBag";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\BackpackBox_LegStrapBag.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_Orange_CfgMods_legStrapBag_displayName";
		model="\A3\Characters_F_Orange\Vests\V_LegStrapBag_F.p3d";
		maximumLoad=80;
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Orange\Vests\Data\V_LegStrapBag_black_CO.paa"
		};
		class Attributes: Attributes
		{
			class Pack: Pack
			{
				defaultValue="'\A3\Characters_F_Orange\Vests\Data\V_LegStrapBag_black_CO.paa'";
				class Values
				{
					class 1
					{
						name="$STR_A3_CfgWeapons_V_LegStrapBag_black_F0";
						picture="\A3\Characters_F_Orange\Vests\Data\UI\icon_V_LegStrapBag_black_CA.paa";
						value="\A3\Characters_F_Orange\Vests\Data\V_LegStrapBag_black_CO.paa";
					};
					class 2
					{
						name="$STR_A3_CfgWeapons_V_LegStrapBag_coyote_F0";
						picture="\A3\Characters_F_Orange\Vests\Data\UI\icon_V_LegStrapBag_olive_CA.paa";
						value="\A3\Characters_F_Orange\Vests\Data\V_LegStrapBag_olive_CO.paa";
					};
					class 3
					{
						name="$STR_A3_CfgWeapons_V_LegStrapBag_coyote_F0";
						picture="\A3\Characters_F_Orange\Vests\Data\UI\icon_V_LegStrapBag_coyote_CA.paa";
						value="\A3\Characters_F_Orange\Vests\Data\V_LegStrapBag_coyote_CO.paa";
					};
				};
			};
		};
	};
	class BackpackBox_CivilianBackpack_01: BackpackBox_base
	{
		author="O&T Expansion Eden";
		mapSize=0.24969999;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.100001;
			verticalOffsetWorld=0;
			init="''";
		};
		_generalMacro="BackpackBox_CivilianBackpack_01";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\BackpackBox_CivilianBackpack_01.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_AOW_CfgMods_civilianBackpack_displayName";
		model="\a3\Supplies_F_AoW\Bags\B_CivilianBackpack_01_F.p3d";
		maximumLoad=240;
		hiddenSelectionsTextures[]=
		{
			"a3\Supplies_F_AoW\Bags\Data\CivilianBackpack_01_Sport_Blue_F_co.paa"
		};
		class Attributes: Attributes
		{
			class Pack: Pack
			{
				defaultValue="'\a3\Supplies_F_AoW\Bags\Data\CivilianBackpack_01_Sport_Blue_F_co.paa'";
				class Values
				{
					class 1
					{
						name="$STR_A3_CfgVehicles_B_CivilianBackpack_01_Sport_Blue_F0";
						picture="\a3\Supplies_F_AoW\Bags\Data\UI\icon_B_CivilianBackpack_01_Sport_Blue_F_ca.paa";
						value="\a3\Supplies_F_AoW\Bags\Data\CivilianBackpack_01_Sport_Blue_F_co.paa";
					};
					class 2
					{
						name="$STR_A3_CfgVehicles_B_CivilianBackpack_01_Sport_Red_F0";
						picture="\a3\Supplies_F_AoW\Bags\Data\UI\icon_B_CivilianBackpack_01_Sport_Red_F_ca.paa";
						value="a3\Supplies_F_AoW\Bags\Data\CivilianBackpack_01_Sport_Red_F_co.paa";
					};
					class 3
					{
						name="$STR_A3_CfgVehicles_B_CivilianBackpack_01_Sport_Green_F0";
						picture="\a3\Supplies_F_AoW\Bags\Data\UI\icon_B_CivilianBackpack_01_Sport_Green_F_ca.paa";
						value="a3\Supplies_F_AoW\Bags\Data\CivilianBackpack_01_Sport_Green_F_co.paa";
					};
					class 4
					{
						name="$STR_A3_CfgVehicles_B_CivilianBackpack_01_Everyday_Black_F0";
						picture="\a3\Supplies_F_AoW\Bags\Data\UI\icon_B_CivilianBackpack_01_Everyday_Black_F_ca.paa";
						value="a3\Supplies_F_AoW\Bags\Data\CivilianBackpack_01_Everyday_Black_F_co.paa";
					};
					class 5
					{
						name="$STR_A3_CfgVehicles_B_CivilianBackpack_01_Everyday_Vrana_F0";
						picture="\a3\Supplies_F_AoW\Bags\Data\UI\icon_B_CivilianBackpack_01_Everyday_Vrana_F_ca.paa";
						value="a3\Supplies_F_AoW\Bags\Data\CivilianBackpack_01_Everyday_Vrana_F_co.paa";
					};
					class 6
					{
						name="$STR_A3_CfgVehicles_B_CivilianBackpack_01_Everyday_Astra_F0";
						picture="\a3\Supplies_F_AoW\Bags\Data\UI\icon_B_CivilianBackpack_01_Everyday_Astra_F_ca.paa";
						value="a3\Supplies_F_AoW\Bags\Data\CivilianBackpack_01_Everyday_Astra_F_co.paa";
					};
					class 7
					{
						name="$STR_A3_CfgVehicles_B_CivilianBackpack_01_Everyday_IDAP_F0";
						picture="\a3\Supplies_F_AoW\Bags\Data\UI\icon_B_CivilianBackpack_01_Everyday_IDAP_F_ca.paa";
						value="a3\Supplies_F_AoW\Bags\Data\CivilianBackpack_01_Everyday_IDAP_F_co.paa";
					};
				};
			};
		};
	};
	class WoodenCrate_01_Container: Land_WoodenCrate_01_F
	{
		author="O&T Expansion Eden";
		_generalMacro="WoodenCrate_01_Container";
		displayName="$STR_Globe_CfgVehicles_WoodenCrate_01_Container0";
		DLC="";
		maximumLoad=2000;
		transportMaxWeapons=24;
		transportMaxMagazines=128;
		transportMaxBackpacks=12;
		transportAmmo=0;
		transportRepair=0;
		transportFuel=0;
		supplyRadius=2;
		class TransportItems
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class WoodenCrate_01_stack_x3_Container: Land_WoodenCrate_01_stack_x3_F
	{
		author="O&T Expansion Eden";
		_generalMacro="WoodenCrate_01_stack_x3_Container";
		displayName="$STR_Globe_CfgVehicles_WoodenCrate_01_stack_x3_Container0";
		DLC="";
		maximumLoad=4000;
		transportMaxWeapons=34;
		transportMaxMagazines=181;
		transportMaxBackpacks=17;
		transportAmmo=0;
		transportRepair=0;
		transportFuel=0;
		supplyRadius=2;
		class TransportItems
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class WoodenCrate_01_stack_x5_Container: Land_WoodenCrate_01_stack_x5_F
	{
		author="O&T Expansion Eden";
		_generalMacro="WoodenCrate_01_stack_x5_Container";
		displayName="$STR_Globe_CfgVehicles_WoodenCrate_01_stack_x5_Container0";
		DLC="";
		maximumLoad=10000;
		transportMaxWeapons=54;
		transportMaxMagazines=286;
		transportMaxBackpacks=27;
		transportAmmo=0;
		transportRepair=0;
		transportFuel=0;
		supplyRadius=2;
		class TransportItems
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class BackpackBox_Univarsal_01_G: BackpackBox_base
	{
		author="O&T Expansion Eden";
		mapSize=0.24969999;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.100001;
			verticalOffsetWorld=0;
			init="''";
		};
		_generalMacro="BackpackBox_Univarsal_01_G";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\BackpackBox_Univarsal_01_G.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_BackpackBox_Univarsal_01_G0";
		model="\a3\drones_f\weapons_f_gamma\ammoboxes\bags\uav_backpack_f.p3d";
        maximumLoad=400;
		hiddenSelectionsTextures[]=
		{
			"\a3\drones_f\weapons_f_gamma\ammoboxes\bags\data\uav_backpack_cbr_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Supplies_F_expEden\Bags\Data\B_Universal_01_G.rvmat"
		};
		class Attributes: Attributes
		{
			class Pack: Pack
			{
				defaultValue="'\a3\drones_f\weapons_f_gamma\ammoboxes\bags\data\uav_backpack_cbr_co.paa'";
				class Values
				{
					class 1
					{
						name="$STR_Globe_CfgVehicles_B_Universal_01_G_cbr0";
						value="\a3\drones_f\weapons_f_gamma\ammoboxes\bags\data\uav_backpack_cbr_co.paa";
						picture="\a3\drones_f\weapons_f_gamma\ammoboxes\bags\data\ui\icon_b_c_uav_cbr_ca.paa";
					};
					class 2
					{
						name="$STR_Globe_CfgVehicles_B_Universal_01_G_oli0";
						value="\a3\drones_f\weapons_f_gamma\ammoboxes\bags\data\uav_backpack_oli_co.paa";
						picture="\a3\drones_f\weapons_f_gamma\ammoboxes\bags\data\ui\icon_b_c_uav_oli_ca.paa";
					};
					class 3
					{
						name="$STR_Globe_CfgVehicles_B_Universal_01_G_rgr0";
						value="\a3\drones_f\weapons_f_gamma\ammoboxes\bags\data\uav_backpack_rgr_co.paa";
						picture="\a3\drones_f\weapons_f_gamma\ammoboxes\bags\data\ui\icon_b_c_uav_rgr_ca.paa";
					};
				};
			};
		};
	};
};
