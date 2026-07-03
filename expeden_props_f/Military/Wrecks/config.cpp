class CfgPatches
{
	class Props_Globe_Military_Wrecks
	{
		addonRootClass="A3_Props_F_Globe";
		requiredAddons[]=
		{
			"A3_Props_F_Globe_Military"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Wreck_Heli_02_hex_Wreck_01",
			"Wreck_Heli_02_hex_Wreck_02",
			"Wreck_Heli_02_hex_Wreck_04",
			"Wreck_Heli_02_digital_Wreck_01",
			"Wreck_Heli_02_digital_Wreck_02",
			"Wreck_Heli_02_digital_Wreck_04",
			"Wreck_Heli_02_BW_Wreck_01",
			"Wreck_Heli_02_BW_Wreck_02",
			"Wreck_Heli_02_BW_Wreck_04",
			"Wreck_Heli_02_blue_Wreck_01",
			"Wreck_Heli_02_blue_Wreck_02",
			"Wreck_Heli_02_blue_Wreck_04"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Land_Wreck_Heli_02_Wreck_01_F;
	class Land_Wreck_Heli_02_Wreck_02_F;
	class Land_Wreck_Heli_02_Wreck_04_F;
	class Wreck_Heli_02_hex_Wreck_01: Land_Wreck_Heli_02_Wreck_01_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Wreck_Heli_02_hex_Wreck_01.jpg";
		_generalMacro="Wreck_Heli_02_hex_Wreck_01";
		displayName="$STR_Globe_CfgVehicles_Wreck_Heli_02_hex_Wreck_040";
		hiddenSelectionsTextures[]=
		{
			"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_CO.paa",
			"a3\props_f_enoch\military\wrecks\data\ka60_wreck_co.paa"
		};
	};
	class Wreck_Heli_02_hex_Wreck_02: Land_Wreck_Heli_02_Wreck_02_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Wreck_Heli_02_hex_Wreck_02.jpg";
		_generalMacro="Wreck_Heli_02_hex_Wreck_02";
		displayName="$STR_Globe_CfgVehicles_Wreck_Heli_02_hex_Wreck_030";
		hiddenSelectionsTextures[]=
		{
			"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_CO.paa",
			"a3\props_f_enoch\military\wrecks\data\ka60_wreck_co.paa"
		};
	};
	class Wreck_Heli_02_hex_Wreck_04: Land_Wreck_Heli_02_Wreck_04_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Wreck_Heli_02_hex_Wreck_04.jpg";
		_generalMacro="Wreck_Heli_02_hex_Wreck_04";
		displayName="$STR_Globe_CfgVehicles_Wreck_Heli_02_hex_Wreck_010";
		hiddenSelectionsTextures[]=
		{
			"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_CO.paa",
			"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_CO.paa"
		};
	};
	class Wreck_Heli_02_digital_Wreck_01: Land_Wreck_Heli_02_Wreck_01_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Wreck_Heli_02_digital_Wreck_01.jpg";
		_generalMacro="Wreck_Heli_02_digital_Wreck_01";
		displayName="$STR_Globe_CfgVehicles_Wreck_Heli_02_digital_Wreck_040";
		hiddenSelectionsTextures[]=
		{
			"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_INDP_CO.paa",
			"a3\props_f_enoch\military\wrecks\data\ka60_wreck_co.paa"
		};
	};
	class Wreck_Heli_02_digital_Wreck_02: Land_Wreck_Heli_02_Wreck_02_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Wreck_Heli_02_digital_Wreck_02.jpg";
		_generalMacro="Wreck_Heli_02_digital_Wreck_02";
		displayName="$STR_Globe_CfgVehicles_Wreck_Heli_02_digital_Wreck_030";
		hiddenSelectionsTextures[]=
		{
			"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_INDP_CO.paa",
			"a3\props_f_enoch\military\wrecks\data\ka60_wreck_co.paa"
		};
	};
	class Wreck_Heli_02_digital_Wreck_04: Land_Wreck_Heli_02_Wreck_04_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Wreck_Heli_02_digital_Wreck_04.jpg";
		_generalMacro="Wreck_Heli_02_digital_Wreck_04";
		displayName="$STR_Globe_CfgVehicles_Wreck_Heli_02_digital_Wreck_010";
		hiddenSelectionsTextures[]=
		{
			"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_INDP_CO.paa",
			"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_INDP_CO.paa"
		};
	};
	class Wreck_Heli_02_BW_Wreck_01: Land_Wreck_Heli_02_Wreck_01_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Wreck_Heli_02_BW_Wreck_01.jpg";
		_generalMacro="Wreck_Heli_02_BW_Wreck_01";
		displayName="$STR_Globe_CfgVehicles_Wreck_Heli_02_BW_Wreck_040";
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_Heli\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_V2_CO.paa",
			"a3\props_f_enoch\military\wrecks\data\ka60_wreck_co.paa"
		};
	};
	class Wreck_Heli_02_BW_Wreck_02: Land_Wreck_Heli_02_Wreck_02_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Wreck_Heli_02_BW_Wreck_02.jpg";
		_generalMacro="Wreck_Heli_02_BW_Wreck_02";
		displayName="$STR_Globe_CfgVehicles_Wreck_Heli_02_BW_Wreck_030";
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_Heli\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_V2_CO.paa",
			"a3\props_f_enoch\military\wrecks\data\ka60_wreck_co.paa"
		};
	};
	class Wreck_Heli_02_BW_Wreck_04: Land_Wreck_Heli_02_Wreck_04_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Wreck_Heli_02_BW_Wreck_04.jpg";
		_generalMacro="Wreck_Heli_02_BW_Wreck_04";
		displayName="$STR_Globe_CfgVehicles_Wreck_Heli_02_BW_Wreck_010";
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_Heli\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_V2_CO.paa",
			"\A3\Air_F_Heli\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_V2_CO.paa"
		};
	};
	class Wreck_Heli_02_blue_Wreck_01: Land_Wreck_Heli_02_Wreck_01_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Wreck_Heli_02_blue_Wreck_01.jpg";
		_generalMacro="Wreck_Heli_02_blue_Wreck_01";
		displayName="$STR_Globe_CfgVehicles_Wreck_Heli_02_blue_Wreck_040";
		hiddenSelectionsTextures[]=
		{
			"\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa",
			"a3\props_f_enoch\military\wrecks\data\ka60_wreck_co.paa"
		};
	};
	class Wreck_Heli_02_blue_Wreck_02: Land_Wreck_Heli_02_Wreck_02_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Wreck_Heli_02_blue_Wreck_02.jpg";
		_generalMacro="Wreck_Heli_02_blue_Wreck_02";
		displayName="$STR_Globe_CfgVehicles_Wreck_Heli_02_blue_Wreck_030";
		hiddenSelectionsTextures[]=
		{
			"\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa",
			"a3\props_f_enoch\military\wrecks\data\ka60_wreck_co.paa"
		};
	};
	class Wreck_Heli_02_blue_Wreck_04: Land_Wreck_Heli_02_Wreck_04_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Wreck_Heli_02_blue_Wreck_04.jpg";
		_generalMacro="Wreck_Heli_02_blue_Wreck_04";
		displayName="$STR_Globe_CfgVehicles_Wreck_Heli_02_blue_Wreck_010";
		hiddenSelectionsTextures[]=
		{
			"\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa",
			"\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
		};
	};
};
