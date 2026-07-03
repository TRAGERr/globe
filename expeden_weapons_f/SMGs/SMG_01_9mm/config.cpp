class CfgPatches
{
	class Weapons_Globe_SMGs_SMG_01_9mm
	{
		addonRootClass="A3_Weapons_F_expEden";
		requiredAddons[]=
		{
			"A3_Weapons_F_expEden"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Weapon_SMG_01_9mm_G"
		};
		weapons[]=
		{
			"SMG_01_9mm"
		};
	};
};
class MuzzleSlot_9mm;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
	class Rifle_Base_F;
	class Rifle_Short_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class SMG_01_Base: Rifle_Short_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
		};
		class Single: Mode_SemiAuto
		{
			class StandardSound;
			class SilencedSound;
		};
		class Burst: Mode_Burst
		{
			class StandardSound;
			class SilencedSound;
		};
		class FullAuto: Mode_FullAuto
		{
			class StandardSound;
			class SilencedSound;
		};
	};
	class SMG_01_9mm_Base: SMG_01_Base
	{
		magazines[]=
		{
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Red",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Yellow",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Green",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Red_Mag",
			"30Rnd_9x21_Yellow_Mag",
			"30Rnd_9x21_Green_Mag"
		};
		recoil="recoil_smg_02";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot_9mm
			{
			};
		};
		class Single: Single
		{
			class StandardSound: StandardSound
			{
				SoundSetShot[]=
				{
					"SMGVermin9mm_Shot_SoundSet",
					"SMGVermin9mm_Tail_SoundSet",
					"SMGVermin9mm_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: SilencedSound
			{
				SoundSetShot[]=
				{
					"SMGVermin9mm_silencerShot_SoundSet",
					"SMGVermin9mm_silencerTail_SoundSet",
					"SMGVermin9mm_silencerInteriorTail_SoundSet"
				};
			};
			dispersion=0.0011;
		};
		class Burst: Burst
		{
			class StandardSound: StandardSound
			{
				SoundSetShot[]=
				{
					"SMGVermin9mm_Shot_SoundSet",
					"SMGVermin9mm_Tail_SoundSet",
					"SMGVermin9mm_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: SilencedSound
			{
				SoundSetShot[]=
				{
					"SMGVermin9mm_silencerShot_SoundSet",
					"SMGVermin9mm_silencerTail_SoundSet",
					"SMGVermin9mm_silencerInteriorTail_SoundSet"
				};
			};
			dispersion=0.0011;
		};
		class FullAuto: FullAuto
		{
			class StandardSound: StandardSound
			{
				SoundSetShot[]=
				{
					"SMGVermin9mm_Shot_SoundSet",
					"SMGVermin9mm_Tail_SoundSet",
					"SMGVermin9mm_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: SilencedSound
			{
				SoundSetShot[]=
				{
					"SMGVermin9mm_silencerShot_SoundSet",
					"SMGVermin9mm_silencerTail_SoundSet",
					"SMGVermin9mm_silencerInteriorTail_SoundSet"
				};
			};
			dispersion=0.0011;
		};
		emptySound[]=
		{
			"",
			1,
			1
		};
		soundBullet[]=
		{
			"emptySound",
			1
		};
		class EventHandlers
		{
			class Globe_caseDropEH
			{
				fired="(_this # 0) spawn expEden_fnc_caseDrops9;";
			};
		};
	};
	class SMG_01_9mm: SMG_01_9mm_Base
	{
		author="O&T Expansion Eden";
		_generalMacro="SMG_01_9mm";
		baseWeapon="SMG_01_9mm";
		scope=2;
		model="\A3\Weapons_F_beta\Smgs\SMG_01\SMG_01_F.p3d";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=36;
		};
		inertia=0.2;
		aimTransitionSpeed=1.6;
		dexterity=1.8;
		initSpeed=350;
		displayName="$STR_Globe_CfgWeapons_SMG_01_9mm0";
		picture="\A3\Weapons_F_beta\Smgs\SMG_01\data\UI\gear_SMG_01_X_CA.paa";
		UiPicture="\A3\Weapons_F\data\UI\icon_regular_CA.paa";
		descriptionShort="$STR_Globe_CfgWeapons_SMG_01_9mm1";
		class Library
		{
			libTextDesc="$str_a3_cfgweapons_hgun_smg_01_library0";
		};
	};
};
class CfgSoundSets
{
	class SMGSting_silencerInteriorTail_SoundSet;
	class SMGSting_silencerTail_SoundSet;
	class SMGSting_InteriorTail_SoundSet;
	class SMGSting_Tail_SoundSet;
	class SMGVermin_silencerShot_SoundSet;
	class SMGVermin_Shot_SoundSet;
	class SMGVermin9mm_Shot_SoundSet: SMGVermin_Shot_SoundSet
	{
		volumeFactor=0.85;
		sound3DProcessingType="WeaponLightShot3DProcessingType";
	};
	class SMGVermin9mm_silencerShot_SoundSet: SMGVermin_silencerShot_SoundSet
	{
		volumeFactor=0.9;
		sound3DProcessingType="WeaponLightShot3DProcessingType";
	};
	class SMGVermin9mm_Tail_SoundSet: SMGSting_Tail_SoundSet
	{
		sound3DProcessingType="WeaponLightShotTail3DProcessingType";
	};
	class SMGVermin9mm_InteriorTail_SoundSet: SMGSting_InteriorTail_SoundSet
	{
		sound3DProcessingType="WeaponLightShotTail3DProcessingType";
	};
	class SMGVermin9mm_silencerTail_SoundSet: SMGSting_silencerTail_SoundSet
	{
		sound3DProcessingType="WeaponLightShotTail3DProcessingType";
	};
	class SMGVermin9mm_silencerInteriorTail_SoundSet: SMGSting_silencerInteriorTail_SoundSet
	{
		sound3DProcessingType="WeaponLightShotTail3DProcessingType";
	};
};
class CfgVehicles
{
	class Weapon_Base_F;
	class Weapon_SMG_01_9mm_G: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgWeapons_SMG_01_9mm0";
		author="O&T Expansion Eden";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_SubMachineGuns";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class SMG_01_9mm
			{
				weapon="SMG_01_9mm";
				count=1;
			};
		};
		class TransportMagazines
		{
			class 30Rnd_9x21_Mag
			{
				magazine="30Rnd_9x21_Mag";
				count=1;
			};
		};
	};
};