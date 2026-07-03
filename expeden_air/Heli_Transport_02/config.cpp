class CfgPatches
{
	class Air_Globe_Heli_Transport_02
	{
		addonRootClass="Air_Globe";
		requiredAddons[]=
		{
			"Air_Globe"
		};
		requiredVersion=0.1;
		units[]=
		{
			"I_Heli_Transport_02_unarmed",
			"C_Heli_Transport_02"
		};
		weapons[]={};
	};
};
class VehicleSystemsTemplateLeftPilot;
class VehicleSystemsTemplateRightPilot;
class CfgVehicles
{
	class Helicopter;
	class Helicopter_Base_F: Helicopter
	{
		class Turrets;
	};
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class RotorLibHelicopterProperties;
		class ViewPilot;
		class ViewOptics;
		class Turrets: Turrets
		{
			class CopilotTurret;
		};
		class AnimationSources;
		class EventHandlers;
	};
	class Heli_Transport_02_base_F: Helicopter_Base_H
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
		class Turrets: Turrets
		{
			class CopilotTurret;
		};
		class TextureSources
		{
			class AAF
			{
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F",
					"IND_G_F",
					"CIV_F",
					"BLU_G_F",
					"OPF_G_F",
					"IND_C_F",
					"BLU_T_F",
					"BLU_CTRG_F",
					"BLU_GEN_F",
					"OPF_T_F",
					"OPF_V_F",
					"CIV_IDAP_F",
					"IND_E_F",
					"IND_L_F",
					"BLU_W_F",
					"OPF_R_F",
					"OPF_GEN_F"
				};
			};
			class ION
			{
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F",
					"IND_G_F",
					"CIV_F",
					"BLU_G_F",
					"OPF_G_F",
					"IND_C_F",
					"BLU_T_F",
					"BLU_CTRG_F",
					"BLU_GEN_F",
					"OPF_T_F",
					"OPF_V_F",
					"CIV_IDAP_F",
					"IND_E_F",
					"IND_L_F",
					"BLU_W_F",
					"OPF_R_F",
					"OPF_GEN_F"
				};
			};
			class Dahoman
			{
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F",
					"IND_G_F",
					"CIV_F",
					"BLU_G_F",
					"OPF_G_F",
					"IND_C_F",
					"BLU_T_F",
					"BLU_CTRG_F",
					"BLU_GEN_F",
					"OPF_T_F",
					"OPF_V_F",
					"CIV_IDAP_F",
					"IND_E_F",
					"IND_L_F",
					"BLU_W_F",
					"OPF_R_F",
					"OPF_GEN_F"
				};
			};
			class DahomanBlue
			{
				displayName="$STR_Globe_CfgVehicles_TextureSources_DahomanBlue_displayName";
				author="O&T Expansion Eden";
				textures[]=
				{
					"A3\Air_F_Beta\Heli_Transport_02\Data\Skins\Heli_Transport_02_1_Dahoman_CO.paa",
					"A3\Air_F_Beta\Heli_Transport_02\Data\Skins\Heli_Transport_02_2_Dahoman_CO.paa",
					"A3\Air_F_Beta\Heli_Transport_02\Data\Skins\Heli_Transport_02_3_Dahoman_CO.paa",
					"A3\Air_F_Orange\Heli_Transport_02\Data\Heli_Transport_02_int_02_IDAP_CO.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F",
					"IND_G_F",
					"CIV_F",
					"BLU_G_F",
					"OPF_G_F",
					"IND_C_F",
					"BLU_T_F",
					"BLU_CTRG_F",
					"BLU_GEN_F",
					"OPF_T_F",
					"OPF_V_F",
					"CIV_IDAP_F",
					"IND_E_F",
					"IND_L_F",
					"BLU_W_F",
					"OPF_R_F",
					"OPF_GEN_F"
				};
			};
			class IONBlue
			{
				displayName="$STR_Globe_CfgVehicles_TextureSources_IONBlue_displayName";
				author="O&T Expansion Eden";
				textures[]=
				{
					"A3\Air_F_Beta\Heli_Transport_02\Data\Skins\Heli_Transport_02_1_ION_CO.paa",
					"A3\Air_F_Beta\Heli_Transport_02\Data\Skins\Heli_Transport_02_2_ION_CO.paa",
					"A3\Air_F_Beta\Heli_Transport_02\Data\Skins\Heli_Transport_02_3_ION_CO.paa",
					"A3\Air_F_Orange\Heli_Transport_02\Data\Heli_Transport_02_int_02_IDAP_CO.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F",
					"IND_G_F",
					"CIV_F",
					"BLU_G_F",
					"OPF_G_F",
					"IND_C_F",
					"BLU_T_F",
					"BLU_CTRG_F",
					"BLU_GEN_F",
					"OPF_T_F",
					"OPF_V_F",
					"CIV_IDAP_F",
					"IND_E_F",
					"IND_L_F",
					"BLU_W_F",
					"OPF_R_F",
					"OPF_GEN_F"
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class CargoRamp_Open
			{
				source="door";
				animPeriod=5;
				initPhase=0;
				sound="ServoRampSound_2";
				soundPosition="cargoramp_axis";
			};
			class Door_Back_L
			{
				source="door";
				animPeriod=0.60000002;
				sound="ServoDoorsSound";
				soundPosition="door_back_l_axis";
			};
			class Door_Back_R
			{
				source="door";
				animPeriod=0.60000002;
				sound="ServoDoorsSound";
				soundPosition="door_back_r_axis";
			};
		};
		class UserActions
		{
			class DoorL1_Open
			{
				radius=6;
				condition="((this getVariable ['Globe_Disabled_Ramp',true]) isEqualTo false) && {this animationPhase 'door_back_L' < 0.5 AND Alive(this)} && (player in this)";
			};
			class DoorR1_Open: DoorL1_Open
			{
				condition="((this getVariable ['Globe_Disabled_Ramp',true]) isEqualTo false) && {this animationPhase 'door_back_R' < 0.5 AND Alive(this)}&&(player in this)";
			};
			class DoorL1_Close: DoorL1_Open
			{
				condition="((this getVariable ['Globe_Disabled_Ramp',true]) isEqualTo false) && {this animationPhase 'door_back_L' > 0.5 AND Alive(this)}&&(player in this)";
			};
			class DoorR1_Close: DoorL1_Close
			{
				condition="((this getVariable ['Globe_Disabled_Ramp',true]) isEqualTo false) && {this animationPhase 'door_back_R' > 0.5 AND Alive(this)}&&(player in this)";
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
	class C_Heli_Transport_02: Heli_Transport_02_base_F
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"rotorshaftm",
					0
				},
				
				{
					"bladem01_joint_horizontal_axis",
					0
				},
				
				{
					"bladem02_joint_horizontal_axis",
					0
				},
				
				{
					"bladem03_joint_horizontal_axis",
					0
				},
				
				{
					"bladem04_joint_horizontal_axis",
					0
				},
				
				{
					"bladem01_dive",
					0
				},
				
				{
					"bladem02_dive",
					0
				},
				
				{
					"bladem03_dive",
					0
				},
				
				{
					"bladem04_dive",
					0
				},
				
				{
					"bladem01_bank",
					0
				},
				
				{
					"bladem02_bank",
					0
				},
				
				{
					"bladem03_bank",
					0
				},
				
				{
					"bladem04_bank",
					0
				},
				
				{
					"bladem01_blur_rotation",
					0
				},
				
				{
					"bladem02_rotation",
					0
				},
				
				{
					"bladem03_rotation",
					0
				},
				
				{
					"bladem04_rotation",
					0
				},
				
				{
					"vrotor",
					0
				},
				
				{
					"i_altitude_100f",
					8.6099997
				},
				
				{
					"i_altitude_1000f",
					8.6099997
				},
				
				{
					"i_altitude_10000f",
					8.6099997
				},
				
				{
					"i_compass",
					0
				},
				
				{
					"i_wp",
					0
				},
				
				{
					"damagehide",
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
					"pedall",
					0
				},
				
				{
					"pedalr",
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
					"frontgear",
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
					"right_gear_d",
					-0.0099999998
				},
				
				{
					"left_gear_d",
					-0.0099999998
				},
				
				{
					"front_gear_d",
					-0.0099999998
				},
				
				{
					"door_back_l",
					0
				},
				
				{
					"door_back_l_lock",
					0
				},
				
				{
					"door_back_r",
					0
				},
				
				{
					"door_back_r_lock",
					0
				},
				
				{
					"swashplate_rotation",
					0
				},
				
				{
					"swashplate_dive",
					0
				},
				
				{
					"swashplate_bank",
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
					"cargoramp_open",
					0
				},
				
				{
					"cargoramp_hide",
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
					"damagehideglass15",
					0
				},
				
				{
					"damagehideglass16",
					0
				},
				
				{
					"damagehideglass17",
					0
				},
				
				{
					"display_on",
					0
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
					8.6099997
				},
				
				{
					"i_altitude02_1000f",
					8.6099997
				},
				
				{
					"i_altitude02_10000f",
					8.6099997
				},
				
				{
					"i_horizona",
					0
				},
				
				{
					"i_horizonb",
					0
				},
				
				{
					"i_horizona02",
					0
				},
				
				{
					"i_horizonb02",
					0
				},
				
				{
					"i_compass02",
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
					"i_fuel",
					1
				},
				
				{
					"i_fuel02",
					1
				},
				
				{
					"i_fuel03",
					1
				},
				
				{
					"i_fuel04",
					1
				},
				
				{
					"i_fuel05",
					1
				},
				
				{
					"i_fuel06",
					1
				},
				
				{
					"i_fuelpress",
					0
				},
				
				{
					"i_fuelpress02",
					0
				},
				
				{
					"i_oilpress",
					0
				},
				
				{
					"i_oilpress02",
					0
				},
				
				{
					"i_oilpress03",
					0
				},
				
				{
					"i_oilpress04",
					0
				},
				
				{
					"i_oilpress05",
					0
				},
				
				{
					"i_oilpress06",
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
					"i_tot",
					711.33002
				},
				
				{
					"i_tot02",
					711.33002
				},
				
				{
					"i_tot03",
					711.33002
				},
				
				{
					"i_tot04",
					711.33002
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
					"clock_hour",
					0.15000001
				},
				
				{
					"clock_minute",
					0.81999999
				},
				
				{
					"clock_second",
					0.30000001
				}
			};
			hide[]=
			{
				"clan",
				"zasleh",
				"light",
				"tail rotor blur",
				"main rotor blur",
				"zadni svetlo",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=3.52;
			verticalOffsetWorld=-0.090000004;
			init="[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\C_Heli_Transport_02.jpg";
		_generalMacro="C_Heli_Transport_02";
		scope=2;
		scopeCurator=2;
		displayName="M-302";
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=16;
			};
			class _xx_Medikit_Civilian_01
			{
				name="Medikit_Civilian_01";
				count=1;
			};
			class _xx_ItemGPS
			{
				name="ItemGPS";
				count=1;
			};
			class _xx_Toolkit
			{
				name="Toolkit";
				count=1;
			};
		};
		crew="C_Man_casual_isntArt";
		typicalCargo[]=
		{
			"C_Man_casual_isntArt"
		};
		side=3;
		faction="CIV_F";
		textureList[]=
		{
			"AAF",
			0.125,
			"Dahoman",
			0.125,
			"DahomanBlue",
			0.5,
			"ION",
			0.125,
			"IONBlue",
			0.125
		};
		hiddenSelectionsTextures[]=
		{
			"A3\Air_F_Beta\Heli_Transport_02\Data\Skins\Heli_Transport_02_1_Dahoman_CO.paa",
			"A3\Air_F_Beta\Heli_Transport_02\Data\Skins\Heli_Transport_02_2_Dahoman_CO.paa",
			"A3\Air_F_Beta\Heli_Transport_02\Data\Skins\Heli_Transport_02_3_Dahoman_CO.paa",
			"A3\Air_F_Orange\Heli_Transport_02\Data\Heli_Transport_02_int_02_IDAP_CO.paa"
		};
		availableForSupportTypes[]={};
		threat[]={0,0,0};
	};
	class I_Heli_Transport_02_unarmed: Heli_Transport_02_base_F
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"rotorshaftm",
					0
				},
				
				{
					"bladem01_joint_horizontal_axis",
					0
				},
				
				{
					"bladem02_joint_horizontal_axis",
					0
				},
				
				{
					"bladem03_joint_horizontal_axis",
					0
				},
				
				{
					"bladem04_joint_horizontal_axis",
					0
				},
				
				{
					"bladem01_dive",
					0
				},
				
				{
					"bladem02_dive",
					0
				},
				
				{
					"bladem03_dive",
					0
				},
				
				{
					"bladem04_dive",
					0
				},
				
				{
					"bladem01_bank",
					0
				},
				
				{
					"bladem02_bank",
					0
				},
				
				{
					"bladem03_bank",
					0
				},
				
				{
					"bladem04_bank",
					0
				},
				
				{
					"bladem01_blur_rotation",
					0
				},
				
				{
					"bladem02_rotation",
					0
				},
				
				{
					"bladem03_rotation",
					0
				},
				
				{
					"bladem04_rotation",
					0
				},
				
				{
					"vrotor",
					0
				},
				
				{
					"i_altitude_100f",
					8.6099997
				},
				
				{
					"i_altitude_1000f",
					8.6099997
				},
				
				{
					"i_altitude_10000f",
					8.6099997
				},
				
				{
					"i_compass",
					0
				},
				
				{
					"i_wp",
					0
				},
				
				{
					"damagehide",
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
					"pedall",
					0
				},
				
				{
					"pedalr",
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
					"frontgear",
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
					"right_gear_d",
					-0.0099999998
				},
				
				{
					"left_gear_d",
					-0.0099999998
				},
				
				{
					"front_gear_d",
					-0.0099999998
				},
				
				{
					"door_back_l",
					1
				},
				
				{
					"door_back_l_lock",
					0
				},
				
				{
					"door_back_r",
					1
				},
				
				{
					"door_back_r_lock",
					0
				},
				
				{
					"swashplate_rotation",
					0
				},
				
				{
					"swashplate_dive",
					0
				},
				
				{
					"swashplate_bank",
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
					"cargoramp_open",
					0.44999999
				},
				
				{
					"cargoramp_hide",
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
					"damagehideglass15",
					0
				},
				
				{
					"damagehideglass16",
					0
				},
				
				{
					"damagehideglass17",
					0
				},
				
				{
					"display_on",
					0
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
					8.6099997
				},
				
				{
					"i_altitude02_1000f",
					8.6099997
				},
				
				{
					"i_altitude02_10000f",
					8.6099997
				},
				
				{
					"i_horizona",
					0
				},
				
				{
					"i_horizonb",
					0
				},
				
				{
					"i_horizona02",
					0
				},
				
				{
					"i_horizonb02",
					0
				},
				
				{
					"i_compass02",
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
					"i_fuel",
					1
				},
				
				{
					"i_fuel02",
					1
				},
				
				{
					"i_fuel03",
					1
				},
				
				{
					"i_fuel04",
					1
				},
				
				{
					"i_fuel05",
					1
				},
				
				{
					"i_fuel06",
					1
				},
				
				{
					"i_fuelpress",
					0
				},
				
				{
					"i_fuelpress02",
					0
				},
				
				{
					"i_oilpress",
					0
				},
				
				{
					"i_oilpress02",
					0
				},
				
				{
					"i_oilpress03",
					0
				},
				
				{
					"i_oilpress04",
					0
				},
				
				{
					"i_oilpress05",
					0
				},
				
				{
					"i_oilpress06",
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
					"i_tot",
					1655.46
				},
				
				{
					"i_tot02",
					1655.46
				},
				
				{
					"i_tot03",
					1655.46
				},
				
				{
					"i_tot04",
					1655.46
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
					"clock_hour",
					0.17
				},
				
				{
					"clock_minute",
					0.090000004
				},
				
				{
					"clock_second",
					0.17
				}
			};
			hide[]=
			{
				"clan",
				"zasleh",
				"light",
				"tail rotor blur",
				"main rotor blur",
				"zadni svetlo",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=3.5209999;
			verticalOffsetWorld=-0.089000002;
			postinit="[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\I_Heli_Transport_02_unarmed.jpg";
		_generalMacro="I_Heli_Transport_02_unarmed";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_I_Heli_Transport_02_unarmed0";
		side=2;
		faction="IND_F";
		crew="I_helipilot_F";
		typicalCargo[]=
		{
			"I_helicrew_F"
		};
		transportSoldier=13;
		getInProxyOrder[]={16,1,11};
		cargoProxyIndexes[]={2,3,4,5,6,7,8,9,10,12,13,14,15};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
		textureList[]=
		{
			"AAF",
			1
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				gunnerAction="ChopperHeavy_L_static_H";
				gunnerInAction="ChopperHeavy_L_static_H";
				memoryPointsGetInGunnerPrecise="GetIn_Turret";
				gunnerGetInAction="GetInLow";
				gunnerGetOutAction="GetOutLow";
				preciseGetInOut=0;
				gunnerDoor="";
				class ViewGunner: ViewPilot
				{
				};
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftPilot
					{
					};
					class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightPilot
					{
					};
				};
			};
			class CargoTurret_03_1: CargoTurret
			{
				gunnerAction="passenger_inside_1";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				gunnerName="$STR_Globe_turrets_cargoTurret_rDoor0";
				proxyIndex=1;
				dontCreateAI=0;
				gunnerType="I_helicrew_AR";
				isPersonTurret=1;
				ejectDeadGunner=0;
				enabledByAnimationSource="door_back_R";
				playerPosition=2;
				soundAttenuationTurret="HeliAttenuationRamp";
				disableSoundAttenuation=0;
				LODTurnedIn=0;
				LODTurnedOut=0;
				LodOpticsIn=0;
				LodOpticsOut=0;
				maxElev=14;
				minElev=-16;
				maxTurn=30;
				minTurn=-5;
			};
			class CargoTurret_03_2: CargoTurret_03_1
			{
				gunnerAction="passenger_inside_7";
				gunnerName="$STR_Globe_turrets_cargoTurret_rDoor1";
				proxyIndex=16;
				gunnerType="I_helicrew_GL";
				maxElev=12;
				minElev=-17;
				maxTurn=0;
				minTurn=-36;
			};
			class CargoTurret_04: CargoTurret
			{
				gunnerAction="passenger_inside_2";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				gunnerName="$STR_A3_Turrets_Door_L";
				proxyIndex=11;
				dontCreateAI=0;
				gunnerType="I_helicrew_AR";
				isPersonTurret=1;
				ejectDeadGunner=0;
				enabledByAnimationSource="door_back_L";
				playerPosition=2;
				soundAttenuationTurret="HeliAttenuationRamp";
				disableSoundAttenuation=0;
				LODTurnedIn=0;
				LODTurnedOut=0;
				LodOpticsIn=0;
				LodOpticsOut=0;
				maxElev=20;
				minElev=-19;
				maxTurn=12.5;
				minTurn=-6;
			};
		};
		class UserActions
		{
			class DoorL1_Open
			{
				userActionID=50;
				displayName="$STR_A3_CFGVEHICLES_USERACTIONS_OPENLDOOR0";
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				textToolTip="$STR_A3_CFGVEHICLES_USERACTIONS_OPENLDOOR0";
				priority=1.5;
				radius=6;
				radiusView=0.2;
				showIn3D=17;
				available=0;
				position="action_door_back_L";
				showWindow=1;
				onlyForPlayer=1;
				shortcut="";
				condition="((this getVariable ['Globe_Disabled_Ramp',true]) isEqualTo false) && {this animationPhase 'door_back_L' < 0.5 AND Alive(this)} &&{(this turretUnit [5] isEqualTo player) || !(player in this)}";
				statement="this animateDoor ['door_back_L', 1]";
			};
			class DoorR1_Open: DoorL1_Open
			{
				userActionID=51;
				displayName="$STR_A3_CFGVEHICLES_USERACTIONS_OPENRDOOR0";
				textToolTip="$STR_A3_CFGVEHICLES_USERACTIONS_OPENRDOOR0";
				position="action_door_back_R";
				condition="((this getVariable ['Globe_Disabled_Ramp',true]) isEqualTo false) && {this animationPhase 'door_back_R' < 0.5 AND Alive(this)}&&{(player in [this turretUnit [3], this turretUnit [4]]) || !(player in this)}";
				statement="this animateDoor ['door_back_R', 1]";
			};
			class DoorL1_Close: DoorL1_Open
			{
				userActionID=53;
				displayName="$STR_A3_CFGVEHICLES_USERACTIONS_CLOSELDOOR0";
				textToolTip="$STR_A3_CFGVEHICLES_USERACTIONS_CLOSELDOOR0";
				condition="((this getVariable ['Globe_Disabled_Ramp',true]) isEqualTo false) && {this animationPhase 'door_back_L' > 0.5 AND Alive(this)}&&{(this turretUnit [5] isEqualTo player) || !(player in this)}";
				statement="this animateDoor ['door_back_L', 0]";
			};
			class DoorR1_Close: DoorL1_Close
			{
				userActionID=54;
				displayName="$STR_A3_CFGVEHICLES_USERACTIONS_CLOSERDOOR0";
				textToolTip="$STR_A3_CFGVEHICLES_USERACTIONS_CLOSERDOOR0";
				position="action_door_back_R";
				condition="((this getVariable ['Globe_Disabled_Ramp',true]) isEqualTo false) && {this animationPhase 'door_back_R' > 0.5 AND Alive(this)}&&{(player in [this turretUnit [3], this turretUnit [4]]) || !(player in this)}";
				statement="this animateDoor ['door_back_R', 0]";
			};
		};
		class AnimationSources: AnimationSources
		{
			class CargoRamp_Open
			{
				source="user";
				animPeriod=5;
				initPhase=0.44;
				sound="ServoRampSound_2";
			};
			class AddGunHolder
			{
				source="user";
				animPeriod=1e-006;
				initPhase=1;
			};
		};
		hiddenSelectionsTextures[]=
		{
			"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_1_INDP_CO.paa",
			"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_2_INDP_CO.paa",
			"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_3_INDP_CO.paa",
			"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"
		};
		class EventHandlers: EventHandlers
		{
			class Globe_doorInitPhase
			{
				init="if (is3DEN) then {			(_this select 0) animateDoor ['Door_Back_L', 1, true]; 	(_this select 0) animateDoor ['Door_Back_R', 1, true]	};";
				postInit="(_this select 0) setVariable ['Globe_Disabled_Ramp', false, isServer]; 	(_this select 0) animateDoor ['Door_Back_L', 1, true]; 	(_this select 0) animateDoor ['Door_Back_R', 1, true]";
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack="B_Parachute";
				count=16;
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine="30Rnd_556x45_Stanag";
				count=16;
			};
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine="200Rnd_65x39_cased_Box";
				count=3;
			};
			class _xx_200Rnd_65x39_cased_Box_Tracer
			{
				magazine="200Rnd_65x39_cased_Box_Tracer";
				count=3;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=6;
			};
			class _xx_MiniGrenade
			{
				magazine="MiniGrenade";
				count=6;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=10;
			};
			class _xx_UGL_FlareWhite_Illumination_F
			{
				magazine="UGL_FlareWhite_Illumination_F";
				count=10;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine="1Rnd_SmokeGreen_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokePurple_Grenade_shell
			{
				magazine="1Rnd_SmokePurple_Grenade_shell";
				count=3;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=10;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=10;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=8;
			};
			class _xx_SmokeShellPurple
			{
				magazine="SmokeShellPurple";
				count=8;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=5;
			};
			class _xx_Titan_AT
			{
				magazine="Titan_AT";
				count=2;
			};
			class _xx_Titan_AP
			{
				magazine="Titan_AP";
				count=2;
			};
			class _xx_Titan_AA
			{
				magazine="Titan_AA";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=16;
			};
			class _xx_Toolkit
			{
				name="Toolkit";
				count=1;
			};
			class _xx_Medikit
			{
				name="Medikit";
				count=1;
			};
			class _xx_ItemGPS
			{
				name="ItemGPS";
				count=1;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_Mk20C_F
			{
				weapon="arifle_Mk20C_F";
				count=2;
			};
		};
		class AttributeValues
		{
			Globe_Disabled_Ramp=0;
		};
	};
};
