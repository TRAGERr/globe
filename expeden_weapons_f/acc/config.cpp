class CfgPatches
{
	class Weapons_Globe_ACC
	{
		addonRootClass="A3_Weapons_F_expEden";
		requiredAddons[]=
		{
			"A3_Weapons_F_expEden"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Item_optic_DMS_Kir_G",
			"Item_optic_DMS_s_weathered_G",
			"Item_optic_tws_sniper_G",
			"Item_muzzle_tma_57_G",
			"Item_muzzle_tma_762R_G",
			"Item_muzzle_tma_545R_G",
			"Item_muzzle_tma_58_G",
			"Item_muzzle_tma_556_G",
			"Item_muzzle_tma_338_G",
			"Item_muzzle_tma_93_G",
			"Item_muzzle_tma_9mm_G",
			"Item_muzzle_tma_45ACP_G",
			"Item_muzzle_tma_300_G",
			"Item_acc_esd_01_flashlightMax",
			"Item_acc_flashlightMax",
			"Item_acc_flashlightMax_smg_01",
			"Item_acc_flashlightMax_pistol",
			"Item_muzzle_snds_9mm_long",
			"Item_muzzle_snds_acp_long",
			"Item_optic_DMS_s",
			"Item_muzzle_snds_o9",
			"Item_muzzle_snds_o45",
			"Item_optic_dcl120",
			"Item_optic_srs",
			"Item_muzzle_tma_65"
		};
		weapons[]=
		{
			"optic_DMS_Kir_G",
			"optic_DMS_s_weathered_G",
			"optic_tws_sniper_G",
			"acc_esd_01_flashlightMax",
			"acc_flashlightMax",
			"acc_flashlightMax_smg_01",
			"acc_flashlightMax_pistol",
			"muzzle_snds_9mm_long",
			"muzzle_snds_acp_long",
			"optic_DMS_s",
			"muzzle_snds_o9",
			"muzzle_snds_o45",
			"optic_dcl120",
			"optic_SRS"
		};
	};
};
class SlotInfo;
class MuzzleSlot;
class JCA_MuzzleSlot_AWM: MuzzleSlot
{
	class compatibleItems
	{
		muzzle_tma_338_G=1;
	};
};
class JCA_MuzzleSlot_HK437: MuzzleSlot
{
	class compatibleItems
	{
		muzzle_tma_300_G=1;
	};
};
class MuzzleSlot_300: MuzzleSlot
{
	class compatibleItems
	{
		muzzle_tma_300_G=1;
	};
};
class MuzzleSlot_65: MuzzleSlot
{
	class compatibleItems
	{
		muzzle_tma_65=1;
	};
};
class MuzzleSlot_57: MuzzleSlot
{
	class compatibleItems
	{
		muzzle_tma_57_G=1;
	};
};
class MuzzleSlot_762: MuzzleSlot
{
	class compatibleItems
	{
		muzzle_tma_762R_G=1;
	};
};
class MuzzleSlot_762R: MuzzleSlot
{
	class compatibleItems
	{
		muzzle_tma_762R_G=1;
	};
};
class MuzzleSlot_545: MuzzleSlot
{
	class compatibleItems
	{
		muzzle_tma_545R_G=1;
	};
};
class MuzzleSlot_545R: MuzzleSlot
{
	class compatibleItems
	{
		muzzle_tma_545R_G=1;
	};
};
class MuzzleSlot_556: MuzzleSlot
{
	class compatibleItems
	{
		muzzle_tma_556_G=1;
	};
};
class MuzzleSlot_338: MuzzleSlot
{
	class compatibleItems
	{
		muzzle_tma_338_G=1;
	};
};
class MuzzleSlot_93: MuzzleSlot
{
	class compatibleItems
	{
		muzzle_tma_93_G=1;
	};
};
class CowsSlot: SlotInfo
{
	compatibleItems[]+=
	{
		"optic_DMS_Kir_G",
		"optic_DMS_s_weathered_G",
		"optic_tws_sniper_G",
		"optic_DMS_s",
		"optic_SRS",
		"optic_dcl120"
	};
};
class rhs_rifle_gripod_slot;
class rhs_optics_debug: rhs_rifle_gripod_slot
{
	class compatibleItems
	{
		optic_DMS_Kir_G=1;
		optic_DMS_s_weathered_G=1;
		optic_tws_sniper_G=1;
		optic_DMS_s=1;
		optic_SRS=1;
		optic_dcl120=1;
	};
};
class CowsSlot_Rail: CowsSlot
{
	class compatibleItems
	{
		optic_DMS_Kir_G=1;
		optic_DMS_s_weathered_G=1;
		optic_tws_sniper_G=1;
		optic_DMS_s=1;
		optic_SRS=1;
		optic_dcl120=1;
	};
};
class MuzzleSlot_9mm: MuzzleSlot
{
	class compatibleItems
	{
		muzzle_snds_o9=1;
		muzzle_snds_9mm_long=1;
		muzzle_tma_9mm_G=1;
	};
};
class MuzzleSlot_45ACP: MuzzleSlot
{
	class compatibleItems
	{
		muzzle_snds_o45=1;
		muzzle_snds_acp_long=1;
		muzzle_tma_45ACP_G=1;
	};
};
class MuzzleSlot_58: MuzzleSlot
{
	class compatibleItems
	{
		muzzle_snds_58_ghex_wdm=1;
		muzzle_tma_58_G=1;
	};
};
class PointerSlot: SlotInfo
{
	compatibleItems[]+=
	{
		"acc_flashlightMax"
	};
};
class PointerSlot_Rail: PointerSlot
{
	class compatibleItems
	{
		acc_flashlightMax=1;
	};
};
class PointerSlot_Pistol: PointerSlot
{
	class compatibleItems
	{
		acc_flashlightMax_pistol=1;
	};
};
class PointerSlot_Launcher: PointerSlot
{
	class compatibleItems
	{
		acc_flashlightMax=1;
	};
};
class ESD_PointerSlot: PointerSlot
{
	class compatibleItems
	{
		acc_esd_01_flashlightMax=1;
	};
};
class asdg_SlotInfo;
class asdg_OpticRail;
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_93x64: asdg_MuzzleSlot
{
	class compatibleItems
	{
		muzzle_tma_93_G=1;
	};
};
class asdg_MuzzleSlot_338: asdg_MuzzleSlot
{
	class compatibleItems
	{
		muzzle_tma_338_G=1;
	};
};
class asdg_MuzzleSlot_762: asdg_MuzzleSlot
{
	class compatibleItems
	{
		muzzle_tma_762R_G=1;
	};
};
class asdg_MuzzleSlot_762MG: asdg_MuzzleSlot
{
	class compatibleItems
	{
		muzzle_tma_762R_G=1;
	};
};
class asdg_OpticRail1913: asdg_OpticRail
{
	class compatibleItems
	{
		optic_DMS_Kir_G=1;
		optic_DMS_s_weathered_G=1;
		optic_tws_sniper_G=1;
		optic_DMS_s=1;
		optic_SRS=1;
		optic_dcl120=1;
	};
};
class asdg_MuzzleSlot_9MM: asdg_MuzzleSlot
{
	class compatibleItems
	{
		muzzle_snds_o9=1;
		muzzle_snds_9mm_long=1;
		muzzle_tma_9mm_G=1;
	};
};
class asdg_MuzzleSlot_9MM_SMG: asdg_MuzzleSlot
{
	class compatibleItems
	{
		muzzle_snds_o9=1;
		muzzle_snds_9mm_long=1;
		muzzle_tma_9mm_G=1;
	};
};
class asdg_MuzzleSlot_45ACP: asdg_MuzzleSlot
{
	class compatibleItems
	{
		muzzle_snds_o45=1;
		muzzle_snds_acp_long=1;
		muzzle_tma_45ACP_G=1;
	};
};
class asdg_MuzzleSlot_45ACP_SMG: asdg_MuzzleSlot
{
	class compatibleItems
	{
		muzzle_snds_o45=1;
		muzzle_snds_acp_long=1;
		muzzle_tma_45ACP_G=1;
	};
};
class asdg_MuzzleSlot_58: asdg_MuzzleSlot
{
	class compatibleItems
	{
		muzzle_snds_58_ghex_wdm=1;
		muzzle_tma_58_G=1;
	};
};
class asdg_MuzzleSlot_556: asdg_MuzzleSlot
{
	class compatibleItems
	{
		muzzle_tma_556_G=1;
	};
};
class asdg_FrontSideRail: asdg_SlotInfo
{
	class compatibleItems
	{
		acc_flashlightMax=1;
	};
class asdg_MuzzleSlot_545R: asdg_MuzzleSlot
{
	class compatibleItems
	{
		muzzle_tma_545R_G=1;
	};
};
class asdg_MuzzleSlot_762R: asdg_MuzzleSlot
{
	class compatibleItems
	{
		muzzle_tma_762R_G=1;
	};
};
};
class CfgVehicles
{
	class Item_Base_F;
	class Item_optic_DMS_s: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgWeapons_optic_DMS_s0";
		author="O&T Expansion Eden";
		editorCategory="EdCat_WeaponAttachments";
		editorSubcategory="EdSubcat_TopSlot_Optics";
		vehicleClass="WeaponAccessories";
		picture="\A3\Weapons_F_expEden\Acc\Data\UI\icon_optic_srs_ca.paa";
		class TransportItems
		{
			class optic_DMS_s
			{
				name="optic_DMS_s";
				count=1;
			};
		};
	};
	class Item_optic_SRS: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgWeapons_optic_SRS0";
		author="O&T Expansion Eden";
		editorCategory="EdCat_WeaponAttachments";
		editorSubcategory="EdSubcat_TopSlot_Collimators";
		vehicleClass="WeaponAccessories";
		picture="\A3\Weapons_F_expEden\Acc\Data\UI\icon_optic_srs_ca.paa";
		class TransportItems
		{
			class optic_SRS
			{
				name="optic_SRS";
				count=1;
			};
		};
	};
	class Item_optic_dcl120: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_HMG_02_optic0";
		author="O&T Expansion Eden";
		editorCategory="EdCat_WeaponAttachments";
		editorSubcategory="EdSubcat_TopSlot_Collimators";
		vehicleClass="WeaponAccessories";
		picture="\A3\Weapons_F_expEden\Acc\Data\UI\icon_optic_srs_ca.paa";
		class TransportItems
		{
			class optic_dcl120
			{
				name="optic_dcl120";
				count=1;
			};
		};
	};
	class Item_muzzle_tma_65: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_C_CfgWeapons_muzzle_tma_650";
		author="$STR_A3_Bohemia_Interactive";
		editorCategory="EdCat_WeaponAttachments";
		editorSubcategory="EdSubcat_FrontSlot";
		vehicleClass="Items";
		model="A3\weapons_f_enoch\acc\acca_tma_65_01_F";
		class TransportItems
		{
			class muzzle_tma_65
			{
				name="muzzle_tma_65";
				count=1;
			};
		};
	};
	class Item_muzzle_tma_57_G: Item_muzzle_tma_65
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgWeapons_muzzle_tma_57_G0";
		author="O&T Expansion Eden";
		class TransportItems
		{
			class muzzle_tma_57_G
			{
				name="muzzle_tma_57_G";
				count=1;
			};
		};
	};
	class Item_muzzle_tma_762R_G: Item_muzzle_tma_57_G
	{
		displayName="$STR_Globe_CfgWeapons_muzzle_tma_762R_G0";
		author="O&T Expansion Eden";
		class TransportItems
		{
			class muzzle_tma_762R_G
			{
				name="muzzle_tma_762R_G";
				count=1;
			};
		};
	};
	class Item_muzzle_tma_545R_G: Item_muzzle_tma_57_G
	{
		displayName="$STR_Globe_CfgWeapons_muzzle_tma_545R_G0";
		author="O&T Expansion Eden";
		class TransportItems
		{
			class muzzle_tma_545R_G
			{
				name="muzzle_tma_545R_G";
				count=1;
			};
		};
	};
	class Item_muzzle_tma_58_G: Item_muzzle_tma_57_G
	{
		displayName="$STR_Globe_CfgWeapons_muzzle_tma_58_G0";
		author="O&T Expansion Eden";
		class TransportItems
		{
			class muzzle_tma_58_G
			{
				name="muzzle_tma_58_G";
				count=1;
			};
		};
	};
	class Item_muzzle_tma_556_G: Item_muzzle_tma_57_G
	{
		displayName="$STR_Globe_CfgWeapons_muzzle_tma_556_G0";
		author="O&T Expansion Eden";
		class TransportItems
		{
			class muzzle_tma_556_G
			{
				name="muzzle_tma_556_G";
				count=1;
			};
		};
	};
	class Item_muzzle_tma_338_G: Item_muzzle_tma_57_G
	{
		displayName="$STR_Globe_CfgWeapons_muzzle_tma_338_G0";
		author="O&T Expansion Eden";
		class TransportItems
		{
			class muzzle_tma_338_G
			{
				name="muzzle_tma_338_G";
				count=1;
			};
		};
	};
	class Item_muzzle_tma_93_G: Item_muzzle_tma_57_G
	{
		displayName="$STR_Globe_CfgWeapons_muzzle_tma_93_G0";
		author="O&T Expansion Eden";
		class TransportItems
		{
			class muzzle_tma_93_G
			{
				name="muzzle_tma_93_G";
				count=1;
			};
		};
	};
	class Item_muzzle_tma_9mm_G: Item_muzzle_tma_57_G
	{
		displayName="$STR_Globe_CfgWeapons_muzzle_tma_9mm_G0";
		author="O&T Expansion Eden";
		class TransportItems
		{
			class muzzle_tma_9mm_G
			{
				name="muzzle_tma_9mm_G";
				count=1;
			};
		};
	};
	class Item_muzzle_tma_45ACP_G: Item_muzzle_tma_57_G
	{
		displayName="$STR_Globe_CfgWeapons_muzzle_tma_45ACP_G0";
		author="O&T Expansion Eden";
		class TransportItems
		{
			class muzzle_tma_45ACP_G
			{
				name="muzzle_tma_45ACP_G";
				count=1;
			};
		};
	};
	class Item_muzzle_tma_300_G: Item_muzzle_tma_57_G
	{
		displayName="$STR_Globe_CfgWeapons_muzzle_tma_300_G0";
		author="O&T Expansion Eden";
		class TransportItems
		{
			class muzzle_tma_300_G
			{
				name="muzzle_tma_300_G";
				count=1;
			};
		};
	};
	class Item_muzzle_snds_o9: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgWeapons_muzzle_snds_o0";
		author="O&T Expansion Eden";
		editorCategory="EdCat_WeaponAttachments";
		editorSubcategory="EdSubcat_FrontSlot";
		vehicleClass="WeaponAccessories";
		class TransportItems
		{
			class muzzle_snds_o9
			{
				name="muzzle_snds_o9";
				count=1;
			};
		};
	};
	class Item_muzzle_snds_58_ghex_wdm: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgWeapons_muzzle_snds_58_wdm_F0";
		author="O&T Expansion Eden";
		editorCategory="EdCat_WeaponAttachments";
		editorSubcategory="EdSubcat_FrontSlot";
		vehicleClass="WeaponAccessories";
		class TransportItems
		{
			class muzzle_snds_58_ghex_wdm
			{
				name="muzzle_snds_58_ghex_wdm";
				count=1;
			};
		};
	};
	class Item_muzzle_snds_o45: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgWeapons_muzzle_snds_o1";
		author="O&T Expansion Eden";
		editorCategory="EdCat_WeaponAttachments";
		editorSubcategory="EdSubcat_FrontSlot";
		vehicleClass="WeaponAccessories";
		class TransportItems
		{
			class muzzle_snds_o45
			{
				name="muzzle_snds_o45";
				count=1;
			};
		};
	};
	class Item_muzzle_snds_acp_long: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgWeapons_muzzle_snds_acp_long0";
		author="O&T Expansion Eden";
		editorCategory="EdCat_WeaponAttachments";
		editorSubcategory="EdSubcat_FrontSlot";
		vehicleClass="WeaponAccessories";
		class TransportItems
		{
			class muzzle_snds_acp_long
			{
				name="muzzle_snds_acp_long";
				count=1;
			};
		};
	};
	class Item_muzzle_snds_9mm_long: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgWeapons_muzzle_snds_9mm_long0";
		author="O&T Expansion Eden";
		editorCategory="EdCat_WeaponAttachments";
		editorSubcategory="EdSubcat_FrontSlot";
		vehicleClass="WeaponAccessories";
		class TransportItems
		{
			class muzzle_snds_9mm_long
			{
				name="muzzle_snds_9mm_long";
				count=1;
			};
		};
	};
	class Item_acc_esd_01_flashlightMax: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgWeapons_acc_esd_01_flashlightMax0";
		author="O&T Expansion Eden";
		editorCategory="EdCat_WeaponAttachments";
		editorSubcategory="EdSubcat_SideSlot";
		vehicleClass="WeaponAccessories";
		class TransportItems
		{
			class acc_esd_01_flashlightMax
			{
				name="acc_esd_01_flashlightMax";
				count=1;
			};
		};
	};
	class Item_acc_flashlightMax: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgWeapons_acc_flashlightMax0";
		author="O&T Expansion Eden";
		editorCategory="EdCat_WeaponAttachments";
		editorSubcategory="EdSubcat_SideSlot";
		vehicleClass="WeaponAccessories";
		class TransportItems
		{
			class acc_flashlightMax
			{
				name="acc_flashlightMax";
				count=1;
			};
		};
	};
	class Item_acc_flashlightMax_smg_01: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgWeapons_acc_flashlightMax0";
		author="O&T Expansion Eden";
		editorCategory="EdCat_WeaponAttachments";
		editorSubcategory="EdSubcat_SideSlot";
		vehicleClass="WeaponAccessories";
		class TransportItems
		{
			class acc_flashlightMax_smg_01
			{
				name="acc_flashlightMax_smg_01";
				count=1;
			};
		};
	};
	class Item_acc_flashlightMax_pistol: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgWeapons_acc_flashlightMax_pistol0";
		author="O&T Expansion Eden";
		editorCategory="EdCat_WeaponAttachments";
		editorSubcategory="EdSubcat_SideSlot";
		vehicleClass="WeaponAccessories";
		model="\A3\Weapons_F\DummyItemHorizontal.p3d";
		class TransportItems
		{
			class acc_flashlightMax_pistol
			{
				name="acc_flashlightMax_pistol";
				count=1;
			};
		};
	};
	class Item_bipod_GripPod_01_G: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$bipod_GripPod_01_G";
		author="O&T Expansion Eden";
		editorCategory="EdCat_WeaponAttachments";
		editorSubcategory="EdSubcat_BottomSlot";
		vehicleClass="WeaponAccessories";
		model="\A3\Weapons_F_Mark\DummyBipod.p3d";
		class TransportItems
		{
			class bipod_GripPod_01_G
			{
				name="bipod_GripPod_01_G";
				count=1;
			};
		};
	};
	class Item_optic_tws_sniper_G: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_a3_cfgweapons_optic_tws_sniper0";
		author="O&T Expansion Eden";
		editorCategory="EdCat_WeaponAttachments";
		editorSubcategory="EdSubcat_TopSlot_Optics";
		vehicleClass="WeaponAccessories";
		class TransportItems
		{
			class optic_tws_sniper_G
			{
				name="optic_tws_sniper_G";
				count=1;
			};
		};
	};
	class Item_optic_DMS_Kir_G: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgWeapons_optic_DMS_Kir_G0";
		author="O&T Expansion Eden";
		editorCategory="EdCat_WeaponAttachments";
		editorSubcategory="EdSubcat_TopSlot_Optics";
		vehicleClass="WeaponAccessories";
		class TransportItems
		{
			class optic_DMS_Kir_G
			{
				name="optic_DMS_Kir_G";
				count=1;
			};
		};
	};
	class Item_optic_DMS_s_weathered_G: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgWeapons_optic_DMS_s_weathered_G0";
		author="O&T Expansion Eden";
		editorCategory="EdCat_WeaponAttachments";
		editorSubcategory="EdSubcat_TopSlot_Optics";
		vehicleClass="WeaponAccessories";
		class TransportItems
		{
			class optic_DMS_s_weathered_G
			{
				name="optic_DMS_s_weathered_G";
				count=1;
			};
		};
	};
};
class CfgWeapons
{
	class Rifle_Base_F;
	class Rifle_Short_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class InventoryUnderItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class ItemCore;
	class acc_flashlightMax: ItemCore
	{
		author="O&T Expansion Eden";
		_generalMacro="acc_flashlightMax";
		scope=2;
		displayName="$STR_Globe_CfgWeapons_acc_flashlightMax0";
		descriptionUse="$STR_A3_cfgWeapons_use_flashlight0";
		picture="\A3\weapons_F\Data\UI\gear_accv_flashlight_CA.paa";
		model="\A3\weapons_f\acc\accv_Flashlight_F";
		descriptionShort="$STR_Globe_CfgWeapons_acc_flashlightMax1";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass=4;
			class FlashLight
			{
				color[]={180,160,130};
				ambient[]={0.89999998,0.81,0.69999999};
				intensity=1000;
				size=1;
				innerAngle=5;
				outerAngle=100;
				coneFadeCoef=8;
				position="flash dir";
				direction="flash";
				useFlare=1;
				flareSize=1.4;
				flareMaxDistance=332;
				dayLight=1;
				class Attenuation
				{
					start=0;
					constant=0.30000001;
					linear=0.1;
					quadratic=0.80000001;
					hardLimitStart=27;
					hardLimitEnd=332;
				};
				volumeShape="a3\data_f\VolumeLightFlashlight.p3d";
				scale[]={1,1,1};
			};
		};
		inertia=0.1;
	};
	class acc_flashlightMax_smg_01: acc_flashlightMax
	{
		author="O&T Expansion Eden";
		_generalMacro="acc_flashlightMax_smg_01";
		scope=2;
		picture="\A3\weapons_F\Data\UI\gear_accv_flashlight_CA.paa";
		model="\A3\weapons_f\acc\accv_flashlight_SMG_01_F";
	};
	class acc_flashlightMax_pistol: ItemCore
	{
		author="O&T Expansion Eden";
		_generalMacro="acc_flashlightMax_pistol";
		scope=2;
		displayName="$STR_Globe_CfgWeapons_acc_flashlightMax_pistol0";
		descriptionUse="$STR_A3_cfgWeapons_use_flashlight0";
		picture="\a3\Weapons_F\Data\UI\gear_accv_flashlight_TLS_CA.paa";
		model="\A3\weapons_f\acc\accv_Flashlight_TLS_F";
		descriptionShort="$STR_Globe_CfgWeapons_acc_flashlightMax1";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass=3;
			class FlashLight
			{
				color[]={180,160,130};
				ambient[]={0.89999998,0.81,0.69999999};
				intensity=170;
				size=1;
				innerAngle=5;
				outerAngle=100;
				coneFadeCoef=8;
				position="flash dir";
				direction="flash";
				useFlare=1;
				flareSize=1.4;
				flareMaxDistance=115;
				dayLight=1;
				class Attenuation
				{
					start=0;
					constant=0.30000001;
					linear=0.1;
					quadratic=0.80000001;
					hardLimitStart=27;
					hardLimitEnd=115;
				};
				volumeShape="a3\data_f\VolumeLightFlashlight.p3d";
				scale[]={1,1,1};
			};
		};
		inertia=0.1;
	};
	class acc_esd_01_flashlightMax: ItemCore
	{
		author="O&T Expansion Eden";
		_generalMacro="acc_esd_01_flashlightMax";
		scope=2;
		displayName="$STR_A3_C_CfgWeapons_acc_esd_01_flashlight0";
		descriptionUse="$STR_A3_cfgWeapons_use_flashlight0";
		picture="\a3\Weapons_F_Enoch\Acc\Data\UI\gear_acc_esd_01_flashlight_CA.paa";
		model="\a3\Weapons_F_Enoch\Acc\accv_esd_01_flashlight_F";
		descriptionShort="$STR_A3_cfgWeapons_acc_flashlight1";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass=3;
			class FlashLight
			{
				color[]={180,160,130};
				ambient[]={0.89999998,0.81,0.69999999};
				intensity=126;
				size=1;
				innerAngle=5;
				outerAngle=100;
				coneFadeCoef=8;
				position="flash dir";
				direction="flash";
				useFlare=1;
				flareSize=1.4;
				flareMaxDistance=120;
				dayLight=1;
				class Attenuation
				{
					start=0;
					constant=0.30000001;
					linear=0.1;
					quadratic=0.80000001;
					hardLimitStart=27;
					hardLimitEnd=120;
				};
				scale[]={0};
			};
		};
		inertia=0.1;
	};
	class muzzle_snds_H: ItemCore
	{
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
		};
	};
	class muzzle_snds_L: muzzle_snds_H
	{
		class ItemInfo;
	};
	class muzzle_snds_acp: muzzle_snds_H
	{
		class ItemInfo;
	};
	class optic_DMS: ItemCore
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes;
			class Snip;
			class Iron;
		};
	};
	class muzzle_snds_58_blk_F;
	class optic_SRS: ItemCore
	{
		author="O&T Expansion Eden";
		_generalMacro="optic_SRS";
		scope=2;
		displayName="$STR_Globe_CfgWeapons_optic_SRS0";
		picture="\A3\Weapons_F_expEden\Acc\Data\UI\icon_optic_srs_ca.paa";
		model="A3\weapons_f\acc\acco_SRS_F";
		descriptionShort="$STR_Globe_CfgWeapons_optic_SRS1";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=4;
			modelOptics="\A3\Weapons_F\empty";
			optics=1;
			class OpticsModes
			{
				class SRS
				{
					opticsID=1;
					useModelOptics=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					distanceZoomMin=200;
					distanceZoomMax=200;
					cameraDir="";
					visionMode[]={};
					opticsPPEffects[]=
					{
						"Default"
					};
				};
			};
		};
		inertia=0;
	};
	class optic_dcl120: ItemCore
	{
		author="O&T Expansion Eden";
		_generalMacro="optic_dcl120";
		scope=2;
		displayName="$STR_Globe_CfgVehicles_HMG_02_optic0";
		picture="\A3\Weapons_F_expEden\Acc\Data\UI\icon_optic_dcl120_ca.paa";
		model="A3\Weapons_F\ACC\ACCO_DCL_120_F";
		descriptionShort="";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=4;
			modelOptics="\A3\Weapons_F\empty";
			optics=1;
			class OpticsModes
			{
				class DCL120
				{
					opticsID=1;
					useModelOptics=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					distanceZoomMin=300;
					distanceZoomMax=300;
					cameraDir="";
					visionMode[]={};
					opticsPPEffects[]=
					{
						"Default"
					};
				};
			};
		};
		inertia=0;
	};
	class muzzleflash_tma: ItemCore
	{
		scope=2;
		model="a3\Data_F_Enoch\Proxies\muzzle_flash\muzzle_flash_acca_tma";
	};
	class muzzle_tma_65: ItemCore
	{
		scope=2;
		scopeArsenal=2;
	};
	class muzzle_tma_57_G: muzzle_tma_65
	{
		author="O&T Expansion Eden";
		scope=2;
		scopeArsenal=2;
		_generalMacro="muzzle_tma_57_G";
		displayName="$STR_Globe_CfgWeapons_muzzle_tma_57_G0";
	};
	class muzzle_tma_762R_G: muzzle_tma_57_G
	{
		author="O&T Expansion Eden";
		_generalMacro="muzzle_tma_762R_G";
		displayName="$STR_Globe_CfgWeapons_muzzle_tma_762R_G0";
	};
	class muzzle_tma_545R_G: muzzle_tma_57_G
	{
		author="O&T Expansion Eden";
		_generalMacro="muzzle_tma_545R_G";
		displayName="$STR_Globe_CfgWeapons_muzzle_tma_545R_G0";
	};
	class muzzle_tma_58_G: muzzle_tma_57_G
	{
		author="O&T Expansion Eden";
		_generalMacro="muzzle_tma_58_G";
		displayName="$STR_Globe_CfgWeapons_muzzle_tma_58_G0";
	};
	class muzzle_tma_556_G: muzzle_tma_57_G
	{
		author="O&T Expansion Eden";
		_generalMacro="muzzle_tma_556_G";
		displayName="$STR_Globe_CfgWeapons_muzzle_tma_556_G0";
	};
	class muzzle_tma_338_G: muzzle_tma_57_G
	{
		author="O&T Expansion Eden";
		_generalMacro="muzzle_tma_338_G";
		displayName="$STR_Globe_CfgWeapons_muzzle_tma_338_G0";
	};
	class muzzle_tma_93_G: muzzle_tma_57_G
	{
		author="O&T Expansion Eden";
		_generalMacro="muzzle_tma_93_G";
		displayName="$STR_Globe_CfgWeapons_muzzle_tma_93_G0";
	};
	class muzzle_tma_9mm_G: muzzle_tma_57_G
	{
		author="O&T Expansion Eden";
		_generalMacro="muzzle_tma_9mm_G";
		displayName="$STR_Globe_CfgWeapons_muzzle_tma_9mm_G0";
	};
	class muzzle_tma_45ACP_G: muzzle_tma_57_G
	{
		author="O&T Expansion Eden";
		_generalMacro="muzzle_tma_45ACP_G";
		displayName="$STR_Globe_CfgWeapons_muzzle_tma_45ACP_G0";
	};
	class muzzle_tma_300_G: muzzle_tma_57_G
	{
		author="O&T Expansion Eden";
		_generalMacro="muzzle_tma_300_G";
		displayName="$STR_Globe_CfgWeapons_muzzle_tma_300_G0";
	};
	class muzzle_snds_o9: muzzle_snds_H
	{
		author="O&T Expansion Eden";
		_generalMacro="muzzle_snds_o";
		displayName="$STR_Globe_CfgWeapons_muzzle_snds_O0";
		picture="\A3\Weapons_F_expEden\Acc\Data\UI\icon_muzzle_snds_o_ca.paa";
		model="\A3\weapons_f\acc\acca_snds_osprey_f";
		class ItemInfo: ItemInfo
		{
			mass=6.5;
			class MagazineCoef
			{
				initSpeed=0.98000002;
			};
			class AmmoCoef
			{
				hit=0.94999999;
				typicalSpeed=0.98000002;
				airFriction=1;
				visibleFire=0.30000001;
				audibleFire=0.039999999;
				visibleFireTime=0.5;
				audibleFireTime=0.5;
				cost=1;
			};
			soundTypeIndex=1;
			muzzleEnd="zaslehPoint";
			alternativeFire="Zasleh2";
			class MuzzleCoef
			{
				dispersionCoef=0.94999999;
				artilleryDispersionCoef=1;
				fireLightCoef=0.1;
				recoilCoef=0.80000001;
				recoilProneCoef=0.69999999;
				minRangeCoef=1;
				minRangeProbabCoef=1;
				midRangeCoef=1;
				midRangeProbabCoef=1;
				maxRangeCoef=1;
				maxRangeProbabCoef=1;
			};
		};
		inertia=0.15000001;
	};
	class muzzle_snds_o45: muzzle_snds_o9
	{
		author="O&T Expansion Eden";
		_generalMacro="muzzle_snds_o45";
		displayName="$STR_Globe_CfgWeapons_muzzle_snds_O1";
		class ItemInfo: ItemInfo
		{
			mass=8;
			class MagazineCoef
			{
				initSpeed=1.03;
			};
			class AmmoCoef
			{
				hit=0.89999998;
				typicalSpeed=0.80000001;
				airFriction=1;
				visibleFire=0.30000001;
				audibleFire=0.039999999;
				visibleFireTime=0.5;
				audibleFireTime=0.5;
				cost=1;
			};
			soundTypeIndex=1;
			muzzleEnd="zaslehPoint";
			alternativeFire="Zasleh2";
			class MuzzleCoef
			{
				dispersionCoef=0.69999999;
				artilleryDispersionCoef=1;
				fireLightCoef=0.1;
				recoilCoef=0.89999998;
				recoilProneCoef=0.80000001;
				minRangeCoef=1;
				minRangeProbabCoef=1;
				midRangeCoef=1;
				midRangeProbabCoef=1;
				maxRangeCoef=1;
				maxRangeProbabCoef=1;
			};
		};
		inertia=0.2;
	};
	class muzzle_snds_58_ghex_wdm: muzzle_snds_58_blk_F
	{
		author="O&T Expansion Eden";
		_generalMacro="muzzle_snds_58_ghex_wdm";
		displayName="$STR_Globe_CfgWeapons_muzzle_snds_58_wdm_F0";
		model="\a3\weapons_f\acc\acca_snds_58_wdm_f";
		picture="\A3\Weapons_F_expEden\Acc\Data\UI\icon_muzzle_snds_58_wdm_F_ca.paa";
	};
	class optic_DMS_s: optic_DMS
	{
		author="O&T Expansion Eden";
		_generalMacro="optic_DMS_s";
		scope=2;
		displayName="$STR_Globe_CfgWeapons_optic_DMS_s0";
		descriptionShort="$STR_Globe_CfgWeapons_optic_DMS_s1";
		class ItemInfo: ItemInfo
		{
			class OpticsModes: OpticsModes
			{
				class Snip: Snip
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur3"
					};
					opticsZoomMin=0.0625;
					opticsZoomMax=0.0625;
					opticsZoomInit=0.0625;
					discreteDistance[]={100,200,300,400,500,600,700,800,900,1000};
					discreteDistanceInitIndex=1;
					distanceZoomMin=100;
					distanceZoomMax=1000;
					discretefov[]={0.0625};
					discreteInitIndex=0;
					memoryPointCamera="opticView";
					modelOptics[]=
					{
						"\A3\Weapons_f\acc\reticle_marksman_F",
						"\A3\Weapons_f\acc\reticle_marksman_F"
					};
					visionMode[]=
					{
						"Normal"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					cameraDir="";
				};
				class Iron: Snip
				{
					opticsID=2;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"",
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
					discretefov[]={};
					distanceZoomMin=200;
					distanceZoomMax=200;
					discreteDistance[]={200};
					discreteDistanceInitIndex=0;
				};
			};
		};
	};
	class muzzle_snds_acp_long: muzzle_snds_acp
	{
		author="O&T Expansion Eden";
		_generalMacro="muzzle_snds_acp_long";
		displayName="$STR_Globe_CfgWeapons_muzzle_snds_acp_long0";
		picture="\A3\Weapons_F_expEden\Acc\Data\UI\icon_muzzle_snds_acp_long_ca.paa";
		model="\a3\weapons_f\acc\acca_mzls_smg_01_f.p3d";
		class ItemInfo: ItemInfo
		{
			mass=9;
			class MagazineCoef
			{
				initSpeed=0.93000001;
			};
			class AmmoCoef
			{
				hit=0.88;
				typicalSpeed=0.93000001;
				airFriction=1;
				visibleFire=0.30000001;
				audibleFire=0.039999999;
				visibleFireTime=0.5;
				audibleFireTime=0.5;
				cost=1;
			};
			soundTypeIndex=1;
			muzzleEnd="zaslehPoint";
			alternativeFire="Zasleh2";
			class MuzzleCoef
			{
				dispersionCoef=0.85000002;
				artilleryDispersionCoef=1;
				fireLightCoef=0.1;
				recoilCoef=0.64999998;
				recoilProneCoef=0.55000001;
				minRangeCoef=1;
				minRangeProbabCoef=1;
				midRangeCoef=1;
				midRangeProbabCoef=1;
				maxRangeCoef=1;
				maxRangeProbabCoef=1;
			};
		};
		inertia=0.18000001;
	};
	class muzzle_snds_9mm_long: muzzle_snds_L
	{
		author="O&T Expansion Eden";
		_generalMacro="muzzle_snds_9mm_long";
		displayName="$STR_Globe_CfgWeapons_muzzle_snds_9mm_long0";
		picture="\A3\Weapons_F_expEden\Acc\Data\UI\icon_muzzle_snds_acp_long_ca.paa";
		model="\a3\weapons_f\acc\acca_mzls_smg_01_f.p3d";
		class ItemInfo: ItemInfo
		{
			mass=7.5;
			class MagazineCoef
			{
				initSpeed=0.97000003;
			};
			class AmmoCoef
			{
				hit=0.94999999;
				typicalSpeed=0.97000003;
				airFriction=1;
				visibleFire=0.30000001;
				audibleFire=0.039999999;
				visibleFireTime=0.5;
				audibleFireTime=0.5;
				cost=1;
			};
			soundTypeIndex=1;
			muzzleEnd="zaslehPoint";
			alternativeFire="Zasleh2";
			class MuzzleCoef
			{
				dispersionCoef=0.89999998;
				artilleryDispersionCoef=1;
				fireLightCoef=0.1;
				recoilCoef=0.75;
				recoilProneCoef=0.64999998;
				minRangeCoef=1;
				minRangeProbabCoef=1;
				midRangeCoef=1;
				midRangeProbabCoef=1;
				maxRangeCoef=1;
				maxRangeProbabCoef=1;
			};
		};
		inertia=0.12;
	};
	class SMG_01_Base: Rifle_Short_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot: PointerSlot_Rail
			{
				compatibleItems[]+=
				{
					"acc_flashlightMax_smg_01"
				};
			};
		};
	};
	class optic_tws_sniper_G: ItemCore
	{
		author="O&T Expansion Eden";
		_generalMacro="optic_tws_sniper_G";
		scope=2;
		displayName="$STR_A3_CfgWeapons_Optic_TWS_Sniper0";
		picture="\a3\Weapons_F\acc\Data\UI\icon_optic_tws_mg_ca.paa";
		model="\A3\weapons_f\acc\acco_tws_F";
		descriptionShort="$STR_A3_CfgWeapons_Optic_TWS_Sniper1";
		weaponInfoType="RscOptics_tws_sniper_G";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=16;
			weaponInfoType="RscWeaponRangeZeroingModeFOV";
			optics=1;
			modelOptics="\A3\Weapons_f\acc\reticle_tws.p3d";
			class OpticsModes
			{
				class TWS
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin=0.0214;
					opticsZoomMax=0.0577;
					opticsZoomInit=0.0577;
					discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600};
					discreteDistanceInitIndex=2;
					distanceZoomMin=100;
					distanceZoomMax=1600;
					discretefov[]={0.0577,0.0214};
					discreteInitIndex=0;
					modelOptics[]=
					{
						"\A3\Weapons_f\acc\reticle_tws.p3d",
						"\a3\weapons_f_expEden\acc\reticle_tws_sniper_g.p3d"
					};
					memoryPointCamera="opticView";
					visionMode[]=
					{
						"Ti",
						"Normal"
					};
					thermalMode[]={0,1};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					cameraDir="";
				};
			};
		};
		inertia=0.2;
	};
	class optic_NVS: ItemCore
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class NVS
				{
					visionMode[]+=
					{
						"Normal"
					};
				};
			};
		};
	};
	class optic_DMS_Kir_G: optic_DMS
	{
		author="O&T Expansion Eden";
		_generalMacro="optic_DMS_Kir_G";
		displayName="$STR_Globe_CfgWeapons_optic_DMS_Kir_G0";
		class ItemInfo: ItemInfo
		{
			class OpticsModes: OpticsModes
			{
				class Snip: Snip
				{
					discreteDistance[]={50,75,100,125,150,175,200,225,250,275,300,325,350,375,400,425,450,475,500,550,600};
					discreteDistanceInitIndex=6;
				};
				class Iron: Iron
				{
					distanceZoomMin=100;
					distanceZoomMax=100;
					discreteDistance[]={100};
				};
			};
		};
	};
	class optic_DMS_s_weathered_G: optic_DMS_s
	{
		author="O&T Expansion Eden";
		_generalMacro="optic_DMS_s_weathered_G";
		displayName="$STR_Globe_CfgWeapons_optic_DMS_s_weathered_G0";
		model="\A3\Weapons_F\Acc\acco_marksman_weathered_F.p3d";
		picture="\a3\Weapons_F_Enoch\Acc\Data\UI\icon_optic_DMS_weathered_F_ca.paa";
		class ItemInfo: ItemInfo
		{
			class OpticsModes: OpticsModes
			{
				class Snip: Snip
				{
				};
				class Iron: Iron
				{
				};
			};
		};
	};
};