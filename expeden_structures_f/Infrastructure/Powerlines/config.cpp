class CfgPatches
{
	class Structures_Globe_Infrastructure_Powerlines
	{
		addonRootClass="A3_Structures_F_Globe";
		requiredAddons[]=
		{
			"A3_Structures_F_Globe_Infrastructure"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Land_Power_Pole_Wood1_Amp",
			"Land_Power_Pole_Wood1_Lamp",
			"Land_Power_Pole_Wood1_Lamp_Amp",
			"Land_Power_Pole_Wood2",
			"Land_Power_Pole_Wood3",
			"Land_PowerLine_01_pole_end_v1_F",
			"Land_PowerLine_01_pole_end_v2_F",
			"Land_PowerLine_01_pole_junction_F",
			"Land_PowerLine_01_pole_lamp_F",
			"Land_PowerLine_01_pole_lamp_off_F",
			"Land_PowerLine_01_pole_small_F",
			"Land_PowerLine_01_pole_tall_F",
			"Land_PowerLine_01_pole_transformer_F",
			"Land_PowerLine_01_wire_50m_F",
			"Land_PowerLine_01_wire_50m_main_F",
			"Land_HighVoltageColumnWire_F",
			"Land_HighVoltageEnd_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class PowerLines_base_F;
	class PowerLines_Small_base_F;
	class PowerLines_Wires_base_F;
	class Land_HighVoltageColumnWire_F: PowerLines_Wires_base_F
	{
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Land_HighVoltageColumnWire_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_expEden_Land_HighVoltageColumnWire_F";
	};
	class Land_HighVoltageEnd_F: PowerLines_base_F
	{
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Land_HighVoltageEnd_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_expEden_Land_HighVoltageEnd_F";
	};
	class Land_PowerWireBig_direct_F: PowerLines_Wires_base_F
	{
		author="O&T Expansion Eden";
		mapSize=248.06;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=19.738001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Land_PowerWireBig_direct_F.jpg";
		_generalMacro="Land_PowerWireBig_direct_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_expEden_Land_PowerWireBig_direct_F";
		model="\A3\Structures_F\Ind\PowerLines\PowerWireBig_direct_F.p3d";
		icon="iconObject_1x10";
		editorCategory="EdCat_Structures_Altis";
		cost=500;
		featureSize=50;
	};
	class Land_PowerWireBig_direct_short_F: PowerLines_Wires_base_F
	{
		author="O&T Expansion Eden";
		mapSize=198.64;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=19.826;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Land_PowerWireBig_direct_short_F.jpg";
		_generalMacro="Land_PowerWireBig_direct_short_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_expEden_Land_PowerWireBig_direct_short_F";
		model="\A3\Structures_F\Ind\PowerLines\PowerWireBig_direct_short_F.p3d";
		icon="iconObject_1x10";
		editorCategory="EdCat_Structures_Altis";
		cost=500;
		featureSize=50;
	};
	class Land_PowerWireBig_end_F: PowerLines_Wires_base_F
	{
		author="O&T Expansion Eden";
		mapSize=114.2;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=19.837;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Land_PowerWireBig_end_F.jpg";
		_generalMacro="Land_PowerWireBig_end_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_expEden_Land_PowerWireBig_end_F";
		model="\A3\Structures_F\Ind\PowerLines\PowerWireBig_end_F.p3d";
		icon="iconObject_1x10";
		editorCategory="EdCat_Structures_Altis";
		cost=500;
		featureSize=50;
	};
	class Land_PowerWireBig_left_F: PowerLines_Wires_base_F
	{
		author="O&T Expansion Eden";
		mapSize=244.95;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=19.636;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Land_PowerWireBig_left_F.jpg";
		_generalMacro="Land_PowerWireBig_left_F";
		scope=1;
		scopeCurator=0;
		displayName="$STR_expEden_Land_PowerWireBig_left_F";
		model="\A3\Structures_F\Ind\PowerLines\PowerWireBig_left_F.p3d";
		icon="iconObject_1x10";
		editorCategory="EdCat_Structures_Altis";
		cost=500;
		featureSize=50;
	};
	class Land_PowerWireBig_right_F: PowerLines_Wires_base_F
	{
		author="O&T Expansion Eden";
		mapSize=244.55;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=20.172001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Land_PowerWireBig_right_F.jpg";
		_generalMacro="Land_PowerWireBig_right_F";
		scope=1;
		scopeCurator=0;
		displayName="$STR_expEden_Land_PowerWireBig_right_F";
		model="\A3\Structures_F\Ind\PowerLines\PowerWireBig_right_F.p3d";
		icon="iconObject_1x10";
		editorCategory="EdCat_Structures_Altis";
		cost=500;
		featureSize=50;
	};
	class Land_PowerWireSmall_damaged_F: PowerLines_Wires_base_F
	{
		author="O&T Expansion Eden";
		mapSize=100.16;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=8.7010002;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Land_PowerWireSmall_damaged_F.jpg";
		_generalMacro="Land_PowerWireSmall_damaged_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_expEden_Land_PowerWireSmall_damaged_F";
		model="\A3\Structures_F\Ind\PowerLines\PowerWireSmall_damaged_F.p3d";
		icon="iconObject_10x1";
		editorCategory="EdCat_Structures_Altis";
		cost=500;
		featureSize=50;
	};
	class Land_PowerWireSmall_direct_F: PowerLines_Wires_base_F
	{
		author="O&T Expansion Eden";
		mapSize=100.16;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=8.9090004;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Land_PowerWireSmall_direct_F.jpg";
		_generalMacro="Land_PowerWireSmall_direct_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_expEden_Land_PowerWireSmall_direct_F";
		model="\A3\Structures_F\Ind\PowerLines\PowerWireSmall_direct_F.p3d";
		icon="iconObject_10x1";
		editorCategory="EdCat_Structures_Altis";
		cost=500;
		featureSize=50;
	};
	class Land_PowerWireSmall_Left_F: PowerLines_Wires_base_F
	{
		author="O&T Expansion Eden";
		mapSize=98.540001;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=9.0220003;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Land_PowerWireSmall_Left_F.jpg";
		_generalMacro="Land_PowerWireSmall_Left_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_expEden_Land_PowerWireSmall_Left_F";
		model="\A3\Structures_F\Ind\PowerLines\PowerWireSmall_Left_F.p3d";
		icon="iconObject_10x1";
		editorCategory="EdCat_Structures_Altis";
		cost=500;
		featureSize=50;
	};
	class Land_PowerWireSmall_Right_F: PowerLines_Wires_base_F
	{
		author="O&T Expansion Eden";
		mapSize=98.540001;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=9.0220003;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Land_PowerWireSmall_Right_F.jpg";
		_generalMacro="Land_PowerWireSmall_Right_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_expEden_Land_PowerWireSmall_Right_F";
		model="\A3\Structures_F\Ind\PowerLines\PowerWireSmall_Right_F.p3d";
		icon="iconObject_10x1";
		editorCategory="EdCat_Structures_Altis";
		cost=500;
		featureSize=50;
	};
	class Land_Power_Pole_Wood1_Amp: PowerLines_Small_base_F
	{
		author="O&T Expansion Eden";
		mapSize=0.79000002;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=3.503;
			verticalOffsetWorld=0;
			init="''";
		};
		_generalMacro="Land_Power_Pole_Wood1_Amp";
		scope=2;
		scopeCurator=2;
		displayName="$STR_expEden_Land_Power_Pole_Wood1_Amp";
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Land_Power_Pole_Wood1_Amp.jpg";
		model="\A3\Structures_F_Enoch\Infrastructure\Powerlines\Power_Pole_Wood1_Amp.p3d";
		icon="iconObject_4x1";
		editorCategory="EdCat_Structures_Enoch";
		destrType="DestructTree";
		armor=1000;
		compatibleWires[]=
		{
			
			{
				"Land_PowerLine_01_wire_50m_F",
				40
			},
			
			{
				"Land_PowerLine_01_wire_50m_main_F",
				40
			},
			
			{
				"Land_TelephoneLine_01_wire_50m_main_F",
				40
			},
			
			{
				"Land_PowerLine_03_pole_end_F",
				50
			}
		};
	};
	class Land_Power_Pole_Wood1_Lamp: PowerLines_Small_base_F
	{
		author="O&T Expansion Eden";
		mapSize=1.47;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=3.4979999;
			verticalOffsetWorld=0;
			init="''";
		};
		_generalMacro="Land_Power_Pole_Wood1_Lamp";
		scope=2;
		scopeCurator=2;
		displayName="$STR_expEden_Land_Power_Pole_Wood1_Lamp";
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Land_Power_Pole_Wood1_Lamp.jpg";
		model="\A3\Structures_F_Enoch\Infrastructure\Powerlines\Power_Pole_Wood1_Lamp.p3d";
		icon="iconObject_4x1";
		editorCategory="EdCat_Structures_Enoch";
		destrType="DestructTree";
		armor=1000;
		compatibleWires[]=
		{
			
			{
				"Land_PowerLine_01_wire_50m_F",
				40
			},
			
			{
				"Land_PowerLine_01_wire_50m_main_F",
				40
			},
			
			{
				"Land_TelephoneLine_01_wire_50m_main_F",
				40
			},
			
			{
				"Land_PowerLine_03_pole_end_F",
				50
			}
		};
	};
	class Land_Power_Pole_Wood1_Lamp_Amp: PowerLines_Small_base_F
	{
		author="O&T Expansion Eden";
		mapSize=1.51;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=3.4979999;
			verticalOffsetWorld=0;
			init="''";
		};
		_generalMacro="Land_Power_Pole_Wood1_Lamp_Amp";
		scope=2;
		scopeCurator=2;
		displayName="$STR_expEden_Land_Power_Pole_Wood1_Lamp_Amp";
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Land_Power_Pole_Wood1_Lamp_Amp.jpg";
		model="\A3\Structures_F_Enoch\Infrastructure\Powerlines\Power_Pole_Wood1_Lamp_Amp.p3d";
		icon="iconObject_4x1";
		editorCategory="EdCat_Structures_Enoch";
		destrType="DestructTree";
		armor=1000;
		compatibleWires[]=
		{
			
			{
				"Land_PowerLine_01_wire_50m_F",
				40
			},
			
			{
				"Land_PowerLine_01_wire_50m_main_F",
				40
			},
			
			{
				"Land_TelephoneLine_01_wire_50m_main_F",
				40
			},
			
			{
				"Land_PowerLine_03_pole_end_F",
				50
			}
		};
	};
	class Land_Power_Pole_Wood2: PowerLines_Small_base_F
	{
		author="O&T Expansion Eden";
		mapSize=3.25;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=4.5219998;
			verticalOffsetWorld=0;
			init="''";
		};
		_generalMacro="Land_Power_Pole_Wood2";
		scope=2;
		scopeCurator=2;
		displayName="$STR_expEden_Land_Power_Pole_Wood2";
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Land_Power_Pole_Wood2.jpg";
		model="\A3\Structures_F_Enoch\Infrastructure\Powerlines\Power_Pole_Wood2.p3d";
		icon="iconObject_4x1";
		editorCategory="EdCat_Structures_Enoch";
		destrType="DestructTree";
		armor=1000;
		compatibleWires[]=
		{
			
			{
				"Land_PowerLine_01_wire_50m_F",
				40
			},
			
			{
				"Land_PowerLine_01_wire_50m_main_F",
				40
			},
			
			{
				"Land_TelephoneLine_01_wire_50m_main_F",
				40
			},
			
			{
				"Land_PowerLine_03_pole_end_F",
				50
			}
		};
	};
	class Land_Power_Pole_Wood3: PowerLines_Small_base_F
	{
		author="O&T Expansion Eden";
		mapSize=3.3599999;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=4.3740001;
			verticalOffsetWorld=0;
			init="''";
		};
		_generalMacro="Land_Power_Pole_Wood3";
		scope=2;
		scopeCurator=2;
		displayName="$STR_expEden_Land_Power_Pole_Wood3";
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Land_Power_Pole_Wood3.jpg";
		model="\A3\Structures_F_Enoch\Infrastructure\Powerlines\Power_Pole_Wood3.p3d";
		icon="iconObject_4x1";
		editorCategory="EdCat_Structures_Enoch";
		destrType="DestructTree";
		armor=1000;
		compatibleWires[]=
		{
			
			{
				"Land_PowerLine_01_wire_50m_F",
				40
			},
			
			{
				"Land_PowerLine_01_wire_50m_main_F",
				40
			},
			
			{
				"Land_TelephoneLine_01_wire_50m_main_F",
				40
			},
			
			{
				"Land_PowerLine_03_pole_end_F",
				50
			}
		};
	};
	class Land_PowerLine_01_pole_end_v1_F: PowerLines_Small_base_F
	{
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Land_PowerLine_01_pole_end_v1_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_PowerLine_01_pole_end_v1_F0";
	};
	class Land_PowerLine_01_pole_end_v2_F: PowerLines_Small_base_F
	{
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Land_PowerLine_01_pole_end_v2_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_PowerLine_01_pole_end_v2_F0";
	};
	class Land_PowerLine_01_pole_junction_F: PowerLines_Small_base_F
	{
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Land_PowerLine_01_pole_junction_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_PowerLine_01_pole_junction_F0";
	};
	class Land_PowerLine_01_pole_lamp_F: PowerLines_Small_base_F
	{
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Land_PowerLine_01_pole_lamp_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_PowerLine_01_pole_lamp_F0";
	};
	class Land_PowerLine_01_pole_lamp_off_F: PowerLines_Small_base_F
	{
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Land_PowerLine_01_pole_lamp_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_PowerLine_01_pole_lamp_off_F0";
	};
	class Land_PowerLine_01_pole_small_F: PowerLines_Small_base_F
	{
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Land_PowerLine_01_pole_small_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_PowerLine_01_pole_small_F0";
	};
	class Land_PowerLine_01_pole_tall_F: PowerLines_Small_base_F
	{
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Land_PowerLine_01_pole_tall_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_PowerLine_01_pole_tall_F0";
	};
	class Land_PowerLine_01_pole_transformer_F: PowerLines_Small_base_F
	{
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Land_PowerLine_01_pole_transformer_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_PowerLine_01_pole_transformer_F0";
	};
	class Land_PowerLine_01_wire_50m_F: PowerLines_Wires_base_F
	{
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Land_PowerLine_01_pole_transformer_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_PowerLine_01_wire_50m_F0";
	};
	class Land_PowerLine_01_wire_50m_main_F: PowerLines_Wires_base_F
	{
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Land_PowerLine_01_wire_50m_main_F.jpg";
		scope=1;
		scopeCurator=0;
		displayName="$STR_Globe_CfgVehicles_Land_PowerLine_01_wire_50m_main_F0";
	};
};
