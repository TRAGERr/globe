class CfgPatches
{
	class Armor_Globe_MBT_01
	{
		addonRootClass="A3_Armor_F_expEden";
		requiredAddons[]=
		{
			"A3_Armor_F_expEden"
		};
		requiredVersion=0.1;
		units[]=
		{
			"B_MBT_01_mlrs_cluster",
			"B_T_MBT_01_mlrs_cluster"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Tank_F;
	class B_MBT_01_mlrs_base_F;
	class MBT_01_base_F: Tank_F
	{
		class Sounds
		{
			soundSetsInt[]=
			{
				"MBT_01_Engine_RPM0_INT_SoundSet",
				"MBT_01_Engine_RPM1_INT_SoundSet",
				"MBT_01_Engine_RPM2_INT_SoundSet",
				"MBT_01_Engine_RPM3_INT_SoundSet",
				"MBT_01_Engine_RPM4_INT_SoundSet",
				"MBT_01_Engine_RPM5_INT_SoundSet",
				"MBT_01_Engine_RPM6_INT_SoundSet",
				"MBT_01_Engine_INT_Burst_SoundSet",
				"MBT_01_Tracks_01_INT_SoundSet",
				"MBT_01_Tracks_02_INT_SoundSet",
				"MBT_01_Tracks_03_INT_SoundSet",
				"MBT_01_Tracks_04_INT_SoundSet",
				"MBT_01_Tracks_05_INT_SoundSet",
				"MBT_01_Tracks_06_INT_SoundSet",
				"MBT_01_Interior_Tone_Engine_Off_SoundSet",
				"MBT_01_Interior_Tone_Engine_On_SoundSet",
				"MBT_01_Rattling_INT_SoundSet",
				"MBT_01_Rain_INT_SoundSet",
				"MBT_01_Tracks_Brake_Hard_INT_SoundSet",
				"MBT_01_Tracks_Brake_Soft_INT_SoundSet",
				"MBT_01_Tracks_Turn_Hard_INT_SoundSet",
				"MBT_01_Tracks_Turn_Soft_INT_SoundSet",
				"MBT_01_Drive_Water_INT_SoundSet",
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
				"MBT_01_Engine_RPM0_EXT_SoundSet",
				"MBT_01_Engine_RPM1_EXT_SoundSet",
				"MBT_01_Engine_RPM2_EXT_SoundSet",
				"MBT_01_Engine_RPM3_EXT_SoundSet",
				"MBT_01_Engine_RPM4_EXT_SoundSet",
				"MBT_01_Engine_RPM5_EXT_SoundSet",
				"MBT_01_Engine_RPM6_EXT_SoundSet",
				"MBT_01_Engine_EXT_Burst_SoundSet",
				"MBT_01_Tracks_01_EXT_SoundSet",
				"MBT_01_Tracks_02_EXT_SoundSet",
				"MBT_01_Tracks_03_EXT_SoundSet",
				"MBT_01_Tracks_04_EXT_SoundSet",
				"MBT_01_Tracks_05_EXT_SoundSet",
				"MBT_01_Tracks_06_EXT_SoundSet",
				"MBT_01_Rain_EXT_SoundSet",
				"MBT_01_Tracks_Brake_Hard_EXT_SoundSet",
				"MBT_01_Tracks_Brake_Soft_EXT_SoundSet",
				"MBT_01_Tracks_Turn_Hard_EXT_SoundSet",
				"MBT_01_Tracks_Turn_Soft_EXT_SoundSet",
				"MBT_01_Drive_Water_EXT_SoundSet",
				"MBT_01_Drive_Dirt_EXT_SoundSet",
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
	class B_MBT_01_mlrs_F: B_MBT_01_mlrs_base_F
	{
		class Turrets;
		class MainTurret;
	};
	class B_T_MBT_01_mlrs_F: B_MBT_01_mlrs_F
	{
		class Turrets;
		class MainTurret;
	};
	class B_MBT_01_mlrs_cluster: B_MBT_01_mlrs_F
	{
		author="O&T Expansion Eden";
		_generalMacro="B_MBT_01_mlrs_cluster";
		displayName="$STR_Globe_CfgVehicles_MBT_01_mlrs_cluster0";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					"12Rnd_230mm_rockets_cluster"
				};
			};
		};
	};
	class B_T_MBT_01_mlrs_cluster: B_T_MBT_01_mlrs_F
	{
		author="O&T Expansion Eden";
		_generalMacro="B_T_MBT_01_mlrs_cluster";
		displayName="$STR_Globe_CfgVehicles_MBT_01_mlrs_cluster0";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					"12Rnd_230mm_rockets_cluster"
				};
			};
		};
	};
};