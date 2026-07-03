class CfgPatches
{
	class A3_Props_F_Globe_Items_Decorative
	{
		addonRootClass="A3_Props_F_Globe";
		requiredAddons[]=
		{
			"A3_Props_F_Globe_Items"
		};
		requiredVersion=0.1;
		units[]=
		{
			"UnitInsigniaPatch_01_G",
			"UnitInsigniaPatch_01_G_111thID",
			"UnitInsigniaPatch_01_G_AAF1stRegiment",
			"UnitInsigniaPatch_01_G_AAF3rdRegiment",
			"UnitInsigniaPatch_01_G_Astra",
			"UnitInsigniaPatch_01_G_BI",
			"UnitInsigniaPatch_01_G_CombatPatrol",
			"UnitInsigniaPatch_01_G_CSATScimitarRegiment",
			"UnitInsigniaPatch_01_G_CTRG",
			"UnitInsigniaPatch_01_G_CTRG13",
			"UnitInsigniaPatch_01_G_CTRG14",
			"UnitInsigniaPatch_01_G_CTRG15",
			"UnitInsigniaPatch_01_G_Curator",
			"UnitInsigniaPatch_01_G_EAF5thRegiment",
			"UnitInsigniaPatch_01_G_EnochJointTraining",
			"UnitInsigniaPatch_01_G_GryffinRegiment",
			"UnitInsigniaPatch_01_G_IDAP",
			"UnitInsigniaPatch_01_G_JetsB01",
			"UnitInsigniaPatch_01_G_MANW",
			"UnitInsigniaPatch_01_G_Spetsnaz223rdDetachment",
			"UnitInsigniaPatch_01_G_TFAegis",
			"FlowerBouquet_random",
			"Land_Photoframe_02_Eddie_F",
			"Land_Photoframe_02_standing_Eddie_F",
			"Land_Photoframe_01_broken_random_F",
			"Land_Photoframe_01_random_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Items_base_F;
	class FlowerBouquet_base_F;
	class Land_Photoframe_02_F;
	class Land_Photoframe_02_standing_F;
	class Land_Photoframe_01_broken_F;
	class Land_Photoframe_01_F;
	class Land_Photoframe_01_random_F: Land_Photoframe_01_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_f_expEden\Data\CfgVehicles\Land_Photoframe_01_random_F.jpg";
		_generalMacro="Land_Photoframe_01_random_F";
		displayName="$STR_expEden_Photoframe";
		hiddenSelectionsTextures[]=
		{
			"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\Shared\Photoframe_random_01_CO.paa",
			"a3\props_f_orange\items\decorative\data\photoframe_01_f_co.paa"
		};
		class EventHandlers
		{
			init="(_this # 0) call compile preprocessFileLineNumbers '\A3\Props_F_Globe\Items\Decorative\scripts\randomize.sqf'";
		};
	};
	class Land_Photoframe_01_broken_random_F: Land_Photoframe_01_broken_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_f_expEden\Data\CfgVehicles\Land_Photoframe_01_broken_random_F.jpg";
		_generalMacro="Land_Photoframe_01_broken_random_F";
		displayName="$STR_expEden_Photoframe_Broken";
		hiddenSelectionsTextures[]=
		{
			"\a3\missions_f_oldman\Data\img\Paintings\oldman_painting_v4_co.paa",
			"a3\props_f_orange\items\decorative\data\photoframe_01_f_co.paa"
		};
		class EventHandlers
		{
			init="(_this # 0) call compile preprocessFileLineNumbers '\A3\Props_F_Globe\Items\Decorative\scripts\randomize.sqf'";
		};
	};
	class Land_Photoframe_02_Eddie_F: Land_Photoframe_02_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Photoframe_02_Eddie_F.jpg";
		_generalMacro="Land_Photoframe_02_Eddie_F";
		displayName="$STR_A3_Globe_CfgVehicles_Land_Photoframe_02_Eddie_F0";
		hiddenSelectionsTextures[]=
		{
			"a3\missions_f_aow\data\img\showcase_aow_eddie_co.paa",
			"a3\props_f_aow\items\decorative\data\photoframe_02_f_co.paa"
		};
	};
	class Land_Photoframe_02_standing_Eddie_F: Land_Photoframe_02_standing_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Photoframe_02_standing_Eddie_F.jpg";
		_generalMacro="Land_Photoframe_02_standing_Eddie_F";
		displayName="$STR_A3_Globe_CfgVehicles_Land_Photoframe_02_standing_Eddie_F0";
		hiddenSelectionsTextures[]=
		{
			"a3\missions_f_aow\data\img\showcase_aow_eddie_co.paa",
			"a3\props_f_aow\items\decorative\data\photoframe_02_f_co.paa"
		};
	};
	class FlowerBouquet_random: FlowerBouquet_base_F
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.121;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_AoW\Data\CfgVehicles\FlowerBouquet_03_F.jpg";
		_generalMacro="FlowerBouquet_random";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_FlowerBouquet_random0";
		hiddenSelectionsTextures[]=
		{
			"a3\Props_F_AoW\Items\Decorative\Data\FlowerBouquet_01_F_Orange_CO.paa"
		};
		class EventHandlers
		{
			init="(_this # 0) call compile preprocessFileLineNumbers '\A3\Props_F_Globe\Items\Decorative\scripts\randomizeFlowerBouquet.sqf'";
		};
	};
	class UnitInsigniaPatch_01_base_G: Items_base_F
	{
		displayName="$STR_Globe_CfgVehicles_UnitInsigniaPatch_01_G0";
		editorPreview="a3\ui_f_globe\data\cfgunitinsignia\globe_ca.paa";
		model="\a3\props_f_globe\Items\Decorative\unitinsigniapatch_01_g.p3d";
		icon="iconObject_1x1";
		editorSubcategory="EdSubcat_Military";
		class Attributes
		{
			class ObjectTextureCustom0
			{
				displayName="$STR_3den_object_attribute_objecttexturecustom0_displayname";
				tooltip="$STR_3den_object_attribute_objecttexturecustom_tooltip";
				property="ObjectTextureCustom0";
				control="Edit";
				expression="_this setObjectTextureGlobal [0,_value]";
				defaultValue="(getObjectTextures _this) param [0,'',['']]";
			};
			class ObjectMaterialCustom0
			{
				displayName="$STR_3den_object_attribute_objectmaterialcustom0_displayname";
				tooltip="$STR_3den_object_attribute_objectmaterialcustom_tooltip";
				property="ObjectMaterialCustom0";
				control="Edit";
				expression="_this setObjectMaterialGlobal [0,_value]";
				defaultValue="(getObjectMaterials _this) param [0,'',['']]";
			};
		};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"a3\ui_f_globe\data\cfgunitinsignia\globe_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"a3\ui_f\data\gui\cfg\unitinsignia\default_insignia.rvmat"
		};
	};
	class UnitInsigniaPatch_01_G: UnitInsigniaPatch_01_base_G
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.039999999;
			verticalOffsetWorld=0;
			init="''";
		};
		_generalMacro="UnitInsigniaPatch_01_G";
		scope=1;
		scopeCurator=0;
	};
	class UnitInsigniaPatch_01_G_111thID: UnitInsigniaPatch_01_G
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\Ui_f\data\GUI\Cfg\UnitInsignia\111thID_ca.paa";
		_generalMacro="UnitInsigniaPatch_01_G_111thID";
		displayName="$STR_Globe_CfgVehicles_UnitInsigniaPatch_01_G_111thID0";
		model="\a3\props_f_globe\Items\Decorative\unitinsigniapatch_01_g_111thid.p3d";
		hiddenSelectionsTextures[]=
		{
			"\A3\Ui_f\data\GUI\Cfg\UnitInsignia\111thID_ca.paa"
		};
		scope=2;
		scopeCurator=2;
	};
	class UnitInsigniaPatch_01_G_AAF1stRegiment: UnitInsigniaPatch_01_G_111thID
	{
		author="O&T Expansion Eden";
		editorPreview="\a3\UI_F_Tank\Data\CfgUnitInsignia\aaf_1stRegiment_ca.paa";
		_generalMacro="UnitInsigniaPatch_01_G_AAF1stRegiment";
		displayName="$STR_Globe_CfgVehicles_UnitInsigniaPatch_01_G_AAF1stRegiment0";
		model="\a3\props_f_globe\Items\Decorative\unitinsigniapatch_01_g_aaf1stregiment.p3d";
		hiddenSelectionsTextures[]=
		{
			"\a3\UI_F_Tank\Data\CfgUnitInsignia\aaf_1stRegiment_ca.paa"
		};
	};
	class UnitInsigniaPatch_01_G_AAF3rdRegiment: UnitInsigniaPatch_01_G_111thID
	{
		author="O&T Expansion Eden";
		editorPreview="\a3\ui_f_orange\data\cfgunitinsignia\aaf_3rdregiment_ca.paa";
		_generalMacro="UnitInsigniaPatch_01_G_AAF3rdRegiment";
		displayName="$STR_Globe_CfgVehicles_UnitInsigniaPatch_01_G_AAF3rdRegiment0";
		model="\a3\props_f_globe\Items\Decorative\unitinsigniapatch_01_g_aaf3rdregiment.p3d";
		hiddenSelectionsTextures[]=
		{
			"\a3\ui_f_orange\data\cfgunitinsignia\aaf_3rdregiment_ca.paa"
		};
	};
	class UnitInsigniaPatch_01_G_Astra: UnitInsigniaPatch_01_G_111thID
	{
		author="O&T Expansion Eden";
		editorPreview="\a3\UI_F_enoch\Data\CfgUnitInsignia\Astra_ca.paa";
		_generalMacro="UnitInsigniaPatch_01_G_Astra";
		displayName="$STR_Globe_CfgVehicles_UnitInsigniaPatch_01_G_Astra0";
		model="\a3\props_f_globe\Items\Decorative\unitinsigniapatch_01_g_astra.p3d";
		hiddenSelectionsTextures[]=
		{
			"\a3\UI_F_enoch\Data\CfgUnitInsignia\Astra_ca.paa"
		};
	};
	class UnitInsigniaPatch_01_G_BI: UnitInsigniaPatch_01_G_111thID
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\Ui_f\data\GUI\Cfg\UnitInsignia\bi_ca.paa";
		_generalMacro="UnitInsigniaPatch_01_G_BI";
		displayName="$STR_Globe_CfgVehicles_UnitInsigniaPatch_01_G_BI0";
		model="\a3\props_f_globe\Items\Decorative\unitinsigniapatch_01_g_bi.p3d";
		hiddenSelectionsTextures[]=
		{
			"\A3\Ui_f\data\GUI\Cfg\UnitInsignia\bi_ca.paa"
		};
	};
	class UnitInsigniaPatch_01_G_CombatPatrol: UnitInsigniaPatch_01_G_111thID
	{
		author="O&T Expansion Eden";
		editorPreview="\a3\missions_f_patrol\data\img\CombatPatrol.paa";
		_generalMacro="UnitInsigniaPatch_01_G_CombatPatrol";
		displayName="$STR_Globe_CfgVehicles_UnitInsigniaPatch_01_G_CombatPatrol0";
		model="\a3\props_f_globe\Items\Decorative\unitinsigniapatch_01_g_combatpatrol.p3d";
		hiddenSelectionsTextures[]=
		{
			"\a3\missions_f_patrol\data\img\CombatPatrol.paa"
		};
	};
	class UnitInsigniaPatch_01_G_CSATScimitarRegiment: UnitInsigniaPatch_01_G_111thID
	{
		author="O&T Expansion Eden";
		editorPreview="\a3\UI_F_TacOps\Data\CfgUnitInsignia\csat_scimitarRegiment_ca.paa";
		_generalMacro="UnitInsigniaPatch_01_G_CSATScimitarRegiment";
		displayName="$STR_Globe_CfgVehicles_UnitInsigniaPatch_01_G_CSATScimitarRegiment0";
		model="\a3\props_f_globe\Items\Decorative\unitinsigniapatch_01_g_csatscimitarregiment.p3d";
		hiddenSelectionsTextures[]=
		{
			"\a3\UI_F_TacOps\Data\CfgUnitInsignia\csat_scimitarRegiment_ca.paa"
		};
	};
	class UnitInsigniaPatch_01_G_CTRG: UnitInsigniaPatch_01_G_111thID
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\Ui_f\Data\GUI\Cfg\UnitInsignia\CTRG.paa";
		_generalMacro="UnitInsigniaPatch_01_G_CTRG";
		displayName="$STR_Globe_CfgVehicles_UnitInsigniaPatch_01_G_CTRG0";
		model="\a3\props_f_globe\Items\Decorative\unitinsigniapatch_01_g_ctrg.p3d";
		hiddenSelectionsTextures[]=
		{
			"\A3\Ui_f\Data\GUI\Cfg\UnitInsignia\CTRG.paa"
		};
	};
	class UnitInsigniaPatch_01_G_CTRG13: UnitInsigniaPatch_01_G_111thID
	{
		author="O&T Expansion Eden";
		editorPreview="\a3\ui_f\data\gui\cfg\unitinsignia\ctrg13_nato.paa";
		_generalMacro="UnitInsigniaPatch_01_G_CTRG13";
		displayName="$STR_Globe_CfgVehicles_UnitInsigniaPatch_01_G_CTRG130";
		model="\a3\props_f_globe\Items\Decorative\unitinsigniapatch_01_g_ctrg13.p3d";
		hiddenSelectionsTextures[]=
		{
			"\a3\ui_f\data\gui\cfg\unitinsignia\ctrg13_nato.paa"
		};
	};
	class UnitInsigniaPatch_01_G_CTRG14: UnitInsigniaPatch_01_G_111thID
	{
		author="O&T Expansion Eden";
		editorPreview="\a3\ui_f\data\gui\cfg\unitinsignia\ctrg14_nato.paa";
		_generalMacro="UnitInsigniaPatch_01_G_CTRG14";
		displayName="$STR_Globe_CfgVehicles_UnitInsigniaPatch_01_G_CTRG140";
		model="\a3\props_f_globe\Items\Decorative\unitinsigniapatch_01_g_ctrg14.p3d";
		hiddenSelectionsTextures[]=
		{
			"\a3\ui_f\data\gui\cfg\unitinsignia\ctrg14_nato.paa"
		};
	};
	class UnitInsigniaPatch_01_G_CTRG15: UnitInsigniaPatch_01_G_111thID
	{
		author="O&T Expansion Eden";
		editorPreview="\a3\ui_f\data\gui\cfg\unitinsignia\ctrg15_nato.paa";
		_generalMacro="UnitInsigniaPatch_01_G_CTRG15";
		displayName="$STR_Globe_CfgVehicles_UnitInsigniaPatch_01_G_CTRG150";
		model="\a3\props_f_globe\Items\Decorative\unitinsigniapatch_01_g_ctrg15.p3d";
		hiddenSelectionsTextures[]=
		{
			"\a3\ui_f\data\gui\cfg\unitinsignia\ctrg15_nato.paa"
		};
	};
	class UnitInsigniaPatch_01_G_Curator: UnitInsigniaPatch_01_G_111thID
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\Ui_f\data\GUI\Cfg\UnitInsignia\curator_ca.paa";
		_generalMacro="UnitInsigniaPatch_01_G_Curator";
		displayName="$STR_Globe_CfgVehicles_UnitInsigniaPatch_01_G_Curator0";
		model="\a3\props_f_globe\Items\Decorative\unitinsigniapatch_01_g_curator.p3d";
		hiddenSelectionsTextures[]=
		{
			"\A3\Ui_f\data\GUI\Cfg\UnitInsignia\curator_ca.paa"
		};
	};
	class UnitInsigniaPatch_01_G_EAF5thRegiment: UnitInsigniaPatch_01_G_111thID
	{
		author="O&T Expansion Eden";
		editorPreview="\a3\UI_F_enoch\Data\CfgUnitInsignia\eaf_5thRegiment_ca.paa";
		_generalMacro="UnitInsigniaPatch_01_G_EAF5thRegiment";
		displayName="$STR_Globe_CfgVehicles_UnitInsigniaPatch_01_G_EAF5thRegiment0";
		model="\a3\props_f_globe\Items\Decorative\unitinsigniapatch_01_g_eaf5thregiment.p3d";
		hiddenSelectionsTextures[]=
		{
			"\a3\UI_F_enoch\Data\CfgUnitInsignia\eaf_5thRegiment_ca.paa"
		};
	};
	class UnitInsigniaPatch_01_G_EnochJointTraining: UnitInsigniaPatch_01_G_111thID
	{
		author="O&T Expansion Eden";
		editorPreview="\a3\UI_F_enoch\Data\CfgUnitInsignia\EnochJointTraining_ca.paa";
		_generalMacro="UnitInsigniaPatch_01_G_EnochJointTraining";
		displayName="$STR_Globe_CfgVehicles_UnitInsigniaPatch_01_G_EnochJointTraining0";
		model="\a3\props_f_globe\Items\Decorative\unitinsigniapatch_01_g_enochjointtraining.p3d";
		hiddenSelectionsTextures[]=
		{
			"\a3\UI_F_enoch\Data\CfgUnitInsignia\EnochJointTraining_ca.paa"
		};
	};
	class UnitInsigniaPatch_01_G_GryffinRegiment: UnitInsigniaPatch_01_G_111thID
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\Ui_f\data\GUI\Cfg\UnitInsignia\gryffinRegiment_ca.paa";
		_generalMacro="UnitInsigniaPatch_01_G_GryffinRegiment";
		displayName="$STR_Globe_CfgVehicles_UnitInsigniaPatch_01_G_GryffinRegiment0";
		model="\a3\props_f_globe\Items\Decorative\unitinsigniapatch_01_g_gryffinregiment.p3d";
		hiddenSelectionsTextures[]=
		{
			"\A3\Ui_f\data\GUI\Cfg\UnitInsignia\gryffinRegiment_ca.paa"
		};
	};
	class UnitInsigniaPatch_01_G_IDAP: UnitInsigniaPatch_01_G_111thID
	{
		author="O&T Expansion Eden";
		editorPreview="\a3\UI_F_Orange\Data\CfgUnitInsignia\IDAP_ca.paa";
		_generalMacro="UnitInsigniaPatch_01_G_IDAP";
		displayName="$STR_Globe_CfgVehicles_UnitInsigniaPatch_01_G_IDAP0";
		model="\a3\props_f_globe\Items\Decorative\unitinsigniapatch_01_g_idap.p3d";
		hiddenSelectionsTextures[]=
		{
			"\a3\UI_F_Orange\Data\CfgUnitInsignia\IDAP_ca.paa"
		};
	};
	class UnitInsigniaPatch_01_G_JetsB01: UnitInsigniaPatch_01_G_111thID
	{
		author="O&T Expansion Eden";
		editorPreview="\a3\UI_F_Jets\Data\CfgUnitInsignia\jets_patch_01.paa";
		_generalMacro="UnitInsigniaPatch_01_G_JetsB01";
		displayName="$STR_Globe_CfgVehicles_UnitInsigniaPatch_01_G_JetsB010";
		model="\a3\props_f_globe\Items\Decorative\unitinsigniapatch_01_g_jetsb01.p3d";
		hiddenSelectionsTextures[]=
		{
			"\a3\UI_F_Jets\Data\CfgUnitInsignia\jets_patch_01.paa"
		};
	};
	class UnitInsigniaPatch_01_G_MANW: UnitInsigniaPatch_01_G_111thID
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\Ui_f\data\GUI\Cfg\UnitInsignia\manw_ca.paa";
		_generalMacro="UnitInsigniaPatch_01_G_MANW";
		displayName="$STR_Globe_CfgVehicles_UnitInsigniaPatch_01_G_MANW0";
		model="\a3\props_f_globe\Items\Decorative\unitinsigniapatch_01_g_manw.p3d";
		hiddenSelectionsTextures[]=
		{
			"\A3\Ui_f\data\GUI\Cfg\UnitInsignia\manw_ca.paa"
		};
	};
	class UnitInsigniaPatch_01_G_Spetsnaz223rdDetachment: UnitInsigniaPatch_01_G_111thID
	{
		author="O&T Expansion Eden";
		editorPreview="\a3\UI_F_enoch\Data\CfgUnitInsignia\Spetsnaz_ca.paa";
		_generalMacro="UnitInsigniaPatch_01_G_Spetsnaz223rdDetachment";
		displayName="$STR_Globe_CfgVehicles_UnitInsigniaPatch_01_G_Spetsnaz223rdDetachment0";
		model="\a3\props_f_globe\Items\Decorative\unitinsigniapatch_01_g_spetsnaz223rddetachment.p3d";
		hiddenSelectionsTextures[]=
		{
			"\a3\UI_F_enoch\Data\CfgUnitInsignia\Spetsnaz_ca.paa"
		};
	};
	class UnitInsigniaPatch_01_G_TFAegis: UnitInsigniaPatch_01_G_111thID
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\Ui_f\data\GUI\Cfg\UnitInsignia\TFAegis_ca.paa";
		_generalMacro="UnitInsigniaPatch_01_G_TFAegis";
		displayName="$STR_Globe_CfgVehicles_UnitInsigniaPatch_01_G_TFAegis0";
		model="\a3\props_f_globe\Items\Decorative\unitinsigniapatch_01_g_tfaegis.p3d";
		hiddenSelectionsTextures[]=
		{
			"\A3\Ui_f\data\GUI\Cfg\UnitInsignia\TFAegis_ca.paa"
		};
	};
};
