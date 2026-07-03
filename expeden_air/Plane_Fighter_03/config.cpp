class CfgPatches
{
	class Air_Globe_Plane_Fighter_03
	{
		addonRootClass="Air_Globe";
		requiredAddons[]=
		{
			"Air_Globe"
		};
		requiredVersion=0.1;
		units[]=
		{
			"O_Plane_Fighter_03_cluster",
			"O_Plane_Fighter_03_dynamicLoadout"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Plane_Fighter_03_base_F;
	class Plane_Fighter_03_dynamicLoadout_base_F: Plane_Fighter_03_base_F
	{
		class Components;
		class MFD;
	};
	class O_Plane_Fighter_03_dynamicLoadout: Plane_Fighter_03_dynamicLoadout_base_F
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
					"stick_pilot_bank",
					0
				},
				
				{
					"stick_pilot_dive",
					0
				},
				
				{
					"rotor",
					0
				},
				
				{
					"flapl",
					0
				},
				
				{
					"flapr",
					0
				},
				
				{
					"airbrake1",
					0
				},
				
				{
					"airbrake2",
					0
				},
				
				{
					"aileronl",
					0
				},
				
				{
					"aileronr",
					0
				},
				
				{
					"elevatorl",
					0
				},
				
				{
					"elevatorr",
					0
				},
				
				{
					"rudder",
					0
				},
				
				{
					"rudder_small",
					0
				},
				
				{
					"canopy1",
					0
				},
				
				{
					"canopy2",
					0
				},
				
				{
					"gear_1",
					0
				},
				
				{
					"gear_1_steering",
					0
				},
				
				{
					"gear_1_steering2",
					0
				},
				
				{
					"gear_1_hatch_1",
					0
				},
				
				{
					"gear_1_hatch_2",
					0
				},
				
				{
					"gear_1_damper",
					0
				},
				
				{
					"gear_1_stabil_1",
					0
				},
				
				{
					"gear_2",
					0
				},
				
				{
					"gear_2_hatch",
					0
				},
				
				{
					"gear_2_damper",
					0
				},
				
				{
					"gear_2_stabil",
					0
				},
				
				{
					"gear_3",
					0
				},
				
				{
					"gear_3_hatch",
					0
				},
				
				{
					"gear_3_damper",
					0
				},
				
				{
					"gear_3_stabil",
					0
				},
				
				{
					"ladder_1",
					0
				},
				
				{
					"ladder",
					0
				},
				
				{
					"wheel_1",
					0
				},
				
				{
					"wheel_2",
					0
				},
				
				{
					"wheel_3",
					0
				},
				
				{
					"indicatorrpm",
					0
				},
				
				{
					"indicatorrpm1",
					0
				},
				
				{
					"indicatorrpm2",
					0
				},
				
				{
					"indicatorrpm3",
					0
				},
				
				{
					"indicatorrpm4",
					0
				},
				
				{
					"indicatorrpm5",
					0
				},
				
				{
					"indicatorrpm6",
					0
				},
				
				{
					"indicatorrpm7",
					0
				},
				
				{
					"indicatorrpm8",
					0
				},
				
				{
					"indicatorcompass1",
					0
				},
				
				{
					"indicatorcompass2",
					0
				},
				
				{
					"horizontbank",
					0
				},
				
				{
					"horizontdive",
					0.02
				},
				
				{
					"horizon2bank",
					0
				},
				
				{
					"watchhour",
					0.2
				},
				
				{
					"watchminute",
					0.41
				},
				
				{
					"watchsecond",
					0.80000001
				},
				
				{
					"indicatorclimbplus_1",
					0
				},
				
				{
					"indicatorclimbplus_2",
					0
				},
				
				{
					"indicatorclimbplus_3",
					0
				},
				
				{
					"indicatorclimbminus_1",
					0
				},
				
				{
					"indicatorclimbminus_2",
					0
				},
				
				{
					"indicatorclimbminus_3",
					0
				},
				
				{
					"indicatorspeed_1_5",
					0
				},
				
				{
					"indicatorspeed_2_5",
					0
				},
				
				{
					"indicatorspeed_3_5",
					0
				},
				
				{
					"indicatorspeed_4_5",
					0
				},
				
				{
					"indicatorspeed_5_5",
					0
				},
				
				{
					"indicatorfuel",
					1
				},
				
				{
					"monitors_on",
					0
				},
				
				{
					"avionics_damage",
					0
				},
				
				{
					"indicatoraltbaro",
					7.4200001
				},
				
				{
					"zaslehrot",
					337
				},
				
				{
					"positionlights",
					0
				},
				
				{
					"collisionlight_red_blinking",
					0
				},
				
				{
					"collisionlight_white_blinking",
					0
				},
				
				{
					"pilotcamera_h",
					0
				},
				
				{
					"pilotcamera_v",
					0.090000004
				},
				
				{
					"throttle",
					0
				}
			};
			hide[]=
			{
				"zasleh",
				"light_l",
				"light_r",
				"zadni svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=2.431;
			verticalOffsetWorld=0.0089999996;
			init="[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\O_Plane_Fighter_03_dynamicLoadout.jpg";
		_generalMacro="O_Plane_Fighter_03_dynamicLoadout";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_O_Plane_Fighter_03_dynamicLoadout0";
		side=0;
		faction="OPF_F";
		crew="O_Fighter_Pilot_F";
		typicalCargo[]=
		{
			"O_Fighter_Pilot_F"
		};
		availableForSupportTypes[]=
		{
			"CAS_Bombing"
		};
		hiddenSelectionsTextures[]=
		{
			"A3\Air_F_Gamma\Plane_Fighter_03\Data\plane_fighter_03_body_1_brownhex_co.paa",
			"A3\Air_F_Gamma\Plane_Fighter_03\Data\plane_fighter_03_body_2_brownhex_co.paa"
		};
		textureList[]=
		{
			"Hex",
			0.5,
			"Grey",
			0.5
		};
		soundLocked[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_1",
			0.31622776,
			1
		};
		soundIncommingMissile[]=
		{
			"\A3\Sounds_F\vehicles\air\noises\alarm_locked_by_missile_4",
			0.39810717,
			1
		};
		class AirplaneHUD;
		class MFD: MFD
		{
			class AirplaneHUD: AirplaneHUD
			{
				color[]={0,1,0,0.1};
			};
		};
		clutchStrength=100;
		dampingRateFullThrottle=0.40000001;
		maxSpeed=850;
		forceInGarage=1;
		class Components: Components
		{
			class TransportPylonsComponent
			{
				uiPicture="\A3\Air_F_Gamma\Plane_Fighter_03\Data\UI\Plane_A143_3DEN_CA.paa";
				class Pylons
				{
					class Pylons1
					{
						hardpoints[]=
						{
							"O_R73"
						};
						attachment="PylonMissile_Missile_AA_R73_x1";
						priority=2;
						maxweight=300;
						UIposition[]={0.34999999,0.079999998};
					};
					class Pylons2: Pylons1
					{
						hardpoints[]=
						{
							"O_R77",
							"O_R73",
							"20MM_TWIN_CANNON",
							"30MM_TWIN_CANNON",
							"O_MISSILE_PYLON",
							"O_BOMB_PYLON",
							"O_KAB250_BOMB"
						};
						priority=1;
						attachment="PylonRack_20Rnd_Rocket_03_AP_F";
						maxweight=1150;
						UIposition[]={0.345,0.13};
					};
					class Pylons3: Pylons1
					{
						hardpoints[]=
						{
							"O_R77",
							"O_R73",
							"20MM_TWIN_CANNON",
							"30MM_TWIN_CANNON",
							"O_MISSILE_PYLON",
							"O_BOMB_PYLON",
							"O_KAB250_BOMB"
						};
						priority=1;
						attachment="PylonMissile_Bomb_KAB250_x1";
						maxweight=1150;
						UIposition[]={0.34,0.18000001};
					};
					class Pylons4: Pylons1
					{
						priority=3;
						attachment="PylonWeapon_260Rnd_30mmMP_shells";
						maxweight=300;
						UIposition[]={0.27000001,0.28};
						hardpoints[]=
						{
							"O_A143_BUZZARD_CENTER_PYLON",
							"30MM_TWIN_CANNON"
						};
					};
					class Pylons5: Pylons3
					{
						UIposition[]={0.33000001,0.38};
						mirroredMissilePos=3;
					};
					class Pylons6: Pylons2
					{
						UIposition[]={0.33000001,0.43000001};
						mirroredMissilePos=2;
					};
					class Pylons7: Pylons1
					{
						UIposition[]={0.34,0.47999999};
						mirroredMissilePos=1;
					};
				};
				class Presets
				{
					class Empty
					{
						displayName="$STR_empty";
						attachment[]={};
					};
					class AA
					{
						displayName="$STR_A3_cfgmagazines_titan_aa_dns";
						attachment[]=
						{
							"PylonMissile_Missile_AA_R73_x1",
							"PylonMissile_Missile_AA_R77_x1",
							"PylonMissile_Missile_AA_R77_x1",
							"PylonWeapon_260Rnd_30mmHE_shells",
							"PylonMissile_Missile_AA_R77_x1",
							"PylonMissile_Missile_AA_R77_x1",
							"PylonMissile_Missile_AA_R73_x1"
						};
					};
					class AT
					{
						displayName="$STR_A3_cfgmagazines_titan_at_dns";
						attachment[]=
						{
							"PylonMissile_Missile_AA_R73_x1",
							"PylonRack_1Rnd_Missile_AGM_01_F",
							"PylonRack_1Rnd_Missile_AGM_01_F",
							"PylonWeapon_260Rnd_30mmAPFSDS_shells",
							"PylonRack_1Rnd_Missile_AGM_01_F",
							"PylonRack_1Rnd_Missile_AGM_01_F",
							"PylonMissile_Missile_AA_R73_x1"
						};
					};
					class CAS
					{
						displayName="$STR_A3_CAS_PRESET_DISPLAYNAME";
						attachment[]=
						{
							"PylonMissile_Missile_AA_R73_x1",
							"PylonRack_20Rnd_Rocket_03_AP_F",
							"PylonMissile_Bomb_KAB250_x1",
							"PylonWeapon_260Rnd_30mmMP_shells",
							"PylonMissile_Bomb_KAB250_x1",
							"PylonRack_20Rnd_Rocket_03_HE_F",
							"PylonMissile_Missile_AA_R73_x1"
						};
					};
					class Cluster
					{
						displayName="$STR_A3_CfgVehicles_Pylons_Presets_Cluster0";
						attachment[]=
						{
							"PylonMissile_Missile_AA_R73_x1",
							"PylonMissile_1Rnd_BombCluster_02_cap_F",
							"PylonMissile_1Rnd_BombCluster_02_cap_F",
							"PylonWeapon_260Rnd_30mmMP_shells",
							"PylonMissile_1Rnd_BombCluster_02_cap_F",
							"PylonMissile_1Rnd_BombCluster_02_cap_F",
							"PylonMissile_Missile_AA_R73_x1"
						};
					};
				};
			};
		};
	};
	class O_Plane_Fighter_03_cluster: O_Plane_Fighter_03_dynamicLoadout
	{
		scope=1;
		scopeCurator=2;
		forceInGarage=0;
		displayName="$STR_Globe_CfgVehicles_O_Plane_Fighter_03_cluster0";
		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: Pylons
				{
					class Pylons1: Pylons1
					{
					};
					class Pylons2: Pylons2
					{
						attachment="PylonMissile_1Rnd_BombCluster_02_cap_F";
					};
					class Pylons3: Pylons3
					{
						attachment="PylonMissile_1Rnd_BombCluster_02_cap_F";
					};
					class Pylons4: Pylons4
					{
					};
					class Pylons5: Pylons5
					{
						attachment="PylonMissile_1Rnd_BombCluster_02_cap_F";
					};
					class Pylons6: Pylons6
					{
						attachment="PylonMissile_1Rnd_BombCluster_02_cap_F";
					};
					class Pylons7: Pylons7
					{
					};
				};
			};
		};
	};
};
