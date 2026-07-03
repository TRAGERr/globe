class CfgPatches
{
	class Props_Globe_Humanitarian_Camps
	{
		addonRootClass="A3_Props_F_Globe";
		requiredAddons[]=
		{
			"Props_Globe_Humanitarian"
		};
		requiredVersion=0.1;
		units[]=
		{
			"AirConditioner_01_on",
			"IntravenStand_01_1bag_left",
			"IntravenStand_01_randomBag",
			"FirstAidKit_02",
			"FirstAidKit_military"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Land_AirConditioner_01_F;
	class Land_IntravenStand_01_base_F;
	class Land_IntravenStand_01_1bag_F;
	class Items_base_F;
	class FirstAidKit_02: Items_base_F
	{
		author="O&T Expansion Eden";
		mapSize=0.44;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.17900001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\FirstAidKit_02.jpg";
		_generalMacro="FirstAidKit_02";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_FirstAidKit_020";
		model="\A3\Weapons_F\Items\Medikit.p3d";
		icon="iconObject_2x3";
		editorSubcategory="EdSubcat_Medicine";
		destrType="DestructNo";
		attendant=1;
	};
	class FirstAidKit_military: Items_base_F
	{
		author="O&T Expansion Eden";
		mapSize=0.25999999;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.02;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\FirstAidKit_military.jpg";
		_generalMacro="FirstAidKit_military";
		scope=2;
		scopeCurator=2;
		displayName="$STR_a3_a_in_instructor_first_aid_kit";
		model="\A3\Weapons_F\Items\FirstAidkit.p3d";
		icon="iconObject_1x1";
		editorSubcategory="EdSubcat_Medicine";
		destrType="DestructNo";
		attendant=1;
	};
	class IntravenStand_01_1bag_left: Land_IntravenStand_01_1bag_F
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.93099999;
			verticalOffsetWorld=0;
			init="[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\IntravenStand_01_1bag_left.jpg";
		_generalMacro="IntravenStand_01_1bag_left";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_IntravenStand_01_1bag_left0";
		class AnimationSources
		{
			class Bag1_Hide
			{
				source="user";
				animPeriod=1e-006;
				initPhase=0;
			};
			class Bag2_Hide
			{
				source="user";
				animPeriod=1e-006;
				initPhase=1;
			};
		};
	};
	class IntravenStand_01_randomBag: Land_IntravenStand_01_base_F
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.93099999;
			verticalOffsetWorld=0;
			init="";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\IntravenStand_01_randomBag.jpg";
		_generalMacro="IntravenStand_01_randomBag";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_IntravenStand_01_randomBag0";
		class EventHandlers
		{
			postInit="(_this # 0) call compile preprocessFileLineNumbers '\a3\props_f_globe\Humanitarian\Camps\scripts\randomize_bags.sqf'";
		};
	};
	class AirConditioner_01_on: Land_AirConditioner_01_F
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=0;
			animate[]=
			{
				
				{
					"vent_roation",
					2953.98
				},
				
				{
					"display_clock_flash",
					2953.98
				},
				
				{
					"display_hour_0x_hide",
					0.60000002
				},
				
				{
					"display_hour_1x_hide",
					0.60000002
				},
				
				{
					"display_hour_2x_hide",
					0.60000002
				},
				
				{
					"display_hour_x0_hide",
					0.60000002
				},
				
				{
					"display_hour_x1_hide",
					0.60000002
				},
				
				{
					"display_hour_x2_hide",
					0.60000002
				},
				
				{
					"display_hour_x3_hide",
					0.60000002
				},
				
				{
					"display_hour_x4_hide",
					0.60000002
				},
				
				{
					"display_hour_x5_hide",
					0.60000002
				},
				
				{
					"display_hour_x6_hide",
					0.60000002
				},
				
				{
					"display_hour_x7_hide",
					0.60000002
				},
				
				{
					"display_hour_x8_hide",
					0.60000002
				},
				
				{
					"display_hour_x9_hide",
					0.60000002
				},
				
				{
					"display_minute_0x_hide",
					0.44
				},
				
				{
					"display_minute_1x_hide",
					0.44
				},
				
				{
					"display_minute_2x_hide",
					0.44
				},
				
				{
					"display_minute_3x_hide",
					0.44
				},
				
				{
					"display_minute_4x_hide",
					0.44
				},
				
				{
					"display_minute_5x_hide",
					0.44
				},
				
				{
					"display_minute_x0_hide",
					0.44
				},
				
				{
					"display_minute_x1_hide",
					0.44
				},
				
				{
					"display_minute_x2_hide",
					0.44
				},
				
				{
					"display_minute_x3_hide",
					0.44
				},
				
				{
					"display_minute_x4_hide",
					0.44
				},
				
				{
					"display_minute_x5_hide",
					0.44
				},
				
				{
					"display_minute_x6_hide",
					0.44
				},
				
				{
					"display_minute_x7_hide",
					0.44
				},
				
				{
					"display_minute_x8_hide",
					0.44
				},
				
				{
					"display_minute_x9_hide",
					0.44
				}
			};
			hide[]={};
			verticalOffset=0.50700003;
			verticalOffsetWorld=0;
			init="[this, '', []] call bis_fnc_initVehicle";
		};
		_generalMacro="AirConditioner_01_on";
		displayName="$STR_Globe_CfgVehicles_AirConditioner_01_on0";
		model="\a3\Props_F_Orange\Humanitarian\Camps\AirConditioner_01_F.p3d";
		class AnimationSources
		{
			class Hide_Hose_01
			{
				source="user";
				animPeriod=1e-006;
				initPhase=1;
			};
			class Hide_Hose_02: Hide_Hose_01
			{
				initPhase=1;
			};
			class Hide_Hose_03: Hide_Hose_01
			{
				initPhase=1;
			};
		};
		class Attributes
		{
			class SoundList
			{
				displayName="$STR_3den_trigger_attribute_soundtrigger_displayname";
				property="SoundList";
				control="Combo";
				expression="[_this, _value] call expEden_fnc_createSoundSetSource;";
				defaultValue="'mode1'";
				typeName="STRING";
				class Values
				{
					class mode1
					{
						name="$STR_A3_CfgVehicles_Land_DataTerminal_01_F0";
						value="mode1";
						picture="\a3\props_f_exp_a\military\equipment\data\dataterminal_co.paa";
					};
					class mode2
					{
						name="$STR_A3_Cfgvehicles_Land_AirConditioner_01_F0";
						value="mode2";
						picture="\a3\props_f_orange\humanitarian\camps\data\airconditioner_01_f_co.paa";
					};
					class mode3
					{
						name="$STR_Sound_None";
						value="mode3";
						picture="\a3\ui_f\data\gui\rsc\rscdisplayarcademap\icon_exit_cross_ca.paa";
					};
				};
			};
			class Hide_Hose_01
			{
				displayName="$STR_Globe_CfgVehicles_AirConditioner_01_on_Attributes_dn0";
				property="Hide_Hose_01";
				control="CheckboxNumber";
				defaultValue=0;
				expression="_this animateSource ['%s',	([1,0] # (_value max 0 min 1)),true]";
			};
			class Hide_Hose_02: Hide_Hose_01
			{
				displayName="$STR_Globe_CfgVehicles_AirConditioner_01_on_Attributes_dn1";
				property="Hide_Hose_02";
			};
			class Hide_Hose_03: Hide_Hose_01
			{
				displayName="$STR_Globe_CfgVehicles_AirConditioner_01_on_Attributes_dn2";
				property="Hide_Hose_03";
			};
		};
	};
};
