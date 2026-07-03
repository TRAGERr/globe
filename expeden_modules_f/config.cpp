class CfgPatches
{
	class A3_Modules_F_Globe
	{
		author="Trager";
		name="O&T Expansion Eden - Scripted Modules";
		url="https://steamcommunity.com/workshop/filedetails/?id=1923321700";
		requiredAddons[]=
		{
			"A3_expEden"
		};
		requiredVersion=0.1;
		units[]=
		{
			"ModuleSimpleObject_F",
			"ModuleCreatePowerLine_01_G"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Logic;
	class Module_F: Logic
	{
		class AttributesBase
		{
			class Edit;
			class Combo;
			class Checkbox;
			class ModuleDescription;
		};
		class ModuleDescription;
		class ArgumentsBaseUnits;
	};
	class ModuleMosquitos: Module_F
	{
		displayName="$STR_A3_Modules_ModuleOmMosquitos_F0";
		icon="A3\Data_F_Tank\Logos\vanguard_icon_64_ca.paa";
		portrait="A3\Data_F_Tank\Logos\vanguard_icon_64_ca.paa";
		scope=1;
		is3DEN=1;
		category="";
		function="expEden_fnc_mosquitos";
		functionPriority=1;
		class Attributes: AttributesBase
		{
			class MosqSize: Edit
			{
				property="ModuleOmMosquitos_MosqSize";
				displayName="$STR_A3_Modules_ModuleOmMosquitos_F_Attributes_MosqSize0";
				tooltip="$STR_A3_OM_System_ModuleOmMosquitos_MosqSize";
				typeName="NUMBER";
				defaultValue="60";
			};
			class MosqLifeTime: Edit
			{
				property="ModuleOmMosquitos_MosqLifeTime";
				displayName="$STR_A3_Modules_ModuleOmMosquitos_F_Attributes_MosqLifeTime0";
				tooltip="$STR_A3_OM_System_ModuleOmMosquitos_MosqLifeTime";
				typeName="NUMBER";
				defaultValue="10";
			};
			class ModuleDescription: ModuleDescription
			{
			};
		};
		class ModuleDescription: ModuleDescription
		{
			description="$STR_A3_Modules_ModuleOmMosquitos_F_ModuleDescription0";
		};
	};
	class ModuleRuinTerrainBuildings_Globe: Module_F
	{
		scope=1;
		is3DEN=1;
		displayName="expEden_fnc_moduleRuinTerrainBuildings";
		icon="A3\Modules_F\Data\HideTerrainObjects\icon32_ca.paa";
		portrait="A3\Modules_F\Data\HideTerrainObjects\icon32_ca.paa";
		function="expEden_fnc_moduleRuinTerrainBuildings";
		functionPriority=25;
		canSetArea=1;
		canSetAreaHeight=0;
		canSetAreaShape=1;
		category="Environment";
		class AttributeValues
		{
			size3[]={5,5,-1};
			isRectangle=0;
		};
		class Attributes: AttributesBase
		{
		};
	};
	class ModuleCAS_F: Module_F
	{
		class Arguments
		{
			class Vehicle
			{
				class values
				{
					class O_Plane_Fighter_03_dynamicLoadout
					{
						name="$STR_Globe_CfgVehicles_O_Plane_Fighter_03_dynamicLoadout0";
						value="O_Plane_Fighter_03_dynamicLoadout";
					};
					class O_Plane_Fighter_03_cluster
					{
						name="$STR_Globe_CfgVehicles_O_Plane_Fighter_03_cluster0";
						value="O_Plane_Fighter_03_cluster";
					};
				};
			};
		};
	};
	class ModulePostprocess_F: Module_F
	{
		class Arguments
		{
			class Template
			{
				class Values
				{
					class Default;
					class Orange_G_escape: Default
					{
						name="$STR_A3_ORANGE_ESCAPE_BRIEFINGNAME";
						value="Orange_G_escape";
						default=0;
					};
					class Orange_G_hub: Default
					{
						name="$STR_A3_ORANGE_HUB_BRIEFINGNAME";
						value="Orange_G_hub";
						default=0;
					};
					class Contact_G: Default
					{
						name="$STR_A3_CAMPAIGN_B_IN_INSTRUCTOR_CONTACT";
						value="Contact_G";
						default=0;
					};
					class Contact_G_intro1: Default
					{
						name="$STR_Globe_CfgPostProcessTemplates_Contact_G_intro1_n";
						value="Contact_G_intro1";
						default=0;
					};
				};
			};
		};
	};
	class ModuleZoneRestriction_G_range: Module_F
	{
		author="O&T Expansion Eden";
		_generalMacro="ModuleZoneRestriction_G";
		scope=1;
		displayName="$STR_A3_mdl_supp_zonerest_name";
		function="expEden_fnc_moduleZoneRestriction";
		isGlobal=2;
		class Arguments: ArgumentsBaseUnits
		{
			class Globe_ZRBuffer
			{
				displayName="Globe_ZRBuffer";
				description="description";
				typeName="NUMBER";
				defaultValue=10;
			};
			class CustomEffectWarning
			{
				displayName="$STR_A3_mdl_supp_zonerest_inverse_warnCode";
				description="$STR_A3_mdl_supp_zonerest_inverse_warnCode_desc";
				typeName="STRING";
				defaultValue="";
			};
			class CustomEffectPunishment
			{
				displayName="$STR_A3_mdl_supp_zonerest_inverse_punishCode";
				description="$STR_A3_mdl_supp_zonerest_inverse_punishCode_desc";
				typeName="STRING";
				defaultValue="";
			};
			class AirExcluded
			{
				displayName="$STR_A3_mdl_simul_disp_noair";
				description="";
				typeName="BOOL";
				class Values
				{
					class Yes
					{
						name="$STR_lib_info_yes";
						value=1;
						default=1;
					};
					class No
					{
						name="$STR_lib_info_no";
						value=0;
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription
		{
			description="$STR_A3_CfgVehicles_ModuleZoneRestriction_F_ModuleDescription_0";
		};
	};
	class ModuleSimpleObject_F: Module_F
	{
		author="O&T Expansion Eden";
		scope=2;
		scopeCurator=2;
		displayName="$STR_3DEN_OBJECT_ATTRIBUTE_SIMPLEOBJECT_DISPLAYNAME";
		function="expEden_fnc_moduleSimpleObject";
		is3DEN=1;
		isGlobal=0;
		functionPriority=25;
		isPersistent=0;
		class Attributes: AttributesBase
		{
			class CivilianPresence_Description
			{
				data="AttributeSystemSubcategory";
				control="SubCategoryNoHeader2";
				displayName="";
				description="$STR_Globe_ModuleSimpleObject_Attributes_Model_tooltip";
				tooltip="";
			};
			class Model: Edit
			{
				property="ModuleSimpleObject_F_Model";
				displayName="$STR_expEden_ModuleSimpleObject_displayName_F";
				tooltip="";
			};
			class Init: Edit
			{
				property="ModuleSimpleObject_F_Init";
				validate="expression";
				control="EditCodeMulti5";
				displayName="Init Server Expression";
				tooltip="_this";
			};
		};
	};
	class ModuleFlaresCrate_F: Module_F
	{
		author="O&T Expansion Eden";
		_generalMacro="ModuleFlaresCrate_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_cfgFactionClasses_flares";
		function="expEden_fnc_moduleFlareCreate";
		category="Effects";
		isGlobal=0;
		isTriggerActivated=1;
		icon="\A3\Modules_F_Globe\Data\iconFlares_ca.paa";
		portrait="\A3\Modules_F_Globe\Data\portraitFlares_ca.paa";
		class Arguments: ArgumentsBaseUnits
		{
			class minimumPosition
			{
				displayName="$STR_A3_mdl_ModuleFlareCrate_F_arguments_minimumPosition_displayName";
				description="$STR_A3_mdl_ModuleFlareCrate_F_arguments_minimumPosition_description";
				typeName="NUMBER";
				defaultValue=200;
			};
			class maximumPosition
			{
				displayName="$STR_A3_mdl_ModuleFlareCrate_F_arguments_maximumPosition_displayName";
				description="$STR_A3_mdl_ModuleFlareCrate_F_arguments_maximumPosition_description";
				typeName="NUMBER";
				defaultValue=300;
			};
			class colorRED
			{
				displayName="$STR_A3_mdl_ModuleFlareCrate_F_arguments_colorRED_displayName";
				description="$STR_A3_mdl_ModuleFlareCrate_F_arguments_colorRED_description";
				typeName="BOOL";
				class Values
				{
					class yes
					{
						name="$STR_lib_info_yes";
						value=1;
					};
					class no
					{
						name="$STR_lib_info_no";
						value=0;
						default=1;
					};
				};
			};
			class colorRANDOM
			{
				displayName="$STR_A3_mdl_ModuleFlareCrate_F_arguments_colorRANDOM_displayName";
				description="$STR_A3_mdl_ModuleFlareCrate_F_arguments_colorRANDOM_description";
				typeName="BOOL";
				class Values
				{
					class yes
					{
						name="$STR_lib_info_yes";
						value=1;
					};
					class no
					{
						name="$STR_lib_info_no";
						value=0;
						default=1;
					};
				};
			};
			class soundIs3D
			{
				displayName="3d?";
				description="$STR_A3_mdl_ModuleFlareCrate_F_arguments_soundIs3D_description";
				typeName="BOOL";
				class Values
				{
					class yes
					{
						name="$STR_lib_info_yes";
						value=1;
					};
					class no
					{
						name="$STR_lib_info_no";
						value=0;
						default=1;
					};
				};
			};
			class randomTime
			{
				displayName="$STR_A3_cfgVehicles_moduleWeather_f_arguments_delay_0";
				description="$STR_A3_mdl_ModuleFlareCrate_F_arguments_randomTime_description";
				typeName="NUMBER";
				defaultValue=120;
			};
		};
	};
	class ModuleCreatePowerLine_01_G: Module_F
	{
		author="O&T Expansion Eden";
		_generalMacro="ModuleCreatePowerLine_01_G";
		scope=2;
		displayName="$STR_Globe_CfgVehicles_ModuleCreatePowerLine_01_G0";
		icon="\A3\Modules_F_Globe\Data\portraitCreatePowerLine_01_G_ca.paa";
		portrait="\A3\Modules_F_Globe\Data\portraitCreatePowerLine_01_G_ca.paa";
		isTriggerActivated=1;
		isGlobal=0;
		function="expEden_fnc_moduleCreatePowerLine";
		class Attributes: AttributesBase
		{
			class ModuleDescription: ModuleDescription
			{
			};
			class ModuleCPW_model: Edit
			{
				property="ModuleCPW_model";
				displayName="$STR_expEden_ModuleSimpleObject_displayName_F";
				tooltip="$STR_Globe_CfgVehicles_ModuleCreatePowerLine_01_G2";
				typeName="STRING";
				defaultValue="'a3\data_f\proxies\rope\rope_3m.p3d'";
			};
			class ModuleCPW_segmentLength: Edit
			{
				property="ModuleCPW_segmentLength";
				displayName="$STR_Globe_CfgVehicles_ModuleCreatePowerLine_01_G3";
				tooltip="$STR_Globe_CfgVehicles_ModuleCreatePowerLine_01_G4";
				typeName="NUMBER";
				defaultValue="2.9";
			};
			class ModuleCPW_SagCoef: Edit
			{
				property="ModuleCPW_SagCoef";
				displayName="$STR_Globe_CfgVehicles_ModuleCreatePowerLine_01_G5";
				tooltip="$STR_Globe_CfgVehicles_ModuleCreatePowerLine_01_G6";
				typeName="NUMBER";
				defaultValue="0.04";
			};
			class ModuleCPW_action: Combo
			{
				property="ModuleCPW_action";
				displayName="$STR_Globe_CfgVehicles_ModuleCreatePowerLine_01_G10";
				tooltip="$STR_Globe_CfgVehicles_ModuleCreatePowerLine_01_G8";
				typeName="NUMBER";
				defaultValue="0";
				class Values
				{
					class ModuleCPW_action1
					{
						name="$STR_Globe_CfgVehicles_ModuleCreatePowerLine_01_G9";
						picture="";
						value=0;
					};
					class ModuleCPW_action2
					{
						name="$STR_A3_CFGVEHICLES_MODULECURATORSETOBJECTCOST_F_ARGUMENTS_SHOW_VALUES_NO";
						picture="\a3\3den\data\displays\display3den\statusbar\dis_ca.paa";
						value=1;
					};
					class ModuleCPW_action3
					{
						name="$STR_3DEN_Display3DEN_Delete_tooltip";
						picture="\a3\3den\data\cfg3den\history\deleteitems_ca.paa";
						value=2;
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription
		{
			description[]=
			{
				"$STR_Globe_CfgVehicles_ModuleCreatePowerLine_01_G1",
				"",
				"$STR_Globe_CfgVehicles_ModuleCreatePowerLine_01_G7",
			};
			sync[]=
			{
				"All"
			};
		};
	};
};
class CivilianPresence_Presets
{
	class Civ_African
	{
		class UnitTypes
		{
			bis_units[]+=
			{
				"C_Man_casual_isntArt_afro"
			};
		};
	};
	class Civ_Asian
	{
		class UnitTypes
		{
			bis_units[]+=
			{
				"C_Man_casual_isntArt_asia"
			};
		};
	};
	class Civ_European
	{
		class UnitTypes
		{
			bis_units[]+=
			{
				"C_Man_casual_isntArt_euro"
			};
		};
	};
	class Civ_Livionian
	{
		class UnitTypes
		{
			bis_units[]+=
			{
				"C_Man_casual_isntArt_euro"
			};
		};
	};
	class Civ_Tanoan
	{
		class UnitTypes
		{
			bis_units[]+=
			{
				"C_Man_casual_isntArt_tanoan"
			};
		};
	};
};
