class CfgPatches
{
	class A3_expEden_Characters_Vests
	{
		addonRootClass="A3_expEden_characters";
		requiredAddons[]=
		{
			"A3_expEden_characters"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Vest_V_Hydrator_tna_G",
			"Vest_V_Hydrator_cbr_G",
			"Vest_V_Hydrator_wdl_G",
			"Vest_V_Hydrator_snake_G",
			"Vest_V_Rangemaster_belt_black",
			"Vest_V_Rangemaster_belt_coyote",
			"Vest_V_Rangemaster_belt_khaki",
			"Vest_V_Rangemaster_belt_woodland",
			"Vest_V_Rangemaster_belt_snakeskin",
			"Vest_V_BandollierB_snake",
			"Vest_V_Rangemaster_belt_ghex",
			"Vest_V_Rangemaster_belt_tropic",
			"Vest_V_HarnessOE",
			"Vest_V_HarnessOEGL",
			"Vest_V_HarnessOE_oucamo",
			"Vest_V_HarnessOEGL_oucamo",
			"Vest_V_HarnessOE_black",
			"Vest_V_HarnessOEGL_black",
			"Vest_V_HarnessOE_ghex",
			"Vest_V_HarnessOEGL_ghex",
			"Vest_V_HarnessO_black",
			"Vest_V_HarnessOGL_black",
			"Vest_V_PlateCarrier_Kerry_oliveGHex",
			"Vest_V_PlateCarrier_Rudwell",
			"Vest_V_BandollierB_wdl",
			"Vest_V_BandollierB_tna",
			"Vest_V_Rebreather_noPop",
			"Vest_V_Rebreather",
			"Vest_V_Hydrator_khk",
			"Vest_V_Hydrator_rgr",
			"Vest_V_Hydrator_blk",
			"Vest_V_Hydrator_oli",
			"Vest_V_Chestrig_khk_noHydrator",
			"Vest_V_Chestrig_rgr_noHydrator",
			"Vest_V_Chestrig_blk_noHydrator",
			"Vest_V_RebreatherB_noPop",
			"Vest_V_RebreatherIR_noPop",
			"Vest_V_RebreatherIA_noPop",
			"Vest_V_PlateCarrier2_khk",
			"Vest_V_PlateCarrier2_cbr",
			"Vest_V_PlateCarrier1_khk",
			"Vest_V_PlateCarrier1_cbr",
			"Vest_V_PlateCarrierIAGL_dgtlOli",
			"Vest_V_PlateCarrierIAGL_oliDgtl",
			"Vest_V_PlateCarrierIAGL_oli_worn",
			"Vest_V_EOD_olive_dgtl",
			"Vest_V_Chestrig_Oli_Light_F",
			"Vest_V_PlateCarrier4_rgr_F"
		};
		weapons[]=
		{
			"V_Hydrator_tna_G",
			"V_Hydrator_cbr_G",
			"V_Hydrator_wdl_G",
			"V_Hydrator_snake_G",
			"V_Rangemaster_belt_black",
			"V_Rangemaster_belt_coyote",
			"V_Rangemaster_belt_khaki",
			"V_Rangemaster_belt_woodland",
			"V_Rangemaster_belt_snakeskin",
			"V_BandollierB_snake",
			"V_Rangemaster_belt_ghex",
			"V_Rangemaster_belt_tropic",
			"V_HarnessOE",
			"V_HarnessOEGL",
			"V_HarnessOE_oucamo",
			"V_HarnessOEGL_oucamo",
			"V_HarnessOE_black",
			"V_HarnessOEGL_black",
			"V_HarnessOE_ghex",
			"V_HarnessOEGL_ghex",
			"V_HarnessO_black",
			"V_HarnessOGL_black",
			"V_PlateCarrier_Kerry_oliveGHex",
			"V_PlateCarrier_Rudwell",
			"V_BandollierB_wdl",
			"V_BandollierB_tna",
			"V_Rebreather_noPop",
			"V_Rebreather",
			"V_Hydrator_khk",
			"V_Hydrator_rgr",
			"V_Hydrator_blk",
			"V_Hydrator_oli",
			"V_Chestrig_khk_noHydrator",
			"V_Chestrig_rgr_noHydrator",
			"V_Chestrig_blk_noHydrator",
			"V_RebreatherB_noPop",
			"V_RebreatherIR_noPop",
			"V_RebreatherIA_noPop",
			"V_PlateCarrier2_khk",
			"V_PlateCarrier2_cbr",
			"V_PlateCarrier1_khk",
			"V_PlateCarrier1_cbr",
			"V_PlateCarrierIAGL_dgtlOli",
			"V_PlateCarrierIAGL_oliDgtl",
			"V_PlateCarrierIAGL_oli_worn",
			"V_EOD_olive_dgtl",
			"V_Chestrig_Oli_Light_F",
			"V_PlateCarrier4_rgr_F"
		};
	};
};
class CfgWeapons
{
	class ItemCore;
	class Vest_Camo_Base: ItemCore
	{
		class ItemInfo;
	};
	class V_HarnessO_gry;
	class V_HarnessOGL_brn;
	class V_BandollierB_khk;
	class V_EOD_olive_F;
	class V_PlateCarrierIAGL_dgtl;
	class Vest_NoCamo_Base;
	class V_PlateCarrier1_rgr: Vest_NoCamo_Base
	{
		class ItemInfo;
	};
	class V_PlateCarrier2_rgr: V_PlateCarrier1_rgr
	{
		class ItemInfo;
	};
	class V_PlateCarrier_Kerry: V_PlateCarrier1_rgr
	{
		class ItemInfo;
	};
	/* class V_Chestrig_oli: Vest_Camo_Base
	{
		class ItemInfo;
	}; */
	class V_Chestrig_khk: Vest_Camo_Base
	{
		class ItemInfo;
	};
	class V_PlateCarrier4_rgr_F: V_PlateCarrier1_rgr
	{
		author="O&T Expansion Eden";
		_generalMacro="V_PlateCarrier4_rgr_F";
		scope=2;
		displayName="$STR_A3_Globe_CfgWeapons_V_PlateCarrier4_rgr_F0";
		picture="\A3\expEden\characters\Vests\Data\UI\icon_V_PlateCarrier4_rgr_F_ca.paa";
		model="\A3\Weapons_f\Ammoboxes\Bags\backpack_Vest.p3d";
		descriptionShort="$STR_A3_SP_AL_III";
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Weapons_f\Ammoboxes\Bags\backpack_Vest.p3d";
			containerClass="Supply90";
			mass=75;
		};
	};
	class V_PlateCarrierIAGL_dgtlOli: V_PlateCarrierIAGL_dgtl
	{
		author="O&T Expansion Eden";
		_generalMacro="V_PlateCarrierIAGL_dgtlOli";
		displayName="$STR_Globe_CfgWeapons_V_PlateCarrierIAGL_dgtlOli0";
		picture="\A3\expEden\characters\Vests\Data\UI\icon_V_PlateCarrierIAGL_dgtlOli_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Beta\INDEP\Data\equip_ia_vest01_co.paa",
			"\A3\Characters_F_Mark\INDEP\Data\ga_carrier_gl_rig_oli_co.paa"
		};
	};
	class V_PlateCarrierIAGL_oliDgtl: V_PlateCarrierIAGL_dgtlOli
	{
		author="O&T Expansion Eden";
		_generalMacro="V_PlateCarrierIAGL_oliDgtl";
		displayName="$STR_Globe_CfgWeapons_V_PlateCarrierIAGL_oliDgtl0";
		picture="\A3\expEden\characters\Vests\Data\UI\icon_V_PlateCarrierIAGL_oliDgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Mark\INDEP\Data\equip_ia_vest01_oli_co.paa",
			"\A3\Characters_F_Mark\INDEP\Data\ga_carrier_gl_rig_digi_co.paa"
		};
	};
	class V_PlateCarrierIAGL_oli_worn: V_PlateCarrierIAGL_dgtlOli
	{
		author="O&T Expansion Eden";
		_generalMacro="V_PlateCarrierIAGL_oli_worn";
		displayName="$STR_Globe_CfgWeapons_V_PlateCarrierIAGL_oli_worn0";
		picture="\A3\expEden\characters\Vests\Data\UI\icon_V_PlateCarrierIAGL_oli_worn_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Mark\INDEP\Data\equip_ia_vest01_oli_co.paa",
			"\a3\characters_f_orange\vests\data\v_eod_protection_olive_co.paa"
		};
	};
	class V_EOD_olive_dgtl: V_EOD_olive_F
	{
		author="O&T Expansion Eden";
		_generalMacro="V_EOD_olive_dgtl";
		scope=2;
		displayName="$STR_Globe_CfgWeapons_V_EOD_olive_dgtl0";
		picture="\A3\expEden\characters\Vests\Data\UI\icon_V_EOD_olive_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Orange\Vests\Data\V_EOD_vest_olive_CO.paa",
			"\A3\Characters_F_Mark\INDEP\Data\ga_carrier_gl_rig_digi_co.paa"
		};
	};
	class V_PlateCarrier1_khk: V_PlateCarrier1_rgr
	{
		author="O&T Expansion Eden";
		_generalMacro="V_PlateCarrier1_khk";
		displayName="$STR_Globe_CfgWeapons_V_PlateCarrier1_khk0";
		picture="\A3\expEden\characters\Vests\Data\UI\icon_V_PlateCarrier1_khk_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\BLUFOR\Data\Vests_khk_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class V_PlateCarrier1_cbr: V_PlateCarrier1_rgr
	{
		author="O&T Expansion Eden";
		_generalMacro="V_PlateCarrier1_cbr";
		displayName="$STR_Globe_CfgWeapons_V_PlateCarrier1_cbr0";
		picture="\A3\expEden\characters\Vests\Data\UI\icon_V_PlateCarrier1_cbr_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\BLUFOR\Data\Vests_cbr_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class V_PlateCarrier2_khk: V_PlateCarrier2_rgr
	{
		author="O&T Expansion Eden";
		_generalMacro="V_PlateCarrier2_khk";
		scope=2;
		displayName="$STR_Globe_CfgWeapons_V_PlateCarrier2_khk0";
		picture="\A3\expEden\characters\Vests\Data\UI\icon_V_PlateCarrier2_khk_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\BLUFOR\Data\Vests_khk_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class V_PlateCarrier2_cbr: V_PlateCarrier2_rgr
	{
		author="O&T Expansion Eden";
		_generalMacro="V_PlateCarrier2_cbr";
		scope=2;
		displayName="$STR_Globe_CfgWeapons_V_PlateCarrier2_cbr0";
		picture="\A3\expEden\characters\Vests\Data\UI\icon_V_PlateCarrier2_cbr_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\BLUFOR\Data\Vests_cbr_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class V_RebreatherB: Vest_Camo_Base
	{
		class ItemInfo;
	};
	class V_RebreatherB_noPop: V_RebreatherB
	{
		author="O&T Expansion Eden";
		_generalMacro="V_RebreatherB_noPop";
		scope=2;
		displayName="$STR_A3_CfgWeapons_Rebreather_noPop0";
		hiddenUnderwaterSelections[]=
		{
		};
		shownUnderwaterSelections[]=
		{
		};
		class ItemInfo: ItemInfo
		{
			hiddenUnderwaterSelections[]=
			{
			};
			shownUnderwaterSelections[]=
			{
			};
		};
	};
	class V_RebreatherIR_noPop: V_RebreatherB_noPop
	{
		author="O&T Expansion Eden";
		_generalMacro="V_RebreatherIR_noPop";
		displayName="$STR_A3_CfgWeapons_Rebreather_noPop1";
		picture="\A3\characters_f\Data\UI\icon_V_RebreatherIR_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\characters_f\common\data\diver_equip_iran_co.paa"
		};
		hiddenUnderwaterSelectionsTextures[]=
		{
			"\A3\characters_f\common\data\diver_equip_iran_co.paa",
			"\A3\characters_f\common\data\diver_equip_iran_co.paa",
			"\A3\characters_f\data\visors_ca.paa"
		};
	};
	class V_RebreatherIA_noPop: V_RebreatherB_noPop
	{
		author="O&T Expansion Eden";
		_generalMacro="V_RebreatherIA_noPop";
		displayName="$STR_A3_CfgWeapons_Rebreather_noPop2";
		picture="\A3\characters_f\Data\UI\icon_V_RebreatherRU_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\characters_f\common\data\diver_equip_rus_co.paa"
		};
		hiddenUnderwaterSelectionsTextures[]=
		{
			"\A3\characters_f\common\data\diver_equip_rus_co.paa",
			"\A3\characters_f\common\data\diver_equip_rus_co.paa",
			"\A3\characters_f\data\visors_ca.paa"
		};
	};
	class V_Chestrig_khk_noHydrator: V_Chestrig_khk
	{
		author="O&T Expansion Eden";
		_generalMacro="V_Chestrig_khk_noHydrator";
		displayName="$STR_Globe_CfgWeapons_V_Chestrig_noHydrator0";
		picture="\a3\expEden\characters\Vests\Data\UI\icon_V_Chestrig_khk_noHydrator_ca.paa";
		model="\a3\characters_f\common\equip_chestrig_light.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Data\equip_chestrig_khk_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\a3\characters_f\common\equip_chestrig_light.p3d";
			mass=16;
			hiddenSelections[]=
			{
				"Camo1"
			};
		};
	};
	class V_Chestrig_rgr_noHydrator: V_Chestrig_khk_noHydrator
	{
		author="O&T Expansion Eden";
		_generalMacro="V_Chestrig_rgr_noHydrator";
		displayName="$STR_Globe_CfgWeapons_V_Chestrig_noHydrator1";
		picture="\a3\expEden\characters\Vests\Data\UI\icon_V_Chestrig_rgr_noHydrator_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Data\equip_chestrig_rgr_co.paa"
		};
	};
	class V_Chestrig_blk_noHydrator: V_Chestrig_khk_noHydrator
	{
		author="O&T Expansion Eden";
		_generalMacro="V_Chestrig_blk_noHydrator";
		displayName="$STR_Globe_CfgWeapons_V_Chestrig_noHydrator2";
		picture="\a3\expEden\characters\Vests\Data\UI\icon_V_Chestrig_blk_noHydrator_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Data\equip_chestrig_blk_co.paa"
		};
	};
	class V_Chestrig_Oli_Light_F: V_Chestrig_khk_noHydrator
	{
		author="O&T Expansion Eden";
		_generalMacro="V_Chestrig_Oli_Light_F";
		displayName="$STR_A3_Globe_CfgWeapons_V_Chestrig_Oli_Light_F0";
		picture="\a3\expEden\characters\Vests\Data\UI\icon_V_Chestrig_Oli_Light_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Data\equip_chestrig_oli_co.paa"
		};
	};
	class V_Hydrator_base: Vest_Camo_Base
	{
		scope=0;
		model="a3\characters_f\common\equip_chestrig.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		descriptionShort="$STR_A3_SP_noarmor";
		mass=7;
		class ItemInfo: ItemInfo
		{
			uniformModel="a3\characters_f\common\equip_chestrig.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2"
			};
			containerClass="Supply0";
			mass=7;
		};
	};
	class V_Hydrator_khk: V_Hydrator_base
	{
		author="O&T Expansion Eden";
		_generalMacro="V_Hydrator_khk";
		scope=2;
		displayName="$STR_Globe_CfgVehicles_B_Hydrator_khk0";
		picture="\A3\Supplies_F_expEden\Bags\Data\UI\icon_B_Hydrator_khk_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"",
			"\A3\Characters_F\BLUFOR\Data\vests_khk_co.paa"
		};
		model="a3\characters_f\common\equip_chestrig.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="a3\characters_f\common\equip_chestrig.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2"
			};
			containerClass="Supply0";
			mass=7;
		};
	};
	class V_Hydrator_rgr: V_Hydrator_base
	{
		author="O&T Expansion Eden";
		_generalMacro="V_Hydrator_rgr";
		scope=2;
		displayName="$STR_Globe_CfgVehicles_B_Hydrator_rgr0";
		picture="\A3\Supplies_F_expEden\Bags\Data\UI\icon_B_Hydrator_rgr_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"",
			"\A3\Characters_f\BLUFOR\data\armor1_co.paa"
		};
	};
	class V_Hydrator_blk: V_Hydrator_base
	{
		author="O&T Expansion Eden";
		_generalMacro="V_Hydrator_blk";
		scope=2;
		displayName="$STR_Globe_CfgVehicles_B_Hydrator_blk0";
		picture="\A3\Supplies_F_expEden\Bags\Data\UI\icon_B_Hydrator_blk_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"",
			"\A3\Characters_F\BLUFOR\Data\vests_blk_co.paa"
		};
	};
	class V_Hydrator_oli: V_Hydrator_base
	{
		author="O&T Expansion Eden";
		_generalMacro="V_Hydrator_oli";
		scope=2;
		displayName="$STR_Globe_CfgVehicles_B_Hydrator_oli0";
		picture="\A3\Supplies_F_expEden\Bags\Data\UI\icon_B_Hydrator_oli_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"",
			"\A3\Characters_F_Beta\INDEP\Data\armor1_oli_co.paa"
		};
	};
	class V_Rebreather: V_RebreatherB
	{
		author="O&T Expansion Eden";
		_generalMacro="V_Rebreather";
		displayName="$STR_A3_V_RebreatherB0";
		picture="\A3\characters_f\Data\UI\icon_V_RebreatherIR_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\characters_f\common\data\diver_equip_co.paa"
		};
		hiddenUnderwaterSelectionsTextures[]=
		{
			"\A3\characters_f\common\data\diver_equip_co.paa",
			"\A3\characters_f\common\data\diver_equip_co.paa",
			"\A3\characters_f\data\visors_ca.paa"
		};
	};
	class V_Rebreather_noPop: V_RebreatherB_noPop
	{
		author="O&T Expansion Eden";
		_generalMacro="V_Rebreather_noPop";
		displayName="$STR_Globe_CfgWeapons_V_Rebreather_noPop0";
		picture="\A3\characters_f\Data\UI\icon_V_RebreatherIR_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\characters_f\common\data\diver_equip_co.paa"
		};
		hiddenUnderwaterSelectionsTextures[]=
		{
			"\A3\characters_f\common\data\diver_equip_co.paa",
			"\A3\characters_f\common\data\diver_equip_co.paa",
			"\A3\characters_f\data\visors_ca.paa"
		};
	};
	class V_PlateCarrier_Kerry_oliveGHex: V_PlateCarrier_Kerry
	{
		author="O&T Expansion Eden";
		_generalMacro="V_PlateCarrier_Kerry_oliveGHex";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_V_plate_carrier_1_CA.paa";
		displayName="$STR_Globe_CfgWeapons_V_PlateCarrier_Kerry_oliveGHex0";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f_exp\vests\data\v_bandollierb_ghex_f_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class V_PlateCarrier_Rudwell: V_PlateCarrier_Kerry_oliveGHex
	{
		author="O&T Expansion Eden";
		_generalMacro="V_PlateCarrier_Rudwell";
		scope=2;
		picture="\A3\Characters_F_Enoch\Vests\Data\UI\icon_V_PlateCarrier1_wdl_ca.paa";
		displayName="$STR_Globe_CfgWeapons_V_PlateCarrier_Rudwell0";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f_enoch\vests\data\vests_wdl_co.paa"
		};
	};
	class V_BandollierB_wdl: V_BandollierB_khk
	{
		author="O&T Expansion Eden";
		_generalMacro="V_BandollierB_wdl";
		displayName="$STR_Globe_CfgWeapons_V_BandollierB_wdl0";
		picture="\a3\expEden\characters\Vests\Data\UI\icon_V_BandollierB_wdl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f_enoch\vests\data\vests_wdl_co.paa"
		};
	};
	class V_BandollierB_tna: V_BandollierB_khk
	{
		author="O&T Expansion Eden";
		_generalMacro="V_BandollierB_tna";
		displayName="$STR_Globe_CfgWeapons_V_BandollierB_tna0";
		picture="\a3\expEden\characters\Vests\Data\UI\icon_V_BandollierB_tna_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f_exp\vests\data\v_platecarrier1_tna_f_co.paa"
		};
	};
	class V_Rangemaster_belt_black: Vest_Camo_Base
	{
		author="O&T Expansion Eden";
		_generalMacro="V_Rangemaster_belt_black";
		scope=2;
		displayName="$STR_Globe_CfgWeapons_V_Rangemaster_belt_black0";
		picture="\a3\expEden\characters\Vests\Data\UI\icon_V_Rangemaster_belt_black_ca.paa";
		model="\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\blufor\data\vests_blk_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_belt";
			containerClass="Supply40";
			mass=5;
		};
	};
	class V_Rangemaster_belt_coyote: V_Rangemaster_belt_black
	{
		author="O&T Expansion Eden";
		_generalMacro="V_Rangemaster_belt_coyote";
		displayName="$STR_Globe_CfgWeapons_V_Rangemaster_belt_coyote0";
		picture="\a3\expEden\characters\Vests\Data\UI\icon_V_Rangemaster_belt_coyote_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\blufor\data\vests_cbr_co.paa"
		};
	};
	class V_Rangemaster_belt_khaki: V_Rangemaster_belt_black
	{
		author="O&T Expansion Eden";
		_generalMacro="V_Rangemaster_belt_khaki";
		displayName="$STR_Globe_CfgWeapons_V_Rangemaster_belt_khaki0";
		picture="\a3\expEden\characters\Vests\Data\UI\icon_V_Rangemaster_belt_khaki_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\blufor\data\vests_khk_co.paa"
		};
	};
	class V_Rangemaster_belt_woodland: V_Rangemaster_belt_black
	{
		author="O&T Expansion Eden";
		_generalMacro="V_Rangemaster_belt_woodland";
		displayName="$STR_Globe_CfgWeapons_V_Rangemaster_belt_woodland0";
		picture="\a3\expEden\characters\Vests\Data\UI\icon_V_Rangemaster_belt_woodland_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f_enoch\vests\data\vests_wdl_co.paa"
		};
	};
	class V_Rangemaster_belt_snakeskin: V_Rangemaster_belt_black
	{
		author="O&T Expansion Eden";
		_generalMacro="V_Rangemaster_belt_snakeskin";
		displayName="$STR_Globe_CfgWeapons_V_Rangemaster_belt_snakeskin0";
		picture="\a3\expEden\characters\Vests\Data\UI\icon_V_Rangemaster_belt_snakeskin_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f_epa\blufor\data\vests_snake_co.paa"
		};
	};
	class V_BandollierB_snake: V_BandollierB_khk
	{
		author="O&T Expansion Eden";
		_generalMacro="V_BandollierB_snake";
		displayName="$STR_Globe_CfgWeapons_V_BandollierB_snake0";
		picture="\a3\expEden\characters\Vests\Data\UI\icon_V_BandollierB_snake_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f_epa\blufor\data\vests_snake_co.paa"
		};
	};
	class V_Rangemaster_belt_ghex: V_Rangemaster_belt_black
	{
		author="O&T Expansion Eden";
		_generalMacro="V_Rangemaster_belt_ghex";
		displayName="$STR_Globe_CfgWeapons_V_Rangemaster_belt_ghex0";
		picture="\a3\expEden\characters\Vests\Data\UI\icon_V_Rangemaster_belt_ghex_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f_exp\vests\data\v_bandollierb_ghex_f_co.paa"
		};
	};
	class V_Rangemaster_belt_tropic: V_Rangemaster_belt_black
	{
		author="O&T Expansion Eden";
		_generalMacro="V_Rangemaster_belt_tropic";
		displayName="$STR_Globe_CfgWeapons_V_Rangemaster_belt_tropic0";
		picture="\a3\expEden\characters\Vests\Data\UI\icon_V_Rangemaster_belt_tropic_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f_exp\vests\data\v_platecarrier1_tna_f_co.paa"
		};
	};
	class V_HarnessOE: Vest_Camo_Base
	{
		author="O&T Expansion Eden";
		_generalMacro="V_HarnessOE";
		scope=2;
		displayName="$STR_Globe_CfgWeapons_V_HarnessOE0";
		picture="\a3\expEden\characters\Vests\Data\UI\icon_V_HarnessOE_ca.paa";
		model="\A3\Characters_F\OPFOR\equip_o_vest01";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\opfor\data\clothing_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F\OPFOR\equip_o_vest01";
			containerClass="Supply0";
			mass=3;
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
		};
	};
	class V_HarnessOEGL: Vest_Camo_Base
	{
		author="O&T Expansion Eden";
		_generalMacro="V_HarnessOEGL";
		scope=2;
		displayName="$STR_Globe_CfgWeapons_V_HarnessOEGL0";
		picture="\a3\expEden\characters\Vests\Data\UI\icon_V_HarnessOEGL_ca.paa";
		model="\A3\Characters_F\OPFOR\equip_o_vest_gl";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\opfor\data\clothing_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F\OPFOR\equip_o_vest_gl";
			containerClass="Supply0";
			mass=3;
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
		};
	};
	class V_HarnessOE_oucamo: V_HarnessOE
	{
		author="O&T Expansion Eden";
		_generalMacro="V_HarnessOE_oucamo";
		displayName="$STR_Globe_CfgWeapons_V_HarnessOE_oucamo0";
		picture="\a3\expEden\characters\Vests\Data\UI\icon_V_HarnessOE_oucamo_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\opfor\data\clothing_oucamo_co.paa",
			""
		};
	};
	class V_HarnessOEGL_oucamo: V_HarnessOEGL
	{
		author="O&T Expansion Eden";
		_generalMacro="V_HarnessOEGL_oucamo";
		displayName="$STR_Globe_CfgWeapons_V_HarnessOEGL_oucamo0";
		picture="\a3\expEden\characters\Vests\Data\UI\icon_V_HarnessOEGL_oucamo_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\opfor\data\clothing_oucamo_co.paa",
			""
		};
	};
	class V_HarnessOE_black: V_HarnessOE
	{
		author="O&T Expansion Eden";
		_generalMacro="V_HarnessOE_black";
		displayName="$STR_Globe_CfgWeapons_V_HarnessOE_black0";
		picture="\a3\expEden\characters\Vests\Data\UI\icon_V_HarnessOE_black_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\opfor\data\clothing_rus_co.paa",
			""
		};
	};
	class V_HarnessOEGL_black: V_HarnessOEGL
	{
		author="O&T Expansion Eden";
		_generalMacro="V_HarnessOEGL_black";
		displayName="$STR_Globe_CfgWeapons_V_HarnessOEGL_black0";
		picture="\a3\expEden\characters\Vests\Data\UI\icon_V_HarnessOEGL_black_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\opfor\data\clothing_rus_co.paa",
			""
		};
	};
	class V_HarnessOE_ghex: V_HarnessOE
	{
		author="O&T Expansion Eden";
		_generalMacro="V_HarnessOE_ghex";
		displayName="$STR_Globe_CfgWeapons_V_HarnessOE_ghex0";
		picture="\a3\expEden\characters\Vests\Data\UI\icon_V_HarnessOE_ghex_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f_exp\opfor\data\clothing_tna_co.paa",
			""
		};
	};
	class V_HarnessOEGL_ghex: V_HarnessOEGL
	{
		author="O&T Expansion Eden";
		_generalMacro="V_HarnessOEGL_ghex";
		displayName="$STR_Globe_CfgWeapons_V_HarnessOEGL_ghex0";
		picture="\a3\expEden\characters\Vests\Data\UI\icon_V_HarnessOEGL_ghex_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f_exp\opfor\data\clothing_tna_co.paa",
			""
		};
	};
	class V_HarnessO_black: V_HarnessOE
	{
		author="O&T Expansion Eden";
		_generalMacro="V_HarnessO_black";
		displayName="$STR_Globe_CfgWeapons_V_HarnessO_black0";
		picture="\a3\expEden\characters\Vests\Data\UI\icon_V_HarnessO_black_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\opfor\data\clothing_rus_co.paa",
			"\a3\characters_f\opfor\data\tech_rus_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F\OPFOR\equip_o_vest01";
			containerClass="Supply160";
			mass=30;
		};
	};
	class V_HarnessOGL_black: V_HarnessOEGL
	{
		author="O&T Expansion Eden";
		_generalMacro="V_HarnessOGL_black";
		scope=1;
		displayName="$STR_Globe_CfgWeapons_V_HarnessOGL_black0";
		picture="\a3\expEden\characters\Vests\Data\UI\icon_V_HarnessOGL_black_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\opfor\data\clothing_rus_co.paa",
			"\a3\characters_f\opfor\data\tech_rus_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F\OPFOR\equip_o_vest_gl";
			containerClass="Supply120";
			mass=15;
		};
	};
	class V_PlateCarrier_CTRG: V_PlateCarrier_Kerry_oliveGHex
	{
		author="O&T Expansion Eden";
		_generalMacro="V_PlateCarrier_CTRG";
		scope=2;
		picture="\A3\Characters_F_Enoch\Vests\Data\UI\icon_V_PlateCarrier1_wdl_ca.paa";
		displayName="$STR_Globe_CfgWeapons_V_PlateCarrier_CTRG0";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_EPA\BLUFOR\Data\vests_snake_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=75;
		};
	};
	class V_Hydrator_snake_G: V_Hydrator_base
	{
		author="O&T Expansion Eden";
		_generalMacro="V_Hydrator_snake_G";
		scope=2;
		displayName="$STR_Globe_CfgVehicles_B_Hydrator_snake_G0";
		picture="\A3\Supplies_F_expEden\Bags\Data\UI\icon_B_Hydrator_snake_G_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"",
			"\A3\Characters_F_EPA\BLUFOR\Data\vests_snake_co.paa"
		};
	};
	class V_Hydrator_tna_G: V_Hydrator_base
	{
		author="O&T Expansion Eden";
		_generalMacro="V_Hydrator_tna_G";
		scope=2;
		displayName="$STR_Globe_CfgVehicles_B_Hydrator_tna_G0";
		picture="\A3\Supplies_F_expEden\Bags\Data\UI\icon_B_Hydrator_tna_G_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"",
			"\A3\Characters_F_Exp\Vests\Data\V_PlateCarrier1_tna_F_co.paa"
		};
	};
	class V_Hydrator_cbr_G: V_Hydrator_base
	{
		author="O&T Expansion Eden";
		_generalMacro="V_Hydrator_cbr_G";
		scope=2;
		displayName="$STR_Globe_CfgVehicles_B_Hydrator_cbr_G0";
		picture="\A3\Supplies_F_expEden\Bags\Data\UI\icon_B_Hydrator_cbr_G_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"",
			"\A3\Characters_F\BLUFOR\Data\Vests_cbr_co.paa"
		};
	};
	class V_Hydrator_wdl_G: V_Hydrator_base
	{
		author="O&T Expansion Eden";
		_generalMacro="V_Hydrator_wdl_G";
		scope=2;
		displayName="$STR_Globe_CfgVehicles_B_Hydrator_wdl_G0";
		picture="\A3\Supplies_F_expEden\Bags\Data\UI\icon_B_Hydrator_wdl_G_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"",
			"\A3\Characters_F_Enoch\Vests\Data\vests_wdl_co.paa"
		};
	};
};
class CfgVehicles
{
	class Vest_Base_F;
	class Vest_V_PlateCarrier4_rgr_F: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_Globe_CfgWeapons_V_PlateCarrier4_rgr_F0";
		author="O&T Expansion Eden";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class V_PlateCarrier4_rgr_F
			{
				name="V_PlateCarrier4_rgr_F";
				count=1;
			};
		};
	};
	class Vest_V_Chestrig_Oli_Light_F: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_Globe_CfgWeapons_V_Chestrig_Oli_Light_F0";
		author="O&T Expansion Eden";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class V_Chestrig_Oli_Light_F
			{
				name="V_Chestrig_Oli_Light_F";
				count=1;
			};
		};
	};
	class Vest_V_PlateCarrierIAGL_dgtlOli: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgWeapons_V_PlateCarrierIAGL_dgtlOli0";
		author="O&T Expansion Eden";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class V_PlateCarrierIAGL_dgtlOli
			{
				name="V_PlateCarrierIAGL_dgtlOli";
				count=1;
			};
		};
	};
	class Vest_V_PlateCarrierIAGL_oliDgtl: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgWeapons_V_PlateCarrierIAGL_oliDgtl0";
		author="O&T Expansion Eden";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class V_PlateCarrierIAGL_oliDgtl
			{
				name="V_PlateCarrierIAGL_oliDgtl";
				count=1;
			};
		};
	};
	class Vest_V_PlateCarrierIAGL_oli_worn: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgWeapons_V_PlateCarrierIAGL_oli_worn0";
		author="O&T Expansion Eden";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class V_PlateCarrierIAGL_oli_worn
			{
				name="V_PlateCarrierIAGL_oli_worn";
				count=1;
			};
		};
	};
	class Vest_V_EOD_olive_dgtl: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgWeapons_V_EOD_olive_dgtl0";
		author="O&T Expansion Eden";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class V_EOD_olive_dgtl
			{
				name="V_EOD_olive_dgtl";
				count=1;
			};
		};
	};
	class Vest_V_PlateCarrier1_khk: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgWeapons_V_PlateCarrier1_khk0";
		author="O&T Expansion Eden";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class V_PlateCarrier1_khk
			{
				name="V_PlateCarrier1_khk";
				count=1;
			};
		};
	};
	class Vest_V_PlateCarrier1_cbr: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgWeapons_V_PlateCarrier1_cbr0";
		author="O&T Expansion Eden";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class V_PlateCarrier1_cbr
			{
				name="V_PlateCarrier1_cbr";
				count=1;
			};
		};
	};
	class Vest_V_PlateCarrier2_khk: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgWeapons_V_PlateCarrier2_khk0";
		author="O&T Expansion Eden";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class V_PlateCarrier2_khk
			{
				name="V_PlateCarrier2_khk";
				count=1;
			};
		};
	};
	class Vest_V_PlateCarrier2_cbr: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgWeapons_V_PlateCarrier2_cbr0";
		author="O&T Expansion Eden";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class V_PlateCarrier2_cbr
			{
				name="V_PlateCarrier2_cbr";
				count=1;
			};
		};
	};
	class Vest_V_RebreatherB_noPop: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgWeapons_Rebreather_noPop0";
		author="O&T Expansion Eden";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class V_RebreatherB_noPop
			{
				name="V_RebreatherB_noPop";
				count=1;
			};
		};
	};
	class Vest_V_RebreatherIR_noPop: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgWeapons_Rebreather_noPop1";
		author="O&T Expansion Eden";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class V_RebreatherIR_noPop
			{
				name="V_RebreatherIR_noPop";
				count=1;
			};
		};
	};
	class Vest_V_RebreatherIA_noPop: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgWeapons_Rebreather_noPop2";
		author="O&T Expansion Eden";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class V_RebreatherIA_noPop
			{
				name="V_RebreatherIA_noPop";
				count=1;
			};
		};
	};
	class Vest_V_Chestrig_khk_noHydrator: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgWeapons_V_Chestrig_noHydrator0";
		author="O&T Expansion Eden";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class V_Chestrig_khk_noHydrator
			{
				name="V_Chestrig_khk_noHydrator";
				count=1;
			};
		};
	};
	class Vest_V_Chestrig_rgr_noHydrator: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgWeapons_V_Chestrig_noHydrator1";
		author="O&T Expansion Eden";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class V_Chestrig_rgr_noHydrator
			{
				name="V_Chestrig_rgr_noHydrator";
				count=1;
			};
		};
	};
	class Vest_V_Chestrig_blk_noHydrator: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgWeapons_V_Chestrig_noHydrator2";
		author="O&T Expansion Eden";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class V_Chestrig_blk_noHydrator
			{
				name="V_Chestrig_blk_noHydrator";
				count=1;
			};
		};
	};
	class Vest_V_Hydrator_khk: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_B_Hydrator_khk0";
		author="O&T Expansion Eden";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class V_Hydrator_khk
			{
				name="V_Hydrator_khk";
				count=1;
			};
		};
	};
	class Vest_V_Hydrator_rgr: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_B_Hydrator_rgr0";
		author="O&T Expansion Eden";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class V_Hydrator_rgr
			{
				name="V_Hydrator_rgr";
				count=1;
			};
		};
	};
	class Vest_V_Hydrator_blk: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_B_Hydrator_blk0";
		author="O&T Expansion Eden";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class V_Hydrator_blk
			{
				name="V_Hydrator_blk";
				count=1;
			};
		};
	};
	class Vest_V_Hydrator_oli: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_B_Hydrator_oli0";
		author="O&T Expansion Eden";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class V_Hydrator_oli
			{
				name="V_Hydrator_oli";
				count=1;
			};
		};
	};
	class Vest_V_Rebreather_noPop: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgWeapons_V_Rebreather_noPop0";
		author="O&T Expansion Eden";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class V_Rebreather_noPop
			{
				name="V_Rebreather_noPop";
				count=1;
			};
		};
	};
	class Vest_V_Rebreather: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_V_RebreatherB0";
		author="O&T Expansion Eden";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class V_Rebreather
			{
				name="V_Rebreather";
				count=1;
			};
		};
	};
	class Vest_V_PlateCarrier_Kerry_oliveGHex: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgWeapons_V_PlateCarrier_Kerry_oliveGHex0";
		author="O&T Expansion Eden";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class V_PlateCarrier_Kerry_oliveGHex
			{
				name="V_PlateCarrier_Kerry_oliveGHex";
				count=1;
			};
		};
	};
	class Vest_V_PlateCarrier_Rudwell: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgWeapons_V_PlateCarrier_Rudwell0";
		author="O&T Expansion Eden";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class V_PlateCarrier_Rudwell
			{
				name="V_PlateCarrier_Rudwell";
				count=1;
			};
		};
	};
	class Vest_V_BandollierB_wdl: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgWeapons_V_BandollierB_wdl0";
		author="O&T Expansion Eden";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class V_BandollierB_wdl
			{
				name="V_BandollierB_wdl";
				count=1;
			};
		};
	};
	class Vest_V_BandollierB_tna: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgWeapons_V_BandollierB_tna0";
		author="O&T Expansion Eden";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class V_BandollierB_tna
			{
				name="V_BandollierB_tna";
				count=1;
			};
		};
	};
	class Vest_V_HarnessOGL_black: Vest_Base_F
	{
		scope=1;
		scopeCurator=0;
		displayName="$STR_Globe_CfgWeapons_V_HarnessOGL_black0";
		author="O&T Expansion Eden";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class V_HarnessOGL_black
			{
				name="V_HarnessOGL_black";
				count=1;
			};
		};
	};
	class Vest_V_HarnessO_black: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgWeapons_V_HarnessO_black0";
		author="O&T Expansion Eden";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class V_HarnessO_black
			{
				name="V_HarnessO_black";
				count=1;
			};
		};
	};
	class Vest_V_HarnessOEGL_ghex: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgWeapons_V_HarnessOEGL_ghex0";
		author="O&T Expansion Eden";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class V_HarnessOEGL_ghex
			{
				name="V_HarnessOEGL_ghex";
				count=1;
			};
		};
	};
	class Vest_V_HarnessOE_ghex: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgWeapons_V_HarnessOE_ghex0";
		author="O&T Expansion Eden";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class V_HarnessOE_ghex
			{
				name="V_HarnessOE_ghex";
				count=1;
			};
		};
	};
	class Vest_V_HarnessOEGL_black: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgWeapons_V_HarnessOEGL_black0";
		author="O&T Expansion Eden";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class V_HarnessOEGL_black
			{
				name="V_HarnessOEGL_black";
				count=1;
			};
		};
	};
	class Vest_V_HarnessOE_black: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgWeapons_V_HarnessOE_black0";
		author="O&T Expansion Eden";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class V_HarnessOE_black
			{
				name="V_HarnessOE_black";
				count=1;
			};
		};
	};
	class Vest_V_HarnessOEGL_oucamo: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgWeapons_V_HarnessOEGL_oucamo0";
		author="O&T Expansion Eden";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class V_HarnessOEGL_oucamo
			{
				name="V_HarnessOEGL_oucamo";
				count=1;
			};
		};
	};
	class Vest_V_HarnessOE_oucamo: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgWeapons_V_HarnessOE_oucamo0";
		author="O&T Expansion Eden";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class V_HarnessOE_oucamo
			{
				name="V_HarnessOE_oucamo";
				count=1;
			};
		};
	};
	class Vest_V_HarnessOEGL: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgWeapons_V_HarnessOEGL0";
		author="O&T Expansion Eden";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class V_HarnessOEGL
			{
				name="V_HarnessOEGL";
				count=1;
			};
		};
	};
	class Vest_V_HarnessOE: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgWeapons_V_HarnessOE0";
		author="O&T Expansion Eden";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class V_HarnessOE
			{
				name="V_HarnessOE";
				count=1;
			};
		};
	};
	class Vest_V_Rangemaster_belt_tropic: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgWeapons_V_Rangemaster_belt_tropic0";
		author="O&T Expansion Eden";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class V_Rangemaster_belt_tropic
			{
				name="V_Rangemaster_belt_tropic";
				count=1;
			};
		};
	};
	class Vest_V_Rangemaster_belt_ghex: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgWeapons_V_Rangemaster_belt_ghex0";
		author="O&T Expansion Eden";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class V_Rangemaster_belt_ghex
			{
				name="V_Rangemaster_belt_ghex";
				count=1;
			};
		};
	};
	class Vest_V_BandollierB_snake: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgWeapons_V_BandollierB_snake0";
		author="O&T Expansion Eden";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class V_BandollierB_snake
			{
				name="V_BandollierB_snake";
				count=1;
			};
		};
	};
	class Vest_V_Rangemaster_belt_snakeskin: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgWeapons_V_Rangemaster_belt_snakeskin0";
		author="O&T Expansion Eden";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class V_Rangemaster_belt_snakeskin
			{
				name="V_Rangemaster_belt_snakeskin";
				count=1;
			};
		};
	};
	class Vest_V_Rangemaster_belt_woodland: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgWeapons_V_Rangemaster_belt_woodland0";
		author="O&T Expansion Eden";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class V_Rangemaster_belt_woodland
			{
				name="V_Rangemaster_belt_woodland";
				count=1;
			};
		};
	};
	class Vest_V_Rangemaster_belt_khaki: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgWeapons_V_Rangemaster_belt_khaki0";
		author="O&T Expansion Eden";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class V_Rangemaster_belt_khaki
			{
				name="V_Rangemaster_belt_khaki";
				count=1;
			};
		};
	};
	class Vest_V_Rangemaster_belt_coyote: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgWeapons_V_Rangemaster_belt_coyote0";
		author="O&T Expansion Eden";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class V_Rangemaster_belt_coyote
			{
				name="V_Rangemaster_belt_coyote";
				count=1;
			};
		};
	};
	class Vest_V_Rangemaster_belt_black: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgWeapons_V_Rangemaster_belt_black0";
		author="O&T Expansion Eden";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class V_Rangemaster_belt_black
			{
				name="V_Rangemaster_belt_black";
				count=1;
			};
		};
	};
	class Vest_V_Hydrator_snake_G: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_B_Hydrator_snake_G0";
		author="O&T Expansion Eden";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class V_Hydrator_snake_G
			{
				name="V_Hydrator_snake_G";
				count=1;
			};
		};
	};
	class Vest_V_Hydrator_tna_G: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_B_Hydrator_tna_G0";
		author="O&T Expansion Eden";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class V_Hydrator_tna_G
			{
				name="V_Hydrator_tna_G";
				count=1;
			};
		};
	};
	class Vest_V_Hydrator_cbr_G: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_B_Hydrator_cbr_G0";
		author="O&T Expansion Eden";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class V_Hydrator_cbr_G
			{
				name="V_Hydrator_cbr_G";
				count=1;
			};
		};
	};
	class Vest_V_Hydrator_wdl_G: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_B_Hydrator_wdl_G0";
		author="O&T Expansion Eden";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class V_Hydrator_wdl_G
			{
				name="V_Hydrator_wdl_G";
				count=1;
			};
		};
	};
};