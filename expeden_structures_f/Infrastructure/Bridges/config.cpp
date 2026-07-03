class CfgPatches
{
	class Structures_Globe_Infrastructure_Bridges
	{
		addonRootClass="A3_Structures_F_Globe";
		requiredAddons[]=
		{
			"A3_Structures_F_Globe_Infrastructure"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Bridge_PathLod_base_F;
	class Land_Bridge_01_PathLod_F: Bridge_PathLod_base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_Bridge_01_PathLod_F0";
		icon="iconObject_1x3";
		vehicleClass="Helpers";
	};
	class Land_Bridge_Asphalt_PathLod_F: Bridge_PathLod_base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_Bridge_Asphalt_PathLod_F0";
		icon="iconObject_1x3";
		vehicleClass="Helpers";
	};
	class Land_Bridge_Concrete_PathLod_F: Bridge_PathLod_base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_Bridge_Concrete_PathLod_F0";
		icon="iconObject_1x3";
		vehicleClass="Helpers";
	};
	class Land_Bridge_HighWay_PathLod_F: Bridge_PathLod_base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_Bridge_HighWay_PathLod_F0";
		icon="iconObject_1x3";
		vehicleClass="Helpers";
	};
};
