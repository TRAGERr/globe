class CfgPatches
{
	class Armor_Globe_APC_Tracked_01
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
	class B_APC_Tracked_01_base_F;
	class Tank_F;
	class APC_Tracked_01_base_F: Tank_F
	{
		class Sounds
		{
			soundSetsInt[]=
			{
				"APC_Tracked_01_Engine_RPM0_INT_SoundSet",
				"APC_Tracked_01_Engine_RPM1_INT_SoundSet",
				"APC_Tracked_01_Engine_RPM2_INT_SoundSet",
				"APC_Tracked_01_Engine_RPM3_INT_SoundSet",
				"APC_Tracked_01_Engine_RPM4_INT_SoundSet",
				"APC_Tracked_01_Engine_INT_Burst_SoundSet",
				"APC_Tracked_01_Tracks_01_INT_SoundSet",
				"APC_Tracked_01_Tracks_02_INT_SoundSet",
				"APC_Tracked_01_Tracks_03_INT_SoundSet",
				"APC_Tracked_01_Tracks_04_INT_SoundSet",
				"APC_Tracked_01_Tracks_05_INT_SoundSet",
				"APC_Tracked_01_Tracks_06_INT_SoundSet",
				"APC_Tracked_01_Interior_Tone_Engine_Off_SoundSet",
				"APC_Tracked_01_Interior_Tone_Engine_On_SoundSet",
				"APC_Tracked_01_Rattling_INT_SoundSet",
				"APC_Tracked_01_Stress_INT_SoundSet",
				"APC_Tracked_01_Rain_INT_SoundSet",
				"APC_Tracked_01_Tracks_Brake_Hard_INT_SoundSet",
				"APC_Tracked_01_Tracks_Brake_Soft_INT_SoundSet",
				"APC_Tracked_01_Tracks_Turn_Hard_INT_SoundSet",
				"APC_Tracked_01_Tracks_Turn_Soft_INT_SoundSet",
				"APC_Tracked_01_Drive_Water_INT_SoundSet",
				"APC_Tracked_01_Drive_Dirt_INT_SoundSet",
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
				"APC_Tracked_01_Engine_RPM0_EXT_SoundSet",
				"APC_Tracked_01_Engine_RPM1_EXT_SoundSet",
				"APC_Tracked_01_Engine_RPM2_EXT_SoundSet",
				"APC_Tracked_01_Engine_RPM3_EXT_SoundSet",
				"APC_Tracked_01_Engine_RPM4_EXT_SoundSet",
				"APC_Tracked_01_Engine_EXT_Burst_SoundSet",
				"APC_Tracked_01_Tracks_01_EXT_SoundSet",
				"APC_Tracked_01_Tracks_02_EXT_SoundSet",
				"APC_Tracked_01_Tracks_03_EXT_SoundSet",
				"APC_Tracked_01_Tracks_04_EXT_SoundSet",
				"APC_Tracked_01_Tracks_05_EXT_SoundSet",
				"APC_Tracked_01_Tracks_06_EXT_SoundSet",
				"APC_Tracked_01_Rattling_EXT_SoundSet",
				"APC_Tracked_01_Rain_EXT_SoundSet",
				"APC_Tracked_01_Tracks_Brake_Hard_EXT_SoundSet",
				"APC_Tracked_01_Tracks_Brake_Soft_EXT_SoundSet",
				"APC_Tracked_01_Tracks_Turn_Hard_EXT_SoundSet",
				"APC_Tracked_01_Tracks_Turn_Soft_EXT_SoundSet",
				"APC_Tracked_01_Drive_Water_EXT_SoundSet",
				"APC_Tracked_01_Drive_Dirt_EXT_SoundSet",
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
	class B_APC_Tracked_01_AA_F: B_APC_Tracked_01_base_F
	{
		class TextureSources
		{
			class Opfor
			{
				displayName="$STR_A3_TEXTURESOURCES_OPFOR0";
				author="O&T Expansion Eden";
				textures[]=
				{
					"A3\Armor_F_Beta\APC_Tracked_01\Data\apc_tracked_01_aa_body_opfor_co.paa",
					"A3\Armor_F_Beta\APC_Tracked_01\Data\mbt_01_body_co.paa",
					"A3\Armor_F_Beta\APC_Tracked_01\Data\apc_tracked_01_aa_tower_opfor_co.paa",
					"A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F",
					"IND_G_F",
					"CIV_F",
					"BLU_G_F",
					"OPF_G_F",
					"IND_C_F",
					"BLU_T_F",
					"BLU_CTRG_F",
					"BLU_GEN_F",
					"OPF_T_F",
					"OPF_V_F",
					"CombatPatrol",
					"CIV_IDAP_F",
					"IND_E_F",
					"IND_L_F",
					"BLU_W_F",
					"OPF_R_F",
					"OPF_GEN_F"
				};
			};
		};
	};
	class B_APC_Tracked_01_rcws_F: B_APC_Tracked_01_base_F
	{
		class TextureSources
		{
			class Indep
			{
				displayName="$STR_A3_TEXTURESOURCES_INDEP0";
				author="O&T Expansion Eden";
				textures[]=
				{
					"A3\Armor_F_Beta\APC_Tracked_01\Data\apc_tracked_01_body_indp_co.paa",
					"A3\Armor_F_Beta\APC_Tracked_01\Data\mbt_01_body_co.paa",
					"a3\data_f\vehicles\turret_indp_co.paa",
					"A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F",
					"IND_G_F",
					"CIV_F",
					"BLU_G_F",
					"OPF_G_F",
					"IND_C_F",
					"BLU_T_F",
					"BLU_CTRG_F",
					"BLU_GEN_F",
					"OPF_T_F",
					"OPF_V_F",
					"CombatPatrol",
					"CIV_IDAP_F",
					"IND_E_F",
					"IND_L_F",
					"BLU_W_F",
					"OPF_R_F",
					"OPF_GEN_F"
				};
			};
		};
	};
	class B_APC_Tracked_01_CRV_F: B_APC_Tracked_01_base_F
	{
		class TextureSources
		{
			class Opfor
			{
				displayName="$STR_A3_TEXTURESOURCES_OPFOR0";
				author="O&T Expansion Eden";
				textures[]=
				{
					"A3\Armor_F_Beta\APC_Tracked_01\Data\apc_tracked_01_aa_body_opfor_co.paa",
					"A3\Armor_F_Beta\APC_Tracked_01\Data\mbt_01_body_co.paa",
					"a3\data_f\vehicles\turret_opfor_co.paa",
					"A3\Armor_F_Beta\APC_Tracked_01\Data\apc_tracked_01_crv_opfor_co.paa",
					"A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F",
					"IND_G_F",
					"CIV_F",
					"BLU_G_F",
					"OPF_G_F",
					"IND_C_F",
					"BLU_T_F",
					"BLU_CTRG_F",
					"BLU_GEN_F",
					"OPF_T_F",
					"OPF_V_F",
					"CombatPatrol",
					"CIV_IDAP_F",
					"IND_E_F",
					"IND_L_F",
					"BLU_W_F",
					"OPF_R_F",
					"OPF_GEN_F"
				};
			};
		};
	};
};
class CfgSoundSets
{
	class APC_Tracked_01_Engine_EXT_Burst_SoundSet
	{
		soundShaders[]=
		{
			"APC_Tracked_01_Engine_EXT_Burst_SoundShader"
		};
		playTrigger="(thrust * (angVelocity factor[0.1,0]) * (speed factor[5,4.9]) - 0.1)";
		posOffset[]={0,0,-3};
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
	class APC_Tracked_01_Engine_INT_Burst_SoundSet
	{
		soundShaders[]=
		{
			"APC_Tracked_01_Engine_INT_Burst_SoundShader"
		};
		playTrigger="(thrust * (angVelocity factor[0.1,0]) * (speed factor[5,4.9]) - 0.1)";
		posOffset[]={0,0,0};
		distanceFilter="softVehiclesDistanceFreqAttenuationFilter";
		frequencyRandomizer=1;
		frequencyRandomizerMin=0;
		sound3DProcessingType="VehicleInt_Back_3DProcessingType";
		volumeCurve="InverseSquare2Curve";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		volumeFactor=1;
		spatial=0;
		loop=0;
	};
};
class CfgSoundShaders
{
	class APC_Tracked_01_Engine_EXT_Burst_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F\vehicles2\armor\APC_Tracked_01\APC_Tracked_01_Engine_EXT_Burst01",
				1
			},
			
			{
				"A3\Sounds_F\vehicles2\armor\APC_Tracked_01\APC_Tracked_01_Engine_EXT_Burst02",
				1
			},
			
			{
				"A3\Sounds_F\vehicles2\armor\APC_Tracked_01\APC_Tracked_01_Engine_EXT_Burst03",
				1
			}
		};
		frequency=1;
		range="1*150";
		volume="engineOn * 0.7 * 0.7 * (rpm factor[0,10])";
	};
	class APC_Tracked_01_Engine_INT_Burst_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F\vehicles2\armor\APC_Tracked_01\APC_Tracked_01_Engine_INT_Burst01",
				1
			},
			
			{
				"A3\Sounds_F\vehicles2\armor\APC_Tracked_01\APC_Tracked_01_Engine_INT_Burst02",
				1
			},
			
			{
				"A3\Sounds_F\vehicles2\armor\APC_Tracked_01\APC_Tracked_01_Engine_INT_Burst03",
				1
			}
		};
		frequency=1;
		range="1*150";
		volume="engineOn * 1 * 1 * (rpm factor[0,10])";
	};
}