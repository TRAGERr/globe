class CfgPatches
{
	class Air_Globe_Heli_Transport_03
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
	class Helicopter_Base_F;
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class AnimationSources;
	};
	class Heli_Transport_03_base_F: Helicopter_Base_H
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
		class AnimationSources: AnimationSources
		{
			class Door_R_source
			{
				soundPosition="door_a_r_axis";
			};
			class Door_L_source: Door_R_source
			{
				soundPosition="door_a_l_axis";
			};
			class Door_rear_source: Door_R_source
			{
				soundPosition="door_axis";
			};
		};
		class UserActions
		{
			class Ramp_Open;
			class DoorL_open: Ramp_Open
			{
				userActionID=62;
				displayName="$STR_a3_cfgvehicles_useractions_openldoor0";
				textToolTip="$STR_a3_cfgvehicles_useractions_openldoor0";
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				position="door_a_l_axis";
				condition="this doorPhase 'Door_l_source' < 0.5 AND Alive(this) && {(player in [this turretUnit [1], this turretUnit [2]]) || !(player in this)}";
				statement="this animateDoor ['Door_l_source', 1]";
				priority=1.5;
				radius=7.5;
				radiusView=0.2;
				showIn3D=17;
				available=0;
				showWindow=0;
				onlyForPlayer=1;
				shortcut="";
			};
			class DoorL_close: DoorL_open
			{
				userActionID=63;
				displayName="$STR_a3_cfgvehicles_useractions_closeldoor0";
				textToolTip="$STR_a3_cfgvehicles_useractions_closeldoor0";
				condition="this doorPhase 'Door_l_source' > 0.5 AND Alive(this) && {(player in [this turretUnit [1], this turretUnit [2]]) || !(player in this)}";
				statement="this animateDoor ['Door_l_source', 0]";
			};
			class DoorR_open: DoorL_open
			{
				userActionID=64;
				displayName="$STR_a3_cfgvehicles_useractions_openrdoor0";
				textToolTip="$STR_a3_cfgvehicles_useractions_openrdoor0";
				position="door_a_r_axis";
				condition="this doorPhase 'Door_R_source' < 0.5 AND Alive(this) && {(player in [this turretUnit [1], this turretUnit [2]]) || !(player in this)}";
				statement="this animateDoor ['Door_R_source', 1]";
			};
			class DoorR_close: DoorR_open
			{
				userActionID=65;
				displayName="$STR_a3_cfgvehicles_useractions_closerdoor0";
				textToolTip="$STR_a3_cfgvehicles_useractions_closerdoor0";
				condition="this doorPhase 'Door_R_source' > 0.5 AND Alive(this) && {(player in [this turretUnit [1], this turretUnit [2]]) || !(player in this)}";
				statement="this animateDoor ['Door_R_source', 0]";
			};
		};
	};
};
