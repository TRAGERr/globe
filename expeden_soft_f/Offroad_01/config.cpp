class CfgPatches
{
	class Soft_Globe_Offroad_01
	{
		addonRootClass="A3_Soft_F_expEden";
		requiredAddons[]=
		{
			"A3_Soft_F_expEden"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Car_F;
	class Offroad_01_base_F: Car_F
	{
		class Sounds
		{
			soundSetsInt[]=
			{
				"Offroad_01_Engine_RPM0_INT_SoundSet",
				"Offroad_01_Engine_RPM1_INT_SoundSet",
				"Offroad_01_Engine_RPM2_INT_SoundSet",
				"Offroad_01_Engine_RPM3_INT_SoundSet",
				"Offroad_01_Engine_RPM4_INT_SoundSet",
				"Offroad_01_Rattling_INT_SoundSet",
				"Offroad_01_Stress_INT_SoundSet",
				"Offroad_01_Rain_INT_SoundSet",
				"Offroad_01_Tires_Rock_Fast_OPEN_SoundSet",
				"Offroad_01_Tires_Grass_Fast_OPEN_SoundSet",
				"Offroad_01_Tires_Sand_Fast_OPEN_SoundSet",
				"Offroad_01_Tires_Gravel_Fast_OPEN_SoundSet",
				"Offroad_01_Tires_Mud_Fast_OPEN_SoundSet",
				"Offroad_01_Tires_Asphalt_Fast_OPEN_SoundSet",
				"Offroad_01_Tires_Water_Fast_OPEN_SoundSet",
				"Offroad_01_Tires_Rock_Slow_OPEN_SoundSet",
				"Offroad_01_Tires_Grass_Slow_OPEN_SoundSet",
				"Offroad_01_Tires_Sand_Slow_OPEN_SoundSet",
				"Offroad_01_Tires_Gravel_Slow_OPEN_SoundSet",
				"Offroad_01_Tires_Mud_Slow_OPEN_SoundSet",
				"Offroad_01_Tires_Asphalt_Slow_OPEN_SoundSet",
				"Offroad_01_Tires_Water_Slow_OPEN_SoundSet",
				"Offroad_01_Tires_Turn_Hard_OPEN_SoundSet",
				"Offroad_01_Tires_Turn_Soft_OPEN_SoundSet",
				"Offroad_01_Tires_Brake_Hard_OPEN_SoundSet",
				"Offroad_01_Tires_Brake_Soft_OPEN_SoundSet",
				"Tires_Movement_Dirt_Int_01_SoundSet"
			};
			soundSetsExt[]=
			{
				"Offroad_01_Engine_RPM0_EXT_SoundSet",
				"Offroad_01_Engine_RPM1_EXT_SoundSet",
				"Offroad_01_Engine_RPM2_EXT_SoundSet",
				"Offroad_01_Engine_RPM3_EXT_SoundSet",
				"Offroad_01_Engine_RPM4_EXT_SoundSet",
				"Offroad_01_Rattling_EXT_SoundSet",
				"Offroad_01_Stress_EXT_SoundSet",
				"Offroad_01_Rain_EXT_SoundSet",
				"Offroad_01_Tires_Rock_Fast_EXT_SoundSet",
				"Offroad_01_Tires_Grass_Fast_EXT_SoundSet",
				"Offroad_01_Tires_Sand_Fast_EXT_SoundSet",
				"Offroad_01_Tires_Gravel_Fast_EXT_SoundSet",
				"Offroad_01_Tires_Mud_Fast_EXT_SoundSet",
				"Offroad_01_Tires_Asphalt_Fast_EXT_SoundSet",
				"Offroad_01_Tires_Water_Fast_EXT_SoundSet",
				"Offroad_01_Tires_Rock_Slow_EXT_SoundSet",
				"Offroad_01_Tires_Grass_Slow_EXT_SoundSet",
				"Offroad_01_Tires_Sand_Slow_EXT_SoundSet",
				"Offroad_01_Tires_Gravel_Slow_EXT_SoundSet",
				"Offroad_01_Tires_Mud_Slow_EXT_SoundSet",
				"Offroad_01_Tires_Asphalt_Slow_EXT_SoundSet",
				"Offroad_01_Tires_Water_Slow_EXT_SoundSet",
				"Offroad_01_Tires_Turn_Hard_EXT_SoundSet",
				"Offroad_01_Tires_Turn_Soft_EXT_SoundSet",
				"Offroad_01_Tires_Brake_Hard_EXT_SoundSet",
				"Offroad_01_Tires_Brake_Soft_EXT_SoundSet",
				"Tires_Movement_Dirt_Ext_01_SoundSet"
			};
		};
		class TextureSources
		{
			class I_G_camo_01_G
			{
				displayName="$STR_Globe_CfgVehicles_Offroad_01_base_F_TextureSources_I_G_camo_01_G0";
				author="O&T Expansion Eden";
				textures[]=
				{
					"\a3\soft_f_gamma\offroad_01\data\offroad_01_ext_ig01_co.paa"
				};
				factions[]={};
			};
		};
	};
	class Offroad_01_unarmed_base_F: Offroad_01_base_F
	{
		class TextureSources: TextureSources
		{
			class I_G_camo_01_G
			{
				displayName="$STR_Globe_CfgVehicles_Offroad_01_base_F_TextureSources_I_G_camo_01_G0";
				author="O&T Expansion Eden";
				textures[]=
				{
					"\a3\soft_f_gamma\offroad_01\data\offroad_01_ext_ig01_co.paa"
				};
				factions[]={};
			};
		};
	};
	class Offroad_01_civil_base_F: Offroad_01_unarmed_base_F
	{
		class TextureSources: TextureSources
		{
			class I_G_camo_01_G
			{
				displayName="$STR_Globe_CfgVehicles_Offroad_01_base_F_TextureSources_I_G_camo_01_G0";
				author="O&T Expansion Eden";
				textures[]=
				{
					"\a3\soft_f_gamma\offroad_01\data\offroad_01_ext_ig01_co.paa"
				};
				factions[]={};
			};
		};
	};
	class Offroad_01_military_base_F: Offroad_01_base_F
	{
		class TextureSources: TextureSources
		{
			class I_G_camo_01_G
			{
				displayName="$STR_Globe_CfgVehicles_Offroad_01_base_F_TextureSources_I_G_camo_01_G0";
				author="O&T Expansion Eden";
				textures[]=
				{
					"\a3\soft_f_gamma\offroad_01\data\offroad_01_ext_ig01_co.paa"
				};
				factions[]={};
			};
		};
	};
	class Offroad_01_military_covered_base_F: Offroad_01_military_base_F
	{
		class TextureSources: TextureSources
		{
			class I_G_camo_01_G
			{
				displayName="$STR_Globe_CfgVehicles_Offroad_01_base_F_TextureSources_I_G_camo_01_G0";
				author="O&T Expansion Eden";
				textures[]=
				{
					"\a3\soft_f_gamma\offroad_01\data\offroad_01_ext_ig01_co.paa"
				};
				factions[]={};
			};
		};
	};
	class Offroad_01_armed_base_F: Offroad_01_military_base_F
	{
		class TextureSources: TextureSources
		{
			class I_G_camo_01_G
			{
				displayName="$STR_Globe_CfgVehicles_Offroad_01_base_F_TextureSources_I_G_camo_01_G0";
				author="O&T Expansion Eden";
				textures[]=
				{
					"\a3\soft_f_gamma\offroad_01\data\offroad_01_ext_ig01_co.paa"
				};
				factions[]={};
			};
		};
	};
	class Offroad_01_AT_base_F: Offroad_01_military_base_F
	{
		class TextureSources: TextureSources
		{
			class I_G_camo_01_G
			{
				displayName="$STR_Globe_CfgVehicles_Offroad_01_base_F_TextureSources_I_G_camo_01_G0";
				author="O&T Expansion Eden";
				textures[]=
				{
					"\a3\soft_f_gamma\offroad_01\data\offroad_01_ext_ig01_co.paa"
				};
				factions[]={};
			};
		};
	};
	class Offroad_01_military_comms_base_F: Offroad_01_military_covered_base_F
	{
		class TextureSources: TextureSources
		{
			class I_G_camo_01_G
			{
				displayName="$STR_Globe_CfgVehicles_Offroad_01_base_F_TextureSources_I_G_camo_01_G0";
				author="O&T Expansion Eden";
				textures[]=
				{
					"\a3\soft_f_gamma\offroad_01\data\offroad_01_ext_ig01_co.paa"
				};
				factions[]={};
			};
		};
	};
};