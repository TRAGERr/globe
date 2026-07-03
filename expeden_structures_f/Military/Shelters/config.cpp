class CfgPatches
{
	class Structures_Globe_Military_Shelters
	{
		addonRootClass="A3_Structures_F_Globe";
		requiredAddons[]=
		{
			"A3_Structures_F_Globe_Military"
		};
		requiredVersion=0.1;
		units[]=
		{
			"CamoNet_INDP_digi",
			"CamoNet_INDP_digiDesert",
			"CamoNet_INDP_digiJungle",
			"CamoNet_INDP_wdl",
			"CamoNet_BLUFOR_desert",
			"CamoNet_BLUFOR_camo",
			"CamoNet_OPFOR_desert",
			"CamoNet_OPFOR_ghex",
			"CamoNet_INDP_FIA",
			"CamoNet_INDP_FIA_desert",
			"CamoNet_INDP_stripe1",
			"CamoNet_INDP_stripe2",
			"CamoNet_OPFOR_stripe1",
			"CamoNet_OPFOR_stripe2",
			"CamoNet_BLUFOR_v2",
			"CamoNet_BLUFOR_v3",
			"CamoNet_INDP_Open_digi",
			"CamoNet_INDP_open_digiDesert",
			"CamoNet_INDP_open_digiJungle",
			"CamoNet_INDP_open_wdl",
			"CamoNet_BLUFOR_open_desert",
			"CamoNet_BLUFOR_open_camo",
			"CamoNet_OPFOR_open_desert",
			"CamoNet_OPFOR_open_ghex",
			"CamoNet_INDP_open_FIA",
			"CamoNet_INDP_open_FIA_desert",
			"CamoNet_INDP_open_stripe1",
			"CamoNet_INDP_open_stripe2",
			"CamoNet_OPFOR_open_stripe1",
			"CamoNet_OPFOR_open_stripe2",
			"CamoNet_BLUFOR_open_v2",
			"CamoNet_BLUFOR_open_v3",
			"CamoNet_INDP_big_digi",
			"CamoNet_INDP_big_digiDesert",
			"CamoNet_INDP_big_digiJungle",
			"CamoNet_INDP_big_wdl",
			"CamoNet_BLUFOR_big_desert",
			"CamoNet_BLUFOR_big_camo",
			"CamoNet_OPFOR_big_desert",
			"CamoNet_OPFOR_big_ghex",
			"CamoNet_INDP_big_FIA",
			"CamoNet_INDP_big_FIA_desert",
			"CamoNet_INDP_big_stripe1",
			"CamoNet_INDP_big_stripe2",
			"CamoNet_OPFOR_big_stripe1",
			"CamoNet_OPFOR_big_stripe2",
			"CamoNet_BLUFOR_big_v2",
			"CamoNet_BLUFOR_big_v3"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class CamoNet_OPFOR_F;
	class CamoNet_BLUFOR_F;
	class CamoNet_INDP_F;
	class Shelter_base_F;
	class CamoNet_universal: Shelter_base_F
	{
		author="O&T Expansion Eden";
		mapSize=14.59;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=1.256;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\CamoNet_BLUFOR_F.jpg";
		_generalMacro="CamoNet_universal";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_CamoNet_universal0";
		model="\A3\Structures_F\Mil\Shelters\CamoNet_F.p3d";
		faction="Default";
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F\Mil\Shelters\Data\CamoNet_BLUFOR_CA.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Structures_F\Mil\Shelters\Data\CamoNet_BLUFOR.rvmat"
		};
		class Attributes
		{
			class CamoNetTypeList
			{
				displayName="$STR_3den_object_attribute_objecttexturecustom0_displayname";
				property="CamoNetTypeList";
				control="Combo";
				expression="if(!(_this getVariable ['Globe_CamoNetCstm',false]) && (!(_this getVariable ['Globe_CamoNetCstmRGBA',false])))then{		_this setObjectTextureGlobal [0,_value]		};";
				defaultValue="'\A3\Structures_F\Mil\Shelters\Data\CamoNet_BLUFOR_CA.paa'";
				typeName="STRING";
				tooltip="$STR_Globe_Priority_Low";
				class Values
				{
					class empty
					{
						name="$STR_disp_hide";
						value="#(argb,8,8,3)color(0,0,0,0,ca)";
						picture="";
						tooltip="$STR_Globe_CfgVehicles_CamoNet_universal_Attributes_CamoNetTypeList_Values_none_tooltip0";
					};
					class NATO
					{
						name="$STR_A3_Showcase_Showcase_Faction_BLUFOR_Mission_Name";
						value="\A3\Structures_F\Mil\Shelters\Data\CamoNet_BLUFOR_CA.paa";
						picture="\A3\Structures_F\Mil\Shelters\Data\CamoNet_BLUFOR_CA.paa";
					};
					class CSAT
					{
						name="CSAT";
						value="\A3\Structures_F\Mil\Shelters\Data\CamoNet_OPFOR_CA.paa";
						picture="\A3\Structures_F\Mil\Shelters\Data\CamoNet_OPFOR_CA.paa";
					};
					class AAF1
					{
						name="AAF 1";
						value="\A3\Structures_F\Mil\Shelters\Data\CamoNet_INDP_CA.paa";
						picture="\A3\Structures_F\Mil\Shelters\Data\CamoNet_INDP_CA.paa";
					};
					class AAF2
					{
						name="$STR_A3_TEXTURESOURCES_INDEP0";
						value="A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa";
						picture="A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa";
					};
					class AAF3
					{
						name="$STR_A3_texturesources_indepdesert0";
						value="A3\Armor_F\Data\camonet_AAF_Digi_Desert_CO.paa";
						picture="A3\Armor_F\Data\camonet_AAF_Digi_Desert_CO.paa";
					};
					class AAF4
					{
						name="$STR_A3_texturesources_indepjungle0";
						value="A3\Armor_F\Data\camonet_aaf_digi_jungle_co.paa";
						picture="A3\Armor_F\Data\camonet_aaf_digi_jungle_co.paa";
					};
					class EAF
					{
						name="$str_a3_c_cfgvehicles_offroad_01_civil_base_f_texturesources_eaf0";
						value="A3\Armor_F_Enoch\apc_tracked_03\Data\camonet_EAF_green_CO.paa";
						picture="A3\Armor_F_Enoch\apc_tracked_03\Data\camonet_EAF_green_CO.paa";
					};
					class NATO1
					{
						name="$STR_A3_TextureSources_Sand0";
						value="A3\Armor_F\Data\camonet_NATO_Desert_CO.paa";
						picture="A3\Armor_F\Data\camonet_NATO_Desert_CO.paa";
					};
					class NATO2
					{
						name="$STR_A3_TEXTURESOURCES_OLIVE0";
						value="A3\Armor_F\Data\camonet_NATO_Green_CO.paa";
						picture="A3\Armor_F\Data\camonet_NATO_Green_CO.paa";
					};
					class CSAT1
					{
						name="$STR_A3_TEXTURESOURCES_HEX0";
						value="A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa";
						picture="A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa";
					};
					class CSAT2
					{
						name="$STR_A3_TEXTURESOURCES_GREENHEX0";
						value="A3\Armor_F\Data\camonet_CSAT_HEX_Green_CO.paa";
						picture="A3\Armor_F\Data\camonet_CSAT_HEX_Green_CO.paa";
					};
					class FIA1
					{
						name="$STR_Globe_CfgVehicles_CamoNet_INDP_big_FIA0";
						value="A3\Armor_F\Data\camonet_AAF_FIA_green_CO.paa";
						picture="A3\Armor_F\Data\camonet_AAF_FIA_green_CO.paa";
					};
					class FIA2
					{
						name="$STR_Globe_CfgVehicles_CamoNet_INDP_big_FIA_desert0";
						value="A3\Armor_F\Data\camonet_AAF_FIA_desert_CO.paa";
						picture="A3\Armor_F\Data\camonet_AAF_FIA_desert_CO.paa";
					};
					class AAF5
					{
						name="$STR_Globe_CfgVehicles_CamoNet_INDP_big_stripe10";
						value="A3\Armor_F\Data\camonet_aaf_stripe_desert_co.paa";
						picture="A3\Armor_F\Data\camonet_aaf_stripe_desert_co.paa";
					};
					class AAF6
					{
						name="$STR_Globe_CfgVehicles_CamoNet_INDP_big_stripe20";
						value="A3\Armor_F\Data\camonet_aaf_stripe_green_co.paa";
						picture="A3\Armor_F\Data\camonet_aaf_stripe_green_co.paa";
					};
					class CSAT3
					{
						name="$STR_Globe_CfgVehicles_CamoNet_OPFOR_big_stripe10";
						value="A3\Armor_F\Data\camonet_csat_stripe_desert_co.paa";
						picture="A3\Armor_F\Data\camonet_csat_stripe_desert_co.paa";
					};
					class CSAT4
					{
						name="$STR_Globe_CfgVehicles_CamoNet_OPFOR_big_stripe20";
						value="A3\Armor_F\Data\camonet_csat_stripe_green_co.paa";
						picture="A3\Armor_F\Data\camonet_csat_stripe_green_co.paa";
					};
					class green
					{
						name="$STR_Globe_CfgVehicles_CamoNet_BLUFOR_big_v20";
						value="A3\Armor_F\Data\camonet_green_co.paa";
						picture="A3\Armor_F\Data\camonet_green_co.paa";
					};
					class greenbeige
					{
						name="$STR_Globe_CfgVehicles_CamoNet_BLUFOR_big_v30";
						value="A3\Armor_F\Data\camonet_greenbeige_co.paa";
						picture="A3\Armor_F\Data\camonet_greenbeige_co.paa";
					};
				};
			};
			class CamoNetTypeCustom
			{
				displayName="$STR_Globe_Texture0Custom";
				property="CamoNetTypeCustom";
				control="Edit";
				expression="if((_value != '')  && (!(_this getVariable ['Globe_CamoNetCstmRGBA',false]) ) )then{_this setObjectTextureGlobal [0,_value]; _this setVariable ['Globe_CamoNetCstm',true, isServer]}else{_this setVariable ['Globe_CamoNetCstm',false, isServer]};";
				defaultValue="''";
				tooltip="$STR_Globe_Priority_Medium";
			};
			class CamoNetTypeCustomRGBA
			{
				displayName="$STR_Globe_Texture0CustomRGBA";
				property="CamoNetTypeCustomRGBA";
				control="EditRGBA";
				expression="if (((_value findIf {_x > 0}) != -1)) then{ 		_this setObjectTexture [0,format ['#(argb,8,8,3)color(%1,%2,%3,%4,ca)', _value#0,_value#1,_value#2,_value#3]];  _this setVariable ['Globe_CamoNetCstmRGBA',true, isServer]			}else{		_this setVariable ['Globe_CamoNetCstmRGBA',false, isServer]			};";
				defaultValue="[0.0, 0.0, 0.0, 0.0]";
				typeName="ARRAY";
				tooltip="$STR_Globe_Priority_High";
			};
			class CamoNetTypeListMaterial
			{
				displayName="$STR_3den_object_attribute_objectmaterialcustom0_displayname";
				property="CamoNetTypeListMaterial";
				control="Combo";
				expression="if(!(_this getVariable ['Globe_CamoNetCstmMat',false]))then{		_this setObjectMaterialGlobal [0,_value]		};";
				defaultValue="'\a3\structures_f\mil\shelters\data\camonet_blufor.rvmat'";
				typeName="STRING";
				tooltip="$STR_Globe_Priority_Low";
				class Values
				{
					class NATO
					{
						name="$STR_A3_Showcase_Showcase_Faction_BLUFOR_Mission_Name";
						value="\a3\structures_f\mil\shelters\data\camonet_blufor.rvmat";
						picture="\a3\structures_f\mil\shelters\data\camonet_blufor_nohq.paa";
					};
					class CSAT
					{
						name="CSAT";
						value="\a3\structures_f\mil\shelters\data\camonet_opfor.rvmat";
						picture="\a3\structures_f\mil\shelters\data\camonet_opfor_nohq.paa";
					};
				};
			};
			class CamoNetTypeCustomMaterial
			{
				displayName="$STR_Globe_Material0Custom";
				property="CamoNetTypeCustomMaterial";
				control="Edit";
				expression="if((_value != ''))then{_this setObjectMaterialGlobal [0,_value]; _this setVariable ['Globe_CamoNetCstmMat',true, isServer]}else{_this setVariable ['Globe_CamoNetCstmMat',false, isServer]};";
				defaultValue="''";
				tooltip="$STR_Globe_Priority_High";
			};
		};
	};
	class CamoNet_universal_open: CamoNet_universal
	{
		author="O&T Expansion Eden";
		mapSize=21.58;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=1.168;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\CamoNet_BLUFOR_open_F.jpg";
		_generalMacro="CamoNet_universal_open";
		displayName="$STR_Globe_CfgVehicles_CamoNet_universal_open0";
		model="\A3\Structures_F\Mil\Shelters\CamoNet_open_F.p3d";
	};
	class CamoNet_universal_big: CamoNet_universal
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=2.0699999;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\CamoNet_OPFOR_big_F.jpg";
		_generalMacro="CamoNet_universal_big";
		displayName="$STR_Globe_CfgVehicles_CamoNet_universal_big0";
		model="\A3\Structures_F\Mil\Shelters\CamoNet_Big_F.p3d";
	};
	class CamoNet_INDP_digi: CamoNet_INDP_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\CamoNet_INDP_digi.jpg";
		_generalMacro="CamoNet_INDP_digi";
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_CamoNet_INDP_digi0";
		hiddenSelectionsTextures[]=
		{
			"\A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa"
		};
	};
	class CamoNet_INDP_digiDesert: CamoNet_INDP_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\CamoNet_INDP_digiDesert.jpg";
		_generalMacro="CamoNet_INDP_digiDesert";
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_CamoNet_INDP_digiDesert0";
		hiddenSelectionsTextures[]=
		{
			"A3\Armor_F\Data\camonet_AAF_Digi_Desert_CO.paa"
		};
	};
	class CamoNet_INDP_digiJungle: CamoNet_INDP_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\CamoNet_INDP_digiJungle.jpg";
		_generalMacro="CamoNet_INDP_digiJungle";
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_CamoNet_INDP_digiJungle0";
		hiddenSelectionsTextures[]=
		{
			"A3\Armor_F\Data\camonet_aaf_digi_jungle_co.paa"
		};
	};
	class CamoNet_INDP_wdl: CamoNet_INDP_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\CamoNet_INDP_wdl.jpg";
		_generalMacro="CamoNet_INDP_wdl";
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_CamoNet_INDP_wdl0";
		hiddenSelectionsTextures[]=
		{
			"A3\Armor_F_Enoch\apc_tracked_03\Data\camonet_EAF_green_CO.paa"
		};
	};
	class CamoNet_BLUFOR_desert: CamoNet_BLUFOR_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\CamoNet_BLUFOR_desert.jpg";
		_generalMacro="CamoNet_BLUFOR_desert";
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_CamoNet_BLUFOR_desert0";
		hiddenSelectionsTextures[]=
		{
			"a3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
		};
	};
	class CamoNet_BLUFOR_camo: CamoNet_BLUFOR_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\CamoNet_BLUFOR_camo.jpg";
		_generalMacro="CamoNet_BLUFOR_camo";
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_CamoNet_BLUFOR_camo0";
		hiddenSelectionsTextures[]=
		{
			"a3\Armor_F\Data\camonet_NATO_Green_CO.paa"
		};
	};
	class CamoNet_OPFOR_desert: CamoNet_OPFOR_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\CamoNet_OPFOR_desert.jpg";
		_generalMacro="CamoNet_OPFOR_desert";
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_CamoNet_OPFOR_desert0";
		hiddenSelectionsTextures[]=
		{
			"A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa"
		};
	};
	class CamoNet_OPFOR_ghex: CamoNet_OPFOR_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\CamoNet_OPFOR_ghex.jpg";
		_generalMacro="CamoNet_OPFOR_ghex";
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_CamoNet_OPFOR_ghex0";
		hiddenSelectionsTextures[]=
		{
			"A3\Armor_F\Data\camonet_CSAT_HEX_Green_CO.paa"
		};
	};
	class CamoNet_INDP_FIA: CamoNet_INDP_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\CamoNet_INDP_FIA.jpg";
		_generalMacro="CamoNet_INDP_FIA";
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_CamoNet_INDP_FIA0";
		hiddenSelectionsTextures[]=
		{
			"A3\Armor_F\Data\camonet_AAF_FIA_green_CO.paa"
		};
	};
	class CamoNet_INDP_FIA_desert: CamoNet_INDP_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\CamoNet_INDP_FIA_desert.jpg";
		_generalMacro="CamoNet_INDP_FIA_desert";
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_CamoNet_INDP_FIA_desert0";
		hiddenSelectionsTextures[]=
		{
			"A3\Armor_F\Data\camonet_AAF_FIA_desert_CO.paa"
		};
	};
	class CamoNet_INDP_stripe1: CamoNet_INDP_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\CamoNet_INDP_stripe1.jpg";
		_generalMacro="CamoNet_INDP_stripe1";
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_CamoNet_INDP_stripe10";
		hiddenSelectionsTextures[]=
		{
			"A3\Armor_F\Data\camonet_aaf_stripe_desert_co.paa"
		};
	};
	class CamoNet_INDP_stripe2: CamoNet_INDP_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\CamoNet_INDP_stripe2.jpg";
		_generalMacro="CamoNet_INDP_stripe2";
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_CamoNet_INDP_stripe20";
		hiddenSelectionsTextures[]=
		{
			"A3\Armor_F\Data\camonet_aaf_stripe_green_co.paa"
		};
	};
	class CamoNet_OPFOR_stripe1: CamoNet_OPFOR_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\CamoNet_OPFOR_stripe1.jpg";
		_generalMacro="CamoNet_OPFOR_stripe1";
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_CamoNet_OPFOR_stripe10";
		hiddenSelectionsTextures[]=
		{
			"A3\Armor_F\Data\camonet_csat_stripe_desert_co.paa"
		};
	};
	class CamoNet_OPFOR_stripe2: CamoNet_OPFOR_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\CamoNet_OPFOR_stripe2.jpg";
		_generalMacro="CamoNet_OPFOR_stripe2";
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_CamoNet_OPFOR_stripe20";
		hiddenSelectionsTextures[]=
		{
			"A3\Armor_F\Data\camonet_csat_stripe_green_co.paa"
		};
	};
	class CamoNet_BLUFOR_v2: Shelter_base_F
	{
		author="O&T Expansion Eden";
		mapSize=14.59;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=1.256;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\CamoNet_BLUFOR_v2.jpg";
		_generalMacro="CamoNet_BLUFOR_v2";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_CamoNet_BLUFOR_v20";
		model="\A3\Structures_F\Mil\Shelters\CamoNet_F.p3d";
		faction="BLU_F";
		hiddenSelectionsTextures[]=
		{
			"\a3\armor_f\data\camonet_green_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Structures_F\Mil\Shelters\Data\CamoNet_BLUFOR.rvmat"
		};
	};
	class CamoNet_BLUFOR_v3: Shelter_base_F
	{
		author="O&T Expansion Eden";
		mapSize=14.59;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=1.256;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\CamoNet_BLUFOR_v3.jpg";
		_generalMacro="CamoNet_BLUFOR_v3";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_CamoNet_BLUFOR_v30";
		model="\A3\Structures_F\Mil\Shelters\CamoNet_F.p3d";
		faction="BLU_F";
		hiddenSelectionsTextures[]=
		{
			"\a3\armor_f\data\camonet_greenbeige_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Structures_F\Mil\Shelters\Data\CamoNet_BLUFOR.rvmat"
		};
	};
	class CamoNet_INDP_Open_digi: CamoNet_INDP_F
	{
		author="O&T Expansion Eden";
		mapSize=21.58;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=1.168;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\CamoNet_INDP_Open_digi.jpg";
		_generalMacro="CamoNet_INDP_Open_digi";
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_CamoNet_INDP_Open_digi0";
		hiddenSelectionsTextures[]=
		{
			"\A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa"
		};
		model="\A3\Structures_F\Mil\Shelters\CamoNet_open_F.p3d";
	};
	class CamoNet_INDP_open_digiDesert: CamoNet_INDP_F
	{
		author="O&T Expansion Eden";
		mapSize=21.58;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=1.168;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\CamoNet_INDP_open_digiDesert.jpg";
		_generalMacro="CamoNet_INDP_open_digiDesert";
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_CamoNet_INDP_open_digiDesert0";
		hiddenSelectionsTextures[]=
		{
			"A3\Armor_F\Data\camonet_AAF_Digi_Desert_CO.paa"
		};
		model="\A3\Structures_F\Mil\Shelters\CamoNet_open_F.p3d";
	};
	class CamoNet_INDP_open_digiJungle: CamoNet_INDP_F
	{
		author="O&T Expansion Eden";
		mapSize=21.58;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=1.168;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\CamoNet_INDP_open_digiJungle.jpg";
		_generalMacro="CamoNet_INDP_open_digiJungle";
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_CamoNet_INDP_open_digiJungle0";
		hiddenSelectionsTextures[]=
		{
			"A3\Armor_F\Data\camonet_aaf_digi_jungle_co.paa"
		};
		model="\A3\Structures_F\Mil\Shelters\CamoNet_open_F.p3d";
	};
	class CamoNet_INDP_open_wdl: CamoNet_INDP_F
	{
		author="O&T Expansion Eden";
		mapSize=21.58;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=1.168;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\CamoNet_INDP_open_wdl.jpg";
		_generalMacro="CamoNet_INDP_open_wdl";
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_CamoNet_INDP_open_wdl0";
		hiddenSelectionsTextures[]=
		{
			"A3\Armor_F_Enoch\apc_tracked_03\Data\camonet_EAF_green_CO.paa"
		};
		model="\A3\Structures_F\Mil\Shelters\CamoNet_open_F.p3d";
	};
	class CamoNet_BLUFOR_open_desert: CamoNet_BLUFOR_F
	{
		author="O&T Expansion Eden";
		mapSize=21.58;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=1.168;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\CamoNet_BLUFOR_open_desert.jpg";
		_generalMacro="CamoNet_BLUFOR_open_desert";
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_CamoNet_BLUFOR_open_desert0";
		hiddenSelectionsTextures[]=
		{
			"a3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
		};
		model="\A3\Structures_F\Mil\Shelters\CamoNet_open_F.p3d";
	};
	class CamoNet_BLUFOR_open_camo: CamoNet_BLUFOR_F
	{
		author="O&T Expansion Eden";
		mapSize=21.58;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=1.168;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\CamoNet_BLUFOR_open_camo.jpg";
		_generalMacro="CamoNet_BLUFOR_open_camo";
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_CamoNet_BLUFOR_open_camo0";
		hiddenSelectionsTextures[]=
		{
			"a3\Armor_F\Data\camonet_NATO_Green_CO.paa"
		};
		model="\A3\Structures_F\Mil\Shelters\CamoNet_open_F.p3d";
	};
	class CamoNet_OPFOR_open_desert: CamoNet_OPFOR_F
	{
		author="O&T Expansion Eden";
		mapSize=21.58;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=1.168;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\CamoNet_OPFOR_open_desert.jpg";
		_generalMacro="CamoNet_OPFOR_open_desert";
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_CamoNet_OPFOR_open_desert0";
		hiddenSelectionsTextures[]=
		{
			"A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa"
		};
		model="\A3\Structures_F\Mil\Shelters\CamoNet_open_F.p3d";
	};
	class CamoNet_OPFOR_open_ghex: CamoNet_OPFOR_F
	{
		author="O&T Expansion Eden";
		mapSize=21.58;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=1.168;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\CamoNet_OPFOR_open_ghex.jpg";
		_generalMacro="CamoNet_OPFOR_open_ghex";
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_CamoNet_OPFOR_open_ghex0";
		hiddenSelectionsTextures[]=
		{
			"A3\Armor_F\Data\camonet_CSAT_HEX_Green_CO.paa"
		};
		model="\A3\Structures_F\Mil\Shelters\CamoNet_open_F.p3d";
	};
	class CamoNet_INDP_open_FIA: CamoNet_INDP_F
	{
		author="O&T Expansion Eden";
		mapSize=21.58;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=1.168;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\CamoNet_INDP_open_FIA.jpg";
		_generalMacro="CamoNet_INDP_open_FIA";
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_CamoNet_INDP_open_FIA0";
		hiddenSelectionsTextures[]=
		{
			"A3\Armor_F\Data\camonet_AAF_FIA_green_CO.paa"
		};
		model="\A3\Structures_F\Mil\Shelters\CamoNet_open_F.p3d";
	};
	class CamoNet_INDP_open_FIA_desert: CamoNet_INDP_F
	{
		author="O&T Expansion Eden";
		mapSize=21.58;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=1.168;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\CamoNet_INDP_open_FIA_desert.jpg";
		_generalMacro="CamoNet_INDP_open_FIA_desert";
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_CamoNet_INDP_open_FIA_desert0";
		hiddenSelectionsTextures[]=
		{
			"A3\Armor_F\Data\camonet_AAF_FIA_desert_CO.paa"
		};
		model="\A3\Structures_F\Mil\Shelters\CamoNet_open_F.p3d";
	};
	class CamoNet_INDP_open_stripe1: CamoNet_INDP_F
	{
		author="O&T Expansion Eden";
		mapSize=21.58;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=1.168;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\CamoNet_INDP_open_stripe1.jpg";
		_generalMacro="CamoNet_INDP_open_stripe1";
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_CamoNet_INDP_open_stripe10";
		hiddenSelectionsTextures[]=
		{
			"A3\Armor_F\Data\camonet_aaf_stripe_desert_co.paa"
		};
		model="\A3\Structures_F\Mil\Shelters\CamoNet_open_F.p3d";
	};
	class CamoNet_INDP_open_stripe2: CamoNet_INDP_F
	{
		author="O&T Expansion Eden";
		mapSize=21.58;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=1.168;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\CamoNet_INDP_open_stripe2.jpg";
		_generalMacro="CamoNet_INDP_open_stripe2";
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_CamoNet_INDP_open_stripe20";
		hiddenSelectionsTextures[]=
		{
			"A3\Armor_F\Data\camonet_aaf_stripe_green_co.paa"
		};
		model="\A3\Structures_F\Mil\Shelters\CamoNet_open_F.p3d";
	};
	class CamoNet_OPFOR_open_stripe1: CamoNet_OPFOR_F
	{
		author="O&T Expansion Eden";
		mapSize=21.58;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=1.168;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\CamoNet_OPFOR_open_stripe1.jpg";
		_generalMacro="CamoNet_OPFOR_open_stripe1";
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_CamoNet_OPFOR_stripe10";
		hiddenSelectionsTextures[]=
		{
			"A3\Armor_F\Data\camonet_csat_stripe_desert_co.paa"
		};
		model="\A3\Structures_F\Mil\Shelters\CamoNet_open_F.p3d";
	};
	class CamoNet_OPFOR_open_stripe2: CamoNet_OPFOR_F
	{
		author="O&T Expansion Eden";
		mapSize=21.58;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=1.168;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\CamoNet_OPFOR_open_stripe2.jpg";
		_generalMacro="CamoNet_OPFOR_open_stripe2";
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_CamoNet_OPFOR_open_stripe20";
		hiddenSelectionsTextures[]=
		{
			"A3\Armor_F\Data\camonet_csat_stripe_green_co.paa"
		};
		model="\A3\Structures_F\Mil\Shelters\CamoNet_open_F.p3d";
	};
	class CamoNet_BLUFOR_open_v2: Shelter_base_F
	{
		author="O&T Expansion Eden";
		mapSize=21.58;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=1.168;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\CamoNet_BLUFOR_open_v2.jpg";
		_generalMacro="CamoNet_BLUFOR_open_v2";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_CamoNet_BLUFOR_open_v20";
		model="\A3\Structures_F\Mil\Shelters\CamoNet_open_F.p3d";
		faction="BLU_F";
		hiddenSelectionsTextures[]=
		{
			"\a3\armor_f\data\camonet_green_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Structures_F\Mil\Shelters\Data\CamoNet_BLUFOR.rvmat"
		};
	};
	class CamoNet_BLUFOR_open_v3: Shelter_base_F
	{
		author="O&T Expansion Eden";
		mapSize=21.58;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=1.168;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\CamoNet_BLUFOR_open_v3.jpg";
		_generalMacro="CamoNet_BLUFOR_open_v3";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_CamoNet_BLUFOR_open_v30";
		model="\A3\Structures_F\Mil\Shelters\CamoNet_open_F.p3d";
		faction="BLU_F";
		hiddenSelectionsTextures[]=
		{
			"\a3\armor_f\data\camonet_greenbeige_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Structures_F\Mil\Shelters\Data\CamoNet_BLUFOR.rvmat"
		};
	};
	class CamoNet_INDP_big_digi: CamoNet_INDP_F
	{
		author="O&T Expansion Eden";
		mapSize=21.58;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=1.168;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\CamoNet_INDP_big_digi.jpg";
		_generalMacro="CamoNet_INDP_big_digi";
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_CamoNet_INDP_big_digi0";
		hiddenSelectionsTextures[]=
		{
			"\A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa"
		};
		model="\A3\Structures_F\Mil\Shelters\CamoNet_big_F.p3d";
		icon="\A3\Structures_F\Mil\Shelters\Data\UI\map_CamoNet_Big_CA.paa";
	};
	class CamoNet_INDP_big_digiDesert: CamoNet_INDP_F
	{
		author="O&T Expansion Eden";
		mapSize=21.58;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=1.168;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\CamoNet_INDP_big_digiDesert.jpg";
		_generalMacro="CamoNet_INDP_big_digiDesert";
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_CamoNet_INDP_big_digiDesert0";
		hiddenSelectionsTextures[]=
		{
			"A3\Armor_F\Data\camonet_AAF_Digi_Desert_CO.paa"
		};
		model="\A3\Structures_F\Mil\Shelters\CamoNet_big_F.p3d";
		icon="\A3\Structures_F\Mil\Shelters\Data\UI\map_CamoNet_Big_CA.paa";
	};
	class CamoNet_INDP_big_digiJungle: CamoNet_INDP_F
	{
		author="O&T Expansion Eden";
		mapSize=21.58;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=1.168;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\CamoNet_INDP_big_digiJungle.jpg";
		_generalMacro="CamoNet_INDP_big_digiJungle";
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_CamoNet_INDP_big_digiJungle0";
		hiddenSelectionsTextures[]=
		{
			"A3\Armor_F\Data\camonet_aaf_digi_jungle_co.paa"
		};
		model="\A3\Structures_F\Mil\Shelters\CamoNet_big_F.p3d";
		icon="\A3\Structures_F\Mil\Shelters\Data\UI\map_CamoNet_Big_CA.paa";
	};
	class CamoNet_INDP_big_wdl: CamoNet_INDP_F
	{
		author="O&T Expansion Eden";
		mapSize=21.58;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=1.168;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\CamoNet_INDP_big_wdl.jpg";
		_generalMacro="CamoNet_INDP_big_wdl";
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_CamoNet_INDP_big_wdl0";
		hiddenSelectionsTextures[]=
		{
			"A3\Armor_F_Enoch\apc_tracked_03\Data\camonet_EAF_green_CO.paa"
		};
		model="\A3\Structures_F\Mil\Shelters\CamoNet_big_F.p3d";
		icon="\A3\Structures_F\Mil\Shelters\Data\UI\map_CamoNet_Big_CA.paa";
	};
	class CamoNet_BLUFOR_big_desert: CamoNet_BLUFOR_F
	{
		author="O&T Expansion Eden";
		mapSize=21.58;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=1.168;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\CamoNet_BLUFOR_big_desert.jpg";
		_generalMacro="CamoNet_BLUFOR_big_desert";
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_CamoNet_BLUFOR_big_desert0";
		hiddenSelectionsTextures[]=
		{
			"a3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
		};
		model="\A3\Structures_F\Mil\Shelters\CamoNet_big_F.p3d";
		icon="\A3\Structures_F\Mil\Shelters\Data\UI\map_CamoNet_Big_CA.paa";
	};
	class CamoNet_BLUFOR_big_camo: CamoNet_BLUFOR_F
	{
		author="O&T Expansion Eden";
		mapSize=21.58;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=1.168;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\CamoNet_BLUFOR_big_camo.jpg";
		_generalMacro="CamoNet_BLUFOR_big_camo";
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_CamoNet_BLUFOR_big_camo0";
		hiddenSelectionsTextures[]=
		{
			"a3\Armor_F\Data\camonet_NATO_Green_CO.paa"
		};
		model="\A3\Structures_F\Mil\Shelters\CamoNet_big_F.p3d";
		icon="\A3\Structures_F\Mil\Shelters\Data\UI\map_CamoNet_Big_CA.paa";
	};
	class CamoNet_OPFOR_big_desert: CamoNet_OPFOR_F
	{
		author="O&T Expansion Eden";
		mapSize=21.58;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=1.168;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\CamoNet_OPFOR_big_desert.jpg";
		_generalMacro="CamoNet_OPFOR_big_desert";
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_CamoNet_OPFOR_big_desert0";
		hiddenSelectionsTextures[]=
		{
			"A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa"
		};
		model="\A3\Structures_F\Mil\Shelters\CamoNet_big_F.p3d";
		icon="\A3\Structures_F\Mil\Shelters\Data\UI\map_CamoNet_Big_CA.paa";
	};
	class CamoNet_OPFOR_big_ghex: CamoNet_OPFOR_F
	{
		author="O&T Expansion Eden";
		mapSize=21.58;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=1.168;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\CamoNet_OPFOR_big_ghex.jpg";
		_generalMacro="CamoNet_OPFOR_big_ghex";
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_CamoNet_OPFOR_big_ghex0";
		hiddenSelectionsTextures[]=
		{
			"A3\Armor_F\Data\camonet_CSAT_HEX_Green_CO.paa"
		};
		model="\A3\Structures_F\Mil\Shelters\CamoNet_big_F.p3d";
		icon="\A3\Structures_F\Mil\Shelters\Data\UI\map_CamoNet_Big_CA.paa";
	};
	class CamoNet_INDP_big_FIA: CamoNet_INDP_F
	{
		author="O&T Expansion Eden";
		mapSize=21.58;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=1.168;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\CamoNet_INDP_big_FIA.jpg";
		_generalMacro="CamoNet_INDP_big_FIA";
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_CamoNet_INDP_big_FIA0";
		hiddenSelectionsTextures[]=
		{
			"A3\Armor_F\Data\camonet_AAF_FIA_green_CO.paa"
		};
		model="\A3\Structures_F\Mil\Shelters\CamoNet_big_F.p3d";
		icon="\A3\Structures_F\Mil\Shelters\Data\UI\map_CamoNet_Big_CA.paa";
	};
	class CamoNet_INDP_big_FIA_desert: CamoNet_INDP_F
	{
		author="O&T Expansion Eden";
		mapSize=21.58;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=1.168;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\CamoNet_INDP_big_FIA_desert.jpg";
		_generalMacro="CamoNet_INDP_big_FIA_desert";
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_CamoNet_INDP_big_FIA_desert0";
		hiddenSelectionsTextures[]=
		{
			"A3\Armor_F\Data\camonet_AAF_FIA_desert_CO.paa"
		};
		model="\A3\Structures_F\Mil\Shelters\CamoNet_big_F.p3d";
		icon="\A3\Structures_F\Mil\Shelters\Data\UI\map_CamoNet_Big_CA.paa";
	};
	class CamoNet_INDP_big_stripe1: CamoNet_INDP_F
	{
		author="O&T Expansion Eden";
		mapSize=21.58;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=1.168;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\CamoNet_INDP_big_stripe1.jpg";
		_generalMacro="CamoNet_INDP_big_stripe1";
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_CamoNet_INDP_big_stripe10";
		hiddenSelectionsTextures[]=
		{
			"A3\Armor_F\Data\camonet_aaf_stripe_desert_co.paa"
		};
		model="\A3\Structures_F\Mil\Shelters\CamoNet_big_F.p3d";
		icon="\A3\Structures_F\Mil\Shelters\Data\UI\map_CamoNet_Big_CA.paa";
	};
	class CamoNet_INDP_big_stripe2: CamoNet_INDP_F
	{
		author="O&T Expansion Eden";
		mapSize=21.58;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=1.168;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\CamoNet_INDP_big_stripe2.jpg";
		_generalMacro="CamoNet_INDP_big_stripe2";
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_CamoNet_INDP_big_stripe20";
		hiddenSelectionsTextures[]=
		{
			"A3\Armor_F\Data\camonet_aaf_stripe_green_co.paa"
		};
		model="\A3\Structures_F\Mil\Shelters\CamoNet_big_F.p3d";
		icon="\A3\Structures_F\Mil\Shelters\Data\UI\map_CamoNet_Big_CA.paa";
	};
	class CamoNet_OPFOR_big_stripe1: CamoNet_OPFOR_F
	{
		author="O&T Expansion Eden";
		mapSize=21.58;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=1.168;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\CamoNet_OPFOR_big_stripe1.jpg";
		_generalMacro="CamoNet_OPFOR_big_stripe1";
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_CamoNet_OPFOR_big_stripe10";
		hiddenSelectionsTextures[]=
		{
			"A3\Armor_F\Data\camonet_csat_stripe_desert_co.paa"
		};
		model="\A3\Structures_F\Mil\Shelters\CamoNet_big_F.p3d";
		icon="\A3\Structures_F\Mil\Shelters\Data\UI\map_CamoNet_Big_CA.paa";
	};
	class CamoNet_OPFOR_big_stripe2: CamoNet_OPFOR_F
	{
		author="O&T Expansion Eden";
		mapSize=21.58;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=1.168;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\CamoNet_OPFOR_big_stripe2.jpg";
		_generalMacro="CamoNet_OPFOR_big_stripe2";
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_CamoNet_OPFOR_big_stripe20";
		hiddenSelectionsTextures[]=
		{
			"A3\Armor_F\Data\camonet_csat_stripe_green_co.paa"
		};
		model="\A3\Structures_F\Mil\Shelters\CamoNet_big_F.p3d";
		icon="\A3\Structures_F\Mil\Shelters\Data\UI\map_CamoNet_Big_CA.paa";
	};
	class CamoNet_BLUFOR_big_v2: Shelter_base_F
	{
		author="O&T Expansion Eden";
		mapSize=14.59;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=1.256;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\CamoNet_BLUFOR_big_v2.jpg";
		_generalMacro="CamoNet_BLUFOR_big_v2";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_CamoNet_BLUFOR_big_v20";
		model="\A3\Structures_F\Mil\Shelters\CamoNet_big_F.p3d";
		faction="BLU_F";
		hiddenSelectionsTextures[]=
		{
			"\a3\armor_f\data\camonet_green_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Structures_F\Mil\Shelters\Data\CamoNet_BLUFOR.rvmat"
		};
		icon="\A3\Structures_F\Mil\Shelters\Data\UI\map_CamoNet_Big_CA.paa";
	};
	class CamoNet_BLUFOR_big_v3: Shelter_base_F
	{
		author="O&T Expansion Eden";
		mapSize=14.59;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=1.256;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\CamoNet_BLUFOR_big_v3.jpg";
		_generalMacro="CamoNet_BLUFOR_big_v3";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_CamoNet_BLUFOR_big_v30";
		model="\A3\Structures_F\Mil\Shelters\CamoNet_big_F.p3d";
		faction="BLU_F";
		hiddenSelectionsTextures[]=
		{
			"\a3\armor_f\data\camonet_greenbeige_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Structures_F\Mil\Shelters\Data\CamoNet_BLUFOR.rvmat"
		};
		icon="\A3\Structures_F\Mil\Shelters\Data\UI\map_CamoNet_Big_CA.paa";
	};
};
