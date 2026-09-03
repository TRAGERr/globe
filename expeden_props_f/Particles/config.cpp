class CfgPatches
{
	class Props_Globe_Particles
	{
		addonRootClass="A3_Props_F_Globe";
		requiredAddons[]=
		{
			"A3_Props_F_Globe"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Particle_Refract",
			"Particle_RefractDestruction",
			"Particle_RefractDestructionSmall",
			"Particle_SparksAmmoExp",
			"Particle_SparksExp_01",
			"Particle_SparksExp_02",
			"Particle_SparksFire",
			"Particle_SparksFireSmall_03",
			"Particle_SparksFireSmall_04",
			"Particle_SparksAvionics",
			"Particle_SparksRailgun",
			"Particle_SparksRailgunSlow",
			"Particle_SparksRailgunDestruction",
			"Particle_SparksAmmoExp_light",
			"Particle_SparksExp_01_light",
			"Particle_SparksExp_02_light",
			"Particle_SparksFire_light",
			"Particle_SparksFireSmall_03_light",
			"Particle_SparksFireSmall_04_light",
			"Particle_SparksAvionics_light",
			"Particle_SparksRailgun_light",
			"Particle_SparksRailgunSlow_light",
			"Particle_SparksRailgunDestruction_light",
			"Particle_BubblesSmall",
			"Particle_BubblesMedium",
			"Particle_BubblesShot1",
			"Particle_BubblesShotBig1",
			"Particle_BubblesShotBigMed1",
			"Particle_Plankton",
			"Particle_WaterWave",
			"Particle_WaterWaveAir",
			"Particle_WaterSplashAir",
			"Particle_BulletBubbles1",
			"Particle_GrenadeBubbles1",
			"Particle_collisionVehSmoke",
			"Particle_ScudSmoke2",
			"Particle_ImpactSmoke",
			"Particle_HouseDestrSmokeLongLow",
			"Particle_WinchDestructionSmoke",
			"Particle_SmallWreckSmoke",
			"Particle_FactorySmoke_01_G",
			"Particle_DPPSmoke_01_G",
			"Particle_SCFSmoke_01_G",
			"Particle_ExplosionDebrisTrailsSmoke_01_G",
			"Particle_ExplosionUnderwaterMine_01_G",
			"Particle_ExplosionUnderwaterMine_02_G",
			"Particle_DustMine_01_G",
			"Particle_DustMine_02_G",
			"Particle_DustMine_03_G",
			"Particle_AshPaper_01_G",
			"Particle_FireFuelPump_01_G",
			"Particle_FireFuelPump_01_G_noSmoke1",
			"Particle_FireFuelPump_01_G_noSmoke2",
			"Particle_FireFuelPump_01_G_noSmoke",
			"Particle_FireExplosion_01_G",
			"Particle_FireExplosion_02_G",
			"Particle_FireShardsExplosion_01_G",
			"Particle_FireShardsExplosion_02_G",
			"Particle_FireShardsExplosion_03_G",
			"Particle_FireShardsExplosion_04_G",
			"Particle_AmmoExplosions_TitanAP_G",
			"Particle_AmmoExplosions_RPG7_HEAT_G",
			"Particle_AmmoExplosions_RPG42_tandem_G",
			"Particle_AmmoExplosions_RPG42_thermobaric_G",
			"Particle_AmmoExplosions_TitanAA_G",
			"Particle_AmmoExplosions_BombDemine_G",
			"Particle_AmmoExplosions_HandGrenade_G",
			"Particle_AmmoExplosions_HandGrenadeMini_G",
			"Particle_AmmoExplosions_TitanAT_G",
			"Particle_AmmoExplosions_PCML_G",
			"Particle_AmmoExplosions_VoronaHE_G",
			"Particle_AmmoExplosions_VoronaHEAT_G",
			"Particle_AmmoExplosions_MAAWS_HEAT_G",
			"Particle_AmmoExplosions_MAAWS_tandem_G",
			"Particle_AmmoExplosions_MAAWS_HE_G",
			"Particle_AmmoExplosions_FireFIST_G",
			"Particle_AmmoExplosions_MortarShell_G",
			"Particle_AmmoExplosions_BoGBU12_G",
			"Particle_AmmoExplosions_BoMk82_G",
			"Particle_MudVolcano_01_G",
			"Particle_MudVolcano_02_G",
			"Particle_SmokeFuelPump_01_G",
			"Particle_SmokeFuelPump_02_G",
			"Particle_SmokeFuelPump_03_G",
			"Particle_TrainingMineEffect_F",
			"Particle_TrainingMineEffect1_F",
			"Particle_BigFire_F",
			"Particle_BigFire_BurnPit_F",
			"Particle_MediumFire_Roof_F",
			"Particle_MediumFire_F",
			"Particle_SmallFire_F",
			"Particle_BigFire_NoSmoke_F",
			"Particle_MediumFire_NoSmoke_F",
			"Particle_SmallFire_NoSmoke_F",
			"Particle_SmallFire_NoSmoke_NoLight_F",
			"Particle_BigSmoke_F",
			"Particle_MediumSmoke_F",
			"Particle_SmallSmoke_F",
			"Particle_WreckSmokeSmall_F",
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Thing;
	class Particle_Bubbles_F: Thing
	{
		author="O&T Expansion Eden";
		_generalMacro="Particle_Bubbles_F";
		scope=2;
		scopeCurator=2;
		icon="iconObject_circle";
		editorCategory="EdCat_Effects";
		editorSubcategory="EdSubcat_Aquatic";
		simulation="Thing";
		displayName="$STR_A3_cfgVehicles_test_EmptyObjectForBubbles0";
		picture="\A3\weapons_f\ammoBoxes\data\ui\map_AmmoBox_F_CA.paa";
		model="\A3\Weapons_F\empty.p3d";
		class EventHandlers
		{
			postInit="(_this # 0) call compile preprocessFileLineNumbers '\A3\weapons_f\data\scripts\bubbles.sqf';";
			deleted="deleteVehicle (_this # 0 getVariable ['effects',[]])";
		};
	};
	class Particle_BigFire1_F: Particle_Bubbles_F
	{
		author="O&T Expansion Eden";
		_generalMacro="Particle_BigFire1_F";
		displayName="$STR_A3_cfgVehicles_test_EmptyObjectForFireBig0";
		editorSubcategory="EdSubcat_Fire";
		icon="iconSoundFire_G";
		class EventHandlers
		{
			postInit="(_this # 0) call compile preprocessFileLineNumbers '\A3\weapons_f\data\scripts\fire.sqf';";
			deleted="deleteVehicle (_this # 0 getVariable ['effects',[]])";
		};
	};
	class Particle_Smoke_F: Particle_Bubbles_F
	{
		author="O&T Expansion Eden";
		_generalMacro="Particle_Smoke_F";
		displayName="$STR_A3_cfgVehicles_test_EmptyObjectForSmoke0";
		editorSubcategory="EdSubcat_Smoke";
		icon="iconSmoke_G";
		class EventHandlers
		{
			postInit="(_this # 0) call compile preprocessFileLineNumbers '\A3\weapons_f\data\scripts\smoke.sqf';";
			deleted="deleteVehicle (_this # 0 getVariable ['effects',[]])";
		};
	};
	class Particle_Base_F: Thing
	{
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.0010700001;
			verticalOffsetWorld=0;
			init="''";
		};
		simulation="Fire";
		icon="iconObject_circle";
		editorCategory="EdCat_Effects";
		class EventHandlers
		{
			postInit="if (is3DEN) then {	(_this # 0) spawn {_this enablesimulation true}	};	(_this # 0) inflame true;	(_this # 0) hideObject true;";
		};
	};
	class Particle_SmokeLauncherConfetti_blue: Particle_Base_F
	{
		displayName="$STR_expEden_Particle_TrainingMineEffect1_F";
		scope=1;
		scopeCurator=0;
		editorSubcategory="EdSubcat_Fire";
		icon="iconSmoke_G";
		class Effects
		{
			class Confetti1
			{
				simulation="particles";
				type="SmokeLauncherConfetti_blue";
			};
			class Confetti2
			{
				simulation="particles";
				type="SmokeLauncherConfetti_blue";
			};
			class Confetti3
			{
				simulation="particles";
				type="SmokeLauncherConfetti_blue";
			};
		};
	};
	class Particle_TrainingMineEffect_F: Particle_Base_F
	{
		displayName="$STR_expEden_Particle_TrainingMineEffect_F";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Fire";
		icon="iconSoundFire_G";
		class Effects
		{
			class Sparks
			{
				simulation="particles";
				type="TrainingMine_FireSparks";
			};
			class FireSparks
			{
				simulation="particles";
				type="TrainingMine_FireSparks";
			};
			class Smoke
			{
				simulation="particles";
				type="TrainingMine_smoke";
			};
			class Light
			{
				simulation="light";
				type="TrainingMine_light";
			};
		};
	};
	class Particle_TrainingMineEffect1_F: Particle_Base_F
	{
		displayName="$STR_expEden_Particle_TrainingMineEffect1_F";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Fire";
		icon="iconSoundFire_G";
		class Effects
		{
			class Sparks
			{
				simulation="particles";
				type="TrainingMine_FireSparks";
			};
			class FireSparks
			{
				simulation="particles";
				type="TrainingMine_FireSparks";
			};
			class Smoke
			{
				simulation="particles";
				type="TrainingMine_smoke";
			};
		};
	};
	class Particle_BigFire_F: Particle_Base_F
	{
		displayName="$STR_A3_C_CfgVehicles_Particle_BigFire_F0";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Fire";
		icon="iconSoundFire_G";
		class Effects
		{
			class Fire
			{
				simulation="particles";
				type="BigDestructionFire";
			};
			class FireSparks
			{
				simulation="particles";
				type="FireSparks";
			};
			class Smoke
			{
				simulation="particles";
				type="BigDestructionSmoke";
			};
			class Refract
			{
				simulation="particles";
				type="ObjectDestructionRefract";
			};
			class Light
			{
				simulation="light";
				type="BigFireLight";
			};
			class Sound
			{
				simulation="sound";
				type="Fire";
			};
		};
	};
	class Particle_BigFire_BurnPit_F: Particle_Base_F
	{
		displayName="$STR_A3_C_CfgVehicles_Particle_BigFire_BurnPit_F0";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Fire";
		icon="iconSoundFire_G";
		class Effects
		{
			class Fire
			{
				simulation="particles";
				type="BigDestructionFire";
			};
			class FireSparks
			{
				simulation="particles";
				type="FireSparks";
			};
			class Smoke
			{
				simulation="particles";
				type="BigDestructionSmoke";
			};
			class Refract
			{
				simulation="particles";
				type="ObjectDestructionRefract";
			};
			class Sound
			{
				simulation="sound";
				type="Fire";
			};
		};
	};
	class Particle_MediumFire_Roof_F: Particle_Base_F
	{
		displayName="$STR_A3_C_CfgVehicles_Particle_MediumFire_Roof_F0";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Fire";
		icon="iconSoundFire_G";
		class Effects
		{
			class Fire
			{
				simulation="particles";
				type="MediumDestructionFire";
			};
			class FireSparks
			{
				simulation="particles";
				type="FireSparks";
			};
			class Smoke
			{
				simulation="particles";
				type="MediumDestructionSmoke";
			};
			class Refract
			{
				simulation="particles";
				type="ObjectDestructionRefractSmall";
			};
			class Light
			{
				simulation="light";
				type="ObjectDestructionLightSmall";
			};
			class Sound
			{
				simulation="sound";
				type="Fire";
			};
		};
	};
	class Particle_MediumFire_F: Particle_Base_F
	{
		displayName="$STR_A3_C_CfgVehicles_Particle_MediumFire_F0";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Fire";
		icon="iconSoundFire_G";
		class Effects
		{
			class Fire
			{
				simulation="particles";
				type="MediumDestructionFire";
			};
			class Smoke
			{
				simulation="particles";
				type="MediumDestructionSmoke";
			};
			class Refract
			{
				simulation="particles";
				type="ObjectDestructionRefractSmall";
			};
			class Light
			{
				simulation="light";
				type="MediumFireLight";
			};
			class Sound
			{
				simulation="sound";
				type="Fire";
			};
		};
	};
	class Particle_SmallFire_F: Particle_Base_F
	{
		displayName="$STR_A3_C_CfgVehicles_Particle_SmallFire_F0";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Fire";
		icon="iconSoundFire_G";
		class Effects
		{
			class Fire
			{
				simulation="particles";
				type="SmallDestructionFire";
			};
			class Smoke
			{
				simulation="particles";
				type="SmallDestructionSmoke";
			};
			class Refract
			{
				simulation="particles";
				type="SmallFireFRefract";
			};
			class Light
			{
				simulation="light";
				type="SmallFirePlaceLight";
			};
			class Sound
			{
				simulation="sound";
				type="Fire_camp_small";
			};
		};
	};
	class Particle_BigFire_NoSmoke_F: Particle_Base_F
	{
		displayName="$STR_A3_C_CfgVehicles_Particle_BigFire_NoSmoke_F0";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Fire";
		icon="iconSoundFire_G";
		class Effects
		{
			class Fire
			{
				simulation="particles";
				type="BigDestructionFire";
			};
			class FireSparks
			{
				simulation="particles";
				type="FireSparks";
			};
			class Refract
			{
				simulation="particles";
				type="ObjectDestructionRefract";
			};
			class Light
			{
				simulation="light";
				type="BigFireLight";
			};
			class Sound
			{
				simulation="sound";
				type="Fire";
			};
		};
	};
	class Particle_MediumFire_NoSmoke_F: Particle_Base_F
	{
		displayName="$STR_A3_C_CfgVehicles_Particle_MediumFire_NoSmoke_F0";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Fire";
		icon="iconSoundFire_G";
		class Effects
		{
			class Fire
			{
				simulation="particles";
				type="MediumDestructionFire";
			};
			class Light
			{
				simulation="light";
				type="MediumFireLight";
			};
			class Sound
			{
				simulation="sound";
				type="Fire";
			};
		};
	};
	class Particle_SmallFire_NoSmoke_F: Particle_Base_F
	{
		displayName="$STR_A3_C_CfgVehicles_Particle_SmallFire_NoSmoke_F0";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Fire";
		icon="iconSoundFire_G";
		class Effects
		{
			class Fire
			{
				simulation="particles";
				type="SmallDestructionFire";
			};
			class Light
			{
				simulation="light";
				type="SmallFirePlaceLight";
			};
		};
	};
	class Particle_SmallFire_NoSmoke_NoLight_F: Particle_Base_F
	{
		displayName="$STR_A3_C_CfgVehicles_Particle_SmallFire_NoSmoke_NoLight_F0";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Fire";
		icon="iconSoundFire_G";
		class Effects
		{
			class Fire
			{
				simulation="particles";
				type="SmallDestructionFire";
			};
		};
	};
	class Particle_BigSmoke_F: Particle_Base_F
	{
		displayName="$STR_A3_C_CfgVehicles_Particle_BigSmoke_F0";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Smoke";
		icon="iconSmoke_G";
		class Effects
		{
			class Smoke
			{
				simulation="particles";
				type="BigDestructionSmoke";
			};
		};
	};
	class Particle_MediumSmoke_F: Particle_Base_F
	{
		displayName="$STR_A3_C_CfgVehicles_Particle_MediumSmoke_F0";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Smoke";
		icon="iconSmoke_G";
		class Effects
		{
			class Smoke
			{
				simulation="particles";
				type="MediumDestructionSmoke";
			};
		};
	};
	class Particle_SmallSmoke_F: Particle_Base_F
	{
		displayName="$STR_A3_C_CfgVehicles_Particle_SmallSmoke_F0";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Smoke";
		icon="iconSmoke_G";
		class Effects
		{
			class Smoke
			{
				simulation="particles";
				type="SmallDestructionSmoke";
			};
		};
	};
	class Particle_WreckSmokeSmall_F: Particle_Base_F
	{
		displayName="$STR_A3_C_CfgVehicles_Particle_WreckSmokeSmall_F0";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Smoke";
		icon="iconSmoke_G";
		class Effects
		{
			class Smoke
			{
				simulation="particles";
				type="wreckSmokeSmall";
			};
		};
	};
	class Particle_Refract: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_Refract0";
		_generalMacro="Particle_Refract";
		scope=2;
		editorSubcategory="EdSubcat_Fire";
		icon="iconSoundFire_G";
		class Effects
		{
			class Refract
			{
				simulation="particles";
				type="Refract";
			};
		};
	};
	class Particle_RefractDestruction: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_RefractDestruction0";
		_generalMacro="Particle_RefractDestruction";
		scope=2;
		editorSubcategory="EdSubcat_Fire";
		icon="iconSoundFire_G";
		class Effects
		{
			class Refract
			{
				simulation="particles";
				type="ObjectDestructionRefract";
			};
		};
	};
	class Particle_RefractDestructionSmall: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_RefractDestructionSmall0";
		_generalMacro="Particle_RefractDestructionSmall";
		scope=2;
		editorSubcategory="EdSubcat_Fire";
		icon="iconSoundFire_G";
		class Effects
		{
			class Refract
			{
				simulation="particles";
				type="ObjectDestructionRefractSmall";
			};
		};
	};
	class Particle_SparksAmmoExp: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_SparksAmmoExp0";
		_generalMacro="Particle_SparksAmmoExp";
		scope=2;
		editorSubcategory="EdSubcat_Fire";
		icon="iconSoundFire_G";
		class Effects
		{
			class Refract
			{
				simulation="particles";
				type="AmmoExpSparks";
			};
		};
	};
	class Particle_SparksExp_01: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_SparksExp_010";
		_generalMacro="Particle_SparksExp_01";
		scope=2;
		editorSubcategory="EdSubcat_Fire";
		icon="iconSoundFire_G";
		class Effects
		{
			class Refract
			{
				simulation="particles";
				type="ExpSparks";
			};
		};
	};
	class Particle_SparksExp_02: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_SparksExp_020";
		_generalMacro="Particle_SparksExp_02";
		scope=2;
		editorSubcategory="EdSubcat_Fire";
		icon="iconSoundFire_G";
		class Effects
		{
			class Refract
			{
				simulation="particles";
				type="ExpSparks1";
			};
		};
	};
	class Particle_SparksFire: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_SparksFire0";
		_generalMacro="Particle_SparksFire";
		scope=2;
		editorSubcategory="EdSubcat_Fire";
		icon="iconSoundFire_G";
		class Effects
		{
			class Refract
			{
				simulation="particles";
				type="FireSparks";
			};
		};
	};
	class Particle_SparksFireSmall_03: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_SparksFireSmall_030";
		_generalMacro="Particle_SparksFireSmall_03";
		scope=2;
		editorSubcategory="EdSubcat_Fire";
		icon="iconSoundFire_G";
		class Effects
		{
			class Refract
			{
				simulation="particles";
				type="FireSparksSmall2";
			};
		};
	};
	class Particle_SparksFireSmall_04: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_SparksFireSmall_040";
		_generalMacro="Particle_SparksFireSmall_04";
		scope=2;
		editorSubcategory="EdSubcat_Fire";
		icon="iconSoundFire_G";
		class Effects
		{
			class Refract
			{
				simulation="particles";
				type="FireSparksSmall3";
			};
		};
	};
	class Particle_SparksAvionics: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_SparksAvionics0";
		_generalMacro="Particle_SparksAvionics";
		scope=2;
		editorSubcategory="EdSubcat_Fire";
		icon="iconSoundFire_G";
		class Effects
		{
			class Refract
			{
				simulation="particles";
				type="AvionicsSparks";
			};
		};
	};
	class Particle_SparksRailgun: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_SparksRailgun0";
		_generalMacro="Particle_SparksRailgun";
		scope=2;
		editorSubcategory="EdSubcat_Fire";
		icon="iconSoundFire_G";
		class Effects
		{
			class Refract
			{
				simulation="particles";
				type="Railgun_SparksEffect";
			};
		};
	};
	class Particle_SparksRailgunSlow: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_SparksRailgunSlow0";
		_generalMacro="Particle_SparksRailgunSlow";
		scope=2;
		editorSubcategory="EdSubcat_Fire";
		icon="iconSoundFire_G";
		class Effects
		{
			class Refract
			{
				simulation="particles";
				type="Railgun_SparksEffectSlow";
			};
		};
	};
	class Particle_SparksRailgunDestruction: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_SparksRailgunDestruction0";
		_generalMacro="Particle_SparksRailgunDestruction";
		scope=2;
		editorSubcategory="EdSubcat_Fire";
		icon="iconSoundFire_G";
		class Effects
		{
			class Refract
			{
				simulation="particles";
				type="Railgun_DestructSparksEffect";
			};
		};
	};
	class Particle_SparksAmmoExp_light: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_SparksAmmoExp_light0";
		_generalMacro="Particle_SparksAmmoExp_light";
		scope=2;
		editorSubcategory="EdSubcat_Fire";
		icon="iconSoundFire_G";
		class Effects
		{
			class Sparks
			{
				simulation="particles";
				type="AmmoExpSparks";
			};
			class Light
			{
				simulation="light";
				type="SparksLight";
			};
		};
	};
	class Particle_SparksExp_01_light: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_SparksExp_01_light0";
		_generalMacro="Particle_SparksExp_01_light";
		scope=2;
		editorSubcategory="EdSubcat_Fire";
		icon="iconSoundFire_G";
		class Effects
		{
			class Sparks
			{
				simulation="particles";
				type="ExpSparks";
			};
			class Light
			{
				simulation="light";
				type="SparksLight";
			};
		};
	};
	class Particle_SparksExp_02_light: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_SparksExp_02_light0";
		_generalMacro="Particle_SparksExp_02_light";
		scope=2;
		editorSubcategory="EdSubcat_Fire";
		icon="iconSoundFire_G";
		class Effects
		{
			class Sparks
			{
				simulation="particles";
				type="ExpSparks1";
			};
			class Light
			{
				simulation="light";
				type="SparksLight";
			};
		};
	};
	class Particle_SparksFire_light: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_SparksFire_light0";
		_generalMacro="Particle_SparksFire_light";
		scope=2;
		editorSubcategory="EdSubcat_Fire";
		icon="iconSoundFire_G";
		class Effects
		{
			class Sparks
			{
				simulation="particles";
				type="FireSparks";
			};
			class Light
			{
				simulation="light";
				type="SparksLight";
			};
		};
	};
	class Particle_SparksFireSmall_03_light: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_SparksFireSmall_03_light0";
		_generalMacro="Particle_SparksFireSmall_03_light";
		scope=2;
		editorSubcategory="EdSubcat_Fire";
		icon="iconSoundFire_G";
		class Effects
		{
			class Sparks
			{
				simulation="particles";
				type="FireSparksSmall2";
			};
			class Light
			{
				simulation="light";
				type="SparksLight";
			};
		};
	};
	class Particle_SparksFireSmall_04_light: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_SparksFireSmall_04_light0";
		_generalMacro="Particle_SparksFireSmall_04_light";
		scope=2;
		editorSubcategory="EdSubcat_Fire";
		icon="iconSoundFire_G";
		class Effects
		{
			class Sparks
			{
				simulation="particles";
				type="FireSparksSmall3";
			};
			class Light
			{
				simulation="light";
				type="SparksLight";
			};
		};
	};
	class Particle_SparksAvionics_light: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_SparksAvionics_light0";
		_generalMacro="Particle_SparksAvionics_light";
		scope=2;
		editorSubcategory="EdSubcat_Fire";
		icon="iconSoundFire_G";
		class Effects
		{
			class Sparks
			{
				simulation="particles";
				type="AvionicsSparks";
			};
			class Light
			{
				simulation="light";
				type="SparksLight";
			};
		};
	};
	class Particle_SparksRailgun_light: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_SparksRailgun_light0";
		_generalMacro="Particle_SparksRailgun_light";
		scope=2;
		editorSubcategory="EdSubcat_Fire";
		icon="iconSoundFire_G";
		class Effects
		{
			class Sparks
			{
				simulation="particles";
				type="Railgun_SparksEffect";
			};
			class Light
			{
				simulation="light";
				type="SparksLightSabot";
			};
		};
	};
	class Particle_SparksRailgunSlow_light: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_SparksRailgunSlow_light0";
		_generalMacro="Particle_SparksRailgunSlow_light";
		scope=2;
		editorSubcategory="EdSubcat_Fire";
		icon="iconSoundFire_G";
		class Effects
		{
			class Sparks
			{
				simulation="particles";
				type="Railgun_SparksEffectSlow";
			};
			class Light
			{
				simulation="light";
				type="SparksLightSabot";
			};
		};
	};
	class Particle_SparksRailgunDestruction_light: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_SparksRailgunDestruction_light0";
		_generalMacro="Particle_SparksRailgunDestruction_light";
		scope=2;
		editorSubcategory="EdSubcat_Fire";
		icon="iconSoundFire_G";
		class Effects
		{
			class Sparks
			{
				simulation="particles";
				type="Railgun_DestructSparksEffect";
			};
			class Light
			{
				simulation="light";
				type="SparksLightSabot";
			};
		};
	};
	class Particle_BubblesSmall: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_BubblesSmall0";
		_generalMacro="Particle_BubblesSmall";
		scope=2;
		editorSubcategory="EdSubcat_Aquatic";
		class Effects
		{
			class Bubbles
			{
				simulation="particles";
				type="BubblesSmall";
			};
		};
	};
	class Particle_BubblesMedium: Particle_BubblesSmall
	{
		displayName="$STR_Globe_CfgVehicles_Particle_BubblesMedium0";
		_generalMacro="Particle_BubblesMedium";
		class Effects: Effects
		{
			class Bubbles: Bubbles
			{
				type="BubblesMedium";
			};
		};
	};
	class Particle_BubblesShot1: Particle_BubblesSmall
	{
		displayName="$STR_Globe_CfgVehicles_Particle_BubblesShot10";
		_generalMacro="Particle_BubblesShot1";
		class Effects: Effects
		{
			class Bubbles: Bubbles
			{
				type="BubblesShot1";
			};
		};
	};
	class Particle_BubblesShotBig1: Particle_BubblesSmall
	{
		displayName="$STR_Globe_CfgVehicles_Particle_BubblesShotBig10";
		_generalMacro="Particle_BubblesShotBig1";
		class Effects: Effects
		{
			class Bubbles: Bubbles
			{
				type="BubblesShotBig1";
			};
		};
	};
	class Particle_BubblesShotBigMed1: Particle_BubblesSmall
	{
		displayName="$STR_Globe_CfgVehicles_Particle_BubblesShotBigMed10";
		_generalMacro="Particle_BubblesShotBigMed1";
		class Effects: Effects
		{
			class Bubbles: Bubbles
			{
				type="BubblesShotBigMed1";
			};
		};
	};
	class Particle_Plankton: Particle_BubblesSmall
	{
		displayName="$STR_A3_CfgVehicles_ModuleEffectsPlankton_F_0";
		_generalMacro="Particle_Plankton";
		class Effects: Effects
		{
			class Bubbles: Bubbles
			{
				type="PlanktonEffect";
			};
		};
	};
	class Particle_WaterWave: Particle_BubblesSmall
	{
		displayName="$STR_Globe_CfgVehicles_Particle_WaterWave0";
		_generalMacro="Particle_WaterWave";
		class Effects: Effects
		{
			class Bubbles: Bubbles
			{
				type="WaterWave";
			};
		};
	};
	class Particle_WaterWaveAir: Particle_BubblesSmall
	{
		displayName="$STR_Globe_CfgVehicles_Particle_WaterWaveAir0";
		_generalMacro="Particle_WaterWaveAir";
		class Effects: Effects
		{
			class Bubbles: Bubbles
			{
				type="WaterWaveAir";
			};
		};
	};
	class Particle_WaterSplashAir: Particle_BubblesSmall
	{
		displayName="$STR_Globe_CfgVehicles_Particle_WaterSplashAir0";
		_generalMacro="Particle_WaterSplashAir";
		class Effects: Effects
		{
			class Bubbles: Bubbles
			{
				type="WaterSplashAir";
			};
		};
	};
	class Particle_BulletBubbles1: Particle_BubblesSmall
	{
		displayName="$STR_Globe_CfgVehicles_Particle_BulletBubbles10";
		_generalMacro="Particle_BulletBubbles1";
		class Effects: Effects
		{
			class Bubbles: Bubbles
			{
				type="BulletBubbles1";
			};
		};
	};
	class Particle_GrenadeBubbles1: Particle_BubblesSmall
	{
		displayName="$STR_Globe_CfgVehicles_Particle_GrenadeBubbles10";
		_generalMacro="Particle_GrenadeBubbles1";
		class Effects: Effects
		{
			class Bubbles: Bubbles
			{
				type="GrenadeBubbles1";
			};
		};
	};
	class Particle_collisionVehSmoke: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_collisionVehSmoke0";
		_generalMacro="Particle_collisionVehSmoke";
		scope=2;
		editorSubcategory="EdSubcat_Smoke";
		icon="iconSmoke_G";
		class Effects
		{
			class Smoke
			{
				simulation="particles";
				type="collisionVehSmoke";
			};
		};
	};
	class Particle_ScudSmoke2: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_ScudSmoke20";
		_generalMacro="Particle_ScudSmoke2";
		scope=1;
		editorSubcategory="EdSubcat_Smoke";
		icon="iconSmoke_G";
		class Effects
		{
			class Smoke
			{
				simulation="particles";
				type="ScudSmoke2";
			};
		};
	};
	class Particle_ImpactSmoke: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_ImpactSmoke0";
		_generalMacro="Particle_ImpactSmoke";
		scope=2;
		editorSubcategory="EdSubcat_Smoke";
		icon="iconSmoke_G";
		class Effects
		{
			class Smoke
			{
				simulation="particles";
				type="ImpactSmoke";
			};
		};
	};
	class Particle_HouseDestrSmokeLongLow: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_HouseDestrSmokeLongLow0";
		_generalMacro="Particle_HouseDestrSmokeLongLow";
		scope=2;
		editorSubcategory="EdSubcat_Default";
		icon="iconObject_circle";
		class Effects
		{
			class Smoke
			{
				simulation="particles";
				type="HouseDestrSmokeLongLow";
			};
		};
	};
	class Particle_WinchDestructionSmoke: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_WinchDestructionSmoke0";
		_generalMacro="Particle_WinchDestructionSmoke";
		scope=2;
		editorSubcategory="EdSubcat_Smoke";
		icon="iconSmoke_G";
		class Effects
		{
			class Smoke
			{
				simulation="particles";
				type="WinchDestructionSmoke";
			};
		};
	};
	class Particle_SmallWreckSmoke: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_SmallWreckSmoke0";
		_generalMacro="Particle_SmallWreckSmoke";
		scope=2;
		editorSubcategory="EdSubcat_Smoke";
		icon="iconSmoke_G";
		class Effects
		{
			class Smoke
			{
				simulation="particles";
				type="SmallWreckSmoke";
			};
		};
	};
	class Particle_FactorySmoke_01_G: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_FactorySmoke_01_G0";
		_generalMacro="Particle_FactorySmoke_01_G";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Smoke";
		icon="iconSmoke_G";
		class Effects
		{
			class Smoke
			{
				simulation="particles";
				type="FactorySmoke1";
			};
		};
	};
	class Particle_DPPSmoke_01_G: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_DPPSmoke_01_G0";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Smoke";
		icon="iconSmoke_G";
		class Effects
		{
			class Smoke
			{
				simulation="particles";
				type="DieselPowerPlantSmoke1";
			};
		};
	};
	class Particle_SCFSmoke_01_G: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_SCFSmoke_01_G0";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Smoke";
		icon="iconSmoke_G";
		class Effects
		{
			class Smoke
			{
				simulation="particles";
				type="SugarFactoryMainStackSmoke1";
			};
		};
	};
	class Particle_ExplosionDebrisTrailsSmoke_01_G: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_ExplosionDebrisTrailsSmoke_01_G0";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Smoke";
		icon="iconSmoke_G";
		class Effects
		{
			class Smoke
			{
				simulation="particles";
				type="SmokeTrails";
			};
		};
	};
	class Particle_ExplosionUnderwaterMine_01_G: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_ExplosionUnderwaterMine_01_G0";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Aquatic";
		class Effects
		{
			class Smoke
			{
				simulation="particles";
				type="MineUnderwaterSmoke1";
			};
		};
	};
	class Particle_ExplosionUnderwaterMine_02_G: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_ExplosionUnderwaterMine_02_G0";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Aquatic";
		class Effects
		{
			class Smoke
			{
				simulation="particles";
				type="MineUnderwaterSmokeAB1";
			};
		};
	};
	class Particle_DustMine_01_G: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_DustMine_01_G0";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Default";
		class Effects
		{
			class Smoke
			{
				simulation="particles";
				type="MineDust1";
			};
		};
	};
	class Particle_DustMine_02_G: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_DustMine_02_G0";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Default";
		class Effects
		{
			class Smoke
			{
				simulation="particles";
				type="MineDust2";
			};
		};
	};
	class Particle_DustMine_03_G: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_DustMine_03_G0";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Default";
		class Effects
		{
			class Smoke
			{
				simulation="particles";
				type="MineDust3";
			};
		};
	};
	class Particle_AshPaper_01_G: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_AshPaper_01_G0";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Default";
		class Effects
		{
			class Smoke
			{
				simulation="particles";
				type="ExplosionAsh1";
			};
		};
	};
	class Particle_FireFuelPump_01_G: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_FireFuelPump_01_G0";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Fire";
		icon="iconSoundFire_G";
		class Effects
		{
			class Smoke1
			{
				simulation="particles";
				type="FuelSmoke_01_G";
			};
			class Smoke2
			{
				simulation="particles";
				type="FuelSmoke_02_G";
			};
			class Fire
			{
				simulation="particles";
				type="FuelFire1_G";
			};
			class Light
			{
				simulation="light";
				type="BigFireLight";
			};
			class Sound
			{
				simulation="sound";
				type="SFX_FireGasStationPump_G";
			};
		};
	};
	class Particle_FireFuelPump_01_G_noSmoke1: Particle_FireFuelPump_01_G
	{
		displayName="$STR_Globe_CfgVehicles_Particle_FireFuelPump_01_G_noSmoke10";
		class Effects: Effects
		{
			class Smoke2
			{
				simulation="particles";
				type="FuelSmoke_02_G";
			};
			class Fire
			{
				simulation="particles";
				type="FuelFire1_G";
			};
			class Light
			{
				simulation="light";
				type="BigFireLight";
			};
			class Sound
			{
				simulation="sound";
				type="SFX_FireGasStationPump_G";
			};
		};
	};
	class Particle_FireFuelPump_01_G_noSmoke2: Particle_FireFuelPump_01_G
	{
		displayName="$STR_Globe_CfgVehicles_Particle_FireFuelPump_01_G_noSmoke20";
		class Effects: Effects
		{
			class Smoke1
			{
				simulation="particles";
				type="FuelSmoke_01_G";
			};
			class Fire
			{
				simulation="particles";
				type="FuelFire1_G";
			};
			class Light
			{
				simulation="light";
				type="BigFireLight";
			};
			class Sound
			{
				simulation="sound";
				type="SFX_FireGasStationPump_G";
			};
		};
	};
	class Particle_FireFuelPump_01_G_noSmoke: Particle_FireFuelPump_01_G
	{
		displayName="$STR_Globe_CfgVehicles_Particle_FireFuelPump_01_G_noSmoke0";
		class Effects: Effects
		{
			class Fire
			{
				simulation="particles";
				type="FuelFire1_G";
			};
			class Light
			{
				simulation="light";
				type="BigFireLight";
			};
			class Sound
			{
				simulation="sound";
				type="SFX_FireGasStationPump_G";
			};
		};
	};
	class Particle_FireExplosion_01_G: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_FireExplosion_01_G0";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Fire";
		icon="iconSoundFire_G";
		class Effects
		{
			class Fire
			{
				simulation="particles";
				type="FireExplosion_01_G";
			};
		};
	};
	class Particle_FireExplosion_02_G: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_FireExplosion_02_G0";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Fire";
		icon="iconSoundFire_G";
		class Effects
		{
			class Fire
			{
				simulation="particles";
				type="FireExplosion_02_G";
			};
		};
	};
	class Particle_FireShardsExplosion_01_G: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_FireShardsExplosion_01_G0";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Fire";
		icon="iconSoundFire_G";
		class Effects
		{
			class Fire
			{
				simulation="particles";
				type="ObjectDestructionShardsBurning";
			};
		};
	};
	class Particle_FireShardsExplosion_02_G: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_FireShardsExplosion_02_G0";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Fire";
		icon="iconSoundFire_G";
		class Effects
		{
			class Fire
			{
				simulation="particles";
				type="ObjectDestructionShardsBurning1";
			};
		};
	};
	class Particle_FireShardsExplosion_03_G: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_FireShardsExplosion_03_G0";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Fire";
		icon="iconSoundFire_G";
		class Effects
		{
			class Fire
			{
				simulation="particles";
				type="ObjectDestructionShardsBurning2";
			};
		};
	};
	class Particle_FireShardsExplosion_04_G: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_FireShardsExplosion_04_G0";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Fire";
		icon="iconSoundFire_G";
		class Effects
		{
			class Fire
			{
				simulation="particles";
				type="ObjectDestructionShardsBurning3";
			};
		};
	};
	class Particle_AmmoExplosions_TitanAP_G: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_AmmoExplosions_TitanAP_G0";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Default";
		class Effects
		{
			class Explosion
			{
				simulation="particles";
				type="AmmoExplosions_TitanAP_G";
			};
		};
	};
	class Particle_AmmoExplosions_RPG7_HEAT_G: Particle_AmmoExplosions_TitanAP_G
	{
		displayName="$STR_Globe_CfgVehicles_Particle_AmmoExplosions_RPG7_HEAT_G0";
		class Effects: Effects
		{
			class Explosion: Explosion
			{
				type="AmmoExplosions_RPG7_HEAT_G";
			};
		};
	};
	class Particle_AmmoExplosions_RPG42_tandem_G: Particle_AmmoExplosions_RPG7_HEAT_G
	{
		displayName="$STR_Globe_CfgVehicles_Particle_AmmoExplosions_RPG42_tandem_G0";
		class Effects: Effects
		{
			class Explosion: Explosion
			{
				type="AmmoExplosions_RPG42_tandem_G";
			};
		};
	};
	class Particle_AmmoExplosions_RPG42_thermobaric_G: Particle_AmmoExplosions_RPG7_HEAT_G
	{
		displayName="$STR_Globe_CfgVehicles_Particle_AmmoExplosions_RPG42_thermobaric_G0";
		class Effects: Effects
		{
			class Explosion: Explosion
			{
				type="AmmoExplosions_RPG42_thermobaric_G";
			};
		};
	};
	class Particle_AmmoExplosions_TitanAA_G: Particle_AmmoExplosions_RPG7_HEAT_G
	{
		displayName="$STR_Globe_CfgVehicles_Particle_AmmoExplosions_TitanAA_G0";
		class Effects: Effects
		{
			class Explosion: Explosion
			{
				type="AmmoExplosions_TitanAA_G";
			};
		};
	};
	class Particle_AmmoExplosions_BombDemine_G: Particle_AmmoExplosions_RPG7_HEAT_G
	{
		displayName="$STR_Globe_CfgVehicles_Particle_AmmoExplosions_BombDemine_G0";
		class Effects: Effects
		{
			class Explosion: Explosion
			{
				type="AmmoExplosions_BombDemine_G";
			};
		};
	};
	class Particle_AmmoExplosions_HandGrenade_G: Particle_AmmoExplosions_RPG7_HEAT_G
	{
		displayName="$STR_Globe_CfgVehicles_Particle_AmmoExplosions_HandGrenade_G0";
		class Effects: Effects
		{
			class Explosion: Explosion
			{
				type="AmmoExplosions_HandGrenade_G";
			};
		};
	};
	class Particle_AmmoExplosions_HandGrenadeMini_G: Particle_AmmoExplosions_RPG7_HEAT_G
	{
		displayName="$STR_Globe_CfgVehicles_Particle_AmmoExplosions_HandGrenadeMini_G0";
		class Effects: Effects
		{
			class Explosion: Explosion
			{
				type="AmmoExplosions_HandGrenadeMini_G";
			};
		};
	};
	class Particle_AmmoExplosions_TitanAT_G: Particle_AmmoExplosions_RPG7_HEAT_G
	{
		displayName="$STR_Globe_CfgVehicles_Particle_AmmoExplosions_TitanAT_G0";
		class Effects: Effects
		{
			class Explosion: Explosion
			{
				type="AmmoExplosions_TitanAT_G";
			};
		};
	};
	class Particle_AmmoExplosions_PCML_G: Particle_AmmoExplosions_RPG7_HEAT_G
	{
		displayName="$STR_Globe_CfgVehicles_Particle_AmmoExplosions_PCML_G0";
		class Effects: Effects
		{
			class Explosion: Explosion
			{
				type="AmmoExplosions_PCML_G";
			};
		};
	};
	class Particle_AmmoExplosions_VoronaHE_G: Particle_AmmoExplosions_RPG7_HEAT_G
	{
		displayName="$STR_Globe_CfgVehicles_Particle_AmmoExplosions_VoronaHE_G0";
		class Effects: Effects
		{
			class Explosion: Explosion
			{
				type="AmmoExplosions_VoronaHE_G";
			};
		};
	};
	class Particle_AmmoExplosions_VoronaHEAT_G: Particle_AmmoExplosions_RPG7_HEAT_G
	{
		displayName="$STR_Globe_CfgVehicles_Particle_AmmoExplosions_VoronaHEAT_G0";
		class Effects: Effects
		{
			class Explosion: Explosion
			{
				type="AmmoExplosions_VoronaHEAT_G";
			};
		};
	};
	class Particle_AmmoExplosions_MAAWS_HEAT_G: Particle_AmmoExplosions_RPG7_HEAT_G
	{
		displayName="$STR_Globe_CfgVehicles_Particle_AmmoExplosions_MAAWS_HEAT_G0";
		class Effects: Effects
		{
			class Explosion: Explosion
			{
				type="AmmoExplosions_MAAWS_HEAT_G";
			};
		};
	};
	class Particle_AmmoExplosions_MAAWS_tandem_G: Particle_AmmoExplosions_RPG7_HEAT_G
	{
		displayName="$STR_Globe_CfgVehicles_Particle_AmmoExplosions_MAAWS_tandem_G0";
		class Effects: Effects
		{
			class Explosion: Explosion
			{
				type="AmmoExplosions_MAAWS_tandem_G";
			};
		};
	};
	class Particle_AmmoExplosions_MAAWS_HE_G: Particle_AmmoExplosions_RPG7_HEAT_G
	{
		displayName="$STR_Globe_CfgVehicles_Particle_AmmoExplosions_MAAWS_HE_G0";
		class Effects: Effects
		{
			class Explosion: Explosion
			{
				type="AmmoExplosions_MAAWS_HE_G";
			};
		};
	};
	class Particle_AmmoExplosions_FireFIST_G: Particle_AmmoExplosions_RPG7_HEAT_G
	{
		displayName="$STR_Globe_CfgVehicles_Particle_AmmoExplosions_FireFIST_G0";
		class Effects: Effects
		{
			class Explosion: Explosion
			{
				type="AmmoExplosions_FireFIST_G";
			};
		};
	};
	class Particle_AmmoExplosions_MortarShell_G: Particle_AmmoExplosions_RPG7_HEAT_G
	{
		displayName="$STR_Globe_CfgVehicles_Particle_AmmoExplosions_MortarShell_G0";
		class Effects: Effects
		{
			class Explosion: Explosion
			{
				type="AmmoExplosions_MortarShell_G";
			};
		};
	};
	class Particle_AmmoExplosions_BoGBU12_G: Particle_AmmoExplosions_RPG7_HEAT_G
	{
		displayName="$STR_Globe_CfgVehicles_Particle_AmmoExplosions_BoGBU12_G0";
		class Effects: Effects
		{
			class Explosion: Explosion
			{
				type="AmmoExplosions_BoGBU12_G";
			};
		};
	};
	class Particle_AmmoExplosions_BoMk82_G: Particle_AmmoExplosions_RPG7_HEAT_G
	{
		displayName="$STR_Globe_CfgVehicles_Particle_AmmoExplosions_BoMk82_G0";
		class Effects: Effects
		{
			class Explosion: Explosion
			{
				type="AmmoExplosions_BoMk82_G";
			};
		};
	};
	class Particle_MudVolcano_01_G: Particle_AmmoExplosions_RPG7_HEAT_G
	{
		displayName="$STR_Globe_CfgVehicles_Particle_MudVolcano_01_G0";
		class Effects: Effects
		{
			class Explosion: Explosion
			{
				type="ExploRocks";
			};
		};
	};
	class Particle_MudVolcano_02_G: Particle_AmmoExplosions_RPG7_HEAT_G
	{
		displayName="$STR_Globe_CfgVehicles_Particle_MudVolcano_02_G0";
		class Effects: Effects
		{
			class Explosion: Explosion
			{
				type="ExploRocksDark";
			};
		};
	};
	class Particle_SmokeFuelPump_01_G: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_SmokeFuelPump_01_G0";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Smoke";
		icon="iconSmoke_G";
		class Effects
		{
			class Smoke1
			{
				simulation="particles";
				type="FuelSmoke_01_G";
			};
			class Smoke2
			{
				simulation="particles";
				type="FuelSmoke_02_G";
			};
		};
	};
	class Particle_SmokeFuelPump_02_G: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_SmokeFuelPump_02_G0";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Smoke";
		icon="iconSmoke_G";
		class Effects
		{
			class Smoke1
			{
				simulation="particles";
				type="FuelSmoke_01_G";
			};
		};
	};
	class Particle_SmokeFuelPump_03_G: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_SmokeFuelPump_03_G0";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Smoke";
		icon="iconSmoke_G";
		class Effects
		{
			class Smoke2
			{
				simulation="particles";
				type="FuelSmoke_02_G";
			};
		};
	};
	class Particle_ObjectDestructionFire_01_G: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_ObjectDestructionFire_01_G0";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Fire";
		icon="iconSoundFire_G";
		class Effects
		{
			class Fire
			{
				simulation="particles";
				type="ObjectDestructionFire_01_G";
			};
		};
	};
	class Particle_ObjectDestructionFire_02_G: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_ObjectDestructionFire_02_G0";
		scope=1;
		scopeCurator=0;
		editorSubcategory="EdSubcat_Fire";
		icon="iconSoundFire_G";
		class Effects
		{
			class Fire
			{
				simulation="particles";
				type="ObjectDestructionFire_02_G";
			};
		};
	};
	class Particle_AirObjectDestructionFire_01_G: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_AirObjectDestructionFire_01_G0";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Fire";
		icon="iconSoundFire_G";
		class Effects
		{
			class Fire
			{
				simulation="particles";
				type="AirObjectDestructionFire_01_G";
			};
		};
	};
	class Particle_ObjectDestructionFire1Small_01_G: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_ObjectDestructionFire1Small_01_G0";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Fire";
		icon="iconSoundFire_G";
		class Effects
		{
			class Fire
			{
				simulation="particles";
				type="ObjectDestructionFire1Small_01_G";
			};
		};
	};
	class Particle_ObjectDestructionFire2Small_01_G: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_ObjectDestructionFire2Small_01_G0";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Fire";
		icon="iconSoundFire_G";
		class Effects
		{
			class Fire
			{
				simulation="particles";
				type="ObjectDestructionFire2Small_01_G";
			};
		};
	};
	class Particle_ExhaustFirePlaneBig_01_G: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_ExhaustFirePlaneBig_01_G0";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Fire";
		icon="iconSoundFire_G";
		class Effects
		{
			class Fire
			{
				simulation="particles";
				type="ExhaustFirePlaneBig_01_G";
			};
		};
	};
	class Particle_ClusterFire_01_G: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_ClusterFire_01_G0";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Fire";
		icon="iconSoundFire_G";
		class Effects
		{
			class Fire
			{
				simulation="particles";
				type="ClusterFire_01_G";
			};
		};
	};
	class Particle_ClusterFire_02_G: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_ClusterFire_02_G0";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Fire";
		icon="iconSoundFire_G";
		class Effects
		{
			class Fire
			{
				simulation="particles";
				type="ClusterExpFire";
			};
		};
	};
	class Reflector_base_G: Particle_Base_F
	{
		editorSubcategory="EdSubcat_Lamps";
	};
	class Reflector_ObjectDestructionLight_G: Reflector_base_G
	{
		displayName="$STR_Globe_CfgVehicles_Reflector_ObjectDestructionLight_G0";
		scope=2;
		scopeCurator=2;
		icon="iconReflector_G";
		class Effects
		{
			class Fire
			{
				simulation="light";
				type="ObjectDestructionLight";
			};
		};
	};
	class Reflector_ExplosionLight_01_G: Reflector_base_G
	{
		displayName="$STR_Globe_CfgVehicles_Reflector_ExplosionLight_01_G0";
		scope=2;
		scopeCurator=2;
		icon="iconReflector_G";
		class Effects
		{
			class Fire
			{
				simulation="light";
				type="ExplosionLight_01_G";
			};
		};
	};
	class Reflector_CmeasuresLight_G: Reflector_base_G
	{
		displayName="$STR_Globe_CfgVehicles_Reflector_CmeasuresLight_G0";
		scope=2;
		scopeCurator=2;
		icon="iconReflector_G";
		class Effects
		{
			class Fire
			{
				simulation="light";
				type="CmeasuresLight";
			};
		};
	};
	class Reflector_ScudLight_01_G: Reflector_base_G
	{
		displayName="$STR_Globe_CfgVehicles_Reflector_ScudLight_01_G0";
		scope=2;
		scopeCurator=2;
		icon="iconReflector_G";
		class Effects
		{
			class Fire
			{
				simulation="light";
				type="ScudLight_01_G";
			};
		};
	};
	class Reflector_SmallFireLight_01_G: Reflector_base_G
	{
		displayName="$STR_Globe_CfgVehicles_Reflector_SmallFireLight_01_G0";
		scope=2;
		scopeCurator=2;
		icon="iconReflector_G";
		class Effects
		{
			class Fire
			{
				simulation="light";
				type="SmallFireLight_01_G";
			};
		};
	};
	class Reflector_SmallFirePlaceLight_01_G: Reflector_base_G
	{
		displayName="$STR_Globe_CfgVehicles_Reflector_SmallFirePlaceLight_01_G0";
		scope=2;
		scopeCurator=2;
		icon="iconReflector_G";
		class Effects
		{
			class Fire
			{
				simulation="light";
				type="SmallFirePlaceLight_01_G";
			};
		};
	};
	class Reflector_SmallFlameLight_G: Reflector_base_G
	{
		displayName="$STR_Globe_CfgVehicles_Reflector_SmallFlameLight_G0";
		scope=2;
		scopeCurator=2;
		icon="iconReflector_G";
		class Effects
		{
			class Fire
			{
				simulation="light";
				type="SmallFlameLight";
			};
		};
	};
	class Reflector_Chemlight_Green_G: Reflector_base_G
	{
		displayName="$STR_Globe_CfgVehicles_Reflector_Chemlight_Green_G0";
		scope=2;
		scopeCurator=2;
		icon="iconReflector_G";
		class Effects
		{
			class Fire
			{
				simulation="light";
				type="Chemlight_Green";
			};
		};
	};
	class Reflector_Chemlight_Red_G: Reflector_base_G
	{
		displayName="$STR_Globe_CfgVehicles_Reflector_Chemlight_Red_G0";
		scope=2;
		scopeCurator=2;
		icon="iconReflector_G";
		class Effects
		{
			class Fire
			{
				simulation="light";
				type="Chemlight_Red";
			};
		};
	};
	class Reflector_Chemlight_Yellow_G: Reflector_base_G
	{
		displayName="$STR_Globe_CfgVehicles_Reflector_Chemlight_Yellow_G0";
		scope=2;
		scopeCurator=2;
		icon="iconReflector_G";
		class Effects
		{
			class Fire
			{
				simulation="light";
				type="Chemlight_Yellow";
			};
		};
	};
	class Reflector_ChemLight_Blue_G: Reflector_base_G
	{
		displayName="$STR_Globe_CfgVehicles_Reflector_ChemLight_Blue_G0";
		scope=2;
		scopeCurator=2;
		icon="iconReflector_G";
		class Effects
		{
			class Fire
			{
				simulation="light";
				type="ChemLight_Blue";
			};
		};
	};
	class Reflector_ObjectDestructionLightSmall_G: Reflector_base_G
	{
		displayName="$STR_Globe_CfgVehicles_Reflector_ObjectDestructionLightSmall_G0";
		scope=2;
		scopeCurator=2;
		icon="iconReflector_G";
		class Effects
		{
			class Fire
			{
				simulation="light";
				type="ObjectDestructionLightSmall";
			};
		};
	};
	class Reflector_ExploLight_G: Reflector_base_G
	{
		displayName="$STR_Globe_CfgVehicles_Reflector_ExploLight_G0";
		scope=2;
		scopeCurator=2;
		icon="iconReflector_G";
		class Effects
		{
			class Fire
			{
				simulation="light";
				type="ExploLight";
			};
		};
	};
	class Reflector_ExploLightMed_G: Reflector_base_G
	{
		displayName="$STR_Globe_CfgVehicles_Reflector_ExploLightMed_G0";
		scope=2;
		scopeCurator=2;
		icon="iconReflector_G";
		class Effects
		{
			class Fire
			{
				simulation="light";
				type="ExploLightMed";
			};
		};
	};
	class Reflector_FiredLightMed_G: Reflector_base_G
	{
		displayName="$STR_Globe_CfgVehicles_Reflector_FiredLightMed_G0";
		scope=2;
		scopeCurator=2;
		icon="iconReflector_G";
		class Effects
		{
			class Fire
			{
				simulation="light";
				type="FiredLightMed";
			};
		};
	};
	class Reflector_FiredLightLauncher_G: Reflector_base_G
	{
		displayName="$STR_Globe_CfgVehicles_Reflector_FiredLightLauncher_G0";
		scope=2;
		scopeCurator=2;
		icon="iconReflector_G";
		class Effects
		{
			class Fire
			{
				simulation="light";
				type="FiredLightLauncher";
			};
		};
	};
	class Reflector_FiredLightLauncherSmall_G: Reflector_base_G
	{
		displayName="$STR_Globe_CfgVehicles_Reflector_FiredLightLauncherSmall_G0";
		scope=2;
		scopeCurator=2;
		icon="iconReflector_G";
		class Effects
		{
			class Fire
			{
				simulation="light";
				type="FiredLightLauncherSmall";
			};
		};
	};
	class Reflector_FiredLightCannon_01_G: Reflector_base_G
	{
		displayName="$STR_Globe_CfgVehicles_Reflector_FiredLightCannon_01_G0";
		scope=2;
		scopeCurator=2;
		icon="iconReflector_G";
		class Effects
		{
			class Fire
			{
				simulation="light";
				type="FiredLightCannon_01_G";
			};
		};
	};
	class Reflector_FiredLightSmall_G: Reflector_base_G
	{
		displayName="$STR_Globe_CfgVehicles_Reflector_FiredLightSmall_G0";
		scope=2;
		scopeCurator=2;
		icon="iconReflector_G";
		class Effects
		{
			class Fire
			{
				simulation="light";
				type="FiredLightSmall";
			};
		};
	};
	class Reflector_GrenadeExploLight_G: Reflector_base_G
	{
		displayName="$STR_Globe_CfgVehicles_Reflector_GrenadeExploLight_G0";
		scope=2;
		scopeCurator=2;
		icon="iconReflector_G";
		class Effects
		{
			class Fire
			{
				simulation="light";
				type="GrenadeExploLight";
			};
		};
	};
	class Reflector_MineExploLight_G: Reflector_base_G
	{
		displayName="$STR_Globe_CfgVehicles_Reflector_MineExploLight_G0";
		scope=2;
		scopeCurator=2;
		icon="iconReflector_G";
		class Effects
		{
			class Fire
			{
				simulation="light";
				type="MineExploLight";
			};
		};
	};
	class Reflector_RocketLight_01_G: Reflector_base_G
	{
		displayName="$STR_Globe_CfgVehicles_Reflector_RocketLight_01_G0";
		scope=2;
		scopeCurator=2;
		icon="iconReflector_G";
		class Effects
		{
			class Fire
			{
				simulation="light";
				type="RocketLight_01_G";
			};
		};
	};
	class Reflector_CruiseMissileLight_01_G: Reflector_base_G
	{
		displayName="$STR_Globe_CfgVehicles_Reflector_CruiseMissileLight_01_G0";
		scope=2;
		scopeCurator=2;
		icon="iconReflector_G";
		class Effects
		{
			class Fire
			{
				simulation="light";
				type="CruiseMissileLight_01_G";
			};
		};
	};
	class Reflector_SparksLight_G: Reflector_base_G
	{
		displayName="$STR_Globe_CfgVehicles_Reflector_SparksLight_G0";
		scope=2;
		scopeCurator=2;
		icon="iconReflector_G";
		class Effects
		{
			class Fire
			{
				simulation="light";
				type="SparksLight";
			};
		};
	};
	class Reflector_SparksLightSabot_G: Reflector_base_G
	{
		displayName="$STR_Globe_CfgVehicles_Reflector_SparksLightSabot_G0";
		scope=2;
		scopeCurator=2;
		icon="iconReflector_G";
		class Effects
		{
			class Fire
			{
				simulation="light";
				type="SparksLightSabot";
			};
		};
	};
	class Reflector_ClusterLight_G: Reflector_base_G
	{
		displayName="$STR_Globe_CfgVehicles_Reflector_ClusterLight_G0";
		scope=2;
		scopeCurator=2;
		icon="iconReflector_G";
		class Effects
		{
			class Fire
			{
				simulation="light";
				type="ClusterLight";
			};
		};
	};
	class Reflector_ClusterFlyLight_G: Reflector_base_G
	{
		displayName="$STR_Globe_CfgVehicles_Reflector_ClusterFlyLight_G0";
		scope=2;
		scopeCurator=2;
		icon="iconReflector_G";
		class Effects
		{
			class Fire
			{
				simulation="light";
				type="ClusterFlyLight";
			};
		};
	};
	class Reflector_TrainingMine_light_G: Reflector_base_G
	{
		displayName="$STR_Globe_CfgVehicles_Reflector_TrainingMine_light_G0";
		scope=2;
		scopeCurator=2;
		icon="iconReflector_G";
		class Effects
		{
			class Fire
			{
				simulation="light";
				type="TrainingMine_light";
			};
		};
	};
	class Reflector_Lantern_01_Light_G: Reflector_base_G
	{
		displayName="$STR_Globe_CfgVehicles_Reflector_Lantern_01_Light_G0";
		scope=2;
		scopeCurator=2;
		icon="iconReflector_G";
		class Effects
		{
			class Fire
			{
				simulation="light";
				type="Lantern_01_Light_01_G";
			};
		};
	};
	class Reflector_FiredLightRailgun_01_G: Reflector_base_G
	{
		displayName="$STR_Globe_CfgVehicles_Reflector_FiredLightRailgun_01_G0";
		scope=2;
		scopeCurator=2;
		icon="iconReflector_G";
		class Effects
		{
			class Fire
			{
				simulation="light";
				type="FiredLightRailgun_01_G";
			};
		};
	};
	class Reflector_BigFireLight_01_G: Reflector_base_G
	{
		displayName="$STR_Globe_CfgVehicles_Reflector_BigFireLight_01_G0";
		scope=2;
		scopeCurator=2;
		icon="iconReflector_G";
		class Effects
		{
			class Fire
			{
				simulation="light";
				type="BigFireLight_01_G";
			};
		};
	};
	class Reflector_MediumFireLight_01_G: Reflector_base_G
	{
		displayName="$STR_Globe_CfgVehicles_Reflector_MediumFireLight_01_G0";
		scope=2;
		scopeCurator=2;
		icon="iconReflector_G";
		class Effects
		{
			class Fire
			{
				simulation="light";
				type="MediumFireLight_01_G";
			};
		};
	};
	class Reflector_FlareLight_01_white_G: Reflector_base_G
	{
		displayName="$STR_Globe_CfgVehicles_Reflector_FlareLight_01_white_G0";
		scope=2;
		scopeCurator=2;
		icon="iconFlare_G";
		class Effects
		{
			class Fire
			{
				simulation="light";
				type="FlareLight_01_white_G";
			};
		};
	};
	class Reflector_FlareLight_01_green_G: Reflector_base_G
	{
		displayName="$STR_Globe_CfgVehicles_Reflector_FlareLight_01_green_G0";
		scope=2;
		scopeCurator=2;
		icon="iconFlare_G";
		class Effects
		{
			class Fire
			{
				simulation="light";
				type="FlareLight_01_green_G";
			};
		};
	};
	class Reflector_FlareLight_01_red_G: Reflector_base_G
	{
		displayName="$STR_Globe_CfgVehicles_Reflector_FlareLight_01_red_G0";
		scope=2;
		scopeCurator=2;
		icon="iconFlare_G";
		class Effects
		{
			class Fire
			{
				simulation="light";
				type="FlareLight_01_red_G";
			};
		};
	};
	class Reflector_FlareLight_01_yellow_G: Reflector_base_G
	{
		displayName="$STR_Globe_CfgVehicles_Reflector_FlareLight_01_yellow_G0";
		scope=2;
		scopeCurator=2;
		icon="iconFlare_G";
		class Effects
		{
			class Fire
			{
				simulation="light";
				type="FlareLight_01_yellow_G";
			};
		};
	};
	class Reflector_FlareLight_02_white_G: Reflector_base_G
	{
		displayName="$STR_Globe_CfgVehicles_Reflector_FlareLight_02_white_G0";
		scope=2;
		scopeCurator=2;
		icon="iconFlare_G";
		class Effects
		{
			class Fire
			{
				simulation="light";
				type="FlareLight_02_white_G";
			};
		};
	};
	class Reflector_FlareLight_02_green_G: Reflector_base_G
	{
		displayName="$STR_Globe_CfgVehicles_Reflector_FlareLight_02_green_G0";
		scope=2;
		scopeCurator=2;
		icon="iconFlare_G";
		class Effects
		{
			class Fire
			{
				simulation="light";
				type="FlareLight_02_green_G";
			};
		};
	};
	class Reflector_FlareLight_02_red_G: Reflector_base_G
	{
		displayName="$STR_Globe_CfgVehicles_Reflector_FlareLight_02_red_G0";
		scope=2;
		scopeCurator=2;
		icon="iconFlare_G";
		class Effects
		{
			class Fire
			{
				simulation="light";
				type="FlareLight_02_red_G";
			};
		};
	};
	class Reflector_FlareLight_02_yellow_G: Reflector_base_G
	{
		displayName="$STR_Globe_CfgVehicles_Reflector_FlareLight_02_yellow_G0";
		scope=2;
		scopeCurator=2;
		icon="iconFlare_G";
		class Effects
		{
			class Fire
			{
				simulation="light";
				type="FlareLight_02_yellow_G";
			};
		};
	};
	class Reflector_ThunderBoltLight_01_G: Reflector_base_G
	{
		displayName="$STR_Globe_CfgVehicles_Reflector_ThunderBoltLight_01_G0";
		scope=2;
		scopeCurator=2;
		icon="iconFlare_G";
		class Effects
		{
			class Fire
			{
				simulation="light";
				type="ThunderBoltLight_01_G";
			};
		};
	};
	class Reflector_ThunderBoltLight_02_G: Reflector_base_G
	{
		displayName="$STR_Globe_CfgVehicles_Reflector_ThunderBoltLight_02_G0";
		scope=2;
		scopeCurator=2;
		icon="iconReflector_G";
		class Effects
		{
			class Fire
			{
				simulation="light";
				type="ThunderBoltLight_02_G";
			};
		};
	};
	class Reflector_ThunderBoltLight_03_G: Reflector_base_G
	{
		displayName="$STR_Globe_CfgVehicles_Reflector_ThunderBoltLight_03_G0";
		scope=2;
		scopeCurator=2;
		icon="iconReflector_G";
		class Effects
		{
			class Fire
			{
				simulation="light";
				type="ThunderBoltLight_03_G";
			};
		};
	};
	class Reflector_GuardTower_G: Reflector_base_G
	{
		displayName="$STR_Globe_CfgVehicles_Reflector_GuardTower_G0";
		scope=2;
		scopeCurator=2;
		icon="iconReflector_G";
		class Effects
		{
			class Fire
			{
				simulation="light";
				type="GuardTower_G";
			};
		};
	};
	class Reflector_PowerLine_G: Reflector_base_G
	{
		displayName="$STR_Globe_CfgVehicles_Reflector_PowerLine_G0";
		scope=2;
		scopeCurator=2;
		icon="iconReflector_G";
		class Effects
		{
			class Fire
			{
				simulation="light";
				type="PowerLine_G";
			};
		};
	};
	class Reflector_LampGenericCar_G: Reflector_base_G
	{
		displayName="$STR_Globe_CfgVehicles_Reflector_LampGenericCar_G0";
		scope=2;
		scopeCurator=2;
		icon="iconReflector_G";
		class Effects
		{
			class Fire
			{
				simulation="light";
				type="LampGenericCar_G";
			};
		};
	};
	class Reflector_Sawmill_G: Reflector_base_G
	{
		displayName="$STR_Globe_CfgVehicles_Reflector_Sawmill_G0";
		scope=2;
		scopeCurator=2;
		icon="iconReflector_G";
		class Effects
		{
			class Fire
			{
				simulation="light";
				type="Sawmill_G";
			};
		};
	};
	class Reflector_UGV2_G: Reflector_base_G
	{
		displayName="$STR_Globe_CfgVehicles_Reflector_UGV2_G0";
		scope=2;
		scopeCurator=2;
		icon="iconReflector_G";
		class Effects
		{
			class Fire
			{
				simulation="light";
				type="UGV2_G";
			};
		};
	};
	class Reflector_Tractor1Light_G: Reflector_base_G
	{
		displayName="$STR_Globe_CfgVehicles_Reflector_Tractor1Light_G0";
		scope=2;
		scopeCurator=2;
		icon="iconReflector_G";
		class Effects
		{
			class Fire
			{
				simulation="light";
				type="Tractor1Light_G";
			};
		};
	};
	class Reflector_Offroad1Spotlight_G: Reflector_base_G
	{
		displayName="$STR_Globe_CfgVehicles_Reflector_Offroad1Spotlight_G0";
		scope=2;
		scopeCurator=2;
		icon="iconReflector_G";
		class Effects
		{
			class Fire
			{
				simulation="light";
				type="Offroad1Spotlight_G";
			};
		};
	};
	class Reflector_Offroad1_01_G: Reflector_base_G
	{
		displayName="$STR_Globe_CfgVehicles_Reflector_Offroad1_01_G0";
		scope=2;
		scopeCurator=2;
		icon="iconReflector_G";
		class Effects
		{
			class Fire
			{
				simulation="light";
				type="Offroad1_01_G";
			};
		};
	};
	class Reflector_Offroad1_02_G: Reflector_base_G
	{
		displayName="$STR_Globe_CfgVehicles_Reflector_Offroad1_02_G0";
		scope=2;
		scopeCurator=2;
		icon="iconReflector_G";
		class Effects
		{
			class Fire
			{
				simulation="light";
				type="Offroad1_02_G";
			};
		};
	};
	class Reflector_LightHouse1_G: Reflector_base_G
	{
		displayName="$STR_Globe_CfgVehicles_Reflector_LightHouse1_G0";
		scope=2;
		scopeCurator=2;
		icon="iconReflector_G";
		class Effects
		{
			class Fire
			{
				simulation="light";
				type="LightHouse1_G";
			};
		};
	};
	class Reflector_LightHouse3_G: Reflector_base_G
	{
		displayName="$STR_Globe_CfgVehicles_Reflector_LightHouse3_G0";
		scope=2;
		scopeCurator=2;
		icon="iconReflector_G";
		class Effects
		{
			class Fire
			{
				simulation="light";
				type="LightHouse3_G";
			};
		};
	};
	class Reflector_VTOL_G: Reflector_base_G
	{
		displayName="$STR_Globe_CfgVehicles_Reflector_VTOL_G0";
		scope=2;
		scopeCurator=2;
		icon="iconReflector_G";
		class Effects
		{
			class Fire
			{
				simulation="light";
				type="VTOL_G";
			};
		};
	};
	class Reflector_LampGenericTruck_G: Reflector_base_G
	{
		displayName="$STR_Globe_CfgVehicles_Reflector_LampGenericTruck_G0";
		scope=2;
		scopeCurator=2;
		icon="iconReflector_G";
		class Effects
		{
			class Fire
			{
				simulation="light";
				type="LampGenericTruck_G";
			};
		};
	};
	class Reflector_HeliLight3_G: Reflector_base_G
	{
		displayName="$STR_Globe_CfgVehicles_Reflector_HeliLight3_G0";
		scope=2;
		scopeCurator=2;
		icon="iconReflector_G";
		class Effects
		{
			class Fire
			{
				simulation="light";
				type="HeliLight3_G";
			};
		};
	};
	class Particle_SmallSmokeFast2_G: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_SmallSmokeFast2_G0";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Smoke";
		icon="iconSmoke_G";
		class Effects
		{
			class Smoke
			{
				simulation="particles";
				type="SmallSmokeFast2_G";
			};
		};
	};
	class Particle_SmallSmokeSlow1_G: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_SmallSmokeSlow1_G0";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Smoke";
		icon="iconSmoke_G";
		class Effects
		{
			class Smoke
			{
				simulation="particles";
				type="SmallSmokeSlow1_G";
			};
		};
	};
	class Particle_SmallSmokeSlow2_G: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_SmallSmokeSlow2_G0";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Smoke";
		icon="iconSmoke_G";
		class Effects
		{
			class Smoke
			{
				simulation="particles";
				type="SmallSmokeSlow2_G";
			};
		};
	};
	class Particle_SmokeBig_G: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_SmokeBig_G0";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Smoke";
		icon="iconSmoke_G";
		class Effects
		{
			class Smoke
			{
				simulation="particles";
				type="SmokeBig_G";
			};
		};
	};
	class Particle_SmokeMed_G: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_SmokeMed_G0";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Smoke";
		icon="iconSmoke_G";
		class Effects
		{
			class Smoke
			{
				simulation="particles";
				type="SmokeMed_G";
			};
		};
	};
	class Particle_GrenadeSmoke1_G: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_GrenadeSmoke1_G0";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Smoke";
		icon="iconSmoke_G";
		class Effects
		{
			class Smoke
			{
				simulation="particles";
				type="GrenadeSmoke1_G";
			};
		};
	};
	class Particle_SecondarySmoke_G: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_SecondarySmoke_G0";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Smoke";
		icon="iconSmoke_G";
		class Effects
		{
			class Smoke
			{
				simulation="particles";
				type="SecondarySmoke_G";
			};
		};
	};
	class Particle_CraterSmoke_G: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_CraterSmoke_G0";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Smoke";
		icon="iconSmoke_G";
		class Effects
		{
			class Smoke
			{
				simulation="particles";
				type="CraterSmoke_G";
			};
		};
	};
	class Particle_CraterSmoke_Orange_G: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_CraterSmoke_Orange_G0";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Smoke";
		icon="iconSmoke_G";
		class Effects
		{
			class Smoke
			{
				simulation="particles";
				type="CraterSmoke_Orange_G";
			};
		};
	};
	class Particle_CraterSmokeBig_G: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_CraterSmokeBig_G0";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Smoke";
		icon="iconSmoke_G";
		class Effects
		{
			class Smoke
			{
				simulation="particles";
				type="CraterSmokeBig_G";
			};
		};
	};
	class Particle_ShellSmoke_G: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_ShellSmoke_G0";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Smoke";
		icon="iconSmoke_G";
		class Effects
		{
			class Smoke
			{
				simulation="particles";
				type="ShellSmoke_G";
			};
		};
	};
	class Particle_ExploAmmoSmoke_G: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_ExploAmmoSmoke_G0";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Smoke";
		icon="iconSmoke_G";
		class Effects
		{
			class Smoke
			{
				simulation="particles";
				type="ExploAmmoSmoke_G";
			};
		};
	};
	class Particle_ERASmoke_G: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_ERASmoke_G0";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Smoke";
		icon="iconSmoke_G";
		class Effects
		{
			class Smoke
			{
				simulation="particles";
				type="ERASmoke_G";
			};
		};
	};
	class Particle_CircleDustTankSmall_G: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_CircleDustTankSmall_G0";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Default";
		icon="iconObject_circle";
		class Effects
		{
			class Smoke
			{
				simulation="particles";
				type="CircleDustTankSmall_G";
			};
		};
	};
	class Particle_CircleDustTankBig_G: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_CircleDustTankBig_G0";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Default";
		icon="iconObject_circle";
		class Effects
		{
			class Smoke
			{
				simulation="particles";
				type="CircleDustTankBig_G";
			};
		};
	};
	class Particle_CircleDustTankLong_G: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_CircleDustTankLong_G0";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Default";
		icon="iconObject_circle";
		class Effects
		{
			class Smoke
			{
				simulation="particles";
				type="CircleDustTankLong_G";
			};
		};
	};
	class Particle_CircleDustTank_G: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_CircleDustTank_G0";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Default";
		icon="iconObject_circle";
		class Effects
		{
			class Smoke
			{
				simulation="particles";
				type="CircleDustTank_G";
			};
		};
	};
	class Particle_CircleDustTankL_G: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_CircleDustTankL_G0";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Default";
		icon="iconObject_circle";
		class Effects
		{
			class Smoke
			{
				simulation="particles";
				type="CircleDustTankL_G";
			};
		};
	};
	class Particle_CircleDustArtillery_G: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_CircleDustArtillery_G0";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Default";
		icon="iconObject_circle";
		class Effects
		{
			class Smoke
			{
				simulation="particles";
				type="CircleDustArtillery_G";
			};
		};
	};
	class Particle_CircleDustMortar_G: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_CircleDustMortar_G0";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Default";
		icon="iconObject_circle";
		class Effects
		{
			class Smoke
			{
				simulation="particles";
				type="CircleDustMortar_G";
			};
		};
	};
	class Particle_CircleDustBig_G: Particle_Base_F
	{
		displayName="$STR_Globe_CfgVehicles_Particle_CircleDustBig_G0";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Default";
		icon="iconObject_circle";
		class Effects
		{
			class Smoke
			{
				simulation="particles";
				type="CircleDustBig_G";
			};
		};
	};
};
