class CfgPatches
{
	class A3_Soft_F_expEden_Truck_03
	{
		addonRootClass="A3_Soft_F_expEden";
		requiredAddons[]=
		{
			"A3_Soft_F_expEden"
		};
		requiredVersion=0.1;
		units[]=
		{
			"O_T_Truck_03_science_containers_ghex_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Truck_F;
	class Truck_03_base_F: Truck_F
	{
		class Sounds
		{
			soundSetsInt[]=
			{
				"Truck_03_Engine_RPM0_INT_SoundSet",
				"Truck_03_Engine_RPM1_INT_SoundSet",
				"Truck_03_Engine_RPM2_INT_SoundSet",
				"Truck_03_Engine_RPM3_INT_SoundSet",
				"Truck_03_Engine_RPM4_INT_SoundSet",
				"Truck_03_Engine_RPM5_INT_SoundSet",
				"Truck_03_Engine_RPM6_INT_SoundSet",
				"Truck_03_Rattling_INT_SoundSet",
				"Truck_03_Stress_INT_SoundSet",
				"Truck_03_Rain_INT_SoundSet",
				"Truck_03_Tires_Rock_Fast_INT_SoundSet",
				"Truck_03_Tires_Grass_Fast_INT_SoundSet",
				"Truck_03_Tires_Sand_Fast_INT_SoundSet",
				"Truck_03_Tires_Gravel_Fast_INT_SoundSet",
				"Truck_03_Tires_Mud_Fast_INT_SoundSet",
				"Truck_03_Tires_Asphalt_Fast_INT_SoundSet",
				"Truck_03_Tires_Water_Fast_INT_SoundSet",
				"Truck_03_Tires_Rock_Slow_INT_SoundSet",
				"Truck_03_Tires_Grass_Slow_INT_SoundSet",
				"Truck_03_Tires_Sand_Slow_INT_SoundSet",
				"Truck_03_Tires_Gravel_Slow_INT_SoundSet",
				"Truck_03_Tires_Mud_Slow_INT_SoundSet",
				"Truck_03_Tires_Asphalt_Slow_INT_SoundSet",
				"Truck_03_Tires_Water_Slow_INT_SoundSet",
				"Truck_03_Tires_Turn_Hard_INT_SoundSet",
				"Truck_03_Tires_Turn_Soft_INT_SoundSet",
				"Truck_03_Tires_Brake_Hard_INT_SoundSet",
				"Truck_03_Tires_Brake_Soft_INT_SoundSet",
				"Tires_Movement_Dirt_Int_01_SoundSet"
			};
			soundSetsExt[]=
			{
				"Truck_03_Engine_RPM0_EXT_SoundSet",
				"Truck_03_Engine_RPM1_EXT_SoundSet",
				"Truck_03_Engine_RPM2_EXT_SoundSet",
				"Truck_03_Engine_RPM3_EXT_SoundSet",
				"Truck_03_Engine_RPM4_EXT_SoundSet",
				"Truck_03_Engine_RPM5_EXT_SoundSet",
				"Truck_03_Engine_RPM6_EXT_SoundSet",
				"Truck_03_Rattling_EXT_SoundSet",
				"Truck_03_Stress_EXT_SoundSet",
				"Truck_03_Rain_EXT_SoundSet",
				"Truck_03_Tires_Rock_Fast_EXT_SoundSet",
				"Truck_03_Tires_Grass_Fast_EXT_SoundSet",
				"Truck_03_Tires_Sand_Fast_EXT_SoundSet",
				"Truck_03_Tires_Gravel_Fast_EXT_SoundSet",
				"Truck_03_Tires_Mud_Fast_EXT_SoundSet",
				"Truck_03_Tires_Asphalt_Fast_EXT_SoundSet",
				"Truck_03_Tires_Water_Fast_EXT_SoundSet",
				"Truck_03_Tires_Rock_Slow_EXT_SoundSet",
				"Truck_03_Tires_Grass_Slow_EXT_SoundSet",
				"Truck_03_Tires_Sand_Slow_EXT_SoundSet",
				"Truck_03_Tires_Gravel_Slow_EXT_SoundSet",
				"Truck_03_Tires_Mud_Slow_EXT_SoundSet",
				"Truck_03_Tires_Asphalt_Slow_EXT_SoundSet",
				"Truck_03_Tires_Water_Slow_EXT_SoundSet",
				"Truck_03_Tires_Turn_Hard_EXT_SoundSet",
				"Truck_03_Tires_Turn_Soft_EXT_SoundSet",
				"Truck_03_Tires_Brake_Hard_EXT_SoundSet",
				"Truck_03_Tires_Brake_Soft_EXT_SoundSet",
				"Tires_Movement_Dirt_Ext_01_SoundSet"
			};
		};
	};
	class O_Truck_03_ammo_F: Truck_03_base_F
	{
		class TextureSources;
	};
	class O_T_Truck_03_science_containers_ghex_F: O_Truck_03_ammo_F
	{
		author="$STR_A3_Bohemia_Interactive";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"damagehidevez",
					0
				},
				
				{
					"damagehidehlaven",
					0
				},
				
				{
					"wheel_1_1_destruct",
					0
				},
				
				{
					"wheel_1_2_destruct",
					0
				},
				
				{
					"wheel_1_3_destruct",
					0
				},
				
				{
					"wheel_1_4_destruct",
					0
				},
				
				{
					"wheel_2_1_destruct",
					0
				},
				
				{
					"wheel_2_2_destruct",
					0
				},
				
				{
					"wheel_2_3_destruct",
					0
				},
				
				{
					"wheel_2_4_destruct",
					0
				},
				
				{
					"wheel_1_1_destruct_unhide",
					0
				},
				
				{
					"wheel_1_2_destruct_unhide",
					0
				},
				
				{
					"wheel_1_3_destruct_unhide",
					0
				},
				
				{
					"wheel_1_4_destruct_unhide",
					0
				},
				
				{
					"wheel_2_1_destruct_unhide",
					0
				},
				
				{
					"wheel_2_2_destruct_unhide",
					0
				},
				
				{
					"wheel_2_3_destruct_unhide",
					0
				},
				
				{
					"wheel_2_4_destruct_unhide",
					0
				},
				
				{
					"wheel_1_4_damage",
					0
				},
				
				{
					"wheel_2_4_damage",
					0
				},
				
				{
					"wheel_1_4_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_4_damper_damage_backanim",
					0
				},
				
				{
					"glass1_destruct",
					0
				},
				
				{
					"glass2_destruct",
					0
				},
				
				{
					"glass3_destruct",
					0
				},
				
				{
					"glass4_destruct",
					0
				},
				
				{
					"glass5_destruct",
					0
				},
				
				{
					"glass6_destruct",
					0
				},
				
				{
					"wheel_1_1",
					0
				},
				
				{
					"wheel_2_1",
					0
				},
				
				{
					"wheel_1_2",
					0
				},
				
				{
					"wheel_2_2",
					0
				},
				
				{
					"daylights",
					0
				},
				
				{
					"reverse_light",
					1
				},
				
				{
					"pedal_thrust",
					0
				},
				
				{
					"pedal_brake",
					0
				},
				
				{
					"wheel_1_1_damage",
					0
				},
				
				{
					"wheel_1_2_damage",
					0
				},
				
				{
					"wheel_1_3_damage",
					0
				},
				
				{
					"wheel_2_1_damage",
					0
				},
				
				{
					"wheel_2_2_damage",
					0
				},
				
				{
					"wheel_2_3_damage",
					0
				},
				
				{
					"wheel_1_1_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_2_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_3_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_1_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_2_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_3_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_3",
					0
				},
				
				{
					"wheel_2_3",
					0
				},
				
				{
					"wheel_1_1_damper",
					0
				},
				
				{
					"wheel_2_1_damper",
					0
				},
				
				{
					"wheel_1_2_damper",
					0
				},
				
				{
					"wheel_2_2_damper",
					0
				},
				
				{
					"wheel_1_3_damper",
					0
				},
				
				{
					"wheel_2_3_damper",
					0
				},
				
				{
					"damagehide",
					0
				},
				
				{
					"indicatorspeed",
					0
				},
				
				{
					"indicatorrpm",
					0
				},
				
				{
					"indicatoroiltemp",
					0.0099999998
				},
				
				{
					"indicatorenginetemp",
					0
				},
				
				{
					"indicatorenginetemp2",
					0
				},
				
				{
					"indicatorenginetemp3",
					0
				},
				
				{
					"fuel",
					0.0099999998
				},
				
				{
					"drivingwheel",
					0
				},
				
				{
					"steering_1_1",
					0
				},
				
				{
					"steering_2_1",
					0
				},
				
				{
					"steering_1_2",
					0
				},
				
				{
					"steering_2_2",
					0
				}
			};
			hide[]=
			{
				"clan",
				"zasleh",
				"light_l",
				"light_r",
				"zadni svetlo",
				"brzdove svetlo",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=1.97;
			verticalOffsetWorld=-0.178;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\O_T_Truck_03_science_containers_ghex_F.jpg";
		_generalMacro="O_T_Truck_03_science_containers_ghex_F";
		displayName="$STR_expEden_O_Truck_03_Atrox_F";
		transportAmmo=0;
		supplyRadius=0;
		scope=2;
		scopeCurator=2;
		side=0;
		faction="OPF_T_F";
		crew="O_T_Soldier_CBRN_F";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa",
			"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa",
			"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cargo_ghex_CO.paa",
			"\A3\missions_f_oldman\Data\img\Decals\science_containers_tempest_co.paa"
		};
		typicalCargo[]=
		{
			"O_T_Soldier_CBRN_F",
			"O_T_Soldier_CBRN_F"
		};
		class TextureSources: TextureSources
		{
			class GreenHexAtrox
			{
				displayName="$STR_A3_item_antimalaricumvaccine0";
				author="O&T Expansion Eden";
				textures[]=
				{
					"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa",
					"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa",
					"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cargo_ghex_CO.paa",
					"\A3\missions_f_oldman\Data\img\Decals\science_containers_tempest_co.paa"
				};
				factions[]={};
			};
		};
		textureList[]=
		{
			"GreenHexAtrox",
			1,
			"GreenHex",
			0,
			"Hex",
			0
		};
	};
};
