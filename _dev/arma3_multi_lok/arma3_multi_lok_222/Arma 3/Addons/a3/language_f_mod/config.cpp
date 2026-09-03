class CfgPatches
{
	class A3_Language_F_Mod
	{
		author="$STR_A3_Bohemia_Interactive";
		name="Arma 3 Official Mod - Texts and Translations";
		url="https://www.arma3.com";
		requiredAddons[]=
		{
			"A3_Data_F_Mod"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgHints
{
	class WeaponList
	{
		class SMG_03
		{
			displayName="%11";
			description="%12";
			tip="";
			arguments[]=
			{
				
				{
					"STR_A3_CfgWeapons_SMG_03_TR_BASE0"
				},
				
				{
					"STR_A3_CfgWeapons_SMG_03_TR_BASE_Library0"
				}
			};
			image="\a3\ui_f\data\gui\cfg\hints\Rifles_ca.paa";
			weapon="SMG_03_TR_black";
			logicalOrder=3;
		};
	};
};
