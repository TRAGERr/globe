class CfgPatches
{
	class A3_expEden_additional_ApexSounds
	{
		addonRootClass="A3_expEden";
		requiredAddons[]=
		{
			"A3_expEden_additional"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgSoundShaders
{
	class Wind_LeavesA_EXP_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\environment\elements\winds\wind_leavesA_1",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\winds\wind_leavesA_2",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\winds\wind_leavesA_3",
				1
			}
		};
		volume="(1 - forest/2) * (rain factor [0.5,0.3]) * (wind factor [-0.1,0.8])";
		range=24;
	};
	class Wind_LeavesA_Narrow_EXP_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\environment\elements\winds\wind_leavesA_1",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\winds\wind_leavesA_2",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\winds\wind_leavesA_3",
				1
			}
		};
		volume="(1 - forest/2) * (rain factor [0.5,0.3]) * (wind factor [-0.1,0.8])";
		range=13;
	};
	class Wind_LeavesB_EXP_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\environment\elements\winds\wind_leavesB_1",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\winds\wind_leavesB_2",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\winds\wind_leavesB_3",
				1
			}
		};
		volume="(1 - forest/2) * (rain factor [0.5,0.3]) * (wind factor [-0.1,0.8])";
		range=24;
	};
	class Wind_LeavesC_EXP_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\environment\elements\winds\wind_leavesC_1",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\winds\wind_leavesC_2",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\winds\wind_leavesC_3",
				1
			}
		};
		volume="(1 - forest/2) * (rain factor [0.5,0.3]) * (wind factor [-0.1,0.8])";
		range=24;
	};
	class Insect_Day_EXP_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\environment\animals\insect\insect_day_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\insect\insect_day_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\insect\insect_day_03",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\insect\insect_day_04",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\insect\insect_day_05",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\insect\insect_day_06",
				1
			}
		};
		volume="(1-snow)*(shooting factor [0.7,0.72]) *  ((rain factor [0.6,0.4]) * (daytime factor [0.25, 0.33])*(daytime factor [0.88, 0.79]) + forest/3)";
		range=15;
	};
	class Insect_Night_EXP_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\environment\animals\insect\insect_night_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\insect\insect_night_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\insect\insect_night_03",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\insect\insect_night_04",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\insect\insect_night_05",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\insect\insect_night_06",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\insect\insect_night_07",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\insect\insect_night_08",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\insect\insect_night_09",
				1
			}
		};
		volume="(1-snow)*(shooting factor [0.7,0.72]) * ((rain factor [0.6,0.4]) * ((daytime factor [0.79, 0.88]) + (daytime factor [0.33, 0.25])) + forest/3)";
		range=15;
	};
	class Forest_Birds_All_Day_EXP_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird01_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird01_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird01_03",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird01_04",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird01_05",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird01_06",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird01_07",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird01_08",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird01_09",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird01_10",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird01_11",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird01_12",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird02_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird02_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird02_03",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird02_04",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird02_05",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird03_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird03_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird03_03",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird03_04",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird03_05",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird03_06",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird03_07",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird03_08",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird03_09",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird03_10",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird04_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird04_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird04_03",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird04_04",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird04_05",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird04_06",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird04_07",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird04_08",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird04_09",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird04_10",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird04_11",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird04_12",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird04_13",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird04_14",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird04_15",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird04_16",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird04_17",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird04_18",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird04_19",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird04_20",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird04_21",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird04_22",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird04_23",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird04_24",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird04_25",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird04_26",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird04_27",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird04_28",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird04_29",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird04_30",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird04_31",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird04_32",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird04_33",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird04_34",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird04_35",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird04_36",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird04_37",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird04_38",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird04_39",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird04_40",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird05_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird05_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird05_03",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird05_04",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird05_05",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird05_06",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird05_07",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird05_08",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird05_09",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird05_10",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird05_11",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird05_12",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird05_13",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird05_14",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird05_15",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird06_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird06_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird06_03",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird07_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird07_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird07_03",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird07_04",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird07_05",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird07_06",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird07_07",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird08_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird08_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird08_03",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird08_04",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird08_05",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird08_06",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird08_07",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird08_08",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird08_09",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird09_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird09_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird09_03",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird09_04",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird09_05",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird10_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird10_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird10_03",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird10_04",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird10_05",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird10_06",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird11_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird11_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird11_03",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird11_04",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird11_05",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird11_06",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird12_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird12_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird12_03",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird12_04",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird12_05",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird12_06",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird12_07",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird12_08",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird12_09",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird12_10",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird12_11",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird12_12",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird12_13",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird12_14",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_03",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_04",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_05",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_06",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_07",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_08",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_09",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_10",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_11",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_12",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_13",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_14",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_15",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_16",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_17",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_18",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_19",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_20",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_21",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_22",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_23",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_24",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_25",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_26",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_27",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_28",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_29",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_30",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_31",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_32",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_33",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_34",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_35",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_36",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_37",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_38",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_39",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_40",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_41",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_42",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_43",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_44",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_45",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_46",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_47",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_48",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_49",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_50",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_51",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_52",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_53",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_54",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_55",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_56",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_57",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_58",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_59",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_60",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_61",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_62",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_63",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_64",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_65",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_66",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_67",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_68",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_69",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_70",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird13_71",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird14_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird14_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird14_03",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird14_04",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird14_05",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird14_06",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird14_07",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird14_08",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird14_09",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird14_10",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird14_11",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird14_12",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird14_13",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird14_14",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird14_15",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird14_16",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird14_17",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird14_18",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird14_19",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird14_20",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird14_21",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird14_22",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird14_23",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird14_24",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird14_25",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird14_26",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird14_27",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird14_28",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird14_29",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird14_30",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird14_31",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird14_32",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird14_33",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird14_34",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird14_35",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird14_36",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird14_37",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird14_38",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird14_39",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird14_40",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird14_41",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird14_42",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird14_43",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird14_44",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird14_45",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird14_46",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird14_47",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird14_48",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird15_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird15_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird15_03",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird15_04",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird15_05",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird15_06",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird15_07",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird15_08",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird15_09",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird15_10",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird15_11",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird15_12",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird15_13",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird15_14",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird15_15",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird15_16",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird16_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird16_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird16_03",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird16_04",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird16_05",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird16_06",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird16_07",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird16_08",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird16_09",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird16_10",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird16_11",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\mid\bird16_12",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird01_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird01_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird01_03",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird01_04",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird01_05",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird01_06",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird01_07",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird01_08",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird01_09",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird01_10",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird01_11",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird01_12",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird02_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird02_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird02_03",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird02_04",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird02_05",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird03_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird03_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird03_03",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird03_04",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird03_05",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird03_06",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird03_07",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird03_08",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird03_09",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird03_10",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird04_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird04_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird04_03",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird04_04",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird04_05",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird04_06",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird04_07",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird04_08",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird04_09",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird04_10",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird04_11",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird04_12",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird04_13",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird04_14",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird04_15",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird04_16",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird04_17",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird04_18",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird04_19",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird04_20",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird04_21",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird04_22",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird04_23",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird04_24",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird04_25",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird04_26",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird04_27",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird04_28",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird04_29",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird04_30",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird04_31",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird04_32",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird04_33",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird04_34",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird04_35",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird04_36",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird04_37",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird04_38",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird04_39",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird04_40",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird05_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird05_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird05_03",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird05_04",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird05_05",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird05_06",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird05_07",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird05_08",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird05_09",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird05_10",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird05_11",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird05_12",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird05_13",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird05_14",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird05_15",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird06_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird06_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird06_03",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird07_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird07_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird07_03",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird07_04",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird07_05",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird07_06",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird07_07",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird08_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird08_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird08_03",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird08_04",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird08_05",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird08_06",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird08_07",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird08_08",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird08_09",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird09_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird09_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird09_03",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird09_04",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird09_05",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird10_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird10_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird10_03",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird10_04",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird10_05",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird10_06",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird11_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird11_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird11_03",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird11_04",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird11_05",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird11_06",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird12_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird12_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird12_03",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird12_04",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird12_05",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird12_06",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird12_07",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird12_08",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird12_09",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird12_10",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird12_11",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird12_12",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird12_13",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird12_14",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_03",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_04",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_05",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_06",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_07",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_08",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_09",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_10",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_11",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_12",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_13",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_14",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_15",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_16",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_17",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_18",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_19",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_20",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_21",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_22",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_23",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_24",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_25",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_26",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_27",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_28",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_29",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_30",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_31",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_32",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_33",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_34",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_35",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_36",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_37",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_38",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_39",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_40",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_41",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_42",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_43",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_44",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_45",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_46",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_47",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_48",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_49",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_50",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_51",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_52",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_53",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_54",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_55",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_56",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_57",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_58",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_59",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_60",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_61",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_62",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_63",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_64",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_65",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_66",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_67",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_68",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_69",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_70",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird13_71",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird14_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird14_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird14_03",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird14_04",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird14_05",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird14_06",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird14_07",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird14_08",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird14_09",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird14_10",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird14_11",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird14_12",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird14_13",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird14_14",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird14_15",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird14_16",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird14_17",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird14_18",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird14_19",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird14_20",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird14_21",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird14_22",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird14_23",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird14_24",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird14_25",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird14_26",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird14_27",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird14_28",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird14_29",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird14_30",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird14_31",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird14_32",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird14_33",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird14_34",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird14_35",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird14_36",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird14_37",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird14_38",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird14_39",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird14_40",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird14_41",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird14_42",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird14_43",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird14_44",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird14_45",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird14_46",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird14_47",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird14_48",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird15_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird15_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird15_03",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird15_04",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird15_05",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird15_06",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird15_07",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird15_08",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird15_09",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird15_10",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird15_11",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird15_12",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird15_13",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird15_14",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird15_15",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird15_16",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird16_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird16_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird16_03",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird16_04",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird16_05",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird16_06",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird16_07",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird16_08",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird16_09",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird16_10",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird16_11",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\bird16_12",
				1
			}
		};
		volume="(1-snow)*(shooting factor [0.6,1]) * forest * (trees factor [0.9,1]) * (rain factor[0.8,0.6]) * (daytime factor [0.25, 0.33])*(daytime factor [0.88, 0.79])";
		range=25;
	};
	class Meadows_Birds_All_Day_EXP_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird01_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird01_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird01_03",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird01_04",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird01_05",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird01_06",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird01_07",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird01_08",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird01_09",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird01_10",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird01_11",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird01_12",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird01_13",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird01_14",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird01_15",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird01_16",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird01_17",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird01_18",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird01_19",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird02_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird02_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird02_03",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird02_04",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird02_05",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird02_06",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird02_07",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird03_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird03_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird03_03",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird03_04",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird03_05",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird04_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird04_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird04_03",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird04_04",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird04_05",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird04_06",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird05_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird05_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird05_03",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird05_04",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird05_05",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird05_06",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird05_07",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_03",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_04",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_05",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_06",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_07",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_08",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_09",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_10",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_11",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_12",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_13",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_14",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_15",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_16",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_17",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_18",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_19",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_20",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_21",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_22",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_23",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_24",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_25",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_26",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_27",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_28",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_29",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_30",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_31",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_32",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_33",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_34",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_35",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_36",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_37",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_38",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_39",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_40",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird07_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird07_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird07_03",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird07_04",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird07_05",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird07_06",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird08_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird08_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird08_03",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird08_04",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird08_05",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird09_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird09_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird09_03",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird09_04",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird09_05",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird09_06",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird09_07",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird09_08",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird09_09",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird09_10",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird09_11",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird09_12",
				1
			}
		};
		volume="(1-snow)*(shooting factor [0.6,1]) * (1 - forest) * (rain factor[0.8,0.6]) * (daytime factor [0.25, 0.33])*(daytime factor [0.88, 0.79])";
		range=28;
	};
	class Forest_Birds_All_Night_EXP_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\night\mid\bird01_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\night\mid\bird01_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\night\mid\bird01_03",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\night\mid\bird01_04",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\night\mid\bird01_05",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\night\mid\bird01_06",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\night\mid\bird01_07",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\night\mid\bird01_08",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\night\mid\bird01_09",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\night\mid\bird01_10",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\night\mid\bird02_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\night\mid\bird02_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\night\mid\bird02_03",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\night\mid\bird03_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\night\mid\bird03_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\night\mid\bird03_03",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\night\mid\bird03_04",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\night\mid\bird03_05",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\night\mid\bird03_06",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\night\mid\bird03_07",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\night\mid\bird03_08",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\night\mid\bird03_09",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\night\mid\bird04_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\night\mid\bird04_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\night\mid\bird05_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\night\dist\bird01_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\night\dist\bird01_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\night\dist\bird01_03",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\night\dist\bird01_04",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\night\dist\bird01_05",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\night\dist\bird01_06",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\night\dist\bird01_07",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\night\dist\bird01_08",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\night\dist\bird01_09",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\night\dist\bird01_10",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\night\dist\bird02_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\night\dist\bird02_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\night\dist\bird02_03",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\night\dist\bird03_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\night\dist\bird03_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\night\dist\bird03_03",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\night\dist\bird03_04",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\night\dist\bird03_05",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\night\dist\bird03_06",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\night\dist\bird03_07",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\night\dist\bird03_08",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\night\dist\bird03_09",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\night\dist\bird04_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\night\dist\bird04_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\animals\birds\forest\night\dist\bird05_01",
				1
			}
		};
		volume="(1-snow)*(shooting factor [0.6,1]) * forest * (rain factor[0.8,0.6]) * ((daytime factor [0.79, 0.88]) + (daytime factor [0.33, 0.25]))";
		range=25;
	};
	class Rain_PlantA_Light_EXP_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_plantA_light_001",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_plantA_light_002",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_plantA_light_003",
				1
			}
		};
		volume="raindrops * raindrops * (rain factor[0,0.1]) * 1.5";
		range=12;
	};
	class Rain_PlantA_Medium_EXP_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_plantA_medium_001",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_plantA_medium_002",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_plantA_medium_003",
				1
			}
		};
		volume="raindrops * raindrops * (rain factor[0.4,0.6])*(rain factor[0.9,0.7]) * 1.5";
		range=12;
	};
	class Rain_PlantA_Heavy_EXP_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_plantA_heavy_001",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_plantA_heavy_002",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_plantA_heavy_003",
				1
			}
		};
		volume="raindrops * raindrops * (rain factor[0.7,0.9]) * 1.5";
		range=12;
	};
	class Rain_PlantB_Light_EXP_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_PlantB_light_001",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_PlantB_light_002",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_PlantB_light_003",
				1
			}
		};
		volume="raindrops * raindrops * (rain factor[0,0.1]) * (rain factor[0.6,0.4]) * 1.5";
		range=12;
	};
	class Rain_PlantB_Medium_EXP_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_PlantB_medium_001",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_PlantB_medium_002",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_PlantB_medium_003",
				1
			}
		};
		volume="raindrops * raindrops * (rain factor[0.4,0.6])*(rain factor[0.9,0.7]) * 1.5";
		range=12;
	};
	class Rain_PlantB_Heavy_EXP_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_PlantB_heavy_001",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_PlantB_heavy_002",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_PlantB_heavy_003",
				1
			}
		};
		volume="raindrops * raindrops * (rain factor[0.7,0.9])*2";
		range=12;
	};
	class Rain_PlantC_Light_EXP_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_PlantC_light_001",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_PlantC_light_002",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_PlantC_light_003",
				1
			}
		};
		volume="raindrops * raindrops * (rain factor[0,0.1]) * (rain factor[0.6,0.4]) * 1.5";
		range=12;
	};
	class Rain_PlantC_Medium_EXP_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_PlantC_medium_001",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_PlantC_medium_002",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_PlantC_medium_003",
				1
			}
		};
		volume="raindrops * raindrops * (rain factor[0.4,0.6])*(rain factor[0.9,0.7]) * 1.5";
		range=12;
	};
	class Rain_PlantC_Heavy_EXP_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_PlantC_heavy_001",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_PlantC_heavy_002",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_PlantC_heavy_003",
				1
			}
		};
		volume="raindrops * raindrops * (rain factor[0.7,0.9])*2";
		range=12;
	};
	class Rain_Tree_Light_EXP_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_tree_light_001",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_tree_light_002",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_tree_light_003",
				1
			}
		};
		volume="raindrops * raindrops * (rain factor[0,0.1])*(rain factor[0.4,0.2])";
		range=25;
	};
	class Rain_Tree_Medium_EXP_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_tree_medium_001",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_tree_medium_002",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_tree_medium_003",
				1
			}
		};
		volume="raindrops * raindrops * (rain factor[0.2,0.4])*(rain factor[0.7,0.5])";
		range=25;
	};
	class Rain_Tree_Heavy_EXP_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_tree_heavy_001",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_tree_heavy_002",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_tree_heavy_003",
				1
			}
		};
		volume="raindrops * raindrops * (rain factor[0.5, 1])";
		range=25;
	};
	class Rain_MetalT_Light_EXP_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_metalA_light_001",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_metalA_light_002",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_metalA_light_003",
				1
			}
		};
		volume="raindrops * raindrops * (rain factor[0,0.1]) * (rain factor[0.6,0.4]) * 1.5";
		range=8;
	};
	class Rain_MetalT_Medium_EXP_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_metalA_medium_001",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_metalA_medium_002",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_metalA_medium_003",
				1
			}
		};
		volume="raindrops * raindrops * (rain factor[0.4,0.6])*(rain factor[0.9,0.7]) * 1.5";
		range=8;
	};
	class Rain_MetalT_Heavy_EXP_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_metalA_heavy_001",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_metalA_heavy_002",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_metalA_heavy_003",
				1
			}
		};
		volume="raindrops * raindrops * (rain factor[0.7,0.9])*2";
		range=8;
	};
	class Rain_MetalA_Light_EXP_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_metalA_light_001",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_metalA_light_002",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_metalA_light_003",
				1
			}
		};
		volume="10 * raindrops * raindrops * (rain factor[0,0.1]) * (rain factor[0.6,0.4]) * rain";
		range=15;
	};
	class Rain_MetalA_Medium_EXP_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_metalA_medium_001",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_metalA_medium_002",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_metalA_medium_003",
				1
			}
		};
		volume="10 * raindrops * raindrops * (rain factor[0.4,0.6])*(rain factor[0.9,0.7]) * rain";
		range=15;
	};
	class Rain_MetalA_Heavy_EXP_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_metalA_heavy_001",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_metalA_heavy_002",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_metalA_heavy_003",
				1
			}
		};
		volume="raindrops * raindrops * (rain factor[0.7,0.9]) * rain";
		range=15;
	};
	class Rain_MetalAn_Light_EXP_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_metalA_light_001",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_metalA_light_002",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_metalA_light_003",
				1
			}
		};
		volume="raindrops * raindrops * (rain factor[0,0.1]) * (rain factor[0.6,0.4]) * rain";
		range=10;
	};
	class Rain_MetalAn_Medium_EXP_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_metalA_medium_001",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_metalA_medium_002",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_metalA_medium_003",
				1
			}
		};
		volume="raindrops * raindrops * (rain factor[0.4,0.6])*(rain factor[0.9,0.7]) * rain";
		range=10;
	};
	class Rain_MetalAn_Heavy_EXP_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_metalA_heavy_001",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_metalA_heavy_002",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_metalA_heavy_003",
				1
			}
		};
		volume="raindrops * raindrops * (rain factor[0.7,0.9]) * rain";
		range=10;
	};
	class Rain_MetalB_Light_EXP_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_metalB_light_001",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_metalB_light_002",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_metalB_light_003",
				1
			}
		};
		volume="(rain factor[0,0.1]) * (rain factor[0.6,0.4]) * 1.5";
		range=16;
	};
	class Rain_MetalB_Medium_EXP_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_metalB_medium_001",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_metalB_medium_002",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_metalB_medium_003",
				1
			}
		};
		volume="(rain factor[0.4,0.6])*(rain factor[0.9,0.7]) * 1.5";
		range=16;
	};
	class Rain_MetalB_Heavy_EXP_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_metalB_heavy_001",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_metalB_heavy_002",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_metalB_heavy_003",
				1
			}
		};
		volume="(rain factor[0.7,0.9])*2";
		range=16;
	};
	class Rain_MetalBn_Light_EXP_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_metalB_light_001",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_metalB_light_002",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_metalB_light_003",
				1
			}
		};
		volume="(rain factor[0,0.1]) * (rain factor[0.6,0.4]) * 1.5";
		range=10;
	};
	class Rain_MetalBn_Medium_EXP_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_metalB_medium_001",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_metalB_medium_002",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_metalB_medium_003",
				1
			}
		};
		volume="(rain factor[0.4,0.6])*(rain factor[0.9,0.7]) * 1.5";
		range=10;
	};
	class Rain_MetalBn_Heavy_EXP_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_metalB_heavy_001",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_metalB_heavy_002",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_metalB_heavy_003",
				1
			}
		};
		volume="(rain factor[0.7,0.9])*2";
		range=10;
	};
	class Rain_MetalCn_Light_EXP_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_metalC_light_001",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_metalC_light_002",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_metalC_light_003",
				1
			}
		};
		volume="(rain factor[0,0.1]) * (rain factor[0.6,0.4]) * 1.5";
		range=12;
	};
	class Rain_MetalCn_Medium_EXP_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_metalC_medium_001",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_metalC_medium_002",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_metalC_medium_003",
				1
			}
		};
		volume="(rain factor[0.4,0.6])*(rain factor[0.9,0.7]) * 1.5";
		range=12;
	};
	class Rain_MetalCn_Heavy_EXP_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_metalC_heavy_001",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_metalC_heavy_002",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_metalC_heavy_003",
				1
			}
		};
		volume="(rain factor[0.7,0.9])*2";
		range=12;
	};
	class Rain_MetalC_Light_EXP_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_metalC_light_001",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_metalC_light_002",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_metalC_light_003",
				1
			}
		};
		volume="(rain factor[0,0.1]) * (rain factor[0.6,0.4]) * 1.5";
		range=23;
	};
	class Rain_MetalC_Medium_EXP_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_metalC_medium_001",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_metalC_medium_002",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_metalC_medium_003",
				1
			}
		};
		volume="(rain factor[0.4,0.6])*(rain factor[0.9,0.7]) * 1.5";
		range=23;
	};
	class Rain_MetalC_Heavy_EXP_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_metalC_heavy_001",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_metalC_heavy_002",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_metalC_heavy_003",
				1
			}
		};
		volume="(rain factor[0.7,0.9])*2";
		range=23;
	};
	class Rain_PlateA_Medium_EXP_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_PlateA_medium_001",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_PlateA_medium_002",
				1
			}
		};
		volume="(rain factor[0,0.6])*(rain factor[0.9,0.7]) * 1.5";
		range=20;
	};
	class Rain_PlateA_Heavy_EXP_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_PlateA_heavy_001",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_PlateA_heavy_002",
				1
			}
		};
		volume="(rain factor[0.7,0.9])*2";
		range=20;
	};
	class Rain_PlateBn_Medium_EXP_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_PlateB_medium_001",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_PlateB_medium_002",
				1
			}
		};
		volume="(rain factor[0,0.6])*(rain factor[0.9,0.7]) * 1.5";
		range=25;
	};
	class Rain_PlateBn_Heavy_EXP_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_PlateB_heavy_001",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_PlateB_heavy_002",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_PlateB_heavy_003",
				1
			}
		};
		volume="(rain factor[0.7,0.9])*2";
		range=25;
	};
	class Rain_PlateB_Medium_EXP_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_PlateB_medium_001",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_PlateB_medium_002",
				1
			}
		};
		volume="(rain factor[0,0.6])*(rain factor[0.9,0.7]) * 1.5";
		range=25;
	};
	class Rain_PlateB_Heavy_EXP_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_PlateB_heavy_001",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_PlateB_heavy_002",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\rain_PlateB_heavy_003",
				1
			}
		};
		volume="(rain factor[0.7,0.9])*2";
		range=25;
	};
	class Water_Gutter_EXP_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\water_gutter1",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\water_gutter2",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\rains\water_gutter3",
				1
			}
		};
		volume="(rain factor[0,0.5]) * (rain factor[0.8,0.7]) * rain";
		range=5;
	};
	class Thunder_Norm_EXP_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\environment\elements\thunders\thunder_norm_1",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\thunders\thunder_norm_2",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\thunders\thunder_norm_3",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\thunders\thunder_norm_4",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\thunders\thunder_norm_5",
				1
			}
		};
		volume=1;
		range=2000;
	};
	class Thunder_Heavy_EXP_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\environment\elements\thunders\thunder_heavy_1",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\thunders\thunder_heavy_2",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\thunders\thunder_heavy_3",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\thunders\thunder_heavy_4",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\elements\thunders\thunder_heavy_5",
				1
			}
		};
		volume=1;
		range=2000;
	};
	class Air_Condition_EXP_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\environment\structures\air_condition\aircondition_1",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\structures\air_condition\aircondition_2",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\structures\air_condition\aircondition_3",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\structures\air_condition\aircondition_4",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\structures\air_condition\aircondition_5",
				1
			}
		};
		volume=1;
		range=12;
	};
	class Electric_Box_EXP_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\environment\structures\electric_box\electric_box_1",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\structures\electric_box\electric_box_2",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\structures\electric_box\electric_box_3",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\structures\electric_box\electric_box_4",
				1
			}
		};
		volume=0.30000001;
		range=6;
	};
	class Metal_Stress_EXP_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\environment\sfx\metal_stress\metal_stress_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\sfx\metal_stress\metal_stress_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\sfx\metal_stress\metal_stress_03",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\sfx\metal_stress\metal_stress_04",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\sfx\metal_stress\metal_stress_05",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\sfx\metal_stress\metal_stress_06",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\sfx\metal_stress\metal_stress_07",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\sfx\metal_stress\metal_stress_08",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\sfx\metal_stress\metal_stress_09",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\sfx\metal_stress\metal_stress_10",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\sfx\metal_stress\metal_stress_11",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\sfx\metal_stress\metal_stress_12",
				1
			}
		};
		volume=1;
		range=25;
	};
	class Rock_Debris_EXP_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\environment\sfx\rock_debris\rock_debris_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\sfx\rock_debris\rock_debris_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\sfx\rock_debris\rock_debris_03",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\sfx\rock_debris\rock_debris_04",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\sfx\rock_debris\rock_debris_05",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\sfx\rock_debris\rock_debris_06",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\sfx\rock_debris\rock_debris_07",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\sfx\rock_debris\rock_debris_08",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\sfx\rock_debris\rock_debris_09",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\sfx\rock_debris\rock_debris_10",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\sfx\rock_debris\rock_debris_11",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\sfx\rock_debris\rock_debris_12",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\sfx\rock_debris\rock_debris_13",
				1
			}
		};
		volume=1;
		range=25;
	};
	class Metal_StressWind_EXP_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\environment\sfx\metal_stress\metal_stress_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\sfx\metal_stress\metal_stress_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\sfx\metal_stress\metal_stress_03",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\sfx\metal_stress\metal_stress_04",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\sfx\metal_stress\metal_stress_05",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\sfx\metal_stress\metal_stress_06",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\sfx\metal_stress\metal_stress_07",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\sfx\metal_stress\metal_stress_08",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\sfx\metal_stress\metal_stress_09",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\sfx\metal_stress\metal_stress_10",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\sfx\metal_stress\metal_stress_11",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\sfx\metal_stress\metal_stress_12",
				1
			}
		};
		volume="wind factor[0.4, 0.8]";
		range=25;
	};
	class ClothesWind_EXP_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\environment\sfx\clothes_flapping",
				1
			}
		};
		volume="wind factor[0.2, 0.7]";
		range=10;
	};
	class MetalFenceWind_EXP_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\environment\sfx\metal_fence_rattling",
				1
			}
		};
		volume="wind factor[0.5, 1]";
		range=10;
	};
	class Metal_DebrisWind_Large_EXP_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\environment\sfx\metal_debris\metal_debris_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\sfx\metal_debris\metal_debris_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\sfx\metal_debris\metal_debris_03",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\sfx\metal_debris\metal_debris_04",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\sfx\metal_debris\metal_debris_05",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\sfx\metal_debris\metal_debris_06",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\sfx\metal_debris\metal_debris_07",
				1
			}
		};
		volume="(wind factor[0.3, 0.6]) * (rain factor[0.7,0.5])";
		range=25;
	};
	class Metal_DebrisWind_Medium_EXP_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\environment\sfx\metal_debris\metal_debris_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\sfx\metal_debris\metal_debris_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\sfx\metal_debris\metal_debris_03",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\sfx\metal_debris\metal_debris_04",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\sfx\metal_debris\metal_debris_05",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\sfx\metal_debris\metal_debris_06",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\sfx\metal_debris\metal_debris_07",
				1
			}
		};
		volume="(wind factor[0.3, 0.6]) * (rain factor[0.7,0.5])";
		range=20;
	};
	class Metal_DebrisWind_Small_EXP_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\environment\sfx\metal_debris\metal_debris_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\sfx\metal_debris\metal_debris_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\sfx\metal_debris\metal_debris_03",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\sfx\metal_debris\metal_debris_04",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\sfx\metal_debris\metal_debris_05",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\sfx\metal_debris\metal_debris_06",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\sfx\metal_debris\metal_debris_07",
				1
			}
		};
		volume="(wind factor[0.3, 0.6]) * (rain factor[0.7,0.5])";
		range=15;
	};
	class Rock_DebrisWind_Small_EXP_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\environment\sfx\small_debris\rock_debris_01",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\sfx\small_debris\rock_debris_02",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\sfx\small_debris\rock_debris_03",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\sfx\small_debris\rock_debris_04",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\sfx\small_debris\rock_debris_05",
				1
			},
			
			{
				"A3\Sounds_F_Exp\environment\sfx\small_debris\rock_debris_06",
				1
			}
		};
		volume="(wind factor[0.3, 0.6]) * (rain factor[0.7,0.5])";
		range=25;
	};
};
class CfgSoundSets
{
	class ForestMorning_SoundSet
	{
		sound3DProcessingType="ForestDay_Exp_3DProcessingType";
	};
	class ForestAfternoon_SoundSet
	{
		sound3DProcessingType="ForestDay_EXP_3DProcessingType";
	};
	class WindForest_High_SoundSet
	{
		sound3DProcessingType="ForestWind_EXP_3DProcessingType";
	};
	class WindForest_Low_SoundSet
	{
		sound3DProcessingType="ForestWind_EXP_3DProcessingType";
	};
	class ForestNight_SoundSet
	{
		sound3DProcessingType="ForestNight_EXP_3DProcessingType";
	};
	class RainForest_Low_SoundSet
	{
		sound3DProcessingType="ForestRain_EXP_3DProcessingType";
	};
	class RainForest_Medium_SoundSet
	{
		sound3DProcessingType="ForestRain_EXP_3DProcessingType";
	};
	class RainForest_High_SoundSet
	{
		sound3DProcessingType="ForestRain_EXP_3DProcessingType";
	};
	class Wind_LeavesA_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Wind_LeavesA_EXP_SoundShader"
		};
		volumeFactor=1.2;
		spatial=1;
		doppler=0;
		loop=1;
		volumeCurve="InverseSquare1Curve";
		sound3DProcessingType="Tree3DProcessingType";
	};
	class Wind_LeavesA_Narrow_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Wind_LeavesA_Narrow_EXP_SoundShader"
		};
		volumeFactor=1.2;
		spatial=1;
		doppler=0;
		loop=1;
		volumeCurve="InverseSquare1Curve";
		sound3DProcessingType="TreeNarrow3DProcessingType";
	};
	class Wind_LeavesB_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Wind_LeavesB_EXP_SoundShader"
		};
		volumeFactor=1.2;
		spatial=1;
		doppler=0;
		loop=1;
		volumeCurve="InverseSquare1Curve";
		sound3DProcessingType="Tree3DProcessingType";
	};
	class Wind_LeavesC_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Wind_LeavesC_EXP_SoundShader"
		};
		volumeFactor=1.2;
		spatial=1;
		doppler=0;
		loop=1;
		volumeCurve="InverseSquare1Curve";
		sound3DProcessingType="TreeWide3DProcessingType";
	};
	class Insect_Day_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Insect_Day_EXP_SoundShader"
		};
		volumeFactor=0.60000002;
		spatial=1;
		doppler=0;
		loop=1;
		volumeCurve="defaultAmpAttenuationCurve";
		sound3DProcessingType="default3DProcessingType";
	};
	class Insect_Night_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Insect_Night_EXP_SoundShader"
		};
		volumeFactor=0.60000002;
		spatial=1;
		doppler=0;
		loop=1;
		volumeCurve="defaultAmpAttenuationCurve";
		sound3DProcessingType="default3DProcessingType";
	};
	class Forest_Birds_All_Day_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Forest_Birds_All_Day_EXP_SoundShader"
		};
		volumeFactor=0.2;
		spatial=1;
		doppler=0;
		loop=1;
		delay=6;
		delayRandomizer=1;
		volumeCurve[]=
		{
			{0,0},
			{1,0},
			{3,0.5},
			{4,0.60000002},
			{5,0.5},
			{6,0.40000001},
			{7,0.5},
			{8,0.2},
			{9,0.1},
			{10,0}
		};
		sound3DProcessingType="default3DProcessingType";
	};
	class Forest_Birds_All_Night_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Forest_Birds_All_Night_EXP_SoundShader"
		};
		volumeFactor=0.2;
		spatial=1;
		doppler=0;
		loop=1;
		delay=20;
		delayRandomizer=10;
		volumeCurve[]=
		{
			{0,0},
			{2,0},
			{3,0.69999999},
			{4,0.60000002},
			{5,0.5},
			{6,0.40000001},
			{7,0.5},
			{8,0.2},
			{9,0.1},
			{10,0}
		};
		sound3DProcessingType="default3DProcessingType";
	};
	class Meadows_Birds_All_Day_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Meadows_Birds_All_Day_EXP_SoundShader"
		};
		volumeFactor=1;
		spatial=1;
		doppler=0;
		loop=1;
		delay=2;
		delayRandomizer=1;
		volumeCurve="defaultAmpAttenuationCurve";
		sound3DProcessingType="default3DProcessingType";
	};
	class Rain_PlantA_Light_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Rain_PlantA_Light_EXP_SoundShader"
		};
		volumeFactor=1;
		frequencyFactor=0.80000001;
		spatial=1;
		doppler=0;
		loop=1;
		volumeCurve="InverseSquare1Curve";
		sound3DProcessingType="PLant3DProcessingType";
	};
	class Rain_PlantA_Medium_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Rain_PlantA_Medium_EXP_SoundShader"
		};
		volumeFactor=1;
		frequencyFactor=0.60000002;
		spatial=1;
		doppler=0;
		loop=1;
		volumeCurve="InverseSquare1Curve";
		sound3DProcessingType="PLant3DProcessingType";
	};
	class Rain_PlantA_Heavy_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Rain_PlantA_Heavy_EXP_SoundShader"
		};
		volumeFactor=0.60000002;
		frequencyFactor=0.60000002;
		spatial=1;
		doppler=0;
		loop=1;
		volumeCurve="InverseSquare1Curve";
		sound3DProcessingType="PLant3DProcessingType";
	};
	class Rain_PlantB_Light_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Rain_PlantB_Light_EXP_SoundShader"
		};
		volumeFactor=1;
		spatial=1;
		doppler=0;
		loop=1;
		volumeCurve="InverseSquare1Curve";
		sound3DProcessingType="PLant3DProcessingType";
	};
	class Rain_PlantB_Medium_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Rain_PlantB_Medium_EXP_SoundShader"
		};
		volumeFactor=1;
		spatial=1;
		doppler=0;
		loop=1;
		volumeCurve="InverseSquare1Curve";
		sound3DProcessingType="PLant3DProcessingType";
	};
	class Rain_PlantB_Heavy_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Rain_PlantB_Heavy_EXP_SoundShader"
		};
		volumeFactor=0.60000002;
		spatial=1;
		doppler=0;
		loop=1;
		volumeCurve="InverseSquare1Curve";
		sound3DProcessingType="PLant3DProcessingType";
	};
	class Rain_PlantC_Light_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Rain_PlantC_Light_EXP_SoundShader"
		};
		volumeFactor=0.60000002;
		spatial=1;
		doppler=0;
		loop=1;
		volumeCurve="InverseSquare1Curve";
		sound3DProcessingType="PLant3DProcessingType";
	};
	class Rain_PlantC_Medium_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Rain_PlantC_Medium_EXP_SoundShader"
		};
		volumeFactor=1;
		spatial=1;
		doppler=0;
		loop=1;
		volumeCurve="InverseSquare1Curve";
		sound3DProcessingType="PLant3DProcessingType";
	};
	class Rain_PlantC_Heavy_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Rain_PlantC_Heavy_EXP_SoundShader"
		};
		volumeFactor=1;
		spatial=1;
		doppler=0;
		loop=1;
		volumeCurve="InverseSquare1Curve";
		sound3DProcessingType="PLant3DProcessingType";
	};
	class Rain_Tree_Light_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Rain_Tree_Light_EXP_SoundShader"
		};
		volumeFactor=0.5;
		spatial=1;
		doppler=0;
		loop=1;
		volumeCurve="InverseSquare1Curve";
		sound3DProcessingType="Tree_EXP_3DProcessingType";
	};
	class Rain_Tree_Medium_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Rain_Tree_Medium_EXP_SoundShader"
		};
		volumeFactor=0.69999999;
		spatial=1;
		doppler=0;
		loop=1;
		volumeCurve="InverseSquare1Curve";
		sound3DProcessingType="Tree_EXP_3DProcessingType";
	};
	class Rain_Tree_Heavy_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Rain_Tree_Heavy_EXP_SoundShader"
		};
		volumeFactor=0.40000001;
		spatial=1;
		doppler=0;
		loop=1;
		volumeCurve="InverseSquare1Curve";
		sound3DProcessingType="Tree_EXP_3DProcessingType";
	};
	class Rain_WideTree_Light_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Rain_Tree_Light_EXP_SoundShader"
		};
		volumeFactor=0.5;
		spatial=1;
		doppler=0;
		loop=1;
		volumeCurve="InverseSquare1Curve";
		sound3DProcessingType="TreeWide_EXP_3DProcessingType";
	};
	class Rain_WideTree_Medium_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Rain_Tree_Medium_EXP_SoundShader"
		};
		volumeFactor=0.69999999;
		spatial=1;
		doppler=0;
		loop=1;
		volumeCurve="InverseSquare1Curve";
		sound3DProcessingType="TreeWide_EXP_3DProcessingType";
	};
	class Rain_WideTree_Heavy_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Rain_Tree_Heavy_EXP_SoundShader"
		};
		volumeFactor=0.40000001;
		spatial=1;
		doppler=0;
		loop=1;
		volumeCurve="InverseSquare1Curve";
		sound3DProcessingType="TreeWide_EXP_3DProcessingType";
	};
	class Rain_SmallTree_Light_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Rain_Tree_Light_EXP_SoundShader"
		};
		volumeFactor=0.5;
		frequencyFactor=1.3;
		spatial=1;
		doppler=0;
		loop=1;
		volumeCurve="InverseSquare1Curve";
		sound3DProcessingType="TreeNarrow_EXP_3DProcessingType";
	};
	class Rain_SmallTree_Medium_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Rain_Tree_Medium_EXP_SoundShader"
		};
		volumeFactor=0.5;
		frequencyFactor=1.3;
		spatial=1;
		doppler=0;
		loop=1;
		volumeCurve="InverseSquare1Curve";
		sound3DProcessingType="TreeNarrow_EXP_3DProcessingType";
	};
	class Rain_SmallTree_Heavy_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Rain_Tree_Heavy_EXP_SoundShader"
		};
		volumeFactor=0.40000001;
		frequencyFactor=1.3;
		spatial=1;
		doppler=0;
		loop=1;
		volumeCurve="InverseSquare1Curve";
		sound3DProcessingType="TreeNarrow_EXP_3DProcessingType";
	};
	class Rain_MetalT_Light_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Rain_MetalT_Light_EXP_SoundShader"
		};
		volumeFactor=0.69999999;
		frequencyFactor=1.5;
		frequencyRandomizer=3;
		spatial=1;
		doppler=0;
		loop=1;
		volumeCurve="InverseSquare1Curve";
		sound3DProcessingType="PLant3DProcessingType";
	};
	class Rain_MetalT_Medium_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Rain_MetalT_Medium_EXP_SoundShader"
		};
		volumeFactor=0.60000002;
		frequencyFactor=1.5;
		frequencyRandomizer=3;
		spatial=1;
		doppler=0;
		loop=1;
		volumeCurve="InverseSquare1Curve";
		sound3DProcessingType="PLant3DProcessingType";
	};
	class Rain_MetalT_Heavy_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Rain_MetalT_Heavy_EXP_SoundShader"
		};
		volumeFactor=0.60000002;
		frequencyFactor=1.5;
		frequencyRandomizer=3;
		spatial=1;
		doppler=0;
		loop=1;
		volumeCurve="InverseSquare1Curve";
		sound3DProcessingType="PLant3DProcessingType";
	};
	class Rain_MetalA_Light_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Rain_MetalA_Light_EXP_SoundShader"
		};
		volumeFactor=0.30000001;
		frequencyFactor=1;
		frequencyRandomizer=2;
		spatial=1;
		doppler=0;
		loop=1;
		volumeCurve="Smooth1Curve";
		sound3DProcessingType="RainRoofSmall3DProcessingType";
	};
	class Rain_MetalA_Medium_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Rain_MetalA_Medium_EXP_SoundShader"
		};
		volumeFactor=0.30000001;
		frequencyFactor=1;
		frequencyRandomizer=2;
		spatial=1;
		doppler=0;
		loop=1;
		volumeCurve="Smooth1Curve";
		sound3DProcessingType="RainRoofSmall3DProcessingType";
	};
	class Rain_MetalA_Heavy_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Rain_MetalA_Heavy_EXP_SoundShader"
		};
		volumeFactor=0.40000001;
		frequencyFactor=1;
		frequencyRandomizer=2;
		spatial=1;
		doppler=0;
		loop=1;
		volumeCurve="Smooth1Curve";
		sound3DProcessingType="RainRoofSmall3DProcessingType";
	};
	class Rain_MetalAn_Light_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Rain_MetalAn_Light_EXP_SoundShader"
		};
		volumeFactor=0.30000001;
		frequencyFactor=1;
		frequencyRandomizer=6;
		spatial=1;
		doppler=0;
		loop=1;
		volumeCurve="Smooth1Curve";
		sound3DProcessingType="RainRoofSmall3DProcessingType";
	};
	class Rain_MetalAn_Medium_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Rain_MetalAn_Medium_EXP_SoundShader"
		};
		volumeFactor=0.30000001;
		frequencyFactor=1;
		frequencyRandomizer=6;
		spatial=1;
		doppler=0;
		loop=1;
		volumeCurve="Smooth1Curve";
		sound3DProcessingType="RainRoofSmall3DProcessingType";
	};
	class Rain_MetalAn_Heavy_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Rain_MetalAn_Heavy_EXP_SoundShader"
		};
		volumeFactor=0.40000001;
		frequencyFactor=1;
		frequencyRandomizer=6;
		spatial=1;
		doppler=0;
		loop=1;
		volumeCurve="Smooth1Curve";
		sound3DProcessingType="RainRoofSmall3DProcessingType";
	};
	class Rain_MetalB_Light_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Rain_MetalB_Light_EXP_SoundShader"
		};
		volumeFactor=0.40000001;
		frequencyFactor=1;
		frequencyRandomizer=6;
		spatial=1;
		doppler=0;
		loop=1;
		volumeCurve="Smooth1Curve";
		sound3DProcessingType="RainRoofMedium3DProcessingType";
	};
	class Rain_MetalB_Medium_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Rain_MetalB_Medium_EXP_SoundShader"
		};
		volumeFactor=0.5;
		frequencyFactor=1;
		frequencyRandomizer=6;
		spatial=1;
		doppler=0;
		loop=1;
		volumeCurve="Smooth1Curve";
		sound3DProcessingType="RainRoofMedium3DProcessingType";
	};
	class Rain_MetalB_Heavy_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Rain_MetalB_Heavy_EXP_SoundShader"
		};
		volumeFactor=0.30000001;
		frequencyFactor=1;
		frequencyRandomizer=6;
		spatial=1;
		doppler=0;
		loop=1;
		volumeCurve="Smooth1Curve";
		sound3DProcessingType="RainRoofMedium3DProcessingType";
	};
	class Rain_MetalBn_Light_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Rain_MetalBn_Light_EXP_SoundShader"
		};
		volumeFactor=0.40000001;
		frequencyFactor=1;
		frequencyRandomizer=6;
		spatial=1;
		doppler=0;
		loop=1;
		volumeCurve="Smooth1Curve";
		sound3DProcessingType="RainRoofMedium3DProcessingType";
	};
	class Rain_MetalBn_Medium_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Rain_MetalBn_Medium_EXP_SoundShader"
		};
		volumeFactor=0.30000001;
		frequencyFactor=1;
		frequencyRandomizer=6;
		spatial=1;
		doppler=0;
		loop=1;
		volumeCurve="Smooth1Curve";
		sound3DProcessingType="RainRoofMedium3DProcessingType";
	};
	class Rain_MetalBn_Heavy_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Rain_MetalBn_Heavy_EXP_SoundShader"
		};
		volumeFactor=0.40000001;
		frequencyFactor=1;
		frequencyRandomizer=6;
		spatial=1;
		doppler=0;
		loop=1;
		volumeCurve="Smooth1Curve";
		sound3DProcessingType="RainRoofMedium3DProcessingType";
	};
	class Rain_MetalC_Light_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Rain_MetalC_Light_EXP_SoundShader"
		};
		volumeFactor=0.2;
		frequencyFactor=1;
		frequencyRandomizer=6;
		spatial=1;
		doppler=0;
		loop=1;
		volumeCurve="Smooth1Curve";
		sound3DProcessingType="RainRoofLarge3DProcessingType";
	};
	class Rain_MetalC_Medium_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Rain_MetalC_Medium_EXP_SoundShader"
		};
		volumeFactor=0.30000001;
		frequencyFactor=1;
		frequencyRandomizer=6;
		spatial=1;
		doppler=0;
		loop=1;
		volumeCurve="Smooth1Curve";
		sound3DProcessingType="RainRoofLarge3DProcessingType";
	};
	class Rain_MetalC_Heavy_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Rain_MetalC_Heavy_EXP_SoundShader"
		};
		volumeFactor=0.2;
		frequencyFactor=1;
		frequencyRandomizer=6;
		spatial=1;
		doppler=0;
		loop=1;
		volumeCurve="Smooth1Curve";
		sound3DProcessingType="RainRoofLarge3DProcessingType";
	};
	class Rain_MetalCn_Light_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Rain_MetalCn_Light_EXP_SoundShader"
		};
		volumeFactor=0.2;
		frequencyFactor=1;
		frequencyRandomizer=6;
		spatial=1;
		doppler=0;
		loop=1;
		volumeCurve="Smooth1Curve";
		sound3DProcessingType="RainRoofLarge3DProcessingType";
	};
	class Rain_MetalCn_Medium_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Rain_MetalCn_Medium_EXP_SoundShader"
		};
		volumeFactor=0.30000001;
		frequencyFactor=1;
		frequencyRandomizer=6;
		spatial=1;
		doppler=0;
		loop=1;
		volumeCurve="Smooth1Curve";
		sound3DProcessingType="RainRoofLarge3DProcessingType";
	};
	class Rain_MetalCn_Heavy_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Rain_MetalCn_Heavy_EXP_SoundShader"
		};
		volumeFactor=0.2;
		frequencyFactor=1;
		frequencyRandomizer=6;
		spatial=1;
		doppler=0;
		loop=1;
		volumeCurve="Smooth1Curve";
		sound3DProcessingType="RainRoofLarge3DProcessingType";
	};
	class Rain_PlateA_Medium_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Rain_PlateA_Medium_EXP_SoundShader"
		};
		volumeFactor=1;
		frequencyFactor=1;
		frequencyRandomizer=6;
		spatial=1;
		doppler=0;
		loop=1;
		volumeCurve="Smooth1Curve";
		sound3DProcessingType="RainRoofSmall3DProcessingType";
	};
	class Rain_PlateA_Heavy_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Rain_PlateA_Heavy_EXP_SoundShader"
		};
		volumeFactor=0.5;
		frequencyFactor=1;
		frequencyRandomizer=6;
		spatial=1;
		doppler=0;
		loop=1;
		volumeCurve="Smooth1Curve";
		sound3DProcessingType="RainRoofSmall3DProcessingType";
	};
	class Rain_PlateBn_Medium_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Rain_PlateBn_Medium_EXP_SoundShader"
		};
		volumeFactor=1;
		frequencyFactor=1.3;
		frequencyRandomizer=6;
		spatial=1;
		doppler=0;
		loop=1;
		volumeCurve="Smooth1Curve";
		sound3DProcessingType="RainRoofMedium3DProcessingType";
	};
	class Rain_PlateBn_Heavy_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Rain_PlateBn_Heavy_EXP_SoundShader"
		};
		volumeFactor=0.5;
		frequencyFactor=1.3;
		frequencyRandomizer=6;
		spatial=1;
		doppler=0;
		loop=1;
		volumeCurve="Smooth1Curve";
		sound3DProcessingType="RainRoofMedium3DProcessingType";
	};
	class Rain_PlateB_Medium_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Rain_PlateB_Medium_EXP_SoundShader"
		};
		volumeFactor=1;
		frequencyFactor=1;
		frequencyRandomizer=6;
		spatial=1;
		doppler=0;
		loop=1;
		volumeCurve="Smooth1Curve";
		sound3DProcessingType="RainRoofLarge3DProcessingType";
	};
	class Rain_PlateB_Heavy_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Rain_PlateB_Heavy_EXP_SoundShader"
		};
		volumeFactor=0.5;
		frequencyFactor=1;
		frequencyRandomizer=6;
		spatial=1;
		doppler=0;
		loop=1;
		volumeCurve="Smooth1Curve";
		sound3DProcessingType="RainRoofLarge3DProcessingType";
	};
	class Water_Gutter_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Water_Gutter_EXP_SoundShader"
		};
		volumeFactor=0.80000001;
		frequencyFactor=1;
		frequencyRandomizer=3;
		spatial=1;
		doppler=0;
		loop=1;
		volumeCurve="Smooth1Curve";
		sound3DProcessingType="default3DProcessingType";
	};
	class Thunder_Norm_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Thunder_Norm_EXP_SoundShader"
		};
		volumeFactor=1;
		spatial=1;
		doppler=0;
		loop=0;
		volumeCurve="Constant1Curve";
		sound3DProcessingType="Thunder3DProcessingType";
	};
	class Thunder_Heavy_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Thunder_Heavy_EXP_SoundShader"
		};
		volumeFactor=1;
		spatial=1;
		doppler=0;
		loop=0;
		volumeCurve="Constant1Curve";
		sound3DProcessingType="Thunder3DProcessingType";
	};
	class Air_Condition_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Air_Condition_EXP_SoundShader"
		};
		volumeFactor=0.5;
		frequencyRandomizer=6;
		spatial=1;
		doppler=0;
		loop=1;
		volumeCurve="InverseSquare1Curve";
		sound3DProcessingType="PLant3DProcessingType";
	};
	class Electric_Box_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Electric_Box_EXP_SoundShader"
		};
		volumeFactor=0.2;
		volumeRandomizer=1.4125376;
		frequencyRandomizer=12;
		spatial=1;
		doppler=0;
		loop=1;
		volumeCurve="InverseSquare1Curve";
		sound3DProcessingType="PLant3DProcessingType";
	};
	class Metal_Stress_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Metal_Stress_EXP_SoundShader"
		};
		volumeFactor=0.2;
		volumeRandomizer=0;
		frequencyFactor=0.80000001;
		frequencyRandomizer=12;
		spatial=1;
		doppler=0;
		loop=1;
		delay=20;
		delayRandomizer=10;
		volumeCurve="InverseSquare1Curve";
		sound3DProcessingType="RainRoofLarge3DProcessingType";
	};
	class Metal_Stress_High_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Metal_Stress_EXP_SoundShader"
		};
		volumeFactor=0.15000001;
		frequencyFactor=2;
		volumeRandomizer=0;
		frequencyRandomizer=12;
		spatial=1;
		doppler=0;
		loop=1;
		delay=15;
		delayRandomizer=10;
		volumeCurve="InverseSquare1Curve";
		sound3DProcessingType="RainRoofLarge3DProcessingType";
	};
	class Metal_StressWind_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Metal_StressWind_EXP_SoundShader"
		};
		volumeFactor=0.40000001;
		volumeRandomizer=0;
		frequencyFactor=0.80000001;
		frequencyRandomizer=12;
		spatial=1;
		doppler=0;
		loop=1;
		delay=4;
		delayRandomizer=1;
		volumeCurve="InverseSquare1Curve";
		sound3DProcessingType="RainRoofLarge3DProcessingType";
	};
	class Metal_StressWind_High_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Metal_StressWind_EXP_SoundShader"
		};
		volumeFactor=0.40000001;
		frequencyFactor=2;
		volumeRandomizer=0;
		frequencyRandomizer=12;
		spatial=1;
		doppler=0;
		loop=1;
		delay=4;
		delayRandomizer=1;
		volumeCurve="InverseSquare1Curve";
		sound3DProcessingType="RainRoofLarge3DProcessingType";
	};
	class Rock_Debris_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Rock_Debris_EXP_SoundShader"
		};
		volumeFactor=0.30000001;
		frequencyFactor=1;
		volumeRandomizer=0;
		frequencyRandomizer=12;
		spatial=1;
		doppler=0;
		loop=1;
		delay=30;
		delayRandomizer=10;
		volumeCurve="InverseSquare1Curve";
		sound3DProcessingType="PLant3DProcessingType";
	};
	class Rock_Debris_High_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Rock_Debris_EXP_SoundShader"
		};
		volumeFactor=0.30000001;
		frequencyFactor=1.5;
		volumeRandomizer=0;
		frequencyRandomizer=12;
		spatial=1;
		doppler=0;
		loop=1;
		delay=30;
		delayRandomizer=10;
		volumeCurve="InverseSquare1Curve";
		sound3DProcessingType="PLant3DProcessingType";
	};
	class ClothesWind_EXP_SoundSet
	{
		soundShaders[]=
		{
			"ClothesWind_EXP_SoundShader"
		};
		volumeFactor=2;
		frequencyFactor=1;
		spatial=1;
		doppler=0;
		loop=1;
		volumeCurve="InverseSquare1Curve";
		sound3DProcessingType="PLant3DProcessingType";
	};
	class MetalFenceWind_EXP_SoundSet
	{
		soundShaders[]=
		{
			"MetalFenceWind_EXP_SoundShader"
		};
		volumeFactor=1;
		frequencyFactor=1;
		spatial=1;
		doppler=0;
		loop=1;
		volumeCurve="InverseSquare1Curve";
		sound3DProcessingType="PLant3DProcessingType";
	};
	class Metal_DebrisWind_Small_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Metal_DebrisWind_Small_EXP_SoundShader"
		};
		volumeFactor=1;
		frequencyFactor=1.5;
		volumeRandomizer=0;
		frequencyRandomizer=12;
		spatial=1;
		doppler=0;
		loop=1;
		delay=5;
		delayRandomizer=4;
		volumeCurve="InverseSquare1Curve";
		sound3DProcessingType="PLant3DProcessingType";
	};
	class Metal_DebrisWind_Medium_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Metal_DebrisWind_Medium_EXP_SoundShader"
		};
		volumeFactor=1;
		frequencyFactor=1;
		volumeRandomizer=0;
		frequencyRandomizer=12;
		spatial=1;
		doppler=0;
		loop=1;
		delay=5;
		delayRandomizer=4;
		volumeCurve="InverseSquare1Curve";
		sound3DProcessingType="PLant3DProcessingType";
	};
	class Metal_DebrisWind_Large_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Metal_DebrisWind_Large_EXP_SoundShader"
		};
		volumeFactor=1.5;
		frequencyFactor=0.60000002;
		volumeRandomizer=0;
		frequencyRandomizer=12;
		spatial=1;
		doppler=0;
		loop=1;
		delay=5;
		delayRandomizer=4;
		volumeCurve="InverseSquare1Curve";
		sound3DProcessingType="PLant3DProcessingType";
	};
	class Rock_DebrisWind_Small_EXP_SoundSet
	{
		soundShaders[]=
		{
			"Rock_DebrisWind_Small_EXP_SoundShader"
		};
		volumeFactor=1;
		frequencyFactor=1;
		volumeRandomizer=0;
		frequencyRandomizer=6;
		spatial=1;
		doppler=0;
		loop=1;
		delay=5;
		delayRandomizer=4;
		volumeCurve="InverseSquare1Curve";
		sound3DProcessingType="PLant3DProcessingType";
	};
};
class CfgWorlds
{
	class DefaultWorld
	{
		class EnvSounds;
	};
	class CAWorld: DefaultWorld
	{
		class EnvSounds: EnvSounds
		{
			class CfgEnvSpatialSounds;
		};
	};
	class Tanoa: CAWorld
	{
		class EnvSounds: EnvSounds
		{
			class CfgEnvSpatialSounds: CfgEnvSpatialSounds
			{
				class sound_shrub_smallleaves_1
				{
					memPoint="sound_shrub_smallleaves_1";
					soundSets[]=
					{
						"Rain_PlantA_Light_EXP_SoundSet",
						"Rain_PlantA_Medium_EXP_SoundSet",
						"Rain_PlantA_Heavy_EXP_SoundSet",
						"Insect_Day_EXP_SoundSet",
						"Insect_Night_EXP_SoundSet"
					};
				};
				class sound_shrub_smallleaves_2
				{
					memPoint="sound_shrub_smallleaves_2";
					soundSets[]=
					{
						"Rain_PlantA_Light_EXP_SoundSet",
						"Rain_PlantA_Medium_EXP_SoundSet",
						"Rain_PlantA_Heavy_EXP_SoundSet",
						"Insect_Day_EXP_SoundSet",
						"Insect_Night_EXP_SoundSet"
					};
				};
				class sound_shrub_smallleaves_3
				{
					memPoint="sound_shrub_smallleaves_3";
					soundSets[]=
					{
						"Rain_PlantA_Light_EXP_SoundSet",
						"Rain_PlantA_Medium_EXP_SoundSet",
						"Rain_PlantA_Heavy_EXP_SoundSet",
						"Insect_Day_EXP_SoundSet",
						"Insect_Night_EXP_SoundSet"
					};
				};
				class sound_shrub_mediumleaves_1
				{
					memPoint="sound_shrub_mediumleaves_1";
					soundSets[]=
					{
						"Rain_PlantB_Light_EXP_SoundSet",
						"Rain_PlantB_Medium_EXP_SoundSet",
						"Rain_PlantB_Heavy_EXP_SoundSet",
						"Insect_Day_EXP_SoundSet",
						"Insect_Night_EXP_SoundSet"
					};
				};
				class sound_shrub_bigleaves_1
				{
					memPoint="sound_shrub_bigleaves_1";
					soundSets[]=
					{
						"Rain_PlantC_Light_EXP_SoundSet",
						"Rain_PlantC_Medium_EXP_SoundSet",
						"Rain_PlantC_Heavy_EXP_SoundSet",
						"Insect_Day_EXP_SoundSet",
						"Insect_Night_EXP_SoundSet"
					};
				};
				class sound_tree_bigleaves_1
				{
					memPoint="sound_tree_bigleaves_1";
					soundSets[]=
					{
						"Rain_PlantC_Light_EXP_SoundSet",
						"Rain_PlantC_Medium_EXP_SoundSet",
						"Rain_PlantC_Heavy_EXP_SoundSet",
						"Insect_Day_EXP_SoundSet",
						"Insect_Night_EXP_SoundSet"
					};
				};
				class sound_smalltree_mediumleaves_1
				{
					memPoint="sound_smalltree_mediumleaves_1";
					soundSets[]=
					{
						"Rain_Tree_Light_EXP_SoundSet",
						"Rain_Tree_Medium_EXP_SoundSet",
						"Rain_Tree_Heavy_EXP_SoundSet",
						"Wind_LeavesC_EXP_SoundSet",
						"Forest_Birds_All_Day_EXP_SoundSet",
						"Forest_Birds_All_Night_EXP_SoundSet",
						"Meadows_Birds_All_Day_EXP_SoundSet"
					};
				};
				class sound_smalltree_smallleaves_1
				{
					memPoint="sound_smalltree_smallleaves_1";
					soundSets[]=
					{
						"Rain_SmallTree_Light_EXP_SoundSet",
						"Rain_SmallTree_Medium_EXP_SoundSet",
						"Rain_SmallTree_Heavy_EXP_SoundSet",
						"Wind_LeavesA_Narrow_EXP_SoundSet",
						"Forest_Birds_All_Day_EXP_SoundSet",
						"Forest_Birds_All_Night_EXP_SoundSet",
						"Meadows_Birds_All_Day_EXP_SoundSet"
					};
				};
				class sound_tree_smallleaves_1
				{
					memPoint="sound_tree_smallleaves_1";
					soundSets[]=
					{
						"Rain_Tree_Light_EXP_SoundSet",
						"Rain_Tree_Medium_EXP_SoundSet",
						"Rain_Tree_Heavy_EXP_SoundSet",
						"Wind_LeavesA_EXP_SoundSet",
						"Forest_Birds_All_Day_EXP_SoundSet",
						"Forest_Birds_All_Night_EXP_SoundSet",
						"Meadows_Birds_All_Day_EXP_SoundSet"
					};
				};
				class sound_tree_mediumleaves_1
				{
					memPoint="sound_tree_mediumleaves_1";
					soundSets[]=
					{
						"Rain_WideTree_Light_EXP_SoundSet",
						"Rain_WideTree_Medium_EXP_SoundSet",
						"Rain_WideTree_Heavy_EXP_SoundSet",
						"Wind_LeavesC_EXP_SoundSet",
						"Forest_Birds_All_Day_EXP_SoundSet",
						"Forest_Birds_All_Night_EXP_SoundSet",
						"Meadows_Birds_All_Day_EXP_SoundSet"
					};
				};
				class sound_widetree_smallleaves_1
				{
					memPoint="sound_widetree_smallleaves_1";
					soundSets[]=
					{
						"Rain_WideTree_Light_EXP_SoundSet",
						"Rain_WideTree_Medium_EXP_SoundSet",
						"Rain_WideTree_Heavy_EXP_SoundSet",
						"Wind_LeavesC_EXP_SoundSet",
						"Forest_Birds_All_Day_EXP_SoundSet",
						"Forest_Birds_All_Night_EXP_SoundSet",
						"Meadows_Birds_All_Day_EXP_SoundSet"
					};
				};
				class sound_widetree_mediumleaves_1
				{
					memPoint="sound_widetree_mediumleaves_1";
					soundSets[]=
					{
						"Rain_WideTree_Light_EXP_SoundSet",
						"Rain_WideTree_Medium_EXP_SoundSet",
						"Rain_WideTree_Heavy_EXP_SoundSet",
						"Wind_LeavesC_EXP_SoundSet",
						"Forest_Birds_All_Day_EXP_SoundSet",
						"Forest_Birds_All_Night_EXP_SoundSet",
						"Meadows_Birds_All_Day_EXP_SoundSet"
					};
				};
				class sound_watertree_mediumleaves_1
				{
					memPoint="sound_watertree_mediumleaves_1";
					soundSets[]=
					{
						"Rain_Tree_Light_EXP_SoundSet",
						"Rain_Tree_Medium_EXP_SoundSet",
						"Rain_Tree_Heavy_EXP_SoundSet",
						"Wind_LeavesC_EXP_SoundSet",
						"Meadows_Birds_All_Day_EXP_SoundSet"
					};
				};
				class sound_tree_palmleaves_1
				{
					memPoint="sound_tree_palmleaves_1";
					soundSets[]=
					{
						"Rain_Tree_Light_EXP_SoundSet",
						"Rain_Tree_Medium_EXP_SoundSet",
						"Rain_Tree_Heavy_EXP_SoundSet",
						"Forest_Birds_All_Day_EXP_SoundSet",
						"Forest_Birds_All_Night_EXP_SoundSet",
						"Meadows_Birds_All_Day_EXP_SoundSet"
					};
				};
				class sound_rain_metalTin_tiny_1
				{
					memPoint="sound_rain_metalTin_tiny_1";
					soundSets[]=
					{
						"Rain_MetalT_Light_EXP_SoundSet",
						"Rain_MetalT_Medium_EXP_SoundSet",
						"Rain_MetalT_Heavy_EXP_SoundSet",
						"Metal_DebrisWind_Small_EXP_SoundSet",
						"Rock_DebrisWind_Small_EXP_SoundSet"
					};
				};
				class sound_rain_metalTin_tiny_2
				{
					memPoint="sound_rain_metalTin_tiny_2";
					soundSets[]=
					{
						"Rain_MetalT_Light_EXP_SoundSet",
						"Rain_MetalT_Medium_EXP_SoundSet",
						"Rain_MetalT_Heavy_EXP_SoundSet",
						"Metal_DebrisWind_Small_EXP_SoundSet"
					};
				};
				class sound_rain_metalTin_tiny_3
				{
					memPoint="sound_rain_metalTin_tiny_3";
					soundSets[]=
					{
						"Rain_MetalT_Light_EXP_SoundSet",
						"Rain_MetalT_Medium_EXP_SoundSet",
						"Rain_MetalT_Heavy_EXP_SoundSet",
						"Metal_DebrisWind_Small_EXP_SoundSet"
					};
				};
				class sound_rain_metalTin_tiny_4
				{
					memPoint="sound_rain_metalTin_tiny_4";
					soundSets[]=
					{
						"Rain_MetalT_Light_EXP_SoundSet",
						"Rain_MetalT_Medium_EXP_SoundSet",
						"Rain_MetalT_Heavy_EXP_SoundSet",
						"Metal_DebrisWind_Small_EXP_SoundSet"
					};
				};
				class sound_rain_metalTin_tiny_5
				{
					memPoint="sound_rain_metalTin_tiny_5";
					soundSets[]=
					{
						"Rain_MetalT_Light_EXP_SoundSet",
						"Rain_MetalT_Medium_EXP_SoundSet",
						"Rain_MetalT_Heavy_EXP_SoundSet",
						"Metal_DebrisWind_Small_EXP_SoundSet"
					};
				};
				class sound_rain_metalTin_tiny_6
				{
					memPoint="sound_rain_metalTin_tiny_6";
					soundSets[]=
					{
						"Rain_MetalT_Light_EXP_SoundSet",
						"Rain_MetalT_Medium_EXP_SoundSet",
						"Rain_MetalT_Heavy_EXP_SoundSet",
						"Metal_DebrisWind_Small_EXP_SoundSet"
					};
				};
				class sound_rain_metalTin_tiny_7
				{
					memPoint="sound_rain_metalTin_tiny_7";
					soundSets[]=
					{
						"Rain_MetalT_Light_EXP_SoundSet",
						"Rain_MetalT_Medium_EXP_SoundSet",
						"Rain_MetalT_Heavy_EXP_SoundSet",
						"Metal_DebrisWind_Small_EXP_SoundSet"
					};
				};
				class sound_rain_metalTin_tiny_8
				{
					memPoint="sound_rain_metalTin_tiny_8";
					soundSets[]=
					{
						"Rain_MetalT_Light_EXP_SoundSet",
						"Rain_MetalT_Medium_EXP_SoundSet",
						"Rain_MetalT_Heavy_EXP_SoundSet",
						"Metal_DebrisWind_Small_EXP_SoundSet"
					};
				};
				class sound_rain_metalTin_tiny_9
				{
					memPoint="sound_rain_metalTin_tiny_9";
					soundSets[]=
					{
						"Rain_MetalT_Light_EXP_SoundSet",
						"Rain_MetalT_Medium_EXP_SoundSet",
						"Rain_MetalT_Heavy_EXP_SoundSet",
						"Metal_DebrisWind_Small_EXP_SoundSet"
					};
				};
				class sound_rain_metalTin_tiny_10
				{
					memPoint="sound_rain_metalTin_tiny_10";
					soundSets[]=
					{
						"Rain_MetalT_Light_EXP_SoundSet",
						"Rain_MetalT_Medium_EXP_SoundSet",
						"Rain_MetalT_Heavy_EXP_SoundSet",
						"Metal_DebrisWind_Small_EXP_SoundSet"
					};
				};
				class sound_rain_metalTin_tiny_11
				{
					memPoint="sound_rain_metalTin_tiny_11";
					soundSets[]=
					{
						"Rain_MetalT_Light_EXP_SoundSet",
						"Rain_MetalT_Medium_EXP_SoundSet",
						"Rain_MetalT_Heavy_EXP_SoundSet",
						"Metal_DebrisWind_Small_EXP_SoundSet"
					};
				};
				class sound_rain_metalTin_tiny_12
				{
					memPoint="sound_rain_metalTin_tiny_12";
					soundSets[]=
					{
						"Rain_MetalT_Light_EXP_SoundSet",
						"Rain_MetalT_Medium_EXP_SoundSet",
						"Rain_MetalT_Heavy_EXP_SoundSet",
						"Metal_DebrisWind_Small_EXP_SoundSet"
					};
				};
				class sound_rain_metalTin_tiny_13
				{
					memPoint="sound_rain_metalTin_tiny_13";
					soundSets[]=
					{
						"Rain_MetalT_Light_EXP_SoundSet",
						"Rain_MetalT_Medium_EXP_SoundSet",
						"Rain_MetalT_Heavy_EXP_SoundSet",
						"Metal_DebrisWind_Small_EXP_SoundSet"
					};
				};
				class sound_rain_metalTin_tiny_14
				{
					memPoint="sound_rain_metalTin_tiny_14";
					soundSets[]=
					{
						"Rain_MetalT_Light_EXP_SoundSet",
						"Rain_MetalT_Medium_EXP_SoundSet",
						"Rain_MetalT_Heavy_EXP_SoundSet",
						"Metal_DebrisWind_Small_EXP_SoundSet"
					};
				};
				class sound_rain_metalTin_tiny_15
				{
					memPoint="sound_rain_metalTin_tiny_15";
					soundSets[]=
					{
						"Rain_MetalT_Light_EXP_SoundSet",
						"Rain_MetalT_Medium_EXP_SoundSet",
						"Rain_MetalT_Heavy_EXP_SoundSet",
						"Metal_DebrisWind_Small_EXP_SoundSet"
					};
				};
				class sound_rain_metalTin_tiny_16
				{
					memPoint="sound_rain_metalTin_tiny_16";
					soundSets[]=
					{
						"Rain_MetalT_Light_EXP_SoundSet",
						"Rain_MetalT_Medium_EXP_SoundSet",
						"Rain_MetalT_Heavy_EXP_SoundSet",
						"Metal_DebrisWind_Small_EXP_SoundSet"
					};
				};
				class sound_rain_metalTin_tiny_17
				{
					memPoint="sound_rain_metalTin_tiny_17";
					soundSets[]=
					{
						"Rain_MetalT_Light_EXP_SoundSet",
						"Rain_MetalT_Medium_EXP_SoundSet",
						"Rain_MetalT_Heavy_EXP_SoundSet",
						"Metal_DebrisWind_Small_EXP_SoundSet"
					};
				};
				class sound_rain_metalTin_tiny_18
				{
					memPoint="sound_rain_metalTin_tiny_18";
					soundSets[]=
					{
						"Rain_MetalT_Light_EXP_SoundSet",
						"Rain_MetalT_Medium_EXP_SoundSet",
						"Rain_MetalT_Heavy_EXP_SoundSet",
						"Metal_DebrisWind_Small_EXP_SoundSet"
					};
				};
				class sound_rain_metalTin_tiny_19
				{
					memPoint="sound_rain_metalTin_tiny_19";
					soundSets[]=
					{
						"Rain_MetalT_Light_EXP_SoundSet",
						"Rain_MetalT_Medium_EXP_SoundSet",
						"Rain_MetalT_Heavy_EXP_SoundSet",
						"Metal_DebrisWind_Small_EXP_SoundSet"
					};
				};
				class sound_rain_metalTin_tiny_20
				{
					memPoint="sound_rain_metalTin_tiny_20";
					soundSets[]=
					{
						"Rain_MetalT_Light_EXP_SoundSet",
						"Rain_MetalT_Medium_EXP_SoundSet",
						"Rain_MetalT_Heavy_EXP_SoundSet",
						"Metal_DebrisWind_Small_EXP_SoundSet"
					};
				};
				class sound_rain_metalTin_tiny_21
				{
					memPoint="sound_rain_metalTin_tiny_21";
					soundSets[]=
					{
						"Rain_MetalT_Light_EXP_SoundSet",
						"Rain_MetalT_Medium_EXP_SoundSet",
						"Rain_MetalT_Heavy_EXP_SoundSet",
						"Metal_DebrisWind_Small_EXP_SoundSet"
					};
				};
				class sound_rain_metalTin_tiny_22
				{
					memPoint="sound_rain_metalTin_tiny_22";
					soundSets[]=
					{
						"Rain_MetalT_Light_EXP_SoundSet",
						"Rain_MetalT_Medium_EXP_SoundSet",
						"Rain_MetalT_Heavy_EXP_SoundSet",
						"Metal_DebrisWind_Small_EXP_SoundSet"
					};
				};
				class sound_rain_metalTin_tiny_23
				{
					memPoint="sound_rain_metalTin_tiny_23";
					soundSets[]=
					{
						"Rain_MetalT_Light_EXP_SoundSet",
						"Rain_MetalT_Medium_EXP_SoundSet",
						"Rain_MetalT_Heavy_EXP_SoundSet",
						"Metal_DebrisWind_Small_EXP_SoundSet"
					};
				};
				class sound_rain_metalTin_small_1
				{
					memPoint="sound_rain_metalTin_small_1";
					soundSets[]=
					{
						"Rain_MetalA_Light_EXP_SoundSet",
						"Rain_MetalA_Medium_EXP_SoundSet",
						"Rain_MetalA_Heavy_EXP_SoundSet",
						"Metal_DebrisWind_Small_EXP_SoundSet"
					};
				};
				class sound_rain_metalTin_small_2
				{
					memPoint="sound_rain_metalTin_small_2";
					soundSets[]=
					{
						"Rain_MetalA_Light_EXP_SoundSet",
						"Rain_MetalA_Medium_EXP_SoundSet",
						"Rain_MetalA_Heavy_EXP_SoundSet",
						"Metal_DebrisWind_Small_EXP_SoundSet"
					};
				};
				class sound_rain_metalTin_small_3
				{
					memPoint="sound_rain_metalTin_small_3";
					soundSets[]=
					{
						"Rain_MetalA_Light_EXP_SoundSet",
						"Rain_MetalA_Medium_EXP_SoundSet",
						"Rain_MetalA_Heavy_EXP_SoundSet",
						"Metal_DebrisWind_Small_EXP_SoundSet"
					};
				};
				class sound_rain_metalTin_small_4
				{
					memPoint="sound_rain_metalTin_small_4";
					soundSets[]=
					{
						"Rain_MetalA_Light_EXP_SoundSet",
						"Rain_MetalA_Medium_EXP_SoundSet",
						"Rain_MetalA_Heavy_EXP_SoundSet",
						"Metal_DebrisWind_Small_EXP_SoundSet"
					};
				};
				class sound_rain_metalTin_small_narrow_1
				{
					memPoint="sound_rain_metalTin_small_narrow_1";
					soundSets[]=
					{
						"Rain_MetalAn_Light_EXP_SoundSet",
						"Rain_MetalAn_Medium_EXP_SoundSet",
						"Rain_MetalAn_Heavy_EXP_SoundSet",
						"Metal_DebrisWind_Small_EXP_SoundSet"
					};
				};
				class sound_rain_metalTin_small_narrow_2
				{
					memPoint="sound_rain_metalTin_small_narrow_2";
					soundSets[]=
					{
						"Rain_MetalAn_Light_EXP_SoundSet",
						"Rain_MetalAn_Medium_EXP_SoundSet",
						"Rain_MetalAn_Heavy_EXP_SoundSet",
						"Metal_DebrisWind_Small_EXP_SoundSet"
					};
				};
				class sound_rain_metalTin_small_narrow_3
				{
					memPoint="sound_rain_metalTin_small_narrow_3";
					soundSets[]=
					{
						"Rain_MetalAn_Light_EXP_SoundSet",
						"Rain_MetalAn_Medium_EXP_SoundSet",
						"Rain_MetalAn_Heavy_EXP_SoundSet",
						"Metal_DebrisWind_Small_EXP_SoundSet"
					};
				};
				class sound_rain_metalTin_small_narrow_4
				{
					memPoint="sound_rain_metalTin_small_narrow_4";
					soundSets[]=
					{
						"Rain_MetalAn_Light_EXP_SoundSet",
						"Rain_MetalAn_Medium_EXP_SoundSet",
						"Rain_MetalAn_Heavy_EXP_SoundSet",
						"Metal_DebrisWind_Small_EXP_SoundSet"
					};
				};
				class sound_rain_metalTin_medium_1
				{
					memPoint="sound_rain_metalTin_medium_1";
					soundSets[]=
					{
						"Rain_MetalB_Light_EXP_SoundSet",
						"Rain_MetalB_Medium_EXP_SoundSet",
						"Rain_MetalB_Heavy_EXP_SoundSet",
						"Metal_DebrisWind_Medium_EXP_SoundSet"
					};
				};
				class sound_rain_metalTin_medium_2
				{
					memPoint="sound_rain_metalTin_medium_2";
					soundSets[]=
					{
						"Rain_MetalB_Light_EXP_SoundSet",
						"Rain_MetalB_Medium_EXP_SoundSet",
						"Rain_MetalB_Heavy_EXP_SoundSet",
						"Metal_DebrisWind_Medium_EXP_SoundSet"
					};
				};
				class sound_rain_metalTin_medium_3
				{
					memPoint="sound_rain_metalTin_medium_3";
					soundSets[]=
					{
						"Rain_MetalB_Light_EXP_SoundSet",
						"Rain_MetalB_Medium_EXP_SoundSet",
						"Rain_MetalB_Heavy_EXP_SoundSet",
						"Metal_DebrisWind_Medium_EXP_SoundSet"
					};
				};
				class sound_rain_metalTin_medium_4
				{
					memPoint="sound_rain_metalTin_medium_4";
					soundSets[]=
					{
						"Rain_MetalB_Light_EXP_SoundSet",
						"Rain_MetalB_Medium_EXP_SoundSet",
						"Rain_MetalB_Heavy_EXP_SoundSet",
						"Metal_DebrisWind_Medium_EXP_SoundSet"
					};
				};
				class sound_rain_metalTin_medium_5
				{
					memPoint="sound_rain_metalTin_medium_5";
					soundSets[]=
					{
						"Rain_MetalB_Light_EXP_SoundSet",
						"Rain_MetalB_Medium_EXP_SoundSet",
						"Rain_MetalB_Heavy_EXP_SoundSet",
						"Metal_DebrisWind_Medium_EXP_SoundSet"
					};
				};
				class sound_rain_metalTin_medium_narrow_1
				{
					memPoint="sound_rain_metalTin_medium_narrow_1";
					soundSets[]=
					{
						"Rain_MetalBn_Light_EXP_SoundSet",
						"Rain_MetalBn_Medium_EXP_SoundSet",
						"Rain_MetalBn_Heavy_EXP_SoundSet",
						"Metal_DebrisWind_Medium_EXP_SoundSet"
					};
				};
				class sound_rain_metalTin_medium_narrow_2
				{
					memPoint="sound_rain_metalTin_medium_narrow_2";
					soundSets[]=
					{
						"Rain_MetalBn_Light_EXP_SoundSet",
						"Rain_MetalBn_Medium_EXP_SoundSet",
						"Rain_MetalBn_Heavy_EXP_SoundSet",
						"Metal_DebrisWind_Medium_EXP_SoundSet"
					};
				};
				class sound_rain_metalTin_medium_narrow_3
				{
					memPoint="sound_rain_metalTin_medium_narrow_3";
					soundSets[]=
					{
						"Rain_MetalBn_Light_EXP_SoundSet",
						"Rain_MetalBn_Medium_EXP_SoundSet",
						"Rain_MetalBn_Heavy_EXP_SoundSet",
						"Metal_DebrisWind_Medium_EXP_SoundSet"
					};
				};
				class sound_rain_metalTin_medium_narrow_4
				{
					memPoint="sound_rain_metalTin_medium_narrow_4";
					soundSets[]=
					{
						"Rain_MetalBn_Light_EXP_SoundSet",
						"Rain_MetalBn_Medium_EXP_SoundSet",
						"Rain_MetalBn_Heavy_EXP_SoundSet",
						"Metal_DebrisWind_Medium_EXP_SoundSet"
					};
				};
				class sound_rain_metalTin_large_1
				{
					memPoint="sound_rain_metalTin_large_1";
					soundSets[]=
					{
						"Rain_MetalC_Light_EXP_SoundSet",
						"Rain_MetalC_Medium_EXP_SoundSet",
						"Rain_MetalC_Heavy_EXP_SoundSet",
						"Metal_DebrisWind_Large_EXP_SoundSet"
					};
				};
				class sound_rain_metalTin_large_2
				{
					memPoint="sound_rain_metalTin_large_2";
					soundSets[]=
					{
						"Rain_MetalC_Light_EXP_SoundSet",
						"Rain_MetalC_Medium_EXP_SoundSet",
						"Rain_MetalC_Heavy_EXP_SoundSet",
						"Metal_DebrisWind_Large_EXP_SoundSet"
					};
				};
				class sound_rain_metalTin_large_3
				{
					memPoint="sound_rain_metalTin_large_3";
					soundSets[]=
					{
						"Rain_MetalC_Light_EXP_SoundSet",
						"Rain_MetalC_Medium_EXP_SoundSet",
						"Rain_MetalC_Heavy_EXP_SoundSet",
						"Metal_DebrisWind_Large_EXP_SoundSet"
					};
				};
				class sound_rain_metalTin_large_4
				{
					memPoint="sound_rain_metalTin_large_4";
					soundSets[]=
					{
						"Rain_MetalC_Light_EXP_SoundSet",
						"Rain_MetalC_Medium_EXP_SoundSet",
						"Rain_MetalC_Heavy_EXP_SoundSet",
						"Metal_DebrisWind_Large_EXP_SoundSet"
					};
				};
				class sound_rain_metalTin_large_narrow_1
				{
					memPoint="sound_rain_metalTin_large_narrow_1";
					soundSets[]=
					{
						"Rain_MetalCn_Light_EXP_SoundSet",
						"Rain_MetalCn_Medium_EXP_SoundSet",
						"Rain_MetalCn_Heavy_EXP_SoundSet",
						"Metal_DebrisWind_Large_EXP_SoundSet"
					};
				};
				class sound_rain_metalTin_large_narrow_2
				{
					memPoint="sound_rain_metalTin_large_narrow_2";
					soundSets[]=
					{
						"Rain_MetalCn_Light_EXP_SoundSet",
						"Rain_MetalCn_Medium_EXP_SoundSet",
						"Rain_MetalCn_Heavy_EXP_SoundSet",
						"Metal_DebrisWind_Large_EXP_SoundSet"
					};
				};
				class sound_rain_metalTin_large_narrow_3
				{
					memPoint="sound_rain_metalTin_large_narrow_3";
					soundSets[]=
					{
						"Rain_MetalCn_Light_EXP_SoundSet",
						"Rain_MetalCn_Medium_EXP_SoundSet",
						"Rain_MetalCn_Heavy_EXP_SoundSet",
						"Metal_DebrisWind_Large_EXP_SoundSet"
					};
				};
				class sound_rain_metalTin_large_narrow_4
				{
					memPoint="sound_rain_metalTin_large_narrow_4";
					soundSets[]=
					{
						"Rain_MetalCn_Light_EXP_SoundSet",
						"Rain_MetalCn_Medium_EXP_SoundSet",
						"Rain_MetalCn_Heavy_EXP_SoundSet",
						"Metal_DebrisWind_Large_EXP_SoundSet"
					};
				};
				class sound_rain_metalPlate_small_1
				{
					memPoint="sound_rain_metalPlate_small_1";
					soundSets[]=
					{
						"Rain_PlateA_Medium_EXP_SoundSet",
						"Rain_PlateA_Heavy_EXP_SoundSet"
					};
				};
				class sound_rain_metalPlate_small_2
				{
					memPoint="sound_rain_metalPlate_small_2";
					soundSets[]=
					{
						"Rain_PlateA_Medium_EXP_SoundSet",
						"Rain_PlateA_Heavy_EXP_SoundSet"
					};
				};
				class sound_metal_stairs_1
				{
					memPoint="sound_metal_stairs_1";
					soundSets[]=
					{
						"Rain_PlateA_Medium_EXP_SoundSet",
						"Rain_PlateA_Heavy_EXP_SoundSet",
						"Metal_Stress_High_EXP_SoundSet",
						"Metal_StressWind_High_EXP_SoundSet",
						"Metal_DebrisWind_Small_EXP_SoundSet"
					};
				};
				class sound_metal_stairs_2
				{
					memPoint="sound_metal_stairs_2";
					soundSets[]=
					{
						"Rain_PlateA_Medium_EXP_SoundSet",
						"Rain_PlateA_Heavy_EXP_SoundSet",
						"Metal_Stress_High_EXP_SoundSet",
						"Metal_StressWind_High_EXP_SoundSet",
						"Metal_DebrisWind_Small_EXP_SoundSet"
					};
				};
				class sound_metal_stairs_3
				{
					memPoint="sound_metal_stairs_3";
					soundSets[]=
					{
						"Rain_PlateA_Medium_EXP_SoundSet",
						"Rain_PlateA_Heavy_EXP_SoundSet",
						"Metal_Stress_High_EXP_SoundSet",
						"Metal_StressWind_High_EXP_SoundSet",
						"Metal_DebrisWind_Small_EXP_SoundSet"
					};
				};
				class sound_metal_stairs_solid_1
				{
					memPoint="sound_metal_stairs_solid_1";
					soundSets[]=
					{
						"Rain_PlateA_Medium_EXP_SoundSet",
						"Rain_PlateA_Heavy_EXP_SoundSet",
						"Metal_StressWind_High_EXP_SoundSet",
						"Metal_DebrisWind_Small_EXP_SoundSet"
					};
				};
				class sound_metal_stairs_solid_2
				{
					memPoint="sound_metal_stairs_solid_2";
					soundSets[]=
					{
						"Rain_PlateA_Medium_EXP_SoundSet",
						"Rain_PlateA_Heavy_EXP_SoundSet",
						"Metal_StressWind_High_EXP_SoundSet",
						"Metal_DebrisWind_Small_EXP_SoundSet"
					};
				};
				class sound_metal_stairs_solid_3
				{
					memPoint="sound_metal_stairs_solid_3";
					soundSets[]=
					{
						"Rain_PlateA_Medium_EXP_SoundSet",
						"Rain_PlateA_Heavy_EXP_SoundSet",
						"Metal_StressWind_High_EXP_SoundSet",
						"Metal_DebrisWind_Small_EXP_SoundSet"
					};
				};
				class sound_rain_metalPlate_medium_1
				{
					memPoint="sound_rain_metalPlate_medium_1";
					soundSets[]=
					{
						"Rain_PlateBn_Medium_EXP_SoundSet",
						"Rain_PlateBn_Heavy_EXP_SoundSet"
					};
				};
				class sound_rain_metalPlate_medium_2
				{
					memPoint="sound_rain_metalPlate_medium_2";
					soundSets[]=
					{
						"Rain_PlateBn_Medium_EXP_SoundSet",
						"Rain_PlateBn_Heavy_EXP_SoundSet"
					};
				};
				class sound_rain_metalPlate_medium_3
				{
					memPoint="sound_rain_metalPlate_medium_3";
					soundSets[]=
					{
						"Rain_PlateBn_Medium_EXP_SoundSet",
						"Rain_PlateBn_Heavy_EXP_SoundSet"
					};
				};
				class sound_rain_metalPlate_medium_4
				{
					memPoint="sound_rain_metalPlate_medium_4";
					soundSets[]=
					{
						"Rain_PlateBn_Medium_EXP_SoundSet",
						"Rain_PlateBn_Heavy_EXP_SoundSet"
					};
				};
				class sound_rain_metalPlate_medium_5
				{
					memPoint="sound_rain_metalPlate_medium_5";
					soundSets[]=
					{
						"Rain_PlateBn_Medium_EXP_SoundSet",
						"Rain_PlateBn_Heavy_EXP_SoundSet"
					};
				};
				class sound_rain_metalPlate_medium_6
				{
					memPoint="sound_rain_metalPlate_medium_6";
					soundSets[]=
					{
						"Rain_PlateBn_Medium_EXP_SoundSet",
						"Rain_PlateBn_Heavy_EXP_SoundSet"
					};
				};
				class sound_rain_metalPlate_large_1
				{
					memPoint="sound_rain_metalPlate_large_1";
					soundSets[]=
					{
						"Rain_PlateB_Medium_EXP_SoundSet",
						"Rain_PlateB_Heavy_EXP_SoundSet"
					};
				};
				class sound_rain_metalPlate_large_2
				{
					memPoint="sound_rain_metalPlate_large_2";
					soundSets[]=
					{
						"Rain_PlateB_Medium_EXP_SoundSet",
						"Rain_PlateB_Heavy_EXP_SoundSet"
					};
				};
				class sound_gutter_1
				{
					memPoint="sound_gutter_1";
					soundSets[]=
					{
						"Water_Gutter_EXP_SoundSet",
						"Rock_DebrisWind_Small_EXP_SoundSet"
					};
				};
				class sound_gutter_2
				{
					memPoint="sound_gutter_2";
					soundSets[]=
					{
						"Water_Gutter_EXP_SoundSet",
						"Rock_DebrisWind_Small_EXP_SoundSet"
					};
				};
				class sound_gutter_3
				{
					memPoint="sound_gutter_3";
					soundSets[]=
					{
						"Water_Gutter_EXP_SoundSet",
						"Rock_DebrisWind_Small_EXP_SoundSet"
					};
				};
				class sound_gutter_4
				{
					memPoint="sound_gutter_4";
					soundSets[]=
					{
						"Water_Gutter_EXP_SoundSet",
						"Rock_DebrisWind_Small_EXP_SoundSet"
					};
				};
				class sound_gutter_5
				{
					memPoint="sound_gutter_5";
					soundSets[]=
					{
						"Water_Gutter_EXP_SoundSet",
						"Rock_DebrisWind_Small_EXP_SoundSet"
					};
				};
				class sound_gutter_6
				{
					memPoint="sound_gutter_6";
					soundSets[]=
					{
						"Water_Gutter_EXP_SoundSet",
						"Rock_DebrisWind_Small_EXP_SoundSet"
					};
				};
				class sound_gutter_7
				{
					memPoint="sound_gutter_7";
					soundSets[]=
					{
						"Water_Gutter_EXP_SoundSet",
						"Rock_DebrisWind_Small_EXP_SoundSet"
					};
				};
				class sound_gutter_8
				{
					memPoint="sound_gutter_8";
					soundSets[]=
					{
						"Water_Gutter_EXP_SoundSet",
						"Rock_DebrisWind_Small_EXP_SoundSet"
					};
				};
				class sound_air_condition_1
				{
					memPoint="sound_air_condition_1";
					soundSets[]=
					{
						"Rain_MetalT_Light_EXP_SoundSet",
						"Rain_MetalT_Medium_EXP_SoundSet",
						"Rain_MetalT_Heavy_EXP_SoundSet",
						"Air_Condition_EXP_SoundSet"
					};
				};
				class sound_air_condition_2
				{
					memPoint="sound_air_condition_2";
					soundSets[]=
					{
						"Rain_MetalT_Light_EXP_SoundSet",
						"Rain_MetalT_Medium_EXP_SoundSet",
						"Rain_MetalT_Heavy_EXP_SoundSet",
						"Air_Condition_EXP_SoundSet"
					};
				};
				class sound_air_condition_3
				{
					memPoint="sound_air_condition_3";
					soundSets[]=
					{
						"Rain_MetalT_Light_EXP_SoundSet",
						"Rain_MetalT_Medium_EXP_SoundSet",
						"Rain_MetalT_Heavy_EXP_SoundSet",
						"Air_Condition_EXP_SoundSet"
					};
				};
				class sound_air_condition_4
				{
					memPoint="sound_air_condition_4";
					soundSets[]=
					{
						"Rain_MetalT_Light_EXP_SoundSet",
						"Rain_MetalT_Medium_EXP_SoundSet",
						"Rain_MetalT_Heavy_EXP_SoundSet",
						"Air_Condition_EXP_SoundSet"
					};
				};
				class sound_air_condition_5
				{
					memPoint="sound_air_condition_5";
					soundSets[]=
					{
						"Rain_MetalT_Light_EXP_SoundSet",
						"Rain_MetalT_Medium_EXP_SoundSet",
						"Rain_MetalT_Heavy_EXP_SoundSet",
						"Air_Condition_EXP_SoundSet"
					};
				};
				class sound_electric_box_1
				{
					memPoint="sound_electric_box_1";
					soundSets[]=
					{
						"Electric_Box_EXP_SoundSet"
					};
				};
				class sound_electric_box_2
				{
					memPoint="sound_electric_box_2";
					soundSets[]=
					{
						"Electric_Box_EXP_SoundSet"
					};
				};
				class sound_electric_box_3
				{
					memPoint="sound_electric_box_3";
					soundSets[]=
					{
						"Electric_Box_EXP_SoundSet"
					};
				};
				class sound_electric_box_4
				{
					memPoint="sound_electric_box_4";
					soundSets[]=
					{
						"Electric_Box_EXP_SoundSet"
					};
				};
				class sound_electric_box_5
				{
					memPoint="sound_electric_box_5";
					soundSets[]=
					{
						"Electric_Box_EXP_SoundSet"
					};
				};
				class sound_metal_tension_1
				{
					memPoint="sound_metal_tension_1";
					soundSets[]=
					{
						"Metal_Stress_EXP_SoundSet",
						"Metal_StressWind_EXP_SoundSet"
					};
				};
				class sound_metal_tension_2
				{
					memPoint="sound_metal_tension_2";
					soundSets[]=
					{
						"Metal_Stress_EXP_SoundSet",
						"Metal_StressWind_EXP_SoundSet"
					};
				};
				class sound_metal_tension_3
				{
					memPoint="sound_metal_tension_3";
					soundSets[]=
					{
						"Metal_Stress_EXP_SoundSet",
						"Metal_StressWind_EXP_SoundSet"
					};
				};
				class sound_metal_tension_4
				{
					memPoint="sound_metal_tension_4";
					soundSets[]=
					{
						"Metal_Stress_EXP_SoundSet",
						"Metal_StressWind_EXP_SoundSet"
					};
				};
				class sound_metal_tension_5
				{
					memPoint="sound_metal_tension_5";
					soundSets[]=
					{
						"Metal_Stress_EXP_SoundSet",
						"Metal_StressWind_EXP_SoundSet"
					};
				};
				class sound_metal_tension_6
				{
					memPoint="sound_metal_tension_6";
					soundSets[]=
					{
						"Metal_Stress_EXP_SoundSet",
						"Metal_StressWind_EXP_SoundSet"
					};
				};
				class sound_metal_tension_7
				{
					memPoint="sound_metal_tension_7";
					soundSets[]=
					{
						"Metal_Stress_EXP_SoundSet",
						"Metal_StressWind_EXP_SoundSet"
					};
				};
				class sound_metal_tension_8
				{
					memPoint="sound_metal_tension_8";
					soundSets[]=
					{
						"Metal_Stress_EXP_SoundSet",
						"Metal_StressWind_EXP_SoundSet"
					};
				};
				class sound_metal_tension_9
				{
					memPoint="sound_metal_tension_9";
					soundSets[]=
					{
						"Metal_Stress_EXP_SoundSet",
						"Metal_StressWind_EXP_SoundSet"
					};
				};
				class sound_metal_tension_10
				{
					memPoint="sound_metal_tension_10";
					soundSets[]=
					{
						"Metal_Stress_EXP_SoundSet",
						"Metal_StressWind_EXP_SoundSet"
					};
				};
				class sound_metal_tension_11
				{
					memPoint="sound_metal_tension_11";
					soundSets[]=
					{
						"Metal_Stress_EXP_SoundSet",
						"Metal_StressWind_EXP_SoundSet"
					};
				};
				class sound_ruins_1
				{
					memPoint="sound_ruins_1";
					soundSets[]=
					{
						"Rock_Debris_High_EXP_SoundSet",
						"Metal_DebrisWind_Small_EXP_SoundSet",
						"Rock_DebrisWind_Small_EXP_SoundSet"
					};
				};
				class sound_ruins_2
				{
					memPoint="sound_ruins_2";
					soundSets[]=
					{
						"Rock_Debris_High_EXP_SoundSet",
						"Metal_DebrisWind_Small_EXP_SoundSet",
						"Rock_DebrisWind_Small_EXP_SoundSet"
					};
				};
				class sound_ruins_3
				{
					memPoint="sound_ruins_3";
					soundSets[]=
					{
						"Rock_Debris_High_EXP_SoundSet",
						"Metal_DebrisWind_Small_EXP_SoundSet",
						"Rock_DebrisWind_Small_EXP_SoundSet"
					};
				};
				class sound_rain_stone_small_1
				{
					memPoint="sound_rain_stone_small_1";
					soundSets[]=
					{
						"Rock_Debris_EXP_SoundSet",
						"Rock_DebrisWind_Small_EXP_SoundSet"
					};
				};
				class sound_rain_stone_medium_1
				{
					memPoint="sound_rain_stone_medium_1";
					soundSets[]=
					{
						"Rock_Debris_EXP_SoundSet",
						"Rock_DebrisWind_Small_EXP_SoundSet"
					};
				};
				class sound_head
				{
					memPoint="sound_head";
					soundSets[]=
					{
						"Forest_Birds_Temp_SoundSet"
					};
				};
				class sound_clothes_1
				{
					memPoint="sound_clothes_1";
					soundSets[]=
					{
						"ClothesWind_EXP_SoundSet"
					};
				};
				class sound_clothes_2
				{
					memPoint="sound_clothes_2";
					soundSets[]=
					{
						"ClothesWind_EXP_SoundSet"
					};
				};
				class sound_net_fence_1
				{
					memPoint="sound_net_fence_1";
					soundSets[]=
					{
						"MetalFenceWind_EXP_SoundSet"
					};
				};
				class sound_shed_1
				{
					memPoint="sound_shed_1";
					soundSets[]=
					{
						"Metal_DebrisWind_Small_EXP_SoundSet"
					};
				};
				class sound_slum_1
				{
					memPoint="sound_slum_1";
					soundSets[]=
					{
						"Metal_DebrisWind_Small_EXP_SoundSet"
					};
				};
			};
		};
	};
};
class CfgSound3DProcessors
{
	class Coast3DProcessingType
	{
		type="surround_panner";
		radius=7;
		volumeAll="coast * coast / 2";
		reference="camera";
	};
	class Forest_EXP_3DProcessingType
	{
		type="surround_panner";
		radius=10;
		volumeAll="forest";
		reference="camera";
	};
	class ForestDay_EXP_3DProcessingType
	{
		type="surround_panner";
		radius=10;
		volumeAll="forest * (trees factor [0.6, 1])";
		reference="camera";
	};
	class ForestNight_EXP_3DProcessingType
	{
		type="surround_panner";
		radius=10;
		volumeAll="forest";
		reference="camera";
	};
	class ForestRain_EXP_3DProcessingType
	{
		type="surround_panner";
		radius=10;
		volumeAll="forest";
		reference="camera";
	};
	class ForestWind_EXP_3DProcessingType
	{
		type="surround_panner";
		radius=10;
		volumeAll="forest * (trees factor [0.6, 1])";
		reference="camera";
	};
	class Tree_EXP_3DProcessingType
	{
		type="panner";
		innerRange=0;
		range=10;
		rangeCurve="Smooth1Curve";
	};
	class TreeNarrow_EXP_3DProcessingType
	{
		type="emitter";
		innerRange=8;
		range=20;
		radius=3;
		rangeCurve="Smooth1Curve";
	};
	class TreeWide_EXP_3DProcessingType
	{
		type="panner";
		innerRange=0;
		range=17;
		rangeCurve="Smooth1Curve";
	};
};
