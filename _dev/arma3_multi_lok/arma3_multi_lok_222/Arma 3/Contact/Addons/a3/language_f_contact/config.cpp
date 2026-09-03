class CfgPatches
{
	class A3_Language_F_Contact
	{
		author="$STR_A3_Bohemia_Interactive";
		name="Arma 3 Contact - Texts and Translations";
		url="https://www.arma3.com";
		requiredAddons[]=
		{
			"A3_Data_F_Contact"
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
		class PremiumContact
		{
			displayName="$STR_A3_C_CfgHints_PremiumContact_name";
			description="$STR_A3_C_CfgHints_PremiumContact_desc";
			tip="$STR_A3_CfgHints_PremiumContent_PremiumKarts2";
			arguments[]=
			{
				"""<img size='9' shadow='0' image='A3\Data_F_Contact\Images\contact_fm_overview_co' />"""
			};
			image="\a3\data_f_contact\logos\icon_hint_ca.paa";
			logicalOrder=11;
		};
	};
	class ElectronicWarfare
	{
		displayName="$STR_A3_C_CfgHints_ElectronicWarfare_name";
		logicalOrder=25;
		class Overview
		{
			displayName="$STR_A3_C_CfgHints_Overview_name";
			description="$STR_A3_C_CfgHints_ElectronicWarfare_desc";
			tip="$STR_A3_C_CfgHints_ElectronicWarfare_tip";
			arguments[]={};
			image="\a3\ui_f_contact\data\gui\cfg\hints\ew_ca.paa";
			logicalOrder=1;
			class Hint
			{
				displayName="$STR_A3_C_CfgHints_ElectronicWarfare_name";
				description="$STR_A3_C_CfgHints_ElectronicWarfare_desc";
				tip="$STR_A3_C_CfgHints_ElectronicWarfare_tip";
				arguments[]={};
				image="\a3\ui_f_contact\data\gui\cfg\hints\ew_ca.paa";
			};
		};
		class Spectrum
		{
			displayName="$STR_A3_C_CfgHints_Spectrum_name";
			description="$STR_A3_C_CfgHints_Spectrum_desc";
			tip="$STR_A3_C_CfgHints_Spectrum_tip";
			arguments[]={};
			image="\a3\ui_f_contact\data\gui\cfg\hints\ew_ca.paa";
			logicalOrder=2;
		};
		class SignalStrength
		{
			displayName="$STR_A3_C_CfgHints_SignalStrength_name";
			description="$STR_A3_C_CfgHints_SignalStrength_desc";
			tip="$STR_A3_C_CfgHints_SignalStrength_tip";
			arguments[]={};
			image="\a3\ui_f_contact\data\gui\cfg\hints\signal_strength_ca.paa";
			logicalOrder=3;
			class Hint
			{
				displayName="$STR_A3_C_CfgHints_SignalStrength_name";
				description="$STR_A3_C_CfgHints_SignalStrength_desc_hint";
				tip="$STR_A3_C_CfgHints_SignalStrength_tip";
				arguments[]={};
				image="\a3\ui_f_contact\data\gui\cfg\hints\signal_strength_ca.paa";
			};
		};
		class SpectrumDevice
		{
			displayName="$STR_A3_C_CfgHints_SpectrumDevice_name";
			description="$STR_A3_C_CfgHints_SpectrumDevice_desc";
			tip="$STR_A3_C_CfgHints_SpectrumDevice_tip";
			arguments[]=
			{
				
				{
					
					{
						"switchHandgun"
					}
				},
				
				{
					
					{
						"optics"
					}
				},
				
				{
					
					{
						"reloadMagazine"
					}
				},
				
				{
					
					{
						"headlights"
					}
				}
			};
			image="\a3\data_f_contact\logos\icon_hint_ca.paa";
			logicalOrder=4;
		};
		class SDEquipping
		{
			displayName="$STR_A3_C_CfgHints_SDEquipping_name";
			description="$STR_A3_C_CfgHints_SDEquipping_desc";
			tip="$STR_A3_C_CfgHints_SDEquipping_tip";
			arguments[]=
			{
				
				{
					
					{
						"gear"
					}
				},
				
				{
					
					{
						"switchHandgun"
					}
				},
				
				{
					
					{
						"handgun"
					}
				},
				"""<img size='1' shadow='0' image='A3\Ui_f\data\IGUI\Cfg\Actions\take_ca' />""",
				"""<img size='2' shadow='0' image='A3\Weapons_F_Enoch\Pistols\ESD_01\data\ui\gear_ESD_01_CA' />""",
				""""""
			};
			image="\a3\data_f_contact\logos\icon_hint_ca.paa";
			logicalOrder=5;
			class HintCampaign
			{
				displayName="$STR_A3_C_CfgHints_SDEquipping_name";
				description="$STR_A3_C_CfgHints_SDEquipping_desc";
				tip="$STR_A3_C_CfgHints_SDEquipping_tip";
				arguments[]=
				{
					
					{
						
						{
							"gear"
						}
					},
					
					{
						
						{
							"switchHandgun"
						}
					},
					
					{
						
						{
							"handgun"
						}
					},
					"""<img size='1' shadow='0' image='A3\Ui_f\data\IGUI\Cfg\Actions\take_ca' />""",
					"""<img size='2' shadow='0' image='A3\Weapons_F_Enoch\Pistols\ESD_01\data\ui\gear_ESD_01_CA' />""",
					""""""
				};
				image="\a3\data_f_contact\logos\icon_hint_ca.paa";
			};
		};
		class SDDisplay
		{
			displayName="$STR_A3_C_CfgHints_SDDisplay_name";
			description="$STR_A3_C_CfgHints_SDDisplay_desc";
			tip="$STR_A3_C_CfgHints_SDDisplay_tip";
			arguments[]=
			{
				
				{
					
					{
						"optics"
					}
				},
				"""<img size='1' shadow='0' color='#ff8000' image='\a3\UI_F_Contact\Data\Common\RscHorizontalCompass\compass_currentTask_ca' />""",
				"""<img size='1' shadow='0' color='#ffffff' image='\a3\UI_F_Contact\Data\Common\RscHorizontalCompass\compass_customMark_ca' />""",
				"""<img size='1' shadow='0' color='#ff0000' image='\a3\UI_F_Contact\Data\Common\RscHorizontalCompass\compass_hq_ca' />"""
			};
			image="\a3\data_f_contact\logos\icon_hint_ca.paa";
			logicalOrder=6;
		};
		class SDAntennas
		{
			displayName="$STR_A3_C_CfgHints_SDAntennas_name";
			description="$STR_A3_C_CfgHints_SDAntennas_desc";
			tip="$STR_A3_C_CfgHints_SDAntennas_tip";
			arguments[]=
			{
				
				{
					
					{
						"reloadMagazine"
					}
				},
				"""<img size='1.5' shadow='0' image='A3\Weapons_F_Enoch\Pistols\ESD_01\data\ui\gear_muzzle_antenna_01_ca' />""",
				"""<img size='1.5' shadow='0' image='A3\Weapons_F_Enoch\Pistols\ESD_01\data\ui\gear_muzzle_antenna_02_ca' />""",
				"""<img size='1.5' shadow='0' image='A3\Weapons_F_Enoch\Pistols\ESD_01\data\ui\gear_muzzle_antenna_03_ca' />""",
				""""""
			};
			image="\a3\data_f_contact\logos\icon_hint_ca.paa";
			logicalOrder=7;
			class Hint
			{
				displayName="$STR_A3_C_CfgHints_SDAntennas_name";
				description="$STR_A3_C_CfgHints_SDAntennas_desc_hint";
				tip="$STR_A3_C_CfgHints_SDAntennas_tip";
				arguments[]=
				{
					
					{
						
						{
							"reloadMagazine"
						}
					}
				};
				image="\a3\data_f_contact\logos\icon_hint_ca.paa";
			};
			class HintCampaign
			{
				displayName="$STR_A3_C_CfgHints_SDAntennas_name";
				description="$STR_A3_C_CfgHints_SDAntennas_desc";
				tip="$STR_A3_C_CfgHints_SDAntennas_tip";
				arguments[]=
				{
					
					{
						
						{
							"reloadMagazine"
						}
					},
					"""<img size='1.5' shadow='0' image='A3\Weapons_F_Enoch\Pistols\ESD_01\data\ui\gear_muzzle_antenna_01_ca' />""",
					"""<img size='1.5' shadow='0' image='A3\Weapons_F_Enoch\Pistols\ESD_01\data\ui\gear_muzzle_antenna_02_ca' />""",
					"""<img size='1.5' shadow='0' image='A3\Weapons_F_Enoch\Pistols\ESD_01\data\ui\gear_muzzle_antenna_03_ca' />""",
					""""""
				};
				image="\a3\data_f_contact\logos\icon_hint_ca.paa";
			};
		};
		class Receiving
		{
			displayName="$STR_A3_C_CfgHints_Receiving_name";
			description="$STR_A3_C_CfgHints_Receiving_desc";
			tip="$STR_A3_C_CfgHints_Receiving_tip";
			arguments[]=
			{
				
				{
					
					{
						"optics"
					}
				},
				
				{
					
					{
						"prevAction"
					}
				},
				
				{
					
					{
						"nextAction"
					}
				},
				"['ZeroingDown', 1] call BIN_fnc_getFormattedControl",
				"['ZeroingUp', 1] call BIN_fnc_getFormattedControl"
			};
			image="\a3\ui_f_contact\data\gui\cfg\hints\receiving_signal_ca.paa";
			logicalOrder=8;
		};
		class Transmitting
		{
			displayName="$STR_A3_C_CfgHints_Transmitting_name";
			description="$STR_A3_C_CfgHints_Transmitting_desc";
			tip="$STR_A3_C_CfgHints_Transmitting_tip";
			arguments[]=
			{
				
				{
					
					{
						"prevAction"
					}
				},
				
				{
					
					{
						"nextAction"
					}
				},
				
				{
					
					{
						"defaultAction"
					}
				}
			};
			image="\a3\ui_f_contact\data\gui\cfg\hints\transmitting_signal_ca.paa";
			logicalOrder=9;
		};
		class Selecting
		{
			displayName="$STR_A3_C_CfgHints_Selecting_name";
			description="$STR_A3_C_CfgHints_Selecting_desc";
			tip="$STR_A3_C_CfgHints_Selecting_tip";
			arguments[]=
			{
				
				{
					
					{
						"nextWeapon"
					}
				},
				
				{
					"STR_A3_C_CFGCONTACT_SIGNALSELECTION_DEFAULT"
				},
				
				{
					"STR_A3_C_CFGCONTACT_SIGNALSELECTION_BASE"
				},
				
				{
					"STR_A3_C_CFGCONTACT_SIGNALSELECTION_SQUAD"
				}
			};
			image="\a3\ui_f_contact\data\gui\cfg\hints\selecting_signal_ca.paa";
			logicalOrder=10;
		};
		class Jamming
		{
			displayName="$STR_A3_C_CfgHints_Jamming_name";
			description="$STR_A3_C_CfgHints_Jamming_desc";
			tip="$STR_A3_C_CfgHints_Jamming_tip";
			arguments[]=
			{
				
				{
					
					{
						"defaultAction"
					}
				}
			};
			image="\a3\ui_f_contact\data\gui\cfg\hints\ew_ca.paa";
			logicalOrder=11;
		};
		class Passive
		{
			displayName="$STR_A3_C_CfgHints_Passive_name";
			description="$STR_A3_C_CfgHints_Passive_desc";
			tip="$STR_A3_C_CfgHints_Passive_tip";
			arguments[]={};
			image="\a3\ui_f_contact\data\gui\cfg\hints\ew_ca.paa";
			logicalOrder=12;
		};
		class Intel
		{
			displayName="$STR_A3_C_CfgHints_Intel_name";
			description="$STR_A3_C_CfgHints_Intel_desc";
			tip="$STR_A3_C_CfgHints_Intel_tip";
			arguments[]=
			{
				
				{
					
					{
						"showMap"
					}
				},
				"""<img size='1' shadow='0' image='\a3\UI_F_Contact\Data\RscMapControl\Draw\antenna2_ca.paa' />"""
			};
			image="\a3\ui_f_contact\data\gui\cfg\hints\ew_ca.paa";
			logicalOrder=13;
		};
		class SpectrumMap
		{
			displayName="$STR_A3_C_CfgHints_SpectrumMap_name";
			description="$STR_A3_C_CfgHints_SpectrumMap_desc";
			tip="$STR_A3_C_CfgHints_SpectrumMap_tip";
			arguments[]=
			{
				
				{
					
					{
						"showMap"
					}
				},
				
				{
					
					{
						"zoomIn"
					}
				},
				
				{
					
					{
						"zoomOut"
					}
				},
				"""<img size='1' shadow='0' image='A3\UI_F_Contact\Data\Common\RscMapCategories\categories_spectrum_ca' />""",
				"""<img size='1' shadow='0' image='A3\UI_F_Contact\Data\Common\RscMapCategories\categories_spectrum_ca' />"""
			};
			image="\a3\ui_f_contact\data\gui\cfg\hints\ew_ca.paa";
			logicalOrder=14;
		};
		class ElectronicDeception
		{
			displayName="$STR_A3_C_CfgHints_ElectronicDeception_name";
			description="$STR_A3_C_CfgHints_ElectronicDeception_desc";
			tip="$STR_A3_C_CfgHints_ElectronicDeception_tip";
			arguments[]=
			{
				"""<img size='1' color='#ff0000' shadow='0' image='\a3\UI_F_Contact\Data\Common\RscHorizontalCompass\compass_hq_ca' />"""
			};
			image="\a3\ui_f_contact\data\gui\cfg\hints\ew_ca.paa";
			logicalOrder=15;
		};
		class EDPings
		{
			displayName="$STR_A3_C_CfgHints_EDPings_name";
			description="$STR_A3_C_CfgHints_EDPings_desc";
			tip="$STR_A3_C_CfgHints_EDPings_tip";
			arguments[]=
			{
				
				{
					
					{
						"prevAction"
					}
				},
				
				{
					
					{
						"nextAction"
					}
				},
				
				{
					
					{
						"nextWeapon"
					}
				},
				
				{
					
					{
						"defaultAction"
					}
				},
				
				{
					"STR_A3_C_CFGCONTACT_SIGNALS_EM_PINGREQUEST"
				},
				
				{
					"STR_A3_C_CFGCONTACT_SIGNALSELECTION_DEFAULT"
				}
			};
			image="\a3\ui_f_contact\data\gui\cfg\hints\ew_ca.paa";
			logicalOrder=16;
		};
		class EDHandshakes
		{
			displayName="$STR_A3_C_CfgHints_EDHandshakes_name";
			description="$STR_A3_C_CfgHints_EDHandshakes_desc";
			tip="$STR_A3_C_CfgHints_EDHandshakes_tip";
			arguments[]=
			{
				
				{
					
					{
						"nextWeapon"
					}
				},
				
				{
					
					{
						"defaultAction"
					}
				},
				
				{
					"STR_A3_C_CFGCONTACT_SIGNALSELECTION_BASE"
				},
				
				{
					"STR_A3_C_CFGCONTACT_SIGNALSELECTION_SQUAD"
				}
			};
			image="\a3\ui_f_contact\data\gui\cfg\hints\ew_ca.paa";
			logicalOrder=17;
		};
		class EDOrders
		{
			displayName="$STR_A3_C_CfgHints_EDOrders_name";
			description="$STR_A3_C_CfgHints_EDOrders_desc";
			tip="$STR_A3_C_CfgHints_EDOrders_tip";
			arguments[]=
			{
				
				{
					
					{
						"nextWeapon"
					}
				},
				
				{
					
					{
						"defaultAction"
					}
				},
				
				{
					"STR_A3_C_CfgHints_EDOrders_arg0"
				},
				
				{
					"STR_A3_C_CFGCONTACT_SIGNALS_EM_HQ_POSREP"
				}
			};
			image="\a3\ui_f_contact\data\gui\cfg\hints\ew_ca.paa";
			logicalOrder=18;
			class Hint
			{
				displayName="$STR_A3_C_CfgHints_EDOrders_name";
				description="$STR_A3_C_CfgHints_EDOrders_desc";
				tip="$STR_A3_C_CfgHints_EDOrders_tip";
				arguments[]=
				{
					
					{
						
						{
							"nextWeapon"
						}
					},
					
					{
						
						{
							"defaultAction"
						}
					},
					""""""
				};
				image="\a3\ui_f_contact\data\gui\cfg\hints\ew_ca.paa";
			};
		};
		class DroneInterference
		{
			displayName="$STR_A3_C_CfgHints_DroneInterference_name";
			description="$STR_A3_C_CfgHints_DroneInterference_desc";
			tip="$STR_A3_C_CfgHints_DroneInterference_tip";
			arguments[]={};
			image="\a3\ui_f_contact\data\gui\cfg\hints\ew_ca.paa";
			logicalOrder=19;
		};
		class DroneHacking
		{
			displayName="$STR_A3_C_CfgHints_DroneHacking_name";
			description="$STR_A3_C_CfgHints_DroneHacking_desc";
			tip="$STR_A3_C_CfgHints_DroneHacking_tip";
			arguments[]=
			{
				
				{
					
					{
						"nextWeapon"
					}
				},
				
				{
					
					{
						"defaultAction"
					}
				},
				
				{
					"STR_A3_C_CFGCONTACT_SIGNALS_EM_SEND_HACK_01"
				},
				"""433.76"""
			};
			image="\a3\ui_f_contact\data\gui\cfg\hints\ew_ca.paa";
			logicalOrder=20;
		};
	};
	class CBRN
	{
		displayName="$STR_A3_C_CfgHints_CBRN_name";
		logicalOrder=24;
		class Overview
		{
			displayName="$STR_A3_C_CfgHints_Overview_name";
			description="$STR_A3_C_CfgHints_CBRN_desc";
			tip="$STR_A3_C_CfgHints_CBRN_tip";
			arguments[]={};
			image="\a3\ui_f_contact\data\gui\cfg\hints\cbrn_ca.paa";
			logicalOrder=1;
			class Hint
			{
				displayName="$STR_A3_C_CfgHints_CBRN_name";
				description="$STR_A3_C_CfgHints_CBRN_desc";
				tip="$STR_A3_C_CfgHints_CBRN_tip";
				arguments[]={};
				image="\a3\ui_f_contact\data\gui\cfg\hints\cbrn_ca.paa";
			};
		};
		class ChemicalDetector
		{
			displayName="$STR_A3_C_CfgMods_Enoch_CB_ChemicalDetector_name";
			description="$STR_A3_C_CfgHints_ChemicalDetector_desc";
			tip="$STR_A3_C_CfgHints_ChemicalDetector_tip";
			arguments[]=
			{
				
				{
					
					{
						"watch"
					}
				}
			};
			image="\a3\ui_f_contact\data\gui\cfg\hints\chemical_detector_ca.paa";
			logicalOrder=2;
		};
		class MiniUGV
		{
			displayName="$STR_A3_C_CfgMods_Enoch_CB_MiniUGV_name";
			description="$STR_A3_C_CfgHints_MiniUGV_desc";
			tip="$STR_A3_C_CfgHints_MiniUGV_tip";
			arguments[]=
			{
				
				{
					"STR_A3_C_CfgHints_MiniUGV_arg0"
				},
				
				{
					"STR_A3_C_CfgHints_MiniUGV_arg1"
				}
			};
			image="\a3\ui_f_contact\data\gui\cfg\hints\mini_ugv_ca.paa";
			logicalOrder=3;
			class Hint
			{
				displayName="$STR_A3_C_CfgMods_Enoch_CB_MiniUGV_name";
				description="$STR_A3_C_CfgHints_MiniUGV_desc";
				tip="$STR_A3_C_CfgHints_MiniUGV_tip";
				arguments[]=
				{
					"""""",
					""""""
				};
				image="\a3\ui_f_contact\data\gui\cfg\hints\mini_ugv_ca.paa";
			};
		};
		class MiniUGVArm
		{
			displayName="$STR_A3_C_CfgHints_MiniUGVArm_name";
			description="$STR_A3_C_CfgHints_MiniUGVArm_desc";
			tip="$STR_A3_C_CfgHints_MiniUGVArm_tip";
			arguments[]=
			{
				
				{
					
					{
						"zoomIn"
					}
				},
				
				{
					
					{
						"zoomOut"
					}
				},
				
				{
					
					{
						"nightVision"
					}
				},
				
				{
					
					{
						"turretElevationUp"
					}
				},
				
				{
					
					{
						"turretElevationDown"
					}
				},
				
				{
					
					{
						"gunElevUp"
					}
				},
				
				{
					
					{
						"gunElevDown"
					}
				},
				
				{
					"STR_A3_C_CfgHints_MiniUGVArm_arg0"
				},
				
				{
					"STR_A3_C_CfgHints_MiniUGVArm_arg1"
				}
			};
			image="\a3\ui_f_contact\data\gui\cfg\hints\mini_ugv_ca.paa";
			logicalOrder=4;
			class Hint
			{
				displayName="$STR_A3_C_CfgHints_MiniUGVArm_name";
				description="$STR_A3_C_CfgHints_MiniUGVArm_desc";
				tip="$STR_A3_C_CfgHints_MiniUGVArm_tip";
				arguments[]=
				{
					
					{
						
						{
							"zoomIn"
						}
					},
					
					{
						
						{
							"zoomOut"
						}
					},
					
					{
						
						{
							"nightVision"
						}
					},
					
					{
						
						{
							"turretElevationUp"
						}
					},
					
					{
						
						{
							"turretElevationDown"
						}
					},
					
					{
						
						{
							"gunElevUp"
						}
					},
					
					{
						
						{
							"gunElevDown"
						}
					},
					"""""",
					
					{
						"STR_A3_C_CfgHints_MiniUGVArm_arg1"
					}
				};
				image="\a3\ui_f_contact\data\gui\cfg\hints\mini_ugv_ca.paa";
			};
		};
		class MiniUGVMove
		{
			displayName="$STR_A3_C_CfgHints_MiniUGVMove_name";
			description="$STR_A3_C_CfgHints_MiniUGVMove_desc";
			tip="$STR_A3_C_CfgHints_MiniUGVMove_tip";
			arguments[]=
			{
				
				{
					
					{
						"carLeft"
					}
				},
				
				{
					
					{
						"carRight"
					}
				},
				
				{
					
					{
						"carForward"
					}
				},
				
				{
					
					{
						"carBack"
					}
				},
				
				{
					
					{
						"turbo"
					}
				},
				
				{
					
					{
						"headlights"
					}
				}
			};
			image="\a3\ui_f_contact\data\gui\cfg\hints\mini_ugv_ca.paa";
			logicalOrder=5;
		};
		class LaserSampling
		{
			displayName="$STR_A3_C_CfgHints_LaserSampling_name";
			description="$STR_A3_C_CfgHints_LaserSampling_desc";
			tip="$STR_A3_C_CfgHints_LaserSampling_tip";
			arguments[]=
			{
				
				{
					
					{
						"optics"
					}
				},
				
				{
					
					{
						"nextWeapon"
					}
				},
				
				{
					
					{
						"defaultAction"
					}
				},
				
				{
					"STR_A3_C_CfgHints_LaserSampling_arg0"
				}
			};
			image="\a3\ui_f_contact\data\gui\cfg\hints\laser_sampling_ca.paa";
			logicalOrder=6;
			class Hint
			{
				displayName="$STR_A3_C_CfgHints_LaserSampling_name";
				description="$STR_A3_C_CfgHints_LaserSampling_desc";
				tip="$STR_A3_C_CfgHints_LaserSampling_tip";
				arguments[]=
				{
					
					{
						
						{
							"optics"
						}
					},
					
					{
						
						{
							"nextWeapon"
						}
					},
					
					{
						
						{
							"defaultAction"
						}
					},
					""""""
				};
				image="\a3\ui_f_contact\data\gui\cfg\hints\laser_sampling_ca.paa";
			};
		};
		class BiopsySampling
		{
			displayName="$STR_A3_C_CfgHints_BiopsySampling_name";
			description="$STR_A3_C_CfgHints_BiopsySampling_desc";
			tip="$STR_A3_C_CfgHints_BiopsySampling_tip";
			arguments[]=
			{
				
				{
					
					{
						"optics"
					}
				},
				
				{
					
					{
						"nextWeapon"
					}
				},
				
				{
					
					{
						"defaultAction"
					}
				},
				
				{
					"STR_A3_C_CfgHints_BiopsySampling_arg0"
				}
			};
			image="\a3\ui_f_contact\data\gui\cfg\hints\cbrn_ca.paa";
			logicalOrder=7;
			class Hint
			{
				displayName="$STR_A3_C_CfgHints_BiopsySampling_name";
				description="$STR_A3_C_CfgHints_BiopsySampling_desc";
				tip="$STR_A3_C_CfgHints_BiopsySampling_tip";
				arguments[]=
				{
					
					{
						
						{
							"optics"
						}
					},
					
					{
						
						{
							"nextWeapon"
						}
					},
					
					{
						
						{
							"defaultAction"
						}
					},
					""""""
				};
				image="\a3\ui_f_contact\data\gui\cfg\hints\cbrn_ca.paa";
			};
		};
		class ProbeMapping
		{
			displayName="$STR_A3_C_CfgHints_ProbeMapping_name";
			description="$STR_A3_C_CfgHints_ProbeMapping_desc";
			tip="$STR_A3_C_CfgHints_ProbeMapping_tip";
			arguments[]=
			{
				
				{
					
					{
						"showMap"
					}
				},
				"""<img size='1' shadow='0' image='A3\UI_F_Contact\Data\Common\RscMapCategories\categories_probe_ca' />"""
			};
			image="\a3\ui_f_contact\data\gui\cfg\hints\cbrn_ca.paa";
			logicalOrder=8;
		};
	};
	class Contact
	{
		displayName="$STR_A3_C_Name";
		logicalOrder=26;
		class Tasks
		{
			displayName="$STR_A3_C_CfgHints_Tasks_name";
			description="$STR_A3_C_CfgHints_Tasks_desc";
			tip="$STR_A3_C_CfgHints_Tasks_tip";
			arguments[]=
			{
				
				{
					
					{
						"tasks"
					}
				},
				
				{
					
					{
						"diary"
					}
				},
				
				{
					
					{
						"showMap"
					}
				},
				"""<img size='1' shadow='0' image='A3\UI_F_Contact\Data\Common\RscMapTooltip\buttonTrack_track_ca' />""",
				"""<img size='1' shadow='0' color='#ff8000' image='\a3\UI_F_Contact\Data\Common\RscHorizontalCompass\compass_currentTask_ca' />"""
			};
			image="\a3\ui_f\data\gui\cfg\hints\Tasks_ca.paa";
			logicalOrder=1;
		};
		class TasksAreas
		{
			displayName="$STR_A3_C_CfgHints_TasksAreas_name";
			description="$STR_A3_C_CfgHints_TasksAreas_desc";
			tip="$STR_A3_C_CfgHints_TasksAreas_tip";
			arguments[]=
			{
				"""<img size='1' shadow='0' color='#ff8000' image='\a3\UI_F_Contact\Data\Common\RscHorizontalCompass\compass_currentTask_ca' />""",
				"""<img size='1' shadow='0' color='#ff8000' image='\a3\UI_F_Contact\Data\Common\RscHorizontalCompass\compass_currentTaskIn_ca' />"""
			};
			image="\a3\ui_f\data\gui\cfg\hints\Tasks_ca.paa";
			logicalOrder=2;
		};
		class DangerZones
		{
			displayName="$STR_A3_C_CfgHints_DangerZones_name";
			description="$STR_A3_C_CfgHints_DangerZones_desc";
			tip="$STR_A3_C_CfgHints_DangerZones_tip";
			arguments[]={};
			image="\a3\data_f_contact\logos\icon_hint_ca.paa";
			logicalOrder=3;
		};
		class Patrols
		{
			displayName="$STR_A3_C_CfgHints_Patrols_name";
			description="$STR_A3_C_CfgHints_Patrols_desc";
			tip="$STR_A3_C_CfgHints_Patrols_tip";
			arguments[]=
			{
				
				{
					"STR_A3_C_CfgMods_Enoch_CB_LDF_name"
				}
			};
			image="\a3\data_f_contact\logos\icon_hint_ca.paa";
			logicalOrder=4;
			class Hint
			{
				displayName="$STR_A3_C_CfgHints_Patrols_name";
				description="$STR_A3_C_CfgHints_Patrols_desc";
				tip="$STR_A3_C_CfgHints_Patrols_tip";
				arguments[]=
				{
					
					{
						"STR_A3_C_CFGFACTIONCLASSES_IND_E_F0"
					}
				};
				image="\a3\data_f_contact\logos\icon_hint_ca.paa";
			};
		};
		class ETComms1
		{
			displayName="$STR_A3_C_CfgHints_ETComms1_name";
			description="$STR_A3_C_CfgHints_ETComms1_desc";
			tip="$STR_A3_C_CfgHints_ETComms1_tip";
			arguments[]={};
			image="\a3\data_f_contact\logos\icon_hint_ca.paa";
			logicalOrder=5;
		};
		class ETComms2
		{
			displayName="$STR_A3_C_CfgHints_ETComms2_name";
			description="$STR_A3_C_CfgHints_ETComms2_desc";
			tip="$STR_A3_C_CfgHints_ETComms2_tip";
			arguments[]=
			{
				
				{
					"STR_A3_C_CfgHints_ETComms2_arg0"
				}
			};
			image="\a3\data_f_contact\logos\icon_hint_ca.paa";
			logicalOrder=6;
			class Hint
			{
				displayName="$STR_A3_C_CfgHints_ETComms2_name";
				description="$STR_A3_C_CfgHints_ETComms2_desc";
				tip="$STR_A3_C_CfgHints_ETComms2_tip";
				arguments[]=
				{
					""""""
				};
				image="\a3\data_f_contact\logos\icon_hint_ca.paa";
			};
		};
	};
};
