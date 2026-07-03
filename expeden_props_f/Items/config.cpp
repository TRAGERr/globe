class CfgPatches
{
	class A3_Props_F_Globe_Items
	{
		addonRootClass="A3_Props_F_Globe";
		requiredAddons[]=
		{
			"A3_Props_F_Globe"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Chemlight_Blue_light",
			"Chemlight_Green_light",
			"Chemlight_Red_light",
			"Chemlight_Yellow_light",
			"Land_Chemlight_Blue_noLight",
			"Land_Chemlight_Green_noLight",
			"Land_Chemlight_Red_noLight",
			"Land_Chemlight_Yellow_noLight"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Items_base_F;
	class Land_Chemlight_Blue_noLight: Items_base_F
	{
		author="O&T Expansion Eden";
		mapSize=0.090000011;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.079000004;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Land_Chemlight_Blue_noLight.jpg";
		_generalMacro="Land_Chemlight_Blue_noLight";
		scope=2;
		scopeCurator=2;
		destrType="DestructNo";
		cost=100;
		displayName="$STR_Globe_CfgVehicles_Land_Chemlight_Blue_noLight0";
		model="\A3\Weapons_F\Chemlight\Chemlight_Blue_Lit.p3d";
		icon="iconObject_1x10";
		editorSubcategory="EdSubcat_Camping";
	};
	class Land_Chemlight_Green_noLight: Land_Chemlight_Blue_noLight
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Land_Chemlight_Green_noLight.jpg";
		_generalMacro="Land_Chemlight_Green_noLight";
		displayName="$STR_Globe_CfgVehicles_Land_Chemlight_Green_noLight0";
		model="\A3\Weapons_F\Chemlight\Chemlight_Green_Lit.p3d";
	};
	class Land_Chemlight_Red_noLight: Land_Chemlight_Blue_noLight
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Land_Chemlight_Red_noLight.jpg";
		_generalMacro="Land_Chemlight_Red_noLight";
		displayName="$STR_Globe_CfgVehicles_Land_Chemlight_Red_noLight0";
		model="\A3\Weapons_F\Chemlight\Chemlight_Red_Lit.p3d";
	};
	class Land_Chemlight_Yellow_noLight: Land_Chemlight_Blue_noLight
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Land_Chemlight_Yellow_noLight.jpg";
		_generalMacro="Land_Chemlight_Yellow_noLight";
		displayName="$STR_Globe_CfgVehicles_Land_Chemlight_Yellow_noLight0";
		model="\A3\Weapons_F\Chemlight\Chemlight_Yellow_Lit.p3d";
	};
	class Chemlight_Blue_light: Land_Chemlight_Blue_noLight
	{
		author="O&T Expansion Eden";
		_generalMacro="Chemlight_Blue_light";
		displayName="$STR_A3_cfgmagazines_chemlight_blue0";
		class EventHandlers
		{
			class Globe_chemlightEHb
			{
				postInit="[(_this # 0),'blue'] call expEden_fnc_createChemlightLit;";
			};
		};
	};
	class Chemlight_Green_light: Land_Chemlight_Green_noLight
	{
		author="O&T Expansion Eden";
		_generalMacro="Chemlight_Green_light";
		displayName="$STR_A3_cfgmagazines_chemlight0";
		class EventHandlers
		{
			class Globe_chemlightEHg
			{
				postInit="[(_this # 0),'green'] call expEden_fnc_createChemlightLit;";
			};
		};
	};
	class Chemlight_Red_light: Land_Chemlight_Red_noLight
	{
		author="O&T Expansion Eden";
		_generalMacro="Chemlight_Red_light";
		displayName="$STR_A3_cfgmagazines_chemlight_red0";
		class EventHandlers
		{
			class Globe_chemlightEHr
			{
				postInit="[(_this # 0),'red'] call expEden_fnc_createChemlightLit;";
			};
		};
	};
	class Chemlight_Yellow_light: Land_Chemlight_Yellow_noLight
	{
		author="O&T Expansion Eden";
		_generalMacro="Chemlight_Yellow_light";
		displayName="$STR_A3_cfgmagazines_chemlight_yellow0";
		class EventHandlers
		{
			class Globe_chemlightEHy
			{
				postInit="(_this # 0) call expEden_fnc_createChemlightLit;";
			};
		};
	};
};
