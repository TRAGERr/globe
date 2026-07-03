class CfgPatches
{
	class Structures_Globe_Items_Sport
	{
		addonRootClass="A3_Structures_F_Globe";
		requiredAddons[]=
		{
			"A3_Structures_F_Globe_Items"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Balloon_01_part_01_blue",
			"Balloon_01_part_02_blue",
			"Balloon_01_part_01_gray",
			"Balloon_01_part_02_gray",
			"Balloon_01_part_01_green",
			"Balloon_01_part_02_green",
			"Balloon_01_part_01_orange",
			"Balloon_01_part_02_orange",
			"Balloon_01_part_01_purple",
			"Balloon_01_part_02_purple",
			"Balloon_01_part_01_red",
			"Balloon_01_part_02_red",
			"Balloon_01_part_01_white",
			"Balloon_01_part_02_white",
			"Land_Balloon_01_air_blue",
			"Land_Balloon_01_water_blue",
			"Land_Balloon_01_air_gray",
			"Land_Balloon_01_water_gray",
			"Land_Balloon_01_air_green",
			"Land_Balloon_01_water_green",
			"Land_Balloon_01_air_purple",
			"Land_Balloon_01_water_purple",
			"Land_Balloon_01_air_red",
			"Land_Balloon_01_water_red",
			"Land_Balloon_01_air_white",
			"Land_Balloon_01_water_white",
			"AirHorn_01_klaxon"
		};
		weapons[]={};
	};
};
class CfgSounds
{
	class AirHornKlaxon
	{
		sound[]=
		{
			"\a3\sounds_f\weapons\horns\truck_horn_4.wss",
			4,
			1,
			400
		};
		titles[]={};
	};
};
class CfgVehicles
{
	class Land_Balloon_01_water_F;
	class Land_Balloon_01_air_F;
	class NonStrategic;
	class Land_AirHorn_01_F;
	class AirHorn_01_klaxon: Land_AirHorn_01_F
	{
		author="O&T Expansion Eden";
		_generalMacro="AirHorn_01_klaxon";
		displayName="$STR_Globe_CfgVehicles_AirHorn_01_klaxon0";
		class EventHandlers
		{
			hitPart="((_this # 0) # 0) say3D ['AirHornKlaxon', 400,1,2,0,true];";
		};
		class UserActions
		{
			class AirHornKlaxon
			{
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\take_ca.paa' size='2.5' />";
				displayName="$STR_a3_cfgvehicles_land_airhorn_01_f0";
				position="camera";
				priority=10;
				radius=2;
				aiMaxRange=2;
				onlyForPlayer=1;
				condition="(alive this) && (cameraOn isKindOf 'CAManBase') && (simulationEnabled this)";
				statement="this say3D ['AirHornKlaxon',400,1,2,0,true];";
			};
		};
	};
	class Balloon_01_part_01_blue: NonStrategic
	{
		author="O&T Expansion Eden";
		mapSize=0.0099999998;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.054000001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Balloon_01_part_01_blue.jpg";
		_generalMacro="Balloon_01_part_01_blue";
		scope=2;
		scopeCurator=0;
		displayName="$STR_Globe_CfgVehicles_Balloon_01_part_01_blue0";
		model="\a3\structures_f_mark\items\sport\particles\balloon_01_part_01_blue_f.p3d";
		icon="iconObject_circle";
		editorCategory="EdCat_Things";
		editorSubcategory="EdSubcat_Garbage";
		vehicleClass="Garbage";
	};
	class Balloon_01_part_02_blue: Balloon_01_part_01_blue
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Balloon_01_part_02_blue.jpg";
		_generalMacro="Balloon_01_part_02_blue";
		displayName="$STR_Globe_CfgVehicles_Balloon_01_part_02_blue0";
		model="\a3\structures_f_mark\items\sport\particles\balloon_01_part_02_blue_f.p3d";
	};
	class Balloon_01_part_01_gray: Balloon_01_part_01_blue
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Balloon_01_part_01_gray.jpg";
		_generalMacro="Balloon_01_part_01_gray";
		displayName="$STR_Globe_CfgVehicles_Balloon_01_part_01_gray0";
		model="\a3\structures_f_mark\items\sport\particles\balloon_01_part_01_gray_f.p3d";
	};
	class Balloon_01_part_02_gray: Balloon_01_part_01_blue
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Balloon_01_part_02_gray.jpg";
		_generalMacro="Balloon_01_part_02_gray";
		displayName="$STR_Globe_CfgVehicles_Balloon_01_part_02_gray0";
		model="\a3\structures_f_mark\items\sport\particles\balloon_01_part_02_gray_f.p3d";
	};
	class Balloon_01_part_01_green: Balloon_01_part_01_blue
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Balloon_01_part_01_green.jpg";
		_generalMacro="Balloon_01_part_01_green";
		displayName="$STR_Globe_CfgVehicles_Balloon_01_part_01_green0";
		model="\a3\structures_f_mark\items\sport\particles\balloon_01_part_01_green_f.p3d";
	};
	class Balloon_01_part_02_green: Balloon_01_part_01_blue
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Balloon_01_part_02_green.jpg";
		_generalMacro="Balloon_01_part_02_green";
		displayName="$STR_Globe_CfgVehicles_Balloon_01_part_02_green0";
		model="\a3\structures_f_mark\items\sport\particles\balloon_01_part_02_green_f.p3d";
	};
	class Balloon_01_part_01_orange: Balloon_01_part_01_blue
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Balloon_01_part_01_orange.jpg";
		_generalMacro="Balloon_01_part_01_orange";
		displayName="$STR_Globe_CfgVehicles_Balloon_01_part_01_orange0";
		model="\a3\structures_f_mark\items\sport\particles\balloon_01_part_01_orange_f.p3d";
	};
	class Balloon_01_part_02_orange: Balloon_01_part_01_blue
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Balloon_01_part_02_orange.jpg";
		_generalMacro="Balloon_01_part_02_orange";
		displayName="$STR_Globe_CfgVehicles_Balloon_01_part_02_orange0";
		model="\a3\structures_f_mark\items\sport\particles\balloon_01_part_02_orange_f.p3d";
	};
	class Balloon_01_part_01_purple: Balloon_01_part_01_blue
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Balloon_01_part_01_purple.jpg";
		_generalMacro="Balloon_01_part_01_purple";
		displayName="$STR_Globe_CfgVehicles_Balloon_01_part_01_purple0";
		model="\a3\structures_f_mark\items\sport\particles\balloon_01_part_01_purple_f.p3d";
	};
	class Balloon_01_part_02_purple: Balloon_01_part_01_blue
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Balloon_01_part_02_purple.jpg";
		_generalMacro="Balloon_01_part_02_purple";
		displayName="$STR_Globe_CfgVehicles_Balloon_01_part_02_purple0";
		model="\a3\structures_f_mark\items\sport\particles\balloon_01_part_02_purple_f.p3d";
	};
	class Balloon_01_part_01_red: Balloon_01_part_01_blue
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Balloon_01_part_01_red.jpg";
		_generalMacro="Balloon_01_part_01_red";
		displayName="$STR_Globe_CfgVehicles_Balloon_01_part_01_red0";
		model="\a3\structures_f_mark\items\sport\particles\balloon_01_part_01_red_f.p3d";
	};
	class Balloon_01_part_02_red: Balloon_01_part_01_blue
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Balloon_01_part_02_red.jpg";
		_generalMacro="Balloon_01_part_02_red";
		displayName="$STR_Globe_CfgVehicles_Balloon_01_part_02_red0";
		model="\a3\structures_f_mark\items\sport\particles\balloon_01_part_02_red_f.p3d";
	};
	class Balloon_01_part_01_white: Balloon_01_part_01_blue
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Balloon_01_part_01_white.jpg";
		_generalMacro="Balloon_01_part_01_white";
		displayName="$STR_Globe_CfgVehicles_Balloon_01_part_01_white0";
		model="\a3\structures_f_mark\items\sport\particles\balloon_01_part_01_white_f.p3d";
	};
	class Balloon_01_part_02_white: Balloon_01_part_01_blue
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Balloon_01_part_02_white.jpg";
		_generalMacro="Balloon_01_part_02_white";
		displayName="$STR_Globe_CfgVehicles_Balloon_01_part_02_white0";
		model="\a3\structures_f_mark\items\sport\particles\balloon_01_part_02_white_f.p3d";
	};
	class Land_Balloon_01_air_blue: Land_Balloon_01_air_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Balloon_01_air_blue.jpg";
		_generalMacro="Land_Balloon_01_air_blue";
		displayName="$STR_Globe_CfgVehicles_Land_Balloon_01_air_blue0";
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.404,0.545,0.608,1.0,co)"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\structures_f_mark\items\sport\data\balloon_01_air.rvmat"
		};
		class EventHandlers
		{
			postInit="(_this # 0) setVariable ['color','blue',isServer]";
			hitPart="if (isDamageAllowed ((_this # 0) # 0)) then {((_this # 0) # 0) setDamage 1};";
			killed="if (isDamageAllowed (_this # 0)) then {[_this] execVM '\A3\Structures_F_Mark\Items\Sport\Scripts\Balloon_01_air_F_hitPart.sqf'};";
		};
	};
	class Land_Balloon_01_water_blue: Land_Balloon_01_water_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Balloon_01_water_blue.jpg";
		_generalMacro="Land_Balloon_01_water_blue";
		displayName="$STR_Globe_CfgVehicles_Land_Balloon_01_water_blue0";
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.404,0.545,0.608,1.0,co)"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\structures_f_mark\items\sport\data\balloon_01_water.rvmat"
		};
		class EventHandlers
		{
			postInit="(_this # 0) setVariable ['color','blue',isServer]";
			hitPart="if (isDamageAllowed ((_this # 0) # 0)) then {((_this # 0) # 0) setDamage 1};";
			killed="if (isDamageAllowed (_this # 0)) then {[_this] execVM '\A3\Structures_F_Mark\Items\Sport\Scripts\Balloon_01_water_F_hitPart.sqf'};";
		};
	};
	class Land_Balloon_01_air_gray: Land_Balloon_01_air_blue
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Balloon_01_air_gray.jpg";
		_generalMacro="Land_Balloon_01_air_gray";
		displayName="$STR_Globe_CfgVehicles_Land_Balloon_01_air_gray0";
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.353,0.349,0.353,1,co)"
		};
		class EventHandlers: EventHandlers
		{
			postInit="(_this # 0) setVariable ['color','gray',isServer]";
		};
	};
	class Land_Balloon_01_water_gray: Land_Balloon_01_water_blue
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Balloon_01_water_gray.jpg";
		_generalMacro="Land_Balloon_01_water_gray";
		displayName="$STR_Globe_CfgVehicles_Land_Balloon_01_water_gray0";
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.353,0.349,0.353,1,co)"
		};
		class EventHandlers: EventHandlers
		{
			postInit="(_this # 0) setVariable ['color','gray',isServer]";
		};
	};
	class Land_Balloon_01_air_green: Land_Balloon_01_air_blue
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Balloon_01_air_green.jpg";
		_generalMacro="Land_Balloon_01_air_green";
		displayName="$STR_Globe_CfgVehicles_Land_Balloon_01_air_green0";
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.678,0.749,0.514,1.0,co)"
		};
		class EventHandlers: EventHandlers
		{
			postInit="(_this # 0) setVariable ['color','green',isServer]";
		};
	};
	class Land_Balloon_01_water_green: Land_Balloon_01_water_blue
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Balloon_01_water_green.jpg";
		_generalMacro="Land_Balloon_01_water_green";
		displayName="$STR_Globe_CfgVehicles_Land_Balloon_01_water_green0";
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.678,0.749,0.514,1.0,co)"
		};
		class EventHandlers: EventHandlers
		{
			postInit="(_this # 0) setVariable ['color','green',isServer]";
		};
	};
	class Land_Balloon_01_air_purple: Land_Balloon_01_air_blue
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Balloon_01_air_purple.jpg";
		_generalMacro="Land_Balloon_01_air_purple";
		displayName="$STR_Globe_CfgVehicles_Land_Balloon_01_air_purple0";
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.690,0.251,0.655,1,co)"
		};
		class EventHandlers: EventHandlers
		{
			postInit="(_this # 0) setVariable ['color','purple',isServer]";
		};
	};
	class Land_Balloon_01_water_purple: Land_Balloon_01_water_blue
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Balloon_01_water_purple.jpg";
		_generalMacro="Land_Balloon_01_water_purple";
		displayName="$STR_Globe_CfgVehicles_Land_Balloon_01_water_purple0";
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.690,0.251,0.655,1,co)"
		};
		class EventHandlers: EventHandlers
		{
			postInit="(_this # 0) setVariable ['color','purple',isServer]";
		};
	};
	class Land_Balloon_01_air_red: Land_Balloon_01_air_blue
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Balloon_01_air_red.jpg";
		_generalMacro="Land_Balloon_01_air_red";
		displayName="$STR_Globe_CfgVehicles_Land_Balloon_01_air_red0";
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.694,0.2,0.224,1.0,co)"
		};
		class EventHandlers: EventHandlers
		{
			postInit="(_this # 0) setVariable ['color','red',isServer]";
		};
	};
	class Land_Balloon_01_water_red: Land_Balloon_01_water_blue
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Balloon_01_water_red.jpg";
		_generalMacro="Land_Balloon_01_water_red";
		displayName="$STR_Globe_CfgVehicles_Land_Balloon_01_water_red0";
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.694,0.2,0.224,1.0,co)"
		};
		class EventHandlers: EventHandlers
		{
			postInit="(_this # 0) setVariable ['color','red',isServer]";
		};
	};
	class Land_Balloon_01_air_white: Land_Balloon_01_air_blue
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Balloon_01_air_white.jpg";
		_generalMacro="Land_Balloon_01_air_white";
		displayName="$STR_Globe_CfgVehicles_Land_Balloon_01_air_white0";
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.8,0.8,0.8,1.0,co)"
		};
		class EventHandlers: EventHandlers
		{
			postInit="(_this # 0) setVariable ['color','white',isServer]";
		};
	};
	class Land_Balloon_01_water_white: Land_Balloon_01_water_blue
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Balloon_01_water_white.jpg";
		_generalMacro="Land_Balloon_01_water_white";
		displayName="$STR_Globe_CfgVehicles_Land_Balloon_01_water_white0";
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.8,0.8,0.8,1.0,co)"
		};
		class EventHandlers: EventHandlers
		{
			postInit="(_this # 0) setVariable ['color','white',isServer]";
		};
	};
};
