class CfgPatches
{
	class Soft_Globe_MRAP_02
	{
		addonRootClass="A3_Soft_F_expEden";
		requiredAddons[]=
		{
			"A3_Soft_F_expEden"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Car;
	class Car_F: Car
	{
		class AnimationSources;
	};
	class MRAP_02_base_F: Car_F
	{
		class Sounds
		{
			soundSetsInt[]=
			{
				"Mrap_02_Engine_RPM0_INT_SoundSet",
				"Mrap_02_Engine_RPM1_INT_SoundSet",
				"Mrap_02_Engine_RPM2_INT_SoundSet",
				"Mrap_02_Engine_RPM3_INT_SoundSet",
				"Mrap_02_Engine_RPM4_INT_SoundSet",
				"Mrap_02_Rattling_INT_SoundSet",
				"Mrap_02_Stress_INT_SoundSet",
				"Mrap_02_Rain_INT_SoundSet",
				"Mrap_02_Tires_Rock_Fast_INT_SoundSet",
				"Mrap_02_Tires_Grass_Fast_INT_SoundSet",
				"Mrap_02_Tires_Sand_Fast_INT_SoundSet",
				"Mrap_02_Tires_Gravel_Fast_INT_SoundSet",
				"Mrap_02_Tires_Mud_Fast_INT_SoundSet",
				"Mrap_02_Tires_Asphalt_Fast_INT_SoundSet",
				"Mrap_02_Tires_Water_Fast_INT_SoundSet",
				"Mrap_02_Tires_Rock_Slow_INT_SoundSet",
				"Mrap_02_Tires_Grass_Slow_INT_SoundSet",
				"Mrap_02_Tires_Sand_Slow_INT_SoundSet",
				"Mrap_02_Tires_Gravel_Slow_INT_SoundSet",
				"Mrap_02_Tires_Mud_Slow_INT_SoundSet",
				"Mrap_02_Tires_Asphalt_Slow_INT_SoundSet",
				"Mrap_02_Tires_Water_Slow_INT_SoundSet",
				"Mrap_02_Tires_Turn_Hard_INT_SoundSet",
				"Mrap_02_Tires_Turn_Soft_INT_SoundSet",
				"Mrap_02_Tires_Brake_Hard_INT_SoundSet",
				"Mrap_02_Tires_Brake_Soft_INT_SoundSet",
				"Tires_Movement_Dirt_Int_01_SoundSet"
			};
			soundSetsExt[]=
			{
				"Mrap_02_Engine_RPM0_EXT_SoundSet",
				"Mrap_02_Engine_RPM1_EXT_SoundSet",
				"Mrap_02_Engine_RPM2_EXT_SoundSet",
				"Mrap_02_Engine_RPM3_EXT_SoundSet",
				"Mrap_02_Engine_RPM4_EXT_SoundSet",
				"Mrap_02_Rattling_EXT_SoundSet",
				"Mrap_02_Stress_EXT_SoundSet",
				"Mrap_02_Rain_EXT_SoundSet",
				"Mrap_02_Tires_Rock_Fast_EXT_SoundSet",
				"Mrap_02_Tires_Grass_Fast_EXT_SoundSet",
				"Mrap_02_Tires_Sand_Fast_EXT_SoundSet",
				"Mrap_02_Tires_Gravel_Fast_EXT_SoundSet",
				"Mrap_02_Tires_Mud_Fast_EXT_SoundSet",
				"Mrap_02_Tires_Asphalt_Fast_EXT_SoundSet",
				"Mrap_02_Tires_Water_Fast_EXT_SoundSet",
				"Mrap_02_Tires_Rock_Slow_EXT_SoundSet",
				"Mrap_02_Tires_Grass_Slow_EXT_SoundSet",
				"Mrap_02_Tires_Sand_Slow_EXT_SoundSet",
				"Mrap_02_Tires_Gravel_Slow_EXT_SoundSet",
				"Mrap_02_Tires_Mud_Slow_EXT_SoundSet",
				"Mrap_02_Tires_Asphalt_Slow_EXT_SoundSet",
				"Mrap_02_Tires_Water_Slow_EXT_SoundSet",
				"Mrap_02_Tires_Turn_Hard_EXT_SoundSet",
				"Mrap_02_Tires_Turn_Soft_EXT_SoundSet",
				"Mrap_02_Tires_Brake_Hard_EXT_SoundSet",
				"Mrap_02_Tires_Brake_Soft_EXT_SoundSet",
				"Tires_Movement_Dirt_Ext_01_SoundSet"
			};
		};
		class UserActions
		{
			class DoorLF_Open
			{
				condition="((this getVariable ['Globe_Disabled_Ramp',true]) isEqualTo false) && {((this doorPhase 'Door_LF')  ==  0) && (alive this) && this != vehicle player}";
			};
			class DoorLF_Close: DoorLF_Open
			{
				condition="((this getVariable ['Globe_Disabled_Ramp',true]) isEqualTo false) && {((this doorPhase 'Door_LF') > 0) && (alive this)}";
			};
			class DoorRF_Open: DoorLF_Open
			{
				condition="((this getVariable ['Globe_Disabled_Ramp',true]) isEqualTo false) && {((this doorPhase 'Door_RF')  ==  0) && (alive this) && this != vehicle player}";
			};
			class DoorRF_Close: DoorRF_Open
			{
				condition="((this getVariable ['Globe_Disabled_Ramp',true]) isEqualTo false) && {((this doorPhase 'Door_RF') > 0) && (alive this)}";
			};
			class DoorLM_Open: DoorLF_Open
			{
				condition="((this getVariable ['Globe_Disabled_Ramp',true]) isEqualTo false) && {((this doorPhase 'Door_LM')  ==  0) && (alive this) && this != vehicle player}";
			};
			class DoorLM_Close: DoorLM_Open
			{
				condition="((this getVariable ['Globe_Disabled_Ramp',true]) isEqualTo false) && {((this doorPhase 'Door_LM') > 0) && (alive this)}";
			};
			class DoorRM_Open: DoorLM_Open
			{
				condition="((this getVariable ['Globe_Disabled_Ramp',true]) isEqualTo false) && {((this doorPhase 'Door_RM')  ==  0) && (alive this) && this != vehicle player}";
			};
			class DoorRM_Close: DoorRM_Open
			{
				condition="((this getVariable ['Globe_Disabled_Ramp',true]) isEqualTo false) && {((this doorPhase 'Door_RM') > 0) && (alive this)}";
			};
			class Door_rear_Open: DoorLM_Open
			{
				condition="((this getVariable ['Globe_Disabled_Ramp',true]) isEqualTo false) && {((this doorPhase 'Door_rear')  ==  0) && (alive this)}";
			};
			class Door_rear_Close: Door_rear_Open
			{
				condition="((this getVariable ['Globe_Disabled_Ramp',true]) isEqualTo false) && {((this doorPhase 'Door_rear') > 0) && (alive this)}";
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
				defaultValue="true";
			};
		};
		class AnimationSources: AnimationSources
		{
			class Door_LF
			{
				sound="GlassServoDoorsSound";
				soundPosition="Door_1";
			};
			class Door_RF: Door_LF
			{
				soundPosition="Door_3";
			};
			class Door_LM: Door_LF
			{
				soundPosition="door5_axis";
			};
			class Door_RM: Door_LF
			{
				soundPosition="door7_axis";
			};
			class Door_rear: Door_LF
			{
				soundPosition="door9_axis";
			};
		};
	};
};