class CfgPatches
{
	class Weapons_Globe_Lauchers
	{
		addonRootClass="A3_Weapons_F_expEden";
		requiredAddons[]=
		{
			"A3_Weapons_F_expEden"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Weapon_launch_RPG32A1_hex_G",
			"Weapon_launch_RPG32_camo_F",
			"B_SAM_System_03_VLS",
			"O_SAM_System_04_VLS"
		};
		weapons[]=
		{
			"StaticRocketPod_DAR_G",
			"VLS_mim145",
			"VLS_s750",
			"launch_RPG32A1_hex"
		};
	};
};
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeft;
class DefaultVehicleSystemsDisplayManagerRight;
class CfgWeapons
{
	class GMG_F;
	class weapon_VLSBase;
	class MissileLauncher;
	class Launcher_Base_F;
	class launch_RPG32_F;
	class launch_RPG32_camo_F: launch_RPG32_F
	{
		scope=2;
	};
	class launch_RPG32A1_hex: launch_RPG32_F
	{
		scope=2;
		scopeArsenal=2;
		author="O&T Expansion Eden";
		_generalMacro="launch_RPG32A1_hex";
		displayName="$STR_Globe_CfgWeapons_launch_RPG32M_hex0";
		picture="\A3\Weapons_F\launchers\RPG32\data\UI\gear_RPG32_X_CA.paa";
		UiPicture="\A3\Weapons_F\Data\UI\icon_at_CA.paa";
		weaponInfoType="RscOpticsRangeFinderRPG32A1";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Enoch\Launchers\RPG32\Data\RPG_32_body_RUcamo_CO.paa",
			"\A3\Weapons_F\Launchers\RPG32\data\RPG_32_optics_CO.paa"
		};
	};
	class launch_RPG7_F: Launcher_Base_F
	{
		recoil="recoil_rpg7";
	};
	class VLS_mim145: weapon_VLSBase
	{
		displayName="$STR_Globe_CfgWeapons_SAM_System_03_VLS";
		magazines[]=
		{
			"VLS_mim145_mag"
		};
		class Cruise: MissileLauncher
		{
			displayName="$STR_Globe_CfgWeapons_SAM_System_03_VLS";
			textureType="terrain";
			reloadTime=8;
			burst=1;
			burstRangeMax=2;
			aiRateOfFire=9;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=35000;
			minRange=1000;
			minRangeProbab=0.8;
			midRange=15000;
			midRangeProbab=0.98;
			maxRange=35000;
			maxRangeProbab=0.95;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Titan",
					1.41254,
					1,
					1100
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
				soundSetShot[]=
				{
					"VLS_mim145_Shot_SoundSet",
					"Cannon125mm_Tail_SoundSet"
				};
			};
		};
		nameSound="MissileLauncher";
		sounds[]=
		{
			"StandardSound"
		};
		class StandardSound
		{
			begin1[]=
			{
				"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Titan",
				1.41254,
				1,
				1100
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			soundSetShot[]=
			{
				"VLS_mim145_Shot_SoundSet",
				"Cannon125mm_Tail_SoundSet"
			};
		};
		lockedTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Locked_Titan",
			0.56234133,
			2.5
		};
		lockingTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Locking_Titan",
			0.56234133,
			1
		};
		soundFly[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",
			1,
			1.1,
			700
		};
	};
	class VLS_s750: weapon_VLSBase
	{
		displayName="$STR_Globe_CfgWeapons_SAM_System_04_VLS";
		magazines[]=
		{
			"VLS_s750_mag"
		};
		class Cruise: MissileLauncher
		{
			displayName="$STR_Globe_CfgWeapons_SAM_System_04_VLS";
			textureType="terrain";
			reloadTime=10;
			burst=1;
			burstRangeMax=1;
			aiRateOfFire=11;
			aiRateOfFireDispersion=3;
			aiRateOfFireDistance=40000;
			minRange=1000;
			minRangeProbab=0.7;
			midRange=12000;
			midRangeProbab=0.95;
			maxRange=40000;
			maxRangeProbab=0.9;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Titan",
					1.41254,
					1,
					1100
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
				soundSetShot[]=
				{
					"VLS_mim145_Shot_SoundSet",
					"Cannon155mm_Tail_SoundSet"
				};
			};
		};
		nameSound="MissileLauncher";
		sounds[]=
		{
			"StandardSound"
		};
		class StandardSound
		{
			begin1[]=
			{
				"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Titan",
				1.41254,
				1,
				1100
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			soundSetShot[]=
			{
				"VLS_mim145_Shot_SoundSet",
				"Cannon155mm_Tail_SoundSet"
			};
		};
		lockedTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Locked_Titan",
			0.56234133,
			2.5
		};
		lockingTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Locking_Titan",
			0.56234133,
			1
		};
		soundFly[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",
			1,
			1.1,
			700
		};
	};
};
class CfgAmmo
{
	class ammo_Missile_Cruise_01;
	class Sh_155mm_AMOS;
	class M_SPG9_HEAT;
	class M_SPG9_HE: M_SPG9_HEAT
	{
		indirectHitRange=5;
	};
	class Sh_82mm_AMOS: Sh_155mm_AMOS
	{
		soundFakeFall0[]=
		{
			"a3\data_f_curator\sound\cfgsounds\incoming1",
			1.7,
			1,
			500
		};
		soundFakeFall1[]=
		{
			"a3\data_f_curator\sound\cfgsounds\incoming2",
			1.7,
			1,
			500
		};
		soundFakeFall[]=
		{
			"soundFakeFall0",
			0.5,
			"soundFakeFall1",
			0.5
		};
	};
	class VLS_mim145_ammo: ammo_Missile_Cruise_01
	{
		hit=650;
		indirectHit=140;
		indirectHitRange=35;
		maneuvrability=8;
		trackOversteer=0.3;
		trackLead=0.8;
		airFriction=0.06;
		sideAirFriction=0.11;
		thrustTime=18;
		maxSpeed=1050;
		timeToLive=60;
		proximityExplosionDistance=0;
		dangerRadiusHit=-1;
		suppressionRadiusHit=-1;
		craterEffects="HeavyBombCrater";
		explosionEffects="BombExplosion";
		effectsFire="CannonFire";
		missileFireAnim="rocket_fire_hide";
		effectsMissile="FX_Missile_SAM_LongRange";
		muzzleEffect="BIS_fnc_effectFiredCruiseMissile";
		model="\A3\Weapons_F_Sams\Ammo\Missile_SAM_03_fly_F";
		proxyShape="\A3\Weapons_F_Sams\Ammo\Missile_SAM_03_fly_F";
		SoundSetExplosion[]=
		{
			"RocketsHeavy_Exp_SoundSet",
			"BombsHeavy_Tail_SoundSet",
			"Explosion_Debris_SoundSet",
			"UXO_Debris_SoundSet",
			"UXO_Debris_Dust_Cloud_SoundSet"
		};
		class CamShakeExplode
		{
			power=22;
			duration=2;
			frequency=20;
			distance=163.905;
		};
		class CamShakeHit
		{
			power=110;
			duration=0.60000002;
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power=2.9907;
			duration=1.8;
			frequency=20;
			distance=71.554199;
		};
		class CamShakePlayerFire
		{
			power=4;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class VLS_s750_ammo: VLS_mim145_ammo
	{
		hit=800;
		indirectHit=180;
		indirectHitRange=45;
		maneuvrability=5;
		trackOversteer=0.2;
		trackLead=1.0;
		airFriction=0.07;
		sideAirFriction=0.14;
		thrustTime=22;
		maxSpeed=950;
		timeToLive=70;
		proximityExplosionDistance=0;
		dangerRadiusHit=-1;
		suppressionRadiusHit=-1;
		model="\A3\Weapons_F_Sams\Ammo\Missile_SAM_04_fly_F";
		proxyShape="\A3\Weapons_F_Sams\Ammo\Missile_SAM_04_fly_F";
	};
};
class CfgVehicles
{
	class Launcher_Base_F;
	class StaticWeapon;
	class StaticMGWeapon: StaticWeapon
	{
		class Turrets;
	};
	class SAM_System_04_base_F: StaticMGWeapon
	{
		class Components;
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class SAM_System_03_base_F: StaticMGWeapon
	{
		class Components;
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class SAM_System_03_base_VLS: SAM_System_03_base_F
	{
		unitInfoType="RscUnitInfoStatic";
		threat[]={1,1,0.1};
		cost=3000000;
		accuracy=0.12;
		extCameraPosition[]={0,3,-12};
		cameraSmoothSpeed=10;
		canFloat=0;
		enableGPS=1;
		radartype=2;
		radarTarget=1;
		radarTargetSize=1.5;
		visualTarget=1;
		visualTargetSize=1.5;
		irTargetSize=1;
		reportRemoteTargets=0;
		receiveRemoteTargets=1;
		reportOwnPosition=1;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class DataLinkSensorComponent: SensorTemplateDataLink
					{
						class AirTarget
						{
							minRange=32000;
							maxRange=32000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=32000;
							maxRange=32000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
					};
				};
			};
		};
		weapons[]=
		{
			"VLS_mim145"
		};
		magazines[]=
		{
			"VLS_mim145_mag"
		};
		class AnimationSources
		{
			class Missiles_revolving
			{
				source="revolving";
				weapon="VLS_mim145";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				primary=1;
				primaryGunner=1;
				startEngine=0;
				enableManualFire=1;
				turretInfoType="RscOptics_VLS_01";
				forceHideGunner=1;
				gunnerForceOptics=1;
				gunnerOutForceOptics=1;
				viewgunnerinExternal=0;
				outGunnerMayFire=1;
				inGunnerMayFire=1;
				castGunnerShadow=0;
				showAllTargets="2 + 4";
				weapons[]=
				{
					"VLS_mim145"
				};
				magazines[]=
				{
					"VLS_mim145_mag"
				};
				class Components: Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
					{
						class Components
						{
							class EmptyDisplay
							{
								componentType="EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType="MinimapDisplayComponent";
								resource="RscCustomInfoMiniMap";
							};
							class UAVDisplay
							{
								componentType="UAVFeedDisplayComponent";
							};
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={8000,4000,2000,16000};
								resource="RscCustomInfoSensors";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
					{
						defaultDisplay="SensorDisplay";
						class Components
						{
							class EmptyDisplay
							{
								componentType="EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType="MinimapDisplayComponent";
								resource="RscCustomInfoMiniMap";
							};
							class UAVDisplay
							{
								componentType="UAVFeedDisplayComponent";
							};
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={8000,4000,2000,16000};
								resource="RscCustomInfoSensors";
							};
						};
					};
				};
			};
		};
	};
	class SAM_System_04_base_VLS: SAM_System_04_base_F
	{
		unitInfoType="RscUnitInfoStatic";
		threat[]={1,1,0.1};
		cost=3000000;
		accuracy=0.12;
		extCameraPosition[]={0,3,-12};
		cameraSmoothSpeed=10;
		canFloat=0;
		enableGPS=1;
		radartype=2;
		radarTarget=1;
		radarTargetSize=1.5;
		visualTarget=1;
		visualTargetSize=1.5;
		irTargetSize=1;
		reportRemoteTargets=0;
		receiveRemoteTargets=1;
		reportOwnPosition=1;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class DataLinkSensorComponent: SensorTemplateDataLink
					{
						class AirTarget
						{
							minRange=40000;
							maxRange=40000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=40000;
							maxRange=40000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
					};
				};
			};
		};
		weapons[]=
		{
			"VLS_s750"
		};
		magazines[]=
		{
			"VLS_s750_mag"
		};
		class AnimationSources
		{
			class Missiles_revolving
			{
				source="revolving";
				weapon="VLS_s750";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				minelev=80;
				maxelev=90;
				minturn=-120;
				maxturn=120;
				initElev=90;
				initTurn=0;	
				primary=1;
				primaryGunner=1;
				startEngine=0;
				enableManualFire=1;
				turretInfoType="RscOptics_VLS_01";
				forceHideGunner=1;
				gunnerForceOptics=1;
				gunnerOutForceOptics=1;
				viewgunnerinExternal=0;
				outGunnerMayFire=1;
				inGunnerMayFire=1;
				castGunnerShadow=0;
				showAllTargets="2 + 4";
				weapons[]=
				{
					"VLS_s750"
				};
				magazines[]=
				{
					"VLS_s750_mag"
				};
				class Components: Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
					{
						class Components
						{
							class EmptyDisplay
							{
								componentType="EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType="MinimapDisplayComponent";
								resource="RscCustomInfoMiniMap";
							};
							class UAVDisplay
							{
								componentType="UAVFeedDisplayComponent";
							};
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={2000,4000,16000,40000};
								resource="RscCustomInfoSensors";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
					{
						defaultDisplay="SensorDisplay";
						class Components
						{
							class EmptyDisplay
							{
								componentType="EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType="MinimapDisplayComponent";
								resource="RscCustomInfoMiniMap";
							};
							class UAVDisplay
							{
								componentType="UAVFeedDisplayComponent";
							};
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={2000,4000,16000,40000};
								resource="RscCustomInfoSensors";
							};
						};
					};
				};
			};
		};
	};
	class B_SAM_System_03_VLS: SAM_System_03_base_VLS
	{
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"mainturret",
					0
				},
				
				{
					"maingun",
					0.25999999
				},
				
				{
					"hide_missilecover_01",
					1
				},
				
				{
					"hide_missilecover_02",
					1
				},
				
				{
					"hide_missilecover_03",
					1
				},
				
				{
					"hide_missilecover_04",
					1
				},
				
				{
					"hide_missilecover_05",
					1
				},
				
				{
					"hide_missilecover_06",
					1
				},
				
				{
					"hide_missilecover_07",
					1
				},
				
				{
					"hide_missilecover_08",
					1
				},
				
				{
					"hide_missilecover_09",
					1
				},
				
				{
					"hide_missilecover_10",
					1
				},
				
				{
					"hide_missilecover_11",
					1
				},
				
				{
					"hide_missilecover_12",
					1
				},
				
				{
					"hide_missilecover_13",
					1
				},
				
				{
					"hide_missilecover_14",
					1
				},
				
				{
					"hide_missilecover_15",
					1
				},
				
				{
					"hide_missilecover_16",
					1
				},
				
				{
					"hide_missilecover_17",
					1
				},
				
				{
					"hide_missilecover_18",
					1
				},
				
				{
					"hide_missilecover_19",
					1
				},
				
				{
					"hide_missilecover_20",
					1
				},
				
				{
					"hide_missilecover_21",
					1
				},
				
				{
					"damageturret",
					0
				},
				
				{
					"damage_hide_missilecover_01",
					0
				},
				
				{
					"damage_hide_missilecover_02",
					0
				},
				
				{
					"damage_hide_missilecover_03",
					0
				},
				
				{
					"damage_hide_missilecover_04",
					0
				},
				
				{
					"damage_hide_missilecover_05",
					0
				},
				
				{
					"damage_hide_missilecover_06",
					0
				},
				
				{
					"damage_hide_missilecover_07",
					0
				},
				
				{
					"damage_hide_missilecover_08",
					0
				},
				
				{
					"damage_hide_missilecover_09",
					0
				},
				
				{
					"damage_hide_missilecover_10",
					0
				},
				
				{
					"damage_hide_missilecover_11",
					0
				},
				
				{
					"damage_hide_missilecover_12",
					0
				},
				
				{
					"damage_hide_missilecover_13",
					0
				},
				
				{
					"damage_hide_missilecover_14",
					0
				},
				
				{
					"damage_hide_missilecover_15",
					0
				},
				
				{
					"damage_hide_missilecover_16",
					0
				},
				
				{
					"damage_hide_missilecover_17",
					0
				},
				
				{
					"damage_hide_missilecover_18",
					0
				},
				
				{
					"damage_hide_missilecover_19",
					0
				},
				
				{
					"damage_hide_missilecover_20",
					0
				},
				
				{
					"damage_hide_missilecover_21",
					0
				}
			};
			hide[]=
			{
				"zasleh",
				"light_back",
				"brzdove svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=1.755;
			verticalOffsetWorld=-0.001;
			init="''";
		};
		author="O&T Expansion Eden";
		_generalMacro="B_SAM_System_03_VLS";
		displayName="$STR_Globe_CfgWeapons_SAM_System_03_VLS";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="BLU_F";
		crew="B_UAV_AI";
		typicalCargo[]=
		{
			"B_UAV_AI"
		};
	};
	class O_SAM_System_04_VLS: SAM_System_04_base_VLS
	{
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"mainturret",
					0
				},
				
				{
					"maingun",
					0.25999999
				},
				
				{
					"hide_missilecover_01",
					1
				},
				
				{
					"hide_missilecover_02",
					1
				},
				
				{
					"hide_missilecover_03",
					1
				},
				
				{
					"hide_missilecover_04",
					1
				},
				
				{
					"hide_missilecover_05",
					1
				},
				
				{
					"hide_missilecover_06",
					1
				},
				
				{
					"hide_missilecover_07",
					1
				},
				
				{
					"hide_missilecover_08",
					1
				},
				
				{
					"hide_missilecover_09",
					1
				},
				
				{
					"hide_missilecover_10",
					1
				},
				
				{
					"hide_missilecover_11",
					1
				},
				
				{
					"hide_missilecover_12",
					1
				},
				
				{
					"hide_missilecover_13",
					1
				},
				
				{
					"hide_missilecover_14",
					1
				},
				
				{
					"hide_missilecover_15",
					1
				},
				
				{
					"hide_missilecover_16",
					1
				},
				
				{
					"hide_missilecover_17",
					1
				},
				
				{
					"hide_missilecover_18",
					1
				},
				
				{
					"hide_missilecover_19",
					1
				},
				
				{
					"hide_missilecover_20",
					1
				},
				
				{
					"hide_missilecover_21",
					1
				},
				
				{
					"damageturret",
					0
				},
				
				{
					"damage_hide_missilecover_01",
					0
				},
				
				{
					"damage_hide_missilecover_02",
					0
				},
				
				{
					"damage_hide_missilecover_03",
					0
				},
				
				{
					"damage_hide_missilecover_04",
					0
				},
				
				{
					"damage_hide_missilecover_05",
					0
				},
				
				{
					"damage_hide_missilecover_06",
					0
				},
				
				{
					"damage_hide_missilecover_07",
					0
				},
				
				{
					"damage_hide_missilecover_08",
					0
				},
				
				{
					"damage_hide_missilecover_09",
					0
				},
				
				{
					"damage_hide_missilecover_10",
					0
				},
				
				{
					"damage_hide_missilecover_11",
					0
				},
				
				{
					"damage_hide_missilecover_12",
					0
				},
				
				{
					"damage_hide_missilecover_13",
					0
				},
				
				{
					"damage_hide_missilecover_14",
					0
				},
				
				{
					"damage_hide_missilecover_15",
					0
				},
				
				{
					"damage_hide_missilecover_16",
					0
				},
				
				{
					"damage_hide_missilecover_17",
					0
				},
				
				{
					"damage_hide_missilecover_18",
					0
				},
				
				{
					"damage_hide_missilecover_19",
					0
				},
				
				{
					"damage_hide_missilecover_20",
					0
				},
				
				{
					"damage_hide_missilecover_21",
					0
				}
			};
			hide[]=
			{
				"zasleh",
				"light_back",
				"brzdove svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=1.755;
			verticalOffsetWorld=-0.001;
			init="''";
		};
		author="O&T Expansion Eden";
		_generalMacro="O_SAM_System_04_VLS";
		displayName="$STR_Globe_CfgWeapons_SAM_System_04_VLS";
		scope=2;
		scopeCurator=2;
		side=0;
		faction="OPF_F";
		crew="O_UAV_AI";
		typicalCargo[]=
		{
			"O_UAV_AI"
		};
	};
	class Weapon_launch_RPG32A1_hex_G: Launcher_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgWeapons_launch_RPG32M_hex0";
		author="O&T Expansion Eden";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_Launchers";
		vehicleClass="WeaponsSecondary";
		class TransportWeapons
		{
			class launch_RPG32A1_hex
			{
				weapon="launch_RPG32A1_hex";
				count=1;
			};
		};
		class TransportMagazines
		{
			class RPG32_F
			{
				magazine="RPG32_F";
				count=1;
			};
		};
	};
	class Weapon_launch_RPG32_camo_F: Launcher_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_C_CfgWeapons_launch_RPG32_camo_F0";
		author="O&T Expansion Eden";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_Launchers";
		vehicleClass="WeaponsSecondary";
		class TransportWeapons
		{
			class launch_RPG32_camo_F
			{
				weapon="launch_RPG32_camo_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class RPG32_F
			{
				magazine="RPG32_F";
				count=1;
			};
		};
	};
};
class CfgMagazines
{
	class VehicleMagazine;
	class VLS_mim145_mag: VehicleMagazine
	{
		author="O&T Expansion Eden";
		scope=2;
		displayName="$STR_Globe_CfgMagazines_VLS_mim145_mag0";
		displayNameShort="$STR_Globe_CfgMagazines_VLS_mim145_mag1";
		descriptionShort="$STR_Globe_CfgMagazines_VLS_mim145_mag2";
		ammo="VLS_mim145_ammo";
		initSpeed=45;
		maxLeadSpeed=301.38889;
		count=4;
		nameSound="missiles";
	};
	class VLS_s750_mag: VLS_mim145_mag
	{
		author="O&T Expansion Eden";
		displayName="$STR_Globe_CfgMagazines_VLS_s750_mag0";
		displayNameShort="$STR_Globe_CfgMagazines_VLS_mim145_mag1";
		descriptionShort="$STR_Globe_CfgMagazines_VLS_mim145_mag2";
		ammo="VLS_s750_ammo";
		maxLeadSpeed=301.4;
	};
};
class CfgSoundSets
{
	class VLS_mim145_Shot_SoundSet
	{
		SoundShaders[]=
		{
			"VLS_mim145_Shot_close_SoundShader",
			"VLS_mim145_Shot_middle_SoundShader",
			"VLS_mim145_Shot_dist_SoundShader",
			"Static_Launcher_Titan_ATAA_distShot_SoundShader"
		};
		volumeFactor=1.6;
		volumeCurve="LinearCurve";
		spatial=1;
		doppler=0;
		loop=0;
		sound3DProcessingType="ExplosionHeavy3DProcessingType";
		distanceFilter="explosionDistanceFreqAttenuationFilter";
		occlusionFactor=0.30000001;
		obstructionFactor=0;
	};
};
class CfgSoundShaders
{
	class VLS_mim145_Shot_close_SoundShader
	{
		samples[]=
		{
			
			{
				"\a3\sounds_f\weapons\explosion\explosion_satchel3",
				1
			}
		};
		volume=1;
		range=100;
		rangeCurve[]=
		{
			{0,1},
			{90,1},
			{300,0}
		};
	};
	class VLS_mim145_Shot_middle_SoundShader
	{
		samples[]=
		{
			
			{
				"\a3\sounds_f\weapons\explosion\explosion_satchel1",
				1
			},
			
			{
				"\a3\sounds_f\weapons\explosion\explosion_satchel2",
				1
			}
		};
		volume=1;
		range=400;
		rangeCurve[]=
		{
			{0,0},
			{50,0.1},
			{300,0.80000001},
			{400,1},
			{500,0}
		};
	};
	class VLS_mim145_Shot_dist_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F\arsenal\weapons_vehicles\Missiles\VLS_01_Launch_Distant_01",
				1
			},
			
			{
				"A3\Sounds_F\arsenal\weapons_vehicles\Missiles\VLS_01_Launch_Distant_02",
				1
			},
			
			{
				"A3\Sounds_F\arsenal\weapons_vehicles\Missiles\VLS_01_Launch_Distant_03",
				1
			},
			
			{
				"A3\Sounds_F\arsenal\weapons_vehicles\Missiles\VLS_01_Launch_Distant_04",
				1
			}
		};
		volume=1;
		range=4000;
		rangeCurve[]=
		{
			{0,0.2},
			{50,0.2},
			{300,0.85000002},
			{4000,1}
		};
	};
};
