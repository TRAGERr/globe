class CfgPatches
{
	class A3_Weapons_F_expEden
	{
		author="Trager";
		name="O&T Expansion Eden - Weapons and Accessories";
		url="https://steamcommunity.com/workshop/filedetails/?id=1923321700";
		requiredAddons[]=
		{
			"A3_expEden"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"SmokeLauncherConfetti",
			"M134_minigun_LSV_02_Globe",
			"Twin_Cannon_30mm",
			"M134_minigun_Globe",
			"weapon_Fighter_Gun_30mm_Globe",
			"LaserDesignatorCTRG",
			"LMG_03_MRCO_Pointer_F",
			"arifle_SPAR_01_blk_Hamr_Pointer_Snds_F",
			"arifle_MX_SW_Black_BI_F",
			"srifle_EBR_MRCO_F",
			"arifle_AK12U_MRCO_FL_F",
			"arifle_Mk20C_ACO_FL_F",
			"LMG_03_Holo_F",
			"LMG_Mk200_ACO_pointer_F",
			"srifle_DMR_06_camo_MRCO_BI_F",
			"srifle_GM6_MRCO_F",
			"arifle_AK12_Holo_pointer_BI_F",
			"srifle_DMR_06_camo_AMS_F",
			"srifle_DMR_03_sturrock_F"
		};
	};
};
class Mode_FullAuto;
class Mode_SemiAuto;
class CfgWeapons
{
	class autocannon_Base_F;
	class SmokeLauncher;
	class HMG_01;
	class LMG_Minigun_heli;
	class MGunCore;
	class GrenadeLauncher;
	class Rifle_Long_Base_F;
	class Default;
	class weapon_Fighter_Gun_30mm;
	class CannonCore;
	class arifle_AK12_base_F;
	class Binocular;
	class Rifle_Base_F;
	class arifle_AKM_F;
	class InventoryOpticsItem_Base_F;
	class arifle_SPAR_01_blk_F;
	class arifle_MX_SW_Black_F;
	class srifle_EBR_F;
	class srifle_DMR_03_khaki_F;
	class arifle_AK12U_F;
	class arifle_Mk20C_F;
	class LMG_03_F;
	class LMG_Mk200_F;
	class srifle_GM6_F;
	class arifle_AK12_F;
	class srifle_DMR_06_camo_F;
	class autocannon_40mm_CTWS: autocannon_Base_F
	{
		class HE: autocannon_Base_F
		{
			magazines[]+=
			{
				"60Rnd_40mm_HE_Airburst_01_G_shells"
			};
		};
	};
	class autocannon_30mm_CTWS: autocannon_Base_F
	{
		class HE: autocannon_Base_F
		{
			magazines[]+=
			{
				"60Rnd_30mm_HE_Airburst_01_G_shells"
			};
		};
	};
	class autocannon_40mm_VTOL_01: autocannon_40mm_CTWS
	{
		class HE: HE
		{
			magazines[]+=
			{
				"60Rnd_40mm_HE_Airburst_01_G_shells"
			};
		};
	};
	class autocannon_30mm_RCWS: autocannon_Base_F
	{
		magazines[]+=
		{
			"60Rnd_30mm_HE_Airburst_01_G_shells"
		};
	};
	class UGL_F: GrenadeLauncher
	{
		magazines[]+=
		{
			"1Rnd_Canister_Grenade_shell"
		};
		class GunParticles
		{
			class effect1
			{
				positionName="usti granatometu";
				directionName="konec granatometu";
				effectName="GrenadeLauncherCloud";
			};
		};
	};
	class srifle_DMR_03_sturrock_F: srifle_DMR_03_khaki_F
	{
		author="O&T Expansion Eden";
		_generalMacro="srifle_DMR_03_sturrock_F";
		scope=1;
		baseWeapon="srifle_DMR_03_khaki_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr_khk_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
		};
	};
	class arifle_AK12U_MRCO_FL_F: arifle_AK12U_F
	{
		author="O&T Expansion Eden";
		_generalMacro="arifle_AK12U_MRCO_FL_F";
		scope=1;
		baseWeapon="arifle_AK12U_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_MRCO";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_flashlightMax";
			};
		};
	};
	class arifle_Mk20C_ACO_FL_F: arifle_Mk20C_F
	{
		author="O&T Expansion Eden";
		_generalMacro="arifle_Mk20C_ACO_FL_F";
		scope=1;
		baseWeapon="arifle_Mk20C_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO_grn_smg";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_flashlightMax";
			};
		};
	};
	class LMG_03_Holo_F: LMG_03_F
	{
		author="O&T Expansion Eden";
		_generalMacro="LMG_03_Holo_F";
		scope=1;
		baseWeapon="LMG_03_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight_smg_blk_F";
			};
		};
	};
	class LMG_Mk200_ACO_pointer_F: LMG_Mk200_F
	{
		author="O&T Expansion Eden";
		_generalMacro="LMG_Mk200_ACO_pointer_F";
		scope=1;
		baseWeapon="LMG_Mk200_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class srifle_DMR_06_camo_MRCO_BI_F: srifle_DMR_06_camo_F
	{
		author="O&T Expansion Eden";
		_generalMacro="srifle_DMR_06_camo_MRCO_BI_F";
		scope=1;
		baseWeapon="srifle_DMR_06_camo_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_MRCO";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_02_F_blk";
			};
		};
	};
	class srifle_GM6_MRCO_F: srifle_GM6_F
	{
		author="O&T Expansion Eden";
		_generalMacro="srifle_GM6_MRCO_F";
		scope=1;
		baseWeapon="srifle_GM6_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_MRCO";
			};
		};
	};
	class arifle_AK12_Holo_pointer_BI_F: arifle_AK12_F
	{
		author="O&T Expansion Eden";
		_generalMacro="srifle_GM6_MRCO_F";
		scope=1;
		baseWeapon="arifle_AK12_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight_blk_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
		};
	};
	class srifle_DMR_06_camo_AMS_F: srifle_DMR_06_camo_F
	{
		author="O&T Expansion Eden";
		_generalMacro="srifle_DMR_06_camo_AMS_F";
		scope=1;
		baseWeapon="srifle_DMR_06_camo_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_AMS";
			};
		};
	};
	class srifle_EBR_MRCO_F: srifle_EBR_F
	{
		author="O&T Expansion Eden";
		_generalMacro="srifle_EBR_MRCO_F";
		scope=1;
		baseWeapon="srifle_EBR_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_MRCO";
			};
		};
	};
	class arifle_MX_SW_Black_BI_F: arifle_MX_SW_Black_F
	{
		author="O&T Expansion Eden";
		_generalMacro="arifle_MX_SW_Black_BI_F";
		scope=1;
		baseWeapon="arifle_MX_SW_Black_F";
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
		};
	};
	class arifle_SPAR_01_blk_Hamr_Pointer_Snds_F: arifle_SPAR_01_blk_F
	{
		author="O&T Expansion Eden";
		_generalMacro="arifle_SPAR_01_blk_Hamr_Pointer_Snds_F";
		scope=1;
		baseWeapon="arifle_SPAR_01_blk_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_M";
			};
		};
	};
	class LMG_03_MRCO_Pointer_F: LMG_03_F
	{
		author="O&T Expansion Eden";
		_generalMacro="LMG_03_MRCO_Pointer_F";
		scope=1;
		baseWeapon="LMG_03_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_MRCO";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_AKM_FL_F: arifle_AKM_F
	{
		scope=2;
		baseWeapon="arifle_AKM_FL_F";
		displayName="$STR_Globe_CfgWeapons_arifle_AKM_FL_F0";
	};
	class LaserDesignatorCTRG: Binocular
	{
		author="O&T Expansion Eden";
		_generalMacro="LaserDesignatorCTRG";
		modelOptics="\A3\Weapons_F\Reticle\Optics_Generic_Narrow_F.p3d";
		opticsPPEffects[]=
		{
			"OpticsCHAbera1",
			"OpticsBlur1"
		};
		descriptionUse="$STR_A3_cfgWeapons_Default_Laserdesignator1";
		magazines[]=
		{
			"Laserbatteries"
		};
		cursor="laserDesignator";
		cursorAim="EmptyCursor";
		cursorAimOn="CursorAimOn";
		showSwitchAction=1;
		simulation="weapon";
		forceOptics=0;
		class WeaponSlotsInfo
		{
			mass=22;
		};
		Laser=1;
		weaponInfoType="RscOptics_LaserDesignatorCTRG";
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={0};
		opticsZoomMin=0.0099999998;
		opticsZoomMax=0.050000001;
		opticsZoomInit=0.050000001;
		distanceZoomMin=100;
		distanceZoomMax=2300;
		minRange=150;
		midRange=500;
		maxRange=5000;
		displayName="$STR_Globe_CfgWeapons_LaserDesignatorCTRG0";
		descriptionShort="$STR_A3_cfgWeapons_Laserdesignator1";
		model="\A3\Weapons_F_Beta\Binocular\ltlm.p3d";
		picture="\A3\weapons_f_expEden\Data\UI\gear_LaserDesignatorCTRG_ca.paa";
	};
	class arifle_AK12U_base_F: arifle_AK12_base_F
	{
		recoil="recoil_ak12u";
	};
	class weapon_Fighter_Gun_30mm_Globe: CannonCore
	{
		scope=2;
		displayName="$STR_A3_Gun_Fighter_30mm_weapon_name";
		nameSound="cannon";
		cursor="EmptyCursor";
		cursorAim="mg";
		showAimCursorInternal=0;
		magazines[]=
		{
			"magazine_Fighter02_Gun30mm_AA_x180"
		};
		canLock=0;
		ballisticsComputer="4 + 8";
		modes[]=
		{
			"manual",
			"close",
			"short",
			"medium",
			"far"
		};
		class GunParticles
		{
			class Effect
			{
				effectName="MachineGun1";
				positionName="nosegun";
				directionName="nosegun_dir";
			};
		};
		class manual: CannonCore
		{
			displayName="$STR_A3_Gun_Fighter_30mm_weapon_name";
			autoFire=1;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"\a3\sounds_f_jets\weapons\cannons\fighter_gun_30mm_1",
					1.5,
					1,
					3000
				};
				begin2[]=
				{
					"\a3\sounds_f_jets\weapons\cannons\fighter_gun_30mm_2",
					1.5,
					1,
					3000
				};
				begin3[]=
				{
					"\a3\sounds_f_jets\weapons\cannons\fighter_gun_30mm_3",
					1.5,
					1,
					3000
				};
				soundBegin[]=
				{
					"begin1",
					0.33333334,
					"begin2",
					0.33333334,
					"begin3",
					0.33333334
				};
			};
			reloadTime=0.035;
			dispersion=0.0089999996;
			soundContinuous=0;
			showToPlayer=1;
			burst=1;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=1;
			minRangeProbab=0.0099999998;
			midRange=2;
			midRangeProbab=0.0099999998;
			maxRange=3;
			maxRangeProbab=0.0099999998;
			textureType="fullAuto";
		};
		class close: manual
		{
			showToPlayer=0;
			burst=5;
			burstRangeMax=20;
			aiBurstTerminable=1;
			aiRateOfFire=0.25;
			aiRateOfFireDistance=400;
			aiRateOfFireDispersion=1;
			minRange=0;
			minRangeProbab=0.94999999;
			midRange=200;
			midRangeProbab=0.89999998;
			maxRange=400;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			burstRangeMax=15;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=600;
			aiRateOfFireDispersion=2;
			minRange=300;
			minRangeProbab=0.55000001;
			midRange=400;
			midRangeProbab=0.40000001;
			maxRange=600;
			maxRangeProbab=0.1;
		};
		class medium: close
		{
			burstRangeMax=10;
			aiRateOfFire=1;
			aiRateOfFireDistance=900;
			aiRateOfFireDispersion=4;
			minRange=500;
			minRangeProbab=0.25;
			midRange=700;
			midRangeProbab=0.2;
			maxRange=900;
			maxRangeProbab=0.1;
		};
		class far: close
		{
			burstRangeMax=10;
			aiRateOfFire=1;
			aiRateOfFireDistance=1500;
			aiRateOfFireDispersion=6;
			minRange=800;
			minRangeProbab=0.15000001;
			midRange=1000;
			midRangeProbab=0.1;
			maxRange=1500;
			maxRangeProbab=0.0099999998;
		};
	};
	class MMG_02_base_F: Rifle_Long_Base_F
	{
		recoil="recoil_mmg_02";
	};
	class arifle_Katiba_Base_F: Rifle_Base_F
	{
		class FullAuto: Mode_FullAuto
		{
			recoil="recoil_auto_ktb";
			recoilProne="recoil_auto_prone_ktb";
		};
	};
	class arifle_CTAR_base_F: Rifle_Base_F
	{
		reloadMagazineSound[]=
		{
			"a3\sounds_f_exp\arsenal\weapons\rifles\car_95\car_95_reload",
			1,
			1,
			10
		};
	};
	class M134_minigun_Globe: MGunCore
	{
		scope=1;
		displayName="$STR_A3_M134_minigun0";
		cursor="EmptyCursor";
		cursorAim="mg";
		magazines[]=
		{
			"400Rnd_762x51_Belt_Tracer_Green_Splash",
			"5000Rnd_762x51_Belt",
			"5000Rnd_762x51_Yellow_Belt"
		};
		magazineReloadTime=15;
		canLock=0;
		modes[]=
		{
			"HighROF",
			"LowROF",
			"close",
			"short",
			"medium",
			"far"
		};
		type=65536;
		aiDispersionCoefY=0.5;
		aiDispersionCoefX=0.5;
		class GunParticles
		{
			class FirstEffect
			{
				effectName="MachineGun1";
				positionName="z_gunL_muzzle";
				directionName="z_gunL_chamber";
			};
			class SecondEffect
			{
				effectName="MachineGun1";
				positionName="z_gunR_muzzle";
				directionName="z_gunR_chamber";
			};
			class effect1
			{
				positionName="machinegun_eject_pos";
				directionName="machinegun_eject_dir";
				effectName="MachineGunCartridge";
			};
			class effect2
			{
				positionName="machinegun_eject_2_pos";
				directionName="machinegun_eject_2_dir";
				effectName="MachineGunCartridge";
			};
		};
		class LowROF: Mode_FullAuto
		{
			displayName="$STR_A3_M134_Minigun_LowROF0";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons_vehicles\gatling_762mm\762mm_01_burst",
					3.9810717,
					1,
					1300,
					{2,36879}
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
				soundSetShot[]=
				{
					"metalCasingDrop_SoundSet",
					"M134Minigun_Shot_SoundSet",
					"M134Minigun_tail_SoundSet"
				};
			};
			soundContinuous=0;
			soundBurst=0;
			flash="gunfire";
			flashSize=0.1;
			recoil="Empty";
			ffMagnitude=0.5;
			ffFrequency=11;
			ffCount=6;
			reloadTime=0.033333302;
			dispersion=0.0092000002;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.0099999998;
			midRange=1;
			midRangeProbab=0.0099999998;
			maxRange=2;
			maxRangeProbab=0.0099999998;
			showToPlayer=0;
			multiplier=1;
		};
		class HighROF: LowROF
		{
			displayName="$STR_A3_M134_Minigun_HighROF0";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons_vehicles\gatling_762mm\762mm_01_burst",
					2.5118864,
					1,
					1500,
					{2,36879}
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
				soundSetShot[]=
				{
					"metalCasingDrop_SoundSet",
					"M134Minigun_Shot_SoundSet",
					"M134Minigun_tail_SoundSet"
				};
			};
			showToPlayer=1;
			multiplier=3;
		};
		class close: HighROF
		{
			soundBurst=0;
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=12;
			burstRangeMax=42;
			aiRateOfFire=0.5;
			aiRateOfFireDispersion=1;
			aiRateOfFireDistance=50;
			minRange=0;
			minRangeProbab=0.69999999;
			midRange=100;
			midRangeProbab=0.75;
			maxRange=300;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=8;
			burstRangeMax=36;
			aiRateOfFire=1;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=150;
			minRange=100;
			minRangeProbab=0.75;
			midRange=300;
			midRangeProbab=0.75;
			maxRange=600;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=8;
			burstRangeMax=30;
			aiRateOfFire=2;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=300;
			minRange=300;
			minRangeProbab=0.75;
			midRange=600;
			midRangeProbab=0.64999998;
			maxRange=800;
			maxRangeProbab=0.1;
		};
		class far: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=8;
			burstRangeMax=12;
			aiRateOfFire=4;
			aiRateOfFireDispersion=4;
			aiRateOfFireDistance=800;
			minRange=800;
			minRangeProbab=0.64999998;
			midRange=1000;
			midRangeProbab=0.30000001;
			maxRange=1500;
			maxRangeProbab=0.050000001;
		};
		weight=40;
	};
	class M134_minigun_Globe_Heli_Light_01: MGunCore
	{
		scope=1;
		displayName="$STR_A3_M134_minigun0";
		cursor="EmptyCursor";
		cursorAim="mg";
		magazines[]=
		{
			"400Rnd_762x51_Belt_Tracer_Green_Splash",
			"5000Rnd_762x51_Belt",
			"5000Rnd_762x51_Yellow_Belt"
		};
		magazineReloadTime=15;
		canLock=0;
		modes[]=
		{
			"HighROF",
			"LowROF",
			"close",
			"short",
			"medium",
			"far"
		};
		type=65536;
		aiDispersionCoefY=0.5;
		aiDispersionCoefX=0.5;
		class GunParticles
		{
			class FirstEffect
			{
				effectName="MachineGun1";
				positionName="z_gunL_muzzle";
				directionName="z_gunL_chamber";
			};
			class SecondEffect
			{
				effectName="MachineGun1";
				positionName="z_gunR_muzzle";
				directionName="z_gunR_chamber";
			};
			class effect1
			{
				positionName="machinegun_eject_pos";
				directionName="machinegun_eject_dir";
				effectName="MachineGunCartridge";
			};
			class effect2
			{
				positionName="machinegun_eject_2_pos";
				directionName="machinegun_eject_2_dir";
				effectName="MachineGunCartridge";
			};
		};
		class LowROF: Mode_FullAuto
		{
			displayName="$STR_A3_M134_Minigun_LowROF0";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons_vehicles\gatling_762mm\762mm_01_burst",
					3.9810717,
					1,
					1300,
					{2,36879}
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
				soundSetShot[]=
				{
					"M134Minigun_Shot_SoundSet",
					"M134Minigun_tail_SoundSet"
				};
			};
			soundContinuous=0;
			soundBurst=0;
			flash="gunfire";
			flashSize=0.1;
			recoil="Empty";
			ffMagnitude=0.5;
			ffFrequency=11;
			ffCount=6;
			reloadTime=0.033333302;
			dispersion=0.0092000002;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.0099999998;
			midRange=1;
			midRangeProbab=0.0099999998;
			maxRange=2;
			maxRangeProbab=0.0099999998;
			showToPlayer=0;
			multiplier=1;
		};
		class HighROF: LowROF
		{
			displayName="$STR_A3_M134_Minigun_HighROF0";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons_vehicles\gatling_762mm\762mm_01_burst",
					2.5118864,
					1,
					1500,
					{2,36879}
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
				soundSetShot[]=
				{
					"M134Minigun_Shot_SoundSet",
					"M134Minigun_tail_SoundSet"
				};
			};
			showToPlayer=1;
			multiplier=3;
		};
		class close: HighROF
		{
			soundBurst=0;
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=12;
			burstRangeMax=42;
			aiRateOfFire=0.5;
			aiRateOfFireDispersion=1;
			aiRateOfFireDistance=50;
			minRange=0;
			minRangeProbab=0.69999999;
			midRange=100;
			midRangeProbab=0.75;
			maxRange=300;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=8;
			burstRangeMax=36;
			aiRateOfFire=1;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=150;
			minRange=100;
			minRangeProbab=0.75;
			midRange=300;
			midRangeProbab=0.75;
			maxRange=600;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=8;
			burstRangeMax=30;
			aiRateOfFire=2;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=300;
			minRange=300;
			minRangeProbab=0.75;
			midRange=600;
			midRangeProbab=0.64999998;
			maxRange=800;
			maxRangeProbab=0.1;
		};
		class far: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=8;
			burstRangeMax=12;
			aiRateOfFire=4;
			aiRateOfFireDispersion=4;
			aiRateOfFireDistance=800;
			minRange=800;
			minRangeProbab=0.64999998;
			midRange=1000;
			midRangeProbab=0.30000001;
			maxRange=1500;
			maxRangeProbab=0.050000001;
		};
		weight=40;
	};
	class Twin_Cannon_30mm: CannonCore
	{
		scope=1;
		displayName="$STR_Globe_CfgWeapons_Twin_Cannon_30mm0";
		nameSound="cannon";
		cursor="EmptyCursor";
		cursorAim="mg";
		showAimCursorInternal=0;
		soundContinuous=0;
		magazines[]=
		{
			"PylonWeapon_260Rnd_30mmHE_shells",
			"PylonWeapon_260Rnd_30mmMP_shells",
			"PylonWeapon_260Rnd_30mmAP_shells",
			"PylonWeapon_260Rnd_30mmAPFSDS_shells"
		};
		canLock=0;
		ballisticsComputer=8;
		aiDispersionCoefY=0.5;
		aiDispersionCoefX=0.5;
		modes[]=
		{
			"manual",
			"close",
			"short",
			"medium",
			"far"
		};
		class GunParticles
		{
			class Effect
			{
				effectName="AutoCannonFired";
				positionName="muzzlePos";
				directionName="muzzleEnd";
			};
		};
		class manual: CannonCore
		{
			displayName="$STR_Globe_CfgWeapons_Twin_Cannon_30mm0";
			autoFire=1;
			textureType="fullAuto";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons_vehicles\gatling_20mm\20mm_01_burst",
					1.7782794,
					1,
					1300,
					{2,35740}
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
				soundSetShot[]=
				{
					"weapon_Fighter_Gun_30mm_Globe_SoundSet",
					"Autocannon30mmBody_tail_SoundSet"
				};
			};
			dispersion=0.0080000004;
			soundContinuous=0;
			soundBurst=0;
			burst=1;
			burstRangeMax=2;
			multiplier=2;
			reloadTime=0.039999999;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.0099999998;
			midRange=1;
			midRangeProbab=0.0099999998;
			maxRange=2;
			maxRangeProbab=0.0099999998;
		};
		class close: manual
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=16;
			burstRangeMax=37;
			aiRateOfFire=0.5;
			aiRateOfFireDispersion=1;
			aiRateOfFireDistance=50;
			minRange=0;
			minRangeProbab=0.1;
			midRange=50;
			midRangeProbab=0.64999998;
			maxRange=400;
			maxRangeProbab=0.75;
		};
		class short: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=12;
			burstRangeMax=32;
			aiRateOfFire=1;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=200;
			minRange=200;
			minRangeProbab=0.64999998;
			midRange=400;
			midRangeProbab=0.75;
			maxRange=1000;
			maxRangeProbab=0.69999999;
		};
		class medium: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=12;
			burstRangeMax=28;
			aiRateOfFire=2;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=800;
			minRange=800;
			minRangeProbab=0.69999999;
			midRange=1400;
			midRangeProbab=0.40000001;
			maxRange=1800;
			maxRangeProbab=0.15000001;
		};
		class far: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=9;
			burstRangeMax=20;
			aiRateOfFire=4;
			aiRateOfFireDispersion=4;
			aiRateOfFireDistance=1400;
			minRange=1400;
			minRangeProbab=0.5;
			midRange=1800;
			midRangeProbab=0.15000001;
			maxRange=2500;
			maxRangeProbab=0.050000001;
		};
	};
	class M134_minigun_LSV_02_Globe: M134_minigun_Globe
	{
		displayName="$STR_Globe_CfgWeapons_M134_minigun_LSV_02_Globe0";
		class GunParticles
		{
			class effect1
			{
				positionName="machinegun_eject_pos";
				directionName="machinegun_eject_dir";
				effectName="MachineGunCartridge";
			};
			class effect2
			{
				positionName="machinegun_end";
				directionName="machinegun_beg";
				effectName="MachineGun1";
			};
		};
	};
	class SmokeLauncherConfetti: SmokeLauncher
	{
		author="O&T Expansion Eden";
		scope=2;
		displayName="$STR_A3_SmokeLauncher0";
		sounds[]=
		{
			"StandardSound"
		};
		class StandardSound
		{
			soundSetShot[]=
			{
				"SmokeLauncherConfetti_shot_SoundSet",
				"UGL_Tail_SoundSet"
			};
		};
		magazines[]=
		{
			"SmokeLauncherConfettiMag",
			"SmokeLauncherConfettiMag_1Rnd"
		};
		reloadTime=1;
		magazineReloadTime=1;
		canLock=0;
		autoFire=0;
		simulation="cmlauncher";
		showToPlayer=1;
		minRange=0;
		maxRange=10;
		textureType="semi";
	};
	class LMG_Zafir_F: Rifle_Long_Base_F
	{
		bullet1[]=
		{
			"A3\Sounds_F\dummysound",
			0.44668359,
			1,
			15
		};
		bullet2[]=
		{
			"A3\Sounds_F\dummysound",
			0.44668359,
			1,
			15
		};
		bullet3[]=
		{
			"A3\Sounds_F\dummysound",
			0.44668359,
			1,
			15
		};
		bullet4[]=
		{
			"A3\Sounds_F\dummysound",
			0.44668359,
			1,
			15
		};
		bullet5[]=
		{
			"A3\Sounds_F\dummysound",
			0.56234133,
			1,
			15
		};
		bullet6[]=
		{
			"A3\Sounds_F\dummysound",
			0.56234133,
			1,
			15
		};
		bullet7[]=
		{
			"A3\Sounds_F\dummysound",
			0.56234133,
			1,
			15
		};
		bullet8[]=
		{
			"A3\Sounds_F\dummysound",
			0.56234133,
			1,
			15
		};
		bullet9[]=
		{
			"A3\Sounds_F\dummysound",
			0.56234133,
			1,
			15
		};
		bullet10[]=
		{
			"A3\Sounds_F\dummysound",
			0.56234133,
			1,
			15
		};
		bullet11[]=
		{
			"A3\Sounds_F\dummysound",
			0.56234133,
			1,
			15
		};
		bullet12[]=
		{
			"A3\Sounds_F\dummysound",
			0.56234133,
			1,
			15
		};
		bullet13[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Grass_04",
			1,
			1,
			15
		};
		bullet14[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Grass_04",
			0.56234133,
			1,
			15
		};
		bullet15[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Grass_04",
			0.56234133,
			1,
			15
		};
		bullet16[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Grass_04",
			0.56234133,
			1,
			15
		};
		bullet17[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Grass_04",
			0.56234133,
			1,
			15
		};
		bullet18[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Grass_04",
			0.56234133,
			1,
			15
		};
		bullet19[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Grass_04",
			0.56234133,
			1,
			15
		};
		bullet20[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Grass_04",
			0.56234133,
			1,
			15
		};
		bullet21[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Grass_04",
			0.56234133,
			1,
			15
		};
		soundBullet[]=
		{
			"bullet1",
			0.04761904761,
			"bullet2",
			0.04761904761,
			"bullet3",
			0.04761904761,
			"bullet4",
			0.04761904761,
			"bullet5",
			0.04761904761,
			"bullet6",
			0.04761904761,
			"bullet7",
			0.04761904761,
			"bullet8",
			0.04761904761,
			"bullet9",
			0.04761904761,
			"bullet10",
			0.04761904761,
			"bullet11",
			0.04761904761,
			"bullet12",
			0.04761904761,
			"bullet13",
			0.04761904761,
			"bullet14",
			0.04761904761,
			"bullet15",
			0.04761904761,
			"bullet16",
			0.04761904761,
			"bullet17",
			0.04761904761,
			"bullet18",
			0.04761904761,
			"bullet19",
			0.04761904761,
			"bullet20",
			0.04761904761,
			"bullet21",
			0.04761904761
		};
	};
};
class CfgAmmo
{
	class B_40mm_GPR;
	class B_30mm_HE;
	class ammo_Penetrator_Base;
	class SmokeShellVehicle_boat;
	class SmokeLauncherAmmo;
	class B_762x51_Ball;
	class BulletBase;
	class ShellBase;
	class Sh_120mm_HE: ShellBase
	{
		soundFakeFall0[]=
		{
			"a3\sounds_f\weapons\explosion\cannon_fly",
			3.1622777,
			1,
			1000
		};
		soundFakeFall[]=
		{
			"soundFakeFall0",
			1
		};
	};
	class Sh_120mm_APFSDS: ShellBase
	{
		soundFakeFall0[]=
		{
			"a3\sounds_f\weapons\explosion\cannon_fly",
			3.1622777,
			1,
			1000
		};
		soundFakeFall[]=
		{
			"soundFakeFall0",
			1
		};
	};
	class Sh_120mm_HEAT_MP: ShellBase
	{
		soundFakeFall0[]=
		{
			"a3\sounds_f\weapons\explosion\cannon_fly",
			3.1622777,
			1,
			1000
		};
		soundFakeFall[]=
		{
			"soundFakeFall0",
			1
		};
	};
	class MissileBase;
	class RocketBase;
	class Default;
	class GrenadeCore;
	class Grenade: Default
	{
		allowAgainstInfantry=1;
		aiAmmoUsageFlags=64;
		soundImpactFoliage1[]=
		{
			"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grassdry_1",
			1.4125376,
			1,
			45
		};
		soundImpactFoliage2[]=
		{
			"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grassdry_2",
			1.4125376,
			1,
			45
		};
		soundImpactFoliage3[]=
		{
			"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grassdry_3",
			1.4125376,
			1,
			45
		};
		soundImpactFoliage4[]=
		{
			"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grassdry_4",
			1.4125376,
			1,
			45
		};
		soundImpactFoliage5[]=
		{
			"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grassdry_5",
			1.4125376,
			1,
			45
		};
		soundImpactFoliage6[]=
		{
			"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grassdry_6",
			1.4125376,
			1,
			45
		};
		soundImpactFoliage7[]=
		{
			"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grassdry_7",
			1.4125376,
			1,
			45
		};
		impactFoliage[]=
		{
			"soundImpactFoliage1",
			0.142857,
			"soundImpactFoliage2",
			0.142857,
			"soundImpactFoliage3",
			0.142857,
			"soundImpactFoliage4",
			0.142857,
			"soundImpactFoliage5",
			0.142857,
			"soundImpactFoliage6",
			0.142857,
			"soundImpactFoliage7",
			0.142857
		};
	};
	class GrenadeBase: GrenadeCore
	{
		soundImpactFoliage1[]=
		{
			"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grassdry_1",
			1.4125376,
			1,
			45
		};
		soundImpactFoliage2[]=
		{
			"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grassdry_2",
			1.4125376,
			1,
			45
		};
		soundImpactFoliage3[]=
		{
			"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grassdry_3",
			1.4125376,
			1,
			45
		};
		soundImpactFoliage4[]=
		{
			"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grassdry_4",
			1.4125376,
			1,
			45
		};
		soundImpactFoliage5[]=
		{
			"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grassdry_5",
			1.4125376,
			1,
			45
		};
		soundImpactFoliage6[]=
		{
			"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grassdry_6",
			1.4125376,
			1,
			45
		};
		soundImpactFoliage7[]=
		{
			"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grassdry_7",
			1.4125376,
			1,
			45
		};
		impactFoliage[]=
		{
			"soundImpactFoliage1",
			0.142857,
			"soundImpactFoliage2",
			0.142857,
			"soundImpactFoliage3",
			0.142857,
			"soundImpactFoliage4",
			0.142857,
			"soundImpactFoliage5",
			0.142857,
			"soundImpactFoliage6",
			0.142857,
			"soundImpactFoliage7",
			0.142857
		};
	};
	class R_MRAAWS_HEAT_F: RocketBase
	{
		SoundSetExplosion[]=
		{
			"RocketsLight_Exp_SoundSet",
			"RocketsLight_Tail_SoundSet",
			"Explosion_Debris_SoundSet"
		};
	};
	class M_SPG9_HEAT: RocketBase
	{
		SoundSetExplosion[]=
		{
			"RocketsLight_Exp_SoundSet",
			"RocketsLight_Tail_SoundSet",
			"Explosion_Debris_SoundSet"
		};
	};
	class M_Vorona_HEAT: MissileBase
	{
		SoundSetExplosion[]=
		{
			"RocketsMedium_Exp_SoundSet",
			"RocketsMedium_Tail_SoundSet",
			"Explosion_Debris_SoundSet"
		};
	};
	class M_127mm_Firefist_AT: MissileBase
	{
		SoundSetExplosion[]=
		{
			"RocketsMedium_Exp_SoundSet",
			"RocketsMedium_Tail_SoundSet",
			"Explosion_Debris_SoundSet"
		};
	};
	class R_MRAAWS_HE_F: R_MRAAWS_HEAT_F
	{
		aiAmmoUsageFlags="64 + 128";
	};
	class Missile_AGM_02_F: MissileBase
	{
		effectsMissile="FX_Missile_AG";
	};
	class G_40mm_Canister: BulletBase
	{
		model="\A3\weapons_f\ammo\UGL_slug";
		hit=0;
		indirectHit=0;
		indirectHitRange=0;
		visibleFire=1;
		audibleFire=30;
		visibleFireTime=3;
		dangerRadiusHit=60;
		suppressionRadiusHit=24;
		cost=1;
		deflecting=5;
		airFriction=-0.001;
		fuseDistance=0;
		typicalSpeed=185;
		caliber=2;
		submunitionAmmo="G_40mm_Canister_Submunition";
		submunitionConeType[]=
		{
			"randomcenter",
			20
		};
		triggerTime=0.0057000003;
		submunitionInitSpeed=269;
		submunitionConeAngle=2;
	};
	class G_40mm_Canister_Submunition: BulletBase
	{
		airFriction=-0.0080000004;
		waterFriction=-0.30000001;
		hit=2.5;
		indirectHit=0;
		indirectHitRange=0;
		typicalSpeed=269;
		deflecting=15;
		caliber=0.5;
		soundSetBulletFly[]=
		{
			"bulletFlyBy_SoundSet"
		};
		soundSetSonicCrack[]=
		{
		};
		soundImpactDefault1[]=
		{
			"A3\Sounds_F\weapons\Grenades\Grenade_Roll",
			2.5118864,
			1,
			200
		};
		impactGroundSoft[]=
		{
			"soundImpactDefault1",
			1
		};
		impactGroundHard[]=
		{
			"soundImpactDefault1",
			1
		};
		impactMan[]=
		{
			"soundImpactDefault1",
			1
		};
		impactIron[]=
		{
			"soundImpactDefault1",
			1
		};
		impactArmor[]=
		{
			"soundImpactDefault1",
			1
		};
		impactBuilding[]=
		{
			"soundImpactDefault1",
			1
		};
		impactFoliage[]=
		{
			"soundImpactDefault1",
			1
		};
		impactWood[]=
		{
			"soundImpactDefault1",
			1
		};
		impactGlass[]=
		{
			"soundImpactDefault1",
			1
		};
		impactGlassArmored[]=
		{
			"soundImpactDefault1",
			1
		};
		impactConcrete[]=
		{
			"soundImpactDefault1",
			1
		};
		impactTyre[]=
		{
			"soundImpactDefault1",
			1
		};
		impactRubber[]=
		{
			"soundImpactDefault1",
			1
		};
		impactPlastic[]=
		{
			"soundImpactDefault1",
			1
		};
		impactDefault[]=
		{
			"soundImpactDefault1",
			1
		};
		impactMetal[]=
		{
			"soundImpactDefault1",
			1
		};
		impactMetalplate[]=
		{
			"soundImpactDefault1",
			1
		};
		impactWater[]=
		{
			"soundImpactDefault1",
			1
		};
		soundDefault1[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_01",
			1.5,
			1,
			100
		};
		soundDefault2[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_02",
			1.5,
			1,
			100
		};
		soundDefault3[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_03",
			1.5,
			1,
			100
		};
		soundDefault4[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_04",
			1.5,
			1,
			100
		};
		soundDefault5[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_05",
			1.5,
			1,
			100
		};
		soundDefault6[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_06",
			1.5,
			1,
			100
		};
		soundDefault7[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_07",
			1.5,
			1,
			100
		};
		soundDefault8[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_08",
			1.5,
			1,
			100
		};
		soundGroundSoft1[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_01",
			1.5,
			1,
			100
		};
		soundGroundSoft2[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_02",
			1.5,
			1,
			100
		};
		soundGroundSoft3[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_03",
			1.5,
			1,
			100
		};
		soundGroundSoft4[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_04",
			1.5,
			1,
			100
		};
		soundGroundSoft5[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_05",
			1.5,
			1,
			100
		};
		soundGroundSoft6[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_06",
			1.5,
			1,
			100
		};
		soundGroundSoft7[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_07",
			1.5,
			1,
			100
		};
		soundGroundSoft8[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_08",
			1.5,
			1,
			100
		};
		soundGroundHard1[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_01",
			1.5,
			1,
			100
		};
		soundGroundHard2[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_02",
			1.5,
			1,
			100
		};
		soundGroundHard3[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_03",
			1.5,
			1,
			100
		};
		soundGroundHard4[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_04",
			1.5,
			1,
			100
		};
		soundGroundHard5[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_05",
			1.5,
			1,
			100
		};
		soundGroundHard6[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_06",
			1.5,
			1,
			100
		};
		soundGroundHard7[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_07",
			1.5,
			1,
			100
		};
		soundGroundHard8[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_08",
			1.5,
			1,
			100
		};
		soundGlass1[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_01",
			0.25,
			1,
			100
		};
		soundGlass2[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_02",
			0.25,
			1,
			100
		};
		soundGlass3[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_03",
			0.25,
			1,
			100
		};
		soundGlass4[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_04",
			0.25,
			1,
			100
		};
		soundGlass5[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_05",
			0.25,
			1,
			100
		};
		soundGlass6[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_06",
			0.25,
			1,
			100
		};
		soundGlass7[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_07",
			0.25,
			1,
			100
		};
		soundGlass8[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_08",
			0.25,
			1,
			100
		};
		soundGlassArmored1[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_01",
			0.25,
			1,
			100
		};
		soundGlassArmored2[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_02",
			0.25,
			1,
			100
		};
		soundGlassArmored3[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_03",
			0.25,
			1,
			100
		};
		soundGlassArmored4[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_04",
			0.25,
			1,
			100
		};
		soundGlassArmored5[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_05",
			0.25,
			1,
			100
		};
		soundGlassArmored6[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_06",
			0.25,
			1,
			100
		};
		soundGlassArmored7[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_07",
			0.25,
			1,
			100
		};
		soundGlassArmored8[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_08",
			0.25,
			1,
			100
		};
		soundMetal1[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_01",
			1.5,
			1,
			100
		};
		soundMetal2[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_02",
			1.5,
			1,
			100
		};
		soundMetal3[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_03",
			1.5,
			1,
			100
		};
		soundMetal4[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_04",
			1.5,
			1,
			100
		};
		soundMetal5[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_05",
			1.5,
			1,
			100
		};
		soundMetal6[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_06",
			1.5,
			1,
			100
		};
		soundMetal7[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_07",
			1.5,
			1,
			100
		};
		soundMetal8[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_08",
			1.5,
			1,
			100
		};
		soundVehiclePlate1[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_01",
			1,
			1,
			100
		};
		soundVehiclePlate2[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_02",
			1,
			1,
			100
		};
		soundVehiclePlate3[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_03",
			1,
			1,
			100
		};
		soundVehiclePlate4[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_04",
			1,
			1,
			100
		};
		soundVehiclePlate5[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_05",
			1,
			1,
			100
		};
		soundVehiclePlate6[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_06",
			1,
			1,
			100
		};
		soundVehiclePlate7[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_07",
			1,
			1,
			100
		};
		soundVehiclePlate8[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_08",
			1,
			1,
			100
		};
		soundWood1[]=
		{
			"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_01",
			1.8,
			1,
			100
		};
		soundWood2[]=
		{
			"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_02",
			1.8,
			1,
			100
		};
		soundWood3[]=
		{
			"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_03",
			1.8,
			1,
			100
		};
		soundWood4[]=
		{
			"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_04",
			1.8,
			1,
			100
		};
		soundWood5[]=
		{
			"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_05",
			1.8,
			1,
			100
		};
		soundWood6[]=
		{
			"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_06",
			1.8,
			1,
			100
		};
		soundWood7[]=
		{
			"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_07",
			1.8,
			1,
			100
		};
		soundWood8[]=
		{
			"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_08",
			1.8,
			1,
			100
		};
		soundWood9[]=
		{
			"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_09",
			1.8,
			0.89999998,
			100
		};
		soundWood10[]=
		{
			"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_10",
			1.8,
			0.89999998,
			100
		};
		soundWood11[]=
		{
			"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_11",
			1.8,
			0.89999998,
			100
		};
		soundWood12[]=
		{
			"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_12",
			1.8,
			0.89999998,
			100
		};
		soundWood13[]=
		{
			"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_13",
			1.8,
			0.89999998,
			100
		};
		soundWood14[]=
		{
			"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_14",
			1.8,
			0.89999998,
			100
		};
		soundWood15[]=
		{
			"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_15",
			1.8,
			0.89999998,
			100
		};
		soundWood16[]=
		{
			"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_16",
			1.8,
			0.89999998,
			100
		};
		soundHitBody1[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\body_01",
			1.5,
			1,
			100
		};
		soundHitBody2[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\body_02",
			1.5,
			1,
			100
		};
		soundHitBody3[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\body_03",
			1.5,
			1,
			100
		};
		soundHitBody4[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\body_04",
			1.5,
			1,
			100
		};
		soundHitBody5[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\body_05",
			1.5,
			1,
			100
		};
		soundHitBody6[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\body_06",
			1.5,
			1,
			100
		};
		soundHitBody7[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\body_07",
			1.5,
			1,
			100
		};
		soundHitBody8[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\body_08",
			1.5,
			1,
			100
		};
		soundHitBuilding1[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\building_01",
			1.5,
			1,
			100
		};
		soundHitBuilding2[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\building_02",
			1.5,
			1,
			100
		};
		soundHitBuilding3[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\building_03",
			1.5,
			1,
			100
		};
		soundHitBuilding4[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\building_04",
			1.5,
			1,
			100
		};
		soundHitBuilding5[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\building_05",
			1.5,
			1,
			100
		};
		soundHitBuilding6[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\building_06",
			1.5,
			1,
			100
		};
		soundHitBuilding7[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\building_07",
			1.5,
			1,
			100
		};
		soundHitBuilding8[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\building_08",
			1.5,
			1,
			100
		};
		soundHitFoliage1[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_01",
			1.3,
			1,
			100
		};
		soundHitFoliage2[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_02",
			1.3,
			1,
			100
		};
		soundHitFoliage3[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_03",
			1.3,
			1,
			100
		};
		soundHitFoliage4[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_04",
			1.3,
			1,
			100
		};
		soundHitFoliage5[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_05",
			1.3,
			1,
			100
		};
		soundHitFoliage6[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_06",
			1.3,
			1,
			100
		};
		soundHitFoliage7[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_07",
			1.3,
			1,
			100
		};
		soundHitFoliage8[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_08",
			1.3,
			1,
			100
		};
		soundPlastic1[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_01",
			1.2,
			1,
			100
		};
		soundPlastic2[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_02",
			1.2,
			1,
			100
		};
		soundPlastic3[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_03",
			1.2,
			1,
			100
		};
		soundPlastic4[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_04",
			1.2,
			1,
			100
		};
		soundPlastic5[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_05",
			1.2,
			1,
			100
		};
		soundPlastic6[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_06",
			1.2,
			1,
			100
		};
		soundPlastic7[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_07",
			1.2,
			1,
			100
		};
		soundPlastic8[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_08",
			1.2,
			1,
			100
		};
		soundConcrete1[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_01",
			1.8,
			1,
			100
		};
		soundConcrete2[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_02",
			1.8,
			1,
			100
		};
		soundConcrete3[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_03",
			1.8,
			1,
			100
		};
		soundConcrete4[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_04",
			1.8,
			1,
			100
		};
		soundConcrete5[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_05",
			1.8,
			1,
			100
		};
		soundConcrete6[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_06",
			1.8,
			1,
			100
		};
		soundConcrete7[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_07",
			1.8,
			1,
			100
		};
		soundConcrete8[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_08",
			1.8,
			1,
			100
		};
		soundTyre1[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_01",
			1.5,
			1,
			100
		};
		soundTyre2[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_02",
			1.5,
			1,
			100
		};
		soundTyre3[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_03",
			1.5,
			1,
			100
		};
		soundTyre4[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_04",
			1.5,
			1,
			100
		};
		soundTyre5[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_05",
			1.5,
			1,
			100
		};
		soundTyre6[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_06",
			1.5,
			1,
			100
		};
		soundTyre7[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_07",
			1.5,
			1,
			100
		};
		soundTyre8[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_08",
			1.5,
			1,
			100
		};
		soundRubber1[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_01",
			1.2,
			1,
			100
		};
		soundRubber2[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_02",
			1.2,
			1,
			100
		};
		soundRubber3[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_03",
			1.2,
			1,
			100
		};
		soundRubber4[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_04",
			1.2,
			1,
			100
		};
		soundRubber5[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_05",
			1.2,
			1,
			100
		};
		soundRubber6[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_06",
			1.2,
			1,
			100
		};
		soundWater1[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\water_01",
			1.3,
			1,
			100
		};
		soundWater2[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\water_02",
			1.3,
			1,
			100
		};
		soundWater3[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\water_03",
			1.3,
			1,
			100
		};
		soundWater4[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\water_04",
			1.3,
			1,
			100
		};
		soundWater5[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\water_05",
			1.3,
			1,
			100
		};
		soundWater6[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\water_06",
			1.3,
			1,
			100
		};
		soundWater7[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\water_07",
			1.3,
			1,
			100
		};
		soundWater8[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\water_08",
			1.3,
			1,
			100
		};
		soundMetalInt1[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_01",
			1,
			1,
			100
		};
		soundMetalInt2[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_02",
			1,
			1,
			100
		};
		soundMetalInt3[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_03",
			1,
			1,
			100
		};
		soundMetalInt4[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_04",
			1,
			1,
			100
		};
		soundMetalInt5[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_05",
			1,
			1,
			100
		};
		soundMetalInt6[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_06",
			1,
			1,
			100
		};
		soundVehiclePlateInt1[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_01",
			1,
			1,
			100
		};
		soundVehiclePlateInt2[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_02",
			1,
			1,
			100
		};
		soundVehiclePlateInt3[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_03",
			1,
			1,
			100
		};
		soundVehiclePlateInt4[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_04",
			1,
			1,
			100
		};
		soundVehiclePlateInt5[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_05",
			1,
			1,
			100
		};
		soundVehiclePlateInt6[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_06",
			1,
			1,
			100
		};
		soundVehiclePlateInt7[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_07",
			1,
			1,
			100
		};
		soundVehiclePlateInt8[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_08",
			1,
			1,
			100
		};
		soundVehiclePlateInt9[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_09",
			1,
			1,
			100
		};
		soundVehiclePlateInt10[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_10",
			1,
			1,
			100
		};
		soundVehiclePlateInt11[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_11",
			1,
			1,
			100
		};
		soundVehiclePlateInt12[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_12",
			1,
			1,
			100
		};
		soundVehiclePlateInt13[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_13",
			1,
			1,
			100
		};
		soundVehiclePlateInt14[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_14",
			1,
			1,
			100
		};
		soundVehiclePlateInt15[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_15",
			1,
			1,
			100
		};
		hitArmorInt[]=
		{
			"soundVehiclePlateInt1",
			0.066,
			"soundVehiclePlateInt2",
			0.066,
			"soundVehiclePlateInt3",
			0.066,
			"soundVehiclePlateInt4",
			0.066,
			"soundVehiclePlateInt5",
			0.066,
			"soundVehiclePlateInt6",
			0.066,
			"soundVehiclePlateInt7",
			0.066,
			"soundVehiclePlateInt8",
			0.066,
			"soundVehiclePlateInt9",
			0.066,
			"soundVehiclePlateInt10",
			0.066,
			"soundVehiclePlateInt11",
			0.066,
			"soundVehiclePlateInt12",
			0.066,
			"soundVehiclePlateInt13",
			0.066,
			"soundVehiclePlateInt14",
			0.066,
			"soundVehiclePlateInt15",
			0.066
		};
		hitMetalInt[]=
		{
			"soundMetalInt1",
			0.16599999,
			"soundMetalInt2",
			0.16599999,
			"soundMetalInt3",
			0.16599999,
			"soundMetalInt4",
			0.16599999,
			"soundMetalInt5",
			0.16599999,
			"soundMetalInt6",
			0.16599999
		};
		hitGroundSoft[]=
		{
			"soundGroundSoft1",
			0.2,
			"soundGroundSoft2",
			0.2,
			"soundGroundSoft3",
			0.1,
			"soundGroundSoft4",
			0.1,
			"soundGroundSoft5",
			0.1,
			"soundGroundSoft6",
			0.1,
			"soundGroundSoft7",
			0.1,
			"soundGroundSoft8",
			0.1
		};
		hitGroundHard[]=
		{
			"soundGroundHard1",
			0.2,
			"soundGroundHard2",
			0.2,
			"soundGroundHard3",
			0.1,
			"soundGroundHard4",
			0.1,
			"soundGroundHard5",
			0.1,
			"soundGroundHard6",
			0.1,
			"soundGroundHard7",
			0.1,
			"soundGroundHard8",
			0.1
		};
		hitMan[]=
		{
			"soundHitBody1",
			0.125,
			"soundHitBody2",
			0.125,
			"soundHitBody3",
			0.125,
			"soundHitBody4",
			0.125,
			"soundHitBody5",
			0.125,
			"soundHitBody6",
			0.125,
			"soundHitBody7",
			0.125,
			"soundHitBody8",
			0.125
		};
		hitArmor[]=
		{
			"soundVehiclePlate1",
			0.125,
			"soundVehiclePlate2",
			0.125,
			"soundVehiclePlate3",
			0.125,
			"soundVehiclePlate4",
			0.125,
			"soundVehiclePlate5",
			0.125,
			"soundVehiclePlate6",
			0.125,
			"soundVehiclePlate7",
			0.125,
			"soundVehiclePlate8",
			0.125
		};
		hitBuilding[]=
		{
			"soundHitBuilding1",
			0.2,
			"soundHitBuilding2",
			0.2,
			"soundHitBuilding3",
			0.1,
			"soundHitBuilding4",
			0.1,
			"soundHitBuilding5",
			0.1,
			"soundHitBuilding6",
			0.1,
			"soundHitBuilding7",
			0.1,
			"soundHitBuilding8",
			0.1
		};
		hitFoliage[]=
		{
			"soundHitFoliage1",
			0.125,
			"soundHitFoliage2",
			0.125,
			"soundHitFoliage3",
			0.125,
			"soundHitFoliage4",
			0.125,
			"soundHitFoliage5",
			0.125,
			"soundHitFoliage6",
			0.125,
			"soundHitFoliage7",
			0.125,
			"soundHitFoliage8",
			0.125
		};
		hitWood[]=
		{
			"soundWood1",
			0.0625,
			"soundWood2",
			0.0625,
			"soundWood3",
			0.0625,
			"soundWood4",
			0.0625,
			"soundWood5",
			0.0625,
			"soundWood6",
			0.0625,
			"soundWood7",
			0.0625,
			"soundWood8",
			0.0625,
			"soundWood9",
			0.0625,
			"soundWood10",
			0.0625,
			"soundWood11",
			0.0625,
			"soundWood12",
			0.0625,
			"soundWood13",
			0.0625,
			"soundWood14",
			0.0625,
			"soundWood15",
			0.0625,
			"soundWood16",
			0.0625
		};
		hitGlass[]=
		{
			"soundGlass1",
			0.125,
			"soundGlass2",
			0.125,
			"soundGlass3",
			0.125,
			"soundGlass4",
			0.125,
			"soundGlass5",
			0.125,
			"soundGlass6",
			0.125,
			"soundGlass7",
			0.125,
			"soundGlass8",
			0.125
		};
		hitGlassArmored[]=
		{
			"soundGlassArmored1",
			0.125,
			"soundGlassArmored2",
			0.125,
			"soundGlassArmored3",
			0.125,
			"soundGlassArmored4",
			0.125,
			"soundGlassArmored5",
			0.125,
			"soundGlassArmored6",
			0.125,
			"soundGlassArmored7",
			0.125,
			"soundGlassArmored8",
			0.125
		};
		hitConcrete[]=
		{
			"soundConcrete1",
			0.125,
			"soundConcrete2",
			0.125,
			"soundConcrete3",
			0.125,
			"soundConcrete4",
			0.125,
			"soundConcrete5",
			0.125,
			"soundConcrete6",
			0.125,
			"soundConcrete7",
			0.125,
			"soundConcrete8",
			0.125
		};
		hitTyre[]=
		{
			"soundTyre1",
			0.125,
			"soundTyre2",
			0.125,
			"soundTyre3",
			0.125,
			"soundTyre4",
			0.125,
			"soundTyre5",
			0.125,
			"soundTyre6",
			0.125,
			"soundTyre7",
			0.125,
			"soundTyre8",
			0.125
		};
		hitRubber[]=
		{
			"soundRubber1",
			0.125,
			"soundRubber2",
			0.125,
			"soundRubber3",
			0.125,
			"soundRubber4",
			0.125,
			"soundRubber5",
			0.125,
			"soundRubber6",
			0.125
		};
		hitPlastic[]=
		{
			"soundPlastic1",
			0.125,
			"soundPlastic2",
			0.125,
			"soundPlastic3",
			0.125,
			"soundPlastic4",
			0.125,
			"soundPlastic5",
			0.125,
			"soundPlastic6",
			0.125,
			"soundPlastic7",
			0.125,
			"soundPlastic8",
			0.125
		};
		hitDefault[]=
		{
			"soundDefault1",
			0.2,
			"soundDefault2",
			0.2,
			"soundDefault3",
			0.1,
			"soundDefault4",
			0.1,
			"soundDefault5",
			0.1,
			"soundDefault6",
			0.1,
			"soundDefault7",
			0.1,
			"soundDefault8",
			0.1
		};
		hitMetal[]=
		{
			"soundMetal1",
			0.125,
			"soundMetal2",
			0.125,
			"soundMetal3",
			0.125,
			"soundMetal4",
			0.125,
			"soundMetal5",
			0.125,
			"soundMetal6",
			0.125,
			"soundMetal7",
			0.125,
			"soundMetal8",
			0.125
		};
		hitMetalplate[]=
		{
			"soundVehiclePlate1",
			0.125,
			"soundVehiclePlate2",
			0.125,
			"soundVehiclePlate3",
			0.125,
			"soundVehiclePlate4",
			0.125,
			"soundVehiclePlate5",
			0.125,
			"soundVehiclePlate6",
			0.125,
			"soundVehiclePlate7",
			0.125,
			"soundVehiclePlate8",
			0.125
		};
		hitWater[]=
		{
			"soundWater1",
			0.125,
			"soundWater2",
			0.125,
			"soundWater3",
			0.125,
			"soundWater4",
			0.125,
			"soundWater5",
			0.125,
			"soundWater6",
			0.125,
			"soundWater7",
			0.125,
			"soundWater8",
			0.125
		};
		bulletFly1[]=
		{
			"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby01",
			1.9,
			1,
			100
		};
		bulletFly2[]=
		{
			"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby02",
			1.9,
			1,
			100
		};
		bulletFly3[]=
		{
			"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby03",
			1.9,
			1,
			100
		};
		bulletFly4[]=
		{
			"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby04",
			1.9,
			1,
			100
		};
		bulletFly5[]=
		{
			"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby05",
			1.9,
			1,
			100
		};
		bulletFly6[]=
		{
			"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby06",
			1.9,
			1,
			100
		};
		bulletFly7[]=
		{
			"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby07",
			1.9,
			1,
			100
		};
		bulletFly8[]=
		{
			"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby08",
			1.9,
			1,
			100
		};
		bulletFly9[]=
		{
			"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby09",
			1.9,
			1,
			100
		};
		bulletFly10[]=
		{
			"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby10",
			1.9,
			1,
			100
		};
		bulletFly11[]=
		{
			"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby11",
			1.9,
			1,
			100
		};
		bulletFly12[]=
		{
			"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby12",
			1.9,
			1,
			100
		};
		bulletFly[]=
		{
			"bulletFly1",
			0.082999997,
			"bulletFly2",
			0.082999997,
			"bulletFly3",
			0.082999997,
			"bulletFly4",
			0.082999997,
			"bulletFly5",
			0.082999997,
			"bulletFly6",
			0.082999997,
			"bulletFly7",
			0.082999997,
			"bulletFly8",
			0.082999997,
			"bulletFly9",
			0.082999997,
			"bulletFly10",
			0.082999997,
			"bulletFly11",
			0.082999997,
			"bulletFly12",
			0.082999997
		};
	};
	class B_762x51_Minigun_Tracer_Green_Splash: B_762x51_Ball
	{
		hit=11.6;
		indirectHit=1.2;
		indirectHitRange=2;
		model="\A3\Weapons_f\Data\bullettracer\tracer_green";
		caliber=3.5999999;
		deflecting=25;
		fuseDistance=12;
		soundSetSonicCrack[]=
		{
			"BulletSonicCrack_Gatling_SoundSet"
		};
	};
	class SmokeLauncherConfettiAmmo: SmokeLauncherAmmo
	{
		muzzleEffect="expEden_fnc_effectFiredSmokeLauncherConfetti";
		effectsSmoke="EmptyEffect";
		weaponLockSystem=0;
		hit=1;
		indirectHit=0;
		indirectHitRange=0;
		timeToLive=1;
		thrustTime=0.1;
		airFriction=-0.05;
		simulation="shotCM";
		model="\A3\weapons_f\empty";
		maxControlRange=50;
		initTime=0.1;
		aiAmmoUsageFlags=0;
	};
	class SmokeLauncherConfettiAmmoSlug: SmokeShellVehicle_boat
	{
		timeToLive=2;
		effectsSmoke="EmptyEffect";
	};
	class M_NLAW_AT_F: MissileBase
	{
		warheadName="HEAT";
	};
	class ammo_Penetrator_NLAW: ammo_Penetrator_Base
	{
		warheadName="HEAT";
	};
	class B_40mm_HE_Airburst_01_G: B_40mm_GPR
	{	
		hit=7;
		indirectHit=4;
		indirectHitRange=12;
		explosive=1;
		dangerRadiusHit=90;
		airFriction=-0.00038000001;
		caliber=1.3;
		explosionEffects="ClusterExplosionEffects";
		class CamShakeExplode
		{
			power=3;
			duration=0.35;
			frequency=10;
			distance=90;
		};
		SoundSetExplosion[]=
		{
			"Launchers_Exp_SoundSet"
		};
		class EventHandlers
		{
			fired="_this spawn expEden_fnc_setProjectileAirburst";
		};
	};
	class B_30mm_HE_Airburst_01_G: B_30mm_HE
	{
		hit=7;
		indirectHit=3;
		indirectHitRange=10;
		explosive=1;
		dangerRadiusHit=90;
		airFriction=-0.00038000001;
		caliber=1.3;
		explosionEffects="ClusterExplosionEffects";
		class CamShakeExplode
		{
			power=3;
			duration=0.35;
			frequency=10;
			distance=90;
		};
		SoundSetExplosion[]=
		{
			"Launchers_Exp_SoundSet"
		};
		class EventHandlers
		{
			fired="_this spawn expEden_fnc_setProjectileAirburst";
		};
	};
};
class CfgSoundSets
{
	class Launchers_Exp_SoundSet
	{
		soundShaders[]=
		{
			"Launchers_Exp_SoundShader"
		};
		volumeFactor=1;
		volumeCurve="LinearCurve";
		spatial=1;
		doppler=0;
		loop=0;
		frequencyRandomizer=1.2;
		sound3DProcessingType="ExplosionLight3DProcessingType";
		distanceFilter="explosionDistanceFreqAttenuationFilter";
	};
	class Rifle_silencerTail_Base_SoundSet;
	class Msbs65_01_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"Msbs65_01_Tail_Silencer_Trees_SoundShader",
			"Msbs65_01_Tail_Silencer_Forest_SoundShader",
			"Msbs65_01_Tail_Silencer_Meadows_SoundShader",
			"Msbs65_01_Tail_Silencer_Houses_SoundShader"
		};
	};
	class weapon_Fighter_Gun_30mm_Globe_SoundSet
	{
		soundShaders[]=
		{
			"weapon_Fighter_Gun_30mm_Globe_SoundShader"
		};
		volumeFactor=1;
		frequencyRandomizer=0.2;
		frequencyRandomizerMin=0.1;
		volumeRandomizer=0.1;
		volumeRandomizerMin=0.2;
		volumeCurve="LinearCurve";
		spatial=1;
		doppler=0;
		loop=0;
		sound3DProcessingType="ExplosionLight3DProcessingType";
		distanceFilter="explosionDistanceFreqAttenuationFilter";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
	};
	class metalCasingDrop_SoundSet
	{
		soundShaders[]=
		{
			"M134MinigunLSV_metalCasingDrop_SoundShader"
		};
		volumeFactor=1;
		frequencyRandomizer=0.1;
		frequencyRandomizerMin=0.050000001;
		volumeRandomizer=0.1;
		volumeRandomizerMin=0.075000003;
		volumeCurve="InverseSquare2Curve";
		spatial=1;
		doppler=0;
		loop=0;
		sound3DProcessingType="WeaponLightShot3DProcessingType";
		distanceFilter="weaponShotDistanceFreqAttenuationFilter";
		occlusionFactor=0;
		obstructionFactor=0;
	};
};
class CfgSoundShaders
{
	class Launchers_Exp_SoundShader
	{
		samples[]=
		{
			
			{
				"\a3\sounds_f_exp\arsenal\weapons\launchers\rpg7\rpg7_hit",
				1
			}
		};
		volume=0.46;
		range=1500;
		rangeCurve[]=
		{
			{0,1},
			{400,1},
			{1500,0}
		};
	};
	class M134MinigunLSV_metalCasingDrop_SoundShader
	{
		samples[]=
		{
			
			{
				"\a3\sounds_f\weapons\bullets\7_62-metal1",
				0.30000001
			},
			
			{
				"\a3\sounds_f\weapons\bullets\7_62-metal2",
				0.30000001
			},
			
			{
				"\a3\sounds_f\weapons\bullets\7_62-metal3",
				0.30000001
			},
			
			{
				"\a3\sounds_f\weapons\bullets\7_62-metal4",
				0.30000001
			},
			
			{
				"\a3\sounds_f\weapons\shells\9mm\metal_9mm_01",
				0.30000001
			},
			
			{
				"\a3\sounds_f\weapons\shells\9mm\metal_9mm_02",
				0.30000001
			},
			
			{
				"\a3\sounds_f\weapons\shells\9mm\metal_9mm_03",
				0.30000001
			},
			
			{
				"\a3\sounds_f\weapons\shells\9mm\metal_9mm_04",
				0.30000001
			},
			
			{
				"\a3\sounds_f\weapons\shells\9mm\metal_9mm_05",
				0.30000001
			},
			
			{
				"\a3\sounds_f\weapons\shells\9mm\metal_9mm_06",
				0.30000001
			},
			
			{
				"\a3\sounds_f\weapons\shells\9mm\metal_9mm_07",
				0.30000001
			},
			
			{
				"\a3\sounds_f\weapons\shells\9mm\metal_9mm_08",
				0.30000001
			},
			
			{
				"\a3\sounds_f\weapons\shells\9mm\metal_9mm_09",
				0.30000001
			},
			
			{
				"\a3\sounds_f\weapons\shells\9mm\metal_9mm_10",
				0.30000001
			},
			
			{
				"\a3\sounds_f\weapons\shells\9mm\metal_9mm_11",
				0.30000001
			},
			
			{
				"\a3\sounds_f\weapons\shells\5_56\metal_556_01",
				0.30000001
			},
			
			{
				"\a3\sounds_f\weapons\shells\5_56\metal_556_02",
				0.30000001
			},
			
			{
				"\a3\sounds_f\weapons\shells\5_56\metal_556_03",
				0.30000001
			},
			
			{
				"\a3\sounds_f\weapons\shells\5_56\metal_556_04",
				0.30000001
			},
			
			{
				"\a3\sounds_f\weapons\shells\5_56\shellcase_556_metal_01",
				1
			},
			
			{
				"\a3\sounds_f\weapons\shells\5_56\shellcase_556_metal_02",
				1
			},
			
			{
				"\a3\sounds_f\weapons\shells\5_56\shellcase_556_metal_03",
				1
			},
			
			{
				"\a3\sounds_f\weapons\shells\5_56\shellcase_556_metal_04",
				1
			}
		};
		volume=1;
		range=30;
	};
	class weapon_Fighter_Gun_30mm_Globe_SoundShader
	{
		samples[]=
		{
			
			{
				"\a3\sounds_f_jets\weapons\cannons\fighter_gun_30mm_1",
				1
			},
			
			{
				"\a3\sounds_f_jets\weapons\cannons\fighter_gun_30mm_2",
				1
			},
			
			{
				"\a3\sounds_f_jets\weapons\cannons\fighter_gun_30mm_3",
				1
			}
		};
		volume=1;
		range=3000;
	};
	class Mx_silencerTailForest_Enoch_SoundShader
	{
		volume="(forest/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class Mx_silencerTailHouses_Enoch_SoundShader
	{
		volume="(houses/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class Mx_silencerTailMeadows_Enoch_SoundShader
	{
		volume="(meadows + sea)/(forest + houses + meadows + sea + trees) * (1-interior)";
	};
	class Mx_silencerTailTrees_Enoch_SoundShader
	{
		volume="(trees/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class 4Five_silencerTailForest_SoundShader
	{
		volume="(forest/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class 4Five_silencerTailHouses_SoundShader
	{
		volume="(houses/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class 4Five_silencerTailMeadows_SoundShader
	{
		volume="(meadows + sea)/(forest + houses + meadows + sea + trees) * (1-interior)";
	};
	class 4Five_silencerTailTrees_SoundShader
	{
		volume="(trees/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class ACPC2_silencerTailForest_SoundShader
	{
		volume="(forest/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class ACPC2_silencerTailHouses_SoundShader
	{
		volume="(houses/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class ACPC2_silencerTailMeadows_SoundShader
	{
		volume="(meadows + sea)/(forest + houses + meadows + sea + trees) * (1-interior)";
	};
	class ACPC2_silencerTailTrees_SoundShader
	{
		volume="(trees/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class P07_silencerTailForest_SoundShader
	{
		volume="(forest/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class P07_silencerTailHouses_SoundShader
	{
		volume="(houses/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class P07_silencerTailMeadows_SoundShader
	{
		volume="(meadows + sea)/(forest + houses + meadows + sea + trees) * (1-interior)";
	};
	class P07_silencerTailTrees_SoundShader
	{
		volume="(trees/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class Rook40_silencerTailForest_SoundShader
	{
		volume="(forest/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class Rook40_silencerTailHouses_SoundShader
	{
		volume="(houses/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class Rook40_silencerTailMeadows_SoundShader
	{
		volume="(meadows + sea)/(forest + houses + meadows + sea + trees) * (1-interior)";
	};
	class Rook40_silencerTailTrees_SoundShader
	{
		volume="(trees/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class DMR01_silencerTailForest_SoundShader
	{
		volume="(forest/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class DMR01_silencerTailHouses_SoundShader
	{
		volume="(houses/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class DMR01_silencerTailMeadows_SoundShader
	{
		volume="(meadows + sea)/(forest + houses + meadows + sea + trees) * (1-interior)";
	};
	class DMR01_silencerTailTrees_SoundShader
	{
		volume="(trees/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class Mk18_silencerTailForest_SoundShader
	{
		volume="(forest/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class Mk18_silencerTailHouses_SoundShader
	{
		volume="(houses/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class Mk18_silencerTailMeadows_SoundShader
	{
		volume="(meadows + sea)/(forest + houses + meadows + sea + trees) * (1-interior)";
	};
	class Mk18_silencerTailTrees_SoundShader
	{
		volume="(trees/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class Mk200_silencerTailForest_SoundShader
	{
		volume="(forest/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class Mk200_silencerTailHouses_SoundShader
	{
		volume="(houses/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class Mk200_silencerTailMeadows_SoundShader
	{
		volume="(meadows + sea)/(forest + houses + meadows + sea + trees) * (1-interior)";
	};
	class Mk200_silencerTailTrees_SoundShader
	{
		volume="(trees/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class Katiba_silencerTailForest_SoundShader
	{
		volume="(forest/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class Katiba_silencerTailHouses_SoundShader
	{
		volume="(houses/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class Katiba_silencerTailMeadows_SoundShader
	{
		volume="(meadows + sea)/(forest + houses + meadows + sea + trees) * (1-interior)";
	};
	class Katiba_silencerTailTrees_SoundShader
	{
		volume="(trees/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class Mk20_silencerTailForest_SoundShader
	{
		volume="(forest/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class Mk20_silencerTailHouses_SoundShader
	{
		volume="(houses/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class Mk20_silencerTailMeadows_SoundShader
	{
		volume="(meadows + sea)/(forest + houses + meadows + sea + trees) * (1-interior)";
	};
	class Mk20_silencerTailTrees_SoundShader
	{
		volume="(trees/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class TRG20_silencerTailForest_SoundShader
	{
		volume="(forest/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class TRG20_silencerTailHouses_SoundShader
	{
		volume="(houses/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class TRG20_silencerTailMeadows_SoundShader
	{
		volume="(meadows + sea)/(forest + houses + meadows + sea + trees) * (1-interior)";
	};
	class TRG20_silencerTailTrees_SoundShader
	{
		volume="(trees/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class SMGPDW2000_silencerTailForest_SoundShader
	{
		volume="(forest/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class SMGPDW2000_silencerTailHouses_SoundShader
	{
		volume="(houses/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class SMGPDW2000_silencerTailMeadows_SoundShader
	{
		volume="(meadows + sea)/(forest + houses + meadows + sea + trees) * (1-interior)";
	};
	class SMGPDW2000_silencerTailTrees_SoundShader
	{
		volume="(trees/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class SMGSting_silencerTailForest_SoundShader
	{
		volume="(forest/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class SMGSting_silencerTailHouses_SoundShader
	{
		volume="(houses/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class SMGSting_silencerTailMeadows_SoundShader
	{
		volume="(meadows + sea)/(forest + houses + meadows + sea + trees) * (1-interior)";
	};
	class SMGSting_silencerTailTrees_SoundShader
	{
		volume="(trees/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class SMGVermin_silencerTailForest_SoundShader
	{
		volume="(forest/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class SMGVermin_silencerTailHouses_SoundShader
	{
		volume="(houses/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class SMGVermin_silencerTailMeadows_SoundShader
	{
		volume="(meadows + sea)/(forest + houses + meadows + sea + trees) * (1-interior)";
	};
	class SMGVermin_silencerTailTrees_SoundShader
	{
		volume="(trees/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class DMR02_silencerTailForest_SoundShader
	{
		volume="(forest/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class DMR02_silencerTailHouses_SoundShader
	{
		volume="(houses/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class DMR02_silencerTailMeadows_SoundShader
	{
		volume="(meadows + sea)/(forest + houses + meadows + sea + trees) * (1-interior)";
	};
	class DMR02_silencerTailTrees_SoundShader
	{
		volume="(trees/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class DMR03_silencerTailForest_SoundShader
	{
		volume="(forest/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class DMR03_silencerTailHouses_SoundShader
	{
		volume="(houses/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class DMR03_silencerTailMeadows_SoundShader
	{
		volume="(meadows + sea)/(forest + houses + meadows + sea + trees) * (1-interior)";
	};
	class DMR03_silencerTailTrees_SoundShader
	{
		volume="(trees/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class DMR04_silencerTailForest_SoundShader
	{
		volume="(forest/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class DMR04_silencerTailHouses_SoundShader
	{
		volume="(houses/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class DMR04_silencerTailMeadows_SoundShader
	{
		volume="(meadows + sea)/(forest + houses + meadows + sea + trees) * (1-interior)";
	};
	class DMR04_silencerTailTrees_SoundShader
	{
		volume="(trees/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class DMR05_silencerTailForest_SoundShader
	{
		volume="(forest/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class DMR05_silencerTailHouses_SoundShader
	{
		volume="(houses/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class DMR05_silencerTailMeadows_SoundShader
	{
		volume="(meadows + sea)/(forest + houses + meadows + sea + trees) * (1-interior)";
	};
	class DMR05_silencerTailTrees_SoundShader
	{
		volume="(trees/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class DMR06_silencerTailForest_SoundShader
	{
		volume="(forest/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class DMR06_silencerTailHouses_SoundShader
	{
		volume="(houses/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class DMR06_silencerTailMeadows_SoundShader
	{
		volume="(meadows + sea)/(forest + houses + meadows + sea + trees) * (1-interior)";
	};
	class DMR06_silencerTailTrees_SoundShader
	{
		volume="(trees/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class MMG01_silencerTailForest_SoundShader
	{
		volume="(forest/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class MMG01_silencerTailHouses_SoundShader
	{
		volume="(houses/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class MMG01_silencerTailMeadows_SoundShader
	{
		volume="(meadows + sea)/(forest + houses + meadows + sea + trees) * (1-interior)";
	};
	class MMG01_silencerTailTrees_SoundShader
	{
		volume="(trees/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class MMG02_silencerTailForest_SoundShader
	{
		volume="(forest/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class MMG02_silencerTailHouses_SoundShader
	{
		volume="(houses/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class MMG02_silencerTailMeadows_SoundShader
	{
		volume="(meadows + sea)/(forest + houses + meadows + sea + trees) * (1-interior)";
	};
	class MMG02_silencerTailTrees_SoundShader
	{
		volume="(trees/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class ADR_97_silencerTailForest_SoundShader
	{
		volume="(forest/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class ADR_97_silencerTailHouses_SoundShader
	{
		volume="(houses/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class ADR_97_silencerTailMeadows_SoundShader
	{
		volume="(meadows + sea)/(forest + houses + meadows + sea + trees) * (1-interior)";
	};
	class ADR_97_silencerTailTrees_SoundShader
	{
		volume="(trees/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class SyndikatLMG_silencerTailForest_SoundShader
	{
		volume="(forest/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class SyndikatLMG_silencerTailHouses_SoundShader
	{
		volume="(houses/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class SyndikatLMG_silencerTailMeadows_SoundShader
	{
		volume="(meadows + sea)/(forest + houses + meadows + sea + trees) * (1-interior)";
	};
	class SyndikatLMG_silencerTailTrees_SoundShader
	{
		volume="(trees/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class DMR07_silencerTailForest_SoundShader
	{
		volume="(forest/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class DMR07_silencerTailHouses_SoundShader
	{
		volume="(houses/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class DMR07_silencerTailMeadows_SoundShader
	{
		volume="(meadows + sea)/(forest + houses + meadows + sea + trees) * (1-interior)";
	};
	class DMR07_silencerTailTrees_SoundShader
	{
		volume="(trees/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class Rogue9_silencerTailForest_SoundShader
	{
		volume="(forest/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class Rogue9_silencerTailHouses_SoundShader
	{
		volume="(houses/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class Rogue9_silencerTailMeadows_SoundShader
	{
		volume="(meadows + sea)/(forest + houses + meadows + sea + trees) * (1-interior)";
	};
	class Rogue9_silencerTailTrees_SoundShader
	{
		volume="(trees/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class AK12_silencerTailForest_SoundShader
	{
		volume="(forest/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class AK12_silencerTailHouses_SoundShader
	{
		volume="(houses/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class AK12_silencerTailMeadows_SoundShader
	{
		volume="(meadows + sea)/(forest + houses + meadows + sea + trees) * (1-interior)";
	};
	class AK12_silencerTailTrees_SoundShader
	{
		volume="(trees/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class Type115_silencerTailForest_SoundShader
	{
		volume="(forest/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class Type115_silencerTailHouses_SoundShader
	{
		volume="(houses/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class Type115_silencerTailMeadows_SoundShader
	{
		volume="(meadows + sea)/(forest + houses + meadows + sea + trees) * (1-interior)";
	};
	class Type115_silencerTailTrees_SoundShader
	{
		volume="(trees/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class CAR_95_silencerTailForest_SoundShader
	{
		volume="(forest/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class CAR_95_silencerTailHouses_SoundShader
	{
		volume="(houses/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class CAR_95_silencerTailMeadows_SoundShader
	{
		volume="(meadows + sea)/(forest + houses + meadows + sea + trees) * (1-interior)";
	};
	class CAR_95_silencerTailTrees_SoundShader
	{
		volume="(trees/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class SPAR01_silencerTailForest_SoundShader
	{
		volume="(forest/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class SPAR01_silencerTailHouses_SoundShader
	{
		volume="(houses/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class SPAR01_silencerTailMeadows_SoundShader
	{
		volume="(meadows + sea)/(forest + houses + meadows + sea + trees) * (1-interior)";
	};
	class SPAR01_silencerTailTrees_SoundShader
	{
		volume="(trees/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class SPAR02_silencerTailForest_SoundShader
	{
		volume="(forest/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class SPAR02_silencerTailHouses_SoundShader
	{
		volume="(houses/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class SPAR02_silencerTailMeadows_SoundShader
	{
		volume="(meadows + sea)/(forest + houses + meadows + sea + trees) * (1-interior)";
	};
	class SPAR02_silencerTailTrees_SoundShader
	{
		volume="(trees/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class SPAR_17_silencerTailForest_SoundShader
	{
		volume="(forest/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class SPAR_17_silencerTailHouses_SoundShader
	{
		volume="(houses/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class SPAR_17_silencerTailMeadows_SoundShader
	{
		volume="(meadows + sea)/(forest + houses + meadows + sea + trees) * (1-interior)";
	};
	class SPAR_17_silencerTailTrees_SoundShader
	{
		volume="(trees/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class Msbs65_01_Tail_Silencer_Forest_SoundShader
	{
		volume="(forest/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class Msbs65_01_Tail_Silencer_Houses_SoundShader
	{
		volume="(houses/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class Msbs65_01_Tail_Silencer_Meadows_SoundShader
	{
		volume="(meadows + sea)/(forest + houses + meadows + sea + trees) * (1-interior)";
	};
	class Msbs65_01_Tail_Silencer_Trees_SoundShader
	{
		volume="(trees/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class DMR04_tailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"a3\sounds_f_mark\arsenal\weapons\longrangerifles\dmr_04_asp1_kir\dmr_04_tail_forest",
				1
			}
		};
		volume="(forest/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class DMR04_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"a3\sounds_f_mark\arsenal\weapons\longrangerifles\dmr_04_asp1_kir\dmr_04_tail_houses",
				1
			}
		};
		volume="(houses/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
	class DMR04_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"a3\sounds_f_mark\arsenal\weapons\longrangerifles\dmr_04_asp1_kir\dmr_04_tail_interior",
				1
			}
		};
	};
	class DMR04_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"a3\sounds_f_mark\arsenal\weapons\longrangerifles\dmr_04_asp1_kir\dmr_04_tail_meadows",
				1
			}
		};
		volume="(meadows + sea)/(forest + houses + meadows + sea + trees) * (1-interior)";
	};
	class DMR04_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"a3\sounds_f_mark\arsenal\weapons\longrangerifles\dmr_04_asp1_kir\dmr_04_tail_trees",
				1
			}
		};
		volume="(trees/(forest + houses + meadows + sea + trees)) * (1-interior)";
	};
};
class CfgMagazines
{
	class 250Rnd_30mm_HE_shells;
	class 60Rnd_40mm_GPR_shells;
	class CA_Magazine;
	class VehicleMagazine;
	class PylonWeapon_260Rnd_30mmHE_shells: VehicleMagazine
	{
		author="O&T Expansion Eden";
		scope=2;
		displayName="$STR_Globe_CfgWeapons_Twin_Cannon_30mm2_HE";
		displayNameShort="$STR_a3_cfgmagazines_24rnd_pug_missiles_dns";
		descriptionShort="$STR_Globe_CfgWeapons_Twin_Cannon_30mm1_HE";
		displayNameMFDFormat="ОФ";
		ammo="B_30mm_HE";
		count=260;
		initSpeed=950;
		maxLeadSpeed=390;
		tracersEvery=2;
		muzzleImpulseFactor[]={1,4};
		mass=300;
		nameSound="cannon";
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_Twin_Cannon_20mm";
		muzzlePos="muzzlePos";
		muzzleEnd="muzzleEnd";
		hardpoints[]=
		{
			"O_A143_BUZZARD_CENTER_PYLON",
			"30MM_TWIN_CANNON",
			"20MM_TWIN_CANNON"
		};
		pylonWeapon="Twin_Cannon_30mm";
	};
	class PylonWeapon_260Rnd_30mmMP_shells: PylonWeapon_260Rnd_30mmHE_shells
	{
		author="O&T Expansion Eden";
		scope=2;
		displayName="$STR_Globe_CfgWeapons_Twin_Cannon_30mm2_MP";
		displayNameShort="$STR_A3_cfgmagazines_heat_mp0";
		descriptionShort="$STR_Globe_CfgWeapons_Twin_Cannon_30mm1_MP";
		displayNameMFDFormat="КОФ";
		ammo="B_30mm_MP";
		initSpeed=900;
		muzzleImpulseFactor[]={0.80000001,3};
	};
	class PylonWeapon_260Rnd_30mmAP_shells: PylonWeapon_260Rnd_30mmHE_shells
	{
		author="O&T Expansion Eden";
		scope=2;
		displayName="$STR_Globe_CfgWeapons_Twin_Cannon_30mm2_AP";
		displayNameShort="$STR_a3_cfgmagazines_250rnd_30mm_apds_shells_dns";
		descriptionShort="$STR_Globe_CfgWeapons_Twin_Cannon_30mm1_AP";
		displayNameMFDFormat="БП";
		ammo="B_30mm_AP";
		initSpeed=1230;
		muzzleImpulseFactor[]={0.60000002,2.5};
	};
	class PylonWeapon_260Rnd_30mmAPFSDS_shells: PylonWeapon_260Rnd_30mmHE_shells
	{
		author="O&T Expansion Eden";
		scope=2;
		displayName="$STR_Globe_CfgWeapons_Twin_Cannon_30mm2_APFSDS";
		displayNameShort="$STR_A3_cfgmagazines_apfsd0";
		descriptionShort="$STR_Globe_CfgWeapons_Twin_Cannon_30mm1_APFSDS";
		displayNameMFDFormat="БОПС";
		ammo="B_30mm_APFSDS";
		initSpeed=1500;
		muzzleImpulseFactor[]={0.5,2};
	};
	class 1Rnd_Canister_Grenade_shell: CA_Magazine
	{
		author="O&T Expansion Eden";
		scope=2;
		type=16;
		displayName="$STR_Globe_CfgMagazines_1Rnd_Canister_Grenade_shell0";
		displayNameShort="$STR_Globe_CfgMagazines_1Rnd_Canister_Grenade_shell1";
		picture="\A3\weapons_f_expEden\Data\UI\gear_1Rnd_Canister_Grenade_shell_ca.paa";
		ammo="G_40mm_Canister";
		initSpeed=185;
		count=1;
		nameSound="";
		descriptionShort="$STR_Globe_CfgMagazines_1Rnd_Canister_Grenade_shell2";
		mass=4;
		modelSpecial="\a3\Weapons_F\MagazineProxies\mag_40x36_HE_1rnd.p3d";
		modelSpecialIsProxy=1;
		deleteIfEmpty=0;
	};
	class 400Rnd_762x51_Belt_Tracer_Green_Splash: VehicleMagazine
	{
		author="O&T Expansion Eden";
		scope=2;
		count=400;
		ammo="B_762x51_Minigun_Tracer_Green_Splash";
		maxLeadSpeed=90.111099;
		initSpeed=860;
		tracersEvery=1;
		nameSound="mgun";
		displayName="$STR_Globe_CfgMagazines_400Rnd_762x51_Belt_Tracer_Green_Splash0";
		displaynameShort="$STR_A3_TRACER_DNS";
		descriptionShort="$STR_Cfg_MarkerCol_yellow";
	};
	class SmokeLauncherConfettiMag: VehicleMagazine
	{
		author="O&T Expansion Eden";
		scope=2;
		ammo="SmokeLauncherConfettiAmmo";
		count=2;
		nameSound="smokeshell";
		initSpeed=6;
	};
	class SmokeLauncherConfettiMag_1Rnd: SmokeLauncherConfettiMag
	{
		author="O&T Expansion Eden";
		count=1;
	};
	class 60Rnd_40mm_HE_Airburst_01_G_shells: 60Rnd_40mm_GPR_shells
	{
		author="O&T Expansion Eden";
		displayName="$STR_Globe_CfgMagazines_60Rnd_40mm_HE_Airburst_01_G_shells_dn";
		displayNameShort="$STR_Globe_CfgMagazines_HE_Airburst_01_G_shells_dns";
		displayNameMFDFormat="Airburst";
		ammo="B_40mm_HE_Airburst_01_G";
	};
	class 60Rnd_30mm_HE_Airburst_01_G_shells: 250Rnd_30mm_HE_shells
	{
		author="O&T Expansion Eden";
		displayName="$STR_Globe_CfgMagazines_60Rnd_30mm_HE_Airburst_01_G_shells_dn";
		displayNameShort="$STR_Globe_CfgMagazines_HE_Airburst_01_G_shells_dns";
		displayNameMFDFormat="Вздш. пдрв.";
		ammo="B_30mm_HE_Airburst_01_G";
		count=60;
	};
};
class CfgMagazineWells
{
	class UGL_40x36
	{
		BI_Magazines[]+=
		{
			"1Rnd_Canister_Grenade_shell"
		};
		RHS_Magazines[]+=
		{
			"1Rnd_Canister_Grenade_shell"
		};
	};
	class CBA_40mm_M203
	{
		RHS_Magazines[]+=
		{
			"1Rnd_Canister_Grenade_shell"
		};
		BI_grenades[]+=
		{
			"1Rnd_Canister_Grenade_shell"
		};
		CUP_mags[]+=
		{
			"1Rnd_Canister_Grenade_shell"
		};
	};
};
