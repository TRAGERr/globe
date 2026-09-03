class CfgPatches
{
	class A3_Language_F_AoW
	{
		author="$STR_A3_Bohemia_Interactive";
		name="Arma 3 Art of War - Texts and Translations";
		url="https://www.arma3.com";
		requiredAddons[]=
		{
			"A3_Data_F_AoW"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgHints
{
	class PremiumContent
	{
		class PremiumAoW
		{
			displayName="$STR_A3_aow_cfgmods_namedlc";
			description="$STR_A3_aow_cfghints_premiumaow_description";
			tip="$STR_A3_CfgHints_PremiumContent_PremiumKarts2";
			arguments[]=
			{
				
				{
					"STR_A3_aow_cfgmods_overview"
				},
				"""<img size='9' shadow='0' image='A3\Data_F_AoW\Images\aow_fm_overview_co' />""",
				"""http://steamcommunity.com/stats/107410/achievements"""
			};
			image="\A3\Data_F_AoW\Logos\arma3_aow_hint_icon_ca";
			logicalOrder=12;
		};
	};
	class DlcMessage
	{
		class Dlc1325500
		{
			displayName="$STR_A3_aow_cfgmods_name";
			description="$STR_A3_CFGHINTS_DLCMESSAGE_DLC2885201";
			tip="$STR_A3_CFGHINTS_DLCMESSAGE_DLC28852002";
			arguments[]=
			{
				
				{
					
					{
						"OpenDlcScreen"
					}
				}
			};
			image="\A3\Data_F_AoW\Logos\arma3_aow_hint_icon_ca";
			dlc=-1;
		};
		class Dlc1325500FM
		{
			displayName="$STR_A3_aow_cfgmods_name";
			description="$STR_A3_CFGHINTS_DLCMESSAGE_DLC2885201";
			tip="$STR_A3_CFGHINTS_DLCMESSAGE_DLC28852002";
			arguments[]=
			{
				
				{
					
					{
						"OpenDlcScreen"
					}
				}
			};
			image="\A3\Data_F_AoW\Logos\arma3_aow_hint_icon_ca";
			dlc=-1;
		};
	};
};
