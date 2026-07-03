class CfgPatches
{
	class Props_Globe_Civilian_Camping
	{
		addonRootClass="A3_Props_F_Globe";
		requiredAddons[]=
		{
			"A3_Props_F_Globe_Civilian"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Lantern_01_black_off",
			"Lantern_01_blue_off",
			"Lantern_01_green_off",
			"Lantern_01_red_off",
			"Lantern_01_black_empty",
			"Lantern_01_blue_empty",
			"Lantern_01_green_empty",
			"Lantern_01_red_empty",
			"Lantern_01_random",
			"Lantern_01_random_off",
			"Lantern_01_random_empty"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Lantern_01_base_F;
	class Lantern_01_black_off: Lantern_01_base_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_Decade\Data\CfgVehicles\Lantern_01_black_F.jpg";
		_generalMacro="Lantern_01_black_off";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Lantern_01_black_off0";
		hiddenSelectionsTextures[]=
		{
			"\a3\Props_F_Decade\Civilian\Camping\Data\Lantern_01_Black_CO.paa"
		};
		class EventHandlers
		{
			init="(_this # 0) inflame false";
		};
	};
	class Lantern_01_blue_off: Lantern_01_base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_F_Decade\Data\CfgVehicles\Lantern_01_blue_F.jpg";
		_generalMacro="Lantern_01_blue_off";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Lantern_01_blue_off0";
		hiddenSelectionsTextures[]=
		{
			"\a3\Props_F_Decade\Civilian\Camping\Data\Lantern_01_Blue_CO.paa"
		};
		class EventHandlers
		{
			init="(_this # 0) inflame false";
		};
	};
	class Lantern_01_green_off: Lantern_01_base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_F_Decade\Data\CfgVehicles\Lantern_01_green_F.jpg";
		_generalMacro="Lantern_01_green_off";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Lantern_01_green_off0";
		hiddenSelectionsTextures[]=
		{
			"\a3\Props_F_Decade\Civilian\Camping\Data\Lantern_01_Green_CO.paa"
		};
		class EventHandlers
		{
			init="(_this # 0) inflame false";
		};
	};
	class Lantern_01_red_off: Lantern_01_base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_F_Decade\Data\CfgVehicles\Lantern_01_red_F.jpg";
		_generalMacro="Lantern_01_red_off";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Lantern_01_red_off0";
		hiddenSelectionsTextures[]=
		{
			"\a3\Props_F_Decade\Civilian\Camping\Data\Lantern_01_Red_CO.paa"
		};
		class EventHandlers
		{
			init="(_this # 0) inflame false";
		};
	};
	class Lantern_01_black_empty: Lantern_01_base_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_Decade\Data\CfgVehicles\Lantern_01_black_F.jpg";
		_generalMacro="Lantern_01_black_empty";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Lantern_01_black_empty0";
		hiddenSelectionsTextures[]=
		{
			"\a3\Props_F_Decade\Civilian\Camping\Data\Lantern_01_Black_CO.paa"
		};
		simulation="thing";
		class Effects
		{
		};
		class EventHandlers
		{
		};
	};
	class Lantern_01_blue_empty: Lantern_01_base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_F_Decade\Data\CfgVehicles\Lantern_01_blue_F.jpg";
		_generalMacro="Lantern_01_blue_empty";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Lantern_01_blue_empty0";
		hiddenSelectionsTextures[]=
		{
			"\a3\Props_F_Decade\Civilian\Camping\Data\Lantern_01_Blue_CO.paa"
		};
		simulation="thing";
		class Effects
		{
		};
		class EventHandlers
		{
		};
	};
	class Lantern_01_green_empty: Lantern_01_base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_F_Decade\Data\CfgVehicles\Lantern_01_green_F.jpg";
		_generalMacro="Lantern_01_green_empty";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Lantern_01_green_empty0";
		hiddenSelectionsTextures[]=
		{
			"\a3\Props_F_Decade\Civilian\Camping\Data\Lantern_01_Green_CO.paa"
		};
		simulation="thing";
		class Effects
		{
		};
		class EventHandlers
		{
		};
	};
	class Lantern_01_red_empty: Lantern_01_base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_F_Decade\Data\CfgVehicles\Lantern_01_red_F.jpg";
		_generalMacro="Lantern_01_red_empty";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Lantern_01_red_empty0";
		hiddenSelectionsTextures[]=
		{
			"\a3\Props_F_Decade\Civilian\Camping\Data\Lantern_01_Red_CO.paa"
		};
		simulation="thingX";
		class Effects
		{
		};
		class EventHandlers
		{
		};
	};
	class Lantern_01_random: Lantern_01_base_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_Decade\Data\CfgVehicles\Lantern_01_black_F.jpg";
		_generalMacro="Lantern_01_random";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Lantern_01_random0";
		hiddenSelectionsTextures[]=
		{
			"\a3\Props_F_Decade\Civilian\Camping\Data\Lantern_01_Black_CO.paa"
		};
		class EventHandlers
		{
			init="(_this # 0) call compile preprocessFileLineNumbers 'A3\Props_F_Globe\Civilian\Camping\Scripts\RandomizeLanternColor.sqf'; (_this # 0) inflame true;";
		};
	};
	class Lantern_01_random_off: Lantern_01_base_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_Decade\Data\CfgVehicles\Lantern_01_black_F.jpg";
		_generalMacro="Lantern_01_random_off";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Lantern_01_random_off0";
		hiddenSelectionsTextures[]=
		{
			"\a3\Props_F_Decade\Civilian\Camping\Data\Lantern_01_Black_CO.paa"
		};
		class EventHandlers
		{
			init="(_this # 0) call compile preprocessFileLineNumbers 'A3\Props_F_Globe\Civilian\Camping\Scripts\RandomizeLanternColor.sqf'; (_this # 0) inflame false";
		};
	};
	class Lantern_01_random_empty: Lantern_01_base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_F_Decade\Data\CfgVehicles\Lantern_01_red_F.jpg";
		_generalMacro="Lantern_01_random_empty";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Lantern_01_random_empty0";
		hiddenSelectionsTextures[]=
		{
			"\a3\Props_F_Decade\Civilian\Camping\Data\Lantern_01_Black_CO.paa"
		};
		simulation="thingX";
		class Effects
		{
		};
		class EventHandlers
		{
			init="(_this # 0) call compile preprocessFileLineNumbers 'A3\Props_F_Globe\Civilian\Camping\Scripts\RandomizeLanternColor.sqf';";
		};
	};
};
