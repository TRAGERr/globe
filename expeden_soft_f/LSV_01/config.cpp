class CfgPatches
{
	class Soft_Globe_LSV_01
	{
		addonRootClass="A3_Soft_F_expEden";
		requiredAddons[]=
		{
			"A3_Soft_F_expEden"
		};
		requiredVersion=0.1;
		units[]=
		{
			"B_LSV_01_armed_G_noMMG",
			"B_LSV_01_armed_G_noMMG_noBoxes",
			"B_LSV_01_AT_G_noMMG",
			"B_LSV_01_AT_G_noMMG_noBoxes",
			"B_LSV_01_unarmed_G_boxes",
			"B_LSV_01_unarmed_G_MMG_boxes",
			"B_LSV_01_unarmed_G_MMG_noBoxes"
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
		class AnimationSources;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class ViewGunner;
			};
		};
	};
	class LSV_01_base_F: Car_F
	{
		class Turrets: Turrets
		{
			class CargoTurret_02;
			class CargoTurret_03;
		};
		class AnimationSources: AnimationSources
		{
			class Unarmed_Main_Turret_Hide;
			class Unarmed_Codriver_Turret_Hide;
			class Unarmed_Ammo_Hide;
			class Unarmed_Rear_Cage_Hide
			{
				displayName="$STR_A3_animationSources_hideRollCage0";
				author="O&T Expansion Eden";
				scope=2;
				source="Proxy";
				initPhase=0;
				forceAnimatePhase=0;
				forceAnimate[]={};
			};
		};
		class TextureSources
		{
			class Black;
			class Olive;
			class Sand;
			class Dazzle;
		};
	};
	class LSV_01_AT_base_F: LSV_01_base_F
	{
		class AnimationSources: AnimationSources
		{
			class TitanMuzzle_rot
			{
				source="ammorandom";
				weapon="missiles_titan_static";
			};
			class TitanMuzzle_reload
			{
				source="reload";
				weapon="missiles_titan_static";
			};
			class TitanMuzzle_revolving
			{
				source="revolving";
				weapon="missiles_titan_static";
			};
			class TitanMuzzle_reloadMagazine
			{
				source="reloadMagazine";
				weapon="missiles_titan_static";
			};
		};
		class Turrets: Turrets
		{
			class TopTurret: MainTurret
			{
				class ViewOptics: ViewOptics
				{
				};
				class viewGunner: ViewGunner
				{
				};
			};
			class CodRiverTurret: MainTurret
			{
				class ViewOptics: ViewOptics
				{
				};
				class ViewGunner: ViewOptics
				{
				};
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
		};
		class TextureSources: TextureSources
		{
			class Black: Black
			{
			};
			class Olive: Olive
			{
			};
			class Sand: Sand
			{
			};
			class Dazzle: Dazzle
			{
			};
		};
	};
	class LSV_01_unarmed_base_F: LSV_01_base_F
	{
		class AnimationSources: AnimationSources
		{
		};
		class Turrets: Turrets
		{
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
			class CargoTurret_01: CargoTurret_02
			{
			};
			class CargoTurret_04: CargoTurret_02
			{
			};
			class CargoTurret_05: CargoTurret_02
			{
			};
			class CargoTurret_06: CargoTurret_01
			{
			};
		};
		class TextureSources: TextureSources
		{
			class Black: Black
			{
			};
			class Olive: Olive
			{
			};
			class Sand: Sand
			{
			};
			class Dazzle: Dazzle
			{
			};
		};
	};
	class LSV_01_armed_base_F: LSV_01_base_F
	{
		class Turrets: Turrets
		{
			class TopTurret: MainTurret
			{
				class ViewOptics: ViewOptics
				{
				};
				class ViewGunner: ViewGunner
				{
				};
			};
			class CodRiverTurret: MainTurret
			{
				class ViewOptics: ViewOptics
				{
				};
				class ViewGunner: ViewGunner
				{
				};
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
		};
		class TextureSources: TextureSources
		{
			class Black: Black
			{
			};
			class Olive: Olive
			{
			};
			class Sand: Sand
			{
			};
			class Dazzle: Dazzle
			{
			};
		};
	};

	class B_LSV_01_armed_G_noMMG: LSV_01_armed_base_F
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
					"steeringwheel",
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
					"unarmed_codriver_turret_damage_hide",
					0
				},
				
				{
					"hidedoor1",
					0
				},
				
				{
					"hidedoor2",
					0
				},
				
				{
					"hidedoor3",
					0
				},
				
				{
					"hidedoor4",
					0
				},
				
				{
					"hidegunner",
					0
				},
				
				{
					"displayunhide",
					0
				},
				
				{
					"rpmunhide",
					0
				},
				
				{
					"mphunhide",
					0
				},
				
				{
					"indicatorspeed",
					0
				},
				
				{
					"indicatorrpm",
					0
				},
				
				{
					"indicatorrpm_part2",
					0
				},
				
				{
					"indicatorrpm2",
					0
				},
				
				{
					"indicatorrpm2_part2",
					0
				},
				
				{
					"fuel",
					1
				},
				
				{
					"indicatortemp",
					0
				},
				
				{
					"indicatortemp_move",
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
					"mainmuzzleflashrotation",
					230
				},
				
				{
					"mainmuzzleflashhide",
					0
				},
				
				{
					"maingunshake",
					0
				},
				
				{
					"maingunshake_back",
					0
				},
				
				{
					"codriverturret",
					0
				},
				
				{
					"codrivergun",
					0
				},
				
				{
					"codrivermuzzleflashrotation",
					499
				},
				
				{
					"codrivermuzzleflashhide",
					0
				},
				
				{
					"codrivergunshake",
					0
				},
				
				{
					"codrivergunshake_eye",
					0
				},
				
				{
					"codrivergunshake_back",
					0
				},
				
				{
					"codrivergunshake_eye_back",
					0
				},
				
				{
					"codriverfeedtray_cover_up",
					0
				},
				
				{
					"codrivermagazine_hide",
					0
				},
				
				{
					"codriverammobelt_hide",
					0
				},
				
				{
					"codriverfeedtray_cover_down",
					0
				},
				
				{
					"codriverbullet001",
					1
				},
				
				{
					"codriverbullet002",
					1
				},
				
				{
					"codriverbullet003",
					1
				},
				
				{
					"codriverbullet004",
					1
				},
				
				{
					"codriverbullet005",
					1
				},
				
				{
					"codriverammo_belt_rotation_prep",
					0
				},
				
				{
					"codriverammo_belt_rotation_main",
					0
				},
				
				{
					"maingunmagazine_hide",
					0
				},
				
				{
					"maingunammobelt_hide",
					0
				},
				
				{
					"topgunnerbullet01",
					1
				},
				
				{
					"topgunnerbullet02",
					1
				},
				
				{
					"topgunnerbullet03",
					1
				},
				
				{
					"topgunnerbullet04",
					1
				},
				
				{
					"topgunnerbullet05",
					1
				},
				
				{
					"topgunnerbullet06",
					1
				},
				
				{
					"topgunnerbullet07",
					1
				},
				
				{
					"topgunnerbullet08",
					1
				},
				
				{
					"maingunammo_belt_prep",
					0
				},
				
				{
					"maingunammo_belt_main",
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
				"light_1_hide",
				"light_2_hide",
				"zadni svetlo",
				"brzdove svetlo",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=2.0599999;
			verticalOffsetWorld=-0.116;
			postinit="[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview="\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_LSV_01_armed_F.jpg";
		_generalMacro="B_LSV_01_armed_G_noMMG";
		displayName="$STR_Globe_CfgVehicles_B_LSV_01_armed_G_noMMG0";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="BLU_F";
		crew="B_Soldier_F";
		typicalCargo[]=
		{
			"B_Soldier_F"
		};
		class TextureSources: TextureSources
		{
			class Black: Black
			{
				factions[]={};
			};
			class Olive: Olive
			{
				factions[]={};
			};
			class Sand: Sand
			{
				factions[]={};
			};
			class Dazzle: Dazzle
			{
				factions[]={};
			};
		};
		textureList[]=
		{
			"Black",
			0,
			"Olive",
			0,
			"Sand",
			1,
			"Dazzle",
			0
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_sand_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"
		};
		animationList[]=
		{
			"Unarmed_Main_Turret_Hide",
			0,
			"Unarmed_Codriver_Turret_Hide",
			1,
			"Unarmed_Ammo_Hide",
			0
		};
		class AnimationSources: AnimationSources
		{
			class Unarmed_Codriver_Turret_Hide: Unarmed_Codriver_Turret_Hide
			{
				initPhase=1;
			};
		};
		cargoAction[]=
		{
			"passenger_low01"
		};
		cargoIsCoDriver[]={1,0};
		cargoProxyIndexes[]={};
		getInProxyOrder[]={1,2,3};
		class Turrets: Turrets
		{
			class TopTurret: MainTurret
			{
				disableSoundAttenuation=1;
				gunnerLeftHandAnimName="otocHlaven";
				gunnerRightHandAnimName="otocHlaven";
				body="mainTurret";
				gun="mainGun";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				weapons[]=
				{
					"HMG_127_LSV_01"
				};
				magazines[]=
				{
					"100Rnd_127x99_mag_Tracer_Red",
					"100Rnd_127x99_mag_Tracer_Red",
					"100Rnd_127x99_mag_Tracer_Red"
				};
				minElev=-10;
				maxElev=40;
				soundServo[]=
				{
					"A3\sounds_f\dummysound",
					9.9999977e-007,
					1
				};
				gunnerAction="gunner_lsv_01";
				gunnerCompartments="Compartment1";
				ejectDeadGunner=0;
				castGunnerShadow=1;
				stabilizedInAxes=0;
				gunBeg="muzzle_beg";
				gunEnd="muzzle_end";
				memoryPointGunnerOptics="gunnerView";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				commanding=-2;
				primaryGunner=1;
				optics=1;
				discreteDistance[]={100,200,300,400,600,800,1000,1200,1500};
				discreteDistanceInitIndex=2;
				turretInfoType="RscOptics_crows";
				gunnerOpticsModel="\a3\weapons_f_gamma\reticle\HMG_01_Optics_Gunner_F";
				class ViewOptics: ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.75;
					minFov=0.25;
					maxFov=1.25;
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
				};
				class ViewGunner: ViewGunner
				{
				};
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_01: CargoTurret_02
			{
				gunnerAction="passenger_inside_7";
				gunnerName="$STR_A3_TURRETS_CARGOTURRET_R1";
				memoryPointsGetInGunner="pos codriver";
				memoryPointsGetInGunnerDir="pos codriver dir";
				proxyIndex=1;
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{16.938801,-14.092},
						{14.6963,58.596901}
					};
					limitsArrayBottom[]=
					{
						{-11.462,-10.8808},
						{-11.7885,19.115101},
						{-9.2362003,31.9144}
					};
				};
				class TurnOut: TurnIn
				{
				};
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
		};
	};
	class B_LSV_01_armed_G_noMMG_noBoxes: LSV_01_armed_base_F
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
					"steeringwheel",
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
					"unarmed_codriver_turret_damage_hide",
					0
				},
				
				{
					"hidedoor1",
					0
				},
				
				{
					"hidedoor2",
					0
				},
				
				{
					"hidedoor3",
					0
				},
				
				{
					"hidedoor4",
					0
				},
				
				{
					"hidegunner",
					0
				},
				
				{
					"displayunhide",
					0
				},
				
				{
					"rpmunhide",
					0
				},
				
				{
					"mphunhide",
					0
				},
				
				{
					"indicatorspeed",
					0
				},
				
				{
					"indicatorrpm",
					0
				},
				
				{
					"indicatorrpm_part2",
					0
				},
				
				{
					"indicatorrpm2",
					0
				},
				
				{
					"indicatorrpm2_part2",
					0
				},
				
				{
					"fuel",
					1
				},
				
				{
					"indicatortemp",
					0
				},
				
				{
					"indicatortemp_move",
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
					"mainmuzzleflashrotation",
					230
				},
				
				{
					"mainmuzzleflashhide",
					0
				},
				
				{
					"maingunshake",
					0
				},
				
				{
					"maingunshake_back",
					0
				},
				
				{
					"codriverturret",
					0
				},
				
				{
					"codrivergun",
					0
				},
				
				{
					"codrivermuzzleflashrotation",
					499
				},
				
				{
					"codrivermuzzleflashhide",
					0
				},
				
				{
					"codrivergunshake",
					0
				},
				
				{
					"codrivergunshake_eye",
					0
				},
				
				{
					"codrivergunshake_back",
					0
				},
				
				{
					"codrivergunshake_eye_back",
					0
				},
				
				{
					"codriverfeedtray_cover_up",
					0
				},
				
				{
					"codrivermagazine_hide",
					0
				},
				
				{
					"codriverammobelt_hide",
					0
				},
				
				{
					"codriverfeedtray_cover_down",
					0
				},
				
				{
					"codriverbullet001",
					1
				},
				
				{
					"codriverbullet002",
					1
				},
				
				{
					"codriverbullet003",
					1
				},
				
				{
					"codriverbullet004",
					1
				},
				
				{
					"codriverbullet005",
					1
				},
				
				{
					"codriverammo_belt_rotation_prep",
					0
				},
				
				{
					"codriverammo_belt_rotation_main",
					0
				},
				
				{
					"maingunmagazine_hide",
					0
				},
				
				{
					"maingunammobelt_hide",
					0
				},
				
				{
					"topgunnerbullet01",
					1
				},
				
				{
					"topgunnerbullet02",
					1
				},
				
				{
					"topgunnerbullet03",
					1
				},
				
				{
					"topgunnerbullet04",
					1
				},
				
				{
					"topgunnerbullet05",
					1
				},
				
				{
					"topgunnerbullet06",
					1
				},
				
				{
					"topgunnerbullet07",
					1
				},
				
				{
					"topgunnerbullet08",
					1
				},
				
				{
					"maingunammo_belt_prep",
					0
				},
				
				{
					"maingunammo_belt_main",
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
				"light_1_hide",
				"light_2_hide",
				"zadni svetlo",
				"brzdove svetlo",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=2.0599999;
			verticalOffsetWorld=-0.116;
			postinit="[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview="\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_LSV_01_armed_F.jpg";
		_generalMacro="B_LSV_01_armed_G_noMMG";
		displayName="$STR_Globe_CfgVehicles_B_LSV_01_armed_G_noMMG_noBoxes0";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="BLU_F";
		crew="B_Soldier_F";
		typicalCargo[]=
		{
			"B_Soldier_F"
		};
		class TextureSources: TextureSources
		{
			class Black: Black
			{
				factions[]={};
			};
			class Olive: Olive
			{
				factions[]={};
			};
			class Sand: Sand
			{
				factions[]={};
			};
			class Dazzle: Dazzle
			{
				factions[]={};
			};
		};
		textureList[]=
		{
			"Black",
			0,
			"Olive",
			0,
			"Sand",
			1,
			"Dazzle",
			0
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_sand_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"
		};
		animationList[]=
		{
			"Unarmed_Main_Turret_Hide",
			0,
			"Unarmed_Codriver_Turret_Hide",
			1,
			"Unarmed_Ammo_Hide",
			1
		};
		class AnimationSources: AnimationSources
		{
			class Unarmed_Ammo_Hide: Unarmed_Ammo_Hide
			{
				initPhase=1;
			};
			class Unarmed_Codriver_Turret_Hide: Unarmed_Codriver_Turret_Hide
			{
				initPhase=1;
			};
		};
		cargoAction[]=
		{
			"passenger_low01"
		};
		cargoIsCoDriver[]={1,0};
		cargoProxyIndexes[]={};
		getInProxyOrder[]={1,2,3,4,5};
		class Turrets: Turrets
		{
			class TopTurret: MainTurret
			{
				disableSoundAttenuation=1;
				gunnerLeftHandAnimName="otocHlaven";
				gunnerRightHandAnimName="otocHlaven";
				body="mainTurret";
				gun="mainGun";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				weapons[]=
				{
					"HMG_127_LSV_01"
				};
				magazines[]=
				{
					"100Rnd_127x99_mag_Tracer_Red"
				};
				minElev=-10;
				maxElev=40;
				soundServo[]=
				{
					"A3\sounds_f\dummysound",
					9.9999977e-007,
					1
				};
				gunnerAction="gunner_lsv_01";
				gunnerCompartments="Compartment1";
				ejectDeadGunner=0;
				castGunnerShadow=1;
				stabilizedInAxes=0;
				gunBeg="muzzle_beg";
				gunEnd="muzzle_end";
				memoryPointGunnerOptics="gunnerView";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				commanding=-2;
				primaryGunner=1;
				optics=1;
				discreteDistance[]={100,200,300,400,600,800,1000,1200,1500};
				discreteDistanceInitIndex=2;
				turretInfoType="RscOptics_crows";
				gunnerOpticsModel="\a3\weapons_f_gamma\reticle\HMG_01_Optics_Gunner_F";
				class ViewOptics: ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.75;
					minFov=0.25;
					maxFov=1.25;
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
				};
				class ViewGunner: ViewGunner
				{
				};
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_01: CargoTurret_02
			{
				gunnerAction="passenger_inside_7";
				gunnerName="$STR_A3_TURRETS_CARGOTURRET_R1";
				memoryPointsGetInGunner="pos codriver";
				memoryPointsGetInGunnerDir="pos codriver dir";
				proxyIndex=1;
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{16.938801,-14.092},
						{14.6963,58.596901}
					};
					limitsArrayBottom[]=
					{
						{-11.462,-10.8808},
						{-11.7885,19.115101},
						{-9.2362003,31.9144}
					};
				};
				class TurnOut: TurnIn
				{
				};
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
			class CargoTurret_04: CargoTurret_02
			{
				gunnerAction="passenger_inside_7";
				gunnerName="$STR_A3_TURRETS_CARGOTURRET_R3";
				memoryPointsGetInGunner="pos cargo RR";
				memoryPointsGetInGunnerDir="pos cargo RR dir";
				proxyIndex=4;
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{44.944901,20.852301},
						{44.684502,95}
					};
					limitsArrayBottom[]=
					{
						{-11.7767,19.1071},
						{-17.4473,26.988501},
						{-40.8932,94.920601}
					};
				};
				class TurnOut: TurnIn
				{
				};
			};
			class CargoTurret_05: CargoTurret_02
			{
				gunnerAction="passenger_inside_7";
				gunnerName="$STR_A3_TURRETS_CARGOTURRET_L3";
				memoryPointsGetInGunner="pos cargo LR";
				memoryPointsGetInGunnerDir="pos cargo LR dir";
				proxyIndex=5;
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{45,-94.970901},
						{42.6674,-12.7769}
					};
					limitsArrayBottom[]=
					{
						{-33.421398,-95.090599},
						{-11.4358,-13.1064}
					};
				};
				class TurnOut: TurnIn
				{
				};
			};
		};
	};
	class B_LSV_01_AT_G_noMMG: LSV_01_AT_base_F
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
					"steeringwheel",
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
					"unarmed_codriver_turret_damage_hide",
					0
				},
				
				{
					"hidedoor1",
					0
				},
				
				{
					"hidedoor2",
					0
				},
				
				{
					"hidedoor3",
					0
				},
				
				{
					"hidedoor4",
					0
				},
				
				{
					"hidegunner",
					0
				},
				
				{
					"displayunhide",
					0
				},
				
				{
					"rpmunhide",
					0
				},
				
				{
					"mphunhide",
					0
				},
				
				{
					"indicatorspeed",
					0
				},
				
				{
					"indicatorrpm",
					0
				},
				
				{
					"indicatorrpm_part2",
					0
				},
				
				{
					"indicatorrpm2",
					0
				},
				
				{
					"indicatorrpm2_part2",
					0
				},
				
				{
					"fuel",
					1
				},
				
				{
					"indicatortemp",
					0
				},
				
				{
					"indicatortemp_move",
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
					"mainmuzzleflashrotation",
					230
				},
				
				{
					"mainmuzzleflashhide",
					0
				},
				
				{
					"maingunshake",
					0
				},
				
				{
					"maingunshake_back",
					0
				},
				
				{
					"codriverturret",
					0
				},
				
				{
					"codrivergun",
					0
				},
				
				{
					"codrivermuzzleflashrotation",
					499
				},
				
				{
					"codrivermuzzleflashhide",
					0
				},
				
				{
					"codrivergunshake",
					0
				},
				
				{
					"codrivergunshake_eye",
					0
				},
				
				{
					"codrivergunshake_back",
					0
				},
				
				{
					"codrivergunshake_eye_back",
					0
				},
				
				{
					"codriverfeedtray_cover_up",
					0
				},
				
				{
					"codrivermagazine_hide",
					0
				},
				
				{
					"codriverammobelt_hide",
					0
				},
				
				{
					"codriverfeedtray_cover_down",
					0
				},
				
				{
					"codriverbullet001",
					1
				},
				
				{
					"codriverbullet002",
					1
				},
				
				{
					"codriverbullet003",
					1
				},
				
				{
					"codriverbullet004",
					1
				},
				
				{
					"codriverbullet005",
					1
				},
				
				{
					"codriverammo_belt_rotation_prep",
					0
				},
				
				{
					"codriverammo_belt_rotation_main",
					0
				},
				
				{
					"maingunmagazine_hide",
					0
				},
				
				{
					"maingunammobelt_hide",
					0
				},
				
				{
					"topgunnerbullet01",
					1
				},
				
				{
					"topgunnerbullet02",
					1
				},
				
				{
					"topgunnerbullet03",
					1
				},
				
				{
					"topgunnerbullet04",
					1
				},
				
				{
					"topgunnerbullet05",
					1
				},
				
				{
					"topgunnerbullet06",
					1
				},
				
				{
					"topgunnerbullet07",
					1
				},
				
				{
					"topgunnerbullet08",
					1
				},
				
				{
					"maingunammo_belt_prep",
					0
				},
				
				{
					"maingunammo_belt_main",
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
				"light_1_hide",
				"light_2_hide",
				"zadni svetlo",
				"brzdove svetlo",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=2.0599999;
			verticalOffsetWorld=-0.116;
			postinit="[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview="\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_LSV_01_armed_F.jpg";
		_generalMacro="B_LSV_01_AT_G_noMMG";
		displayName="$STR_Globe_CfgVehicles_B_LSV_01_AT_G_noMMG0";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="BLU_F";
		crew="B_Soldier_F";
		typicalCargo[]=
		{
			"B_Soldier_F"
		};
		class TextureSources: TextureSources
		{
			class Black: Black
			{
				factions[]={};
			};
			class Olive: Olive
			{
				factions[]={};
			};
			class Sand: Sand
			{
				factions[]={};
			};
			class Dazzle: Dazzle
			{
				factions[]={};
			};
		};
		textureList[]=
		{
			"Black",
			0,
			"Olive",
			0,
			"Sand",
			1,
			"Dazzle",
			0
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_sand_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"
		};
		animationList[]=
		{
			"Unarmed_Main_Turret_Hide",
			0,
			"Unarmed_Codriver_Turret_Hide",
			1,
			"Unarmed_Ammo_Hide",
			0
		};
		class AnimationSources: AnimationSources
		{
			class Unarmed_Codriver_Turret_Hide: Unarmed_Codriver_Turret_Hide
			{
				initPhase=1;
			};
		};
		cargoIsCoDriver[]={};
		cargoProxyIndexes[]={1,2,3};
		getInProxyOrder[]={1,2,3};
		class Turrets: Turrets
		{
			class TopTurret: MainTurret
			{
				disableSoundAttenuation=1;
				gunnerLeftHandAnimName="otocHlaven";
				gunnerRightHandAnimName="otocHlaven";
				body="mainTurret";
				gun="mainGun";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				weapons[]=
				{
					"missiles_titan_static"
				};
				magazines[]=
				{
					"1Rnd_GAT_missiles",
					"1Rnd_GAT_missiles",
					"1Rnd_GAT_missiles",
					"1Rnd_GAT_missiles",
					"1Rnd_GAT_missiles",
					"1Rnd_GAT_missiles"
				};
				minElev=-20;
				maxElev=30;
				soundServo[]=
				{
					"A3\sounds_f\dummysound",
					9.9999977e-007,
					1
				};
				gunnerAction="Gunner_LSV_01_AT_F";
				gunnerCompartments="Compartment1";
				ejectDeadGunner=0;
				castGunnerShadow=1;
				stabilizedInAxes=0;
				gunBeg="muzzle_beg";
				gunEnd="muzzle_end";
				memoryPointGunnerOptics="gunnerView";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				commanding=-2;
				primaryGunner=1;
				optics=1;
				discreteDistance[]={100,200,300,400,600,800,1000,1200,1500};
				discreteDistanceInitIndex=2;
				turretInfoType="RscOptics_titan";
				gunnerOpticsModel="\A3\Weapons_F_Beta\acc\reticle_titan.p3d";
				class ViewOptics: ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.083329998;
					minFov=0.041669998;
					maxFov=0.083329998;
					visionMode[]=
					{
						"Normal",
						"Ti"
					};
					thermalMode[]={0,1};
				};
				class viewGunner: ViewGunner
				{
					minFov=0.25;
					maxFov=1.25;
					initFov=0.75;
				};
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_01: CargoTurret_02
			{
				gunnerAction="passenger_inside_7";
				gunnerName="$STR_A3_TURRETS_CARGOTURRET_R1";
				memoryPointsGetInGunner="pos codriver";
				memoryPointsGetInGunnerDir="pos codriver dir";
				proxyIndex=1;
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{16.938801,-14.092},
						{14.6963,58.596901}
					};
					limitsArrayBottom[]=
					{
						{-11.462,-10.8808},
						{-11.7885,19.115101},
						{-9.2362003,31.9144}
					};
				};
				class TurnOut: TurnIn
				{
				};
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
		};
	};
	class B_LSV_01_AT_G_noMMG_noBoxes: LSV_01_AT_base_F
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
					"steeringwheel",
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
					"unarmed_codriver_turret_damage_hide",
					0
				},
				
				{
					"hidedoor1",
					0
				},
				
				{
					"hidedoor2",
					0
				},
				
				{
					"hidedoor3",
					0
				},
				
				{
					"hidedoor4",
					0
				},
				
				{
					"hidegunner",
					0
				},
				
				{
					"displayunhide",
					0
				},
				
				{
					"rpmunhide",
					0
				},
				
				{
					"mphunhide",
					0
				},
				
				{
					"indicatorspeed",
					0
				},
				
				{
					"indicatorrpm",
					0
				},
				
				{
					"indicatorrpm_part2",
					0
				},
				
				{
					"indicatorrpm2",
					0
				},
				
				{
					"indicatorrpm2_part2",
					0
				},
				
				{
					"fuel",
					1
				},
				
				{
					"indicatortemp",
					0
				},
				
				{
					"indicatortemp_move",
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
					"mainmuzzleflashrotation",
					230
				},
				
				{
					"mainmuzzleflashhide",
					0
				},
				
				{
					"maingunshake",
					0
				},
				
				{
					"maingunshake_back",
					0
				},
				
				{
					"codriverturret",
					0
				},
				
				{
					"codrivergun",
					0
				},
				
				{
					"codrivermuzzleflashrotation",
					499
				},
				
				{
					"codrivermuzzleflashhide",
					0
				},
				
				{
					"codrivergunshake",
					0
				},
				
				{
					"codrivergunshake_eye",
					0
				},
				
				{
					"codrivergunshake_back",
					0
				},
				
				{
					"codrivergunshake_eye_back",
					0
				},
				
				{
					"codriverfeedtray_cover_up",
					0
				},
				
				{
					"codrivermagazine_hide",
					0
				},
				
				{
					"codriverammobelt_hide",
					0
				},
				
				{
					"codriverfeedtray_cover_down",
					0
				},
				
				{
					"codriverbullet001",
					1
				},
				
				{
					"codriverbullet002",
					1
				},
				
				{
					"codriverbullet003",
					1
				},
				
				{
					"codriverbullet004",
					1
				},
				
				{
					"codriverbullet005",
					1
				},
				
				{
					"codriverammo_belt_rotation_prep",
					0
				},
				
				{
					"codriverammo_belt_rotation_main",
					0
				},
				
				{
					"maingunmagazine_hide",
					0
				},
				
				{
					"maingunammobelt_hide",
					0
				},
				
				{
					"topgunnerbullet01",
					1
				},
				
				{
					"topgunnerbullet02",
					1
				},
				
				{
					"topgunnerbullet03",
					1
				},
				
				{
					"topgunnerbullet04",
					1
				},
				
				{
					"topgunnerbullet05",
					1
				},
				
				{
					"topgunnerbullet06",
					1
				},
				
				{
					"topgunnerbullet07",
					1
				},
				
				{
					"topgunnerbullet08",
					1
				},
				
				{
					"maingunammo_belt_prep",
					0
				},
				
				{
					"maingunammo_belt_main",
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
				"light_1_hide",
				"light_2_hide",
				"zadni svetlo",
				"brzdove svetlo",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=2.0599999;
			verticalOffsetWorld=-0.116;
			postinit="[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview="\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_LSV_01_armed_F.jpg";
		_generalMacro="B_LSV_01_AT_G_noMMG_noBoxes";
		displayName="$STR_Globe_CfgVehicles_B_LSV_01_AT_G_noMMG_noBoxes0";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="BLU_F";
		crew="B_Soldier_F";
		typicalCargo[]=
		{
			"B_Soldier_F"
		};
		class TextureSources: TextureSources
		{
			class Black: Black
			{
				factions[]={};
			};
			class Olive: Olive
			{
				factions[]={};
			};
			class Sand: Sand
			{
				factions[]={};
			};
			class Dazzle: Dazzle
			{
				factions[]={};
			};
		};
		textureList[]=
		{
			"Black",
			0,
			"Olive",
			0,
			"Sand",
			1,
			"Dazzle",
			0
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_sand_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"
		};
		animationList[]=
		{
			"Unarmed_Main_Turret_Hide",
			0,
			"Unarmed_Codriver_Turret_Hide",
			1,
			"Unarmed_Ammo_Hide",
			1
		};
		class AnimationSources: AnimationSources
		{
			class Unarmed_Ammo_Hide: Unarmed_Ammo_Hide
			{
				initPhase=1;
			};
			class Unarmed_Codriver_Turret_Hide: Unarmed_Codriver_Turret_Hide
			{
				initPhase=1;
			};
		};
		cargoIsCoDriver[]={};
		cargoProxyIndexes[]={};
		getInProxyOrder[]={1,2,3,4,5};
		class Turrets: Turrets
		{
			class TopTurret: MainTurret
			{
				disableSoundAttenuation=1;
				gunnerLeftHandAnimName="otocHlaven";
				gunnerRightHandAnimName="otocHlaven";
				body="mainTurret";
				gun="mainGun";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				weapons[]=
				{
					"missiles_titan_static"
				};
				magazines[]=
				{
					"1Rnd_GAT_missiles"
				};
				minElev=-20;
				maxElev=30;
				soundServo[]=
				{
					"A3\sounds_f\dummysound",
					9.9999977e-007,
					1
				};
				gunnerAction="Gunner_LSV_01_AT_F";
				gunnerCompartments="Compartment1";
				ejectDeadGunner=0;
				castGunnerShadow=1;
				stabilizedInAxes=0;
				gunBeg="muzzle_beg";
				gunEnd="muzzle_end";
				memoryPointGunnerOptics="gunnerView";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				commanding=-2;
				primaryGunner=1;
				optics=1;
				discreteDistance[]={100,200,300,400,600,800,1000,1200,1500};
				discreteDistanceInitIndex=2;
				turretInfoType="RscOptics_titan";
				gunnerOpticsModel="\A3\Weapons_F_Beta\acc\reticle_titan.p3d";
				class ViewOptics: ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.083329998;
					minFov=0.041669998;
					maxFov=0.083329998;
					visionMode[]=
					{
						"Normal",
						"Ti"
					};
					thermalMode[]={0,1};
				};
				class viewGunner: ViewGunner
				{
					minFov=0.25;
					maxFov=1.25;
					initFov=0.75;
				};
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_01: CargoTurret_02
			{
				gunnerAction="passenger_inside_7";
				gunnerName="$STR_A3_TURRETS_CARGOTURRET_R1";
				memoryPointsGetInGunner="pos codriver";
				memoryPointsGetInGunnerDir="pos codriver dir";
				proxyIndex=1;
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{16.938801,-14.092},
						{14.6963,58.596901}
					};
					limitsArrayBottom[]=
					{
						{-11.462,-10.8808},
						{-11.7885,19.115101},
						{-9.2362003,31.9144}
					};
				};
				class TurnOut: TurnIn
				{
				};
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
			class CargoTurret_04: CargoTurret_02
			{
				gunnerAction="passenger_inside_7";
				gunnerName="$STR_A3_TURRETS_CARGOTURRET_R3";
				memoryPointsGetInGunner="pos cargo RR";
				memoryPointsGetInGunnerDir="pos cargo RR dir";
				proxyIndex=4;
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{44.944901,20.852301},
						{44.684502,95}
					};
					limitsArrayBottom[]=
					{
						{-11.7767,19.1071},
						{-17.4473,26.988501},
						{-40.8932,94.920601}
					};
				};
				class TurnOut: TurnIn
				{
				};
			};
			class CargoTurret_05: CargoTurret_02
			{
				gunnerAction="passenger_inside_7";
				gunnerName="$STR_A3_TURRETS_CARGOTURRET_L3";
				memoryPointsGetInGunner="pos cargo LR";
				memoryPointsGetInGunnerDir="pos cargo LR dir";
				proxyIndex=5;
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{45,-94.970901},
						{42.6674,-12.7769}
					};
					limitsArrayBottom[]=
					{
						{-33.421398,-95.090599},
						{-11.4358,-13.1064}
					};
				};
				class TurnOut: TurnIn
				{
				};
			};
		};
	};
	class B_LSV_01_unarmed_G_boxes: LSV_01_unarmed_base_F
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
					"steeringwheel",
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
					"unarmed_codriver_turret_damage_hide",
					0
				},
				
				{
					"hidedoor1",
					0
				},
				
				{
					"hidedoor2",
					0
				},
				
				{
					"hidedoor3",
					0
				},
				
				{
					"hidedoor4",
					0
				},
				
				{
					"hidegunner",
					0
				},
				
				{
					"displayunhide",
					0
				},
				
				{
					"rpmunhide",
					0
				},
				
				{
					"mphunhide",
					0
				},
				
				{
					"indicatorspeed",
					0
				},
				
				{
					"indicatorrpm",
					0
				},
				
				{
					"indicatorrpm_part2",
					0
				},
				
				{
					"indicatorrpm2",
					0
				},
				
				{
					"indicatorrpm2_part2",
					0
				},
				
				{
					"fuel",
					1
				},
				
				{
					"indicatortemp",
					0
				},
				
				{
					"indicatortemp_move",
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
					"mainmuzzleflashrotation",
					0
				},
				
				{
					"mainmuzzleflashhide",
					0
				},
				
				{
					"maingunshake",
					0
				},
				
				{
					"maingunshake_back",
					0
				},
				
				{
					"codriverturret",
					0
				},
				
				{
					"codrivergun",
					0
				},
				
				{
					"codrivermuzzleflashrotation",
					0
				},
				
				{
					"codrivermuzzleflashhide",
					0
				},
				
				{
					"codrivergunshake",
					0
				},
				
				{
					"codrivergunshake_eye",
					0
				},
				
				{
					"codrivergunshake_back",
					0
				},
				
				{
					"codrivergunshake_eye_back",
					0
				},
				
				{
					"codriverfeedtray_cover_up",
					0
				},
				
				{
					"codrivermagazine_hide",
					0
				},
				
				{
					"codriverammobelt_hide",
					0
				},
				
				{
					"codriverfeedtray_cover_down",
					0
				},
				
				{
					"codriverbullet001",
					0
				},
				
				{
					"codriverbullet002",
					0
				},
				
				{
					"codriverbullet003",
					0
				},
				
				{
					"codriverbullet004",
					0
				},
				
				{
					"codriverbullet005",
					0
				},
				
				{
					"codriverammo_belt_rotation_prep",
					0
				},
				
				{
					"codriverammo_belt_rotation_main",
					0
				},
				
				{
					"maingunmagazine_hide",
					0
				},
				
				{
					"maingunammobelt_hide",
					0
				},
				
				{
					"topgunnerbullet01",
					0
				},
				
				{
					"topgunnerbullet02",
					0
				},
				
				{
					"topgunnerbullet03",
					0
				},
				
				{
					"topgunnerbullet04",
					0
				},
				
				{
					"topgunnerbullet05",
					0
				},
				
				{
					"topgunnerbullet06",
					0
				},
				
				{
					"topgunnerbullet07",
					0
				},
				
				{
					"topgunnerbullet08",
					0
				},
				
				{
					"maingunammo_belt_prep",
					0
				},
				
				{
					"maingunammo_belt_main",
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
				"light_1_hide",
				"light_2_hide",
				"zadni svetlo",
				"brzdove svetlo",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=2.0610001;
			verticalOffsetWorld=-0.116;
			postinit="[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview="\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_LSV_01_unarmed_F.jpg";
		_generalMacro="B_LSV_01_unarmed_G_boxes";
		displayName="$STR_Globe_CfgVehicles_B_LSV_01_unarmed_G_boxes0";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="BLU_F";
		crew="B_Soldier_F";
		typicalCargo[]=
		{
			"B_Soldier_F"
		};
		class TextureSources: TextureSources
		{
			class Black: Black
			{
				factions[]={};
			};
			class Olive: Olive
			{
				factions[]={};
			};
			class Sand: Sand
			{
				factions[]={};
			};
			class Dazzle: Dazzle
			{
				factions[]={};
			};
		};
		textureList[]=
		{
			"Black",
			0,
			"Olive",
			0,
			"Sand",
			1,
			"Dazzle",
			0
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_sand_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"
		};
		animationList[]=
		{
			"Unarmed_Main_Turret_Hide",
			1,
			"Unarmed_Codriver_Turret_Hide",
			1,
			"Unarmed_Ammo_Hide",
			0
		};
		class AnimationSources: AnimationSources
		{
			class Unarmed_Main_Turret_Hide: Unarmed_Main_Turret_Hide
			{
				initPhase=1;
			};
			class Unarmed_Codriver_Turret_Hide: Unarmed_Codriver_Turret_Hide
			{
				initPhase=1;
			};
			class Unarmed_Ammo_Hide: Unarmed_Ammo_Hide
			{
				initPhase=0;
			};
		};
		cargoIsCoDriver[]={};
		cargoProxyIndexes[]={};
		getInProxyOrder[]={6,1,2,3};
		class Turrets: Turrets
		{
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
			class CargoTurret_01: CargoTurret_02
			{
				gunnerAction="passenger_inside_7";
				gunnerName="$STR_A3_TURRETS_CARGOTURRET_R1";
				memoryPointsGetInGunner="pos codriver";
				memoryPointsGetInGunnerDir="pos codriver dir";
				proxyIndex=1;
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{16.938801,-14.092},
						{14.6963,58.596901}
					};
					limitsArrayBottom[]=
					{
						{-11.462,-10.8808},
						{-11.7885,19.115101},
						{-9.2362003,31.9144}
					};
				};
				class TurnOut: TurnIn
				{
				};
			};
			class CargoTurret_06: CargoTurret_01
			{
				proxyIndex=6;
				gunnerAction="vehicle_passenger_stand_2";
				gunnerName="$STR_POSITION_GUNNER";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				allowLauncherIn=1;
				allowLauncherOut=1;
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{45,-95},
						{45,95}
					};
					limitsArrayBottom[]=
					{
						{-30,-95},
						{-20,-30},
						{-20,30},
						{-30,95}
					};
				};
				class TurnOut: TurnIn
				{
				};
			};
		};
	}; 
	class B_LSV_01_unarmed_G_MMG_boxes: LSV_01_unarmed_base_F
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
					"steeringwheel",
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
					"unarmed_codriver_turret_damage_hide",
					0
				},
				
				{
					"hidedoor1",
					0
				},
				
				{
					"hidedoor2",
					0
				},
				
				{
					"hidedoor3",
					0
				},
				
				{
					"hidedoor4",
					0
				},
				
				{
					"hidegunner",
					0
				},
				
				{
					"displayunhide",
					0
				},
				
				{
					"rpmunhide",
					0
				},
				
				{
					"mphunhide",
					0
				},
				
				{
					"indicatorspeed",
					0
				},
				
				{
					"indicatorrpm",
					0
				},
				
				{
					"indicatorrpm_part2",
					0
				},
				
				{
					"indicatorrpm2",
					0
				},
				
				{
					"indicatorrpm2_part2",
					0
				},
				
				{
					"fuel",
					1
				},
				
				{
					"indicatortemp",
					0
				},
				
				{
					"indicatortemp_move",
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
					"mainmuzzleflashrotation",
					0
				},
				
				{
					"mainmuzzleflashhide",
					0
				},
				
				{
					"maingunshake",
					0
				},
				
				{
					"maingunshake_back",
					0
				},
				
				{
					"codriverturret",
					0
				},
				
				{
					"codrivergun",
					0
				},
				
				{
					"codrivermuzzleflashrotation",
					0
				},
				
				{
					"codrivermuzzleflashhide",
					0
				},
				
				{
					"codrivergunshake",
					0
				},
				
				{
					"codrivergunshake_eye",
					0
				},
				
				{
					"codrivergunshake_back",
					0
				},
				
				{
					"codrivergunshake_eye_back",
					0
				},
				
				{
					"codriverfeedtray_cover_up",
					0
				},
				
				{
					"codrivermagazine_hide",
					0
				},
				
				{
					"codriverammobelt_hide",
					0
				},
				
				{
					"codriverfeedtray_cover_down",
					0
				},
				
				{
					"codriverbullet001",
					0
				},
				
				{
					"codriverbullet002",
					0
				},
				
				{
					"codriverbullet003",
					0
				},
				
				{
					"codriverbullet004",
					0
				},
				
				{
					"codriverbullet005",
					0
				},
				
				{
					"codriverammo_belt_rotation_prep",
					0
				},
				
				{
					"codriverammo_belt_rotation_main",
					0
				},
				
				{
					"maingunmagazine_hide",
					0
				},
				
				{
					"maingunammobelt_hide",
					0
				},
				
				{
					"topgunnerbullet01",
					0
				},
				
				{
					"topgunnerbullet02",
					0
				},
				
				{
					"topgunnerbullet03",
					0
				},
				
				{
					"topgunnerbullet04",
					0
				},
				
				{
					"topgunnerbullet05",
					0
				},
				
				{
					"topgunnerbullet06",
					0
				},
				
				{
					"topgunnerbullet07",
					0
				},
				
				{
					"topgunnerbullet08",
					0
				},
				
				{
					"maingunammo_belt_prep",
					0
				},
				
				{
					"maingunammo_belt_main",
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
				"light_1_hide",
				"light_2_hide",
				"zadni svetlo",
				"brzdove svetlo",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=2.0610001;
			verticalOffsetWorld=-0.116;
			postinit="[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview="\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_LSV_01_unarmed_F.jpg";
		_generalMacro="B_LSV_01_unarmed_G_MMG_boxes";
		displayName="$STR_Globe_CfgVehicles_B_LSV_01_unarmed_G_MMG_boxes0";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="BLU_F";
		crew="B_Soldier_F";
		typicalCargo[]=
		{
			"B_Soldier_F"
		};
		class TextureSources: TextureSources
		{
			class Black: Black
			{
				factions[]={};
			};
			class Olive: Olive
			{
				factions[]={};
			};
			class Sand: Sand
			{
				factions[]={};
			};
			class Dazzle: Dazzle
			{
				factions[]={};
			};
		};
		textureList[]=
		{
			"Black",
			0,
			"Olive",
			0,
			"Sand",
			1,
			"Dazzle",
			0
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_sand_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"
		};
		animationList[]=
		{
			"Unarmed_Main_Turret_Hide",
			1,
			"Unarmed_Codriver_Turret_Hide",
			0,
			"Unarmed_Ammo_Hide",
			0
		};
		class AnimationSources: AnimationSources
		{
			class Unarmed_Main_Turret_Hide: Unarmed_Main_Turret_Hide
			{
				initPhase=1;
			};
			class Unarmed_Codriver_Turret_Hide: Unarmed_Codriver_Turret_Hide
			{
				initPhase=0;
			};
			class Unarmed_Ammo_Hide: Unarmed_Ammo_Hide
			{
				initPhase=0;
			};
		};
		cargoIsCoDriver[]={};
		cargoProxyIndexes[]={};
		getInProxyOrder[]={6,2,3};
		unitInfoType="RscUnitInfo";
		class Turrets: Turrets
		{
			class CodRiverTurret: MainTurret
			{
				disableSoundAttenuation=1;
				proxyType="CPCargo";
				gunnerName="$STR_POSITION_COMMANDER";
				gunnerLeftHandAnimName="otocHlaven_2";
				gunnerRightHandAnimName="otocHlaven_2";
				body="CodRiverTurret";
				gun="CodRiverGun";
				animationSourceBody="CodRiverTurret";
				animationSourceGun="CodRiverGun";
				weapons[]=
				{
					"MMG_02_vehicle"
				};
				magazines[]=
				{
					"130Rnd_338_Mag",
					"130Rnd_338_Mag",
					"130Rnd_338_Mag"
				};
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{18.2467,-25.1915},
						{13.9927,25.8645}
					};
					limitsArrayBottom[]=
					{
						{-9.6644001,-35.7248},
						{-9.8597002,27.203501}
					};
				};
				class TurnOut: TurnIn
				{
				};
				soundServo[]=
				{
					"A3\sounds_f\dummysound",
					9.9999977e-007,
					1
				};
				gunnerAction="frontGunner_lsv_01";
				gunBeg="muzzle_2_beg";
				gunEnd="muzzle_2_end";
				memoryPointGunnerOptics="gunnerView_2";
				memoryPointsGetInGunner="pos codriver";
				memoryPointsGetInGunnerDir="pos codriver dir";
				commanding=-2;
				primaryGunner=0;
				optics=0;
				discreteDistance[]={100,200,300,400,600,800,1000,1200,1500};
				discreteDistanceInitIndex=2;
				turretInfoType="RscOptics_Offroad_01";
				class ViewOptics: ViewOptics
				{
					minFov=0.25;
					maxFov=1.25;
					initFov=0.75;
				};
				class ViewGunner: ViewGunner
				{
				};
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
			class CargoTurret_06: CargoTurret_01
			{
				proxyIndex=6;
				gunnerAction="vehicle_passenger_stand_2";
				gunnerName="$STR_POSITION_GUNNER";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				allowLauncherIn=1;
				allowLauncherOut=1;
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{45,-95},
						{45,95}
					};
					limitsArrayBottom[]=
					{
						{-30,-95},
						{-20,-30},
						{-20,30},
						{-30,95}
					};
				};
				class TurnOut: TurnIn
				{
				};
			};
		};
	}; 
	class B_LSV_01_unarmed_G_MMG_noBoxes: LSV_01_unarmed_base_F
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
					"steeringwheel",
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
					"unarmed_codriver_turret_damage_hide",
					0
				},
				
				{
					"hidedoor1",
					0
				},
				
				{
					"hidedoor2",
					0
				},
				
				{
					"hidedoor3",
					0
				},
				
				{
					"hidedoor4",
					0
				},
				
				{
					"hidegunner",
					0
				},
				
				{
					"displayunhide",
					0
				},
				
				{
					"rpmunhide",
					0
				},
				
				{
					"mphunhide",
					0
				},
				
				{
					"indicatorspeed",
					0
				},
				
				{
					"indicatorrpm",
					0
				},
				
				{
					"indicatorrpm_part2",
					0
				},
				
				{
					"indicatorrpm2",
					0
				},
				
				{
					"indicatorrpm2_part2",
					0
				},
				
				{
					"fuel",
					1
				},
				
				{
					"indicatortemp",
					0
				},
				
				{
					"indicatortemp_move",
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
					"mainmuzzleflashrotation",
					0
				},
				
				{
					"mainmuzzleflashhide",
					0
				},
				
				{
					"maingunshake",
					0
				},
				
				{
					"maingunshake_back",
					0
				},
				
				{
					"codriverturret",
					0
				},
				
				{
					"codrivergun",
					0
				},
				
				{
					"codrivermuzzleflashrotation",
					0
				},
				
				{
					"codrivermuzzleflashhide",
					0
				},
				
				{
					"codrivergunshake",
					0
				},
				
				{
					"codrivergunshake_eye",
					0
				},
				
				{
					"codrivergunshake_back",
					0
				},
				
				{
					"codrivergunshake_eye_back",
					0
				},
				
				{
					"codriverfeedtray_cover_up",
					0
				},
				
				{
					"codrivermagazine_hide",
					0
				},
				
				{
					"codriverammobelt_hide",
					0
				},
				
				{
					"codriverfeedtray_cover_down",
					0
				},
				
				{
					"codriverbullet001",
					0
				},
				
				{
					"codriverbullet002",
					0
				},
				
				{
					"codriverbullet003",
					0
				},
				
				{
					"codriverbullet004",
					0
				},
				
				{
					"codriverbullet005",
					0
				},
				
				{
					"codriverammo_belt_rotation_prep",
					0
				},
				
				{
					"codriverammo_belt_rotation_main",
					0
				},
				
				{
					"maingunmagazine_hide",
					0
				},
				
				{
					"maingunammobelt_hide",
					0
				},
				
				{
					"topgunnerbullet01",
					0
				},
				
				{
					"topgunnerbullet02",
					0
				},
				
				{
					"topgunnerbullet03",
					0
				},
				
				{
					"topgunnerbullet04",
					0
				},
				
				{
					"topgunnerbullet05",
					0
				},
				
				{
					"topgunnerbullet06",
					0
				},
				
				{
					"topgunnerbullet07",
					0
				},
				
				{
					"topgunnerbullet08",
					0
				},
				
				{
					"maingunammo_belt_prep",
					0
				},
				
				{
					"maingunammo_belt_main",
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
				"light_1_hide",
				"light_2_hide",
				"zadni svetlo",
				"brzdove svetlo",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=2.0610001;
			verticalOffsetWorld=-0.116;
			postinit="[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview="\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_LSV_01_unarmed_F.jpg";
		_generalMacro="B_LSV_01_unarmed_G_MMG_noBoxes";
		displayName="$STR_Globe_CfgVehicles_B_LSV_01_unarmed_G_MMG_noBoxes0";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="BLU_F";
		crew="B_Soldier_F";
		typicalCargo[]=
		{
			"B_Soldier_F"
		};
		class TextureSources: TextureSources
		{
			class Black: Black
			{
				factions[]={};
			};
			class Olive: Olive
			{
				factions[]={};
			};
			class Sand: Sand
			{
				factions[]={};
			};
			class Dazzle: Dazzle
			{
				factions[]={};
			};
		};
		textureList[]=
		{
			"Black",
			0,
			"Olive",
			0,
			"Sand",
			1,
			"Dazzle",
			0
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_sand_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"
		};
		animationList[]=
		{
			"Unarmed_Main_Turret_Hide",
			1,
			"Unarmed_Codriver_Turret_Hide",
			0,
			"Unarmed_Ammo_Hide",
			1
		};
		class AnimationSources: AnimationSources
		{
			class Unarmed_Main_Turret_Hide: Unarmed_Main_Turret_Hide
			{
				initPhase=1;
			};
			class Unarmed_Codriver_Turret_Hide: Unarmed_Codriver_Turret_Hide
			{
				initPhase=0;
			};
			class Unarmed_Ammo_Hide: Unarmed_Ammo_Hide
			{
				initPhase=1;
			};
		};
		cargoIsCoDriver[]={};
		cargoProxyIndexes[]={};
		getInProxyOrder[]={6,2,3,4,5};
		unitInfoType="RscUnitInfo";
		class Turrets: Turrets
		{
			class CodRiverTurret: MainTurret
			{
				disableSoundAttenuation=1;
				proxyType="CPCargo";
				gunnerName="$STR_POSITION_COMMANDER";
				gunnerLeftHandAnimName="otocHlaven_2";
				gunnerRightHandAnimName="otocHlaven_2";
				body="CodRiverTurret";
				gun="CodRiverGun";
				animationSourceBody="CodRiverTurret";
				animationSourceGun="CodRiverGun";
				weapons[]=
				{
					"MMG_02_vehicle"
				};
				magazines[]=
				{
					"130Rnd_338_Mag",
					"130Rnd_338_Mag",
					"130Rnd_338_Mag"
				};
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{18.2467,-25.1915},
						{13.9927,25.8645}
					};
					limitsArrayBottom[]=
					{
						{-9.6644001,-35.7248},
						{-9.8597002,27.203501}
					};
				};
				class TurnOut: TurnIn
				{
				};
				soundServo[]=
				{
					"A3\sounds_f\dummysound",
					9.9999977e-007,
					1
				};
				gunnerAction="frontGunner_lsv_01";
				gunBeg="muzzle_2_beg";
				gunEnd="muzzle_2_end";
				memoryPointGunnerOptics="gunnerView_2";
				memoryPointsGetInGunner="pos codriver";
				memoryPointsGetInGunnerDir="pos codriver dir";
				commanding=-2;
				primaryGunner=0;
				optics=0;
				discreteDistance[]={100,200,300,400,600,800,1000,1200,1500};
				discreteDistanceInitIndex=2;
				turretInfoType="RscOptics_Offroad_01";
				class ViewOptics: ViewOptics
				{
					minFov=0.25;
					maxFov=1.25;
					initFov=0.75;
				};
				class ViewGunner: ViewGunner
				{
				};
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
			class CargoTurret_04: CargoTurret_02
			{
				gunnerAction="passenger_inside_7";
				gunnerName="$STR_A3_TURRETS_CARGOTURRET_R3";
				memoryPointsGetInGunner="pos cargo RR";
				memoryPointsGetInGunnerDir="pos cargo RR dir";
				proxyIndex=4;
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{44.944901,20.852301},
						{44.684502,95}
					};
					limitsArrayBottom[]=
					{
						{-11.7767,19.1071},
						{-17.4473,26.988501},
						{-40.8932,94.920601}
					};
				};
				class TurnOut: TurnIn
				{
				};
			};
			class CargoTurret_05: CargoTurret_02
			{
				gunnerAction="passenger_inside_7";
				gunnerName="$STR_A3_TURRETS_CARGOTURRET_L3";
				memoryPointsGetInGunner="pos cargo LR";
				memoryPointsGetInGunnerDir="pos cargo LR dir";
				proxyIndex=5;
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{45,-94.970901},
						{42.6674,-12.7769}
					};
					limitsArrayBottom[]=
					{
						{-33.421398,-95.090599},
						{-11.4358,-13.1064}
					};
				};
				class TurnOut: TurnIn
				{
				};
			};
			class CargoTurret_06: CargoTurret_01
			{
				proxyIndex=6;
				gunnerAction="vehicle_passenger_stand_2";
				gunnerName="$STR_POSITION_GUNNER";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				allowLauncherIn=1;
				allowLauncherOut=1;
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{45,-95},
						{45,95}
					};
					limitsArrayBottom[]=
					{
						{-30,-95},
						{-20,-30},
						{-20,30},
						{-30,95}
					};
				};
				class TurnOut: TurnIn
				{
				};
			};
		};
	}; 
};