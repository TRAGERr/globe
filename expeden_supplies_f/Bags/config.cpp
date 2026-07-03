class CfgPatches
{
	class A3_Supplies_F_expEden_Bags
	{
		addonRootClass="A3_Supplies_F_expEden";
		requiredAddons[]=
		{
			"A3_Supplies_F_expEden"
		};
		requiredVersion=0.1;
		units[]=
		{
			"B_Universal_01_G_cbr",
			"B_Universal_01_G_oli",
			"B_Universal_01_G_rgr",
			"B_Hydrator_tna_G",
			"B_Hydrator_cbr_G",
			"B_Hydrator_wdl_G",
			"B_Hydrator_snake_G",
			"B_Rangemaster_belt_I_recon_JTAC_G",
			"B_FieldPack_cbr_ALAT_01_G",
			"B_AssaultPack_cbr_ALAT_02_G",
			"B_AssaultPack_ocamo_LAT_02_G",
			"B_AssaultPack_rgr_ALAT_01_G",
			"B_AssaultPack_rgr_ALAT_02_G",
			"B_Kitbag_mcamo_Eng_Future_G",
			"B_Rangemaster_belt",
			"B_Rangemaster_belt_black",
			"B_Rangemaster_belt_coyote",
			"B_Rangemaster_belt_khaki",
			"B_Rangemaster_belt_woodland",
			"B_Rangemaster_belt_snakeskin",
			"B_Rangemaster_belt_ghex",
			"B_Rangemaster_belt_tropic",
			"B_Hydrator_khk",
			"B_Hydrator_rgr",
			"B_Hydrator_blk",
			"B_Hydrator_oli",
			"B_SCBA_01_noPop_respirator",
			"B_SCBA_01_noPop_regulator",
			"B_CombinationUnitRespirator_01_noPop_respirator",
			"B_CombinationUnitRespirator_01_noPop_regulator",
			"B_Kitbag_dgtl_bombmaker",
			"B_Carryall_blk",
			"B_Kitbag_blk",
			"B_Kitbag_dgtl",
			"B_Carryall_taiga_mine",
			"B_Carryall_khk_Sparrowhawk_F",
			"B_AssaultPack_Ammo_rgr",
			"B_Kitbag_sgg_sturrock",
			"B_Carryall_cbr_LAT_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class B_AssaultPack_cbr;
	class B_AssaultPack_ocamo;
	class B_Kitbag_mcamo_Eng;
	class B_CombinationUnitRespirator_01_F;
	class B_SCBA_01_F;
	class B_Carryall_Base;
	class B_Kitbag_Base;
	class B_Carryall_taiga_Exp_F;
	class B_TacticalPack_oli;
	class B_FieldPack_ocamo;
	class B_FieldPack_cbr;
	class B_Carryall_ocamo;
	class B_Kitbag_mcamo;
	class Bag_Base;
	class B_AssaultPack_rgr;
	class B_Kitbag_sgg;
	class B_Carryall_cbr;
	class B_Kitbag_sgg_sturrock: B_Kitbag_sgg
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="B_Kitbag_sgg_sturrock";
		scope=1;
		class TransportMagazines
		{
			class _xx_ChemlightRed
			{
				magazine="Chemlight_red";
				count=2;
			};
			class _xx_ChemlightYellow
			{
				magazine="Chemlight_yellow";
				count=2;
			};
			class _xx_ChemlightBlue
			{
				magazine="Chemlight_blue";
				count=2;
			};
			class _xx_ChemlightGreen
			{
				magazine="Chemlight_Green";
				count=2;
			};
		};
	};
	class B_Carryall_cbr_LAT_F: B_Carryall_cbr
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="B_Carryall_cbr_LAT_F";
		scope=1;
		class TransportItems
		{
		};
		class TransportMagazines
		{
			class _xx_RPG32_F
			{
				magazine="RPG32_F";
				count=1;
			};
			class _xx_RPG32_HE_F
			{
				magazine="RPG32_HE_F";
				count=2;
			};
		};
	};
	class B_AssaultPack_Ammo_rgr: B_AssaultPack_rgr
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="B_AssaultPack_Ammo_rgr";
		scope=1;
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=4;
			};
		};
		class TransportMagazines
		{
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine="200Rnd_65x39_cased_Box";
				count=1;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=1;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=1;
			};
		};
	};
	class B_Carryall_khk_Sparrowhawk_F: B_AssaultPack_rgr
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="B_Carryall_khk_Sparrowhawk_F";
		scope=1;
		class TransportMagazines
		{
			class _xx_200Rnd_556x45_Box_F
			{
				magazine="200Rnd_556x45_Box_F";
				count=2;
			};
		};
	};
	class B_Hydrator_olive_F: Bag_Base
	{
		author="$STR_A3_Bohemia_Interactive";
		mapSize=0.47;
		_generalMacro="B_Hydrator_olive_F";
		scope=1;
		displayName="$STR_A3_CfgVehicles_B_Messenger_Coyote_F0";
		picture="\A3\characters_f\data\ui\icon_B_AssaultPack_CA.paa";
		model="\A3\Characters_F\ProxyModels\backpack.p3d";
		maximumLoad=0;
		mass=8;
	};
	class B_Kitbag_mcamo_ALAT: B_Kitbag_mcamo
	{
		author="O&T Expansion Eden";
		_generalMacro="B_Kitbag_mcamo_ALAT";
		scope=1;
		class TransportMagazines
		{
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=3;
			};
		};
	};
	class B_Kitbag_mcamo_ALAT2: B_Kitbag_mcamo
	{
		author="O&T Expansion Eden";
		_generalMacro="B_Kitbag_mcamo_ALAT";
		scope=1;
		class TransportMagazines
		{
			class _xx_MRAWS_HEAT_F
			{
				magazine="MRAWS_HEAT_F";
				count=2;
			};
			class _xx_MRAWS_HE_F
			{
				magazine="MRAWS_HE_F";
				count=2;
			};
		};
	};
	class B_Carryall_cbr_ALAT: B_Carryall_cbr
	{
		author="O&T Expansion Eden";
		_generalMacro="B_Carryall_ocamo_ALAT";
		scope=1;
		class TransportMagazines
		{
			class _xx_RPG32_F
			{
				magazine="RPG32_F";
				count=3;
			};
			class _xx_RPG32_HE_F
			{
				magazine="RPG32_HE_F";
				count=2;
			};
		};
	};
	class B_Carryall_cbr_ALAT2: B_Carryall_cbr
	{
		author="O&T Expansion Eden";
		_generalMacro="B_Carryall_ocamo_ALAT2";
		scope=1;
		class TransportMagazines
		{
			class _xx_RPG7_F
			{
				magazine="RPG7_F";
				count=4;
			};
		};
	};
	class B_FieldPack_ocamo_LAT2: B_FieldPack_ocamo
	{
		author="O&T Expansion Eden";
		_generalMacro="B_FieldPack_ocamo_LAT2";
		scope=1;
		class TransportMagazines
		{
			class _xx_RPG7_F
			{
				magazine="RPG7_F";
				count=3;
			};
		};
	};
	class B_TacticalPack_oli_ALAT: B_TacticalPack_oli
	{
		author="O&T Expansion Eden";
		_generalMacro="B_Kitbag_mcamo_ALAT";
		scope=1;
		class TransportMagazines
		{
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=3;
			};
		};
	};
	class B_TacticalPack_oli_ALAT2: B_TacticalPack_oli
	{
		author="O&T Expansion Eden";
		_generalMacro="B_Kitbag_mcamo_ALAT";
		scope=1;
		class TransportMagazines
		{
			class _xx_MRAWS_HEAT_F
			{
				magazine="MRAWS_HEAT_F";
				count=3;
			};
			class _xx_MRAWS_HE_F
			{
				magazine="MRAWS_HE_F";
				count=1;
			};
		};
	};	
	class B_Carryall_taiga_mine: B_Carryall_taiga_Exp_F
	{
		author="O&T Expansion Eden";
		_generalMacro="B_Carryall_taiga_mine";
		scope=1;
		class TransportMagazines
		{
			class _xx_APERSMine_Range_Mag
			{
				magazine="APERSMine_Range_Mag";
				count=2;
			};
			class _xx_APERSBoundingMine_Range_Mag
			{
				magazine="APERSBoundingMine_Range_Mag";
				count=2;
			};
			class _xx_FlareTripMine_Wire_Mag
			{
				magazine="FlareTripMine_Wire_Mag";
				count=6;
			};
			class _xx_APERSTripMine_Wire_Mag
			{
				magazine="APERSTripMine_Wire_Mag";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
			class _xx_MineDetector
			{
				name="MineDetector";
				count=1;
			};
		};
	};
	class B_Kitbag_blk: B_Kitbag_Base
	{
		author="O&T Expansion Eden";
		_generalMacro="B_Kitbag_blk";
		scope=2;
		picture="\A3\Supplies_F_expEden\Bags\Data\UI\icon_b_c_kitbag_blk.paa";
		displayName="$STR_Globe_CfgVehicle_B_Kitbag_blk0";
		hiddenSelectionsTextures[]=
		{
			"\A3\weapons_f\ammoboxes\bags\data\backpack_fast_blk_co.paa"
		};
	};
	class B_Kitbag_dgtl: B_Kitbag_Base
	{
		author="O&T Expansion Eden";
		_generalMacro="B_Kitbag_dgtl";
		scope=2;
		picture="\A3\Supplies_F_expEden\Bags\Data\UI\icon_b_c_kitbag_dgtl.paa";
		displayName="$STR_Globe_CfgVehicle_B_Kitbag_dgtl0";
		hiddenSelectionsTextures[]=
		{
			"\A3\weapons_f\ammoboxes\bags\data\backpack_fast_digi_co.paa"
		};
	};
	class B_Kitbag_dgtl_bombmaker: B_Kitbag_dgtl
	{
		scope=1;
		class TransportMagazines
		{
			class _xx_HandGrenadeATMine
			{
				magazine="HandGrenadeATMine";
				count=3;
			};
		};
	};
	class B_SCBA_01_noPop_respirator: B_SCBA_01_F
	{
		author="O&T Expansion Eden";
		_generalMacro="B_SCBA_01_noPop_respirator";
		displayName="$STR_Globe_CfgVehicles_B_SCBA_01_noPop_respirator0";
		hiddenSelectionsTextures[]=
		{
			"a3\Supplies_F_Enoch\bags\data\b_scba_01_co.paa",
			"a3\Supplies_F_Enoch\bags\data\b_scba_01_co.paa",
			""
		};
	};
	class B_SCBA_01_noPop_regulator: B_SCBA_01_F
	{
		author="O&T Expansion Eden";
		_generalMacro="B_SCBA_01_noPop_regulator";
		displayName="$STR_Globe_CfgVehicles_B_SCBA_01_noPop_regulator0";
		hiddenSelectionsTextures[]=
		{
			"a3\Supplies_F_Enoch\bags\data\b_scba_01_co.paa",
			"",
			"a3\Supplies_F_Enoch\bags\data\b_scba_01_co.paa"
		};
	};
	class B_CombinationUnitRespirator_01_noPop_respirator: B_CombinationUnitRespirator_01_F
	{
		author="O&T Expansion Eden";
		_generalMacro="B_CombinationUnitRespirator_01_noPop_respirator";
		scope=2;
		displayName="$STR_Globe_CfgVehicles_B_CombinationUnitRespirator_01_noPop_respirator0";
		hiddenSelectionsTextures[]=
		{
			"a3\Supplies_F_Enoch\bags\data\b_cur_01_co.paa",
			"a3\supplies_f_enoch\bags\data\b_cur_01_co.paa",
			"a3\supplies_f_enoch\bags\data\b_cur_01_co.paa",
			"",
			""
		};
	};
	class B_CombinationUnitRespirator_01_noPop_regulator: B_CombinationUnitRespirator_01_F
	{
		author="O&T Expansion Eden";
		_generalMacro="B_CombinationUnitRespirator_01_noPop_regulator";
		scope=2;
		displayName="$STR_Globe_CfgVehicles_B_CombinationUnitRespirator_01_noPop_regulator0";
		hiddenSelectionsTextures[]=
		{
			"a3\Supplies_F_Enoch\bags\data\b_cur_01_co.paa",
			"a3\supplies_f_enoch\bags\data\b_cur_01_co.paa",
			"",
			"a3\supplies_f_enoch\bags\data\b_cur_01_co.paa",
			""
		};
	};
	class B_Hydrator_base: Bag_Base
	{
		scope=0;
		model="a3\characters_f\common\equip_chestrig.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		maximumLoad=0;
		mass=7;
	};
	class B_Hydrator_khk: B_Hydrator_base
	{
		author="O&T Expansion Eden";
		_generalMacro="B_Hydrator_khk";
		scope=2;
		displayName="$STR_Globe_CfgVehicles_B_Hydrator_khk0";
		picture="\A3\Supplies_F_expEden\Bags\Data\UI\icon_B_Hydrator_khk_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"",
			"\A3\Characters_F\BLUFOR\Data\vests_khk_co.paa"
		};
	};
	class B_Hydrator_rgr: B_Hydrator_base
	{
		author="O&T Expansion Eden";
		_generalMacro="B_Hydrator_rgr";
		scope=2;
		displayName="$STR_Globe_CfgVehicles_B_Hydrator_rgr0";
		picture="\A3\Supplies_F_expEden\Bags\Data\UI\icon_B_Hydrator_rgr_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"",
			"\A3\Characters_f\BLUFOR\data\armor1_co.paa"
		};
	};
	class B_Hydrator_blk: B_Hydrator_base
	{
		author="O&T Expansion Eden";
		_generalMacro="B_Hydrator_blk";
		scope=2;
		displayName="$STR_Globe_CfgVehicles_B_Hydrator_blk0";
		picture="\A3\Supplies_F_expEden\Bags\Data\UI\icon_B_Hydrator_blk_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"",
			"\A3\Characters_F\BLUFOR\Data\vests_blk_co.paa"
		};
	};
	class B_Hydrator_oli: B_Hydrator_base
	{
		author="O&T Expansion Eden";
		_generalMacro="B_Hydrator_oli";
		scope=2;
		displayName="$STR_Globe_CfgVehicles_B_Hydrator_oli0";
		picture="\A3\Supplies_F_expEden\Bags\Data\UI\icon_B_Hydrator_oli_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"",
			"\A3\Characters_F_Beta\INDEP\Data\armor1_oli_co.paa"
		};
	};
	class B_Rangemaster_belt: Bag_Base
	{
		author="O&T Expansion Eden";
		_generalMacro="B_Rangemaster_belt";
		scope=2;
		displayName="$STR_V_Rangemaster_belt0";
		picture="\A3\Characters_F\data\ui\icon_V_Belt_CA.paa";
		model="\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\blufor\data\vests_rgr_co.paa"
		};
		maximumLoad=40;
		mass=5;
	};
	class B_Rangemaster_belt_black: B_Rangemaster_belt
	{
		author="O&T Expansion Eden";
		_generalMacro="B_Rangemaster_belt_black";
		scope=2;
		displayName="$STR_Globe_CfgWeapons_V_Rangemaster_belt_black0";
		picture="\a3\expEden\characters\Vests\Data\UI\icon_V_Rangemaster_belt_black_ca.paa";
		model="\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\blufor\data\vests_blk_co.paa"
		};
	};
	class B_Rangemaster_belt_coyote: B_Rangemaster_belt
	{
		author="O&T Expansion Eden";
		_generalMacro="B_Rangemaster_belt_coyote";
		displayName="$STR_Globe_CfgWeapons_V_Rangemaster_belt_coyote0";
		picture="\a3\expEden\characters\Vests\Data\UI\icon_V_Rangemaster_belt_coyote_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\blufor\data\vests_cbr_co.paa"
		};
	};
	class B_Rangemaster_belt_khaki: B_Rangemaster_belt
	{
		author="O&T Expansion Eden";
		_generalMacro="B_Rangemaster_belt_khaki";
		displayName="$STR_Globe_CfgWeapons_V_Rangemaster_belt_khaki0";
		picture="\a3\expEden\characters\Vests\Data\UI\icon_V_Rangemaster_belt_khaki_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\blufor\data\vests_khk_co.paa"
		};
	};
	class B_Rangemaster_belt_woodland: B_Rangemaster_belt
	{
		author="O&T Expansion Eden";
		_generalMacro="B_Rangemaster_belt_woodland";
		displayName="$STR_Globe_CfgWeapons_V_Rangemaster_belt_woodland0";
		picture="\a3\expEden\characters\Vests\Data\UI\icon_V_Rangemaster_belt_woodland_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f_enoch\vests\data\vests_wdl_co.paa"
		};
	};
	class B_Rangemaster_belt_snakeskin: B_Rangemaster_belt
	{
		author="O&T Expansion Eden";
		_generalMacro="B_Rangemaster_belt_snakeskin";
		displayName="$STR_Globe_CfgWeapons_V_Rangemaster_belt_snakeskin0";
		picture="\a3\expEden\characters\Vests\Data\UI\icon_V_Rangemaster_belt_snakeskin_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f_epa\blufor\data\vests_snake_co.paa"
		};
	};
	class B_Rangemaster_belt_ghex: B_Rangemaster_belt
	{
		author="O&T Expansion Eden";
		_generalMacro="B_Rangemaster_belt_ghex";
		displayName="$STR_Globe_CfgWeapons_V_Rangemaster_belt_ghex0";
		picture="\a3\expEden\characters\Vests\Data\UI\icon_V_Rangemaster_belt_ghex_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f_exp\vests\data\v_bandollierb_ghex_f_co.paa"
		};
	};
	class B_Rangemaster_belt_tropic: B_Rangemaster_belt
	{
		author="O&T Expansion Eden";
		_generalMacro="B_Rangemaster_belt_tropic";
		displayName="$STR_Globe_CfgWeapons_V_Rangemaster_belt_tropic0";
		picture="\a3\expEden\characters\Vests\Data\UI\icon_V_Rangemaster_belt_tropic_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f_exp\vests\data\v_platecarrier1_tna_f_co.paa"
		};
	};
	class B_Kitbag_mcamo_Eng_Future_G: B_Kitbag_mcamo_Eng
	{
		author="O&T Expansion Eden";
		_generalMacro="B_Kitbag_mcamo_Eng_Future_G";
		scope=1;
		class TransportMagazines
		{
			class _xx_SatchelCharge_Remote_Mag
			{
				magazine="SatchelCharge_Remote_Mag";
				count=1;
			};
		};
		class TransportItems
		{
		};
	};
	class B_AssaultPack_rgr_ALAT_01_G: B_AssaultPack_rgr
	{
		author="O&T Expansion Eden";
		_generalMacro="B_AssaultPack_rgr_ALAT_01_G";
		scope=1;
		class TransportMagazines
		{
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=2;
			};
		};
	};
	class B_AssaultPack_rgr_ALAT_02_G: B_AssaultPack_rgr
	{
		author="O&T Expansion Eden";
		_generalMacro="B_AssaultPack_rgr_ALAT_02_G";
		scope=1;
		class TransportMagazines
		{
			class _xx_MRAWS_HEAT_F
			{
				magazine="MRAWS_HEAT_F";
				count=2;
			};
			class _xx_MRAWS_HE_F
			{
				magazine="MRAWS_HE_F";
				count=1;
			};
		};
	};
	class B_AssaultPack_ocamo_LAT_02_G: B_AssaultPack_ocamo
	{
		author="O&T Expansion Eden";
		_generalMacro="B_AssaultPack_ocamo_LAT_02_G";
		scope=1;
		class TransportMagazines
		{
			class _xx_RPG7_F
			{
				magazine="RPG7_F";
				count=4;
			};
		};
	};
	class B_FieldPack_cbr_ALAT_01_G: B_FieldPack_cbr
	{
		author="O&T Expansion Eden";
		_generalMacro="B_FieldPack_cbr_ALAT_01_G";
		scope=1;
		class TransportMagazines
		{
			class _xx_RPG32_F
			{
				magazine="RPG32_F";
				count=2;
			};
			class _xx_RPG32_HE_F
			{
				magazine="RPG32_HE_F";
				count=2;
			};
		};
	};
	class B_AssaultPack_cbr_ALAT_02_G: B_AssaultPack_cbr
	{
		author="O&T Expansion Eden";
		_generalMacro="B_AssaultPack_cbr_ALAT_02_G";
		scope=1;
		class TransportMagazines
		{
			class _xx_RPG7_F
			{
				magazine="RPG7_F";
				count=4;
			};
		};
	};
	class B_Rangemaster_belt_I_recon_JTAC_G: B_Rangemaster_belt
	{
		author="O&T Expansion Eden";
		_generalMacro="B_Rangemaster_belt_I_recon_JTAC_G";
		scope=1;
		class TransportMagazines
		{
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=1;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine="1Rnd_SmokeGreen_Grenade_shell";
				count=1;
			};
			class _xx_UGL_FlareGreen_Illumination_F
			{
				magazine="UGL_FlareGreen_Illumination_F";
				count=2;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=2;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=1;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=1;
			};
			class _xx_SmokeShellPurple
			{
				magazine="SmokeShellPurple";
				count=1;
			};
			class _xx_Chemlight_green
			{
				magazine="Chemlight_green";
				count=2;
			};
		};
	};
	class B_Hydrator_snake_G: B_Hydrator_base
	{
		author="O&T Expansion Eden";
		_generalMacro="B_Hydrator_snake_G";
		scope=2;
		displayName="$STR_Globe_CfgVehicles_B_Hydrator_snake_G0";
		picture="\A3\Supplies_F_expEden\Bags\Data\UI\icon_B_Hydrator_snake_G_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"",
			"\A3\Characters_F_EPA\BLUFOR\Data\vests_snake_co.paa"
		};
	};
	class B_Hydrator_tna_G: B_Hydrator_base
	{
		author="O&T Expansion Eden";
		_generalMacro="B_Hydrator_tna_G";
		scope=2;
		displayName="$STR_Globe_CfgVehicles_B_Hydrator_tna_G0";
		picture="\A3\Supplies_F_expEden\Bags\Data\UI\icon_B_Hydrator_tna_G_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"",
			"\A3\Characters_F_Exp\Vests\Data\V_PlateCarrier1_tna_F_co.paa"
		};
	};
	class B_Hydrator_cbr_G: B_Hydrator_base
	{
		author="O&T Expansion Eden";
		_generalMacro="B_Hydrator_cbr_G";
		scope=2;
		displayName="$STR_Globe_CfgVehicles_B_Hydrator_cbr_G0";
		picture="\A3\Supplies_F_expEden\Bags\Data\UI\icon_B_Hydrator_cbr_G_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"",
			"\A3\Characters_F\BLUFOR\Data\Vests_cbr_co.paa"
		};
	};
	class B_Hydrator_wdl_G: B_Hydrator_base
	{
		author="O&T Expansion Eden";
		_generalMacro="B_Hydrator_wdl_G";
		scope=2;
		displayName="$STR_Globe_CfgVehicles_B_Hydrator_wdl_G0";
		picture="\A3\Supplies_F_expEden\Bags\Data\UI\icon_B_Hydrator_wdl_G_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"",
			"\A3\Characters_F_Enoch\Vests\Data\vests_wdl_co.paa"
		};
	};
	class B_Universal_01_G: Bag_Base
	{
		author="O&T Expansion Eden";
		_generalMacro="B_Universal_01_G";
		scope=1;
		model="\a3\drones_f\air_f_gamma\uav_01\uav_01_backpack_f.p3d";
        maximumLoad=400;
        mass=75;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Supplies_F_expEden\Bags\Data\B_Universal_01_G.rvmat"
		};
	};
	class B_Universal_01_G_cbr: B_Universal_01_G
	{
		author="O&T Expansion Eden";
		_generalMacro="B_Universal_01_G_cbr";
		scope=2;
		displayName="$STR_Globe_CfgVehicles_B_Universal_01_G_cbr0";
		picture="\a3\drones_f\weapons_f_gamma\ammoboxes\bags\data\ui\icon_b_c_uav_cbr_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\a3\drones_f\weapons_f_gamma\ammoboxes\bags\data\uav_backpack_cbr_co.paa"
		};
	};
	class B_Universal_01_G_oli: B_Universal_01_G
	{
		author="O&T Expansion Eden";
		_generalMacro="B_Universal_01_G_oli";
		scope=2;
		displayName="$STR_Globe_CfgVehicles_B_Universal_01_G_oli0";
		picture="\a3\drones_f\weapons_f_gamma\ammoboxes\bags\data\ui\icon_b_c_uav_oli_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\a3\drones_f\weapons_f_gamma\ammoboxes\bags\data\uav_backpack_oli_co.paa"
		};
	};
	class B_Universal_01_G_rgr: B_Universal_01_G
	{
		author="O&T Expansion Eden";
		_generalMacro="B_Universal_01_G_rgr";
		scope=2;
		displayName="$STR_Globe_CfgVehicles_B_Universal_01_G_rgr0";
		picture="\a3\drones_f\weapons_f_gamma\ammoboxes\bags\data\ui\icon_b_c_uav_rgr_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\a3\drones_f\weapons_f_gamma\ammoboxes\bags\data\uav_backpack_rgr_co.paa"
		};
	};
};
