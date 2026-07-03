class CfgPatches
{
	class Structures_Globe_Infrastructure_Railways
	{
		addonRootClass="A3_Structures_F_Globe";
		requiredAddons[]=
		{
			"A3_Structures_F_Globe_Infrastructure"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Track_01_turnout_left_switched",
			"Track_01_switch_switched",
			"Track_01_turnout_right_switched"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Infrastructure_base_F;
	class Track_01_switch_switched: Infrastructure_base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		mapSize=4.4899998;
		class SimpleObject
		{
			eden=0;
			animate[]=
			{
				
				{
					"lever_rot",
					1
				}
			};
			hide[]={};
			verticalOffset=-0.134;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Track_01_switch_switched.jpg";
		_generalMacro="Track_01_switch_switched";
		scope=2;
		scopeCurator=0;
		displayName="$STR_Globe_CfgVehicles_Track_01_switch_switched0";
		model="\A3\Structures_F_Exp\Infrastructure\Railways\Track_01_switch_F.p3d";
		DLC="Expansion";
		icon="iconObject_4x1";
		editorCategory="EdCat_Structures_Tanoa";
		editorSubcategory="EdSubcat_Railways";
		cost=10000;
		class AnimationSources
		{
			class Lever_source
			{
				source="user";
				initPhase=1;
				animPeriod=1;
			};
		};
		class Attributes
		{
			class Lever_source
			{
				displayName="$STR_Globe_CfgVehicles_Track_01_switch_switched_Attributes_Lever_source_displayName0";
				property="Lever_source";
				control="Slider";
				defaultValue=1;
				expression="_this animateSource ['%s',_value,true]";
			};
		};
	};
	class Track_01_turnout_left_switched: Infrastructure_base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		mapSize=6.5100002;
		class SimpleObject
		{
			eden=0;
			animate[]=
			{
				
				{
					"rail_inside_rot",
					1
				},
				
				{
					"rail_outside_rot",
					1
				}
			};
			hide[]={};
			verticalOffset=-0.0089999996;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Track_01_turnout_left_switched.jpg";
		_generalMacro="Track_01_turnout_left_switched";
		scope=2;
		scopeCurator=0;
		displayName="$STR_Globe_CfgVehicles_Track_01_turnout_left_switched0";
		model="\A3\Structures_F_Exp\Infrastructure\Railways\Track_01_turnout_left_F.p3d";
		DLC="Expansion";
		icon="iconObject_2x5";
		editorCategory="EdCat_Structures_Tanoa";
		editorSubcategory="EdSubcat_Railways";
		cost=10000;
		class AnimationSources
		{
			class Switch_source
			{
				source="user";
				initPhase=1;
				animPeriod=1;
			};
		};
		class Attributes
		{
			class rail_inside_rot
			{
				displayName="$STR_Globe_CfgVehicles_Track_01_switch_switched_Attributes_rail_inside_rot_displayName0";
				property="rail_inside_rot";
				control="Slider";
				defaultValue=1;
				expression="_this animate ['%s',_value,true]";
			};
			class rail_outside_rot
			{
				displayName="$STR_Globe_CfgVehicles_Track_01_switch_switched_Attributes_rail_outside_rot_displayName0";
				property="rail_outside_rot";
				control="Slider";
				defaultValue=1;
				expression="_this animate ['%s',_value,true]";
			};
		};
	};
	class Track_01_turnout_right_switched: Infrastructure_base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		mapSize=6.5100002;
		class SimpleObject
		{
			eden=0;
			animate[]=
			{
				
				{
					"rail_inside_rot",
					1
				},
				
				{
					"rail_outside_rot",
					1
				}
			};
			hide[]={};
			verticalOffset=-0.0089999996;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Track_01_turnout_right_switched.jpg";
		_generalMacro="Track_01_turnout_right_switched";
		scope=2;
		scopeCurator=0;
		displayName="$STR_Globe_CfgVehicles_Track_01_turnout_right_switched0";
		model="\A3\Structures_F_Exp\Infrastructure\Railways\Track_01_turnout_right_F.p3d";
		DLC="Expansion";
		icon="iconObject_2x5";
		editorCategory="EdCat_Structures_Tanoa";
		editorSubcategory="EdSubcat_Railways";
		cost=10000;
		class AnimationSources
		{
			class Switch_source
			{
				source="user";
				initPhase=1;
				animPeriod=1;
			};
		};
		class Attributes
		{
			class rail_inside_rot
			{
				displayName="$STR_Globe_CfgVehicles_Track_01_switch_switched_Attributes_rail_inside_rot_displayName0";
				property="rail_inside_rot";
				control="Slider";
				defaultValue=1;
				expression="_this animate ['%s',_value,true]";
			};
			class rail_outside_rot
			{
				displayName="$STR_Globe_CfgVehicles_Track_01_switch_switched_Attributes_rail_outside_rot_displayName0";
				property="rail_outside_rot";
				control="Slider";
				defaultValue=1;
				expression="_this animate ['%s',_value,true]";
			};
		};
	};
};
