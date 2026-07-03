class CfgPatches
{
	class Structures_Globe_Industrial_Airport
	{
		addonRootClass="A3_Structures_F_Globe";
		requiredAddons[]=
		{
			"Structures_Globe_Industrial"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgVehicles
{
	class House_F;
	class Land_Airport_Tower_F;
	class Land_Airport_Tower_dam_F: Land_Airport_Tower_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Airport_Tower_dam_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_Airport_Tower_dam_F0";
	};
	class Land_Airport_01_hangar_closed: House_F
	{
		author="O&T Expansion Eden";
		mapSize=42.349998;
		class SimpleObject
		{
			eden=0;
			animate[]=
			{
				
				{
					"door_1_rot",
					0
				},
				
				{
					"door_1_locked_rot",
					0
				},
				
				{
					"door_2_move",
					0
				},
				
				{
					"door_2_locked_move",
					0
				},
				
				{
					"door_3_move",
					0
				},
				
				{
					"door_3_locked_move",
					0
				}
			};
			hide[]={};
			verticalOffset=2.6789999;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_Exp\Data\CfgVehicles\Land_Airport_01_hangar_F.jpg";
		_generalMacro="Land_Airport_01_hangar_closed";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgVehicles_Land_Airport_01_hangar_F0";
		model="\A3\Structures_F_Exp\Infrastructure\Airports\Airport_01_hangar_F.p3d";
		icon="iconObject_5x4";
		editorCategory="EdCat_Structures_Tanoa";
		editorSubcategory="EdSubcat_Airports";
		vehicleClass="Structures_Airport";
		destrType="DestructNo";
		cost=50000;
		numberOfDoors=3;
		numberOfWindows=0;
		ladders[]=
		{
			
			{
				"Ladder_1_start",
				"Ladder_1_end",
				2.5,
				"Ladder_1_action"
			}
		};
		class DestructionEffects
		{
		};
		class HitPoints
		{
		};
		class Damage
		{
			tex[]={};
			mat[]={};
		};
		class AnimationSources
		{
			class Door_1_sound_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				sound="MetalDoorsSound";
				soundPosition="Door_1_trigger";
			};
			class Door_1_noSound_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class Door_1_locked_source
			{
				source="user";
				initPhase=0;
				animPeriod=0.80000001;
			};
			class Door_2_sound_source
			{
				source="user";
				initPhase=0;
				animPeriod=15;
				sound="RollDoorsSoundLoop";
				soundPosition="Door_2_trigger";
			};
			class Door_2_noSound_source
			{
				source="user";
				initPhase=0;
				animPeriod=15;
			};
			class Door_2_locked_source
			{
				source="user";
				initPhase=0;
				animPeriod=0.80000001;
			};
			class Door_3_sound_source
			{
				source="user";
				initPhase=0;
				animPeriod=15;
				sound="RollDoorsSoundLoop";
				soundPosition="Door_3_trigger";
			};
			class Door_3_noSound_source
			{
				source="user";
				initPhase=0;
				animPeriod=15;
			};
			class Door_3_locked_source
			{
				source="user";
				initPhase=0;
				animPeriod=0.80000001;
			};
		};
		class UserActions
		{
			class OpenDoor_1
			{
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName="$STR_DN_OUT_O_DOOR";
				position="Door_1_trigger";
				priority=11;
				actionNamedSel="Door_1_action";
				radius=1.75;
				aiMaxRange=5.25;
				onlyForPlayer=0;
				condition="((this animationSourcePhase 'Door_1_sound_source') < 0.5) && (cameraOn isKindOf 'CAManBase')";
				statement="([this, 1, 1] call BIS_fnc_Door)";
			};
			class CloseDoor_1: OpenDoor_1
			{
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName="$STR_DN_OUT_C_DOOR";
				priority=11;
				condition="((this animationSourcePhase 'Door_1_sound_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_1', 0]) != 1) && (cameraOn isKindOf 'CAManBase')";
				statement="([this, 1, 0] call BIS_fnc_Door)";
			};
		};
		actionBegin1="OpenDoor_1";
		actionEnd1="OpenDoor_1";
		actionBegin2="OpenDoor_2";
		actionEnd2="OpenDoor_2";
		actionBegin3="OpenDoor_3";
		actionEnd3="OpenDoor_3";
	};
};
