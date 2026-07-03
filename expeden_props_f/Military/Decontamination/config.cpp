class CfgPatches
{
	class Props_Globe_Military_Decontamination
	{
		addonRootClass="A3_Props_F_Globe";
		requiredAddons[]=
		{
			"A3_Props_F_Globe_Military"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Land_Tarp_1x2m_tan_G",
			"Land_Tarp_2m_blue_G",
			"AirPurifyingRespirator_01",
			"AirPurifyingRespirator_01_noFilter",
			"AirPurifyingRespirator_02"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Tarp_01_base_F;
	class NonStrategic;
	class Decontamination_base_F;
	class AirPurifyingRespirator_01: Decontamination_base_F
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.0089999996;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\AirPurifyingRespirator_01.jpg";
		_generalMacro="AirPurifyingRespirator_01";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_C_CfgGlasses_G_AirPurifyingRespirator_01_F0";
		icon="iconObject_1x1";
		model="\a3\Characters_F_Enoch\Facewear\G_AirPurifyingRespirator_01_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"filter"
		};
		hiddenSelectionsTextures[]=
		{
			"a3\characters_f_enoch\facewear\data\airpurifyingrespirator_co.paa",
			"a3\characters_f_enoch\facewear\data\airpurifyingrespirator_co.paa"
		};
	};
	class AirPurifyingRespirator_01_noFilter: AirPurifyingRespirator_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\AirPurifyingRespirator_01.jpg";
		_generalMacro="AirPurifyingRespirator_01_noFilter";
		displayName="$STR_Globe_CfgGlasses_G_AirPurifyingRespirator_01_nofilter_F0";
		hiddenSelectionsTextures[]=
		{
			"a3\characters_f_enoch\facewear\data\airpurifyingrespirator_co.paa",
			""
		};
	};
	class AirPurifyingRespirator_02: Decontamination_base_F
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.0089999996;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\AirPurifyingRespirator_02.jpg";
		_generalMacro="AirPurifyingRespirator_02";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgGlasses_AirPurifyingRespirator_020";
		icon="iconObject_1x1";
		model="\a3\Characters_F_Enoch\Facewear\G_AirPurifyingRespirator_02_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"filter"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Enoch\Facewear\data\AirPurifyingRespirator_02_sand_co.paa",
			"\A3\Characters_F_Enoch\Facewear\data\AirPurifyingRespirator_02_olive_co.paa"
		};
		class Attributes
		{
			class maskColor
			{
				displayName="$STR_Globe_CfgGlasses_AirPurifyingRespirator_021";
				property="maskColor";
				control="Combo";
				expression="_this setObjectTextureGlobal [0,_value];";
				defaultValue="'\A3\Characters_F_Enoch\Facewear\data\AirPurifyingRespirator_02_sand_co.paa'";
				typeName="STRING";
				class Values
				{
					class maskColor_sand
					{
						name="$STR_a3_texturesources_sand0";
						value="\A3\Characters_F_Enoch\Facewear\data\AirPurifyingRespirator_02_sand_co.paa";
						picture="\A3\Characters_F_Enoch\Facewear\data\AirPurifyingRespirator_02_sand_co.paa";
					};
					class maskColor_olive
					{
						name="$STR_A3_TEXTURESOURCES_OLIVE0";
						value="\A3\Characters_F_Enoch\Facewear\data\AirPurifyingRespirator_02_olive_co.paa";
						picture="\A3\Characters_F_Enoch\Facewear\data\AirPurifyingRespirator_02_olive_co.paa";
					};
					class maskColor_black
					{
						name="$STR_a3_texturesources_black0";
						value="\A3\Characters_F_Enoch\Facewear\data\AirPurifyingRespirator_02_black_co.paa";
						picture="\A3\Characters_F_Enoch\Facewear\data\AirPurifyingRespirator_02_black_co.paa";
					};
				};
			};
			class filterColor: maskColor
			{
				displayName="$STR_Globe_CfgGlasses_AirPurifyingRespirator_022";
				property="filterColor";
				expression="_this setObjectTextureGlobal [1,_value];";
				defaultValue="'\A3\Characters_F_Enoch\Facewear\data\AirPurifyingRespirator_02_olive_co.paa'";
				class Values
				{
					class filter_empty
					{
						name="$STR_a3_cfgmarkers_empty0";
						value="";
						picture="";
					};
					class filterColor_sand
					{
						name="$STR_a3_texturesources_sand0";
						value="\A3\Characters_F_Enoch\Facewear\data\AirPurifyingRespirator_02_sand_co.paa";
						picture="\A3\Characters_F_Enoch\Facewear\data\AirPurifyingRespirator_02_sand_co.paa";
					};
					class filterColor_olive
					{
						name="$STR_A3_TEXTURESOURCES_OLIVE0";
						value="\A3\Characters_F_Enoch\Facewear\data\AirPurifyingRespirator_02_olive_co.paa";
						picture="\A3\Characters_F_Enoch\Facewear\data\AirPurifyingRespirator_02_olive_co.paa";
					};
					class filterColor_black
					{
						name="$STR_a3_texturesources_black0";
						value="\A3\Characters_F_Enoch\Facewear\data\AirPurifyingRespirator_02_black_co.paa";
						picture="\A3\Characters_F_Enoch\Facewear\data\AirPurifyingRespirator_02_black_co.paa";
					};
				};
			};
		};
	};
	class Land_Tarp_1x2m_tan_G: Tarp_01_base_F
	{
		author="O&T Expansion Eden";
		mapSize=0.1;
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Tarp_1x2m_tan_G.jpg";
		_generalMacro="Land_Tarp_1x2m_tan_G";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_Tarp_1x2m_tan_G0";
		model="\a3\props_f_globe\military\decontamination\tarp_1x2m_tan_g.p3d";
		icon="iconObject_1x2";
	};
	class Land_Tarp_2m_blue_G: Tarp_01_base_F
	{
		author="O&T Expansion Eden";
		mapSize=0.1;
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Tarp_2m_blue_G.jpg";
		_generalMacro="Land_Tarp_2m_blue_G";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_Tarp_2m_blue_G0";
		model="\a3\props_f_globe\military\decontamination\tarp_2m_blue_g.p3d";
		icon="iconObject_1x1";
	};
};
