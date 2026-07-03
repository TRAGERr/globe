class CfgPatches
{
	class Weapons_Globe_MMG_01_light
	{
		addonRootClass="A3_Weapons_F_expEden";
		requiredAddons[]=
		{
			"A3_Weapons_F_expEden"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Weapon_MMG_01_light_tan_G",
			"Weapon_MMG_01_light_hex_G"
		};
		weapons[]=
		{
			"MMG_01_light_hex_G",
			"MMG_01_light_tan_G"
		};
	};
};
class Mode_FullAuto;
class Mode_Burst;
class MuzzleSlot_762;
class CfgWeapons
{
	class Rifle_Long_Base_F;
	class MMG_01_base_F: Rifle_Long_Base_F
	{
		class manual: Mode_FullAuto
		{
			class StandardSound;
			class SilencedSound;
		};
		class Burst: Mode_Burst
		{
			class StandardSound;
			class SilencedSound;
		};
		class WeaponSlotsInfo;
	};
	class MMG_01_light_base_G: MMG_01_base_F
	{
		class manual: manual
		{
			class StandardSound: StandardSound
			{
				soundSetShot[]=
				{
					"MMG01_762x51_Shot_SoundSet",
					"MMG01_762x51_Tail_SoundSet",
					"DMR03_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: SilencedSound
			{
				SoundSetShot[]=
				{
					"MMG01_silencerShot_SoundSet",
					"DMR03_silencerTail_SoundSet",
					"DMR03_silencerInteriorTail_SoundSet"
				};
			};
			maxZeroing=1400;
			inertia=0.98;
			aimTransitionSpeed=0.55;
			dexterity=1.35;
			reloadTime=0.08;
			dispersion=0.0014;
		};
		class Burst: Burst
		{
			class StandardSound: StandardSound
			{
				soundSetShot[]=
				{
					"MMG01_762x51_Shot_SoundSet",
					"MMG01_762x51_Tail_SoundSet",
					"DMR03_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: SilencedSound
			{
				SoundSetShot[]=
				{
					"MMG01_silencerShot_SoundSet",
					"DMR03_silencerTail_SoundSet",
					"DMR03_silencerInteriorTail_SoundSet"
				};
			};
			maxZeroing=1400;
			inertia=0.98;
			aimTransitionSpeed=0.55;
			dexterity=1.35;
			reloadTime=0.08;
			dispersion=0.0014;
			showToPlayer=0;
		};
		author="O&T Expansion Eden";
		_generalMacro="MMG_01_light_base_G";
		baseWeapon="MMG_01_light_hex_G";
		descriptionShort="$STR_Globe_CfgWeapons_MMG_01_light_G1";
		displayName="$STR_Globe_CfgWeapons_MMG_01_light_G0";
		magazines[]=
		{
			"120Rnd_762x54_Box_G",
			"120Rnd_762x54_Box_Tracer_G"
		};
		recoil="recoil_mmg_01_light_762x54";
		recoilProne="recoil_mmg_01_light_762x54";
		maxZeroing=1400;
		inertia=0.98;
		aimTransitionSpeed=0.55;
		dexterity=1.35;
		reloadTime=0.08;
		dispersion=0.0014;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=355;
			class MuzzleSlot: MuzzleSlot_762
			{
				iconPosition[]={0.059999999,0.40000001};
				iconScale=0.15000001;
			};
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
				fired="(_this # 0) spawn expEden_fnc_caseDrops762;";
			};
		};
	};
	class MMG_01_light_hex_G: MMG_01_light_base_G
	{
		author="O&T Expansion Eden";
		_generalMacro="MMG_01_light_hex_G";
		scope=2;
		baseWeapon="MMG_01_light_hex_G";
		displayName="$STR_Globe_CfgWeapons_MMG_01_light_hex_G0";
	};
	class MMG_01_light_tan_G: MMG_01_light_base_G
	{
		class manual: manual
		{
			class StandardSound: StandardSound
			{
				soundSetShot[]=
				{
					"MMG01_762x51_Shot_SoundSet",
					"MMG01_762x54_Tail_SoundSet",
					"DMR01_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: SilencedSound
			{
				SoundSetShot[]=
				{
					"MMG01_silencerShot_SoundSet",
					"DMR01_silencerTail_SoundSet",
					"DMR01_silencerInteriorTail_SoundSet"
				};
			};
			inertia=0.95;
			aimTransitionSpeed=0.58;
			maxZeroing=1400;
			dexterity=1.4;
			reloadTime=0.075;
			dispersion=0.00135;
		};
		class Burst: Burst
		{
			class StandardSound: StandardSound
			{
				soundSetShot[]=
				{
					"MMG01_762x51_Shot_SoundSet",
					"MMG01_762x54_Tail_SoundSet",
					"DMR01_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: SilencedSound
			{
				SoundSetShot[]=
				{
					"MMG01_silencerShot_SoundSet",
					"DMR01_silencerTail_SoundSet",
					"DMR01_silencerInteriorTail_SoundSet"
				};
			};
			inertia=0.95;
			aimTransitionSpeed=0.58;
			maxZeroing=1400;
			dexterity=1.4;
			reloadTime=0.075;
			dispersion=0.00135;
			showToPlayer=0;
		};
		author="O&T Expansion Eden";
		_generalMacro="MMG_01_light_tan_G";
		scope=2;
		baseWeapon="MMG_01_light_tan_G";
		descriptionShort="$STR_Globe_CfgWeapons_MMG_01_light_G2";
		inertia=0.95;
		aimTransitionSpeed=0.58;
		maxZeroing=1400;
		dexterity=1.4;
		reloadTime=0.075;
		dispersion=0.00135;
		recoil="recoil_mmg_01_light_762x51";
		recoilProne="recoil_mmg_01_light_762x51";
		magazines[]=
		{
			"180Rnd_762x51_Box_G",
			"180Rnd_762x51_Box_Tracer_G"
		};
		displayName="$STR_Globe_CfgWeapons_MMG_01_light_tan_G0";
		picture="\A3\Weapons_F_Mark\Machineguns\MMG_01\Data\UI\gear_MMG_01_tan_X_co.paa";
		UIPicture="\A3\weapons_f\data\UI\icon_mg_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Mark\Machineguns\MMG_01\Data\MMG_01_01_sand_CO.paa",
			"\A3\Weapons_F_Mark\Machineguns\MMG_01\Data\MMG_01_02_sand_CO.paa",
			"\A3\Weapons_F_Mark\Machineguns\MMG_01\Data\MMG_01_03_sand_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Weapons_F_Mark\Machineguns\MMG_01\Data\MMG_01_01_sand.rvmat",
			"\A3\Weapons_F_Mark\Machineguns\MMG_01\Data\MMG_01_02_sand.rvmat",
			"\A3\Weapons_F_Mark\Machineguns\MMG_01\Data\MMG_01_03_sand.rvmat"
		};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_snd";
			};
		};
	};
};
class CfgRecoils
{
	recoil_auto_mmg_01_light_762x51[]=
	{
		0,0,0,
		0.059999999,0.065331599,0.048696001,
		0.059999999,0.057725499,0.0320096,
		0.059999999,0.043583499,0.0185568,
		0.059999999,0.0240372,0.0096480001,
		0.029999999,-0.00372060002,-0.0053040001,
		0.029999999,-0.0047650001,-0.003692,
		0.029999999,-0.0038385,-0.002588,
		0.059999999,0,0
	};
	recoil_auto_prone_mmg_01_light_762x51[]=
	{
		0,0,0,
		0.059999999,0.025331599,0.0126088004,
		0.059999999,0.021725499,0.0090039999,
		0.059999999,0.016583499,0.0062784,
		0.059999999,0.0090372,0.004052,
		0.029999999,-0.00172060002,-0.00176800003,
		0.029999999,-0.0017650001,-0.00167679997,
		0.029999999,-0.0018385,-0.0009704,
		0.059999999,0,0
	};
	recoil_auto_mmg_01_light_762x54[]=
	{
		0,0,0,
		0.059999999,0.078331599,0.055696001,
		0.059999999,0.062725499,0.0380096,
		0.059999999,0.049583499,0.0225568,
		0.059999999,0.0290372,0.0126480001,
		0.029999999,-0.00572060002,-0.0073040001,
		0.029999999,-0.0067650001,-0.005692,
		0.029999999,-0.0048385,-0.003588,
		0.059999999,0,0
	};
	recoil_auto_prone_mmg_01_light_762x54[]=
	{
		0,0,0,
		0.059999999,0.031331599,0.0166088004,
		0.059999999,0.025725499,0.0120039999,
		0.059999999,0.019583499,0.0082784,
		0.059999999,0.0120372,0.005052,
		0.029999999,-0.00272060002,-0.00276800003,
		0.029999999,-0.0027650001,-0.00217679997,
		0.029999999,-0.0028385,-0.0014704,
		0.059999999,0,0
	};
	class recoil_default;
	class recoil_mmg_01_light_762x54: recoil_default
	{
		muzzleOuter[]={0.58,1.3,0.75,0.3};
		kickBack[]={0.025, 0.085};
		temporary=0.005;
	};
	class recoil_mmg_01_light_762x51: recoil_default
	{
		muzzleOuter[]={0.52,1.1,0.72,0.3};
		kickBack[]={0.02, 0.08};
		temporary=0.005;
	};
};
class CfgSoundSets
{
	class Rifle_silencerShot_Base_SoundSet;
	class Rifle_Shot_Base_SoundSet;
	class Rifle_Tail_Base_SoundSet;
	class Rifle_InteriorTail_Base_SoundSet;
	class Rifle_silencerTail_Base_SoundSet;
	class Rifle_silencerInteriorTail_Base_SoundSet;
	class MMG01_762x51_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"MMG01_Closure_SoundShader",
			"Msbs65_01_Shot_Close_01_SoundShader",
			"MMG01_closeShot_SoundShader",
			"MMG01_midShot_SoundShader",
			"MMG01_distShot_SoundShader"
		};
		sound3DProcessingType="WeaponLightShot3DProcessingType";
	};
	class MMG01_762x51_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"DMR03_tailDistant_SoundShader",
			"DMR03_tailForest_SoundShader",
			"DMR03_tailHouses_SoundShader",
			"DMR03_tailMeadows_SoundShader",
			"DMR03_tailTrees_SoundShader",
			"MMG01_762x51_tail_SoundShader"
		};
		sound3DProcessingType="WeaponLightShotTail3DProcessingType";
	};
	class MMG01_762x54_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"DMR01_tailDistant_SoundShader",
			"DMR01_tailForest_SoundShader",
			"DMR01_tailHouses_SoundShader",
			"DMR01_tailMeadows_SoundShader",
			"DMR01_tailTrees_SoundShader",
			"MMG01_762x51_tail_SoundShader"
		};
		sound3DProcessingType="WeaponLightShotTail3DProcessingType";
	};
};
class CfgSoundShaders
{
	class MMG01_762x51_tail_SoundShader
	{
		samples[]=
		{

			{
				"A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Msbs65_01_Tail_Forest_02",
				1
			},

			{
				"A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Msbs65_01_Tail_Forest_06",
				1
			},

			{
				"A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Msbs65_01_Tail_Forest_07",
				1
			},

			{
				"A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Msbs65_01_Tail_Forest_08",
				1
			},
			
			{
				"\A3\Sounds_F\dummysound",
				256
			},
			
			{
				"\A3\Sounds_F\dummysound",
				1
			}
		};
		volume=1;
		range=2000;
		rangeCurve[]=
		{
			{0,1},
			{2000,0}
		};
		limitation=1;
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class 180Rnd_762x51_Box_G: CA_Magazine
	{
		author="O&T Expansion Eden";
		scope=2;
		displayName="$STR_Globe_CfgMagazines_180Rnd_762x51_Box_G0";
		descriptionShort="$STR_Globe_CfgMagazines_180Rnd_762x51_Box_G1";
		picture="\A3\Weapons_F_Mark\Data\UI\M_93x64_CA.paa";
		count=180;
		type="2*		256";
		ammo="B_762x51_Tracer_Red";
		initSpeed=820;
		tracersEvery=5;
		lastRoundsTracer=5;
		nameSound="mgun";
		mass=54;
	};
	class 180Rnd_762x51_Box_Tracer_G: 180Rnd_762x51_Box_G
	{
		author="O&T Expansion Eden";
		displayName="$STR_Globe_CfgMagazines_180Rnd_762x51_Box_Tracer_G0";
		descriptionShort="$STR_Globe_CfgMagazines_180Rnd_762x51_Box_Tracer_G1";
		picture="\A3\Weapons_F_Mark\Data\UI\M_93x64_CA.paa";
		tracersEvery=1;
	};
	class 120Rnd_762x54_Box_G: CA_Magazine
	{
		author="O&T Expansion Eden";
		scope=2;
		displayName="$STR_Globe_CfgMagazines_120Rnd_762x54_Box_G0";
		descriptionShort="$STR_Globe_CfgMagazines_120Rnd_762x54_Box_G1";
		picture="\A3\Weapons_F_Mark\Data\UI\M_93x64_CA.paa";
		count=120;
		type="2*		256";
		ammo="B_762x54_Tracer_Green";
		initSpeed=825;
		tracersEvery=3;
		lastRoundsTracer=6;
		nameSound="mgun";
		mass=56;
	};
	class 120Rnd_762x54_Box_Tracer_G: 120Rnd_762x54_Box_G
	{
		author="O&T Expansion Eden";
		displayName="$STR_Globe_CfgMagazines_120Rnd_762x54_Box_Tracer_G0";
		descriptionShort="$STR_Globe_CfgMagazines_120Rnd_762x54_Box_Tracer_G1";
		picture="\A3\Weapons_F_Mark\Data\UI\M_93x64_CA.paa";
		tracersEvery=1;
	};
};
class CfgVehicles
{
	class Weapon_Base_F;
	class Weapon_MMG_01_light_tan_G: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgWeapons_MMG_01_light_tan_G0";
		author="O&T Expansion Eden";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_machineGuns";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class MMG_01_light_tan_G
			{
				weapon="MMG_01_light_tan_G";
				count=1;
			};
		};
		class TransportMagazines
		{
			class 180Rnd_762x51_Box_G
			{
				magazine="180Rnd_762x51_Box_G";
				count=1;
			};
		};
	};
	class Weapon_MMG_01_light_hex_G: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgWeapons_MMG_01_light_hex_G0";
		author="O&T Expansion Eden";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_MachineGuns";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class Weapon_MMG_01_light_hex_G
			{
				weapon="Weapon_MMG_01_light_hex_G";
				count=1;
			};
		};
		class TransportMagazines
		{
			class 120Rnd_762x54_Box_G
			{
				magazine="120Rnd_762x54_Box_G";
				count=1;
			};
		};
	};
};