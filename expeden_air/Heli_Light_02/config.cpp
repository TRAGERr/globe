class CfgPatches
{
	class Air_Globe_Heli_Light_02
	{
		addonRootClass="Air_Globe";
		requiredAddons[]=
		{
			"Air_Globe"
		};
		requiredVersion=0.1;
		units[]=
		{
			"C_Heli_Light_02",
			"I_Heli_Light_02_dynamicLoadout",
			"I_Heli_Light_02_unarmed"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Helicopter;
	class Helicopter_Base_F: Helicopter
	{
		class Turrets;
	};
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class Turrets: Turrets
		{
			class CopilotTurret;
		};
		class AnimationSources;
	};
	class Heli_Light_02_base_F: Helicopter_Base_H
	{
		class TextureSources
		{
			class Indep
			{
				displayName="$STR_A3_TEXTURESOURCES_INDEP0";
				author="O&T Expansion Eden";
				textures[]=
				{
					"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_INDP_CO.paa"
				};
				factions[]=
				{
					"IND_F"
				};
			};
			class CIV
			{
				author="O&T Expansion Eden";
				textures[]=
				{
					"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_Civilian_CO.paa"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class Doors
			{
				source="door";
				animPeriod=1;
				initPhase=0;
				sound="Van_02_Door_Slide";
				soundposition="Doors";
			};
		};
		class UserActions
		{
			class Doors_Open
			{
				userActionID=50;
				displayName="$STR_dn_out_o_door";
				radius=2.5;
				radiusView=0.2;
				showIn3D=17;
				available=0;
				priority=0.5;
				position="Doors";
				showWindow=1;
				onlyForPlayer=1;
				shortcut="";
				condition="((this getVariable ['Globe_Disabled_Ramp',true]) isEqualTo false) && {((this doorPhase 'Doors') == 0) AND Alive(this) AND driver this != player AND gunner this != player}";
				statement="this animateDoor ['Doors', 1]";
			};
			class Doors_Close: Doors_Open
			{
				userActionID=54;
				condition="((this getVariable ['Globe_Disabled_Ramp',true]) isEqualTo false) && {((this doorPhase 'Doors') > 0) AND Alive(this) AND driver this != player AND gunner this != player}";
				statement="this animateDoor ['Doors', 0]";
			};
		};
		class Attributes
		{
			class Globe_Disabled_Ramp
			{
				displayName="$STR_Globe_CfgVehicles_Attributes_Globe_Disabled_Ramp_0";
				tooltip="$STR_Globe_CfgVehicles_Attributes_Globe_Disabled_Ramp_1";
				property="Globe_Disabled_Ramp";
				control="Checkbox";
				expression="_this setVariable ['%s', _value, isServer];";
				defaultValue=1;
			};
		};
	};
	class Heli_Light_02_unarmed_base_F: Heli_Light_02_base_F
	{
	};
	class Heli_Light_02_dynamicLoadout_base_F: Heli_Light_02_base_F
	{
	};
	class I_Heli_Light_02_dynamicLoadout: Heli_Light_02_dynamicLoadout_base_F
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"rotor_destructx",
					0
				},
				
				{
					"rotor_destructy",
					0
				},
				
				{
					"mala_vrtule_destructy",
					0
				},
				
				{
					"mala_vrtule_destructz",
					0
				},
				
				{
					"damagehide",
					0
				},
				
				{
					"indicatoraltbaro",
					7.1700001
				},
				
				{
					"indicatoraltradar",
					-0.13
				},
				
				{
					"indicatorspeed",
					0
				},
				
				{
					"indicatorvertspeed",
					0
				},
				
				{
					"indicatorcompass",
					0
				},
				
				{
					"indicatorcompass2",
					0
				},
				
				{
					"watchhour",
					0.2
				},
				
				{
					"watchminute",
					0.41999999
				},
				
				{
					"hrotor",
					0
				},
				
				{
					"vrotor",
					0
				},
				
				{
					"horizonbank",
					0
				},
				
				{
					"horizondive",
					0.050000001
				},
				
				{
					"pedall",
					0
				},
				
				{
					"pedalr",
					0
				},
				
				{
					"tailrotorimpacthide",
					0
				},
				
				{
					"display_on",
					0
				},
				
				{
					"horizont1_bank",
					0
				},
				
				{
					"horizont1_pitch",
					0.050000001
				},
				
				{
					"horizont2_dive",
					0.050000001
				},
				
				{
					"horizont2_bank",
					0
				},
				
				{
					"indicatorrpm",
					0
				},
				
				{
					"indicatorrpm2",
					0
				},
				
				{
					"horizon2_bank_b",
					0
				},
				
				{
					"horizont3_dive",
					0.050000001
				},
				
				{
					"horizont3_bank",
					0
				},
				
				{
					"horizon3_bank_b",
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
					"indicatorcompass3",
					0
				},
				
				{
					"indicatorcompass4",
					0
				},
				
				{
					"dvere1",
					0
				},
				
				{
					"dvere1_posunz",
					0
				},
				
				{
					"dvere1_hide",
					0
				},
				
				{
					"dvere2",
					0
				},
				
				{
					"dvere2_posunz",
					0
				},
				
				{
					"dvere2_hide",
					0
				},
				
				{
					"damagehideglass1",
					0
				},
				
				{
					"damagehideglass2",
					0
				},
				
				{
					"damagehideglass3",
					0
				},
				
				{
					"damagehideglass4",
					0
				},
				
				{
					"damagehideglass5",
					0
				},
				
				{
					"damagehideglass6",
					0
				},
				
				{
					"damagehideglass7",
					0
				},
				
				{
					"damagehideglass8",
					0
				},
				
				{
					"damagehideglass9",
					0
				},
				
				{
					"damagehideglass10",
					0
				},
				
				{
					"damagehideglass11",
					0
				},
				
				{
					"damagehideglass12",
					0
				},
				
				{
					"damagehideglass13",
					0
				},
				
				{
					"damagehideglass14",
					0
				},
				
				{
					"wheel_1_1",
					0
				},
				
				{
					"wheel_1_2",
					0
				},
				
				{
					"wheel_2_1",
					0
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
					"machinegun",
					0.33000001
				},
				
				{
					"zaslehrot",
					611
				},
				
				{
					"hidepg_1",
					1
				},
				
				{
					"hidepg_2",
					1
				},
				
				{
					"hidepg_3",
					1
				},
				
				{
					"hidepg_4",
					1
				},
				
				{
					"hidepg_5",
					1
				},
				
				{
					"hidepg_6",
					1
				},
				
				{
					"hidepg_7",
					1
				},
				
				{
					"hidepg_8",
					1
				},
				
				{
					"hidepg_9",
					1
				},
				
				{
					"hidepg_10",
					1
				},
				
				{
					"hidepg_11",
					1
				},
				
				{
					"hidepg_12",
					1
				},
				
				{
					"stick_pilot_dive_01",
					0
				},
				
				{
					"stick_pilot_dive_02",
					0
				},
				
				{
					"stick_pilot_dive_03",
					0
				},
				
				{
					"stick_pilot_dive_04",
					0
				},
				
				{
					"stick_pilot_dive_05",
					0
				},
				
				{
					"stick_pilot_bank_01",
					0
				},
				
				{
					"stick_pilot_bank_02",
					0
				},
				
				{
					"stick_pilot_bank_03",
					0
				},
				
				{
					"stick_pilot_bank_04",
					0
				},
				
				{
					"stick_pilot_bank_05",
					0
				},
				
				{
					"stick_copilot_dive01",
					0
				},
				
				{
					"stick_copilot_dive02",
					0
				},
				
				{
					"stick_copilot_dive03",
					0
				},
				
				{
					"stick_copilot_dive04",
					0
				},
				
				{
					"stick_copilot_dive05",
					0
				},
				
				{
					"stick_copilot_bank01",
					0
				},
				
				{
					"stick_copilot_bank02",
					0
				},
				
				{
					"stick_copilot_bank03",
					0
				},
				
				{
					"stick_copilot_bank04",
					0
				},
				
				{
					"stick_copilot_bank05",
					0
				},
				
				{
					"lever_pilot",
					0
				},
				
				{
					"lever_copilot",
					0
				},
				
				{
					"hideweapons",
					0
				},
				
				{
					"hideminigun",
					0
				},
				
				{
					"rotorimpacthide",
					0
				},
				
				{
					"hiderockets_dl",
					1
				}
			};
			hide[]=
			{
				"clan",
				"zasleh",
				"light_r",
				"light_l",
				"tail rotor blur",
				"main rotor blur",
				"zadni svetlo",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=2.175;
			verticalOffsetWorld=0.0049999999;
			postinit="[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\I_Heli_Light_02_dynamicLoadout.jpg";
		_generalMacro="I_Heli_Light_02_dynamicLoadout";
		scope=2;
		forceInGarage=0;
		icon="\A3\Air_F\Heli_Light_02\Data\UI\Map_Heli_Light_02_rockets_CA.paa";
		picture="\A3\Air_F\Heli_Light_02\Data\UI\Heli_Light_02_rockets_CA.paa";
		side=2;
		faction="IND_F";
		crew="I_helipilot_F";
		accuracy=1.5;
		threat[]={0.80000001,1,0.80000001};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport",
			"CAS_Heli"
		};
		textureList[]=
		{
			"Indep",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_INDP_CO.paa"
		};
		cargoCompartments[]=
		{
			"Compartment3"
		};
		getInProxyOrder[]={7,8};
		cargoProxyIndexes[]={1,2,3,4,5,6};
		class CargoTurret;
		class Turrets: Turrets
		{
			class PassengerTurret_01: CargoTurret
			{
				gunnerAction="passenger_inside_8";
				gunnerCompartments="Compartment3";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				gunnerGetInAction="GetInHelicopterCargo";
				gunnerGetOutAction="GetOutHelicopterCargo";
				gunnerName="$STR_a3_turrets_cargoturret_r";
				proxyIndex=7;
				LODTurnedIn=0;
				LODTurnedOut=0;
				LodOpticsIn=0;
				LodOpticsOut=0;
				maxElev=25;
				minElev=-55;
				maxTurn=70;
				minTurn=-5;
				isPersonTurret=1;
				enabledByAnimationSource="Doors";
				playerPosition=2;
				soundAttenuationTurret="OpenHeliAttenuation";
				disableSoundAttenuation=0;
				selectionFireAnim="";
				commanding=1;
			};
			class PassengerTurret_02: PassengerTurret_01
			{
				gunnerAction="passenger_inside_8";
				gunnerName="$STR_a3_turrets_cargoturret_l";
				proxyIndex=8;
				maxElev=20;
				minElev=-40;
				maxTurn=70;
				minTurn=-5;
			};
		};
	};
	class I_Heli_Light_02_unarmed: Heli_Light_02_unarmed_base_F
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"rotor_destructx",
					0
				},
				
				{
					"rotor_destructy",
					0
				},
				
				{
					"mala_vrtule_destructy",
					0
				},
				
				{
					"mala_vrtule_destructz",
					0
				},
				
				{
					"damagehide",
					0
				},
				
				{
					"indicatoraltbaro",
					7.1700001
				},
				
				{
					"indicatoraltradar",
					-0.13
				},
				
				{
					"indicatorspeed",
					0
				},
				
				{
					"indicatorvertspeed",
					0
				},
				
				{
					"indicatorcompass",
					0
				},
				
				{
					"indicatorcompass2",
					0
				},
				
				{
					"watchhour",
					0.2
				},
				
				{
					"watchminute",
					0.41999999
				},
				
				{
					"hrotor",
					0
				},
				
				{
					"vrotor",
					0
				},
				
				{
					"horizonbank",
					0
				},
				
				{
					"horizondive",
					0.050000001
				},
				
				{
					"pedall",
					0
				},
				
				{
					"pedalr",
					0
				},
				
				{
					"tailrotorimpacthide",
					0
				},
				
				{
					"display_on",
					0
				},
				
				{
					"horizont1_bank",
					0
				},
				
				{
					"horizont1_pitch",
					0.050000001
				},
				
				{
					"horizont2_dive",
					0.050000001
				},
				
				{
					"horizont2_bank",
					0
				},
				
				{
					"indicatorrpm",
					0
				},
				
				{
					"indicatorrpm2",
					0
				},
				
				{
					"horizon2_bank_b",
					0
				},
				
				{
					"horizont3_dive",
					0.050000001
				},
				
				{
					"horizont3_bank",
					0
				},
				
				{
					"horizon3_bank_b",
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
					"indicatorcompass3",
					0
				},
				
				{
					"indicatorcompass4",
					0
				},
				
				{
					"dvere1",
					0
				},
				
				{
					"dvere1_posunz",
					0
				},
				
				{
					"dvere1_hide",
					0
				},
				
				{
					"dvere2",
					0
				},
				
				{
					"dvere2_posunz",
					0
				},
				
				{
					"dvere2_hide",
					0
				},
				
				{
					"damagehideglass1",
					0
				},
				
				{
					"damagehideglass2",
					0
				},
				
				{
					"damagehideglass3",
					0
				},
				
				{
					"damagehideglass4",
					0
				},
				
				{
					"damagehideglass5",
					0
				},
				
				{
					"damagehideglass6",
					0
				},
				
				{
					"damagehideglass7",
					0
				},
				
				{
					"damagehideglass8",
					0
				},
				
				{
					"damagehideglass9",
					0
				},
				
				{
					"damagehideglass10",
					0
				},
				
				{
					"damagehideglass11",
					0
				},
				
				{
					"damagehideglass12",
					0
				},
				
				{
					"damagehideglass13",
					0
				},
				
				{
					"damagehideglass14",
					0
				},
				
				{
					"wheel_1_1",
					0
				},
				
				{
					"wheel_1_2",
					0
				},
				
				{
					"wheel_2_1",
					0
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
					"machinegun",
					0
				},
				
				{
					"zaslehrot",
					0
				},
				
				{
					"hidepg_1",
					0
				},
				
				{
					"hidepg_2",
					0
				},
				
				{
					"hidepg_3",
					0
				},
				
				{
					"hidepg_4",
					0
				},
				
				{
					"hidepg_5",
					0
				},
				
				{
					"hidepg_6",
					0
				},
				
				{
					"hidepg_7",
					0
				},
				
				{
					"hidepg_8",
					0
				},
				
				{
					"hidepg_9",
					0
				},
				
				{
					"hidepg_10",
					0
				},
				
				{
					"hidepg_11",
					0
				},
				
				{
					"hidepg_12",
					0
				},
				
				{
					"stick_pilot_dive_01",
					0
				},
				
				{
					"stick_pilot_dive_02",
					0
				},
				
				{
					"stick_pilot_dive_03",
					0
				},
				
				{
					"stick_pilot_dive_04",
					0
				},
				
				{
					"stick_pilot_dive_05",
					0
				},
				
				{
					"stick_pilot_bank_01",
					0
				},
				
				{
					"stick_pilot_bank_02",
					0
				},
				
				{
					"stick_pilot_bank_03",
					0
				},
				
				{
					"stick_pilot_bank_04",
					0
				},
				
				{
					"stick_pilot_bank_05",
					0
				},
				
				{
					"stick_copilot_dive01",
					0
				},
				
				{
					"stick_copilot_dive02",
					0
				},
				
				{
					"stick_copilot_dive03",
					0
				},
				
				{
					"stick_copilot_dive04",
					0
				},
				
				{
					"stick_copilot_dive05",
					0
				},
				
				{
					"stick_copilot_bank01",
					0
				},
				
				{
					"stick_copilot_bank02",
					0
				},
				
				{
					"stick_copilot_bank03",
					0
				},
				
				{
					"stick_copilot_bank04",
					0
				},
				
				{
					"stick_copilot_bank05",
					0
				},
				
				{
					"lever_pilot",
					0
				},
				
				{
					"lever_copilot",
					0
				},
				
				{
					"hideweapons",
					1
				},
				
				{
					"hideminigun",
					1
				},
				
				{
					"rotorimpacthide",
					0
				},
				
				{
					"hiderockets_dl",
					1
				}
			};
			hide[]=
			{
				"clan",
				"zasleh",
				"light_r",
				"light_l",
				"tail rotor blur",
				"main rotor blur",
				"zadni svetlo",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=2.175;
			verticalOffsetWorld=0.0049999999;
			postinit="[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\I_Heli_Light_02_unarmed.jpg";
		_generalMacro="I_Heli_Light_02_unarmed";
		scope=2;
		forceInGarage=0;
		displayName="$STR_A3_CfgVehicles_O_Heli_Light_02_Unarmed_F0";
		side=2;
		faction="IND_F";
		crew="I_helipilot_F";
		accuracy=1.5;
		textureList[]=
		{
			"Indep",
			1,
			"Black",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_CO.paa"
		};
		cargoCompartments[]=
		{
			"Compartment3"
		};
		getInProxyOrder[]={7,8};
		cargoProxyIndexes[]={1,2,3,4,5,6};
		class CargoTurret;
		class Turrets: Turrets
		{
			class PassengerTurret_01: CargoTurret
			{
				gunnerAction="passenger_inside_8";
				gunnerCompartments="Compartment3";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				gunnerGetInAction="GetInHelicopterCargo";
				gunnerGetOutAction="GetOutHelicopterCargo";
				gunnerName="$STR_a3_turrets_cargoturret_r";
				proxyIndex=7;
				LODTurnedIn=0;
				LODTurnedOut=0;
				LodOpticsIn=0;
				LodOpticsOut=0;
				maxElev=25;
				minElev=-55;
				maxTurn=70;
				minTurn=-5;
				isPersonTurret=1;
				enabledByAnimationSource="Doors";
				playerPosition=2;
				soundAttenuationTurret="OpenHeliAttenuation";
				disableSoundAttenuation=0;
				selectionFireAnim="";
				commanding=1;
			};
			class PassengerTurret_02: PassengerTurret_01
			{
				gunnerAction="passenger_inside_8";
				gunnerName="$STR_a3_turrets_cargoturret_l";
				proxyIndex=8;
				maxElev=20;
				minElev=-40;
				maxTurn=70;
				minTurn=-5;
			};
		};
	};
	class C_Heli_Light_02: Heli_Light_02_unarmed_base_F
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"rotor_destructx",
					0
				},
				
				{
					"rotor_destructy",
					0
				},
				
				{
					"mala_vrtule_destructy",
					0
				},
				
				{
					"mala_vrtule_destructz",
					0
				},
				
				{
					"damagehide",
					0
				},
				
				{
					"indicatoraltbaro",
					7.1700001
				},
				
				{
					"indicatoraltradar",
					-0.13
				},
				
				{
					"indicatorspeed",
					0
				},
				
				{
					"indicatorvertspeed",
					0
				},
				
				{
					"indicatorcompass",
					0
				},
				
				{
					"indicatorcompass2",
					0
				},
				
				{
					"watchhour",
					0.2
				},
				
				{
					"watchminute",
					0.41999999
				},
				
				{
					"hrotor",
					0
				},
				
				{
					"vrotor",
					0
				},
				
				{
					"horizonbank",
					0
				},
				
				{
					"horizondive",
					0.050000001
				},
				
				{
					"pedall",
					0
				},
				
				{
					"pedalr",
					0
				},
				
				{
					"tailrotorimpacthide",
					0
				},
				
				{
					"display_on",
					0
				},
				
				{
					"horizont1_bank",
					0
				},
				
				{
					"horizont1_pitch",
					0.050000001
				},
				
				{
					"horizont2_dive",
					0.050000001
				},
				
				{
					"horizont2_bank",
					0
				},
				
				{
					"indicatorrpm",
					0
				},
				
				{
					"indicatorrpm2",
					0
				},
				
				{
					"horizon2_bank_b",
					0
				},
				
				{
					"horizont3_dive",
					0.050000001
				},
				
				{
					"horizont3_bank",
					0
				},
				
				{
					"horizon3_bank_b",
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
					"indicatorcompass3",
					0
				},
				
				{
					"indicatorcompass4",
					0
				},
				
				{
					"dvere1",
					0
				},
				
				{
					"dvere1_posunz",
					0
				},
				
				{
					"dvere1_hide",
					0
				},
				
				{
					"dvere2",
					0
				},
				
				{
					"dvere2_posunz",
					0
				},
				
				{
					"dvere2_hide",
					0
				},
				
				{
					"damagehideglass1",
					0
				},
				
				{
					"damagehideglass2",
					0
				},
				
				{
					"damagehideglass3",
					0
				},
				
				{
					"damagehideglass4",
					0
				},
				
				{
					"damagehideglass5",
					0
				},
				
				{
					"damagehideglass6",
					0
				},
				
				{
					"damagehideglass7",
					0
				},
				
				{
					"damagehideglass8",
					0
				},
				
				{
					"damagehideglass9",
					0
				},
				
				{
					"damagehideglass10",
					0
				},
				
				{
					"damagehideglass11",
					0
				},
				
				{
					"damagehideglass12",
					0
				},
				
				{
					"damagehideglass13",
					0
				},
				
				{
					"damagehideglass14",
					0
				},
				
				{
					"wheel_1_1",
					0
				},
				
				{
					"wheel_1_2",
					0
				},
				
				{
					"wheel_2_1",
					0
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
					"machinegun",
					0
				},
				
				{
					"zaslehrot",
					0
				},
				
				{
					"hidepg_1",
					0
				},
				
				{
					"hidepg_2",
					0
				},
				
				{
					"hidepg_3",
					0
				},
				
				{
					"hidepg_4",
					0
				},
				
				{
					"hidepg_5",
					0
				},
				
				{
					"hidepg_6",
					0
				},
				
				{
					"hidepg_7",
					0
				},
				
				{
					"hidepg_8",
					0
				},
				
				{
					"hidepg_9",
					0
				},
				
				{
					"hidepg_10",
					0
				},
				
				{
					"hidepg_11",
					0
				},
				
				{
					"hidepg_12",
					0
				},
				
				{
					"stick_pilot_dive_01",
					0
				},
				
				{
					"stick_pilot_dive_02",
					0
				},
				
				{
					"stick_pilot_dive_03",
					0
				},
				
				{
					"stick_pilot_dive_04",
					0
				},
				
				{
					"stick_pilot_dive_05",
					0
				},
				
				{
					"stick_pilot_bank_01",
					0
				},
				
				{
					"stick_pilot_bank_02",
					0
				},
				
				{
					"stick_pilot_bank_03",
					0
				},
				
				{
					"stick_pilot_bank_04",
					0
				},
				
				{
					"stick_pilot_bank_05",
					0
				},
				
				{
					"stick_copilot_dive01",
					0
				},
				
				{
					"stick_copilot_dive02",
					0
				},
				
				{
					"stick_copilot_dive03",
					0
				},
				
				{
					"stick_copilot_dive04",
					0
				},
				
				{
					"stick_copilot_dive05",
					0
				},
				
				{
					"stick_copilot_bank01",
					0
				},
				
				{
					"stick_copilot_bank02",
					0
				},
				
				{
					"stick_copilot_bank03",
					0
				},
				
				{
					"stick_copilot_bank04",
					0
				},
				
				{
					"stick_copilot_bank05",
					0
				},
				
				{
					"lever_pilot",
					0
				},
				
				{
					"lever_copilot",
					0
				},
				
				{
					"hideweapons",
					1
				},
				
				{
					"hideminigun",
					1
				},
				
				{
					"rotorimpacthide",
					0
				},
				
				{
					"hiderockets_dl",
					1
				}
			};
			hide[]=
			{
				"clan",
				"zasleh",
				"light_r",
				"light_l",
				"tail rotor blur",
				"main rotor blur",
				"zadni svetlo",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=2.175;
			verticalOffsetWorld=0.0049999999;
			postinit="[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\C_Heli_Light_02.jpg";
		_generalMacro="C_Heli_Light_02";
		scope=2;
		displayName="$STR_Globe_CfgVehicles_C_Heli_Light_020";
		side=3;
		faction="CIV_F";
		crew="C_Man_casual_isntArt";
		accuracy=1.5;
		textureList[]=
		{
			"CIV",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_Civilian_CO.paa"
		};
		weapons[]={};
		magazines[]={};
		threat[]={0,0,0};
		cargoCompartments[]=
		{
			"Compartment3"
		};
		getInProxyOrder[]={7,8};
		cargoProxyIndexes[]={1,2,3,4,5,6};
		class CargoTurret;
		class Turrets: Turrets
		{
			class PassengerTurret_01: CargoTurret
			{
				gunnerAction="passenger_inside_8";
				gunnerCompartments="Compartment3";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				gunnerGetInAction="GetInHelicopterCargo";
				gunnerGetOutAction="GetOutHelicopterCargo";
				gunnerName="$STR_a3_turrets_cargoturret_r";
				proxyIndex=7;
				LODTurnedIn=0;
				LODTurnedOut=0;
				LodOpticsIn=0;
				LodOpticsOut=0;
				maxElev=25;
				minElev=-55;
				maxTurn=70;
				minTurn=-5;
				isPersonTurret=1;
				enabledByAnimationSource="Doors";
				playerPosition=2;
				soundAttenuationTurret="OpenHeliAttenuation";
				disableSoundAttenuation=0;
				selectionFireAnim="";
				commanding=1;
			};
			class PassengerTurret_02: PassengerTurret_01
			{
				gunnerAction="passenger_inside_8";
				gunnerName="$STR_a3_turrets_cargoturret_l";
				proxyIndex=8;
				maxElev=20;
				minElev=-40;
				maxTurn=70;
				minTurn=-5;
			};
		};
	};
};
