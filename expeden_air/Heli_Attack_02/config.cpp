class CfgPatches
{
	class Air_Globe_Heli_Attack_02
	{
		addonRootClass="Air_Globe";
		requiredAddons[]=
		{
			"Air_Globe"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Helicopter;
	class Helicopter_Base_F: Helicopter
	{
		class AnimationSources;
		class Turrets;
	};
	class Heli_Attack_02_base_F: Helicopter_Base_F
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
			class OpenRdoor
			{
				displayName="$STR_A3_CfgVehicles_UserActions_OpenRdoor0";
				position="door_R";
				radius=1.8;
				animPeriod=2;
				onlyForplayer=0;
				condition="this animationPhase ""door_R"" < 0.5 AND Alive(this) AND {(objectParent player isNotEqualTo this) || player in assignedCargo this} && ((this getVariable ['Globe_Disabled_Ramp',true]) isEqualTo false)";
				statement="this animateDoor [""door_R"",1];";
			};
			class CloseRdoor
			{
				displayName="$STR_A3_CfgVehicles_UserActions_CloseRdoor0";
				position="door_R";
				radius=1.8;
				animPeriod=2;
				onlyForplayer=0;
				condition="this animationPhase ""door_R"" > 0.5 AND Alive(this) AND {(objectParent player isNotEqualTo this) || player in assignedCargo this} && ((this getVariable ['Globe_Disabled_Ramp',true]) isEqualTo false)";
				statement="this animateDoor [""door_R"",0];";
			};
			class OpenLdoor
			{
				displayName="$STR_A3_CfgVehicles_UserActions_OpenLdoor0";
				position="door_L";
				radius=1.8;
				onlyForplayer=0;
				condition="this animationPhase ""door_L"" < 0.5 AND Alive(this) AND {(objectParent player isNotEqualTo this) || player in assignedCargo this} && ((this getVariable ['Globe_Disabled_Ramp',true]) isEqualTo false)";
				statement="this animateDoor [""door_L"",1];";
			};
			class CloseLdoor
			{
				displayName="$STR_A3_CfgVehicles_UserActions_CloseLdoor0";
				position="door_L";
				radius=1.8;
				onlyForplayer=0;
				condition="this animationPhase ""door_L"" > 0.5 AND Alive(this) AND {(objectParent player isNotEqualTo this) || player in assignedCargo this} && ((this getVariable ['Globe_Disabled_Ramp',true]) isEqualTo false)";
				statement="this animateDoor [""door_L"",0];";
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
};
