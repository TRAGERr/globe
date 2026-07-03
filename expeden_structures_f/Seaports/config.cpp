class CfgPatches
{
	class Structures_Globe_Seaports
	{
		addonRootClass="A3_Structures_F_Globe";
		requiredAddons[]=
		{
			"A3_Structures_F_Globe"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Land_LightHouse_01_off",
			"Land_Lighthouse_03_green_Light",
			"Land_Lighthouse_03_red_Light"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class House;
	class House_F: House
	{
		class DestructionEffects;
	};
	class Land_Lighthouse_03_base_F;
	class Land_Lighthouse_01_noLight_F: House_F
	{
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Land_LightHouse_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_Lighthouse_01_noLight_F0";
	};
	class Land_LightHouse_01_off: House_F
	{
		author="O&T Expansion Eden";
		mapSize=12.09;
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
					"door_1_handle_rot_1",
					0
				},
				
				{
					"door_1_handle_rot_2",
					0
				},
				
				{
					"door_1_locked_rot",
					0
				},
				
				{
					"door_1_handle_locked_rot",
					0
				},
				
				{
					"cog_small_rot",
					2117.6799
				},
				
				{
					"cog_large_rot",
					2117.6799
				}
			};
			hide[]=
			{
				"light_1_hide",
				"light_2_hide",
				"light_3_hide",
				"cabin_illumination_hide"
			};
			verticalOffset=11.517;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Land_LightHouse_F.jpg";
		_generalMacro="Land_LightHouse_01_off";
		scope=1;
		scopeCurator=0;
		displayName="$STR_Globe_CfgVehicles_Land_Lighthouse_01_off0";
		model="\A3\Structures_F_Argo\Infrastructure\Seaports\Lighthouse_01_noLight_F.p3d";
		icon="iconObject_circle";
		editorCategory="EdCat_Structures_Altis";
		editorSubcategory="EdSubcat_Seaports";
		vehicleClass="Structures_Infrastructure";
		cost=80000;
		armor=500;
		armorLights=2;
		featureSize=60;
		numberOfDoors=1;
		ladders[]=
		{
			
			{
				"Ladder_1_start",
				"Ladder_1_end",
				2.5,
				"Ladder_1_action"
			}
		};
		selectionDamage="DamT_1";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation="ruin";
				type="\A3\Structures_F\Dominants\Lighthouse\LightHouse_ruins_F.p3d";
				position="";
				intensity=1;
				interval=1;
				lifeTime=1;
			};
		};
		class Reflectors
		{
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"A3\Structures_F\Dominants\Lighthouse\Data\Lighthouse_multi_1.rvmat",
				"A3\Structures_F\Dominants\Lighthouse\Data\destruct_Lighthouse_multi_1.rvmat",
				"A3\Structures_F\Dominants\Lighthouse\Data\destruct_Lighthouse_multi_1.rvmat",
				"A3\Structures_F\Dominants\Lighthouse\Data\Lighthouse_multi_2.rvmat",
				"A3\Structures_F\Dominants\Lighthouse\Data\destruct_Lighthouse_multi_2.rvmat",
				"A3\Structures_F\Dominants\Lighthouse\Data\destruct_Lighthouse_multi_2.rvmat"
			};
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
	};
	class Land_Lighthouse_03_green_Light: Land_Lighthouse_03_base_F
	{
		author="O&T Expansion Eden";
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
					"light_1_rot",
					2117.98
				}
			};
			hide[]=
			{
				"light_1_hide"
			};
			verticalOffset=7.8530002;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_Argo\Data\CfgVehicles\Land_Lighthouse_03_green_F.jpg";
		_generalMacro="Land_Lighthouse_03_green_Light";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_Lighthouse_03_green_Light0";
		model="\A3\Structures_F_Argo\Infrastructure\Seaports\Lighthouse_03_green_F.p3d";
		class Reflectors
		{
			class Light_1
			{
				color[]={0,0.76999998,0};
				ambient[]={0,0.1205,0};
				intensity=1000;
				size=1;
				innerAngle=40;
				outerAngle=80;
				coneFadeCoef=5;
				position="Light_1_pos";
				direction="Light_1_dir";
				hitpoint="Light_1_hitpoint";
				selection="Light_1_hide";
				useFlare=0;
				blinking=0;
				dayLight=0;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=0;
					quadratic=0.0099999998;
					hardLimitStart=150;
					hardLimitEnd=270;
				};
			};
			class Light_1_flare: Light_1
			{
				color[]={0,750,0};
				ambient[]={0,7.5,0};
				intensity=1000;
				useFlare=1;
				flareSize=5;
				flareMaxDistance=3000;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=1;
					quadratic=0;
					hardLimitStart=0.050000001;
					hardLimitEnd=0.1;
				};
			};
		};
	};
	class Land_Lighthouse_03_red_Light: Land_Lighthouse_03_base_F
	{
		author="O&T Expansion Eden";
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
					"light_1_rot",
					2118.28
				}
			};
			hide[]=
			{
				"light_1_hide"
			};
			verticalOffset=7.8530002;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_Argo\Data\CfgVehicles\Land_Lighthouse_03_red_F.jpg";
		_generalMacro="Land_Lighthouse_03_red_Light";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_Lighthouse_03_red_Light0";
		model="\A3\Structures_F_Argo\Infrastructure\Seaports\Lighthouse_03_red_F.p3d";
		class Reflectors
		{
			class Light_1
			{
				color[]={0.76999998,0,0};
				ambient[]={0.1205,0,0};
				intensity=1000;
				size=1;
				innerAngle=40;
				outerAngle=80;
				coneFadeCoef=5;
				position="Light_1_pos";
				direction="Light_1_dir";
				hitpoint="Light_1_hitpoint";
				selection="Light_1_hide";
				useFlare=0;
				blinking=0;
				dayLight=0;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=0;
					quadratic=0.0099999998;
					hardLimitStart=150;
					hardLimitEnd=270;
				};
			};
			class Light_1_flare: Light_1
			{
				color[]={750,0,0};
				ambient[]={7.5,0,0};
				intensity=1000;
				useFlare=1;
				flareSize=5;
				flareMaxDistance=3000;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=1;
					quadratic=0;
					hardLimitStart=0.050000001;
					hardLimitEnd=0.1;
				};
			};
		};
	};
};
