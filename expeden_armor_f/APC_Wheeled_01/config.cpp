class CfgPatches
{
	class Armor_Globe_APC_Wheeled_01
	{
		addonRootClass="A3_Armor_F_expEden";
		requiredAddons[]=
		{
			"A3_Armor_F_expEden"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Wheeled_APC_F;
	class APC_Wheeled_01_base_F: Wheeled_APC_F
	{
		class Turrets;
	};
	class B_APC_Wheeled_01_base_F: APC_Wheeled_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class B_APC_Wheeled_01_cannon_Airburst_G: B_APC_Wheeled_01_base_F
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
					"wheel_1_3",
					0
				},
				
				{
					"wheel_2_2",
					0
				},
				
				{
					"wheel_2_3",
					0
				},
				
				{
					"wheel_1_4",
					0
				},
				
				{
					"wheel_2_4",
					0
				},
				
				{
					"daylights",
					0
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
					"wheel_1_3_damage",
					0
				},
				
				{
					"wheel_1_4_damage",
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
					"wheel_2_3_damage",
					0
				},
				
				{
					"wheel_2_4_damage",
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
					"wheel_1_3_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_4_damper_damage_backanim",
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
					"wheel_2_3_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_4_damper_damage_backanim",
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
					"wheel_1_3_damper",
					0
				},
				
				{
					"wheel_2_2_damper",
					0
				},
				
				{
					"wheel_2_3_damper",
					0
				},
				
				{
					"wheel_1_4_damper",
					0
				},
				
				{
					"wheel_2_4_damper",
					0
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
					"steering_1_2",
					0
				},
				
				{
					"steering_2_2",
					0
				},
				
				{
					"hatchdriver",
					0
				},
				
				{
					"mainturret",
					0
				},
				
				{
					"turretbase",
					0
				},
				
				{
					"maingun",
					0
				},
				
				{
					"obsturret",
					0
				},
				
				{
					"obsgun",
					0
				},
				
				{
					"damagehlaven",
					0
				},
				
				{
					"damagecamonet",
					0
				},
				
				{
					"vrtulea",
					0
				},
				
				{
					"vrtuleb",
					0
				},
				
				{
					"poklop_gunner",
					0
				},
				
				{
					"poklop_commander",
					0
				},
				
				{
					"zasleh_rot",
					683
				},
				
				{
					"zasleh2_rot",
					33.919998
				},
				
				{
					"zasleh_hide",
					0
				},
				
				{
					"reverse_light",
					1
				},
				
				{
					"drivingwheel",
					0
				},
				
				{
					"indicatortempoil",
					0
				},
				
				{
					"indicatortempwater",
					0
				},
				
				{
					"indicatorammeter",
					0
				},
				
				{
					"indicatorammeter_turret",
					0
				},
				
				{
					"indicatorspeed_mfd_driver",
					0
				},
				
				{
					"indicatorrpm",
					0
				},
				
				{
					"indicatorrpm_mfd_driver",
					0
				},
				
				{
					"lights_driver",
					0
				},
				
				{
					"lights_driver_off",
					0
				},
				
				{
					"lights_turret",
					0
				},
				
				{
					"lights_turret_off",
					0
				},
				
				{
					"cannon_ready_light",
					1
				},
				
				{
					"engine_damage_indicator",
					0
				},
				
				{
					"main_gun_damage_indicator",
					0
				},
				
				{
					"pedal_thrust",
					0
				},
				
				{
					"pedal_brake",
					0
				},
				
				{
					"turret_control_x",
					0
				},
				
				{
					"turret_control_y",
					0
				},
				
				{
					"com_turret_control_x",
					0
				},
				
				{
					"com_turret_control_y",
					0
				},
				
				{
					"driver_reverse_cam",
					1
				},
				
				{
					"driver_reverse_cam_nopip",
					1
				},
				
				{
					"driver_hide_mfd",
					1
				},
				
				{
					"indicatortempwater_mfd_driver",
					0
				},
				
				{
					"indicatorfuel_mfd_driver",
					1
				},
				
				{
					"indicator_hull_direction_mfd_driver",
					0
				},
				
				{
					"indicator_main_turret_mfd_driver",
					0
				},
				
				{
					"indicator_com_turret_mfd_driver",
					0
				},
				
				{
					"indicator_com_turret_counter_mfd_driver",
					0
				},
				
				{
					"indicator_main_turret_mfd_com",
					0
				},
				
				{
					"indicator_main_turret_onscreen_com",
					0
				},
				
				{
					"indicator_com_turret_mfd_com",
					0
				},
				
				{
					"indicator_com_turret_onscreen_com",
					0
				},
				
				{
					"indicator_hull_direction_mfd_gunner",
					0
				},
				
				{
					"indicator_main_turret_mfd_gunner",
					0
				},
				
				{
					"indicator_com_turret_mfd_gunner",
					0
				},
				
				{
					"indicator_damage_engine",
					0
				},
				
				{
					"indicator_damage_fuel",
					0
				},
				
				{
					"indicator_damage_wheels",
					0
				},
				
				{
					"indicator_turret_damage_hull",
					0
				},
				
				{
					"indicator_turret_damage_engine",
					0
				},
				
				{
					"indicator_turret_damage_fuel",
					0
				},
				
				{
					"indicator_turret_damage_main_gun",
					0
				},
				
				{
					"indicator_turret_damage_wheels",
					0
				},
				
				{
					"indicator_turret_damage_turret",
					0
				},
				
				{
					"hide_mfd_and_pip_screen_driver",
					1
				},
				
				{
					"hide_mfd_and_pip_screen_gunner",
					1
				},
				
				{
					"hide_mfd_elements",
					1
				},
				
				{
					"showbags_damage",
					0
				},
				
				{
					"slat_front_normal_hide",
					0
				},
				
				{
					"slat_front_damage_unhide",
					0
				},
				
				{
					"slat_front_damage_hide",
					0
				},
				
				{
					"slat_front_destroyed_unhide",
					0
				},
				
				{
					"slat_front_firegeo_hide",
					0
				},
				
				{
					"slat_back_normal_hide",
					0
				},
				
				{
					"slat_back_damage_unhide",
					0
				},
				
				{
					"slat_back_damage_hide",
					0
				},
				
				{
					"slat_back_destroyed_unhide",
					0
				},
				
				{
					"slat_back_firegeo_hide",
					0
				},
				
				{
					"slat_left_1_normal_hide",
					0
				},
				
				{
					"slat_left_1_damage_unhide",
					0
				},
				
				{
					"slat_left_1_damage_hide",
					0
				},
				
				{
					"slat_left_1_destroyed_unhide",
					0
				},
				
				{
					"slat_left_1_firegeo_hide",
					0
				},
				
				{
					"slat_left_2_normal_hide",
					0
				},
				
				{
					"slat_left_2_damage_unhide",
					0
				},
				
				{
					"slat_left_2_damage_hide",
					0
				},
				
				{
					"slat_left_2_destroyed_unhide",
					0
				},
				
				{
					"slat_left_2_firegeo_hide",
					0
				},
				
				{
					"slat_left_3_normal_hide",
					0
				},
				
				{
					"slat_left_3_damage_unhide",
					0
				},
				
				{
					"slat_left_3_damage_hide",
					0
				},
				
				{
					"slat_left_3_destroyed_unhide",
					0
				},
				
				{
					"slat_left_3_firegeo_hide",
					0
				},
				
				{
					"slat_right_1_normal_hide",
					0
				},
				
				{
					"slat_right_1_damage_unhide",
					0
				},
				
				{
					"slat_right_1_damage_hide",
					0
				},
				
				{
					"slat_right_1_destroyed_unhide",
					0
				},
				
				{
					"slat_right_1_firegeo_hide",
					0
				},
				
				{
					"slat_right_2_normal_hide",
					0
				},
				
				{
					"slat_right_2_damage_unhide",
					0
				},
				
				{
					"slat_right_2_damage_hide",
					0
				},
				
				{
					"slat_right_2_destroyed_unhide",
					0
				},
				
				{
					"slat_right_2_firegeo_hide",
					0
				},
				
				{
					"slat_right_3_normal_hide",
					0
				},
				
				{
					"slat_right_3_damage_unhide",
					0
				},
				
				{
					"slat_right_3_damage_hide",
					0
				},
				
				{
					"slat_right_3_destroyed_unhide",
					0
				},
				
				{
					"slat_right_3_firegeo_hide",
					0
				},
				
				{
					"slat_top_back_normal_hide",
					0
				},
				
				{
					"slat_top_back_damage_unhide",
					0
				},
				
				{
					"slat_top_back_damage_hide",
					0
				},
				
				{
					"slat_top_back_destroyed_unhide",
					0
				},
				
				{
					"slat_top_back_firegeo_hide",
					0
				},
				
				{
					"slat_top_right_normal_hide",
					0
				},
				
				{
					"slat_top_right_damage_unhide",
					0
				},
				
				{
					"slat_top_right_damage_hide",
					0
				},
				
				{
					"slat_top_right_destroyed_unhide",
					0
				},
				
				{
					"slat_top_right_firegeo_hide",
					0
				},
				
				{
					"slat_top_left_normal_hide",
					0
				},
				
				{
					"slat_top_left_damage_unhide",
					0
				},
				
				{
					"slat_top_left_damage_hide",
					0
				},
				
				{
					"slat_top_left_destroyed_unhide",
					0
				},
				
				{
					"slat_top_left_firegeo_hide",
					0
				}
			};
			hide[]=
			{
				"clan",
				"zasleh2",
				"zasleh_1",
				"light_l",
				"light_r",
				"light_r2",
				"light_l2",
				"zadni svetlo",
				"brzdove svetlo",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=2.4419999;
			verticalOffsetWorld=-0.097999997;
			postinit="[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\B_APC_Wheeled_01_cannon_F.jpg";
		_generalMacro="B_APC_Wheeled_01_cannon_Airburst_G";
		scope=2;
		accuracy=0.30000001;
		displayName="$STR_Globe_CfgVehicles_B_APC_Wheeled_01_cannon_Airburst_G0";
		class Library
		{
			libTextDesc="123321123";
		};
		model="\A3\Armor_F_Beta\APC_Wheeled_01\APC_Wheeled_01_cannon_F.p3d";
		picture="\A3\armor_f_beta\APC_Wheeled_01\Data\UI\APC_Wheeled_01_ACRV_ca.paa";
		Icon="\A3\armor_f_beta\APC_Wheeled_01\Data\UI\map_amw_CA.paa";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"autocannon_40mm_CTWS",
					"LMG_coax"
				};
				magazines[]=
				{
					"60Rnd_40mm_HE_Airburst_01_G_shells",
					"60Rnd_40mm_HE_Airburst_01_G_shells",
					"60Rnd_40mm_HE_Airburst_01_G_shells",
					"60Rnd_40mm_HE_Airburst_01_G_shells",
					"60Rnd_40mm_HE_Airburst_01_G_shells",
					"60Rnd_40mm_GPR_Tracer_Red_shells",
					"40Rnd_40mm_APFSDS_Tracer_Red_shells",
					"40Rnd_40mm_APFSDS_Tracer_Red_shells",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red"
				};
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",
					0.56234133,
					1,
					30
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",
					0.56234133,
					1,
					30
				};
			};
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"CamoNet",
			"CamoSlat"
		};
		hiddenSelectionsTextures[]=
		{
			"a3\armor_f_beta\APC_Wheeled_01\data\APC_Wheeled_01_base_co.paa",
			"a3\armor_f_beta\APC_Wheeled_01\data\APC_Wheeled_01_adds_co.paa",
			"a3\armor_f_beta\APC_Wheeled_01\data\APC_Wheeled_01_tows_co.paa",
			"a3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
			"a3\Armor_F\Data\cage_sand_CO.paa"
		};
	};
};