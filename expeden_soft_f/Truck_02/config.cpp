class CfgPatches
{
	class Soft_Globe_Truck_02
	{
		addonRootClass="A3_Soft_F_expEden";
		requiredAddons[]=
		{
			"A3_Soft_F_expEden"
		};
		requiredVersion=0.1;
		units[]=
		{
			"I_Truck_02_MRL_cluster",
			"I_E_Truck_02_MRL_cluster"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Truck_F;
	class Truck_02_base_F: Truck_F
	{
		class Sounds
		{
			soundSetsInt[]=
			{
				"Truck_02_Engine_RPM0_INT_SoundSet",
				"Truck_02_Engine_RPM1_INT_SoundSet",
				"Truck_02_Engine_RPM2_INT_SoundSet",
				"Truck_02_Engine_RPM3_INT_SoundSet",
				"Truck_02_Engine_RPM4_INT_SoundSet",
				"Truck_02_Rattling_INT_SoundSet",
				"Truck_02_Stress_INT_SoundSet",
				"Truck_02_Rain_INT_SoundSet",
				"Truck_02_Tires_Rock_Fast_INT_SoundSet",
				"Truck_02_Tires_Grass_Fast_INT_SoundSet",
				"Truck_02_Tires_Sand_Fast_INT_SoundSet",
				"Truck_02_Tires_Gravel_Fast_INT_SoundSet",
				"Truck_02_Tires_Mud_Fast_INT_SoundSet",
				"Truck_02_Tires_Asphalt_Fast_INT_SoundSet",
				"Truck_02_Tires_Water_Fast_INT_SoundSet",
				"Truck_02_Tires_Rock_Slow_INT_SoundSet",
				"Truck_02_Tires_Grass_Slow_INT_SoundSet",
				"Truck_02_Tires_Sand_Slow_INT_SoundSet",
				"Truck_02_Tires_Gravel_Slow_INT_SoundSet",
				"Truck_02_Tires_Mud_Slow_INT_SoundSet",
				"Truck_02_Tires_Asphalt_Slow_INT_SoundSet",
				"Truck_02_Tires_Water_Slow_INT_SoundSet",
				"Truck_02_Tires_Turn_Hard_INT_SoundSet",
				"Truck_02_Tires_Turn_Soft_INT_SoundSet",
				"Truck_02_Tires_Brake_Hard_INT_SoundSet",
				"Truck_02_Tires_Brake_Soft_INT_SoundSet",
				"Tires_Movement_Dirt_Int_01_SoundSet"
			};
			soundSetsExt[]=
			{
				"Truck_02_Engine_RPM0_EXT_SoundSet",
				"Truck_02_Engine_RPM1_EXT_SoundSet",
				"Truck_02_Engine_RPM2_EXT_SoundSet",
				"Truck_02_Engine_RPM3_EXT_SoundSet",
				"Truck_02_Engine_RPM4_EXT_SoundSet",
				"Truck_02_Rattling_EXT_SoundSet",
				"Truck_02_Stress_EXT_SoundSet",
				"Truck_02_Rain_EXT_SoundSet",
				"Truck_02_Tires_Rock_Fast_EXT_SoundSet",
				"Truck_02_Tires_Grass_Fast_EXT_SoundSet",
				"Truck_02_Tires_Sand_Fast_EXT_SoundSet",
				"Truck_02_Tires_Gravel_Fast_EXT_SoundSet",
				"Truck_02_Tires_Mud_Fast_EXT_SoundSet",
				"Truck_02_Tires_Asphalt_Fast_EXT_SoundSet",
				"Truck_02_Tires_Water_Fast_EXT_SoundSet",
				"Truck_02_Tires_Rock_Slow_EXT_SoundSet",
				"Truck_02_Tires_Grass_Slow_EXT_SoundSet",
				"Truck_02_Tires_Sand_Slow_EXT_SoundSet",
				"Truck_02_Tires_Gravel_Slow_EXT_SoundSet",
				"Truck_02_Tires_Mud_Slow_EXT_SoundSet",
				"Truck_02_Tires_Asphalt_Slow_EXT_SoundSet",
				"Truck_02_Tires_Water_Slow_EXT_SoundSet",
				"Truck_02_Tires_Turn_Hard_EXT_SoundSet",
				"Truck_02_Tires_Turn_Soft_EXT_SoundSet",
				"Truck_02_Tires_Brake_Hard_EXT_SoundSet",
				"Truck_02_Tires_Brake_Soft_EXT_SoundSet",
				"Tires_Movement_Dirt_Ext_01_SoundSet"
			};
		};
	};
	class Truck_02_MRL_base_F;
	class I_Truck_02_MRL_F: Truck_02_MRL_base_F
	{
		class Turrets;
		class MainTurret;
	};
	class I_E_Truck_02_MRL_F: Truck_02_MRL_base_F
	{
		class Turrets;
		class MainTurret;
	};
	class I_Truck_02_MRL_cluster: I_Truck_02_MRL_F
	{
		author="O&T Expansion Eden";
		_generalMacro="I_Truck_02_MRL_cluster";
		displayName="$STR_Globe_CfgVehicles_Truck_02_MRL_cluster0";
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
	class I_E_Truck_02_MRL_cluster: I_E_Truck_02_MRL_F
	{
		author="O&T Expansion Eden";
		_generalMacro="I_E_Truck_02_MRL_cluster";
		displayName="$STR_Globe_CfgVehicles_Truck_02_MRL_cluster0";
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