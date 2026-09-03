class CfgPatches
{
	class A3_Language_F_Decade
	{
		author="$STR_A3_Bohemia_Interactive";
		name="CFGPATCHES_A3_Language_F_Decade";
		url="https://www.arma3.com";
		requiredAddons[]=
		{
			"A3_Language_F"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgHints
{
	class VehicleList
	{
		class opforMbt_railgun
		{
			displayName="%11";
			description="%12";
			tip="";
			arguments[]=
			{
				
				{
					"STR_A3_cfgvehicles_mbt_02_railgun_base_f0"
				},
				
				{
					"STR_A3_cfgvehicles_mbt_02_railgun_base_library0"
				}
			};
			image="\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			vehicle="O_MBT_02_railgun_F";
			modelScale=1;
			logicalOrder=37;
		};
	};
};
