class CfgPatches
{
	class A3_Language_F_expEden
	{
		author="Trager";
		name="O&T Expansion Eden - Texts and Translations";
		url="https://steamcommunity.com/workshop/filedetails/?id=1923321700";
		requiredAddons[]=
		{
			"A3_expEden"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgHints
{
	class GlobeMod
	{
		displayName="$STR_Globe_CfgHints_GlobeMod_displayName";
		logicalOrder=65;
		category="Product";
		class GlobeAssets
		{
			displayName="$STR_Globe_CfgHints_GlobeAssets_displayName";
			description="$STR_Globe_CfgHints_GlobeAssets_description";
			tip="";
			arguments[]={};
			image="\A3\expEden\Data\Logos\Arma3_Globe_Picture_Hint_ca.paa";
			logicalOrder=1;
		};
	};
	class ExplosivesList
	{
		class GlobeTrainingMine
		{
			displayName="%11";
			description="%12";
			tip="";
			arguments[]=
			{
				
				{
					"STR_Globe_CfgMagazines_FlareTripMine_Wire_Mag0"
				},
				
				{
					"STR_Globe_CfgMagazines_FlareTripMine_Wire_Library0"
				}
			};
			image="\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			dlc="Globe";
			logicalOrder=13;
			ammo="FlareTripMine_Wire_Ammo";
			modelScale=0.40000001;
		};
		class GlobeThrowableAntiTankMine
		{
			displayName="%11";
			description="%12";
			tip="";
			arguments[]=
			{
				
				{
					"STR_Globe_CfgMagazines_HandGrenadeATMine_dn"
				},
				
				{
					"STR_Globe_CfgHints_HandGrenadeATMine"
				}
			};
			image="\a3\ui_f\data\gui\cfg\hints\Grenades_ca.paa";
			logicalOrder=17;
			ammo="GrenadeHandATMine";
		};
	};
	class VehicleList
	{
		class UAV_LM_G
		{
			displayName="$STR_Globe_CfgVehicles_B_UAV_02_LM_G0";
			description="$STR_Globe_CfgVehicles_B_UAV_02_LM_G1";
			tip="$STR_Globe_CfgVehicles_B_UAV_02_LM_G2";
			arguments[]={};
			image="\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			vehicle="B_UAV_02_LM_G";
			modelScale=1.2;
		};
	};
	class GenevaConvention_G
	{
		displayName="$STR_Globe_CfgHints_GenevaConvention0";
		category="LOAC";
		logicalOrder=3;
		class Article41
		{
			displayName="$STR_Globe_CfgHints_GenevaConvention_Article41_dn";
			displayNameShort="$STR_Globe_CfgHints_GenevaConvention_Article41_dns";
			description="$STR_Globe_CfgHints_GenevaConvention_Article41_d";
			tip="$STR_Globe_CfgHints_GenevaConvention_Article41_t";
			arguments[]={};
			image="\a3\ui_f_orange\data\cfghints\loac_ca.paa";
			noImage=0;
			class hint
			{
				displayName="$STR_Globe_CfgHints_GenevaConvention_Article41_hint_dn";
				displayNameShort="$STR_A3_orange_faction_idap_fm_filter_low";
				description="$STR_Globe_CfgHints_GenevaConvention_Article41_hint_d";
				tip="$STR_Globe_CfgHints_GenevaConvention_Article41_hint_t";
				arguments[]={};
				image="\a3\ui_f_orange\data\cfghints\loac_ca.paa";
				noImage=0;
			};
			logicalOrder=1;
		};
		class Article42
		{
			displayName="$STR_Globe_CfgHints_GenevaConvention_Article42_dn";
			displayNameShort="$STR_Globe_CfgHints_GenevaConvention_Article42_dns";
			description="$STR_Globe_CfgHints_GenevaConvention_Article42_d";
			tip="$STR_Globe_CfgHints_GenevaConvention_Article42_t";
			arguments[]={};
			image="\a3\ui_f_orange\data\cfghints\loac_ca.paa";
			noImage=0;
			class hint
			{
				displayName="$STR_Globe_CfgHints_GenevaConvention_Article42_hint_dn";
				displayNameShort="$STR_A3_orange_faction_idap_fm_filter_low";
				description="$STR_Globe_CfgHints_GenevaConvention_Article42_hint_d";
				tip="$STR_Globe_CfgHints_GenevaConvention_Article42_hint_t";
				arguments[]={};
				image="\a3\ui_f_orange\data\cfghints\loac_ca.paa";
				noImage=0;
			};
			logicalOrder=2;
		};
		class Article51
		{
			displayName="$STR_Globe_CfgHints_GenevaConvention_Article51_dn";
			displayNameShort="$STR_Globe_CfgHints_GenevaConvention_Article51_dns";
			description="$STR_Globe_CfgHints_GenevaConvention_Article51_d";
			tip="$STR_Globe_CfgHints_GenevaConvention_Article51_t";
			arguments[]={};
			image="\a3\ui_f_orange\data\cfghints\loac_ca.paa";
			noImage=0;
			class hint
			{
				displayName="$STR_Globe_CfgHints_GenevaConvention_Article51_hint_dn";
				displayNameShort="$STR_A3_orange_faction_idap_fm_filter_low";
				description="$STR_Globe_CfgHints_GenevaConvention_Article51_hint_d";
				tip="$STR_Globe_CfgHints_GenevaConvention_Article51_hint_t";
				arguments[]={};
				image="\a3\ui_f_orange\data\cfghints\loac_ca.paa";
				noImage=0;
			};
			logicalOrder=3;
		};
		class Article52
		{
			displayName="$STR_Globe_CfgHints_GenevaConvention_Article52_dn";
			displayNameShort="$STR_Globe_CfgHints_GenevaConvention_Article52_dns";
			description="$STR_Globe_CfgHints_GenevaConvention_Article52_d";
			tip="$STR_Globe_CfgHints_GenevaConvention_Article52_t";
			arguments[]={};
			image="\a3\ui_f_orange\data\cfghints\loac_ca.paa";
			noImage=0;
			class hint
			{
				displayName="$STR_Globe_CfgHints_GenevaConvention_Article52_hint_dn";
				displayNameShort="$STR_A3_orange_faction_idap_fm_filter_low";
				description="$STR_Globe_CfgHints_GenevaConvention_Article52_hint_d";
				tip="$STR_Globe_CfgHints_GenevaConvention_Article52_hint_t";
				arguments[]={};
				image="\a3\ui_f_orange\data\cfghints\loac_ca.paa";
				noImage=0;
			};
			logicalOrder=4;
		};
		class Article53
		{
			displayName="$STR_Globe_CfgHints_GenevaConvention_Article53_dn";
			displayNameShort="$STR_a3_showcase_future_mission_name";
			description="$STR_Globe_CfgHints_GenevaConvention_Article53_d";
			tip="$STR_Globe_CfgHints_GenevaConvention_Article53_t";
			arguments[]={};
			image="\a3\ui_f_orange\data\cfghints\loac_ca.paa";
			noImage=0;
			class hint
			{
				displayName="$STR_Globe_CfgHints_GenevaConvention_Article53_hint_dn";
				displayNameShort="$STR_A3_orange_faction_idap_fm_filter_low";
				description="$STR_Globe_CfgHints_GenevaConvention_Article53_hint_d";
				tip="$STR_Globe_CfgHints_GenevaConvention_Article53_hint_t";
				arguments[]={};
				image="\a3\ui_f_orange\data\cfghints\loac_ca.paa";
				noImage=0;
			};
			logicalOrder=5;
		};
	};
	class ClusterConvention_G
	{
		displayName="$STR_Globe_CfgHints_ClusterConvention0";
		category="LOAC";
		logicalOrder=4;
		class Article1
		{
			displayName="$STR_Globe_CfgHints_ClusterConvention_Article1_dn";
			displayNameShort="$STR_a3_orange_cfgMods_clusterMunitions_displayName";
			description="$STR_Globe_CfgHints_ClusterConvention_Article1_d";
			tip="$STR_Globe_CfgHints_ClusterConvention_Article1_t";
			arguments[]={};
			image="\a3\ui_f_orange\data\cfghints\loac_ca.paa";
			noImage=0;
			class hint
			{
				displayName="$STR_Globe_CfgHints_ClusterConvention_Article1_hint_dn";
				displayNameShort="$STR_A3_orange_faction_idap_fm_filter_low";
				description="$STR_Globe_CfgHints_ClusterConvention_Article1_hint_d";
				tip="$STR_Globe_CfgHints_ClusterConvention_Article1_hint_t";
				arguments[]={};
				image="\a3\ui_f_orange\data\cfghints\loac_ca.paa";
				noImage=0;
			};
			logicalOrder=1;
		};
	};
	class OttawaTreaty_G
	{
		displayName="$STR_Globe_CfgHints_OttawaTreaty0";
		category="LOAC";
		logicalOrder=5;
		class Article3
		{
			displayName="$STR_Globe_CfgHints_OttawaTreaty_Article3_dn";
			displayNameShort="$STR_Globe_CfgHints_OttawaTreaty_Article3_dns";
			description="$STR_Globe_CfgHints_OttawaTreaty_Article3_d";
			tip="$STR_Globe_CfgHints_OttawaTreaty_Article3_t";
			arguments[]={};
			image="\a3\ui_f_orange\data\cfghints\loac_ca.paa";
			noImage=0;
			class hint
			{
				displayName="$STR_Globe_CfgHints_OttawaTreaty_Article3_hint_dn";
				displayNameShort="$STR_A3_orange_faction_idap_fm_filter_low";
				description="$STR_Globe_CfgHints_OttawaTreaty_Article3_hint_d";
				tip="$STR_Globe_CfgHints_OttawaTreaty_Article3_hint_t";
				arguments[]={};
				image="\a3\ui_f_orange\data\cfghints\loac_ca.paa";
				noImage=0;
			};
			logicalOrder=1;
		};
	};
};
class CfgVehicles
{
	class All
	{
		class EventHandlers
		{
			class Globe_showLoW
			{
				postInit="['postInit',_this # 0] call expEden_fnc_showLawOfWar";
			};
		};
	};
};
class CfgWeapons
{
	class Default;
	class CannonCore: Default
	{
		class EventHandlers
		{
			class Globe_showLoW
			{
				fired="['firedCluster',_this] call expEden_fnc_showLawOfWar";
			};
		};
	};
	class Put: Default
	{
		class PutMuzzle;
		class ClassicMineRangeMuzzle: PutMuzzle
		{
			class EventHandlers
			{
				class Globe_showLoW
				{
					fired="['firedMine',_this] call expEden_fnc_showLawOfWar";
				};
			};
		};
	};
};