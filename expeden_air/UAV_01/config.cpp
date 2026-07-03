class CfgPatches
{
	class Air_Globe_UAV_01
	{
		addonRootClass="Air_Globe";
		requiredAddons[]=
		{
			"Air_Globe"
		};
		requiredVersion=0.1;
		units[]=
		{
			"I_E_UAV_01_DroneDropMineAT",
			"I_E_UAV_01_DroneDropMineDispenser",
			"O_G_UAV_AI",
			"B_G_UAV_AI",
			"I_G_UAV_AI",
			"O_G_UAV_01_DroneDropMineAT",
			"B_G_UAV_01_DroneDropMineAT",
			"I_G_UAV_01_DroneDropMineAT",
			"Land_DroneDropMineAT_01",
			"I_UAV_01_DroneDropMineDispenser",
			"O_UAV_01_DroneDropMineDispenser",
			"B_UAV_01_DroneDropMineDispenser"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Items_base_F;
	class I_UAV_AI;
	class O_UAV_AI;
	class B_UAV_AI;
	class Helicopter;
	class Helicopter_Base_F: Helicopter
	{
		class Turrets;
	};
	class UAV_01_base_F: Helicopter_Base_F
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class Components;
		class Eventhandlers;
	};
	class I_G_UAV_AI: I_UAV_AI
	{
		author="O&T Expansion Eden";
		_generalMacro="I_G_UAV_AI";
		faction="IND_G_F";
	};
	class O_G_UAV_AI: O_UAV_AI
	{
		author="O&T Expansion Eden";
		_generalMacro="O_G_UAV_AI";
		faction="OPF_G_F";
	};
	class B_G_UAV_AI: B_UAV_AI
	{
		author="O&T Expansion Eden";
		_generalMacro="B_G_UAV_AI";
		faction="BLU_G_F";
	};
	class I_E_UAV_AI: I_UAV_AI
	{
		author="O&T Expansion Eden";
		_generalMacro="I_E_UAV_AI";
		faction="IND_E_F";
	};
	class UAV_01_DroneDropMineAT_base: UAV_01_base_F
	{
		author="O&T Expansion Eden";
		_generalMacro="UAV_01_DroneDropMineAT_base";
		class Components
		{
			class TransportPylonsComponent
			{
				UIPicture="a3\drones_f\air_f_gamma\uav_01\data\ui\map_uav_01_ca.paa";
				class pylons
				{
					class pylons1
					{
						maxweight=80;
						hardpoints[]=
						{
							"DRONE_DROP_MINE_AT"
						};
						attachment="DroneDropMineAT_magazine";
						bay=-1;
						priority=1;
						UIposition[]={0.31999999,0.28};
						turret[]={-1};
						mirroredMissilePos=0;
					};
				};
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				reportRemoteTargets=0;
				reportOwnPosition=0;
				hasDriver=1;
				hasGunner=0;
				enableManualFire=0;
				weapons[]=
				{
					"FakeWeapon"
				};
				magazines[]=
				{
					"FakeWeapon"
				};
			};
		};
		class Eventhandlers: Eventhandlers
		{
			class Globe_PlakaEHs
			{
				postInit="_this call expEden_fnc_droneDropMineAT";
				fired="deleteVehicle ((_this # 0) getVariable 'Globe_mine');";
				killed="deleteVehicle ((_this # 0) getVariable 'Globe_mine');";
				deleted="deleteVehicle ((_this # 0) getVariable 'Globe_mine');";
				UnregisteredFromWorld3DEN="deleteVehicle ((_this # 0) getVariable 'Globe_mine');";
			};
		};
	};
	class I_G_UAV_01_DroneDropMineAT: UAV_01_DroneDropMineAT_base
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
					"rotorimpacthide",
					0
				},
				
				{
					"tailrotorimpacthide",
					0
				},
				
				{
					"propeller1_rotation",
					0
				},
				
				{
					"propeller1_blur_rotation",
					0
				},
				
				{
					"propeller2_rotation",
					0
				},
				
				{
					"propeller2_blur_rotation",
					0
				},
				
				{
					"propeller3_rotation",
					0
				},
				
				{
					"propeller3_blur_rotation",
					0
				},
				
				{
					"propeller4_rotation",
					0
				},
				
				{
					"propeller4_blur_rotation",
					0
				},
				
				{
					"propeller1_hide",
					0
				},
				
				{
					"propeller1_blur_hide",
					0
				},
				
				{
					"propeller2_hide",
					0
				},
				
				{
					"propeller2_blur_hide",
					0
				},
				
				{
					"propeller3_hide",
					0
				},
				
				{
					"propeller3_blur_hide",
					0
				},
				
				{
					"propeller4_hide",
					0
				},
				
				{
					"propeller4_blur_hide",
					0
				},
				
				{
					"mainturret",
					0
				},
				
				{
					"maingun",
					-0.050000001
				}
			};
			hide[]=
			{
				"zasleh",
				"tail rotor blur",
				"main rotor blur",
				"zadni svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=0.15000001;
			verticalOffsetWorld=-0.001;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\I_UAV_01_F.jpg";
		_generalMacro="I_G_UAV_01_DroneDropMineAT";
		displayName="$STR_Globe_CfgVehicles_UAV_01_DroneDropMineAT_base0";
		scope=2;
		side=2;
		faction="IND_G_F";
		crew="I_G_UAV_AI";
		typicalCargo[]=
		{
			"I_G_UAV_AI"
		};
		forceInGarage=0;
		accuracy=0.5;
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]={};
			displayName="";
		};
		hiddenSelectionsTextures[]=
		{
			"A3\Drones_F\Air_F_Gamma\UAV_01\Data\UAV_01_INDP_CO.paa"
		};
		textureList[]=
		{
			"Indep",
			1,
			"Opfor",
			0,
			"Blufor",
			0,
			"IDAP",
			0,
			"EAF",
			0
		};
	};
	class O_G_UAV_01_DroneDropMineAT: UAV_01_DroneDropMineAT_base
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
					"rotorimpacthide",
					0
				},
				
				{
					"tailrotorimpacthide",
					0
				},
				
				{
					"propeller1_rotation",
					0
				},
				
				{
					"propeller1_blur_rotation",
					0
				},
				
				{
					"propeller2_rotation",
					0
				},
				
				{
					"propeller2_blur_rotation",
					0
				},
				
				{
					"propeller3_rotation",
					0
				},
				
				{
					"propeller3_blur_rotation",
					0
				},
				
				{
					"propeller4_rotation",
					0
				},
				
				{
					"propeller4_blur_rotation",
					0
				},
				
				{
					"propeller1_hide",
					0
				},
				
				{
					"propeller1_blur_hide",
					0
				},
				
				{
					"propeller2_hide",
					0
				},
				
				{
					"propeller2_blur_hide",
					0
				},
				
				{
					"propeller3_hide",
					0
				},
				
				{
					"propeller3_blur_hide",
					0
				},
				
				{
					"propeller4_hide",
					0
				},
				
				{
					"propeller4_blur_hide",
					0
				},
				
				{
					"mainturret",
					0
				},
				
				{
					"maingun",
					-0.050000001
				}
			};
			hide[]=
			{
				"zasleh",
				"tail rotor blur",
				"main rotor blur",
				"zadni svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=0.15000001;
			verticalOffsetWorld=-0.001;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\O_UAV_01_F.jpg";
		_generalMacro="O_G_UAV_01_DroneDropMineAT";
		displayName="$STR_Globe_CfgVehicles_UAV_01_DroneDropMineAT_base0";
		scope=2;
		side=0;
		faction="OPF_G_F";
		crew="O_G_UAV_AI";
		typicalCargo[]=
		{
			"O_G_UAV_AI"
		};
		forceInGarage=0;
		accuracy=0.5;
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]={};
			displayName="";
		};
		hiddenSelectionsTextures[]=
		{
			"A3\Drones_F\Air_F_Gamma\UAV_01\Data\UAV_01_OPFOR_CO.paa"
		};
		textureList[]=
		{
			"Indep",
			0,
			"Opfor",
			1,
			"Blufor",
			0,
			"IDAP",
			0,
			"EAF",
			0
		};
	};
	class B_G_UAV_01_DroneDropMineAT: UAV_01_DroneDropMineAT_base
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
					"rotorimpacthide",
					0
				},
				
				{
					"tailrotorimpacthide",
					0
				},
				
				{
					"propeller1_rotation",
					0
				},
				
				{
					"propeller1_blur_rotation",
					0
				},
				
				{
					"propeller2_rotation",
					0
				},
				
				{
					"propeller2_blur_rotation",
					0
				},
				
				{
					"propeller3_rotation",
					0
				},
				
				{
					"propeller3_blur_rotation",
					0
				},
				
				{
					"propeller4_rotation",
					0
				},
				
				{
					"propeller4_blur_rotation",
					0
				},
				
				{
					"propeller1_hide",
					0
				},
				
				{
					"propeller1_blur_hide",
					0
				},
				
				{
					"propeller2_hide",
					0
				},
				
				{
					"propeller2_blur_hide",
					0
				},
				
				{
					"propeller3_hide",
					0
				},
				
				{
					"propeller3_blur_hide",
					0
				},
				
				{
					"propeller4_hide",
					0
				},
				
				{
					"propeller4_blur_hide",
					0
				},
				
				{
					"mainturret",
					0
				},
				
				{
					"maingun",
					-0.050000001
				}
			};
			hide[]=
			{
				"zasleh",
				"tail rotor blur",
				"main rotor blur",
				"zadni svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=0.15000001;
			verticalOffsetWorld=-0.001;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\B_UAV_01_F.jpg";
		_generalMacro="B_G_UAV_01_DroneDropMineAT";
		displayName="$STR_Globe_CfgVehicles_UAV_01_DroneDropMineAT_base0";
		scope=2;
		side=1;
		faction="BLU_G_F";
		crew="B_G_UAV_AI";
		typicalCargo[]=
		{
			"B_G_UAV_AI"
		};
		forceInGarage=1;
		accuracy=0.5;
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]={};
			displayName="";
		};
		hiddenSelectionsTextures[]=
		{
			"A3\Drones_F\Air_F_Gamma\UAV_01\Data\UAV_01_CO.paa"
		};
		textureList[]=
		{
			"Indep",
			0,
			"Opfor",
			0,
			"Blufor",
			1,
			"IDAP",
			0,
			"EAF",
			0
		};
	};
	class UAV_01_DroneDropMineDispenser_base: UAV_01_base_F
	{
		author="O&T Expansion Eden";
		_generalMacro="UAV_01_DroneDropMineDispenser_base";
		displayName="$STR_Globe_CfgVehicles_UAV_01_DroneDropMineDispenser_base0";
		class Components
		{
			class TransportPylonsComponent
			{
				UIPicture="a3\drones_f\air_f_gamma\uav_01\data\ui\map_uav_01_ca.paa";
				class pylons
				{
					class pylons1
					{
						maxweight=80;
						hardpoints[]=
						{
							"DRONE_DROP_MINE_DISPENSER"
						};
						attachment="DroneDropMineDispenserAPERS_magazine";
						bay=-1;
						priority=1;
						UIposition[]={0.31999999,0.28};
						turret[]={-1};
						mirroredMissilePos=0;
					};
				};
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				reportRemoteTargets=0;
				reportOwnPosition=0;
				hasDriver=1;
				hasGunner=0;
				enableManualFire=0;
				weapons[]=
				{
					"FakeWeapon"
				};
				magazines[]=
				{
					"FakeWeapon"
				};
			};
		};
		class Eventhandlers: Eventhandlers
		{
			class Globe_DarterDDMD
			{
				postInit="_this call expEden_fnc_droneDropMineDispenser";
				fired="deleteVehicle ((_this # 0) getVariable 'Globe_mines');";
				killed="deleteVehicle ((_this # 0) getVariable 'Globe_mines');";
				deleted="deleteVehicle ((_this # 0) getVariable 'Globe_mines');";
				UnregisteredFromWorld3DEN="deleteVehicle ((_this # 0) getVariable 'Globe_mines');";
			};
		};
	};
	class B_UAV_01_DroneDropMineDispenser: UAV_01_DroneDropMineDispenser_base
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
					"rotorimpacthide",
					0
				},
				
				{
					"tailrotorimpacthide",
					0
				},
				
				{
					"propeller1_rotation",
					0
				},
				
				{
					"propeller1_blur_rotation",
					0
				},
				
				{
					"propeller2_rotation",
					0
				},
				
				{
					"propeller2_blur_rotation",
					0
				},
				
				{
					"propeller3_rotation",
					0
				},
				
				{
					"propeller3_blur_rotation",
					0
				},
				
				{
					"propeller4_rotation",
					0
				},
				
				{
					"propeller4_blur_rotation",
					0
				},
				
				{
					"propeller1_hide",
					0
				},
				
				{
					"propeller1_blur_hide",
					0
				},
				
				{
					"propeller2_hide",
					0
				},
				
				{
					"propeller2_blur_hide",
					0
				},
				
				{
					"propeller3_hide",
					0
				},
				
				{
					"propeller3_blur_hide",
					0
				},
				
				{
					"propeller4_hide",
					0
				},
				
				{
					"propeller4_blur_hide",
					0
				},
				
				{
					"mainturret",
					0
				},
				
				{
					"maingun",
					-0.050000001
				}
			};
			hide[]=
			{
				"zasleh",
				"tail rotor blur",
				"main rotor blur",
				"zadni svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=0.15000001;
			verticalOffsetWorld=-0.001;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\B_UAV_01_F.jpg";
		_generalMacro="B_UAV_01_DroneDropMineDispenser";
		scope=2;
		side=1;
		faction="BLU_F";
		crew="B_UAV_AI";
		typicalCargo[]=
		{
			"B_UAV_AI"
		};
		forceInGarage=1;
		accuracy=0.5;
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]={};
			displayName="";
		};
		hiddenSelectionsTextures[]=
		{
			"A3\Drones_F\Air_F_Gamma\UAV_01\Data\UAV_01_CO.paa"
		};
		textureList[]=
		{
			"Blufor",
			1
		};
	};
	class O_UAV_01_DroneDropMineDispenser: UAV_01_DroneDropMineDispenser_base
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
					"rotorimpacthide",
					0
				},
				
				{
					"tailrotorimpacthide",
					0
				},
				
				{
					"propeller1_rotation",
					0
				},
				
				{
					"propeller1_blur_rotation",
					0
				},
				
				{
					"propeller2_rotation",
					0
				},
				
				{
					"propeller2_blur_rotation",
					0
				},
				
				{
					"propeller3_rotation",
					0
				},
				
				{
					"propeller3_blur_rotation",
					0
				},
				
				{
					"propeller4_rotation",
					0
				},
				
				{
					"propeller4_blur_rotation",
					0
				},
				
				{
					"propeller1_hide",
					0
				},
				
				{
					"propeller1_blur_hide",
					0
				},
				
				{
					"propeller2_hide",
					0
				},
				
				{
					"propeller2_blur_hide",
					0
				},
				
				{
					"propeller3_hide",
					0
				},
				
				{
					"propeller3_blur_hide",
					0
				},
				
				{
					"propeller4_hide",
					0
				},
				
				{
					"propeller4_blur_hide",
					0
				},
				
				{
					"mainturret",
					0
				},
				
				{
					"maingun",
					-0.050000001
				}
			};
			hide[]=
			{
				"zasleh",
				"tail rotor blur",
				"main rotor blur",
				"zadni svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=0.15000001;
			verticalOffsetWorld=-0.001;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\O_UAV_01_F.jpg";
		_generalMacro="O_UAV_01_DroneDropMineDispenser";
		displayName="$STR_Globe_CfgVehicles_UAV_01_DroneDropMineDispenser_base1";
		scope=2;
		side=0;
		faction="OPF_F";
		crew="O_UAV_AI";
		typicalCargo[]=
		{
			"O_UAV_AI"
		};
		forceInGarage=0;
		accuracy=0.5;
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]={};
			displayName="";
		};
		hiddenSelectionsTextures[]=
		{
			"A3\Drones_F\Air_F_Gamma\UAV_01\Data\UAV_01_OPFOR_CO.paa"
		};
		textureList[]=
		{
			"Opfor",
			1
		};
	};
	class I_UAV_01_DroneDropMineDispenser: UAV_01_DroneDropMineDispenser_base
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
					"rotorimpacthide",
					0
				},
				
				{
					"tailrotorimpacthide",
					0
				},
				
				{
					"propeller1_rotation",
					0
				},
				
				{
					"propeller1_blur_rotation",
					0
				},
				
				{
					"propeller2_rotation",
					0
				},
				
				{
					"propeller2_blur_rotation",
					0
				},
				
				{
					"propeller3_rotation",
					0
				},
				
				{
					"propeller3_blur_rotation",
					0
				},
				
				{
					"propeller4_rotation",
					0
				},
				
				{
					"propeller4_blur_rotation",
					0
				},
				
				{
					"propeller1_hide",
					0
				},
				
				{
					"propeller1_blur_hide",
					0
				},
				
				{
					"propeller2_hide",
					0
				},
				
				{
					"propeller2_blur_hide",
					0
				},
				
				{
					"propeller3_hide",
					0
				},
				
				{
					"propeller3_blur_hide",
					0
				},
				
				{
					"propeller4_hide",
					0
				},
				
				{
					"propeller4_blur_hide",
					0
				},
				
				{
					"mainturret",
					0
				},
				
				{
					"maingun",
					-0.050000001
				}
			};
			hide[]=
			{
				"zasleh",
				"tail rotor blur",
				"main rotor blur",
				"zadni svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=0.15000001;
			verticalOffsetWorld=-0.001;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\I_UAV_01_F.jpg";
		_generalMacro="I_UAV_01_DroneDropMineDispenser";
		scope=2;
		side=2;
		faction="IND_F";
		crew="I_UAV_AI";
		typicalCargo[]=
		{
			"I_UAV_AI"
		};
		forceInGarage=0;
		accuracy=0.5;
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]={};
			displayName="";
		};
		hiddenSelectionsTextures[]=
		{
			"A3\Drones_F\Air_F_Gamma\UAV_01\Data\UAV_01_INDP_CO.paa"
		};
		textureList[]=
		{
			"Indep",
			1
		};
	};
	class Land_DroneDropMineAT_01: Items_base_F
	{
		author="O&T Expansion Eden";
		mapSize=0.68000001;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.31900001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="";
		_generalMacro="Land_DroneDropMineAT_01";
		scope=1;
		scopeCurator=0;
		displayName="$STR_a3_cfgmagazines_mine0";
		model="\A3\Weapons_f\Explosives\mine_at.p3d";
		icon="iconObject_circle";
		destrType="DestructNo";
		editorSubcategory="EdSubcat_Military";
	};
	class I_E_UAV_01_DroneDropMineAT: UAV_01_DroneDropMineAT_base
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
					"rotorimpacthide",
					0
				},
				
				{
					"tailrotorimpacthide",
					0
				},
				
				{
					"propeller1_rotation",
					0
				},
				
				{
					"propeller1_blur_rotation",
					0
				},
				
				{
					"propeller2_rotation",
					0
				},
				
				{
					"propeller2_blur_rotation",
					0
				},
				
				{
					"propeller3_rotation",
					0
				},
				
				{
					"propeller3_blur_rotation",
					0
				},
				
				{
					"propeller4_rotation",
					0
				},
				
				{
					"propeller4_blur_rotation",
					0
				},
				
				{
					"propeller1_hide",
					0
				},
				
				{
					"propeller1_blur_hide",
					0
				},
				
				{
					"propeller2_hide",
					0
				},
				
				{
					"propeller2_blur_hide",
					0
				},
				
				{
					"propeller3_hide",
					0
				},
				
				{
					"propeller3_blur_hide",
					0
				},
				
				{
					"propeller4_hide",
					0
				},
				
				{
					"propeller4_blur_hide",
					0
				},
				
				{
					"mainturret",
					0
				},
				
				{
					"maingun",
					-0.050000001
				}
			};
			hide[]=
			{
				"zasleh",
				"tail rotor blur",
				"main rotor blur",
				"zadni svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=0.15000001;
			verticalOffsetWorld=-0.001;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\I_UAV_01_F.jpg";
		_generalMacro="I_G_UAV_01_DroneDropMineAT";
		displayName="$STR_Globe_CfgVehicles_UAV_01_DroneDropMineAT_base0";
		scope=2;
		side=2;
		faction="IND_E_F";
		crew="I_E_UAV_AI";
		typicalCargo[]=
		{
			"I_E_UAV_AI"
		};
		forceInGarage=0;
		accuracy=0.5;
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]={};
			displayName="";
		};
		hiddenSelectionsTextures[]=
		{
			"A3\Drones_F\Air_F_Gamma\UAV_01\Data\UAV_01_INDP_CO.paa"
		};
		textureList[]=
		{
			"Indep",
			1,
			"Opfor",
			0,
			"Blufor",
			0,
			"IDAP",
			0,
			"EAF",
			0
		};
	};
	class I_E_UAV_01_DroneDropMineDispenser: UAV_01_DroneDropMineDispenser_base
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
					"rotorimpacthide",
					0
				},
				
				{
					"tailrotorimpacthide",
					0
				},
				
				{
					"propeller1_rotation",
					0
				},
				
				{
					"propeller1_blur_rotation",
					0
				},
				
				{
					"propeller2_rotation",
					0
				},
				
				{
					"propeller2_blur_rotation",
					0
				},
				
				{
					"propeller3_rotation",
					0
				},
				
				{
					"propeller3_blur_rotation",
					0
				},
				
				{
					"propeller4_rotation",
					0
				},
				
				{
					"propeller4_blur_rotation",
					0
				},
				
				{
					"propeller1_hide",
					0
				},
				
				{
					"propeller1_blur_hide",
					0
				},
				
				{
					"propeller2_hide",
					0
				},
				
				{
					"propeller2_blur_hide",
					0
				},
				
				{
					"propeller3_hide",
					0
				},
				
				{
					"propeller3_blur_hide",
					0
				},
				
				{
					"propeller4_hide",
					0
				},
				
				{
					"propeller4_blur_hide",
					0
				},
				
				{
					"mainturret",
					0
				},
				
				{
					"maingun",
					-0.050000001
				}
			};
			hide[]=
			{
				"zasleh",
				"tail rotor blur",
				"main rotor blur",
				"zadni svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=0.15000001;
			verticalOffsetWorld=-0.001;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\I_UAV_01_F.jpg";
		_generalMacro="I_E_UAV_01_DroneDropMineDispenser";
		scope=2;
		side=2;
		faction="IND_E_F";
		crew="I_E_UAV_AI";
		typicalCargo[]=
		{
			"I_E_UAV_AI"
		};
		forceInGarage=0;
		accuracy=0.5;
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]={};
			displayName="";
		};
		hiddenSelectionsTextures[]=
		{
			"A3\Drones_F\Air_F_Gamma\UAV_01\Data\UAV_01_INDP_CO.paa"
		};
		textureList[]=
		{
			"Indep",
			1
		};
	};
};
