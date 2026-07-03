class CfgPatches
{
	class Structures_Globe_Industrial_PowerLines
	{
		addonRootClass="A3_Structures_F_Globe";
		requiredAddons[]=
		{
			"Structures_Globe_Industrial"
		};
		requiredVersion=0.1;
		units[]=
		{
			"PowerLine_01_pole_transformer_G_on",
			"PowLines_Transformer_G_on"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Land_PowerLine_01_pole_transformer_F;
	class Land_PowLines_Transformer_F;
	class PowLines_Transformer_G_on: Land_PowLines_Transformer_F
	{
		author="O&T Expansion Eden";
		_generalMacro="PowLines_Transformer_G_on";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_PowLines_Transformer_G_on0";
		class EventHandlers
		{
			class Globe_DPP
			{
				postInit="_this call expEden_fnc_createSoundSetSource";
				killed="deleteVehicle ((_this # 0) getVariable 'Globe_soundSource');";
				deleted="deleteVehicle ((_this # 0) getVariable 'Globe_soundSource');";
				unregisteredFromWorld3DEN="deleteVehicle ((_this # 0) getVariable 'Globe_soundSource');";
			};
		};
	};
	class PowerLine_01_pole_transformer_G_on: Land_PowerLine_01_pole_transformer_F
	{
		author="O&T Expansion Eden";
		_generalMacro="Land_PowerLine_01_pole_transformer_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_PowerLine_01_pole_transformer_G_on0";
		class EventHandlers
		{
			class Globe_VL
			{
				postInit="_this call expEden_fnc_createSoundSetSource";
				killed="deleteVehicle ((_this # 0) getVariable 'Globe_soundSource');";
				deleted="deleteVehicle ((_this # 0) getVariable 'Globe_soundSource');";
				unregisteredFromWorld3DEN="deleteVehicle ((_this # 0) getVariable 'Globe_soundSource');";
			};
		};
	};
};
