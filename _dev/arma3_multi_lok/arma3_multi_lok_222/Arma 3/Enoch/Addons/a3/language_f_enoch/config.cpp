class CfgPatches
{
	class A3_Language_F_Enoch
	{
		author="$STR_A3_Bohemia_Interactive";
		name="Arma 3 Contact Platform - Texts and Translations";
		url="https://www.arma3.com";
		requiredAddons[]=
		{
			"A3_Data_F_Enoch"
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
		class PremiumEnoch
		{
			displayName="$STR_A3_C_CfgHints_PremiumEnoch_name";
			description="$STR_A3_C_CfgHints_PremiumEnoch_desc";
			tip="$STR_A3_CfgHints_PremiumContent_PremiumKarts2";
			arguments[]=
			{
				"""<img size='9' shadow='0' image='A3\Data_F_Enoch\Images\enoch_fm_overview_co' />"""
			};
			image="\A3\Data_F_Enoch\Logos\arma3_enoch_hint_icon_ca";
			logicalOrder=10;
		};
		class OptionalDLC
		{
			displayName="$STR_A3_C_CfgHints_OptionalDLC_name";
			description="$STR_A3_C_CfgHints_OptionalDLC_desc";
			tip="$STR_A3_C_CfgHints_OptionalDLC_tip";
			arguments[]={};
			image="\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder=3;
		};
	};
	class WeaponList
	{
		class MSBS65
		{
			displayName="%11";
			description="%12";
			tip="";
			arguments[]=
			{
				
				{
					"STR_A3_C_CFGWEAPONS_ARIFLE_MSBS65_F0"
				},
				
				{
					"STR_A3_C_CfgMods_Enoch_CB_LDFAssaultRifle_desc"
				}
			};
			image="\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			dlc=1021790;
			logicalOrder=21;
			weapon="arifle_MSBS65_UBS_F";
		};
		class HunterShotgun_01
		{
			displayName="%11";
			description="%12";
			tip="";
			arguments[]=
			{
				
				{
					"STR_A3_C_CFGWEAPONS_SGUN_HUNTERSHOTGUN_01_F0"
				},
				
				{
					"STR_A3_C_CfgMods_Enoch_CB_HunterShotgun_desc"
				}
			};
			image="\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			dlc=1021790;
			logicalOrder=6;
			weapon="sgun_HunterShotgun_01_F";
		};
		class ESD_01
		{
			displayName="%11";
			description="%12";
			tip="";
			arguments[]=
			{
				
				{
					"STR_A3_C_CFGWEAPONS_HGUN_ESD_01_F0"
				},
				
				{
					"STR_A3_C_CfgMods_Contact_CB_SpectrumDevice_desc"
				}
			};
			image="\a3\data_f_enoch\logos\arma3_enoch_hint_icon_ca.paa";
			dlc=1021790;
			logicalOrder=27;
			weapon="hgun_esd_01_F";
		};
	};
	class VehicleList
	{
		class UGV_02
		{
			displayName="%11";
			description="%12";
			tip="";
			arguments[]=
			{
				
				{
					"STR_A3_C_CfgMods_Enoch_CB_MiniUGV_name"
				},
				
				{
					"STR_A3_C_CfgMods_Enoch_CB_MiniUGV_desc"
				}
			};
			image="\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			dlc=1021790;
			vehicle="B_UGV_02_Science_F";
			modelScale=4;
			logicalOrder=26;
		};
		class Tractor_01
		{
			displayName="%11";
			description="%12";
			tip="";
			arguments[]=
			{
				
				{
					"STR_A3_C_CfgMods_Enoch_CB_Tractor_name"
				},
				
				{
					"STR_A3_C_CfgMods_Enoch_CB_Tractor_desc"
				}
			};
			image="\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			dlc=1021790;
			vehicle="C_Tractor_01_F";
			modelScale=1;
			logicalOrder=39;
		};
	};
	class DlcMessage
	{
		class Dlc1021790
		{
			displayName="$STR_A3_C_CfgMods_Enoch_name";
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
			image="\A3\Data_F_Enoch\Logos\arma3_enoch_hint_icon_ca";
			dlc=-1;
		};
		class Dlc1021790FM
		{
			displayName="$STR_A3_C_CfgMods_Enoch_name";
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
			image="\A3\Data_F_Enoch\Logos\arma3_enoch_hint_icon_ca";
			dlc=-1;
		};
	};
};
