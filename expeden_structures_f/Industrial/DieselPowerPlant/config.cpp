class CfgPatches
{
	class Structures_Globe_Industrial_DieselPowerPlant
	{
		addonRootClass="A3_Structures_F_Globe";
		requiredAddons[]=
		{
			"Structures_Globe_Industrial"
		};
		requiredVersion=0.1;
		units[]=
		{
			"DPP_01_transformer_G_on",
			"DPP_transformer_G_on"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Land_DPP_01_transformer_F;
	class Land_dp_transformer_F;
	class DPP_transformer_G_on: Land_dp_transformer_F
	{
		author="O&T Expansion Eden";
		_generalMacro="DPP_transformer_G_on";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_DPP_transformer_G_on0";
		class EventHandlers
		{
			class Globe_DPP
			{
				postInit="_this call expEden_fnc_createSoundSetSource; _this spawn expEden_fnc_shortArcZapTransformer;";
				killed="deleteVehicle [((_this # 0) getVariable 'Globe_soundSource'), ((_this # 0) getVariable 'Globe_TrnsfrTrg')];";
				deleted="deleteVehicle [((_this # 0) getVariable 'Globe_soundSource'), ((_this # 0) getVariable 'Globe_TrnsfrTrg')];";
				unregisteredFromWorld3DEN="deleteVehicle [((_this # 0) getVariable 'Globe_soundSource'), ((_this # 0) getVariable 'Globe_TrnsfrTrg')];";
			};
		};
	};
	class DPP_01_transformer_G_on: Land_DPP_01_transformer_F
	{
		author="O&T Expansion Eden";
		_generalMacro="DPP_01_transformer_G_on";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_DPP_01_transformer_G_on0";
		class EventHandlers
		{
			class Globe_DPP_01
			{
				postInit="_this call expEden_fnc_createSoundSetSource; _this spawn expEden_fnc_shortArcZapTransformer;";
				killed="deleteVehicle [((_this # 0) getVariable 'Globe_soundSource'), ((_this # 0) getVariable 'Globe_TrnsfrTrg')];";
				deleted="deleteVehicle [((_this # 0) getVariable 'Globe_soundSource'), ((_this # 0) getVariable 'Globe_TrnsfrTrg')];";
				unregisteredFromWorld3DEN="deleteVehicle [((_this # 0) getVariable 'Globe_soundSource'), ((_this # 0) getVariable 'Globe_TrnsfrTrg')];";
			};
		};
	};
};
