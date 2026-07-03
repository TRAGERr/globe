class CfgPatches
{
	class Structures_Globe_VR_Targets
	{
		addonRootClass="A3_Structures_F_Globe";
		requiredAddons[]=
		{
			"A3_Structures_F_Globe_VR"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Land_VR_Target_MBT_01_cannon_Scripted",
			"Land_VR_Target_MRAP_01_Scripted",
			"Land_VR_Target_APC_Wheeled_01_Scripted"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class TargetBase;
	class Land_VR_Target_MBT_01_cannon_Scripted: TargetBase
	{
		author="O&T Expansion Eden";
		mapSize=10.85;
		class SimpleObject
		{
			eden=0;
			animate[]=
			{
				
				{
					"turret_rot",
					0
				},
				
				{
					"gun_rot",
					0
				}
			};
			hide[]={};
			verticalOffset=2.2060001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_VR_Target_MBT_01_cannon_Scripted.jpg";
		_generalMacro="Land_VR_Target_MBT_01_cannon_Scripted";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgVehicles_Land_VR_Target_MBT_01_cannon_F0";
		model="\A3\Structures_F_Mark\VR\Targets\VR_Target_MBT_01_cannon_F.p3d";
		icon="iconObject_2x5";
		vehicleClass="Objects_VR";
		destrType="DestructNo";
		armor=800;
		armorStructural=6;
		animated=0;
		accuracy=1000;
		irTarget=1;
		laserTarget=1;
		nvTarget=1;
		side=8;
		type=1;
		threat[]={0.80000001,1,0.30000001};
		cost=2000000;
		hiddenSelections[]=
		{
			"Camo_hull",
			"Camo_turret",
			"Camo_gun",
			"Camo_engine",
			"Camo_track_left",
			"Camo_track_right"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_pattern_CA.paa",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_pattern_CA.paa",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_pattern_CA.paa",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_pattern_CA.paa",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_pattern_CA.paa",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_pattern_CA.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_MBT_01_cannon_destroy.rvmat",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_MBT_01_cannon_destroy.rvmat",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_MBT_01_cannon_destroy.rvmat",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_MBT_01_cannon_destroy.rvmat",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_MBT_01_cannon_destroy.rvmat",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_MBT_01_cannon_destroy.rvmat"
		};
		class AnimationSources
		{
			class Turret_source
			{
				source="user";
				initPhase=0;
				animPeriod=0.015;
			};
			class Gun_source
			{
				source="user";
				initPhase=0;
				animPeriod=0.025;
			};
		};
		class Hitpoints
		{
			class HitHull
			{
				name="Hull";
				visual="Camo_hull";
				armor=0.60000002;
				explosionShielding=0.2;
				material=-1;
				minimalHit=0.2;
				passThrough=1;
				radius=0.25;
			};
			class HitTurret
			{
				name="Turret";
				visual="Camo_turret";
				armor=0.60000002;
				explosionShielding=0.2;
				material=-1;
				minimalHit=0.2;
				passThrough=1;
				radius=0.25;
			};
			class HitGun
			{
				name="Gun";
				visual="Camo_gun";
				armor=0.30000001;
				explosionShielding=0.40000001;
				material=-1;
				minimalHit=0.15000001;
				passThrough=0;
				radius=0.30000001;
			};
			class HitEngine
			{
				name="Engine";
				visual="Camo_engine";
				armor=0.60000002;
				explosionShielding=0.2;
				material=-1;
				minimalHit=0.2;
				passThrough=0.5;
				radius=0.25;
			};
			class HitTrack_left
			{
				name="Track_left";
				visual="Camo_track_left";
				armor=0.30000001;
				explosionShielding=0.40000001;
				material=-1;
				minimalHit=0.15000001;
				passThrough=0;
				radius=0.30000001;
			};
			class HitTrack_right
			{
				name="Track_right";
				visual="Camo_track_right";
				armor=0.30000001;
				explosionShielding=0.40000001;
				material=-1;
				minimalHit=0.15000001;
				passThrough=0;
				radius=0.30000001;
			};
		};
		class Attributes
		{
			class ReTimeOut
			{
				displayName="$STR_Globe_ReTimeOut0";
				tooltip="$STR_Globe_ReTimeOut1";
				property="ReTimeOut";
				control="EditShort";
				typeName="NUMBER";
				defaultValue="30";
				expression="_this setVariable ['Globe_VRHitTimeRe',_value,true]";
			};
			class Rotation_Turret
			{
				displayName="$STR_Globe_turret0";
				tooltip="$STR_a3_CfgVehicles_modulePositioning_F_Arguments_rotation_0";
				property="Rotation_Turret";
				control="SliderTurretRotation_360";
				defaultValue="0";
				expression="_this animateSource ['Turret_source',_value,true]";
			};
			class Gun_Elevation
			{
				displayName="$STR_dn_staticcannon";
				tooltip="$STR_A3_disp_editor_elevation";
				property="Gun_Elevation";
				control="SliderGunElevation_15";
				defaultValue="0";
				expression="_this animateSource ['Gun_source',_value,true]";
			};
			class LiveMove
			{
				property="LiveMove";
				control="Checkbox";
				displayName="$STR_Globe_CfgFunctions_expEden_fnc_VRTargetTurretGunLiveMove0";
				tooltip="$STR_Globe_CfgFunctions_expEden_fnc_VRTargetTurretGunLiveMove1";
				expression="if (_value isEqualTo true) then {_this spawn expEden_fnc_VRTargetLiveMoveMBT};";
				defaultValue="false";
				wikiType="[[Bool]]";
			};
		};
		class EventHandlers
		{
			class Globe_VRHit
			{
				postInit="[(_this # 0), (_this # 0) getVariable ['Globe_VRHitTimeRe', 30]] call bis_fnc_VRHitpart;";
			};
		};
	};
	class Land_VR_Target_MRAP_01_Scripted: TargetBase
	{
		author="O&T Expansion Eden";
		mapSize=5.8800001;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=1.577;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_VR_Target_MRAP_01_Scripted.jpg";
		_generalMacro="Land_VR_Target_MRAP_01_Scripted";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgVehicles_Land_VR_Target_MRAP_01_F0";
		model="\A3\Structures_F_Mark\VR\Targets\VR_Target_MRAP_01_F.p3d";
		icon="iconObject_1x2";
		vehicleClass="Objects_VR";
		destrType="DestructNo";
		armor=300;
		armorStructural=2;
		animated=0;
		accuracy=1000;
		irTarget=1;
		laserTarget=1;
		nvTarget=1;
		side=8;
		type=0;
		threat[]={0.80000001,0.60000002,0.30000001};
		cost=500000;
		hiddenSelections[]=
		{
			"Camo_hull",
			"Camo_fuel",
			"Camo_engine",
			"Camo_wheel_1_1",
			"Camo_wheel_1_2",
			"Camo_wheel_2_1",
			"Camo_wheel_2_2"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_pattern_CA.paa",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_pattern_CA.paa",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_pattern_CA.paa",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_pattern_CA.paa",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_pattern_CA.paa",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_pattern_CA.paa",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_pattern_CA.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_MRAP_01_destroy.rvmat",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_MRAP_01_destroy.rvmat",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_MRAP_01_destroy.rvmat",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_MRAP_01_destroy.rvmat",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_MRAP_01_destroy.rvmat",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_MRAP_01_destroy.rvmat",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_MRAP_01_destroy.rvmat"
		};
		class Hitpoints
		{
			class HitHull
			{
				name="Hull";
				visual="Camo_hull";
				armor=4;
				explosionShielding=2;
				material=-1;
				minimalHit=0.0099999998;
				passThrough=0.40000001;
				radius=0.44999999;
			};
			class HitFuel
			{
				name="Fuel";
				visual="Camo_fuel";
				armor=0.5;
				explosionShielding=0.2;
				material=-1;
				minimalHit=0.25;
				passThrough=1;
				radius=0.25;
			};
			class HitEngine
			{
				name="Engine";
				visual="Camo_engine";
				armor=0.5;
				explosionShielding=0.2;
				material=-1;
				minimalHit=0.25;
				passThrough=0.2;
				radius=0.25;
			};
			class HitWheel_1_1
			{
				name="Wheel_1_1";
				visual="Camo_wheel_1_1";
				armor=0.33000001;
				explosionShielding=4;
				material=-1;
				minimalHit=0.02;
				passThrough=0.30000001;
				radius=0.33000001;
			};
			class HitWheel_1_2
			{
				name="Wheel_1_2";
				visual="Camo_wheel_1_2";
				armor=0.33000001;
				explosionShielding=4;
				material=-1;
				minimalHit=0.02;
				passThrough=0.30000001;
				radius=0.33000001;
			};
			class HitWheel_2_1
			{
				name="Wheel_2_1";
				visual="Camo_wheel_2_1";
				armor=0.33000001;
				explosionShielding=4;
				material=-1;
				minimalHit=0.02;
				passThrough=0.30000001;
				radius=0.33000001;
			};
			class HitWheel_2_2
			{
				name="Wheel_2_2";
				visual="Camo_wheel_2_2";
				armor=0.33000001;
				explosionShielding=4;
				material=-1;
				minimalHit=0.02;
				passThrough=0.30000001;
				radius=0.33000001;
			};
		};
		class Attributes
		{
			class ReTimeOut
			{
				displayName="$STR_Globe_ReTimeOut0";
				tooltip="$STR_Globe_ReTimeOut1";
				property="ReTimeOut";
				control="EditShort";
				typeName="NUMBER";
				defaultValue="30";
				expression="_this setVariable ['Globe_VRHitTimeRe',_value,true]";
			};
		};
		class EventHandlers
		{
			class Globe_VRHit
			{
				postInit="[(_this # 0), (_this # 0) getVariable ['Globe_VRHitTimeRe', 30]] call bis_fnc_VRHitpart;";
			};
		};
	};
	class Land_VR_Target_APC_Wheeled_01_Scripted: TargetBase
	{
		author="O&T Expansion Eden";
		mapSize=8.0500002;
		class SimpleObject
		{
			eden=0;
			animate[]=
			{
				
				{
					"turret_rot",
					0
				},
				
				{
					"gun_rot",
					0
				}
			};
			hide[]={};
			verticalOffset=1.811;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_VR_Target_APC_Wheeled_01_Scripted.jpg";
		_generalMacro="Land_VR_Target_APC_Wheeled_01_Scripted";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgVehicles_Land_VR_Target_APC_Wheeled_01_F0";
		model="\A3\Structures_F_Mark\VR\Targets\VR_Target_APC_Wheeled_01_F.p3d";
		icon="iconObject_2x5";
		vehicleClass="Objects_VR";
		destrType="DestructNo";
		armor=250;
		armorStructural=6;
		animated=0;
		accuracy=1000;
		irTarget=1;
		laserTarget=1;
		nvTarget=1;
		side=8;
		type=0;
		threat[]={0.80000001,0.60000002,0.60000002};
		cost=1000000;
		hiddenSelections[]=
		{
			"Camo_hull",
			"Camo_fuel",
			"Camo_engine",
			"Camo_wheel_1_1",
			"Camo_wheel_1_2",
			"Camo_wheel_1_3",
			"Camo_wheel_1_4",
			"Camo_wheel_2_1",
			"Camo_wheel_2_2",
			"Camo_wheel_2_3",
			"Camo_wheel_2_4"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_pattern_CA.paa",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_pattern_CA.paa",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_pattern_CA.paa",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_pattern_CA.paa",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_pattern_CA.paa",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_pattern_CA.paa",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_pattern_CA.paa",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_pattern_CA.paa",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_pattern_CA.paa",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_pattern_CA.paa",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_pattern_CA.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_APC_Wheeled_01_destroy.rvmat",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_APC_Wheeled_01_destroy.rvmat",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_APC_Wheeled_01_destroy.rvmat",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_APC_Wheeled_01_destroy.rvmat",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_APC_Wheeled_01_destroy.rvmat",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_APC_Wheeled_01_destroy.rvmat",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_APC_Wheeled_01_destroy.rvmat",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_APC_Wheeled_01_destroy.rvmat",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_APC_Wheeled_01_destroy.rvmat",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_APC_Wheeled_01_destroy.rvmat",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_APC_Wheeled_01_destroy.rvmat"
		};
		class AnimationSources
		{
			class Turret_source
			{
				source="user";
				initPhase=0;
				animPeriod=0.015;
			};
			class Gun_source
			{
				source="user";
				initPhase=0;
				animPeriod=0.025;
			};
		};
		class Hitpoints
		{
			class HitHull
			{
				name="Hull";
				visual="Camo_hull";
				armor=1;
				explosionShielding=0.2;
				material=-1;
				minimalHit=0.2;
				passThrough=1;
				radius=0.33000001;
			};
			class HitFuel
			{
				name="Fuel";
				visual="Camo_fuel";
				armor=1.5;
				explosionShielding=0.40000001;
				material=-1;
				minimalHit=0.1;
				passThrough=1;
				radius=0.25;
			};
			class HitEngine
			{
				name="Engine";
				visual="Camo_engine";
				armor=0.5;
				explosionShielding=0.2;
				material=-1;
				minimalHit=0.1;
				passThrough=0;
				radius=0.25;
			};
			class HitWheel_1_1
			{
				name="Wheel_1_1";
				visual="Camo_wheel_1_1";
				armor=0.40000001;
				explosionShielding=4;
				material=-1;
				minimalHit=0.02;
				passThrough=0.30000001;
				radius=0.33000001;
			};
			class HitWheel_1_2
			{
				name="Wheel_1_2";
				visual="Camo_wheel_1_2";
				armor=0.40000001;
				explosionShielding=4;
				material=-1;
				minimalHit=0.02;
				passThrough=0.30000001;
				radius=0.33000001;
			};
			class HitWheel_1_3
			{
				name="Wheel_1_3";
				visual="Camo_wheel_1_3";
				armor=0.40000001;
				explosionShielding=4;
				material=-1;
				minimalHit=0.02;
				passThrough=0.30000001;
				radius=0.33000001;
			};
			class HitWheel_1_4
			{
				name="Wheel_1_4";
				visual="Camo_wheel_1_4";
				armor=0.40000001;
				explosionShielding=4;
				material=-1;
				minimalHit=0.02;
				passThrough=0.30000001;
				radius=0.33000001;
			};
			class HitWheel_2_1
			{
				name="Wheel_2_1";
				visual="Camo_wheel_2_1";
				armor=0.40000001;
				explosionShielding=4;
				material=-1;
				minimalHit=0.02;
				passThrough=0.30000001;
				radius=0.33000001;
			};
			class HitWheel_2_2
			{
				name="Wheel_2_2";
				visual="Camo_wheel_2_2";
				armor=0.40000001;
				explosionShielding=4;
				material=-1;
				minimalHit=0.02;
				passThrough=0.30000001;
				radius=0.33000001;
			};
			class HitWheel_2_3
			{
				name="Wheel_2_3";
				visual="Camo_wheel_2_3";
				armor=0.40000001;
				explosionShielding=4;
				material=-1;
				minimalHit=0.02;
				passThrough=0.30000001;
				radius=0.33000001;
			};
			class HitWheel_2_4
			{
				name="Wheel_2_4";
				visual="Camo_wheel_2_4";
				armor=0.40000001;
				explosionShielding=4;
				material=-1;
				minimalHit=0.02;
				passThrough=0.30000001;
				radius=0.33000001;
			};
		};
		class Attributes
		{
			class ReTimeOut
			{
				displayName="$STR_Globe_ReTimeOut0";
				tooltip="$STR_Globe_ReTimeOut1";
				property="ReTimeOut";
				control="EditShort";
				typeName="NUMBER";
				defaultValue="30";
				expression="_this setVariable ['Globe_VRHitTimeRe',_value,true]";
			};
			class Rotation_Turret
			{
				displayName="$STR_Globe_turret0";
				tooltip="$STR_a3_CfgVehicles_modulePositioning_F_Arguments_rotation_0";
				property="Rotation_Turret";
				control="SliderTurretRotation_360";
				defaultValue="0";
				expression="_this animateSource ['Turret_source',_value,true]";
			};
			class Gun_Elevation
			{
				displayName="$STR_dn_staticcannon";
				tooltip="$STR_A3_disp_editor_elevation";
				property="Gun_Elevation";
				control="SliderGunElevation_25";
				defaultValue="0";
				expression="_this animateSource ['Gun_source',_value,true]";
			};
			class LiveMove
			{
				property="LiveMove";
				control="Checkbox";
				displayName="$STR_Globe_CfgFunctions_expEden_fnc_VRTargetTurretGunLiveMove0";
				tooltip="$STR_Globe_CfgFunctions_expEden_fnc_VRTargetTurretGunLiveMove1";
				expression="if (_value isEqualTo true) then {_this spawn expEden_fnc_VRTargetLiveMoveAPC};";
				defaultValue="false";
				wikiType="[[Bool]]";
			};
		};
		class EventHandlers
		{
			class Globe_VRHit
			{
				postInit="[(_this # 0), (_this # 0) getVariable ['Globe_VRHitTimeRe', 30]] call bis_fnc_VRHitpart;";
			};
		};
	};
};
