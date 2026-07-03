class CfgPatches
{
	class A3_Structures_F_Globe_Infrastructure
	{
		addonRootClass="A3_Structures_F_Globe";
		requiredAddons[]=
		{
			"A3_Structures_F_Globe"
		};
		requiredVersion=0.1;
		units[]=
		{
			"WallCity_01_debris",
			"Stone_debris",
			"Land_powerline_02_pole_junction_nest_a_bird"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Items_base_F;
	class PowerLines_Small_base_F;
	class PowerLines_Wires_base_F;
	class Land_powerline_02_pole_junction_nest_a_f: PowerLines_Small_base_F
	{
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Land_powerline_02_pole_junction_nest_a_f.jpg";
		scope=2;
		displayName="$STR_expEden_Land_powerline_02_pole_junction_nest_a_f";
	};
	class Land_powerline_02_pole_junction_nest_a_bird: Land_powerline_02_pole_junction_nest_a_f
	{
		displayName="$STR_Globe_CfgVehicles_Land_powerline_02_pole_junction_nest_a_bird";
		class EventHandlers
		{
			init="_this call expEden_fnc_birdNest";
			killed="deleteVehicle ((_this # 0) getVariable 'nestSoundSource');";
			deleted="deleteVehicle ((_this # 0) getVariable 'nestSoundSource');";
			unregisteredFromWorld3DEN="deleteVehicle ((_this # 0) getVariable 'nestSoundSource');";
		};
	};
	class Land_powerline_02_pole_small_junction_f: PowerLines_Small_base_F
	{
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Land_powerline_02_pole_small_junction_f.jpg";
		scope=1;
		displayName="$STR_A3_Globe_CfgVehicles_Land_PowerLine_02_pole_small_junction_F0";
	};
	class Land_powerline_02_pole_small_hook_end_f: PowerLines_Small_base_F
	{
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Land_powerline_02_pole_small_hook_end_f.jpg";
		scope=2;
		displayName="$STR_expEden_Land_powerline_02_pole_small_hook_end_f";
	};
	class Land_powerline_02_pole_small_hook_junction_f: PowerLines_Small_base_F
	{
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Land_powerline_02_pole_small_hook_junction_f.jpg";
		scope=2;
		displayName="$STR_expEden_Land_powerline_02_pole_small_hook_junction_f";
	};
	class Land_TelephoneLine_01_wire_50m_main_F: PowerLines_Wires_base_F
	{
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Land_TelephoneLine_01_wire_50m_main_F.jpg";
		scope=2;
	};
	class Land_Power_Pole_Wood1: PowerLines_Small_base_F
	{
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Land_Power_Pole_Wood1.jpg";
		scope=2;
		displayName="$STR_expEden_Land_Power_Pole_Wood1";
	};
	class Land_Power_Pole_Wood1_Lamp: PowerLines_Small_base_F
	{
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Land_Power_Pole_Wood1_Lamp.jpg";
		scope=2;
		displayName="$STR_expEden_Land_Power_Pole_Wood1_Lamp";
	};
	class Land_Power_Pole_Wood1_Lamp_Amp: PowerLines_Small_base_F
	{
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Land_Power_Pole_Wood1_Lamp_Amp.jpg";
		scope=2;
		displayName="$STR_expEden_Land_Power_Pole_Wood1_Lamp_Amp";
	};
	class Land_Power_Pole_Wood2: PowerLines_Small_base_F
	{
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Land_Power_Pole_Wood2.jpg";
		scope=2;
		displayName="$STR_expEden_Land_Power_Pole_Wood2";
	};
	class Land_Power_Pole_Wood3: PowerLines_Small_base_F
	{
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Land_Power_Pole_Wood3.jpg";
		scope=2;
		displayName="$STR_expEden_Land_Power_Pole_Wood3";
	};
	class Stone_debris: Items_base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		mapSize=0.28999999;
		editorCategory="EdCat_Things";
		editorSubcategory="EdSubcat_Garbage";
		destrType="DestructNo";
		icon="iconObject_circle";
		vehicleClass="Garbage";
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.121;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Stone_debris.jpg";
		_generalMacro="Stone_debris";
		scope=2;
		scopeCurator=2;
		model="\A3\Data_F\ParticleEffects\WallPart\WallPart2.p3d";
		displayName="$STR_Globe_CfgVehicles_Stone_debris0";
	};
	class WallCity_01_debris: Stone_debris
	{
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.121;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\WallCity_01_debris.jpg";
		_generalMacro="WallCity_01_debris";
		displayName="$STR_Globe_CfgVehicles_WallCity_01_debris0";
		model="\A3\Data_F\ParticleEffects\WallPart\WallPart.p3d";
		icon="iconObject_1x1";
	};
};
