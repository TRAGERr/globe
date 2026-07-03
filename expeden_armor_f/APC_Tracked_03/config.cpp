class CfgPatches
{
	class Armor_Globe_APC_Tracked_03
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
	class APC_Tracked_03_base_F: Tank_F
	{
		class Sounds
		{
			soundSetsInt[]=
			{
				"APC_Tracked_03_Engine_RPM0_INT_SoundSet",
				"APC_Tracked_03_Engine_RPM1_INT_SoundSet",
				"APC_Tracked_03_Engine_RPM2_INT_SoundSet",
				"APC_Tracked_03_Engine_RPM3_INT_SoundSet",
				"APC_Tracked_03_Engine_RPM4_INT_SoundSet",
				"APC_Tracked_03_Engine_INT_Burst_SoundSet",
				"APC_Tracked_03_Tracks_01_INT_SoundSet",
				"APC_Tracked_03_Tracks_02_INT_SoundSet",
				"APC_Tracked_03_Tracks_03_INT_SoundSet",
				"APC_Tracked_03_Tracks_04_INT_SoundSet",
				"APC_Tracked_03_Tracks_05_INT_SoundSet",
				"APC_Tracked_03_Tracks_06_INT_SoundSet",
				"APC_Tracked_03_Interior_Tone_Engine_Off_SoundSet",
				"APC_Tracked_03_Interior_Tone_Engine_On_SoundSet",
				"APC_Tracked_03_Rattling_INT_SoundSet",
				"APC_Tracked_03_Stress_INT_SoundSet",
				"APC_Tracked_03_Rain_INT_SoundSet",
				"APC_Tracked_03_Tracks_Brake_Hard_INT_SoundSet",
				"APC_Tracked_03_Tracks_Brake_Soft_INT_SoundSet",
				"APC_Tracked_03_Tracks_Turn_Hard_INT_SoundSet",
				"APC_Tracked_03_Tracks_Turn_Soft_INT_SoundSet",
				"APC_Tracked_03_Drive_Water_INT_SoundSet",
				"APC_Tracked_03_Drive_Dirt_INT_SoundSet",
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
				"APC_Tracked_03_Engine_RPM0_EXT_SoundSet",
				"APC_Tracked_03_Engine_RPM1_EXT_SoundSet",
				"APC_Tracked_03_Engine_RPM2_EXT_SoundSet",
				"APC_Tracked_03_Engine_RPM3_EXT_SoundSet",
				"APC_Tracked_03_Engine_RPM4_EXT_SoundSet",
				"APC_Tracked_03_Engine_EXT_Burst_SoundSet",
				"APC_Tracked_03_Tracks_01_EXT_SoundSet",
				"APC_Tracked_03_Tracks_02_EXT_SoundSet",
				"APC_Tracked_03_Tracks_03_EXT_SoundSet",
				"APC_Tracked_03_Tracks_04_EXT_SoundSet",
				"APC_Tracked_03_Tracks_05_EXT_SoundSet",
				"APC_Tracked_03_Tracks_06_EXT_SoundSet",
				"APC_Tracked_03_Rattling_EXT_SoundSet",
				"APC_Tracked_03_Rain_EXT_SoundSet",
				"APC_Tracked_03_Tracks_Brake_Hard_EXT_SoundSet",
				"APC_Tracked_03_Tracks_Brake_Soft_EXT_SoundSet",
				"APC_Tracked_03_Tracks_Turn_Hard_EXT_SoundSet",
				"APC_Tracked_03_Tracks_Turn_Soft_EXT_SoundSet",
				"APC_Tracked_03_Drive_Water_EXT_SoundSet",
				"APC_Tracked_03_Drive_Dirt_EXT_SoundSet",
				"Tracks_Movement_Dirt_Ext_01_SoundSet",
				"Tracks_Surface_Soft_Ext_SoundSet",
				"Tracks_Surface_Hard_Ext_SoundSet",
				"Tracks_Surface_Sand_Ext_SoundSet",
				"Tracks_Surface_Squeaks_Soft_Ext_SoundSet",
				"Tracks_Surface_Squeaks_Hard_Ext_SoundSet",
				"Tank_General_Collision_SoundShader"
			};
		};
	};
};
class CfgSoundShaders
{
	class APC_Tracked_03_Engine_EXT_Burst_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F\vehicles2\armor\APC_Tracked_03\APC_Tracked_03_Engine_EXT_Burst01",
				1
			},
			
			{
				"A3\Sounds_F\vehicles2\armor\APC_Tracked_03\APC_Tracked_03_Engine_EXT_Burst02",
				1
			},
			
			{
				"A3\Sounds_F\vehicles2\armor\APC_Tracked_03\APC_Tracked_03_Engine_EXT_Burst03",
				1
			}
		};
		frequency=1;
		range="1*150";
		volume="engineOn * 0.7 * 0.7 * (rpm factor[0,10])";
	};
	class APC_Tracked_03_Engine_INT_Burst_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F\vehicles2\armor\APC_Tracked_03\APC_Tracked_03_Engine_INT_Burst01",
				1
			},
			
			{
				"A3\Sounds_F\vehicles2\armor\APC_Tracked_03\APC_Tracked_03_Engine_INT_Burst02",
				1
			},
			
			{
				"A3\Sounds_F\vehicles2\armor\APC_Tracked_03\APC_Tracked_03_Engine_INT_Burst03",
				1
			}
		};
		frequency=1;
		range="1*150";
		volume="engineOn * 1 * 1 * (rpm factor[0,10])";
	};
}