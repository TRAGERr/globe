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
			"Land_ChickenCoop_01_poultry"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
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
};
