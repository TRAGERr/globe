class CfgPatches
{
	class Air_Globe_Heli_Transport_01
	{
		addonRootClass="Air_Globe";
		requiredAddons[]=
		{
			"Air_Globe"
		};
		requiredVersion=0.1;
		units[]=
		{
			"B_Heli_Transport_01_unarmed"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Helicopter_Base_F;
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class CargoTurret;
		class Turrets;
		class EventHandlers;
		class AnimationSources;
	};
	class Heli_Transport_01_base_F: Helicopter_Base_H
	{
		slingCargoDetachAir[]=
		{
			"slingCargoDetachAir0",
			"slingCargoDetachAir1"
		};
		slingCargoRopeBreak[]=
		{
			"slingCargoRopeBreak0",
			"slingCargoRopeBreak1"
		};
		class UserActions
		{
			class DoorL1_Open
			{
				condition="((this getVariable ['Globe_Disabled_Ramp', true]) isEqualTo false) && {((this doorPhase 'door_L') == 0) && Alive(this)} && {(objectParent player isNotEqualTo this) || (player in this)}";
			};
			class DoorR1_Open: DoorL1_Open
			{
				condition="((this getVariable ['Globe_Disabled_Ramp', true]) isEqualTo false) && {((this doorPhase 'door_R') == 0) && Alive(this)} && {(objectParent player isNotEqualTo this) || (player in this)}";
			};
			class DoorL1_Close: DoorL1_Open
			{
				condition="((this getVariable ['Globe_Disabled_Ramp', true]) isEqualTo false) && {((this doorPhase 'door_L') > 0) && Alive(this)} && {(objectParent player isNotEqualTo this) || (player in this)}";
			};
			class DoorR1_Close: DoorL1_Close
			{
				condition="((this getVariable ['Globe_Disabled_Ramp', true]) isEqualTo false) && {((this doorPhase 'door_R') > 0) && Alive(this)} && {(objectParent player isNotEqualTo this) || (player in this)}";
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
		class EventHandlers: EventHandlers
		{
		};
	};
	class Heli_Transport_01_unarmed_base: Heli_Transport_01_base_F
	{
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		class AnimationSources: AnimationSources
		{
			class HideExternalPylons
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
			class HideGun1
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class HideGun2
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
		};
		class CopilotTurret;
		getInProxyOrder[]={15,16,1,2,3,4};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction="passenger_inside_2";
				gunnerCompartments="Compartment3";
				memoryPointsGetInGunner="pos gunner";
				memoryPointsGetInGunnerDir="pos gunner dir";
				gunnerName="$STR_A3_TURRETS_CARGOTURRET_L";
				proxyIndex=15;
				LODTurnedIn=0;
				LODTurnedOut=0;
				LodOpticsIn=0;
				LodOpticsOut=0;
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{8.3837004,-41.3708},
						{12.027,-29.733101},
						{14.8088,-14.7721},
						{18.448299,3.5337999}
					};
					limitsArrayBottom[]=
					{
						{8.6843004,-38.454498},
						{-37.135101,-17.1224},
						{-33.4697,3.9172001},
						{-25.2817,22.5235},
						{-25.2397,23.394501}
					};
				};
				class TurnIn: TurnOut
				{
				};
				isPersonTurret=1;
				enabledByAnimationSource="";
				playerPosition=2;
				soundAttenuationTurret="HeliAttenuationRamp";
				disableSoundAttenuation=0;
				selectionFireAnim="";
				commanding=-3;
			};
			class CargoTurret_02: CargoTurret_01
			{
				memoryPointsGetInGunner="pos gunner2";
				memoryPointsGetInGunnerDir="pos gunner2 dir";
				gunnerName="$STR_A3_TURRETS_CARGOTURRET_R";
				LODTurnedIn=0;
				LODTurnedOut=0;
				LodOpticsIn=0;
				LodOpticsOut=0;
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{26.768999,-13.9198},
						{27.853001,-4.9935002},
						{29.562599,32.260399},
						{24.306101,58.953201}
					};
					limitsArrayBottom[]=
					{
						{-23.2078,-24.8825},
						{-22.3141,3.3217001},
						{-22.637899,19.986401}
					};
				};
				class TurnIn: TurnOut
				{
				};
				proxyIndex=16;
			};
			class PassengerTurret_01: CargoTurret
			{
				gunnerAction="passenger_inside_7";
				gunnerCompartments="Compartment3";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				gunnerName="$STR_Globe_turrets_cargoTurret_rDoor0";
				proxyIndex=1;
				LODTurnedIn=0;
				LODTurnedOut=0;
				LodOpticsIn=0;
				LodOpticsOut=0;
				maxElev=25;
				minElev=-50;
				maxTurn=0;
				minTurn=-40;
				isPersonTurret=1;
				enabledByAnimationSource="Door_R";
				playerPosition=2;
				soundAttenuationTurret="OpenHeliAttenuation";
				disableSoundAttenuation=0;
				selectionFireAnim="";
				commanding=-3;
			};
			class PassengerTurret_02: PassengerTurret_01
			{
				gunnerName="$STR_Globe_turrets_cargoTurret_rDoor1";
				proxyIndex=2;
				maxElev=25;
				minElev=-45;
				maxTurn=80;
				minTurn=0;
			};
			class PassengerTurret_03: PassengerTurret_01
			{
				gunnerName="$STR_Globe_turrets_cargoTurret_lDoor0";
				proxyIndex=3;
				maxElev=25;
				minElev=-45;
				maxTurn=40;
				minTurn=0;
				enabledByAnimationSource="Door_L";
			};
			class PassengerTurret_04: PassengerTurret_03
			{
				gunnerName="$STR_Globe_turrets_cargoTurret_lDoor1";
				proxyIndex=4;
				maxElev=25;
				minElev=-45;
				maxTurn=0;
				minTurn=-80;
			};
		};
		class TextureSources
		{
			class Green
			{
				displayName="$STR_A3_TEXTURESOURCES_GREEN0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_ext01_BLUFOR_CO.paa",
					"\A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_ext02_BLUFOR_CO.paa"
				};
				factions[]={};
			};
			class Black
			{
				displayName="$STR_A3_TEXTURESOURCES_BLACK0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_ext01_CO.paa",
					"\A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_ext02_CO.paa"
				};
				factions[]={};
			};
			class Sand
			{
				displayName="$STR_A3_TEXTURESOURCES_SAND0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Air_F_Exp\Heli_Transport_01\Data\Heli_Transport_01_ext01_sand_CO.paa",
					"\A3\Air_F_Exp\Heli_Transport_01\Data\Heli_Transport_01_ext02_sand_CO.paa"
				};
				factions[]={};
			};
			class Olive
			{
				displayName="$STR_A3_TEXTURESOURCES_OLIVE0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Air_F_Exp\Heli_Transport_01\Data\Heli_Transport_01_ext01_tropic_CO.paa",
					"\A3\Air_F_Exp\Heli_Transport_01\Data\Heli_Transport_01_ext02_tropic_CO.paa"
				};
				factions[]={};
			};
		};
		class EventHandlers: EventHandlers
		{
			class Globe_doorInitPhase
			{
				init="if (is3DEN) then {(_this select 0) animateDoor ['Door_L', 1, true]; (_this select 0) animateDoor ['Door_R', 1, true]}";
				postInit="(_this select 0) animateDoor ['Door_L', 1, true]; 	(_this select 0) animateDoor ['Door_R', 1, true]";
			};
		};
	};
	class B_Heli_Transport_01_unarmed: Heli_Transport_01_unarmed_base
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
					"hrotor",
					0
				},
				
				{
					"vrotor",
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
					"rotorimpacthide",
					0
				},
				
				{
					"tailrotorimpacthide",
					0
				},
				
				{
					"i_compass_pilot",
					0
				},
				
				{
					"i_compass_copilot",
					0
				},
				
				{
					"i_compass_middle",
					0
				},
				
				{
					"display_on",
					0
				},
				
				{
					"radar_on",
					0
				},
				
				{
					"radar2_on",
					0
				},
				
				{
					"i_altitude_100f",
					7.1399999
				},
				
				{
					"i_speed",
					0
				},
				
				{
					"i_speed_02",
					0
				},
				
				{
					"i_speed_03",
					0
				},
				
				{
					"i_speed02",
					0
				},
				
				{
					"i_speed02_02",
					0
				},
				
				{
					"i_speed02_03",
					0
				},
				
				{
					"i_vspeed",
					0
				},
				
				{
					"i_vspeed_02",
					0
				},
				
				{
					"i_vspeed_03",
					0
				},
				
				{
					"i_vspeed02",
					0
				},
				
				{
					"i_vspeed02_02",
					0
				},
				
				{
					"i_vspeed02_03",
					0
				},
				
				{
					"i_altitude02_100f",
					7.1399999
				},
				
				{
					"dg_pitch",
					0
				},
				
				{
					"dg_bank",
					0
				},
				
				{
					"dg_pitch2",
					0
				},
				
				{
					"dg_bank2",
					0
				},
				
				{
					"dg_vertspeed",
					0
				},
				
				{
					"dg_vertspeed2",
					0
				},
				
				{
					"i_rpm",
					0
				},
				
				{
					"i_rpm02",
					0
				},
				
				{
					"i_rpm03",
					0
				},
				
				{
					"i_rpm04",
					0
				},
				
				{
					"i_torque01",
					0
				},
				
				{
					"i_torque02",
					0
				},
				
				{
					"i_torque03",
					0
				},
				
				{
					"i_torque04",
					0
				},
				
				{
					"i_torque01_base",
					0
				},
				
				{
					"i_torque02_base",
					0
				},
				
				{
					"i_torque03_base",
					0
				},
				
				{
					"i_torque04_base",
					0
				},
				
				{
					"i_fuel",
					1
				},
				
				{
					"i_fuel_02",
					1
				},
				
				{
					"i_fuel_03",
					1
				},
				
				{
					"i_fuel_04",
					1
				},
				
				{
					"radar",
					92.470001
				},
				
				{
					"radar2",
					92.470001
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
					"wheel_rear_damper",
					0
				},
				
				{
					"wheel_left_damper",
					0
				},
				
				{
					"wheel_right_damper",
					0
				},
				
				{
					"reargear",
					0
				},
				
				{
					"rearrightcover",
					0
				},
				
				{
					"rearleftcover",
					0
				},
				
				{
					"rightgear",
					0
				},
				
				{
					"leftgear",
					0
				},
				
				{
					"rightgear_hide",
					0
				},
				
				{
					"leftgear_hide",
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
					"door_l",
					0
				},
				
				{
					"door_back_l_lock",
					0
				},
				
				{
					"door_r",
					0
				},
				
				{
					"door_back_r_lock",
					0
				},
				
				{
					"holdster",
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
					"mainturret",
					1.5700001
				},
				
				{
					"maingun",
					-0.25999999
				},
				
				{
					"mainturret2",
					-1.5700001
				},
				
				{
					"maingun2",
					-0.25999999
				},
				
				{
					"minigun",
					0.33000001
				},
				
				{
					"minigun2",
					0.33000001
				}
			};
			hide[]=
			{
				"clan",
				"zasleh",
				"zasleh_1",
				"light_l",
				"light_r",
				"tail rotor blur",
				"main rotor blur",
				"zadni svetlo",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=2.1919999;
			verticalOffsetWorld=0.052999999;
			postinit="[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\B_Heli_Transport_01_unarmed.jpg";
		_generalMacro="B_Heli_Transport_01_unarmed";
		scope=1;
		displayName="$STR_Globe_CfgVehicles_B_Heli_Transport_01_unarmed0";
		side=1;
		faction="BLU_F";
		crew="B_Helipilot_F";
		typicalCargo[]=
		{
			"B_Helipilot_F"
		};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_ext01_CO.paa",
			"\A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_ext02_CO.paa",
			"\a3\Air_F_Beta\heli_transport_01\data\heli_transport_01_ext01_add_co.paa"
		};
		textureList[]=
		{
			"Green",
			0.25,
			"Black",
			0.25,
			"Sand",
			0.25,
			"Olive",
			0.25
		};
		class AnimationSources: AnimationSources
		{
			class Door_L
			{
				source="door";
				animPeriod=1.6;
				initPhase=1;
				sound="Van_02_Door_Slide";
				soundPosition="axis_door_l";
			};
			class Door_R: Door_L
			{
				soundPosition="axis_door_r";
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
				defaultValue=0;
			};
		};
	};
};
