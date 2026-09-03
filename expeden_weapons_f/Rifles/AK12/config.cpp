class CfgPatches
{
	class Weapons_Globe_Rifles_AK12
	{
		addonRootClass="A3_Weapons_F_expEden";
		requiredAddons[]=
		{
			"A3_Weapons_F_expEden"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"arifle_AK12_GL_545_G",
			"arifle_AK12U_545_G",
			"arifle_AK12_545_G"
		};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class MuzzleSlot;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class CowsSlot_Rail;
class MuzzleSlot_545R;
class UnderBarrelSlot_rail;
class PointerSlot_Rail;
class UGL_F;
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
	};
	class arifle_AK12_545_base_G: Rifle_Base_F
	{
		author="O&T Expansion Eden";
		_generalMacro="arifle_AK12_545_base_G";
		scope=0;
		displayName="";
		descriptionShort="$STR_A3_CfgWeapons_arifle_AK12_base_F1";
		model="\A3\Weapons_F_Exp\Rifles\AK12\AK12_F.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Exp\Rifles\AK12\Data\Anims\ak12.rtm"
		};
		reloadAction="GestureReloadAK12";
		magazines[]=
		{
			"30Rnd_545x39_Mag_F",
			"30Rnd_545x39_Mag_Green_F",
			"30Rnd_545x39_Mag_Tracer_F",
			"30Rnd_545x39_Mag_Tracer_Green_F"
		};
		magazineWell[]=
		{
			"AK_545x39"
		};
		magazineReloadSwitchPhase=0.45;
		htMin=7;
		htMax=880;
		inertia=0.55;
		aimTransitionSpeed=1.05;
		dexterity=1.5;
		initSpeed=770;
		recoil="recoil_ak12";
		maxZeroing=800;
		bullet1[]=
		{
			"",
			1,
			1,
			1
		};
		soundBullet[]=
		{
			"bullet1",
			1
		};
		class Library
		{
			libTextDesc="$STR_A3_CfgWeapons_arifle_AK12_base_F_Library0";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot_545R
			{
				iconPosition[]={0,0.34999999};
				iconScale=0.2;
			};
			class CowsSlot: CowsSlot_Rail
			{
				iconPosition[]={0.5,0.25};
				iconScale=0.2;
			};
			class PointerSlot: PointerSlot_Rail
			{
				iconPosition[]={0.30000001,0.34999999};
				iconScale=0.2;
			};
			class UnderBarrelSlot: UnderBarrelSlot_rail
			{
				iconPosition[]={0.34999999,0.69999999};
				iconScale=0.30000001;
			};
			mass=125;
		};
		distanceZoomMin=300;
		distanceZoomMax=300;
		modes[]=
		{
			"FullAuto",
			"Burst",
			"Single",
			"Burst_medium",
			"single_medium_optics1",
			"single_medium_optics2"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"AK74_Shot_SoundSet",
					"CAR_95_Tail_SoundSet",
					"CAR_95_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"AK12_silencerShot_SoundSet",
					"CAR_95_silencerTail_SoundSet",
					"CAR_95_silencerInteriorTail_SoundSet"
				};
			};
			reloadTime=0.09;
			dispersion=0.0012;
			minRange=2;
			minRangeProbab=0.5;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=250;
			maxRangeProbab=0.2;
		};
		class Burst: Mode_Burst
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"AK74_Shot_SoundSet",
					"CAR_95_Tail_SoundSet",
					"CAR_95_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"AK12_silencerShot_SoundSet",
					"CAR_95_silencerTail_SoundSet",
					"CAR_95_silencerInteriorTail_SoundSet"
				};
			};
			textureType="dual";
			burst=2;
			reloadTime=0.06;
			dispersion=0.0012;
			minRange=2;
			minRangeProbab=0.89999998;
			midRange=50;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.050000001;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"AK74_Shot_SoundSet",
					"CAR_95_Tail_SoundSet",
					"CAR_95_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"AK12_silencerShot_SoundSet",
					"CAR_95_silencerTail_SoundSet",
					"CAR_95_silencerInteriorTail_SoundSet"
				};
			};
			reloadTime=0.085;
			dispersion=0.0015;
			minRange=2;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.050000001;
			aiRateOfFire=1e-006;
		};
		class Burst_medium: Burst
		{
			showToPlayer=0;
			minRange=2;
			minRangeProbab=0.5;
			midRange=75;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=5;
			minRangeProbab=0.2;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=450;
			maxRangeProbab=0.30000001;
			aiRateOfFire=5;
			aiRateOfFireDistance=500;
		};
		class single_medium_optics2: single_medium_optics1
		{
			requiredOpticType=2;
			minRange=100;
			minRangeProbab=0.1;
			midRange=400;
			midRangeProbab=0.69999999;
			maxRange=600;
			maxRangeProbab=0.050000001;
			aiRateOfFire=6;
			aiRateOfFireDistance=600;
		};
		class EventHandlers
		{
			class Globe_caseDropEH
			{
				fired="(_this # 0) spawn expEden_fnc_caseDrops556;";
			};
		};
	};
	class arifle_AK12U_545_base_G: arifle_AK12_545_base_G
	{
		author="O&T Expansion Eden";
		_generalMacro="arifle_AK12U_545_base_G";
		model="a3\Weapons_F_Enoch\Rifles\AK12\AK12U_F";
		discreteDistance[]={100,200};
		discreteDistanceInitIndex=1;
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		initSpeed=735;
		inertia=0.35;
		dexterity=1.65;
		aimTransitionSpeed=1.15;
		recoil="recoil_aks";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot_545R
			{
			};
			class CowsSlot: CowsSlot_Rail
			{
				iconPosition[]={0.40000001,0.25};
				iconScale=0.2;
			};
			class PointerSlot: PointerSlot_Rail
			{
				iconPosition[]={0.23,0.34999999};
				iconScale=0.2;
			};
			class UnderBarrelSlot: UnderBarrelSlot_rail
			{
				iconPosition[]={0.23999999,0.69999999};
				iconScale=0.30000001;
			};
			mass=95;
		};
		class Single: Single
		{
			dispersion=0.0013;
			minRange=2;
			minRangeProbab=0.5;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=250;
			maxRangeProbab=0.2;
		};
		class Burst: Burst
		{
			dispersion=0.0013;
			minRange=2;
			minRangeProbab=0.89999998;
			midRange=50;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.050000001;
		};
		class FullAuto: FullAuto
		{
			dispersion=0.0016;
			minRange=2;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.050000001;
			aiRateOfFire=1e-006;
		};
		class Burst_medium: Burst
		{
			showToPlayer=0;
			minRange=2;
			minRangeProbab=0.5;
			midRange=75;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=5;
			minRangeProbab=0.2;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=350;
			maxRangeProbab=0.30000001;
			aiRateOfFire=5;
			aiRateOfFireDistance=500;
		};
		class single_medium_optics2: single_medium_optics1
		{
			requiredOpticType=2;
			minRange=100;
			minRangeProbab=0.1;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.050000001;
			aiRateOfFire=6;
			aiRateOfFireDistance=600;
		};
	};
	class arifle_AK12_GL_545_base_G: arifle_AK12_545_base_G
	{
		author="O&T Expansion Eden";
		_generalMacro="arifle_AK12_GL_545_base_G";
		scope=0;
		displayName="";
		model="\A3\Weapons_F_Exp\Rifles\AK12\AK12_GL_F.p3d";
		UiPicture="\A3\Weapons_F\Data\UI\icon_gl_CA.paa";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		muzzles[]=
		{
			"this",
			"EGLM"
		};
		inertia=0.65;
		aimTransitionSpeed=0.95;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Exp\Rifles\AK12\Data\Anims\ak12gl.rtm"
		};
		class EGLM: UGL_F
		{
			displayName="$STR_A3_CfgWeapons_arifle_AK12_GL_base_F_EGLM0";
			useModelOptics=0;
			useExternalOptic=0;
			cameraDir="OP_look";
			discreteDistance[]={50,75,100,150,200,250,300,350,400};
			discreteDistanceCameraPoint[]=
			{
				"OP_eye_50",
				"OP_eye_75",
				"OP_eye_100",
				"OP_eye_150",
				"OP_eye_200",
				"OP_eye_250",
				"OP_eye_300",
				"OP_eye_350",
				"OP_eye_400"
			};
			discreteDistanceInitIndex=1;
			reloadAction="GestureReloadMXUGL";
			magazineReloadSwitchPhase=0.36000001;
			reloadMagazineSound[]=
			{
				"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK12\AK12_UGL_reload",
				1,
				1,
				10
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class UnderBarrelSlot: UnderBarrelSlot_rail
			{
				compatibleItems[]={};
			};
			mass=130;
		};
	};
	class arifle_AK12U_545_G: arifle_AK12U_545_base_G
	{
		author="O&T Expansion Eden";
		_generalMacro="arifle_AK12U_545_G";
		scope=2;
		displayName="$STR_Globe_CfgWeapons_arifle_AK12U_545_G1";
		picture="a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_AK12U_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"a3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_1_co.paa",
			"a3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_2_co.paa",
			"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\data_f\default.rvmat",
			"\a3\data_f\default.rvmat",
			"\a3\data_f\default.rvmat"
		};
		baseWeapon="arifle_AK12U_545_G";
	};
	class arifle_AK12_545_G: arifle_AK12_545_base_G
	{
		author="O&T Expansion Eden";
		_generalMacro="arifle_AK12_545_G";
		scope=2;
		displayName="$STR_Globe_CfgWeapons_arifle_AK12_545_G1";
		picture="\A3\Weapons_F_Exp\Rifles\AK12\Data\UI\icon_arifle_AK12_F_X_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_1_co.paa",
			"\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_2_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\data_f\default.rvmat",
			"\a3\data_f\default.rvmat"
		};
		baseWeapon="arifle_AK12_545_G";
	};
	class arifle_AK12_GL_545_G: arifle_AK12_GL_545_base_G
	{
		author="O&T Expansion Eden";
		_generalMacro="arifle_AK12_GL_545_G";
		baseWeapon="arifle_AK12_GL_545_G";
		scope=2;
		displayName="$STR_Globe_CfgWeapons_arifle_AK12_GL_545_G1";
		picture="\A3\Weapons_F_Exp\Rifles\AK12\Data\UI\icon_arifle_AK12_GL_F_X_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_1_co.paa",
			"\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_2_co.paa",
			"\a3\weapons_f_exp\rifles\ak12\data\ak12_ak12_gl_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\data_f\default.rvmat",
			"\a3\data_f\default.rvmat",
			"\a3\data_f\default.rvmat"
		};
	};
};