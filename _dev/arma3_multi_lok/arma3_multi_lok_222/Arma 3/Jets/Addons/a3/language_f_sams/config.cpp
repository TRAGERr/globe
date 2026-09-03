class CfgPatches
{
	class A3_Language_F_Sams
	{
		author="$STR_A3_Bohemia_Interactive";
		name="Arma 3 Sams - Texts and Translations";
		url="https://www.arma3.com";
		requiredAddons[]=
		{
			"A3_Data_F_Sams"
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
		class Radar_System_01
		{
			displayName="%11";
			description="%12";
			tip="";
			arguments[]=
			{
				
				{
					"STR_A3_Radar_System_01_name"
				},
				
				{
					"STR_A3_Radar_System_01_hint_description"
				}
			};
			image="\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			vehicle="B_Radar_System_01_F";
			dlc=601670;
			logicalOrder=45;
		};
		class Radar_System_02
		{
			displayName="%11";
			description="%12";
			tip="";
			arguments[]=
			{
				
				{
					"STR_A3_Radar_System_02_name"
				},
				
				{
					"STR_A3_Radar_System_02_hint_description"
				}
			};
			image="\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			vehicle="O_Radar_System_02_F";
			dlc=601670;
			logicalOrder=46;
		};
		class SAM_System_03
		{
			displayName="%11";
			description="%12";
			tip="";
			arguments[]=
			{
				
				{
					"STR_A3_SAM_System_03_name"
				},
				
				{
					"STR_A3_SAM_System_03_hint_description"
				}
			};
			image="\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			vehicle="B_SAM_System_03_F";
			dlc=601670;
			logicalOrder=47;
		};
		class SAM_System_04
		{
			displayName="%11";
			description="%12";
			tip="";
			arguments[]=
			{
				
				{
					"STR_A3_SAM_System_04_name"
				},
				
				{
					"STR_A3_SAM_System_04_hint_description"
				}
			};
			image="\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			vehicle="O_SAM_System_04_F";
			dlc=601670;
			logicalOrder=48;
		};
	};
};
