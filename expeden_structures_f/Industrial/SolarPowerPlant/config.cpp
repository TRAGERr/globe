class CfgPatches
{
	class Structures_Globe_Industrial_SolarPowerPlant
	{
		addonRootClass="A3_Structures_F_Globe";
		requiredAddons[]=
		{
			"Structures_Globe_Industrial"
		};
		requiredVersion=0.1;
		units[]=
		{
			"SPP_transformer_G_on"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Land_spp_Transformer_F;
	class Land_spp_Tower_F;
	class Land_spp_Tower_dam_F: Land_spp_Tower_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_spp_Tower_dam_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_spp_Tower_dam_F0";
	};
	class SPP_transformer_G_on: Land_spp_Transformer_F
	{
		author="O&T Expansion Eden";
		_generalMacro="SPP_transformer_G_on";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_SPP_transformer_G_on0";
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
};
