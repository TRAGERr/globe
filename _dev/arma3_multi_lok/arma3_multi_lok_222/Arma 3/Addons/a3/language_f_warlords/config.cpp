class CfgPatches
{
	class A3_Language_F_Warlords
	{
		author="$STR_A3_Bohemia_Interactive";
		name="Arma 3 Warlords - Texts and Translations";
		url="https://www.arma3.com";
		requiredAddons[]=
		{
			"A3_Language_F_Tank"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgHints
{
	class WarlordsUpdate
	{
		category="Product";
		displayName="$STR_A3_WL_modUpdate";
		logicalOrder=15;
		class Warlords
		{
			arguments[]=
			{
				
				{
					"<img size='9' shadow='0' color='#ffffff' image='A3\Data_F_Warlords\Data\wl_logo_ca.paa' />"
				}
			};
			displayName="$STR_A3_WL_modName";
			description="$STR_A3_WL_modDescription";
			image="\a3\ui_f\data\gui\cfg\hints\Commanding_ca.paa";
		};
	};
};
