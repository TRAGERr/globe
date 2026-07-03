class CfgPatches
{
	class Armor_Globe_MBT_02
	{
		addonRootClass="A3_Armor_F_expEden";
		requiredAddons[]=
		{
			"A3_Armor_F_expEden"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Tank_F;
	class MBT_02_base_F: Tank_F
	{
		class Sounds
		{
			soundSetsInt[]=
			{
				"MBT_02_Engine_RPM0_INT_SoundSet",
				"MBT_02_Engine_RPM1_INT_SoundSet",
				"MBT_02_Engine_RPM2_INT_SoundSet",
				"MBT_02_Engine_RPM3_INT_SoundSet",
				"MBT_02_Engine_INT_Burst_SoundSet",
				"MBT_02_Tracks_01_INT_SoundSet",
				"MBT_02_Tracks_02_INT_SoundSet",
				"MBT_02_Tracks_03_INT_SoundSet",
				"MBT_02_Tracks_04_INT_SoundSet",
				"MBT_02_Tracks_05_INT_SoundSet",
				"MBT_02_Tracks_06_INT_SoundSet",
				"MBT_02_Interior_Tone_Engine_Off_SoundSet",
				"MBT_02_Interior_Tone_Engine_On_SoundSet",
				"MBT_02_Rattling_INT_SoundSet",
				"MBT_02_Rain_INT_SoundSet",
				"MBT_02_Tracks_Brake_Hard_INT_SoundSet",
				"MBT_02_Tracks_Brake_Soft_INT_SoundSet",
				"MBT_02_Tracks_Turn_Hard_INT_SoundSet",
				"MBT_02_Tracks_Turn_Soft_INT_SoundSet",
				"MBT_02_Drive_Water_INT_SoundSet",
				"MBT_02_Drive_Dirt_INT_SoundSet",
				"MBT_02_Turbine01_Int_Tonal_SoundSet",
				"MBT_02_Turbine01_Int_Noisy_SoundSet",
				"MBT_02_Servo01_Int_SoundSet",
				"MBT_02_Servo02_Int_SoundSet",
				"Tracks_Movement_Dirt_Int_01_SoundSet",
				"Tracks_Surface_Soft_Int_SoundSet",
				"Tracks_Surface_Hard_Int_SoundSet",
				"Tracks_Surface_Sand_Int_SoundSet",
				"Tracks_Surface_Squeaks_Soft_Int_SoundSet",
				"Tracks_Surface_Squeaks_Hard_Int_SoundSet",
				"Tanks_Material_Strain_Int_SoundSet",
				"Tank_General_Collision_Int_SoundSet"
			};
			soundSetsExt[]=
			{
				"MBT_02_Engine_RPM0_EXT_SoundSet",
				"MBT_02_Engine_RPM1_EXT_SoundSet",
				"MBT_02_Engine_RPM2_EXT_SoundSet",
				"MBT_02_Engine_RPM3_EXT_SoundSet",
				"MBT_02_Engine_EXT_Burst_SoundSet",
				"MBT_02_Tracks_01_EXT_SoundSet",
				"MBT_02_Tracks_02_EXT_SoundSet",
				"MBT_02_Tracks_03_EXT_SoundSet",
				"MBT_02_Tracks_04_EXT_SoundSet",
				"MBT_02_Tracks_05_EXT_SoundSet",
				"MBT_02_Tracks_06_EXT_SoundSet",
				"MBT_02_Rain_EXT_SoundSet",
				"MBT_02_Tracks_Brake_Hard_EXT_SoundSet",
				"MBT_02_Tracks_Brake_Soft_EXT_SoundSet",
				"MBT_02_Tracks_Turn_Hard_EXT_SoundSet",
				"MBT_02_Tracks_Turn_Soft_EXT_SoundSet",
				"MBT_02_Drive_Water_EXT_SoundSet",
				"MBT_02_Drive_Dirt_EXT_SoundSet",
				"MBT_02_Turbine01_Ext_Front_Tonal_SoundSet",
				"MBT_02_Turbine01_Ext_Rear_Tonal_SoundSet",
				"MBT_02_Turbine01_Ext_Front_Noisy_SoundSet",
				"MBT_02_Turbine01_Ext_Rear_Noisy_SoundSet",
				"MBT_02_Servo01_Ext_SoundSet",
				"MBT_02_Servo02_Ext_SoundSet",
				"Tracks_Movement_Dirt_Ext_01_SoundSet",
				"Tracks_Surface_Soft_Ext_SoundSet",
				"Tracks_Surface_Hard_Ext_SoundSet",
				"Tracks_Surface_Sand_Ext_SoundSet",
				"Tracks_Surface_Squeaks_Soft_Ext_SoundSet",
				"Tracks_Surface_Squeaks_Hard_Ext_SoundSet",
				"Tank_General_Collision_SoundSet"
			};
		};
	};
	class MBT_02_railgun_base_F: MBT_02_base_F
	{
		class Sounds
		{
			soundSetsExt[]=
			{
				"Railgun_01_Charge_Start_SoundSet",
				"Railgun_01_Charge_Stop_SoundSet",
				"Railgun_01_Charge_Loop_SoundSet",
				"MBT_02_Engine_RPM0_EXT_SoundSet",
				"MBT_02_Engine_RPM1_EXT_SoundSet",
				"MBT_02_Engine_RPM2_EXT_SoundSet",
				"MBT_02_Engine_RPM3_EXT_SoundSet",
				"MBT_02_Engine_EXT_Burst_SoundSet",
				"MBT_02_Tracks_01_EXT_SoundSet",
				"MBT_02_Tracks_02_EXT_SoundSet",
				"MBT_02_Tracks_03_EXT_SoundSet",
				"MBT_02_Tracks_04_EXT_SoundSet",
				"MBT_02_Tracks_05_EXT_SoundSet",
				"MBT_02_Tracks_06_EXT_SoundSet",
				"MBT_02_Rain_EXT_SoundSet",
				"MBT_02_Tracks_Brake_Hard_EXT_SoundSet",
				"MBT_02_Tracks_Brake_Soft_EXT_SoundSet",
				"MBT_02_Tracks_Turn_Hard_EXT_SoundSet",
				"MBT_02_Tracks_Turn_Soft_EXT_SoundSet",
				"MBT_02_Drive_Water_EXT_SoundSet",
				"MBT_02_Drive_Dirt_EXT_SoundSet",
				"MBT_02_Turbine01_Ext_Front_Tonal_SoundSet",
				"MBT_02_Turbine01_Ext_Rear_Tonal_SoundSet",
				"MBT_02_Turbine01_Ext_Front_Noisy_SoundSet",
				"MBT_02_Turbine01_Ext_Rear_Noisy_SoundSet",
				"MBT_02_Servo01_Ext_SoundSet",
				"MBT_02_Servo02_Ext_SoundSet",
				"Tracks_Movement_Dirt_Ext_01_SoundSet",
				"Tracks_Surface_Soft_Ext_SoundSet",
				"Tracks_Surface_Hard_Ext_SoundSet",
				"Tracks_Surface_Sand_Ext_SoundSet",
				"Tracks_Surface_Squeaks_Soft_Ext_SoundSet",
				"Tracks_Surface_Squeaks_Hard_Ext_SoundSet",
				"Tank_General_Collision_SoundSet"
			};
			soundSetsInt[]=
			{
				"Railgun_01_Charge_Start_SoundSet",
				"Railgun_01_Charge_Stop_SoundSet",
				"Railgun_01_Charge_Loop_SoundSet",
				"MBT_02_Engine_RPM0_INT_SoundSet",
				"MBT_02_Engine_RPM1_INT_SoundSet",
				"MBT_02_Engine_RPM2_INT_SoundSet",
				"MBT_02_Engine_RPM3_INT_SoundSet",
				"MBT_02_Engine_INT_Burst_SoundSet",
				"MBT_02_Tracks_01_INT_SoundSet",
				"MBT_02_Tracks_02_INT_SoundSet",
				"MBT_02_Tracks_03_INT_SoundSet",
				"MBT_02_Tracks_04_INT_SoundSet",
				"MBT_02_Tracks_05_INT_SoundSet",
				"MBT_02_Tracks_06_INT_SoundSet",
				"MBT_02_Interior_Tone_Engine_Off_SoundSet",
				"MBT_02_Interior_Tone_Engine_On_SoundSet",
				"MBT_02_Rattling_INT_SoundSet",
				"MBT_02_Rain_INT_SoundSet",
				"MBT_02_Tracks_Brake_Hard_INT_SoundSet",
				"MBT_02_Tracks_Brake_Soft_INT_SoundSet",
				"MBT_02_Tracks_Turn_Hard_INT_SoundSet",
				"MBT_02_Tracks_Turn_Soft_INT_SoundSet",
				"MBT_02_Drive_Water_INT_SoundSet",
				"MBT_02_Drive_Dirt_INT_SoundSet",
				"MBT_02_Turbine01_Int_Tonal_SoundSet",
				"MBT_02_Turbine01_Int_Noisy_SoundSet",
				"MBT_02_Servo01_Int_SoundSet",
				"MBT_02_Servo02_Int_SoundSet",
				"Tracks_Movement_Dirt_Int_01_SoundSet",
				"Tracks_Surface_Soft_Int_SoundSet",
				"Tracks_Surface_Hard_Int_SoundSet",
				"Tracks_Surface_Sand_Int_SoundSet",
				"Tracks_Surface_Squeaks_Soft_Int_SoundSet",
				"Tracks_Surface_Squeaks_Hard_Int_SoundSet",
				"Tanks_Material_Strain_Int_SoundSet",
				"Tank_General_Collision_Int_SoundSet"
			};
		};
	};
};
class CfgSoundSets
{
	class Engine_Base_RPM0_EXT_SoundSet;
	class Engine_Base_RPM1_EXT_SoundSet;
	class Engine_Base_RPM2_EXT_SoundSet;
	class Engine_Base_RPM3_EXT_SoundSet;
	class Engine_Base_RPM0_INT_SoundSet;
	class Engine_Base_RPM1_INT_SoundSet;
	class Engine_Base_RPM2_INT_SoundSet;
	class Engine_Base_RPM3_INT_SoundSet;
	class MBT_02_Engine_EXT_Burst_SoundSet
	{
		soundShaders[]=
		{
			"MBT_02_Engine_EXT_Burst_SoundShader"
		};
		playTrigger="thrust * (speed factor[5,0.1]) * (1- thrust * ((speed factor[-2,0])))";
		posOffset[]={0,0,-4};
		distanceFilter="softVehiclesDistanceFreqAttenuationFilter";
		frequencyRandomizer=1;
		frequencyRandomizerMin=0;
		sound3DProcessingType="VehicleExt_3DProcessingType";
		volumeCurve="InverseSquare2Curve";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		volumeFactor=1;
		spatial=1;
		loop=0;
	};
	class MBT_02_Engine_INT_Burst_SoundSet
	{
		soundShaders[]=
		{
			"MBT_02_Engine_INT_Burst_SoundShader"
		};
		playTrigger="thrust * (speed factor[5,0.1]) * (1- thrust * ((speed factor[-2,0])))";
		posOffset[]={0,0,0};
		distanceFilter="softVehiclesDistanceFreqAttenuationFilter";
		frequencyRandomizer=1;
		frequencyRandomizerMin=0;
		sound3DProcessingType="VehicleInt_Back_3DProcessingType";
		volumeCurve="InverseSquare2Curve";
		volumeFactor=1;
		spatial=0;
		loop=0;
	};
	class MBT_02_Engine_RPM0_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet
	{
		soundShaders[]=
		{
			"MBT_02_Engine_RPM0_INT_SoundShader"
		};
		sound3DProcessingType="VehicleInt_Back_3DProcessingType";
		posOffset[]={0,0,0};
		volumeFactor=1;
	};
	class MBT_02_Engine_RPM1_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet
	{
		soundShaders[]=
		{
			"MBT_02_Engine_RPM1_INT_SoundShader"
		};
		sound3DProcessingType="VehicleInt_Back_3DProcessingType";
		posOffset[]={0,0,0};
		volumeFactor=1.5;
	};
	class MBT_02_Engine_RPM2_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet
	{
		soundShaders[]=
		{
			"MBT_02_Engine_RPM2_INT_SoundShader"
		};
		sound3DProcessingType="VehicleInt_Back_3DProcessingType";
		posOffset[]={0,0,0};
		volumeFactor=2;
	};
	class MBT_02_Engine_RPM3_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet
	{
		soundShaders[]=
		{
			"MBT_02_Engine_RPM3_INT_SoundShader"
		};
		sound3DProcessingType="VehicleInt_Back_3DProcessingType";
		posOffset[]={0,0,0};
		volumeFactor=2.5;
	};
	class MBT_02_Engine_RPM0_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[]=
		{
			"MBT_02_Engine_RPM0_EXT_SoundShader"
		};
		volumeFactor=1.2;
		sound3DProcessingType="VehicleExt_Engine_3DProcessingType";
		volumeCurve="InverseSquare2Curve";
		posOffset[]={0,0,-4};
	};
	class MBT_02_Engine_RPM1_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[]=
		{
			"MBT_02_Engine_RPM1_EXT_SoundShader"
		};
		volumeFactor=1.25;
		sound3DProcessingType="VehicleExt_Engine_3DProcessingType";
		volumeCurve="InverseSquare2Curve";
		posOffset[]={0,0,-4};
	};
	class MBT_02_Engine_RPM2_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[]=
		{
			"MBT_02_Engine_RPM2_EXT_SoundShader"
		};
		volumeFactor=1.3;
		sound3DProcessingType="VehicleExt_Engine_3DProcessingType";
		volumeCurve="InverseSquare2Curve";
		posOffset[]={0,0,-4};
	};
	class MBT_02_Engine_RPM3_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[]=
		{
			"MBT_02_Engine_RPM3_EXT_SoundShader"
		};
		volumeFactor=1.35;
		sound3DProcessingType="VehicleExt_Engine_3DProcessingType";
		volumeCurve="InverseSquare2Curve";
		posOffset[]={0,0,-4};
	};
};
class CfgSoundShaders
{
	class Engine_Base_RPM0_EXT_SoundShader;
	class Engine_Base_RPM1_EXT_SoundShader;
	class Engine_Base_RPM2_EXT_SoundShader;
	class Engine_Base_RPM3_EXT_SoundShader;
	class Engine_Base_RPM0_INT_SoundShader;
	class Engine_Base_RPM1_INT_SoundShader;
	class Engine_Base_RPM2_INT_SoundShader;
	class Engine_Base_RPM3_INT_SoundShader;
	class MBT_02_Engine_EXT_Burst_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F\vehicles2\armor\MBT_02\MBT_02_Engine_EXT_Burst01",
				1
			},
			
			{
				"A3\Sounds_F\vehicles2\armor\MBT_02\MBT_02_Engine_EXT_Burst02",
				1
			}
		};
		volume="engineOn * 1.2 * 0.7 * (rpm factor[0,10])";
		frequency=1.05;
		range="1*150";
	};
	class MBT_02_Engine_INT_Burst_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F\vehicles2\armor\MBT_02\MBT_02_Engine_INT_Burst01",
				1
			},
			
			{
				"A3\Sounds_F\vehicles2\armor\MBT_02\MBT_02_Engine_INT_Burst02",
				1
			}
		};
		volume="engineOn * 1.2 * 1.5 * (rpm factor[0,10])";
		frequency=1.05;
	};
	class MBT_02_Turbine01_Int_Tonal_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F\vehicles2\armor\MBT_02\MBT_02_Turbine01_Int_Tonal",
				1
			},
			
			{
				"A3\Sounds_F\vehicles2\armor\MBT_02\MBT_02_Turbine01_Int_Tonal0",
				1
			},
			
			{
				"A3\Sounds_F\vehicles2\armor\MBT_02\MBT_02_Turbine01_Int_Tonal1",
				1
			}
		};
		frequency="1.1 + 0.05*(rpm factor [1000,2700]) + 0.1*thrust";
		volume="engineOn * (rpm factor[100,1000])*(2 + 0.2*thrust)*0.5";
	};
	class MBT_02_Engine_RPM0_EXT_SoundShader: Engine_Base_RPM0_EXT_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F\vehicles2\armor\MBT_02\MBT_02_Engine_EXT_RPM0",
				1
			}
		};
		frequency="1 + 0.1 * (1 + 0.5  * ((1 + 0.1*thrust)*0.6) * (speed factor [0, 21.2304]) + 0.5   * (rpm factor [1000,	2700])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 0.8 *thrust)*((1-0.5  ) * (speed factor [0, 21.2304]) + 0.5   * (rpm factor [1000,	2700])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1000,	2700])) - 0))";
		volume="engineOn * 0.75 * 1 * (rpm factor [0 *1000, (0 *1000 + 0.2 *(1000-0 *1000))]) * ((1 + 0.1*thrust)*0.6) * (speed factor [0, 21.2304]) + 0.5   * (rpm factor [1000,	2700])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 0.8 *thrust)*((1-0.5  ) * (speed factor [0, 21.2304]) + 0.5   * (rpm factor [1000,	2700])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1000,	2700])) factor [(2000 - 1000)/(4000 - 1000) - (((2000 - 1000)/(4000 - 1000) - 0) - (1.5 * ((2000 - 1000)/(4000 - 1000) - 0)))/2, 0])";
		range="6*225";
	};
	class MBT_02_Engine_RPM1_EXT_SoundShader: Engine_Base_RPM1_EXT_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F\vehicles2\armor\MBT_02\MBT_02_Engine_EXT_RPM1",
				1
			}
		};
		frequency="1 + 0.1 * (1 + 0.5  * ((1 + 0.1*thrust)*0.6) * (speed factor [0, 21.2304]) + 0.5   * (rpm factor [1000,	2700])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 0.8 *thrust)*((1-0.5  ) * (speed factor [0, 21.2304]) + 0.5   * (rpm factor [1000,	2700])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1000,	2700])) - (2000 - 1000)/(4000 - 1000)))";
		volume="engineOn * 0.75 * 1 * ((1 + 0.1*thrust)*0.6) * (speed factor [0, 21.2304]) + 0.5   * (rpm factor [1000,	2700])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 0.8 *thrust)*((1-0.5  ) * (speed factor [0, 21.2304]) + 0.5   * (rpm factor [1000,	2700])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1000,	2700])) factor[0, (2000 - 1000)/(4000 - 1000) - (((2000 - 1000)/(4000 - 1000) - 0) - (1.5 * ((2000 - 1000)/(4000 - 1000) - 0)))/2]) * ((1 + 0.1*thrust)*0.6) * (speed factor [0, 21.2304]) + 0.5   * (rpm factor [1000,	2700])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 0.8 *thrust)*((1-0.5  ) * (speed factor [0, 21.2304]) + 0.5   * (rpm factor [1000,	2700])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1000,	2700])) factor [(3000 - 1000)/(4000 - 1000) - (((3000 - 1000)/(4000 - 1000) - (2000 - 1000)/(4000 - 1000)) - (1.5 * ((3000 - 1000)/(4000 - 1000) - (2000 - 1000)/(4000 - 1000))))/2, (2000 - 1000)/(4000 - 1000) + (((3000 - 1000)/(4000 - 1000) - (2000 - 1000)/(4000 - 1000)) - (1.5 * ((3000 - 1000)/(4000 - 1000) - (2000 - 1000)/(4000 - 1000))))/2])";
		range="6*230";
	};
	class MBT_02_Engine_RPM2_EXT_SoundShader: Engine_Base_RPM2_EXT_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F\vehicles2\armor\MBT_02\MBT_02_Engine_EXT_RPM2",
				1
			}
		};
		frequency="1 + 0.1 * (1 + 0.5  * ((1 + 0.1*thrust)*0.6) * (speed factor [0, 21.2304]) + 0.5   * (rpm factor [1000,	2700])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 0.8 *thrust)*((1-0.5  ) * (speed factor [0, 21.2304]) + 0.5   * (rpm factor [1000,	2700])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1000,	2700])) - (3000 - 1000)/(4000 - 1000)))";
		volume="engineOn * 0.75 * 1 * ((1 + 0.1*thrust)*0.6) * (speed factor [0, 21.2304]) + 0.5   * (rpm factor [1000,	2700])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 0.8 *thrust)*((1-0.5  ) * (speed factor [0, 21.2304]) + 0.5   * (rpm factor [1000,	2700])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1000,	2700])) factor[(2000 - 1000)/(4000 - 1000) + (((3000 - 1000)/(4000 - 1000) - (2000 - 1000)/(4000 - 1000)) - (1.5 * ((3000 - 1000)/(4000 - 1000) - (2000 - 1000)/(4000 - 1000))))/2, (3000 - 1000)/(4000 - 1000) - (((3000 - 1000)/(4000 - 1000) - (2000 - 1000)/(4000 - 1000)) - (1.5 * ((3000 - 1000)/(4000 - 1000) - (2000 - 1000)/(4000 - 1000))))/2]) * ((1 + 0.1*thrust)*0.6) * (speed factor [0, 21.2304]) + 0.5   * (rpm factor [1000,	2700])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 0.8 *thrust)*((1-0.5  ) * (speed factor [0, 21.2304]) + 0.5   * (rpm factor [1000,	2700])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1000,	2700])) factor [(4000 - 1000)/(4000 - 1000) - (((4000 - 1000)/(4000 - 1000) - (3000 - 1000)/(4000 - 1000)) - (1.5 * ((4000 - 1000)/(4000 - 1000) - (3000 - 1000)/(4000 - 1000))))/2, (3000 - 1000)/(4000 - 1000) + (((4000 - 1000)/(4000 - 1000) - (3000 - 1000)/(4000 - 1000)) - (1.5 * ((4000 - 1000)/(4000 - 1000) - (3000 - 1000)/(4000 - 1000))))/2])";
		range="6*235";
	};
	class MBT_02_Engine_RPM3_EXT_SoundShader: Engine_Base_RPM3_EXT_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F\vehicles2\armor\MBT_02\MBT_02_Engine_EXT_RPM3",
				1
			}
		};
		frequency="1 + 0.1 * (1 + 0.5  * ((1 + 0.1*thrust)*0.6) * (speed factor [0, 21.2304]) + 0.5   * (rpm factor [1000,	2700])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 0.8 *thrust)*((1-0.5  ) * (speed factor [0, 21.2304]) + 0.5   * (rpm factor [1000,	2700])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1000,	2700])) - (4000 - 1000)/(4000 - 1000)))";
		volume="engineOn * 0.75 * 1 * ((1 + 0.1*thrust)*0.6) * (speed factor [0, 21.2304]) + 0.5   * (rpm factor [1000,	2700])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 0.8 *thrust)*((1-0.5  ) * (speed factor [0, 21.2304]) + 0.5   * (rpm factor [1000,	2700])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1000,	2700])) factor[(3000 - 1000)/(4000 - 1000) + (((4000 - 1000)/(4000 - 1000) - (3000 - 1000)/(4000 - 1000)) - (1.5 * ((4000 - 1000)/(4000 - 1000) - (3000 - 1000)/(4000 - 1000))))/2, (4000 - 1000)/(4000 - 1000) - (((4000 - 1000)/(4000 - 1000) - (3000 - 1000)/(4000 - 1000)) - (1.5 * ((4000 - 1000)/(4000 - 1000) - (3000 - 1000)/(4000 - 1000))))/2])";
		range="6*240";
	};
	class MBT_02_Engine_RPM0_INT_SoundShader: Engine_Base_RPM0_INT_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F\vehicles2\armor\MBT_02\MBT_02_Engine_INT_RPM0",
				1
			}
		};
		frequency="1 + 0.1 * (1 + 0.5  * ((1 + 0.1*thrust)*0.6) * (speed factor [0, 21.2304]) + 0.5   * (rpm factor [1000,	2700])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 0.8 *thrust)*((1-0.5  ) * (speed factor [0, 21.2304]) + 0.5   * (rpm factor [1000,	2700])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1000,	2700])) - 0))";
		volume="engineOn * 1 * 1.5 * (rpm factor [0 *1000, (0 *1000 + 0.2 *(1000-0 *1000))]) * ((1 + 0.1*thrust)*0.6) * (speed factor [0, 21.2304]) + 0.5   * (rpm factor [1000,	2700])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 0.8 *thrust)*((1-0.5  ) * (speed factor [0, 21.2304]) + 0.5   * (rpm factor [1000,	2700])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1000,	2700])) factor [(2000 - 1000)/(4000 - 1000) - (((2000 - 1000)/(4000 - 1000) - 0) - (1.5 * ((2000 - 1000)/(4000 - 1000) - 0)))/2, 0])";
		range="6*225";
	};
	class MBT_02_Engine_RPM1_INT_SoundShader: Engine_Base_RPM1_INT_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F\vehicles2\armor\MBT_02\MBT_02_Engine_INT_RPM1",
				1
			}
		};
		frequency="1 + 0.1 * (1 + 0.5  * ((1 + 0.1*thrust)*0.6) * (speed factor [0, 21.2304]) + 0.5   * (rpm factor [1000,	2700])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 0.8 *thrust)*((1-0.5  ) * (speed factor [0, 21.2304]) + 0.5   * (rpm factor [1000,	2700])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1000,	2700])) - (2000 - 1000)/(4000 - 1000)))";
		volume="engineOn * 1 * 1.5 * ((1 + 0.1*thrust)*0.6) * (speed factor [0, 21.2304]) + 0.5   * (rpm factor [1000,	2700])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 0.8 *thrust)*((1-0.5  ) * (speed factor [0, 21.2304]) + 0.5   * (rpm factor [1000,	2700])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1000,	2700])) factor[0, (2000 - 1000)/(4000 - 1000) - (((2000 - 1000)/(4000 - 1000) - 0) - (1.5 * ((2000 - 1000)/(4000 - 1000) - 0)))/2]) * ((1 + 0.1*thrust)*0.6) * (speed factor [0, 21.2304]) + 0.5   * (rpm factor [1000,	2700])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 0.8 *thrust)*((1-0.5  ) * (speed factor [0, 21.2304]) + 0.5   * (rpm factor [1000,	2700])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1000,	2700])) factor [(3000 - 1000)/(4000 - 1000) - (((3000 - 1000)/(4000 - 1000) - (2000 - 1000)/(4000 - 1000)) - (1.5 * ((3000 - 1000)/(4000 - 1000) - (2000 - 1000)/(4000 - 1000))))/2, (2000 - 1000)/(4000 - 1000) + (((3000 - 1000)/(4000 - 1000) - (2000 - 1000)/(4000 - 1000)) - (1.5 * ((3000 - 1000)/(4000 - 1000) - (2000 - 1000)/(4000 - 1000))))/2])";
		range="6*230";
	};
	class MBT_02_Engine_RPM2_INT_SoundShader: Engine_Base_RPM2_INT_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F\vehicles2\armor\MBT_02\MBT_02_Engine_INT_RPM2",
				1
			}
		};
		frequency="1 + 0.1 * (1 + 0.5  * ((1 + 0.1*thrust)*0.6) * (speed factor [0, 21.2304]) + 0.5   * (rpm factor [1000,	2700])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 0.8 *thrust)*((1-0.5  ) * (speed factor [0, 21.2304]) + 0.5   * (rpm factor [1000,	2700])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1000,	2700])) - (3000 - 1000)/(4000 - 1000)))";
		volume="engineOn * 1 * 1.5 * ((1 + 0.1*thrust)*0.6) * (speed factor [0, 21.2304]) + 0.5   * (rpm factor [1000,	2700])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 0.8 *thrust)*((1-0.5  ) * (speed factor [0, 21.2304]) + 0.5   * (rpm factor [1000,	2700])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1000,	2700])) factor[(2000 - 1000)/(4000 - 1000) + (((3000 - 1000)/(4000 - 1000) - (2000 - 1000)/(4000 - 1000)) - (1.5 * ((3000 - 1000)/(4000 - 1000) - (2000 - 1000)/(4000 - 1000))))/2, (3000 - 1000)/(4000 - 1000) - (((3000 - 1000)/(4000 - 1000) - (2000 - 1000)/(4000 - 1000)) - (1.5 * ((3000 - 1000)/(4000 - 1000) - (2000 - 1000)/(4000 - 1000))))/2]) * ((1 + 0.1*thrust)*0.6) * (speed factor [0, 21.2304]) + 0.5   * (rpm factor [1000,	2700])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 0.8 *thrust)*((1-0.5  ) * (speed factor [0, 21.2304]) + 0.5   * (rpm factor [1000,	2700])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1000,	2700])) factor [(4000 - 1000)/(4000 - 1000) - (((4000 - 1000)/(4000 - 1000) - (3000 - 1000)/(4000 - 1000)) - (1.5 * ((4000 - 1000)/(4000 - 1000) - (3000 - 1000)/(4000 - 1000))))/2, (3000 - 1000)/(4000 - 1000) + (((4000 - 1000)/(4000 - 1000) - (3000 - 1000)/(4000 - 1000)) - (1.5 * ((4000 - 1000)/(4000 - 1000) - (3000 - 1000)/(4000 - 1000))))/2])";
		range="6*235";
	};
	class MBT_02_Engine_RPM3_INT_SoundShader: Engine_Base_RPM3_INT_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F\vehicles2\armor\MBT_02\MBT_02_Engine_INT_RPM3",
				1
			}
		};
		frequency="1 + 0.1 * (1 + 0.5  * ((1 + 0.1*thrust)*0.6) * (speed factor [0, 21.2304]) + 0.5   * (rpm factor [1000,	2700])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 0.8 *thrust)*((1-0.5  ) * (speed factor [0, 21.2304]) + 0.5   * (rpm factor [1000,	2700])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1000,	2700])) - (4000 - 1000)/(4000 - 1000)))";
		volume="engineOn * 1 * 1.5 * ((1 + 0.1*thrust)*0.6) * (speed factor [0, 21.2304]) + 0.5   * (rpm factor [1000,	2700])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 0.8 *thrust)*((1-0.5  ) * (speed factor [0, 21.2304]) + 0.5   * (rpm factor [1000,	2700])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1000,	2700])) factor[(3000 - 1000)/(4000 - 1000) + (((4000 - 1000)/(4000 - 1000) - (3000 - 1000)/(4000 - 1000)) - (1.5 * ((4000 - 1000)/(4000 - 1000) - (3000 - 1000)/(4000 - 1000))))/2, (4000 - 1000)/(4000 - 1000) - (((4000 - 1000)/(4000 - 1000) - (3000 - 1000)/(4000 - 1000)) - (1.5 * ((4000 - 1000)/(4000 - 1000) - (3000 - 1000)/(4000 - 1000))))/2])";
		range="6*240";
	};
};