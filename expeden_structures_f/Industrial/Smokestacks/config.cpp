class CfgPatches
{
	class Structures_Globe_Industrial_Smokestacks
	{
		addonRootClass="A3_Structures_F_Globe";
		requiredAddons[]=
		{
			"Structures_Globe_Industrial"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Smokestack_01_factory_powered_G",
			"Smokestack_01_powered_G",
			"Smokestack_02_powered_G",
			"Smokestack_03_powered_G",
			"SCF_01_chimney_powered_G",
			"Land_Smokestack_02_off"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Land_SCF_01_chimney_F;
	class Land_Smokestack_03_F;
	class Land_Smokestack_02_F;
	class ThingX;
	class House_F;
	class Land_Smokestack_01_factory_F;
	class Land_Smokestack_01_F;
	class Land_Smokestack_01_off_F: Land_Smokestack_01_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_C_CfgVehicles_Land_Smokestack_01_off_F0";
	};
	class Land_Smokestack_01_factory_off_F: Land_Smokestack_01_factory_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_a3_c_cfgvehicles_land_smokestack_01_factory_off_f0";
	};
	class Land_Smokestack_01_factory_base_F: House_F
	{
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Land_Smokestack_01_factory_base_F.jpg";
		scope=2;
		scopeCurator=2;
	};
	class Land_Smokestack_01_factory_lower_F: ThingX
	{
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Land_Smokestack_01_factory_lower_F.jpg";
		scope=2;
		scopeCurator=2;
	};
	class Land_Smokestack_01_factory_middle_F: ThingX
	{
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Land_Smokestack_01_factory_middle_F.jpg";
		scope=2;
		scopeCurator=2;
	};
	class Land_Smokestack_01_factory_upper_F: ThingX
	{
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Land_Smokestack_01_factory_upper_F.jpg";
		scope=2;
		scopeCurator=2;
	};
	class Land_Smokestack_02_off: Land_Smokestack_02_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_Smokestack_02_off0";
		hiddenSelections[]=
		{
			"Light_1_hide"
		};
		class MarkerLights
		{
		};
	};
	class Land_Smokestack_03_off_F: Land_Smokestack_03_F
	{
		scope=2;
		scopeCurator=2;
		hiddenSelections[]=
		{
			"Light_1_hide"
		};
		class MarkerLights
		{
		};
	};
	class Smokestack_01_factory_powered_G: Land_Smokestack_01_factory_F
	{
		author="O&T Expansion Eden";
		_generalMacro="Smokestack_01_factory_powered_G";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Smokestack_01_factory_Powered_G0";
		DLC="";
		numberOfDoors=0;
		numberOfWindows=0;
		class EventHandlers
		{
			class Globe_Smokestack1fEH
			{
				postInit="(_this # 0) call compile preprocessFileLineNumbers '\a3\structures_f_globe\Industrial\Smokestacks\Scripts\Smokestack_01.sqf';";
				killed="deleteVehicle (((_this # 0) getVariable 'Globe_effects') # 0); deleteVehicle (((_this # 0) getVariable 'Globe_effects') # 1);";
				deleted="deleteVehicle (((_this # 0) getVariable 'Globe_effects') # 0); deleteVehicle (((_this # 0) getVariable 'Globe_effects') # 1);";
				unregisteredFromWorld3DEN="deleteVehicle (((_this # 0) getVariable 'Globe_effects') # 0); deleteVehicle (((_this # 0) getVariable 'Globe_effects') # 1);";
			};
		};
	};
	class Smokestack_01_powered_G: Land_Smokestack_01_F
	{
		author="O&T Expansion Eden";
		_generalMacro="Smokestack_01_powered_G";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Smokestack_01_Powered_G0";
		DLC="";
		numberOfDoors=0;
		numberOfWindows=0;
		class EventHandlers
		{
			class Globe_Smokestack1EH
			{
				postInit="(_this # 0) call compile preprocessFileLineNumbers '\a3\structures_f_globe\Industrial\Smokestacks\Scripts\Smokestack_01.sqf';";
				killed="deleteVehicle (((_this # 0) getVariable 'Globe_effects') # 0); deleteVehicle (((_this # 0) getVariable 'Globe_effects') # 1);";
				deleted="deleteVehicle (((_this # 0) getVariable 'Globe_effects') # 0); deleteVehicle (((_this # 0) getVariable 'Globe_effects') # 1);";
				unregisteredFromWorld3DEN="deleteVehicle (((_this # 0) getVariable 'Globe_effects') # 0); deleteVehicle (((_this # 0) getVariable 'Globe_effects') # 1);";
			};
		};
	};
	class Smokestack_02_powered_G: Land_Smokestack_02_F
	{
		author="O&T Expansion Eden";
		_generalMacro="Smokestack_02_powered_G";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Smokestack_02_powered_G0";
		DLC="";
		numberOfDoors=0;
		numberOfWindows=0;
		class EventHandlers
		{
			class Globe_Smokestack2EH
			{
				postInit="(_this # 0) call compile preprocessFileLineNumbers '\a3\structures_f_globe\Industrial\Smokestacks\Scripts\Smokestack_02.sqf';";
				killed="deleteVehicle ((_this # 0) getVariable 'Globe_effects');";
				deleted="deleteVehicle ((_this # 0) getVariable 'Globe_effects');";
				unregisteredFromWorld3DEN="deleteVehicle ((_this # 0) getVariable 'Globe_effects');";
			};
		};
	};
	class Smokestack_03_powered_G: Land_Smokestack_03_F
	{
		author="O&T Expansion Eden";
		_generalMacro="Smokestack_03_powered_G";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Smokestack_03_powered_G0";
		DLC="";
		numberOfDoors=0;
		numberOfWindows=0;
		class EventHandlers
		{
			class Globe_Smokestack3EH
			{
				postInit="(_this # 0) call compile preprocessFileLineNumbers '\a3\structures_f_globe\Industrial\Smokestacks\Scripts\Smokestack_03.sqf';";
				killed="deleteVehicle ((_this # 0) getVariable 'Globe_effects');";
				deleted="deleteVehicle ((_this # 0) getVariable 'Globe_effects');";
				unregisteredFromWorld3DEN="deleteVehicle ((_this # 0) getVariable 'Globe_effects');";
			};
		};
	};
	class SCF_01_chimney_powered_G: Land_SCF_01_chimney_F
	{
		author="O&T Expansion Eden";
		_generalMacro="SCF_01_chimney_powered_G";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_SCF_01_chimney_powered_G0";
		class EventHandlers
		{
			class Globe_Smokestack4EH
			{
				postInit="(_this # 0) call compile preprocessFileLineNumbers '\a3\structures_f_globe\Industrial\Smokestacks\Scripts\Smokestack_SCF.sqf';";
				killed="deleteVehicle ((_this # 0) getVariable 'Globe_effects');";
				deleted="deleteVehicle ((_this # 0) getVariable 'Globe_effects');";
				unregisteredFromWorld3DEN="deleteVehicle ((_this # 0) getVariable 'Globe_effects');";
			};
		};
	};
};
