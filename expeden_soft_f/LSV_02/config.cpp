class CfgPatches
{
	class Soft_Globe_LSV_02
	{
		addonRootClass="A3_Soft_F_expEden";
		requiredAddons[]=
		{
			"A3_Soft_F_expEden"
		};
		requiredVersion=0.1;
		units[]=
		{
			"O_LSV_02_armed762"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class NewTurret;
	};
	class Car_F: Car
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class ViewGunner;
			};
		};
		class AnimationSources;
	};
	class LSV_02_base_F: Car_F
	{
		class Sounds
		{
			soundSetsInt[]=
			{
				"Lsv_02_Engine_RPM0_INT_SoundSet",
				"Lsv_02_Engine_RPM1_INT_SoundSet",
				"Lsv_02_Engine_RPM2_INT_SoundSet",
				"Lsv_02_Engine_RPM3_INT_SoundSet",
				"Lsv_02_Rattling_INT_SoundSet",
				"Lsv_02_Stress_INT_SoundSet",
				"Lsv_02_Rain_INT_SoundSet",
				"Lsv_02_Tires_Rock_Fast_OPEN_SoundSet",
				"Lsv_02_Tires_Grass_Fast_OPEN_SoundSet",
				"Lsv_02_Tires_Sand_Fast_OPEN_SoundSet",
				"Lsv_02_Tires_Gravel_Fast_OPEN_SoundSet",
				"Lsv_02_Tires_Mud_Fast_OPEN_SoundSet",
				"Lsv_02_Tires_Asphalt_Fast_OPEN_SoundSet",
				"Lsv_02_Tires_Water_Fast_OPEN_SoundSet",
				"Lsv_02_Tires_Rock_Slow_OPEN_SoundSet",
				"Lsv_02_Tires_Grass_Slow_OPEN_SoundSet",
				"Lsv_02_Tires_Sand_Slow_OPEN_SoundSet",
				"Lsv_02_Tires_Gravel_Slow_OPEN_SoundSet",
				"Lsv_02_Tires_Mud_Slow_OPEN_SoundSet",
				"Lsv_02_Tires_Asphalt_Slow_OPEN_SoundSet",
				"Lsv_02_Tires_Water_Slow_OPEN_SoundSet",
				"Lsv_02_Tires_Turn_Hard_OPEN_SoundSet",
				"Lsv_02_Tires_Turn_Soft_OPEN_SoundSet",
				"Lsv_02_Tires_Brake_Hard_OPEN_SoundSet",
				"Lsv_02_Tires_Brake_Soft_OPEN_SoundSet",
				"Tires_Movement_Dirt_Int_01_SoundSet"
			};
			soundSetsExt[]=
			{
				"Lsv_02_Engine_RPM0_EXT_SoundSet",
				"Lsv_02_Engine_RPM1_EXT_SoundSet",
				"Lsv_02_Engine_RPM2_EXT_SoundSet",
				"Lsv_02_Engine_RPM3_EXT_SoundSet",
				"Lsv_02_Rattling_EXT_SoundSet",
				"Lsv_02_Stress_EXT_SoundSet",
				"Lsv_02_Rain_EXT_SoundSet",
				"Lsv_02_Tires_Rock_Fast_EXT_SoundSet",
				"Lsv_02_Tires_Grass_Fast_EXT_SoundSet",
				"Lsv_02_Tires_Sand_Fast_EXT_SoundSet",
				"Lsv_02_Tires_Gravel_Fast_EXT_SoundSet",
				"Lsv_02_Tires_Mud_Fast_EXT_SoundSet",
				"Lsv_02_Tires_Asphalt_Fast_EXT_SoundSet",
				"Lsv_02_Tires_Water_Fast_EXT_SoundSet",
				"Lsv_02_Tires_Rock_Slow_EXT_SoundSet",
				"Lsv_02_Tires_Grass_Slow_EXT_SoundSet",
				"Lsv_02_Tires_Sand_Slow_EXT_SoundSet",
				"Lsv_02_Tires_Gravel_Slow_EXT_SoundSet",
				"Lsv_02_Tires_Mud_Slow_EXT_SoundSet",
				"Lsv_02_Tires_Asphalt_Slow_EXT_SoundSet",
				"Lsv_02_Tires_Water_Slow_EXT_SoundSet",
				"Lsv_02_Tires_Turn_Hard_EXT_SoundSet",
				"Lsv_02_Tires_Turn_Soft_EXT_SoundSet",
				"Lsv_02_Tires_Brake_Hard_EXT_SoundSet",
				"Lsv_02_Tires_Brake_Soft_EXT_SoundSet",
				"Tires_Movement_Dirt_Ext_01_SoundSet"
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
			class CargoTurret_01;
			class CargoTurret_02;
			class CargoTurret_03;
			class CargoTurret_04;
			class CargoTurret_05;
		};
		class AnimationSources: AnimationSources
		{
			class Unarmed_Doors_Hide;
		};
	};
	class LSV_02_armed762_base_F: LSV_02_base_F
	{
		author="O&T Expansion Eden";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_vehicle_armedcar_s"
				};
				speechPlural[]=
				{
					"veh_vehicle_armedcar_p"
				};
			};
		};
		textSingular="$STR_A3_nameSound_veh_vehicle_armedcar_s";
		textPlural="$STR_A3_nameSound_veh_vehicle_armedcar_p";
		nameSound="veh_vehicle_armedcar_s";
		_generalMacro="LSV_02_armed762_base_F";
		scope=0;
		scopeCurator=0;
		displayName="$STR_Globe_CfgVehicles_LSV_02_armed762_base_F0";
		overviewPicture="\A3\Data_F_Exp\Images\VehicleQilin_ca.paa";
		cost=300000;
		memoryPointTaskMarker="TaskMarker_2_pos";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				disableSoundAttenuation=1;
				gunnerLeftHandAnimName="otocHlaven";
				gunnerRightHandAnimName="otocHlaven";
				gunnerLeftLegAnimName="OtocVez";
				gunnerRightLegAnimName="OtocVez";
				body="mainTurret";
				gun="mainGun";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				weapons[]=
				{
					"M134_minigun_LSV_02_Globe"
				};
				magazines[]=
				{
					"400Rnd_762x51_Belt_Tracer_Green_Splash",
					"400Rnd_762x51_Belt_Tracer_Green_Splash",
					"400Rnd_762x51_Belt_Tracer_Green_Splash",
					"400Rnd_762x51_Belt_Tracer_Green_Splash"
				};
				minElev=-10;
				maxElev=40;
				soundServo[]=
				{
					"A3\sounds_f\dummysound",
					9.9999977e-007,
					1
				};
				gunnerAction="gunner_lsv_02";
				gunnerCompartments="Compartment1";
				ejectDeadGunner=0;
				castGunnerShadow=1;
				stabilizedInAxes=0;
				gunBeg="muzzle_beg";
				gunEnd="muzzle_end";
				memoryPointGunnerOptics="Eye";
				optics=0;
				gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Transport_01_Optics_Gunner_F";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				class ViewOptics: ViewOptics
				{
					minFov=0.25;
					maxFov=1.25;
					initFov=0.75;
				};
				class ViewGunner: ViewGunner
				{
				};
				commanding=-2;
				primaryGunner=1;
			};
			class CargoTurret_01: CargoTurret_01
			{
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
			class CargoTurret_04: CargoTurret_04
			{
			};
			class CargoTurret_05: CargoTurret_05
			{
			};
		};
		class AnimationSources: AnimationSources
		{
			class Unarmed_Doors_Hide
			{
				initPhase=1;
			};
		};
	};
	class O_LSV_02_armed762: LSV_02_armed762_base_F
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"damagehide",
					0
				},
				
				{
					"damagehidevez",
					0
				},
				
				{
					"damagehidehlaven",
					0
				},
				
				{
					"wheel_1_1_destruct",
					0
				},
				
				{
					"wheel_1_2_destruct",
					0
				},
				
				{
					"wheel_1_3_destruct",
					0
				},
				
				{
					"wheel_1_4_destruct",
					0
				},
				
				{
					"wheel_2_1_destruct",
					0
				},
				
				{
					"wheel_2_2_destruct",
					0
				},
				
				{
					"wheel_2_3_destruct",
					0
				},
				
				{
					"wheel_2_4_destruct",
					0
				},
				
				{
					"wheel_1_1_destruct_unhide",
					0
				},
				
				{
					"wheel_1_2_destruct_unhide",
					0
				},
				
				{
					"wheel_1_3_destruct_unhide",
					0
				},
				
				{
					"wheel_1_4_destruct_unhide",
					0
				},
				
				{
					"wheel_2_1_destruct_unhide",
					0
				},
				
				{
					"wheel_2_2_destruct_unhide",
					0
				},
				
				{
					"wheel_2_3_destruct_unhide",
					0
				},
				
				{
					"wheel_2_4_destruct_unhide",
					0
				},
				
				{
					"wheel_1_3_damage",
					0
				},
				
				{
					"wheel_1_4_damage",
					0
				},
				
				{
					"wheel_2_3_damage",
					0
				},
				
				{
					"wheel_2_4_damage",
					0
				},
				
				{
					"wheel_1_3_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_4_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_3_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_4_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_1",
					0
				},
				
				{
					"wheel_2_1",
					0
				},
				
				{
					"wheel_1_2",
					0
				},
				
				{
					"wheel_2_2",
					0
				},
				
				{
					"daylights",
					0
				},
				
				{
					"reverse_light",
					1
				},
				
				{
					"wheel_1_1_damage",
					0
				},
				
				{
					"wheel_1_2_damage",
					0
				},
				
				{
					"wheel_2_1_damage",
					0
				},
				
				{
					"wheel_2_2_damage",
					0
				},
				
				{
					"wheel_1_1_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_2_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_1_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_2_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_1_damper",
					0
				},
				
				{
					"wheel_2_1_damper",
					0
				},
				
				{
					"wheel_1_2_damper",
					0
				},
				
				{
					"wheel_2_2_damper",
					0
				},
				
				{
					"drivingwheel",
					0
				},
				
				{
					"indicatorspeed",
					0
				},
				
				{
					"fuel",
					1
				},
				
				{
					"steering_1_1",
					0
				},
				
				{
					"steering_2_1",
					0
				},
				
				{
					"hidegunner",
					0
				},
				
				{
					"mainturret",
					0
				},
				
				{
					"maingun",
					0
				},
				
				{
					"minigun",
					0.33000001
				},
				
				{
					"maingunner",
					0
				},
				
				{
					"zasleh_rot",
					24
				},
				
				{
					"zasleh_hide",
					0
				},
				
				{
					"opticsfix",
					0
				},
				
				{
					"wheel_1_1_damper_land_hack",
					0
				},
				
				{
					"wheel_1_2_damper_land_hack",
					0
				},
				
				{
					"wheel_2_1_damper_land_hack",
					0
				},
				
				{
					"wheel_2_2_damper_land_hack",
					0
				},
				
				{
					"magazine_reload_hide_1",
					0
				}
			};
			hide[]=
			{
				"clan",
				"zasleh",
				"light_1",
				"light_2",
				"zadni svetlo",
				"brzdove svetlo",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=1.599;
			verticalOffsetWorld=-0.131;
			postinit="[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview="\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_LSV_02_armed_F.jpg";
		_generalMacro="O_LSV_02_armed762";
		scope=2;
		scopeCurator=2;
		side=0;
		faction="OPF_F";
		crew="O_Soldier_F";
		typicalCargo[]=
		{
			"O_Soldier_F"
		};
		textureList[]=
		{
			"Black",
			0.2,
			"GreenHex",
			0.2,
			"Arid",
			0.6
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_arid_CO.paa",
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_arid_CO.paa",
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_arid_CO.paa"
		};
	};
};