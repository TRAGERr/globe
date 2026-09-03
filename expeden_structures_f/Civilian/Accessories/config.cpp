class CfgPatches
{
	class Structures_Globe_Civilian_Accessories
	{
		addonRootClass="A3_Structures_F_Globe";
		requiredAddons[]=
		{
			"A3_Structures_F_Globe_Civilian"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Land_AirconCondenser_01_G_on",
			"Land_AirconCondenser_02_rust_G",
			"Land_AirconCondenser_02_rust_G_on",
			"Land_ChickenCoop_01_poultry"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Barracks_acc_proxy_4;
	class House_Small_F;
	class Land_Loudspeakers_F;
	class Land_Water_source_F;
	class Land_ChickenCoop_01_F;
	class Land_ChickenCoop_01_poultry: Land_ChickenCoop_01_F
	{
		author="O&T Expansion Eden";
		_generalMacro="Land_ChickenCoop_01_poultry";
		displayName="$STR_Globe_CfgVehicles_ChickenCoop_01_poultry0";
		class EventHandlers
		{
			postInit="_this call expEden_fnc_chickenCoopPoultry";
			killed="deleteVehicle ((_this # 0) getVariable 'Globe_soundSource');";
			deleted="deleteVehicle ((_this # 0) getVariable 'Globe_soundSource');";
			unregisteredFromWorld3DEN="deleteVehicle ((_this # 0) getVariable 'Globe_soundSource');";
		};
	};
	class Water_source_on: Land_Water_source_F
	{
		scope=1;
		author="O&T Expansion Eden";
		_generalMacro="Water_source_on";
		displayName="$STR_A3_CfgVehicles_Land_Water_source_F0";
		class EventHandlers
		{
			postInit="_this call expEden_fnc_waterSource";
			killed="deleteVehicle ((_this # 0) getVariable 'Globe_waterSourceObjects');";
			deleted="deleteVehicle ((_this # 0) getVariable 'Globe_waterSourceObjects');";
			unregisteredFromWorld3DEN="deleteVehicle ((_this # 0) getVariable 'Globe_waterSourceObjects');";
		};
	};
	class Land_Loudspeakers_AAF: Land_Loudspeakers_F
	{
		scope=1;
		author="O&T Expansion Eden";
		_generalMacro="Land_Loudspeakers_AAF";
		displayName="$STR_Globe_CfgVehicles_Land_Loudspeakers_AAF0";
		vehicleClass="Structures_Military";
		class EventHandlers
		{
			postInit="_this spawn expEden_fnc_chickenCoopPoultry";
		};
	};
	class Land_AirconCondenser_01_G_on: House_Small_F
	{
		author="O&T Expansion Eden";
		mapSize=0.83999997;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.42399999;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Land_AirconCondenser_01_F.jpg";
		_generalMacro="Land_AirconCondenser_01_G_on";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_AirconCondenser_01_G_on0";
		model="\A3\Structures_F_Heli\Civ\Accessories\AirconCondenser_01_F.p3d";
		icon="iconObject_1x2";
		editorCategory="EdCat_Things";
		editorSubcategory="EdSubcat_Electronics";
		vehicleClass="Structures_Town";
		destrType="DestructNo";
		cost=1000;
		class DestructionEffects
		{
		};
		class EventHandlers
		{
			postInit="_this call expEden_fnc_createSoundSetSource";
			killed="deleteVehicle ((_this # 0) getVariable 'Globe_soundSource');";
			deleted="deleteVehicle ((_this # 0) getVariable 'Globe_soundSource');";
			unregisteredFromWorld3DEN="deleteVehicle ((_this # 0) getVariable 'Globe_soundSource');";
		};
	};
	class Land_AirconCondenser_02_rust_G: Barracks_acc_proxy_4
	{
		scope=2;
		scopeCurator=0;
	};
	class Land_AirconCondenser_02_rust_G_on: House_Small_F
	{
		author="O&T Expansion Eden";
		mapSize=0.84;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.424;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Barracks_acc_proxy_4.jpg";
		_generalMacro="Land_AirconCondenser_02_rust_G_on";
		scope=2;
		scopeCurator=1;
		displayName="$STR_Globe_CfgVehicles_Land_AirconCondenser_02_rust_G_on0";
		model="\A3\structures_f\mil\Barracks\Barracks_acc_proxy_4_F.p3d";
		icon="iconObject_1x2";
		editorCategory="EdCat_Things";
		editorSubcategory="EdSubcat_Electronics";
		vehicleClass="Structures_Town";
		destrType="DestructNo";
		cost=1000;
		class DestructionEffects
		{
		};
		class EventHandlers
		{
			postInit="_this call expEden_fnc_createSoundSetSource";
			killed="deleteVehicle ((_this # 0) getVariable 'Globe_soundSource');";
			deleted="deleteVehicle ((_this # 0) getVariable 'Globe_soundSource');";
			unregisteredFromWorld3DEN="deleteVehicle ((_this # 0) getVariable 'Globe_soundSource');";
		};
	};
};
