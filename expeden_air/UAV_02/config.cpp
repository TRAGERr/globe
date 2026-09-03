class CfgPatches
{
	class Air_Globe_UAV_02
	{
		addonRootClass="Air_Globe";
		requiredAddons[]=
		{
			"Air_Globe"
		};
		requiredVersion=0.1;
		units[]=
		{
			"I_UAV_02_LM_G",
			"O_UAV_02_LM_G",
			"B_UAV_02_LM_G"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class UAV_02_base_F;
	class B_UAV_02_LM_G: UAV_02_base_F
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"propeller",
					0
				},
				
				{
					"propellerstatic",
					0
				},
				
				{
					"propellerblurred",
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
					"flap_1_1",
					0
				},
				
				{
					"flap_2_1",
					0
				},
				
				{
					"aileron_1_1",
					0
				},
				
				{
					"aileron_2_1",
					0
				},
				
				{
					"rudder_1_1",
					0
				},
				
				{
					"rudder_2_1",
					0
				},
				
				{
					"frontgear_1",
					0
				},
				
				{
					"frontgear_1_support",
					0
				},
				
				{
					"frontgear_1_door_l",
					0
				},
				
				{
					"frontgear_1_door_r",
					0
				},
				
				{
					"backgear_1_door_l",
					0
				},
				
				{
					"backgear_1_door_r",
					0
				},
				
				{
					"frontgearsteering",
					0
				},
				
				{
					"frontgeardamper",
					0
				},
				
				{
					"maingear_2_1",
					0
				},
				
				{
					"maingear_2_1_support",
					0
				},
				
				{
					"maingear_2_2_support",
					0
				},
				
				{
					"maingear_2_2",
					0
				},
				
				{
					"maingear_2_1_suspension",
					0
				},
				
				{
					"maingear_2_2_suspension",
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
					"wheel_2_2",
					0
				},
				
				{
					"damagehide",
					0
				},
				
				{
					"missilea",
					1
				},
				
				{
					"missileb",
					1
				},
				
				{
					"missilea1",
					1
				},
				
				{
					"missilea2",
					1
				},
				
				{
					"missilea3",
					1
				},
				
				{
					"missileb1",
					1
				},
				
				{
					"missileb2",
					1
				},
				
				{
					"missileb3",
					1
				},
				
				{
					"positionlights",
					1
				},
				
				{
					"hideweapons",
					1
				}
			};
			hide[]=
			{
				"zasleh",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=1.589;
			verticalOffsetWorld=0.021;
			postinit="[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\B_UAV_02_dynamicLoadout_F.jpg";
		_generalMacro="B_UAV_02_LM_G";
		scope=2;
		scopeCurator=2;
		icon="\A3\Drones_F\Air_F_Gamma\UAV_02\Data\UI\Map_UAV_02_CA.paa";
		picture="\A3\Drones_F\Air_F_Gamma\UAV_02\Data\UI\UAV_02_base_F.paa";
		weapons[]=
		{
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"120Rnd_CMFlareMagazine"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Drones_F\Air_F_Gamma\UAV_02\Data\UAV_02_CO.paa"
		};
		class Armory
		{
			description="$STR_Globe_CfgVehicles_B_UAV_02_LM_G1";
		};
		side=1;
		faction="BLU_F";
		crew="B_UAV_AI";
		typicalCargo[]=
		{
			"B_UAV_AI"
		};
		displayName="$STR_Globe_CfgVehicles_B_UAV_02_LM_G0";
		disableInventory=1;
		armor=8;
		armorStructural=0.31;
		damageResistance=0.0010008001;
		fuelCapacity=500;
		fuelConsumptionRate=0.95;
		fuelExplosionPower=80;
		threat[]={1,1,0.1};
		cost=200000;
		airBrake=0;
		flaps=0;
		camouflage=150;
		audible=60;
		accuracy=0.02;
		alwaysTarget=1;
		irTargetSize=3.0;
		radarTargetSize=1.0;
		visualTargetSize=2.0;
		class Sounds
		{
			class EngineLowOut
			{
				sound[]=
				{
					"A3\Sounds_F\air\UAV_02\UAV_02_low_ext",
					0.70794576,
					1,
					450
				};
				frequency="1.0 min (rpm + 0.5)";
				volume="camPos*(rpm factor[0.95, 0])*(rpm factor[0, 0.95])";
			};
			class EngineHighOut
			{
				sound[]=
				{
					"A3\Sounds_F\air\UAV_02\UAV_02_high_ext",
					1,
					1,
					650
				};
				frequency="(rpm factor[0.5, 1.0])";
				volume="camPos*(rpm factor[0.2, 1.0])";
			};
			class ForsageOut
			{
				sound[]=
				{
					"A3\Sounds_F\air\UAV_02\UAV_02_forsage_ext",
					1.1220185,
					1,
					900
				};
				frequency=1;
				volume="engineOn*camPos*(thrust factor[0.6, 1.0])";
				cone[]={3.1400001,3.9200001,2,0.5};
			};
			class WindNoiseOut
			{
				sound[]=
				{
					"A3\Sounds_F\air\UAV_02\noise",
					0.31622776,
					1,
					150
				};
				frequency="(0.3+(1.005*(speed factor[1, 50])))";
				volume="camPos*(speed factor[1,  50])";
			};
			class RainExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain2_ext",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (rain - rotorSpeed/2) * 2";
			};
		};
		class Turrets
		{
		};
		lockDetectionSystem=0;
		incomingMissileDetectionSystem=0;
		laserscanner=0;
		showAllTargets=0;
		reportRemoteTargets=0;
		reportOwnPosition=0;
		class TextureSources
		{
			class Indep
			{
				displayName="$STR_A3_TEXTURESOURCES_INDEP0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Drones_F\Air_F_Gamma\UAV_02\Data\UAV_02_INDP_CO.paa"
				};
				factions[]={};
			};
			class Opfor
			{
				displayName="$STR_A3_TEXTURESOURCES_OPFOR0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Drones_F\Air_F_Gamma\UAV_02\Data\UAV_02_OPFOR_CO.paa"
				};
				factions[]={};
			};
			class Blufor
			{
				displayName="$STR_A3_TEXTURESOURCES_BLU0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Drones_F\Air_F_Gamma\UAV_02\Data\UAV_02_CO.paa"
				};
				factions[]={};
			};
		};
		textureList[]=
		{
			"Indep",
			1,
			"Opfor",
			1,
			"Blufor",
			1
		};
		class EventHandlers
		{
			class Globe_UAV02LM_EHs
			{
				postInit="_this call expEden_fnc_loiteringMunitionActionAdd;";
				killed="(_this # 0) call expEden_fnc_loiteringMunitionExplosion;";
			};
		};
	};
	class O_UAV_02_LM_G: B_UAV_02_LM_G
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\O_UAV_02_dynamicLoadout_F.jpg";
		_generalMacro="O_UAV_02_LM_G";
		scope=2;
		scopeCurator=2;
		hiddenSelectionsTextures[]=
		{
			"\A3\Drones_F\Air_F_Gamma\UAV_02\Data\UAV_02_OPFOR_CO.paa"
		};
		side=0;
		faction="OPF_F";
		crew="O_UAV_AI";
		typicalCargo[]=
		{
			"O_UAV_AI"
		};
		displayName="$STR_Globe_CfgVehicles_O_UAV_02_LM_G0";
	};
	class I_UAV_02_LM_G: B_UAV_02_LM_G
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\I_UAV_02_dynamicLoadout_F.jpg";
		_generalMacro="I_UAV_02_LM_G";
		scope=2;
		scopeCurator=2;
		hiddenSelectionsTextures[]=
		{
			"\A3\Drones_F\Air_F_Gamma\UAV_02\Data\UAV_02_INDP_CO.paa"
		};
		side=2;
		faction="IND_F";
		crew="I_UAV_AI";
		typicalCargo[]=
		{
			"I_UAV_AI"
		};
		displayName="$STR_Globe_CfgVehicles_I_UAV_02_LM_G0";
	};
};