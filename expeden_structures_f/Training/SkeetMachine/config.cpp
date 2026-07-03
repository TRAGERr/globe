class CfgPatches
{
	class Structures_Globe_Training_SkeetMachine
	{
		addonRootClass="A3_Structures_F_Globe";
		requiredAddons[]=
		{
			"A3_Structures_F_Globe_Training"
		};
		requiredVersion=0.1;
		units[]=
		{
			"TargetVehicle_01_empty",
			"Steel_Plate_Rabbit",
			"Metal_Pole_Skeet_white",
			"Metal_Pole_Skeet_blue",
			"Metal_Pole_Skeet_gray",
			"Metal_Pole_Skeet_green",
			"Metal_Pole_Skeet_purple",
			"Metal_Pole_Skeet_red",
			"Skeet_Clay_whitePart1",
			"Skeet_Clay_whitePart2",
			"Skeet_Clay_whitePart3",
			"Skeet_Clay_whitePart4",
			"Skeet_Clay_bluePart1",
			"Skeet_Clay_bluePart2",
			"Skeet_Clay_bluePart3",
			"Skeet_Clay_bluePart4",
			"Skeet_Clay_grayPart1",
			"Skeet_Clay_grayPart2",
			"Skeet_Clay_grayPart3",
			"Skeet_Clay_grayPart4",
			"Skeet_Clay_greenPart1",
			"Skeet_Clay_greenPart2",
			"Skeet_Clay_greenPart3",
			"Skeet_Clay_greenPart4",
			"Skeet_Clay_orangePart1",
			"Skeet_Clay_orangePart2",
			"Skeet_Clay_orangePart3",
			"Skeet_Clay_orangePart4",
			"Skeet_Clay_purplePart1",
			"Skeet_Clay_purplePart2",
			"Skeet_Clay_purplePart3",
			"Skeet_Clay_purplePart4",
			"Skeet_Clay_redPart1",
			"Skeet_Clay_redPart2",
			"Skeet_Clay_redPart3",
			"Skeet_Clay_redPart4",
			"Skeet_Clay_white",
			"Skeet_Clay_blue",
			"Skeet_Clay_gray",
			"Skeet_Clay_green",
			"Skeet_Clay_orange",
			"Skeet_Clay_purple",
			"Skeet_Clay_red"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class ThingX;
	class Metal_Pole_Skeet_F;
	class Items_base_F;
	class NonStrategic;
	class Skeet_Clay_parts_base: NonStrategic
	{
		author="O&T Expansion Eden";
		mapSize=0.0060000001;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.000999999;
			verticalOffsetWorld=0;
			init="''";
		};
		_generalMacro="Skeet_Clay_parts_base";
		scope=0;
		scopeCurator=0;
		displayName="$STR_Globe_CfgVehicles_Skeet_Clay_whitePart10";
		model="A3\Structures_F\Training\SkeetMachine\skeet_clay_part01_f";
		icon="iconObject_circle";
		editorCategory="EdCat_Things";
		editorSubcategory="EdSubcat_Garbage";
		vehicleClass="Garbage";
	};
	class Skeet_Clay_whitePart1: Skeet_Clay_parts_base
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Skeet_Clay_whitePart1.jpg";
		_generalMacro="Skeet_Clay_whitePart1";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Skeet_Clay_whitePart10";
		model="A3\Structures_F\Training\SkeetMachine\skeet_clay_part01_f";
	};
	class Skeet_Clay_whitePart2: Skeet_Clay_parts_base
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Skeet_Clay_whitePart2.jpg";
		_generalMacro="Skeet_Clay_whitePart2";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Skeet_Clay_whitePart20";
		model="A3\Structures_F\Training\SkeetMachine\skeet_clay_part02_f";
	};
	class Skeet_Clay_whitePart3: Skeet_Clay_parts_base
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Skeet_Clay_whitePart3.jpg";
		_generalMacro="Skeet_Clay_whitePart3";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Skeet_Clay_whitePart30";
		model="A3\Structures_F\Training\SkeetMachine\skeet_clay_part03_f";
	};
	class Skeet_Clay_whitePart4: Skeet_Clay_parts_base
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Skeet_Clay_whitePart4.jpg";
		_generalMacro="Skeet_Clay_whitePart4";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Skeet_Clay_whitePart40";
		model="A3\Structures_F\Training\SkeetMachine\skeet_clay_part04_f";
	};
	class Skeet_Clay_bluePart1: Skeet_Clay_parts_base
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Skeet_Clay_bluePart1.jpg";
		_generalMacro="Skeet_Clay_bluePart1";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Skeet_Clay_bluePart10";
		model="A3\Structures_F\Training\SkeetMachine\skeet_clay_part01_blue_f";
	};
	class Skeet_Clay_bluePart2: Skeet_Clay_parts_base
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Skeet_Clay_bluePart2.jpg";
		_generalMacro="Skeet_Clay_bluePart2";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Skeet_Clay_bluePart20";
		model="A3\Structures_F\Training\SkeetMachine\skeet_clay_part02_blue_f";
	};
	class Skeet_Clay_bluePart3: Skeet_Clay_parts_base
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Skeet_Clay_bluePart3.jpg";
		_generalMacro="Skeet_Clay_bluePart3";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Skeet_Clay_bluePart30";
		model="A3\Structures_F\Training\SkeetMachine\skeet_clay_part03_blue_f";
	};
	class Skeet_Clay_bluePart4: Skeet_Clay_parts_base
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Skeet_Clay_bluePart4.jpg";
		_generalMacro="Skeet_Clay_bluePart4";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Skeet_Clay_bluePart40";
		model="A3\Structures_F\Training\SkeetMachine\skeet_clay_part04_blue_f";
	};
	class Skeet_Clay_grayPart1: Skeet_Clay_parts_base
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Skeet_Clay_grayPart1.jpg";
		_generalMacro="Skeet_Clay_grayPart1";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Skeet_Clay_grayPart10";
		model="A3\Structures_F\Training\SkeetMachine\skeet_clay_part01_gray_f";
	};
	class Skeet_Clay_grayPart2: Skeet_Clay_parts_base
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Skeet_Clay_grayPart2.jpg";
		_generalMacro="Skeet_Clay_grayPart2";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Skeet_Clay_grayPart20";
		model="A3\Structures_F\Training\SkeetMachine\skeet_clay_part02_gray_f";
	};
	class Skeet_Clay_grayPart3: Skeet_Clay_parts_base
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Skeet_Clay_grayPart3.jpg";
		_generalMacro="Skeet_Clay_grayPart3";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Skeet_Clay_grayPart30";
		model="A3\Structures_F\Training\SkeetMachine\skeet_clay_part03_gray_f";
	};
	class Skeet_Clay_grayPart4: Skeet_Clay_parts_base
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Skeet_Clay_grayPart4.jpg";
		_generalMacro="Skeet_Clay_grayPart4";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Skeet_Clay_grayPart40";
		model="A3\Structures_F\Training\SkeetMachine\skeet_clay_part04_gray_f";
	};
	class Skeet_Clay_greenPart1: Skeet_Clay_parts_base
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Skeet_Clay_greenPart1.jpg";
		_generalMacro="Skeet_Clay_greenPart1";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Skeet_Clay_greenPart10";
		model="A3\Structures_F\Training\SkeetMachine\skeet_clay_part01_green_f";
	};
	class Skeet_Clay_greenPart2: Skeet_Clay_parts_base
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Skeet_Clay_greenPart2.jpg";
		_generalMacro="Skeet_Clay_greenPart2";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Skeet_Clay_greenPart20";
		model="A3\Structures_F\Training\SkeetMachine\skeet_clay_part02_green_f";
	};
	class Skeet_Clay_greenPart3: Skeet_Clay_parts_base
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Skeet_Clay_greenPart3.jpg";
		_generalMacro="Skeet_Clay_greenPart3";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Skeet_Clay_greenPart30";
		model="A3\Structures_F\Training\SkeetMachine\skeet_clay_part03_green_f";
	};
	class Skeet_Clay_greenPart4: Skeet_Clay_parts_base
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Skeet_Clay_greenPart4.jpg";
		_generalMacro="Skeet_Clay_greenPart4";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Skeet_Clay_greenPart40";
		model="A3\Structures_F\Training\SkeetMachine\skeet_clay_part04_green_f";
	};
	class Skeet_Clay_orangePart1: Skeet_Clay_parts_base
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Skeet_Clay_orangePart1.jpg";
		_generalMacro="Skeet_Clay_orangePart1";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Skeet_Clay_orangePart10";
		model="A3\Structures_F\Training\SkeetMachine\skeet_clay_part01_orange_f";
	};
	class Skeet_Clay_orangePart2: Skeet_Clay_parts_base
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Skeet_Clay_orangePart2.jpg";
		_generalMacro="Skeet_Clay_orangePart2";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Skeet_Clay_orangePart20";
		model="A3\Structures_F\Training\SkeetMachine\skeet_clay_part02_orange_f";
	};
	class Skeet_Clay_orangePart3: Skeet_Clay_parts_base
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Skeet_Clay_orangePart3.jpg";
		_generalMacro="Skeet_Clay_orangePart3";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Skeet_Clay_orangePart30";
		model="A3\Structures_F\Training\SkeetMachine\skeet_clay_part03_orange_f";
	};
	class Skeet_Clay_orangePart4: Skeet_Clay_parts_base
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Skeet_Clay_orangePart4.jpg";
		_generalMacro="Skeet_Clay_orangePart4";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Skeet_Clay_orangePart40";
		model="A3\Structures_F\Training\SkeetMachine\skeet_clay_part04_orange_f";
	};
	class Skeet_Clay_purplePart1: Skeet_Clay_parts_base
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Skeet_Clay_purplePart1.jpg";
		_generalMacro="Skeet_Clay_purplePart1";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Skeet_Clay_purplePart10";
		model="A3\Structures_F\Training\SkeetMachine\skeet_clay_part01_purple_f";
	};
	class Skeet_Clay_purplePart2: Skeet_Clay_parts_base
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Skeet_Clay_purplePart2.jpg";
		_generalMacro="Skeet_Clay_purplePart2";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Skeet_Clay_purplePart20";
		model="A3\Structures_F\Training\SkeetMachine\skeet_clay_part02_purple_f";
	};
	class Skeet_Clay_purplePart3: Skeet_Clay_parts_base
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Skeet_Clay_purplePart3.jpg";
		_generalMacro="Skeet_Clay_purplePart3";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Skeet_Clay_purplePart30";
		model="A3\Structures_F\Training\SkeetMachine\skeet_clay_part03_purple_f";
	};
	class Skeet_Clay_purplePart4: Skeet_Clay_parts_base
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Skeet_Clay_purplePart4.jpg";
		_generalMacro="Skeet_Clay_purplePart4";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Skeet_Clay_purplePart40";
		model="A3\Structures_F\Training\SkeetMachine\skeet_clay_part04_purple_f";
	};
	class Skeet_Clay_redPart1: Skeet_Clay_parts_base
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Skeet_Clay_redPart1.jpg";
		_generalMacro="Skeet_Clay_redPart1";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Skeet_Clay_redPart10";
		model="A3\Structures_F\Training\SkeetMachine\skeet_clay_part01_red_f";
	};
	class Skeet_Clay_redPart2: Skeet_Clay_parts_base
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Skeet_Clay_redPart2.jpg";
		_generalMacro="Skeet_Clay_redPart2";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Skeet_Clay_redPart20";
		model="A3\Structures_F\Training\SkeetMachine\skeet_clay_part02_red_f";
	};
	class Skeet_Clay_redPart3: Skeet_Clay_parts_base
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Skeet_Clay_redPart3.jpg";
		_generalMacro="Skeet_Clay_redPart3";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Skeet_Clay_redPart30";
		model="A3\Structures_F\Training\SkeetMachine\skeet_clay_part03_red_f";
	};
	class Skeet_Clay_redPart4: Skeet_Clay_parts_base
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Skeet_Clay_redPart4.jpg";
		_generalMacro="Skeet_Clay_redPart4";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Skeet_Clay_redPart40";
		model="A3\Structures_F\Training\SkeetMachine\skeet_clay_part04_red_f";
	};
	class Skeet_Clay_white: Items_base_F
	{
		author="O&T Expansion Eden";
		mapSize=0.16;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.017999999;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Skeet_Clay_white.jpg";
		_generalMacro="Skeet_Clay_white";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Skeet_Clay_white0";
		model="\A3\Structures_F\Training\SkeetMachine\Skeet_Clay_F";
		icon="iconObject_circle";
		editorSubcategory="EdSubcat_Targets";
		vehicleClass="Training";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.8,0.8,0.8,1.0,co)"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Structures_F\Training\SkeetMachine\Data\Skeet.rvmat"
		};
		class Attributes
		{
			class ObjectTextureCustom0
			{
				displayName="$STR_3den_object_attribute_objecttexturecustom0_displayname";
				tooltip="$STR_3den_object_attribute_objecttexturecustom_tooltip";
				property="ObjectTextureCustom0";
				control="Edit";
				expression="_this setObjectTextureGlobal [0,_value]";
				defaultValue="getObjectTextures _this select 0";
			};
			class ObjectMaterialCustom0
			{
				displayName="$STR_3den_object_attribute_objectmaterialcustom0_displayname";
				tooltip="$STR_3den_object_attribute_objectmaterialcustom_tooltip";
				property="ObjectMaterialCustom0";
				control="Edit";
				expression="_this setObjectMaterialGlobal [0,_value]";
				defaultValue="getObjectMaterials _this select 0";
			};
		};
		class EventHandlers
		{
			class Globe_SkeetClayHitEH
			{
				postInit="(_this # 0) setVariable ['color','',isServer]";
				hitPart="if (isDamageAllowed ((_this # 0) # 0)) then {(_this # 0) execVM '\A3\Structures_F\Training\data\scripts\Skeet_Clay_F_hitPart.sqf'};";
			};
		};
	};
	class Skeet_Clay_blue: Skeet_Clay_white
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Skeet_Clay_blue.jpg";
		_generalMacro="Skeet_Clay_blue";
		displayName="$STR_Globe_CfgVehicles_Skeet_Clay_blue0";
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.404,0.545,0.608,1,co)"
		};
		class EventHandlers: EventHandlers
		{
			class Globe_SkeetClayHitEH: Globe_SkeetClayHitEH
			{
				postInit="(_this # 0) setVariable ['color','blue',isServer]";
			};
		};
	};
	class Skeet_Clay_gray: Skeet_Clay_white
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Skeet_Clay_gray.jpg";
		_generalMacro="Skeet_Clay_gray";
		displayName="$STR_Globe_CfgVehicles_Skeet_Clay_gray0";
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.353,0.349,0.353,1,co)"
		};
		class EventHandlers: EventHandlers
		{
			class Globe_SkeetClayHitEH: Globe_SkeetClayHitEH
			{
				postInit="(_this # 0) setVariable ['color','gray',isServer]";
			};
		};
	};
	class Skeet_Clay_green: Skeet_Clay_white
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Skeet_Clay_green.jpg";
		_generalMacro="Skeet_Clay_green";
		displayName="$STR_Globe_CfgVehicles_Skeet_Clay_green0";
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.678,0.749,0.514,1,co)"
		};
		class EventHandlers: EventHandlers
		{
			class Globe_SkeetClayHitEH: Globe_SkeetClayHitEH
			{
				postInit="(_this # 0) setVariable ['color','green',isServer]";
			};
		};
	};
	class Skeet_Clay_orange: Skeet_Clay_white
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Skeet_Clay_orange.jpg";
		_generalMacro="Skeet_Clay_orange";
		scope=1;
		scopeCurator=0;
		displayName="$STR_Globe_CfgVehicles_Skeet_Clay_orange0";
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.941,0.510,0.192,1,co)"
		};
	};
	class Skeet_Clay_purple: Skeet_Clay_white
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Skeet_Clay_purple.jpg";
		_generalMacro="Skeet_Clay_purple";
		displayName="$STR_Globe_CfgVehicles_Skeet_Clay_purple0";
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.690,0.251,0.655,1,co)"
		};
		class EventHandlers: EventHandlers
		{
			class Globe_SkeetClayHitEH: Globe_SkeetClayHitEH
			{
				postInit="(_this # 0) setVariable ['color','purple',isServer]";
			};
		};
	};
	class Skeet_Clay_red: Skeet_Clay_white
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Skeet_Clay_red.jpg";
		_generalMacro="Skeet_Clay_red";
		displayName="$STR_Globe_CfgVehicles_Skeet_Clay_red0";
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.694,0.2,0.224,1,co)"
		};
		class EventHandlers: EventHandlers
		{
			class Globe_SkeetClayHitEH: Globe_SkeetClayHitEH
			{
				postInit="(_this # 0) setVariable ['color','red',isServer]";
			};
		};
	};
	class Metal_Pole_Skeet_white: Metal_Pole_Skeet_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Metal_Pole_Skeet_white.jpg";
		_generalMacro="Metal_Pole_Skeet_white";
		displayName="$STR_Globe_CfgVehicles_Metal_Pole_Skeet_white0";
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.8,0.8,0.8,1.0,co)"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Structures_F\Training\SkeetMachine\Data\Skeet.rvmat"
		};
		class EventHandlers
		{
			class Globe_SkeetPoleHitEH
			{
				postInit="(_this # 0) setVariable ['color','',isServer]";
				hitPart="if (isDamageAllowed ((_this # 0) # 0)) then {(_this # 0) execVM '\A3\Structures_F\Training\data\scripts\Metal_Pole_Skeet_F_hitPart.sqf'};";
			};
		};
	};
	class Metal_Pole_Skeet_blue: Metal_Pole_Skeet_white
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Metal_Pole_Skeet_blue.jpg";
		_generalMacro="Metal_Pole_Skeet_blue";
		displayName="$STR_Globe_CfgVehicles_Metal_Pole_Skeet_blue0";
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.404,0.545,0.608,1,co)"
		};
		class EventHandlers: EventHandlers
		{
			class Globe_SkeetPoleHitEH: Globe_SkeetPoleHitEH
			{
				postInit="(_this # 0) setVariable ['color','blue',isServer]";
			};
		};
	};
	class Metal_Pole_Skeet_gray: Metal_Pole_Skeet_white
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Metal_Pole_Skeet_gray.jpg";
		_generalMacro="Metal_Pole_Skeet_gray";
		displayName="$STR_Globe_CfgVehicles_Metal_Pole_Skeet_gray0";
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.353,0.349,0.353,1,co)"
		};
		class EventHandlers: EventHandlers
		{
			class Globe_SkeetPoleHitEH: Globe_SkeetPoleHitEH
			{
				postInit="(_this # 0) setVariable ['color','gray',isServer]";
			};
		};
	};
	class Metal_Pole_Skeet_green: Metal_Pole_Skeet_white
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Metal_Pole_Skeet_green.jpg";
		_generalMacro="Metal_Pole_Skeet_green";
		displayName="$STR_Globe_CfgVehicles_Metal_Pole_Skeet_green0";
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.678,0.749,0.514,1,co)"
		};
		class EventHandlers: EventHandlers
		{
			class Globe_SkeetPoleHitEH: Globe_SkeetPoleHitEH
			{
				postInit="(_this # 0) setVariable ['color','green',isServer]";
			};
		};
	};
	class Metal_Pole_Skeet_purple: Metal_Pole_Skeet_white
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Metal_Pole_Skeet_purple.jpg";
		_generalMacro="Metal_Pole_Skeet_purple";
		displayName="$STR_Globe_CfgVehicles_Metal_Pole_Skeet_purple0";
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.690,0.251,0.655,1,co)"
		};
		class EventHandlers: EventHandlers
		{
			class Globe_SkeetPoleHitEH: Globe_SkeetPoleHitEH
			{
				postInit="(_this # 0) setVariable ['color','purple',isServer]";
			};
		};
	};
	class Metal_Pole_Skeet_red: Metal_Pole_Skeet_white
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Metal_Pole_Skeet_red.jpg";
		_generalMacro="Metal_Pole_Skeet_red";
		displayName="$STR_Globe_CfgVehicles_Metal_Pole_Skeet_red0";
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.694,0.2,0.224,1,co)"
		};
		class EventHandlers: EventHandlers
		{
			class Globe_SkeetPoleHitEH: Globe_SkeetPoleHitEH
			{
				postInit="(_this # 0) setVariable ['color','red',isServer]";
			};
		};
	};
	class Steel_Plate_PinkRabbit_01: ThingX
	{
		author="O&T Expansion Eden";
		mapSize=0.41;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.20100001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Steel_Plate_PinkRabbit_01.jpg";
		_generalMacro="Steel_Plate_PinkRabbit_01";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_Cfgvehicles_Steel_Plate_PinkRabbit_010";
		model="A3\Structures_F\Training\steel_plate_rabbit_f";
		icon="iconObject_5x1";
		editorSubcategory="EdSubcat_Targets";
		vehicleClass="Training";
	};
	class TargetVehicle_01_empty: ThingX
	{
		author="O&T Expansion Eden";
		mapSize=0.99000001;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.2;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\TargetVehicle_01_empty.jpg";
		_generalMacro="TargetVehicle_01_empty";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_Cfgvehicles_TargetVehicle_01_empty0";
		model="\A3\Structures_F\Training\Target_PopUp_large_F";
		icon="iconObject_2x1";
		editorSubcategory="EdSubcat_Targets";
		vehicleClass="Training";
	};
};
