class CfgPatches
{
	class A3_Structures_F_Globe_Training
	{
		addonRootClass="A3_Structures_F_Globe";
		requiredAddons[]=
		{
			"A3_Structures_F_Globe"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgVehicles
{
	class TargetBase;
	class Wall_F;
	class Land_Shoot_House_Wall_F: Wall_F
	{
		class Attributes
		{
			class SwitchTexture1
			{
				property="SwitchTexture1";
				displayName="$STR_3den_object_attribute_objecttexturecustom0_displayname";
				control="Combo";
				expression="_this setObjectTextureGlobal [0, _value]";
				defaultValue="'#(argb,8,8,3)color(0,0,0,0,ca)'";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="";
						value="#(argb,8,8,3)color(0,0,0,0,ca)";
						picture="#(argb,8,8,3)color(0,0,0,0,ca)";
					};
					class 2
					{
						name="Aliens#Fakenews";
						value="\A3\missions_f_beta\data\img\decals\decal_aliens_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_aliens_ca.paa";
					};
					class 3
					{
						name="$STR_A3_CFGVEHICLES_LAND_TARGET_DUELING_01_F0";
						value="\A3\missions_f_beta\data\img\decals\decal_binary_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_binary_ca.paa";
					};
					class 4
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F4";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA1_ca.paa";
					};
					class 5
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F5";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA2_ca.paa";
					};
					class 6
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F6";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA3_ca.paa";
					};
					class 7
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F7";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA4_ca.paa";
					};
					class 8
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F8";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA5_ca.paa";
					};
					class 9
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F9";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA6_ca.paa";
					};
					class 10
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F10";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB1_ca.paa";
					};
					class 11
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F11";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB2_ca.paa";
					};
					class 12
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F12";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB3_ca.paa";
					};
					class 13
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F13";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB4_ca.paa";
					};
					class 14
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F14";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB5_ca.paa";
					};
					class 15
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F15";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB6_ca.paa";
					};
					class 16
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F16";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC1_ca.paa";
					};
					class 17
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F17";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC2_ca.paa";
					};
					class 18
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F18";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC3_ca.paa";
					};
					class 19
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F19";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC4_ca.paa";
					};
					class 20
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F20";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC5_ca.paa";
					};
					class 21
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F21";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC6_ca.paa";
					};
					class 23
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F22";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD1_ca.paa";
					};
					class 24
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F23";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD2_ca.paa";
					};
					class 25
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F24";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD3_ca.paa";
					};
					class 26
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F25";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD4_ca.paa";
					};
					class 27
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F26";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD5_ca.paa";
					};
					class 28
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F27";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD6_ca.paa";
					};
					class 144
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F144";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH1_ca.paa";
					};
					class 29
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F29";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH2_ca.paa";
					};
					class 30
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F30";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH3_ca.paa";
					};
					class 31
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F31";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH4_ca.paa";
					};
					class 32
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F32";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH5_ca.paa";
					};
					class 33
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F33";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH6_ca.paa";
					};
					class 34
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F34";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl1_ca.paa";
					};
					class 35
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F35";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl2_ca.paa";
					};
					class 36
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F36";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl3_ca.paa";
					};
					class 37
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F37";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl4_ca.paa";
					};
					class 38
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F38";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl5_ca.paa";
					};
					class 39
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F39";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl6_ca.paa";
					};
					class 40
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F40";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch1_ca.paa";
					};
					class 41
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F41";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch2_ca.paa";
					};
					class 42
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F42";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch3_ca.paa";
					};
					class 43
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F43";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch4_ca.paa";
					};
					class 44
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F44";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch5_ca.paa";
					};
					class 45
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F45";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch6_ca.paa";
					};
					class 46
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F46";
						value="\A3\missions_f_beta\data\img\decals\decal_crowe_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crowe_ca.paa";
					};
					class 47
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F47";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel1_ca.paa";
					};
					class 48
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F48";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel2_ca.paa";
					};
					class 49
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F49";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel3_ca.paa";
					};
					class 50
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F50";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel4_ca.paa";
					};
					class 51
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F51";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel5_ca.paa";
					};
					class 52
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F52";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel6_ca.paa";
					};
					class 53
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F53";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left1_ca.paa";
					};
					class 54
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F54";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left2_ca.paa";
					};
					class 55
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F55";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left3_ca.paa";
					};
					class 56
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F56";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left4_ca.paa";
					};
					class 57
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F57";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left5_ca.paa";
					};
					class 58
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F58";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left6_ca.paa";
					};
					class 59
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F59";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right1_ca.paa";
					};
					class 60
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F60";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right2_ca.paa";
					};
					class 61
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F61";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right3_ca.paa";
					};
					class 62
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F62";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right4_ca.paa";
					};
					class 63
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F63";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right5_ca.paa";
					};
					class 64
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F64";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right6_ca.paa";
					};
					class 65
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F65";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left1_ca.paa";
					};
					class 66
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F66";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left2_ca.paa";
					};
					class 145
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F66";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left3_ca.paa";
					};
					class 67
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F67";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left4_ca.paa";
					};
					class 68
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F68";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left5_ca.paa";
					};
					class 69
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F69";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left6_ca.paa";
					};
					class 70
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F70";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right1_ca.paa";
					};
					class 71
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F71";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right2_ca.paa";
					};
					class 72
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F72";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right3_ca.paa";
					};
					class 73
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F73";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right4_ca.paa";
					};
					class 74
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F74";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right5_ca.paa";
					};
					class 75
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F75";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right6_ca.paa";
					};
					class 76
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F76";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target1_ca.paa";
					};
					class 77
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F77";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target2_ca.paa";
					};
					class 78
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F78";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target3_ca.paa";
					};
					class 79
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F79";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target4_ca.paa";
					};
					class 80
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F80";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target5_ca.paa";
					};
					class 81
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F81";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target6_ca.paa";
					};
					class 82
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F82";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate1_ca.paa";
					};
					class 83
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F83";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate2_ca.paa";
					};
					class 146
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F83";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate3_ca.paa";
					};
					class 84
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F84";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate4_ca.paa";
					};
					class 85
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F85";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate5_ca.paa";
					};
					class 86
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F86";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate6_ca.paa";
					};
					class 87
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F87";
						value="\A3\missions_f_beta\data\img\decals\decal_phalanx_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_phalanx_ca.paa";
					};
					class 88
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F88";
						value="\A3\missions_f_beta\data\img\decals\decal_prone1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone1_ca.paa";
					};
					class 89
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F89";
						value="\A3\missions_f_beta\data\img\decals\decal_prone2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone2_ca.paa";
					};
					class 90
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F90";
						value="\A3\missions_f_beta\data\img\decals\decal_prone3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone3_ca.paa";
					};
					class 91
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F91";
						value="\A3\missions_f_beta\data\img\decals\decal_prone4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone4_ca.paa";
					};
					class 92
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F92";
						value="\A3\missions_f_beta\data\img\decals\decal_prone5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone5_ca.paa";
					};
					class 93
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F93";
						value="\A3\missions_f_beta\data\img\decals\decal_prone6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone6_ca.paa";
					};
					class 94
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F94";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle1_ca.paa";
					};
					class 95
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F95";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle2_ca.paa";
					};
					class 96
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F96";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle3_ca.paa";
					};
					class 97
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F97";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle4_ca.paa";
					};
					class 98
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F98";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle5_ca.paa";
					};
					class 99
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F99";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle6_ca.paa";
					};
					class 100
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F100";
						value="\A3\missions_f_beta\data\img\decals\decal_santiago_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_santiago_ca.paa";
					};
					class 101
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F101";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm1_ca.paa";
					};
					class 102
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F102";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm2_ca.paa";
					};
					class 103
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F103";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm3_ca.paa";
					};
					class 104
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F104";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm4_ca.paa";
					};
					class 105
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F105";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm5_ca.paa";
					};
					class 106
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F106";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm6_ca.paa";
					};
					class 107
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F107";
						value="\A3\missions_f_beta\data\img\decals\decal_stand1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand1_ca.paa";
					};
					class 108
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F108";
						value="\A3\missions_f_beta\data\img\decals\decal_stand2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand2_ca.paa";
					};
					class 109
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F109";
						value="\A3\missions_f_beta\data\img\decals\decal_stand3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand3_ca.paa";
					};
					class 110
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F110";
						value="\A3\missions_f_beta\data\img\decals\decal_stand4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand4_ca.paa";
					};
					class 111
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F111";
						value="\A3\missions_f_beta\data\img\decals\decal_stand5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand5_ca.paa";
					};
					class 112
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F112";
						value="\A3\missions_f_beta\data\img\decals\decal_stand6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand6_ca.paa";
					};
					class 113
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F113";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot1_ca.paa";
					};
					class 114
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F114";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot2_ca.paa";
					};
					class 115
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F115";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot3_ca.paa";
					};
					class 116
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F116";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot4_ca.paa";
					};
					class 117
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F117";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot5_ca.paa";
					};
					class 118
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F118";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot6_ca.paa";
					};
					class 119
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F119";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right1_ca.paa";
					};
					class 120
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F120";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right2_ca.paa";
					};
					class 121
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F121";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right3_ca.paa";
					};
					class 122
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F122";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right4_ca.paa";
					};
					class 123
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F123";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right5_ca.paa";
					};
					class 124
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F124";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right6_ca.paa";
					};
					class 125
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F125";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target1_ca.paa";
					};
					class 126
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F126";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target2_ca.paa";
					};
					class 127
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F127";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target3_ca.paa";
					};
					class 128
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F128";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target4_ca.paa";
					};
					class 129
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F129";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target5_ca.paa";
					};
					class 130
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F130";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target6_ca.paa";
					};
					class 131
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F131";
						value="\A3\missions_f_beta\data\img\decals\decal_vault1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault1_ca.paa";
					};
					class 132
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F132";
						value="\A3\missions_f_beta\data\img\decals\decal_vault2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault2_ca.paa";
					};
					class 133
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F133";
						value="\A3\missions_f_beta\data\img\decals\decal_vault3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault3_ca.paa";
					};
					class 134
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F134";
						value="\A3\missions_f_beta\data\img\decals\decal_vault4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault4_ca.paa";
					};
					class 135
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F135";
						value="\A3\missions_f_beta\data\img\decals\decal_vault5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault5_ca.paa";
					};
					class 136
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F136";
						value="\A3\missions_f_beta\data\img\decals\decal_vault6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault6_ca.paa";
					};
					class 138
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F138";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out1_ca.paa";
					};
					class 139
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F139";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out2_ca.paa";
					};
					class 140
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F140";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out3_ca.paa";
					};
					class 141
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F141";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out4_ca.paa";
					};
					class 142
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F142";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out5_ca.paa";
					};
					class 143
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F143";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out6_ca.paa";
					};
				};
			};
			class SwitchTexture2: SwitchTexture1
			{
				property="SwitchTexture2";
				displayName="$STR_3den_object_attribute_objecttexturecustom1_displayname";
				expression="_this setObjectTextureGlobal [1, _value]";
			};
			class SwitchTexture3: SwitchTexture1
			{
				property="SwitchTexture3";
				displayName="$STR_3den_object_attribute_objecttexturecustom2_displayname";
				expression="_this setObjectTextureGlobal [2, _value]";
			};
			class SwitchTexture4: SwitchTexture1
			{
				property="SwitchTexture4";
				displayName="$STR_3den_object_attribute_objecttexturecustom3_displayname";
				expression="_this setObjectTextureGlobal [3, _value]";
			};
			class SwitchTexture5: SwitchTexture1
			{
				property="SwitchTexture5";
				displayName="$STR_3den_object_attribute_objecttexturecustom4_displayname";
				expression="_this setObjectTextureGlobal [4, _value]";
			};
			class SwitchTexture6: SwitchTexture1
			{
				property="SwitchTexture6";
				displayName="$STR_3den_object_attribute_objecttexturecustom5_displayname";
				expression="_this setObjectTextureGlobal [5, _value]";
			};
			class SwitchTexture7: SwitchTexture1
			{
				property="SwitchTexture7";
				displayName="$STR_3den_object_attribute_objecttexturecustom6_displayname";
				expression="_this setObjectTextureGlobal [6, _value]";
			};
			class SwitchTexture8: SwitchTexture1
			{
				property="SwitchTexture8";
				displayName="$STR_3den_object_attribute_objecttexturecustom7_displayname";
				expression="_this setObjectTextureGlobal [7, _value]";
			};
		};
	};
	class Land_Shoot_House_Wall_Stand_F: Land_Shoot_House_Wall_F
	{
		class Attributes
		{
			class SwitchTexture1
			{
				property="SwitchTexture1";
				displayName="$STR_3den_object_attribute_objecttexturecustom0_displayname";
				control="Combo";
				expression="_this setObjectTextureGlobal [0, _value]";
				defaultValue="'#(argb,8,8,3)color(0,0,0,0,ca)'";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="";
						value="#(argb,8,8,3)color(0,0,0,0,ca)";
						picture="#(argb,8,8,3)color(0,0,0,0,ca)";
					};
					class 2
					{
						name="Aliens#Fakenews";
						value="\A3\missions_f_beta\data\img\decals\decal_aliens_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_aliens_ca.paa";
					};
					class 3
					{
						name="$STR_A3_CFGVEHICLES_LAND_TARGET_DUELING_01_F0";
						value="\A3\missions_f_beta\data\img\decals\decal_binary_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_binary_ca.paa";
					};
					class 4
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F4";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA1_ca.paa";
					};
					class 5
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F5";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA2_ca.paa";
					};
					class 6
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F6";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA3_ca.paa";
					};
					class 7
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F7";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA4_ca.paa";
					};
					class 8
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F8";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA5_ca.paa";
					};
					class 9
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F9";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA6_ca.paa";
					};
					class 10
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F10";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB1_ca.paa";
					};
					class 11
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F11";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB2_ca.paa";
					};
					class 12
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F12";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB3_ca.paa";
					};
					class 13
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F13";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB4_ca.paa";
					};
					class 14
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F14";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB5_ca.paa";
					};
					class 15
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F15";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB6_ca.paa";
					};
					class 16
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F16";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC1_ca.paa";
					};
					class 17
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F17";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC2_ca.paa";
					};
					class 18
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F18";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC3_ca.paa";
					};
					class 19
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F19";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC4_ca.paa";
					};
					class 20
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F20";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC5_ca.paa";
					};
					class 21
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F21";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC6_ca.paa";
					};
					class 23
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F22";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD1_ca.paa";
					};
					class 24
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F23";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD2_ca.paa";
					};
					class 25
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F24";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD3_ca.paa";
					};
					class 26
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F25";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD4_ca.paa";
					};
					class 27
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F26";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD5_ca.paa";
					};
					class 28
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F27";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD6_ca.paa";
					};
					class 144
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F144";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH1_ca.paa";
					};
					class 29
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F29";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH2_ca.paa";
					};
					class 30
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F30";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH3_ca.paa";
					};
					class 31
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F31";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH4_ca.paa";
					};
					class 32
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F32";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH5_ca.paa";
					};
					class 33
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F33";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH6_ca.paa";
					};
					class 34
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F34";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl1_ca.paa";
					};
					class 35
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F35";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl2_ca.paa";
					};
					class 36
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F36";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl3_ca.paa";
					};
					class 37
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F37";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl4_ca.paa";
					};
					class 38
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F38";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl5_ca.paa";
					};
					class 39
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F39";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl6_ca.paa";
					};
					class 40
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F40";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch1_ca.paa";
					};
					class 41
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F41";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch2_ca.paa";
					};
					class 42
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F42";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch3_ca.paa";
					};
					class 43
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F43";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch4_ca.paa";
					};
					class 44
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F44";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch5_ca.paa";
					};
					class 45
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F45";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch6_ca.paa";
					};
					class 46
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F46";
						value="\A3\missions_f_beta\data\img\decals\decal_crowe_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crowe_ca.paa";
					};
					class 47
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F47";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel1_ca.paa";
					};
					class 48
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F48";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel2_ca.paa";
					};
					class 49
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F49";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel3_ca.paa";
					};
					class 50
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F50";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel4_ca.paa";
					};
					class 51
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F51";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel5_ca.paa";
					};
					class 52
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F52";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel6_ca.paa";
					};
					class 53
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F53";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left1_ca.paa";
					};
					class 54
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F54";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left2_ca.paa";
					};
					class 55
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F55";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left3_ca.paa";
					};
					class 56
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F56";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left4_ca.paa";
					};
					class 57
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F57";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left5_ca.paa";
					};
					class 58
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F58";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left6_ca.paa";
					};
					class 59
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F59";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right1_ca.paa";
					};
					class 60
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F60";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right2_ca.paa";
					};
					class 61
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F61";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right3_ca.paa";
					};
					class 62
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F62";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right4_ca.paa";
					};
					class 63
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F63";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right5_ca.paa";
					};
					class 64
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F64";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right6_ca.paa";
					};
					class 65
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F65";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left1_ca.paa";
					};
					class 66
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F66";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left2_ca.paa";
					};
					class 145
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F66";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left3_ca.paa";
					};
					class 67
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F67";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left4_ca.paa";
					};
					class 68
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F68";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left5_ca.paa";
					};
					class 69
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F69";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left6_ca.paa";
					};
					class 70
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F70";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right1_ca.paa";
					};
					class 71
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F71";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right2_ca.paa";
					};
					class 72
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F72";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right3_ca.paa";
					};
					class 73
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F73";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right4_ca.paa";
					};
					class 74
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F74";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right5_ca.paa";
					};
					class 75
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F75";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right6_ca.paa";
					};
					class 76
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F76";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target1_ca.paa";
					};
					class 77
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F77";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target2_ca.paa";
					};
					class 78
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F78";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target3_ca.paa";
					};
					class 79
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F79";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target4_ca.paa";
					};
					class 80
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F80";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target5_ca.paa";
					};
					class 81
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F81";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target6_ca.paa";
					};
					class 82
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F82";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate1_ca.paa";
					};
					class 83
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F83";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate2_ca.paa";
					};
					class 146
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F83";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate3_ca.paa";
					};
					class 84
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F84";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate4_ca.paa";
					};
					class 85
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F85";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate5_ca.paa";
					};
					class 86
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F86";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate6_ca.paa";
					};
					class 87
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F87";
						value="\A3\missions_f_beta\data\img\decals\decal_phalanx_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_phalanx_ca.paa";
					};
					class 88
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F88";
						value="\A3\missions_f_beta\data\img\decals\decal_prone1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone1_ca.paa";
					};
					class 89
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F89";
						value="\A3\missions_f_beta\data\img\decals\decal_prone2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone2_ca.paa";
					};
					class 90
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F90";
						value="\A3\missions_f_beta\data\img\decals\decal_prone3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone3_ca.paa";
					};
					class 91
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F91";
						value="\A3\missions_f_beta\data\img\decals\decal_prone4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone4_ca.paa";
					};
					class 92
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F92";
						value="\A3\missions_f_beta\data\img\decals\decal_prone5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone5_ca.paa";
					};
					class 93
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F93";
						value="\A3\missions_f_beta\data\img\decals\decal_prone6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone6_ca.paa";
					};
					class 94
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F94";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle1_ca.paa";
					};
					class 95
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F95";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle2_ca.paa";
					};
					class 96
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F96";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle3_ca.paa";
					};
					class 97
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F97";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle4_ca.paa";
					};
					class 98
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F98";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle5_ca.paa";
					};
					class 99
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F99";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle6_ca.paa";
					};
					class 100
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F100";
						value="\A3\missions_f_beta\data\img\decals\decal_santiago_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_santiago_ca.paa";
					};
					class 101
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F101";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm1_ca.paa";
					};
					class 102
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F102";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm2_ca.paa";
					};
					class 103
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F103";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm3_ca.paa";
					};
					class 104
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F104";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm4_ca.paa";
					};
					class 105
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F105";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm5_ca.paa";
					};
					class 106
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F106";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm6_ca.paa";
					};
					class 107
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F107";
						value="\A3\missions_f_beta\data\img\decals\decal_stand1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand1_ca.paa";
					};
					class 108
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F108";
						value="\A3\missions_f_beta\data\img\decals\decal_stand2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand2_ca.paa";
					};
					class 109
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F109";
						value="\A3\missions_f_beta\data\img\decals\decal_stand3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand3_ca.paa";
					};
					class 110
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F110";
						value="\A3\missions_f_beta\data\img\decals\decal_stand4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand4_ca.paa";
					};
					class 111
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F111";
						value="\A3\missions_f_beta\data\img\decals\decal_stand5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand5_ca.paa";
					};
					class 112
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F112";
						value="\A3\missions_f_beta\data\img\decals\decal_stand6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand6_ca.paa";
					};
					class 113
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F113";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot1_ca.paa";
					};
					class 114
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F114";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot2_ca.paa";
					};
					class 115
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F115";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot3_ca.paa";
					};
					class 116
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F116";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot4_ca.paa";
					};
					class 117
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F117";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot5_ca.paa";
					};
					class 118
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F118";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot6_ca.paa";
					};
					class 119
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F119";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right1_ca.paa";
					};
					class 120
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F120";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right2_ca.paa";
					};
					class 121
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F121";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right3_ca.paa";
					};
					class 122
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F122";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right4_ca.paa";
					};
					class 123
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F123";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right5_ca.paa";
					};
					class 124
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F124";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right6_ca.paa";
					};
					class 125
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F125";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target1_ca.paa";
					};
					class 126
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F126";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target2_ca.paa";
					};
					class 127
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F127";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target3_ca.paa";
					};
					class 128
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F128";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target4_ca.paa";
					};
					class 129
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F129";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target5_ca.paa";
					};
					class 130
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F130";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target6_ca.paa";
					};
					class 131
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F131";
						value="\A3\missions_f_beta\data\img\decals\decal_vault1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault1_ca.paa";
					};
					class 132
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F132";
						value="\A3\missions_f_beta\data\img\decals\decal_vault2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault2_ca.paa";
					};
					class 133
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F133";
						value="\A3\missions_f_beta\data\img\decals\decal_vault3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault3_ca.paa";
					};
					class 134
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F134";
						value="\A3\missions_f_beta\data\img\decals\decal_vault4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault4_ca.paa";
					};
					class 135
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F135";
						value="\A3\missions_f_beta\data\img\decals\decal_vault5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault5_ca.paa";
					};
					class 136
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F136";
						value="\A3\missions_f_beta\data\img\decals\decal_vault6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault6_ca.paa";
					};
					class 138
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F138";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out1_ca.paa";
					};
					class 139
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F139";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out2_ca.paa";
					};
					class 140
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F140";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out3_ca.paa";
					};
					class 141
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F141";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out4_ca.paa";
					};
					class 142
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F142";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out5_ca.paa";
					};
					class 143
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F143";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out6_ca.paa";
					};
				};
			};
			class SwitchTexture2: SwitchTexture1
			{
				property="SwitchTexture2";
				displayName="$STR_3den_object_attribute_objecttexturecustom1_displayname";
				expression="_this setObjectTextureGlobal [1, _value]";
			};
			class SwitchTexture3: SwitchTexture1
			{
				property="SwitchTexture3";
				displayName="$STR_3den_object_attribute_objecttexturecustom2_displayname";
				expression="_this setObjectTextureGlobal [2, _value]";
			};
			class SwitchTexture4: SwitchTexture1
			{
				property="SwitchTexture4";
				displayName="$STR_3den_object_attribute_objecttexturecustom3_displayname";
				expression="_this setObjectTextureGlobal [3, _value]";
			};
			class SwitchTexture5: SwitchTexture1
			{
				property="SwitchTexture5";
				displayName="$STR_3den_object_attribute_objecttexturecustom4_displayname";
				expression="_this setObjectTextureGlobal [4, _value]";
			};
			class SwitchTexture6: SwitchTexture1
			{
				property="SwitchTexture6";
				displayName="$STR_3den_object_attribute_objecttexturecustom5_displayname";
				expression="_this setObjectTextureGlobal [5, _value]";
			};
		};
	};
	class Land_Shoot_House_Wall_Crouch_F: Land_Shoot_House_Wall_F
	{
		class Attributes
		{
			class SwitchTexture1
			{
				property="SwitchTexture1";
				displayName="$STR_3den_object_attribute_objecttexturecustom0_displayname";
				control="Combo";
				expression="_this setObjectTextureGlobal [0, _value]";
				defaultValue="'#(argb,8,8,3)color(0,0,0,0,ca)'";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="";
						value="#(argb,8,8,3)color(0,0,0,0,ca)";
						picture="#(argb,8,8,3)color(0,0,0,0,ca)";
					};
					class 2
					{
						name="Aliens#Fakenews";
						value="\A3\missions_f_beta\data\img\decals\decal_aliens_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_aliens_ca.paa";
					};
					class 3
					{
						name="$STR_A3_CFGVEHICLES_LAND_TARGET_DUELING_01_F0";
						value="\A3\missions_f_beta\data\img\decals\decal_binary_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_binary_ca.paa";
					};
					class 4
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F4";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA1_ca.paa";
					};
					class 5
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F5";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA2_ca.paa";
					};
					class 6
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F6";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA3_ca.paa";
					};
					class 7
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F7";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA4_ca.paa";
					};
					class 8
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F8";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA5_ca.paa";
					};
					class 9
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F9";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA6_ca.paa";
					};
					class 10
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F10";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB1_ca.paa";
					};
					class 11
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F11";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB2_ca.paa";
					};
					class 12
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F12";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB3_ca.paa";
					};
					class 13
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F13";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB4_ca.paa";
					};
					class 14
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F14";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB5_ca.paa";
					};
					class 15
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F15";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB6_ca.paa";
					};
					class 16
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F16";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC1_ca.paa";
					};
					class 17
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F17";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC2_ca.paa";
					};
					class 18
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F18";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC3_ca.paa";
					};
					class 19
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F19";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC4_ca.paa";
					};
					class 20
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F20";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC5_ca.paa";
					};
					class 21
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F21";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC6_ca.paa";
					};
					class 23
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F22";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD1_ca.paa";
					};
					class 24
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F23";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD2_ca.paa";
					};
					class 25
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F24";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD3_ca.paa";
					};
					class 26
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F25";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD4_ca.paa";
					};
					class 27
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F26";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD5_ca.paa";
					};
					class 28
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F27";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD6_ca.paa";
					};
					class 144
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F144";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH1_ca.paa";
					};
					class 29
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F29";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH2_ca.paa";
					};
					class 30
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F30";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH3_ca.paa";
					};
					class 31
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F31";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH4_ca.paa";
					};
					class 32
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F32";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH5_ca.paa";
					};
					class 33
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F33";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH6_ca.paa";
					};
					class 34
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F34";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl1_ca.paa";
					};
					class 35
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F35";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl2_ca.paa";
					};
					class 36
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F36";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl3_ca.paa";
					};
					class 37
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F37";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl4_ca.paa";
					};
					class 38
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F38";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl5_ca.paa";
					};
					class 39
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F39";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl6_ca.paa";
					};
					class 40
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F40";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch1_ca.paa";
					};
					class 41
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F41";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch2_ca.paa";
					};
					class 42
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F42";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch3_ca.paa";
					};
					class 43
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F43";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch4_ca.paa";
					};
					class 44
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F44";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch5_ca.paa";
					};
					class 45
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F45";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch6_ca.paa";
					};
					class 46
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F46";
						value="\A3\missions_f_beta\data\img\decals\decal_crowe_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crowe_ca.paa";
					};
					class 47
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F47";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel1_ca.paa";
					};
					class 48
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F48";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel2_ca.paa";
					};
					class 49
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F49";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel3_ca.paa";
					};
					class 50
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F50";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel4_ca.paa";
					};
					class 51
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F51";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel5_ca.paa";
					};
					class 52
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F52";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel6_ca.paa";
					};
					class 53
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F53";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left1_ca.paa";
					};
					class 54
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F54";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left2_ca.paa";
					};
					class 55
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F55";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left3_ca.paa";
					};
					class 56
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F56";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left4_ca.paa";
					};
					class 57
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F57";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left5_ca.paa";
					};
					class 58
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F58";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left6_ca.paa";
					};
					class 59
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F59";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right1_ca.paa";
					};
					class 60
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F60";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right2_ca.paa";
					};
					class 61
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F61";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right3_ca.paa";
					};
					class 62
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F62";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right4_ca.paa";
					};
					class 63
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F63";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right5_ca.paa";
					};
					class 64
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F64";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right6_ca.paa";
					};
					class 65
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F65";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left1_ca.paa";
					};
					class 66
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F66";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left2_ca.paa";
					};
					class 145
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F66";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left3_ca.paa";
					};
					class 67
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F67";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left4_ca.paa";
					};
					class 68
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F68";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left5_ca.paa";
					};
					class 69
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F69";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left6_ca.paa";
					};
					class 70
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F70";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right1_ca.paa";
					};
					class 71
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F71";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right2_ca.paa";
					};
					class 72
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F72";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right3_ca.paa";
					};
					class 73
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F73";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right4_ca.paa";
					};
					class 74
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F74";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right5_ca.paa";
					};
					class 75
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F75";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right6_ca.paa";
					};
					class 76
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F76";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target1_ca.paa";
					};
					class 77
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F77";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target2_ca.paa";
					};
					class 78
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F78";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target3_ca.paa";
					};
					class 79
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F79";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target4_ca.paa";
					};
					class 80
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F80";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target5_ca.paa";
					};
					class 81
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F81";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target6_ca.paa";
					};
					class 82
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F82";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate1_ca.paa";
					};
					class 83
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F83";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate2_ca.paa";
					};
					class 146
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F83";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate3_ca.paa";
					};
					class 84
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F84";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate4_ca.paa";
					};
					class 85
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F85";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate5_ca.paa";
					};
					class 86
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F86";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate6_ca.paa";
					};
					class 87
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F87";
						value="\A3\missions_f_beta\data\img\decals\decal_phalanx_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_phalanx_ca.paa";
					};
					class 88
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F88";
						value="\A3\missions_f_beta\data\img\decals\decal_prone1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone1_ca.paa";
					};
					class 89
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F89";
						value="\A3\missions_f_beta\data\img\decals\decal_prone2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone2_ca.paa";
					};
					class 90
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F90";
						value="\A3\missions_f_beta\data\img\decals\decal_prone3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone3_ca.paa";
					};
					class 91
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F91";
						value="\A3\missions_f_beta\data\img\decals\decal_prone4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone4_ca.paa";
					};
					class 92
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F92";
						value="\A3\missions_f_beta\data\img\decals\decal_prone5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone5_ca.paa";
					};
					class 93
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F93";
						value="\A3\missions_f_beta\data\img\decals\decal_prone6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone6_ca.paa";
					};
					class 94
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F94";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle1_ca.paa";
					};
					class 95
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F95";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle2_ca.paa";
					};
					class 96
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F96";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle3_ca.paa";
					};
					class 97
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F97";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle4_ca.paa";
					};
					class 98
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F98";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle5_ca.paa";
					};
					class 99
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F99";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle6_ca.paa";
					};
					class 100
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F100";
						value="\A3\missions_f_beta\data\img\decals\decal_santiago_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_santiago_ca.paa";
					};
					class 101
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F101";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm1_ca.paa";
					};
					class 102
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F102";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm2_ca.paa";
					};
					class 103
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F103";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm3_ca.paa";
					};
					class 104
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F104";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm4_ca.paa";
					};
					class 105
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F105";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm5_ca.paa";
					};
					class 106
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F106";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm6_ca.paa";
					};
					class 107
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F107";
						value="\A3\missions_f_beta\data\img\decals\decal_stand1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand1_ca.paa";
					};
					class 108
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F108";
						value="\A3\missions_f_beta\data\img\decals\decal_stand2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand2_ca.paa";
					};
					class 109
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F109";
						value="\A3\missions_f_beta\data\img\decals\decal_stand3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand3_ca.paa";
					};
					class 110
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F110";
						value="\A3\missions_f_beta\data\img\decals\decal_stand4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand4_ca.paa";
					};
					class 111
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F111";
						value="\A3\missions_f_beta\data\img\decals\decal_stand5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand5_ca.paa";
					};
					class 112
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F112";
						value="\A3\missions_f_beta\data\img\decals\decal_stand6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand6_ca.paa";
					};
					class 113
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F113";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot1_ca.paa";
					};
					class 114
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F114";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot2_ca.paa";
					};
					class 115
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F115";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot3_ca.paa";
					};
					class 116
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F116";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot4_ca.paa";
					};
					class 117
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F117";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot5_ca.paa";
					};
					class 118
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F118";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot6_ca.paa";
					};
					class 119
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F119";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right1_ca.paa";
					};
					class 120
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F120";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right2_ca.paa";
					};
					class 121
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F121";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right3_ca.paa";
					};
					class 122
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F122";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right4_ca.paa";
					};
					class 123
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F123";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right5_ca.paa";
					};
					class 124
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F124";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right6_ca.paa";
					};
					class 125
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F125";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target1_ca.paa";
					};
					class 126
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F126";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target2_ca.paa";
					};
					class 127
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F127";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target3_ca.paa";
					};
					class 128
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F128";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target4_ca.paa";
					};
					class 129
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F129";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target5_ca.paa";
					};
					class 130
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F130";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target6_ca.paa";
					};
					class 131
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F131";
						value="\A3\missions_f_beta\data\img\decals\decal_vault1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault1_ca.paa";
					};
					class 132
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F132";
						value="\A3\missions_f_beta\data\img\decals\decal_vault2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault2_ca.paa";
					};
					class 133
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F133";
						value="\A3\missions_f_beta\data\img\decals\decal_vault3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault3_ca.paa";
					};
					class 134
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F134";
						value="\A3\missions_f_beta\data\img\decals\decal_vault4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault4_ca.paa";
					};
					class 135
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F135";
						value="\A3\missions_f_beta\data\img\decals\decal_vault5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault5_ca.paa";
					};
					class 136
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F136";
						value="\A3\missions_f_beta\data\img\decals\decal_vault6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault6_ca.paa";
					};
					class 138
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F138";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out1_ca.paa";
					};
					class 139
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F139";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out2_ca.paa";
					};
					class 140
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F140";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out3_ca.paa";
					};
					class 141
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F141";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out4_ca.paa";
					};
					class 142
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F142";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out5_ca.paa";
					};
					class 143
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F143";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out6_ca.paa";
					};
				};
			};
			class SwitchTexture2: SwitchTexture1
			{
				property="SwitchTexture2";
				displayName="$STR_3den_object_attribute_objecttexturecustom1_displayname";
				expression="_this setObjectTextureGlobal [1, _value]";
			};
			class SwitchTexture3: SwitchTexture1
			{
				property="SwitchTexture3";
				displayName="$STR_3den_object_attribute_objecttexturecustom2_displayname";
				expression="_this setObjectTextureGlobal [2, _value]";
			};
			class SwitchTexture4: SwitchTexture1
			{
				property="SwitchTexture4";
				displayName="$STR_3den_object_attribute_objecttexturecustom3_displayname";
				expression="_this setObjectTextureGlobal [3, _value]";
			};
		};
	};
	class Land_Shoot_House_Wall_Prone_F: Land_Shoot_House_Wall_F
	{
		class Attributes
		{
			class SwitchTexture1
			{
				property="SwitchTexture1";
				displayName="$STR_3den_object_attribute_objecttexturecustom0_displayname";
				control="Combo";
				expression="_this setObjectTextureGlobal [0, _value]";
				defaultValue="'#(argb,8,8,3)color(0,0,0,0,ca)'";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="";
						value="#(argb,8,8,3)color(0,0,0,0,ca)";
						picture="#(argb,8,8,3)color(0,0,0,0,ca)";
					};
					class 2
					{
						name="Aliens#Fakenews";
						value="\A3\missions_f_beta\data\img\decals\decal_aliens_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_aliens_ca.paa";
					};
					class 3
					{
						name="$STR_A3_CFGVEHICLES_LAND_TARGET_DUELING_01_F0";
						value="\A3\missions_f_beta\data\img\decals\decal_binary_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_binary_ca.paa";
					};
					class 4
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F4";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA1_ca.paa";
					};
					class 5
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F5";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA2_ca.paa";
					};
					class 6
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F6";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA3_ca.paa";
					};
					class 7
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F7";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA4_ca.paa";
					};
					class 8
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F8";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA5_ca.paa";
					};
					class 9
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F9";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA6_ca.paa";
					};
					class 10
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F10";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB1_ca.paa";
					};
					class 11
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F11";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB2_ca.paa";
					};
					class 12
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F12";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB3_ca.paa";
					};
					class 13
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F13";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB4_ca.paa";
					};
					class 14
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F14";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB5_ca.paa";
					};
					class 15
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F15";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB6_ca.paa";
					};
					class 16
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F16";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC1_ca.paa";
					};
					class 17
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F17";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC2_ca.paa";
					};
					class 18
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F18";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC3_ca.paa";
					};
					class 19
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F19";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC4_ca.paa";
					};
					class 20
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F20";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC5_ca.paa";
					};
					class 21
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F21";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC6_ca.paa";
					};
					class 23
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F22";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD1_ca.paa";
					};
					class 24
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F23";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD2_ca.paa";
					};
					class 25
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F24";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD3_ca.paa";
					};
					class 26
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F25";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD4_ca.paa";
					};
					class 27
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F26";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD5_ca.paa";
					};
					class 28
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F27";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD6_ca.paa";
					};
					class 144
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F144";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH1_ca.paa";
					};
					class 29
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F29";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH2_ca.paa";
					};
					class 30
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F30";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH3_ca.paa";
					};
					class 31
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F31";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH4_ca.paa";
					};
					class 32
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F32";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH5_ca.paa";
					};
					class 33
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F33";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH6_ca.paa";
					};
					class 34
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F34";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl1_ca.paa";
					};
					class 35
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F35";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl2_ca.paa";
					};
					class 36
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F36";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl3_ca.paa";
					};
					class 37
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F37";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl4_ca.paa";
					};
					class 38
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F38";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl5_ca.paa";
					};
					class 39
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F39";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl6_ca.paa";
					};
					class 40
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F40";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch1_ca.paa";
					};
					class 41
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F41";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch2_ca.paa";
					};
					class 42
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F42";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch3_ca.paa";
					};
					class 43
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F43";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch4_ca.paa";
					};
					class 44
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F44";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch5_ca.paa";
					};
					class 45
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F45";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch6_ca.paa";
					};
					class 46
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F46";
						value="\A3\missions_f_beta\data\img\decals\decal_crowe_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crowe_ca.paa";
					};
					class 47
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F47";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel1_ca.paa";
					};
					class 48
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F48";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel2_ca.paa";
					};
					class 49
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F49";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel3_ca.paa";
					};
					class 50
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F50";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel4_ca.paa";
					};
					class 51
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F51";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel5_ca.paa";
					};
					class 52
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F52";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel6_ca.paa";
					};
					class 53
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F53";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left1_ca.paa";
					};
					class 54
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F54";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left2_ca.paa";
					};
					class 55
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F55";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left3_ca.paa";
					};
					class 56
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F56";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left4_ca.paa";
					};
					class 57
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F57";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left5_ca.paa";
					};
					class 58
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F58";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left6_ca.paa";
					};
					class 59
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F59";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right1_ca.paa";
					};
					class 60
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F60";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right2_ca.paa";
					};
					class 61
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F61";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right3_ca.paa";
					};
					class 62
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F62";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right4_ca.paa";
					};
					class 63
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F63";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right5_ca.paa";
					};
					class 64
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F64";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right6_ca.paa";
					};
					class 65
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F65";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left1_ca.paa";
					};
					class 66
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F66";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left2_ca.paa";
					};
					class 145
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F66";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left3_ca.paa";
					};
					class 67
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F67";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left4_ca.paa";
					};
					class 68
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F68";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left5_ca.paa";
					};
					class 69
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F69";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left6_ca.paa";
					};
					class 70
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F70";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right1_ca.paa";
					};
					class 71
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F71";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right2_ca.paa";
					};
					class 72
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F72";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right3_ca.paa";
					};
					class 73
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F73";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right4_ca.paa";
					};
					class 74
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F74";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right5_ca.paa";
					};
					class 75
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F75";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right6_ca.paa";
					};
					class 76
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F76";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target1_ca.paa";
					};
					class 77
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F77";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target2_ca.paa";
					};
					class 78
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F78";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target3_ca.paa";
					};
					class 79
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F79";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target4_ca.paa";
					};
					class 80
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F80";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target5_ca.paa";
					};
					class 81
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F81";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target6_ca.paa";
					};
					class 82
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F82";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate1_ca.paa";
					};
					class 83
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F83";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate2_ca.paa";
					};
					class 146
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F83";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate3_ca.paa";
					};
					class 84
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F84";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate4_ca.paa";
					};
					class 85
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F85";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate5_ca.paa";
					};
					class 86
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F86";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate6_ca.paa";
					};
					class 87
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F87";
						value="\A3\missions_f_beta\data\img\decals\decal_phalanx_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_phalanx_ca.paa";
					};
					class 88
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F88";
						value="\A3\missions_f_beta\data\img\decals\decal_prone1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone1_ca.paa";
					};
					class 89
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F89";
						value="\A3\missions_f_beta\data\img\decals\decal_prone2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone2_ca.paa";
					};
					class 90
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F90";
						value="\A3\missions_f_beta\data\img\decals\decal_prone3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone3_ca.paa";
					};
					class 91
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F91";
						value="\A3\missions_f_beta\data\img\decals\decal_prone4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone4_ca.paa";
					};
					class 92
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F92";
						value="\A3\missions_f_beta\data\img\decals\decal_prone5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone5_ca.paa";
					};
					class 93
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F93";
						value="\A3\missions_f_beta\data\img\decals\decal_prone6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone6_ca.paa";
					};
					class 94
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F94";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle1_ca.paa";
					};
					class 95
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F95";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle2_ca.paa";
					};
					class 96
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F96";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle3_ca.paa";
					};
					class 97
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F97";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle4_ca.paa";
					};
					class 98
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F98";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle5_ca.paa";
					};
					class 99
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F99";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle6_ca.paa";
					};
					class 100
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F100";
						value="\A3\missions_f_beta\data\img\decals\decal_santiago_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_santiago_ca.paa";
					};
					class 101
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F101";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm1_ca.paa";
					};
					class 102
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F102";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm2_ca.paa";
					};
					class 103
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F103";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm3_ca.paa";
					};
					class 104
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F104";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm4_ca.paa";
					};
					class 105
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F105";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm5_ca.paa";
					};
					class 106
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F106";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm6_ca.paa";
					};
					class 107
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F107";
						value="\A3\missions_f_beta\data\img\decals\decal_stand1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand1_ca.paa";
					};
					class 108
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F108";
						value="\A3\missions_f_beta\data\img\decals\decal_stand2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand2_ca.paa";
					};
					class 109
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F109";
						value="\A3\missions_f_beta\data\img\decals\decal_stand3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand3_ca.paa";
					};
					class 110
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F110";
						value="\A3\missions_f_beta\data\img\decals\decal_stand4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand4_ca.paa";
					};
					class 111
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F111";
						value="\A3\missions_f_beta\data\img\decals\decal_stand5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand5_ca.paa";
					};
					class 112
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F112";
						value="\A3\missions_f_beta\data\img\decals\decal_stand6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand6_ca.paa";
					};
					class 113
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F113";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot1_ca.paa";
					};
					class 114
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F114";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot2_ca.paa";
					};
					class 115
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F115";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot3_ca.paa";
					};
					class 116
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F116";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot4_ca.paa";
					};
					class 117
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F117";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot5_ca.paa";
					};
					class 118
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F118";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot6_ca.paa";
					};
					class 119
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F119";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right1_ca.paa";
					};
					class 120
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F120";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right2_ca.paa";
					};
					class 121
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F121";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right3_ca.paa";
					};
					class 122
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F122";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right4_ca.paa";
					};
					class 123
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F123";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right5_ca.paa";
					};
					class 124
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F124";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right6_ca.paa";
					};
					class 125
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F125";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target1_ca.paa";
					};
					class 126
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F126";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target2_ca.paa";
					};
					class 127
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F127";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target3_ca.paa";
					};
					class 128
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F128";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target4_ca.paa";
					};
					class 129
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F129";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target5_ca.paa";
					};
					class 130
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F130";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target6_ca.paa";
					};
					class 131
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F131";
						value="\A3\missions_f_beta\data\img\decals\decal_vault1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault1_ca.paa";
					};
					class 132
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F132";
						value="\A3\missions_f_beta\data\img\decals\decal_vault2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault2_ca.paa";
					};
					class 133
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F133";
						value="\A3\missions_f_beta\data\img\decals\decal_vault3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault3_ca.paa";
					};
					class 134
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F134";
						value="\A3\missions_f_beta\data\img\decals\decal_vault4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault4_ca.paa";
					};
					class 135
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F135";
						value="\A3\missions_f_beta\data\img\decals\decal_vault5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault5_ca.paa";
					};
					class 136
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F136";
						value="\A3\missions_f_beta\data\img\decals\decal_vault6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault6_ca.paa";
					};
					class 138
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F138";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out1_ca.paa";
					};
					class 139
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F139";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out2_ca.paa";
					};
					class 140
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F140";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out3_ca.paa";
					};
					class 141
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F141";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out4_ca.paa";
					};
					class 142
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F142";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out5_ca.paa";
					};
					class 143
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F143";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out6_ca.paa";
					};
				};
			};
			class SwitchTexture2: SwitchTexture1
			{
				property="SwitchTexture2";
				displayName="$STR_3den_object_attribute_objecttexturecustom1_displayname";
				expression="_this setObjectTextureGlobal [1, _value]";
			};
		};
	};
	class Land_Shoot_House_Wall_Long_F: Land_Shoot_House_Wall_F
	{
		class Attributes
		{
			class SwitchTexture1
			{
				property="SwitchTexture1";
				displayName="$STR_3den_object_attribute_objecttexturecustom0_displayname";
				control="Combo";
				expression="_this setObjectTextureGlobal [0, _value]";
				defaultValue="'#(argb,8,8,3)color(0,0,0,0,ca)'";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="";
						value="#(argb,8,8,3)color(0,0,0,0,ca)";
						picture="#(argb,8,8,3)color(0,0,0,0,ca)";
					};
					class 2
					{
						name="Aliens#Fakenews";
						value="\A3\missions_f_beta\data\img\decals\decal_aliens_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_aliens_ca.paa";
					};
					class 3
					{
						name="$STR_A3_CFGVEHICLES_LAND_TARGET_DUELING_01_F0";
						value="\A3\missions_f_beta\data\img\decals\decal_binary_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_binary_ca.paa";
					};
					class 4
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F4";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA1_ca.paa";
					};
					class 5
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F5";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA2_ca.paa";
					};
					class 6
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F6";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA3_ca.paa";
					};
					class 7
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F7";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA4_ca.paa";
					};
					class 8
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F8";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA5_ca.paa";
					};
					class 9
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F9";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA6_ca.paa";
					};
					class 10
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F10";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB1_ca.paa";
					};
					class 11
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F11";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB2_ca.paa";
					};
					class 12
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F12";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB3_ca.paa";
					};
					class 13
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F13";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB4_ca.paa";
					};
					class 14
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F14";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB5_ca.paa";
					};
					class 15
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F15";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB6_ca.paa";
					};
					class 16
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F16";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC1_ca.paa";
					};
					class 17
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F17";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC2_ca.paa";
					};
					class 18
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F18";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC3_ca.paa";
					};
					class 19
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F19";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC4_ca.paa";
					};
					class 20
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F20";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC5_ca.paa";
					};
					class 21
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F21";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC6_ca.paa";
					};
					class 23
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F22";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD1_ca.paa";
					};
					class 24
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F23";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD2_ca.paa";
					};
					class 25
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F24";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD3_ca.paa";
					};
					class 26
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F25";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD4_ca.paa";
					};
					class 27
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F26";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD5_ca.paa";
					};
					class 28
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F27";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD6_ca.paa";
					};
					class 144
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F144";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH1_ca.paa";
					};
					class 29
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F29";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH2_ca.paa";
					};
					class 30
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F30";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH3_ca.paa";
					};
					class 31
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F31";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH4_ca.paa";
					};
					class 32
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F32";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH5_ca.paa";
					};
					class 33
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F33";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH6_ca.paa";
					};
					class 34
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F34";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl1_ca.paa";
					};
					class 35
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F35";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl2_ca.paa";
					};
					class 36
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F36";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl3_ca.paa";
					};
					class 37
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F37";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl4_ca.paa";
					};
					class 38
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F38";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl5_ca.paa";
					};
					class 39
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F39";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl6_ca.paa";
					};
					class 40
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F40";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch1_ca.paa";
					};
					class 41
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F41";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch2_ca.paa";
					};
					class 42
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F42";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch3_ca.paa";
					};
					class 43
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F43";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch4_ca.paa";
					};
					class 44
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F44";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch5_ca.paa";
					};
					class 45
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F45";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch6_ca.paa";
					};
					class 46
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F46";
						value="\A3\missions_f_beta\data\img\decals\decal_crowe_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crowe_ca.paa";
					};
					class 47
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F47";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel1_ca.paa";
					};
					class 48
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F48";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel2_ca.paa";
					};
					class 49
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F49";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel3_ca.paa";
					};
					class 50
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F50";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel4_ca.paa";
					};
					class 51
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F51";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel5_ca.paa";
					};
					class 52
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F52";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel6_ca.paa";
					};
					class 53
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F53";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left1_ca.paa";
					};
					class 54
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F54";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left2_ca.paa";
					};
					class 55
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F55";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left3_ca.paa";
					};
					class 56
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F56";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left4_ca.paa";
					};
					class 57
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F57";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left5_ca.paa";
					};
					class 58
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F58";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left6_ca.paa";
					};
					class 59
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F59";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right1_ca.paa";
					};
					class 60
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F60";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right2_ca.paa";
					};
					class 61
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F61";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right3_ca.paa";
					};
					class 62
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F62";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right4_ca.paa";
					};
					class 63
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F63";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right5_ca.paa";
					};
					class 64
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F64";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right6_ca.paa";
					};
					class 65
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F65";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left1_ca.paa";
					};
					class 66
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F66";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left2_ca.paa";
					};
					class 145
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F66";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left3_ca.paa";
					};
					class 67
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F67";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left4_ca.paa";
					};
					class 68
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F68";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left5_ca.paa";
					};
					class 69
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F69";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left6_ca.paa";
					};
					class 70
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F70";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right1_ca.paa";
					};
					class 71
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F71";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right2_ca.paa";
					};
					class 72
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F72";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right3_ca.paa";
					};
					class 73
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F73";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right4_ca.paa";
					};
					class 74
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F74";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right5_ca.paa";
					};
					class 75
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F75";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right6_ca.paa";
					};
					class 76
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F76";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target1_ca.paa";
					};
					class 77
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F77";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target2_ca.paa";
					};
					class 78
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F78";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target3_ca.paa";
					};
					class 79
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F79";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target4_ca.paa";
					};
					class 80
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F80";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target5_ca.paa";
					};
					class 81
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F81";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target6_ca.paa";
					};
					class 82
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F82";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate1_ca.paa";
					};
					class 83
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F83";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate2_ca.paa";
					};
					class 146
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F83";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate3_ca.paa";
					};
					class 84
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F84";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate4_ca.paa";
					};
					class 85
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F85";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate5_ca.paa";
					};
					class 86
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F86";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate6_ca.paa";
					};
					class 87
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F87";
						value="\A3\missions_f_beta\data\img\decals\decal_phalanx_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_phalanx_ca.paa";
					};
					class 88
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F88";
						value="\A3\missions_f_beta\data\img\decals\decal_prone1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone1_ca.paa";
					};
					class 89
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F89";
						value="\A3\missions_f_beta\data\img\decals\decal_prone2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone2_ca.paa";
					};
					class 90
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F90";
						value="\A3\missions_f_beta\data\img\decals\decal_prone3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone3_ca.paa";
					};
					class 91
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F91";
						value="\A3\missions_f_beta\data\img\decals\decal_prone4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone4_ca.paa";
					};
					class 92
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F92";
						value="\A3\missions_f_beta\data\img\decals\decal_prone5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone5_ca.paa";
					};
					class 93
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F93";
						value="\A3\missions_f_beta\data\img\decals\decal_prone6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone6_ca.paa";
					};
					class 94
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F94";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle1_ca.paa";
					};
					class 95
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F95";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle2_ca.paa";
					};
					class 96
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F96";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle3_ca.paa";
					};
					class 97
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F97";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle4_ca.paa";
					};
					class 98
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F98";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle5_ca.paa";
					};
					class 99
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F99";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle6_ca.paa";
					};
					class 100
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F100";
						value="\A3\missions_f_beta\data\img\decals\decal_santiago_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_santiago_ca.paa";
					};
					class 101
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F101";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm1_ca.paa";
					};
					class 102
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F102";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm2_ca.paa";
					};
					class 103
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F103";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm3_ca.paa";
					};
					class 104
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F104";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm4_ca.paa";
					};
					class 105
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F105";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm5_ca.paa";
					};
					class 106
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F106";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm6_ca.paa";
					};
					class 107
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F107";
						value="\A3\missions_f_beta\data\img\decals\decal_stand1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand1_ca.paa";
					};
					class 108
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F108";
						value="\A3\missions_f_beta\data\img\decals\decal_stand2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand2_ca.paa";
					};
					class 109
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F109";
						value="\A3\missions_f_beta\data\img\decals\decal_stand3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand3_ca.paa";
					};
					class 110
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F110";
						value="\A3\missions_f_beta\data\img\decals\decal_stand4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand4_ca.paa";
					};
					class 111
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F111";
						value="\A3\missions_f_beta\data\img\decals\decal_stand5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand5_ca.paa";
					};
					class 112
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F112";
						value="\A3\missions_f_beta\data\img\decals\decal_stand6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand6_ca.paa";
					};
					class 113
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F113";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot1_ca.paa";
					};
					class 114
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F114";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot2_ca.paa";
					};
					class 115
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F115";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot3_ca.paa";
					};
					class 116
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F116";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot4_ca.paa";
					};
					class 117
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F117";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot5_ca.paa";
					};
					class 118
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F118";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot6_ca.paa";
					};
					class 119
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F119";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right1_ca.paa";
					};
					class 120
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F120";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right2_ca.paa";
					};
					class 121
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F121";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right3_ca.paa";
					};
					class 122
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F122";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right4_ca.paa";
					};
					class 123
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F123";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right5_ca.paa";
					};
					class 124
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F124";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right6_ca.paa";
					};
					class 125
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F125";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target1_ca.paa";
					};
					class 126
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F126";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target2_ca.paa";
					};
					class 127
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F127";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target3_ca.paa";
					};
					class 128
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F128";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target4_ca.paa";
					};
					class 129
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F129";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target5_ca.paa";
					};
					class 130
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F130";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target6_ca.paa";
					};
					class 131
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F131";
						value="\A3\missions_f_beta\data\img\decals\decal_vault1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault1_ca.paa";
					};
					class 132
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F132";
						value="\A3\missions_f_beta\data\img\decals\decal_vault2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault2_ca.paa";
					};
					class 133
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F133";
						value="\A3\missions_f_beta\data\img\decals\decal_vault3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault3_ca.paa";
					};
					class 134
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F134";
						value="\A3\missions_f_beta\data\img\decals\decal_vault4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault4_ca.paa";
					};
					class 135
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F135";
						value="\A3\missions_f_beta\data\img\decals\decal_vault5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault5_ca.paa";
					};
					class 136
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F136";
						value="\A3\missions_f_beta\data\img\decals\decal_vault6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault6_ca.paa";
					};
					class 138
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F138";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out1_ca.paa";
					};
					class 139
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F139";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out2_ca.paa";
					};
					class 140
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F140";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out3_ca.paa";
					};
					class 141
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F141";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out4_ca.paa";
					};
					class 142
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F142";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out5_ca.paa";
					};
					class 143
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F143";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out6_ca.paa";
					};
				};
			};
			class SwitchTexture2: SwitchTexture1
			{
				property="SwitchTexture2";
				displayName="$STR_3den_object_attribute_objecttexturecustom1_displayname";
				expression="_this setObjectTextureGlobal [1, _value]";
			};
			class SwitchTexture3: SwitchTexture1
			{
				property="SwitchTexture3";
				displayName="$STR_3den_object_attribute_objecttexturecustom2_displayname";
				expression="_this setObjectTextureGlobal [2, _value]";
			};
			class SwitchTexture4: SwitchTexture1
			{
				property="SwitchTexture4";
				displayName="$STR_3den_object_attribute_objecttexturecustom3_displayname";
				expression="_this setObjectTextureGlobal [3, _value]";
			};
			class SwitchTexture5: SwitchTexture1
			{
				property="SwitchTexture5";
				displayName="$STR_3den_object_attribute_objecttexturecustom4_displayname";
				expression="_this setObjectTextureGlobal [4, _value]";
			};
			class SwitchTexture6: SwitchTexture1
			{
				property="SwitchTexture6";
				displayName="$STR_3den_object_attribute_objecttexturecustom5_displayname";
				expression="_this setObjectTextureGlobal [5, _value]";
			};
			class SwitchTexture7: SwitchTexture1
			{
				property="SwitchTexture7";
				displayName="$STR_3den_object_attribute_objecttexturecustom6_displayname";
				expression="_this setObjectTextureGlobal [6, _value]";
			};
			class SwitchTexture8: SwitchTexture1
			{
				property="SwitchTexture8";
				displayName="$STR_3den_object_attribute_objecttexturecustom7_displayname";
				expression="_this setObjectTextureGlobal [7, _value]";
			};
		};
	};
	class Land_Shoot_House_Wall_Long_Stand_F: Land_Shoot_House_Wall_Long_F
	{
		class Attributes
		{
			class SwitchTexture1
			{
				property="SwitchTexture1";
				displayName="$STR_3den_object_attribute_objecttexturecustom0_displayname";
				control="Combo";
				expression="_this setObjectTextureGlobal [0, _value]";
				defaultValue="'#(argb,8,8,3)color(0,0,0,0,ca)'";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="";
						value="#(argb,8,8,3)color(0,0,0,0,ca)";
						picture="#(argb,8,8,3)color(0,0,0,0,ca)";
					};
					class 2
					{
						name="Aliens#Fakenews";
						value="\A3\missions_f_beta\data\img\decals\decal_aliens_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_aliens_ca.paa";
					};
					class 3
					{
						name="$STR_A3_CFGVEHICLES_LAND_TARGET_DUELING_01_F0";
						value="\A3\missions_f_beta\data\img\decals\decal_binary_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_binary_ca.paa";
					};
					class 4
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F4";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA1_ca.paa";
					};
					class 5
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F5";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA2_ca.paa";
					};
					class 6
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F6";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA3_ca.paa";
					};
					class 7
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F7";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA4_ca.paa";
					};
					class 8
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F8";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA5_ca.paa";
					};
					class 9
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F9";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA6_ca.paa";
					};
					class 10
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F10";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB1_ca.paa";
					};
					class 11
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F11";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB2_ca.paa";
					};
					class 12
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F12";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB3_ca.paa";
					};
					class 13
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F13";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB4_ca.paa";
					};
					class 14
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F14";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB5_ca.paa";
					};
					class 15
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F15";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB6_ca.paa";
					};
					class 16
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F16";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC1_ca.paa";
					};
					class 17
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F17";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC2_ca.paa";
					};
					class 18
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F18";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC3_ca.paa";
					};
					class 19
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F19";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC4_ca.paa";
					};
					class 20
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F20";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC5_ca.paa";
					};
					class 21
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F21";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC6_ca.paa";
					};
					class 23
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F22";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD1_ca.paa";
					};
					class 24
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F23";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD2_ca.paa";
					};
					class 25
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F24";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD3_ca.paa";
					};
					class 26
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F25";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD4_ca.paa";
					};
					class 27
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F26";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD5_ca.paa";
					};
					class 28
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F27";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD6_ca.paa";
					};
					class 144
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F144";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH1_ca.paa";
					};
					class 29
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F29";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH2_ca.paa";
					};
					class 30
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F30";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH3_ca.paa";
					};
					class 31
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F31";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH4_ca.paa";
					};
					class 32
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F32";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH5_ca.paa";
					};
					class 33
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F33";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH6_ca.paa";
					};
					class 34
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F34";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl1_ca.paa";
					};
					class 35
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F35";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl2_ca.paa";
					};
					class 36
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F36";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl3_ca.paa";
					};
					class 37
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F37";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl4_ca.paa";
					};
					class 38
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F38";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl5_ca.paa";
					};
					class 39
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F39";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl6_ca.paa";
					};
					class 40
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F40";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch1_ca.paa";
					};
					class 41
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F41";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch2_ca.paa";
					};
					class 42
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F42";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch3_ca.paa";
					};
					class 43
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F43";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch4_ca.paa";
					};
					class 44
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F44";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch5_ca.paa";
					};
					class 45
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F45";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch6_ca.paa";
					};
					class 46
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F46";
						value="\A3\missions_f_beta\data\img\decals\decal_crowe_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crowe_ca.paa";
					};
					class 47
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F47";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel1_ca.paa";
					};
					class 48
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F48";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel2_ca.paa";
					};
					class 49
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F49";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel3_ca.paa";
					};
					class 50
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F50";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel4_ca.paa";
					};
					class 51
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F51";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel5_ca.paa";
					};
					class 52
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F52";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel6_ca.paa";
					};
					class 53
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F53";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left1_ca.paa";
					};
					class 54
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F54";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left2_ca.paa";
					};
					class 55
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F55";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left3_ca.paa";
					};
					class 56
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F56";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left4_ca.paa";
					};
					class 57
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F57";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left5_ca.paa";
					};
					class 58
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F58";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left6_ca.paa";
					};
					class 59
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F59";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right1_ca.paa";
					};
					class 60
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F60";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right2_ca.paa";
					};
					class 61
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F61";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right3_ca.paa";
					};
					class 62
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F62";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right4_ca.paa";
					};
					class 63
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F63";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right5_ca.paa";
					};
					class 64
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F64";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right6_ca.paa";
					};
					class 65
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F65";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left1_ca.paa";
					};
					class 66
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F66";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left2_ca.paa";
					};
					class 145
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F66";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left3_ca.paa";
					};
					class 67
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F67";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left4_ca.paa";
					};
					class 68
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F68";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left5_ca.paa";
					};
					class 69
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F69";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left6_ca.paa";
					};
					class 70
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F70";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right1_ca.paa";
					};
					class 71
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F71";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right2_ca.paa";
					};
					class 72
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F72";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right3_ca.paa";
					};
					class 73
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F73";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right4_ca.paa";
					};
					class 74
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F74";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right5_ca.paa";
					};
					class 75
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F75";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right6_ca.paa";
					};
					class 76
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F76";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target1_ca.paa";
					};
					class 77
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F77";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target2_ca.paa";
					};
					class 78
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F78";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target3_ca.paa";
					};
					class 79
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F79";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target4_ca.paa";
					};
					class 80
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F80";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target5_ca.paa";
					};
					class 81
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F81";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target6_ca.paa";
					};
					class 82
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F82";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate1_ca.paa";
					};
					class 83
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F83";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate2_ca.paa";
					};
					class 146
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F83";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate3_ca.paa";
					};
					class 84
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F84";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate4_ca.paa";
					};
					class 85
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F85";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate5_ca.paa";
					};
					class 86
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F86";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate6_ca.paa";
					};
					class 87
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F87";
						value="\A3\missions_f_beta\data\img\decals\decal_phalanx_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_phalanx_ca.paa";
					};
					class 88
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F88";
						value="\A3\missions_f_beta\data\img\decals\decal_prone1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone1_ca.paa";
					};
					class 89
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F89";
						value="\A3\missions_f_beta\data\img\decals\decal_prone2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone2_ca.paa";
					};
					class 90
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F90";
						value="\A3\missions_f_beta\data\img\decals\decal_prone3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone3_ca.paa";
					};
					class 91
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F91";
						value="\A3\missions_f_beta\data\img\decals\decal_prone4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone4_ca.paa";
					};
					class 92
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F92";
						value="\A3\missions_f_beta\data\img\decals\decal_prone5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone5_ca.paa";
					};
					class 93
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F93";
						value="\A3\missions_f_beta\data\img\decals\decal_prone6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone6_ca.paa";
					};
					class 94
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F94";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle1_ca.paa";
					};
					class 95
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F95";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle2_ca.paa";
					};
					class 96
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F96";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle3_ca.paa";
					};
					class 97
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F97";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle4_ca.paa";
					};
					class 98
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F98";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle5_ca.paa";
					};
					class 99
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F99";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle6_ca.paa";
					};
					class 100
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F100";
						value="\A3\missions_f_beta\data\img\decals\decal_santiago_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_santiago_ca.paa";
					};
					class 101
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F101";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm1_ca.paa";
					};
					class 102
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F102";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm2_ca.paa";
					};
					class 103
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F103";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm3_ca.paa";
					};
					class 104
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F104";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm4_ca.paa";
					};
					class 105
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F105";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm5_ca.paa";
					};
					class 106
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F106";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm6_ca.paa";
					};
					class 107
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F107";
						value="\A3\missions_f_beta\data\img\decals\decal_stand1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand1_ca.paa";
					};
					class 108
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F108";
						value="\A3\missions_f_beta\data\img\decals\decal_stand2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand2_ca.paa";
					};
					class 109
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F109";
						value="\A3\missions_f_beta\data\img\decals\decal_stand3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand3_ca.paa";
					};
					class 110
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F110";
						value="\A3\missions_f_beta\data\img\decals\decal_stand4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand4_ca.paa";
					};
					class 111
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F111";
						value="\A3\missions_f_beta\data\img\decals\decal_stand5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand5_ca.paa";
					};
					class 112
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F112";
						value="\A3\missions_f_beta\data\img\decals\decal_stand6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand6_ca.paa";
					};
					class 113
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F113";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot1_ca.paa";
					};
					class 114
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F114";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot2_ca.paa";
					};
					class 115
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F115";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot3_ca.paa";
					};
					class 116
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F116";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot4_ca.paa";
					};
					class 117
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F117";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot5_ca.paa";
					};
					class 118
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F118";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot6_ca.paa";
					};
					class 119
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F119";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right1_ca.paa";
					};
					class 120
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F120";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right2_ca.paa";
					};
					class 121
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F121";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right3_ca.paa";
					};
					class 122
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F122";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right4_ca.paa";
					};
					class 123
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F123";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right5_ca.paa";
					};
					class 124
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F124";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right6_ca.paa";
					};
					class 125
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F125";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target1_ca.paa";
					};
					class 126
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F126";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target2_ca.paa";
					};
					class 127
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F127";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target3_ca.paa";
					};
					class 128
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F128";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target4_ca.paa";
					};
					class 129
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F129";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target5_ca.paa";
					};
					class 130
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F130";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target6_ca.paa";
					};
					class 131
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F131";
						value="\A3\missions_f_beta\data\img\decals\decal_vault1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault1_ca.paa";
					};
					class 132
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F132";
						value="\A3\missions_f_beta\data\img\decals\decal_vault2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault2_ca.paa";
					};
					class 133
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F133";
						value="\A3\missions_f_beta\data\img\decals\decal_vault3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault3_ca.paa";
					};
					class 134
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F134";
						value="\A3\missions_f_beta\data\img\decals\decal_vault4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault4_ca.paa";
					};
					class 135
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F135";
						value="\A3\missions_f_beta\data\img\decals\decal_vault5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault5_ca.paa";
					};
					class 136
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F136";
						value="\A3\missions_f_beta\data\img\decals\decal_vault6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault6_ca.paa";
					};
					class 138
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F138";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out1_ca.paa";
					};
					class 139
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F139";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out2_ca.paa";
					};
					class 140
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F140";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out3_ca.paa";
					};
					class 141
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F141";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out4_ca.paa";
					};
					class 142
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F142";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out5_ca.paa";
					};
					class 143
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F143";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out6_ca.paa";
					};
				};
			};
			class SwitchTexture2: SwitchTexture1
			{
				property="SwitchTexture2";
				displayName="$STR_3den_object_attribute_objecttexturecustom1_displayname";
				expression="_this setObjectTextureGlobal [1, _value]";
			};
			class SwitchTexture3: SwitchTexture1
			{
				property="SwitchTexture3";
				displayName="$STR_3den_object_attribute_objecttexturecustom2_displayname";
				expression="_this setObjectTextureGlobal [2, _value]";
			};
			class SwitchTexture4: SwitchTexture1
			{
				property="SwitchTexture4";
				displayName="$STR_3den_object_attribute_objecttexturecustom3_displayname";
				expression="_this setObjectTextureGlobal [3, _value]";
			};
			class SwitchTexture5: SwitchTexture1
			{
				property="SwitchTexture5";
				displayName="$STR_3den_object_attribute_objecttexturecustom4_displayname";
				expression="_this setObjectTextureGlobal [4, _value]";
			};
			class SwitchTexture6: SwitchTexture1
			{
				property="SwitchTexture6";
				displayName="$STR_3den_object_attribute_objecttexturecustom5_displayname";
				expression="_this setObjectTextureGlobal [5, _value]";
			};
		};
	};
	class Land_Shoot_House_Wall_Long_Crouch_F: Land_Shoot_House_Wall_Long_F
	{
		class Attributes
		{
			class SwitchTexture1
			{
				property="SwitchTexture1";
				displayName="$STR_3den_object_attribute_objecttexturecustom0_displayname";
				control="Combo";
				expression="_this setObjectTextureGlobal [0, _value]";
				defaultValue="'#(argb,8,8,3)color(0,0,0,0,ca)'";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="";
						value="#(argb,8,8,3)color(0,0,0,0,ca)";
						picture="#(argb,8,8,3)color(0,0,0,0,ca)";
					};
					class 2
					{
						name="Aliens#Fakenews";
						value="\A3\missions_f_beta\data\img\decals\decal_aliens_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_aliens_ca.paa";
					};
					class 3
					{
						name="$STR_A3_CFGVEHICLES_LAND_TARGET_DUELING_01_F0";
						value="\A3\missions_f_beta\data\img\decals\decal_binary_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_binary_ca.paa";
					};
					class 4
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F4";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA1_ca.paa";
					};
					class 5
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F5";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA2_ca.paa";
					};
					class 6
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F6";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA3_ca.paa";
					};
					class 7
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F7";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA4_ca.paa";
					};
					class 8
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F8";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA5_ca.paa";
					};
					class 9
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F9";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA6_ca.paa";
					};
					class 10
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F10";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB1_ca.paa";
					};
					class 11
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F11";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB2_ca.paa";
					};
					class 12
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F12";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB3_ca.paa";
					};
					class 13
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F13";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB4_ca.paa";
					};
					class 14
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F14";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB5_ca.paa";
					};
					class 15
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F15";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB6_ca.paa";
					};
					class 16
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F16";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC1_ca.paa";
					};
					class 17
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F17";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC2_ca.paa";
					};
					class 18
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F18";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC3_ca.paa";
					};
					class 19
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F19";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC4_ca.paa";
					};
					class 20
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F20";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC5_ca.paa";
					};
					class 21
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F21";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC6_ca.paa";
					};
					class 23
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F22";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD1_ca.paa";
					};
					class 24
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F23";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD2_ca.paa";
					};
					class 25
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F24";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD3_ca.paa";
					};
					class 26
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F25";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD4_ca.paa";
					};
					class 27
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F26";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD5_ca.paa";
					};
					class 28
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F27";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD6_ca.paa";
					};
					class 144
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F144";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH1_ca.paa";
					};
					class 29
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F29";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH2_ca.paa";
					};
					class 30
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F30";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH3_ca.paa";
					};
					class 31
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F31";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH4_ca.paa";
					};
					class 32
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F32";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH5_ca.paa";
					};
					class 33
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F33";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH6_ca.paa";
					};
					class 34
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F34";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl1_ca.paa";
					};
					class 35
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F35";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl2_ca.paa";
					};
					class 36
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F36";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl3_ca.paa";
					};
					class 37
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F37";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl4_ca.paa";
					};
					class 38
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F38";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl5_ca.paa";
					};
					class 39
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F39";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl6_ca.paa";
					};
					class 40
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F40";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch1_ca.paa";
					};
					class 41
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F41";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch2_ca.paa";
					};
					class 42
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F42";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch3_ca.paa";
					};
					class 43
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F43";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch4_ca.paa";
					};
					class 44
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F44";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch5_ca.paa";
					};
					class 45
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F45";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch6_ca.paa";
					};
					class 46
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F46";
						value="\A3\missions_f_beta\data\img\decals\decal_crowe_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crowe_ca.paa";
					};
					class 47
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F47";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel1_ca.paa";
					};
					class 48
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F48";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel2_ca.paa";
					};
					class 49
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F49";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel3_ca.paa";
					};
					class 50
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F50";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel4_ca.paa";
					};
					class 51
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F51";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel5_ca.paa";
					};
					class 52
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F52";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel6_ca.paa";
					};
					class 53
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F53";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left1_ca.paa";
					};
					class 54
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F54";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left2_ca.paa";
					};
					class 55
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F55";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left3_ca.paa";
					};
					class 56
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F56";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left4_ca.paa";
					};
					class 57
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F57";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left5_ca.paa";
					};
					class 58
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F58";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left6_ca.paa";
					};
					class 59
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F59";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right1_ca.paa";
					};
					class 60
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F60";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right2_ca.paa";
					};
					class 61
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F61";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right3_ca.paa";
					};
					class 62
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F62";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right4_ca.paa";
					};
					class 63
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F63";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right5_ca.paa";
					};
					class 64
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F64";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right6_ca.paa";
					};
					class 65
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F65";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left1_ca.paa";
					};
					class 66
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F66";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left2_ca.paa";
					};
					class 145
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F66";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left3_ca.paa";
					};
					class 67
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F67";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left4_ca.paa";
					};
					class 68
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F68";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left5_ca.paa";
					};
					class 69
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F69";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left6_ca.paa";
					};
					class 70
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F70";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right1_ca.paa";
					};
					class 71
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F71";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right2_ca.paa";
					};
					class 72
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F72";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right3_ca.paa";
					};
					class 73
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F73";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right4_ca.paa";
					};
					class 74
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F74";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right5_ca.paa";
					};
					class 75
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F75";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right6_ca.paa";
					};
					class 76
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F76";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target1_ca.paa";
					};
					class 77
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F77";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target2_ca.paa";
					};
					class 78
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F78";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target3_ca.paa";
					};
					class 79
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F79";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target4_ca.paa";
					};
					class 80
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F80";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target5_ca.paa";
					};
					class 81
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F81";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target6_ca.paa";
					};
					class 82
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F82";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate1_ca.paa";
					};
					class 83
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F83";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate2_ca.paa";
					};
					class 146
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F83";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate3_ca.paa";
					};
					class 84
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F84";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate4_ca.paa";
					};
					class 85
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F85";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate5_ca.paa";
					};
					class 86
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F86";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate6_ca.paa";
					};
					class 87
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F87";
						value="\A3\missions_f_beta\data\img\decals\decal_phalanx_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_phalanx_ca.paa";
					};
					class 88
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F88";
						value="\A3\missions_f_beta\data\img\decals\decal_prone1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone1_ca.paa";
					};
					class 89
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F89";
						value="\A3\missions_f_beta\data\img\decals\decal_prone2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone2_ca.paa";
					};
					class 90
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F90";
						value="\A3\missions_f_beta\data\img\decals\decal_prone3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone3_ca.paa";
					};
					class 91
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F91";
						value="\A3\missions_f_beta\data\img\decals\decal_prone4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone4_ca.paa";
					};
					class 92
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F92";
						value="\A3\missions_f_beta\data\img\decals\decal_prone5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone5_ca.paa";
					};
					class 93
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F93";
						value="\A3\missions_f_beta\data\img\decals\decal_prone6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone6_ca.paa";
					};
					class 94
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F94";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle1_ca.paa";
					};
					class 95
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F95";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle2_ca.paa";
					};
					class 96
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F96";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle3_ca.paa";
					};
					class 97
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F97";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle4_ca.paa";
					};
					class 98
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F98";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle5_ca.paa";
					};
					class 99
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F99";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle6_ca.paa";
					};
					class 100
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F100";
						value="\A3\missions_f_beta\data\img\decals\decal_santiago_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_santiago_ca.paa";
					};
					class 101
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F101";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm1_ca.paa";
					};
					class 102
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F102";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm2_ca.paa";
					};
					class 103
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F103";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm3_ca.paa";
					};
					class 104
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F104";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm4_ca.paa";
					};
					class 105
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F105";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm5_ca.paa";
					};
					class 106
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F106";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm6_ca.paa";
					};
					class 107
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F107";
						value="\A3\missions_f_beta\data\img\decals\decal_stand1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand1_ca.paa";
					};
					class 108
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F108";
						value="\A3\missions_f_beta\data\img\decals\decal_stand2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand2_ca.paa";
					};
					class 109
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F109";
						value="\A3\missions_f_beta\data\img\decals\decal_stand3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand3_ca.paa";
					};
					class 110
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F110";
						value="\A3\missions_f_beta\data\img\decals\decal_stand4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand4_ca.paa";
					};
					class 111
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F111";
						value="\A3\missions_f_beta\data\img\decals\decal_stand5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand5_ca.paa";
					};
					class 112
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F112";
						value="\A3\missions_f_beta\data\img\decals\decal_stand6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand6_ca.paa";
					};
					class 113
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F113";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot1_ca.paa";
					};
					class 114
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F114";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot2_ca.paa";
					};
					class 115
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F115";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot3_ca.paa";
					};
					class 116
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F116";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot4_ca.paa";
					};
					class 117
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F117";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot5_ca.paa";
					};
					class 118
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F118";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot6_ca.paa";
					};
					class 119
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F119";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right1_ca.paa";
					};
					class 120
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F120";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right2_ca.paa";
					};
					class 121
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F121";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right3_ca.paa";
					};
					class 122
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F122";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right4_ca.paa";
					};
					class 123
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F123";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right5_ca.paa";
					};
					class 124
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F124";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right6_ca.paa";
					};
					class 125
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F125";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target1_ca.paa";
					};
					class 126
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F126";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target2_ca.paa";
					};
					class 127
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F127";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target3_ca.paa";
					};
					class 128
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F128";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target4_ca.paa";
					};
					class 129
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F129";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target5_ca.paa";
					};
					class 130
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F130";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target6_ca.paa";
					};
					class 131
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F131";
						value="\A3\missions_f_beta\data\img\decals\decal_vault1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault1_ca.paa";
					};
					class 132
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F132";
						value="\A3\missions_f_beta\data\img\decals\decal_vault2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault2_ca.paa";
					};
					class 133
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F133";
						value="\A3\missions_f_beta\data\img\decals\decal_vault3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault3_ca.paa";
					};
					class 134
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F134";
						value="\A3\missions_f_beta\data\img\decals\decal_vault4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault4_ca.paa";
					};
					class 135
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F135";
						value="\A3\missions_f_beta\data\img\decals\decal_vault5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault5_ca.paa";
					};
					class 136
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F136";
						value="\A3\missions_f_beta\data\img\decals\decal_vault6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault6_ca.paa";
					};
					class 138
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F138";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out1_ca.paa";
					};
					class 139
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F139";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out2_ca.paa";
					};
					class 140
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F140";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out3_ca.paa";
					};
					class 141
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F141";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out4_ca.paa";
					};
					class 142
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F142";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out5_ca.paa";
					};
					class 143
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F143";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out6_ca.paa";
					};
				};
			};
			class SwitchTexture2: SwitchTexture1
			{
				property="SwitchTexture2";
				displayName="$STR_3den_object_attribute_objecttexturecustom1_displayname";
				expression="_this setObjectTextureGlobal [1, _value]";
			};
			class SwitchTexture3: SwitchTexture1
			{
				property="SwitchTexture3";
				displayName="$STR_3den_object_attribute_objecttexturecustom2_displayname";
				expression="_this setObjectTextureGlobal [2, _value]";
			};
			class SwitchTexture4: SwitchTexture1
			{
				property="SwitchTexture4";
				displayName="$STR_3den_object_attribute_objecttexturecustom3_displayname";
				expression="_this setObjectTextureGlobal [3, _value]";
			};
		};
	};
	class Land_Shoot_House_Wall_Long_Prone_F: Land_Shoot_House_Wall_Long_F
	{
		class Attributes
		{
			class SwitchTexture1
			{
				property="SwitchTexture1";
				displayName="$STR_3den_object_attribute_objecttexturecustom0_displayname";
				control="Combo";
				expression="_this setObjectTextureGlobal [0, _value]";
				defaultValue="'#(argb,8,8,3)color(0,0,0,0,ca)'";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="";
						value="#(argb,8,8,3)color(0,0,0,0,ca)";
						picture="#(argb,8,8,3)color(0,0,0,0,ca)";
					};
					class 2
					{
						name="Aliens#Fakenews";
						value="\A3\missions_f_beta\data\img\decals\decal_aliens_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_aliens_ca.paa";
					};
					class 3
					{
						name="$STR_A3_CFGVEHICLES_LAND_TARGET_DUELING_01_F0";
						value="\A3\missions_f_beta\data\img\decals\decal_binary_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_binary_ca.paa";
					};
					class 4
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F4";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA1_ca.paa";
					};
					class 5
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F5";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA2_ca.paa";
					};
					class 6
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F6";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA3_ca.paa";
					};
					class 7
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F7";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA4_ca.paa";
					};
					class 8
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F8";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA5_ca.paa";
					};
					class 9
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F9";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA6_ca.paa";
					};
					class 10
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F10";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB1_ca.paa";
					};
					class 11
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F11";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB2_ca.paa";
					};
					class 12
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F12";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB3_ca.paa";
					};
					class 13
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F13";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB4_ca.paa";
					};
					class 14
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F14";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB5_ca.paa";
					};
					class 15
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F15";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB6_ca.paa";
					};
					class 16
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F16";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC1_ca.paa";
					};
					class 17
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F17";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC2_ca.paa";
					};
					class 18
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F18";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC3_ca.paa";
					};
					class 19
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F19";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC4_ca.paa";
					};
					class 20
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F20";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC5_ca.paa";
					};
					class 21
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F21";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC6_ca.paa";
					};
					class 23
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F22";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD1_ca.paa";
					};
					class 24
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F23";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD2_ca.paa";
					};
					class 25
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F24";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD3_ca.paa";
					};
					class 26
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F25";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD4_ca.paa";
					};
					class 27
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F26";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD5_ca.paa";
					};
					class 28
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F27";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD6_ca.paa";
					};
					class 144
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F144";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH1_ca.paa";
					};
					class 29
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F29";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH2_ca.paa";
					};
					class 30
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F30";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH3_ca.paa";
					};
					class 31
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F31";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH4_ca.paa";
					};
					class 32
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F32";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH5_ca.paa";
					};
					class 33
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F33";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH6_ca.paa";
					};
					class 34
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F34";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl1_ca.paa";
					};
					class 35
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F35";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl2_ca.paa";
					};
					class 36
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F36";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl3_ca.paa";
					};
					class 37
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F37";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl4_ca.paa";
					};
					class 38
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F38";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl5_ca.paa";
					};
					class 39
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F39";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl6_ca.paa";
					};
					class 40
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F40";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch1_ca.paa";
					};
					class 41
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F41";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch2_ca.paa";
					};
					class 42
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F42";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch3_ca.paa";
					};
					class 43
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F43";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch4_ca.paa";
					};
					class 44
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F44";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch5_ca.paa";
					};
					class 45
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F45";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch6_ca.paa";
					};
					class 46
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F46";
						value="\A3\missions_f_beta\data\img\decals\decal_crowe_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crowe_ca.paa";
					};
					class 47
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F47";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel1_ca.paa";
					};
					class 48
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F48";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel2_ca.paa";
					};
					class 49
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F49";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel3_ca.paa";
					};
					class 50
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F50";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel4_ca.paa";
					};
					class 51
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F51";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel5_ca.paa";
					};
					class 52
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F52";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel6_ca.paa";
					};
					class 53
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F53";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left1_ca.paa";
					};
					class 54
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F54";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left2_ca.paa";
					};
					class 55
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F55";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left3_ca.paa";
					};
					class 56
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F56";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left4_ca.paa";
					};
					class 57
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F57";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left5_ca.paa";
					};
					class 58
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F58";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left6_ca.paa";
					};
					class 59
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F59";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right1_ca.paa";
					};
					class 60
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F60";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right2_ca.paa";
					};
					class 61
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F61";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right3_ca.paa";
					};
					class 62
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F62";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right4_ca.paa";
					};
					class 63
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F63";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right5_ca.paa";
					};
					class 64
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F64";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right6_ca.paa";
					};
					class 65
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F65";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left1_ca.paa";
					};
					class 66
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F66";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left2_ca.paa";
					};
					class 145
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F66";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left3_ca.paa";
					};
					class 67
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F67";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left4_ca.paa";
					};
					class 68
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F68";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left5_ca.paa";
					};
					class 69
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F69";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left6_ca.paa";
					};
					class 70
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F70";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right1_ca.paa";
					};
					class 71
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F71";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right2_ca.paa";
					};
					class 72
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F72";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right3_ca.paa";
					};
					class 73
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F73";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right4_ca.paa";
					};
					class 74
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F74";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right5_ca.paa";
					};
					class 75
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F75";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right6_ca.paa";
					};
					class 76
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F76";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target1_ca.paa";
					};
					class 77
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F77";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target2_ca.paa";
					};
					class 78
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F78";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target3_ca.paa";
					};
					class 79
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F79";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target4_ca.paa";
					};
					class 80
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F80";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target5_ca.paa";
					};
					class 81
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F81";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target6_ca.paa";
					};
					class 82
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F82";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate1_ca.paa";
					};
					class 83
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F83";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate2_ca.paa";
					};
					class 146
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F83";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate3_ca.paa";
					};
					class 84
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F84";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate4_ca.paa";
					};
					class 85
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F85";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate5_ca.paa";
					};
					class 86
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F86";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate6_ca.paa";
					};
					class 87
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F87";
						value="\A3\missions_f_beta\data\img\decals\decal_phalanx_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_phalanx_ca.paa";
					};
					class 88
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F88";
						value="\A3\missions_f_beta\data\img\decals\decal_prone1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone1_ca.paa";
					};
					class 89
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F89";
						value="\A3\missions_f_beta\data\img\decals\decal_prone2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone2_ca.paa";
					};
					class 90
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F90";
						value="\A3\missions_f_beta\data\img\decals\decal_prone3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone3_ca.paa";
					};
					class 91
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F91";
						value="\A3\missions_f_beta\data\img\decals\decal_prone4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone4_ca.paa";
					};
					class 92
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F92";
						value="\A3\missions_f_beta\data\img\decals\decal_prone5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone5_ca.paa";
					};
					class 93
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F93";
						value="\A3\missions_f_beta\data\img\decals\decal_prone6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone6_ca.paa";
					};
					class 94
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F94";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle1_ca.paa";
					};
					class 95
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F95";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle2_ca.paa";
					};
					class 96
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F96";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle3_ca.paa";
					};
					class 97
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F97";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle4_ca.paa";
					};
					class 98
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F98";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle5_ca.paa";
					};
					class 99
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F99";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle6_ca.paa";
					};
					class 100
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F100";
						value="\A3\missions_f_beta\data\img\decals\decal_santiago_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_santiago_ca.paa";
					};
					class 101
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F101";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm1_ca.paa";
					};
					class 102
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F102";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm2_ca.paa";
					};
					class 103
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F103";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm3_ca.paa";
					};
					class 104
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F104";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm4_ca.paa";
					};
					class 105
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F105";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm5_ca.paa";
					};
					class 106
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F106";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm6_ca.paa";
					};
					class 107
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F107";
						value="\A3\missions_f_beta\data\img\decals\decal_stand1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand1_ca.paa";
					};
					class 108
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F108";
						value="\A3\missions_f_beta\data\img\decals\decal_stand2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand2_ca.paa";
					};
					class 109
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F109";
						value="\A3\missions_f_beta\data\img\decals\decal_stand3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand3_ca.paa";
					};
					class 110
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F110";
						value="\A3\missions_f_beta\data\img\decals\decal_stand4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand4_ca.paa";
					};
					class 111
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F111";
						value="\A3\missions_f_beta\data\img\decals\decal_stand5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand5_ca.paa";
					};
					class 112
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F112";
						value="\A3\missions_f_beta\data\img\decals\decal_stand6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand6_ca.paa";
					};
					class 113
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F113";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot1_ca.paa";
					};
					class 114
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F114";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot2_ca.paa";
					};
					class 115
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F115";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot3_ca.paa";
					};
					class 116
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F116";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot4_ca.paa";
					};
					class 117
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F117";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot5_ca.paa";
					};
					class 118
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F118";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot6_ca.paa";
					};
					class 119
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F119";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right1_ca.paa";
					};
					class 120
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F120";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right2_ca.paa";
					};
					class 121
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F121";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right3_ca.paa";
					};
					class 122
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F122";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right4_ca.paa";
					};
					class 123
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F123";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right5_ca.paa";
					};
					class 124
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F124";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right6_ca.paa";
					};
					class 125
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F125";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target1_ca.paa";
					};
					class 126
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F126";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target2_ca.paa";
					};
					class 127
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F127";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target3_ca.paa";
					};
					class 128
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F128";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target4_ca.paa";
					};
					class 129
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F129";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target5_ca.paa";
					};
					class 130
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F130";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target6_ca.paa";
					};
					class 131
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F131";
						value="\A3\missions_f_beta\data\img\decals\decal_vault1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault1_ca.paa";
					};
					class 132
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F132";
						value="\A3\missions_f_beta\data\img\decals\decal_vault2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault2_ca.paa";
					};
					class 133
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F133";
						value="\A3\missions_f_beta\data\img\decals\decal_vault3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault3_ca.paa";
					};
					class 134
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F134";
						value="\A3\missions_f_beta\data\img\decals\decal_vault4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault4_ca.paa";
					};
					class 135
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F135";
						value="\A3\missions_f_beta\data\img\decals\decal_vault5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault5_ca.paa";
					};
					class 136
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F136";
						value="\A3\missions_f_beta\data\img\decals\decal_vault6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault6_ca.paa";
					};
					class 138
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F138";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out1_ca.paa";
					};
					class 139
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F139";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out2_ca.paa";
					};
					class 140
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F140";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out3_ca.paa";
					};
					class 141
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F141";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out4_ca.paa";
					};
					class 142
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F142";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out5_ca.paa";
					};
					class 143
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F143";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out6_ca.paa";
					};
				};
			};
			class SwitchTexture2: SwitchTexture1
			{
				property="SwitchTexture2";
				displayName="$STR_3den_object_attribute_objecttexturecustom1_displayname";
				expression="_this setObjectTextureGlobal [1, _value]";
			};
		};
	};
	class Land_Shoot_House_Panels_F: Land_Shoot_House_Wall_F
	{
		class Attributes
		{
			class SwitchTexture1
			{
				property="SwitchTexture1";
				displayName="$STR_3den_object_attribute_objecttexturecustom0_displayname";
				control="Combo";
				expression="_this setObjectTextureGlobal [0, _value]";
				defaultValue="'#(argb,8,8,3)color(0,0,0,0,ca)'";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="";
						value="#(argb,8,8,3)color(0,0,0,0,ca)";
						picture="#(argb,8,8,3)color(0,0,0,0,ca)";
					};
					class 2
					{
						name="Aliens#Fakenews";
						value="\A3\missions_f_beta\data\img\decals\decal_aliens_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_aliens_ca.paa";
					};
					class 3
					{
						name="$STR_A3_CFGVEHICLES_LAND_TARGET_DUELING_01_F0";
						value="\A3\missions_f_beta\data\img\decals\decal_binary_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_binary_ca.paa";
					};
					class 4
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F4";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA1_ca.paa";
					};
					class 5
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F5";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA2_ca.paa";
					};
					class 6
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F6";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA3_ca.paa";
					};
					class 7
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F7";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA4_ca.paa";
					};
					class 8
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F8";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA5_ca.paa";
					};
					class 9
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F9";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA6_ca.paa";
					};
					class 10
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F10";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB1_ca.paa";
					};
					class 11
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F11";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB2_ca.paa";
					};
					class 12
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F12";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB3_ca.paa";
					};
					class 13
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F13";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB4_ca.paa";
					};
					class 14
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F14";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB5_ca.paa";
					};
					class 15
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F15";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB6_ca.paa";
					};
					class 16
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F16";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC1_ca.paa";
					};
					class 17
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F17";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC2_ca.paa";
					};
					class 18
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F18";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC3_ca.paa";
					};
					class 19
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F19";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC4_ca.paa";
					};
					class 20
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F20";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC5_ca.paa";
					};
					class 21
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F21";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC6_ca.paa";
					};
					class 23
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F22";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD1_ca.paa";
					};
					class 24
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F23";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD2_ca.paa";
					};
					class 25
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F24";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD3_ca.paa";
					};
					class 26
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F25";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD4_ca.paa";
					};
					class 27
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F26";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD5_ca.paa";
					};
					class 28
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F27";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD6_ca.paa";
					};
					class 144
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F144";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH1_ca.paa";
					};
					class 29
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F29";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH2_ca.paa";
					};
					class 30
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F30";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH3_ca.paa";
					};
					class 31
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F31";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH4_ca.paa";
					};
					class 32
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F32";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH5_ca.paa";
					};
					class 33
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F33";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH6_ca.paa";
					};
					class 34
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F34";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl1_ca.paa";
					};
					class 35
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F35";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl2_ca.paa";
					};
					class 36
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F36";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl3_ca.paa";
					};
					class 37
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F37";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl4_ca.paa";
					};
					class 38
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F38";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl5_ca.paa";
					};
					class 39
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F39";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl6_ca.paa";
					};
					class 40
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F40";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch1_ca.paa";
					};
					class 41
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F41";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch2_ca.paa";
					};
					class 42
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F42";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch3_ca.paa";
					};
					class 43
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F43";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch4_ca.paa";
					};
					class 44
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F44";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch5_ca.paa";
					};
					class 45
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F45";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch6_ca.paa";
					};
					class 46
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F46";
						value="\A3\missions_f_beta\data\img\decals\decal_crowe_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crowe_ca.paa";
					};
					class 47
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F47";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel1_ca.paa";
					};
					class 48
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F48";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel2_ca.paa";
					};
					class 49
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F49";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel3_ca.paa";
					};
					class 50
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F50";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel4_ca.paa";
					};
					class 51
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F51";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel5_ca.paa";
					};
					class 52
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F52";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel6_ca.paa";
					};
					class 53
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F53";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left1_ca.paa";
					};
					class 54
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F54";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left2_ca.paa";
					};
					class 55
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F55";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left3_ca.paa";
					};
					class 56
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F56";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left4_ca.paa";
					};
					class 57
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F57";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left5_ca.paa";
					};
					class 58
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F58";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left6_ca.paa";
					};
					class 59
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F59";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right1_ca.paa";
					};
					class 60
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F60";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right2_ca.paa";
					};
					class 61
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F61";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right3_ca.paa";
					};
					class 62
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F62";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right4_ca.paa";
					};
					class 63
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F63";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right5_ca.paa";
					};
					class 64
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F64";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right6_ca.paa";
					};
					class 65
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F65";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left1_ca.paa";
					};
					class 66
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F66";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left2_ca.paa";
					};
					class 145
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F66";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left3_ca.paa";
					};
					class 67
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F67";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left4_ca.paa";
					};
					class 68
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F68";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left5_ca.paa";
					};
					class 69
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F69";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left6_ca.paa";
					};
					class 70
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F70";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right1_ca.paa";
					};
					class 71
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F71";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right2_ca.paa";
					};
					class 72
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F72";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right3_ca.paa";
					};
					class 73
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F73";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right4_ca.paa";
					};
					class 74
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F74";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right5_ca.paa";
					};
					class 75
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F75";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right6_ca.paa";
					};
					class 76
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F76";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target1_ca.paa";
					};
					class 77
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F77";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target2_ca.paa";
					};
					class 78
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F78";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target3_ca.paa";
					};
					class 79
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F79";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target4_ca.paa";
					};
					class 80
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F80";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target5_ca.paa";
					};
					class 81
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F81";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target6_ca.paa";
					};
					class 82
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F82";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate1_ca.paa";
					};
					class 83
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F83";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate2_ca.paa";
					};
					class 146
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F83";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate3_ca.paa";
					};
					class 84
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F84";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate4_ca.paa";
					};
					class 85
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F85";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate5_ca.paa";
					};
					class 86
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F86";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate6_ca.paa";
					};
					class 87
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F87";
						value="\A3\missions_f_beta\data\img\decals\decal_phalanx_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_phalanx_ca.paa";
					};
					class 88
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F88";
						value="\A3\missions_f_beta\data\img\decals\decal_prone1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone1_ca.paa";
					};
					class 89
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F89";
						value="\A3\missions_f_beta\data\img\decals\decal_prone2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone2_ca.paa";
					};
					class 90
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F90";
						value="\A3\missions_f_beta\data\img\decals\decal_prone3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone3_ca.paa";
					};
					class 91
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F91";
						value="\A3\missions_f_beta\data\img\decals\decal_prone4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone4_ca.paa";
					};
					class 92
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F92";
						value="\A3\missions_f_beta\data\img\decals\decal_prone5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone5_ca.paa";
					};
					class 93
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F93";
						value="\A3\missions_f_beta\data\img\decals\decal_prone6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone6_ca.paa";
					};
					class 94
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F94";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle1_ca.paa";
					};
					class 95
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F95";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle2_ca.paa";
					};
					class 96
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F96";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle3_ca.paa";
					};
					class 97
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F97";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle4_ca.paa";
					};
					class 98
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F98";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle5_ca.paa";
					};
					class 99
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F99";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle6_ca.paa";
					};
					class 100
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F100";
						value="\A3\missions_f_beta\data\img\decals\decal_santiago_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_santiago_ca.paa";
					};
					class 101
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F101";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm1_ca.paa";
					};
					class 102
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F102";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm2_ca.paa";
					};
					class 103
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F103";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm3_ca.paa";
					};
					class 104
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F104";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm4_ca.paa";
					};
					class 105
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F105";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm5_ca.paa";
					};
					class 106
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F106";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm6_ca.paa";
					};
					class 107
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F107";
						value="\A3\missions_f_beta\data\img\decals\decal_stand1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand1_ca.paa";
					};
					class 108
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F108";
						value="\A3\missions_f_beta\data\img\decals\decal_stand2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand2_ca.paa";
					};
					class 109
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F109";
						value="\A3\missions_f_beta\data\img\decals\decal_stand3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand3_ca.paa";
					};
					class 110
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F110";
						value="\A3\missions_f_beta\data\img\decals\decal_stand4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand4_ca.paa";
					};
					class 111
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F111";
						value="\A3\missions_f_beta\data\img\decals\decal_stand5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand5_ca.paa";
					};
					class 112
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F112";
						value="\A3\missions_f_beta\data\img\decals\decal_stand6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand6_ca.paa";
					};
					class 113
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F113";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot1_ca.paa";
					};
					class 114
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F114";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot2_ca.paa";
					};
					class 115
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F115";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot3_ca.paa";
					};
					class 116
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F116";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot4_ca.paa";
					};
					class 117
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F117";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot5_ca.paa";
					};
					class 118
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F118";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot6_ca.paa";
					};
					class 119
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F119";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right1_ca.paa";
					};
					class 120
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F120";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right2_ca.paa";
					};
					class 121
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F121";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right3_ca.paa";
					};
					class 122
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F122";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right4_ca.paa";
					};
					class 123
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F123";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right5_ca.paa";
					};
					class 124
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F124";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right6_ca.paa";
					};
					class 125
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F125";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target1_ca.paa";
					};
					class 126
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F126";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target2_ca.paa";
					};
					class 127
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F127";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target3_ca.paa";
					};
					class 128
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F128";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target4_ca.paa";
					};
					class 129
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F129";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target5_ca.paa";
					};
					class 130
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F130";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target6_ca.paa";
					};
					class 131
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F131";
						value="\A3\missions_f_beta\data\img\decals\decal_vault1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault1_ca.paa";
					};
					class 132
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F132";
						value="\A3\missions_f_beta\data\img\decals\decal_vault2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault2_ca.paa";
					};
					class 133
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F133";
						value="\A3\missions_f_beta\data\img\decals\decal_vault3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault3_ca.paa";
					};
					class 134
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F134";
						value="\A3\missions_f_beta\data\img\decals\decal_vault4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault4_ca.paa";
					};
					class 135
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F135";
						value="\A3\missions_f_beta\data\img\decals\decal_vault5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault5_ca.paa";
					};
					class 136
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F136";
						value="\A3\missions_f_beta\data\img\decals\decal_vault6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault6_ca.paa";
					};
					class 138
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F138";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out1_ca.paa";
					};
					class 139
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F139";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out2_ca.paa";
					};
					class 140
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F140";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out3_ca.paa";
					};
					class 141
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F141";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out4_ca.paa";
					};
					class 142
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F142";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out5_ca.paa";
					};
					class 143
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F143";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out6_ca.paa";
					};
				};
			};
			class SwitchTexture2: SwitchTexture1
			{
				property="SwitchTexture2";
				displayName="$STR_3den_object_attribute_objecttexturecustom1_displayname";
				expression="_this setObjectTextureGlobal [1, _value]";
			};
			class SwitchTexture3: SwitchTexture1
			{
				property="SwitchTexture3";
				displayName="$STR_3den_object_attribute_objecttexturecustom2_displayname";
				expression="_this setObjectTextureGlobal [2, _value]";
			};
			class SwitchTexture4: SwitchTexture1
			{
				property="SwitchTexture4";
				displayName="$STR_3den_object_attribute_objecttexturecustom3_displayname";
				expression="_this setObjectTextureGlobal [3, _value]";
			};
		};
	};
	class Land_Shoot_House_Panels_Crouch_F: Land_Shoot_House_Panels_F
	{
		class Attributes: Attributes
		{
			class SwitchTexture3: SwitchTexture1
			{
				property="SwitchTexture3";
				displayName="$STR_3den_object_attribute_objecttexturecustom2_displayname";
				expression="_this setObjectTextureGlobal [2, _value]";
			};
			class SwitchTexture4: SwitchTexture1
			{
				property="SwitchTexture4";
				displayName="$STR_3den_object_attribute_objecttexturecustom3_displayname";
				expression="_this setObjectTextureGlobal [3, _value]";
			};
			class SwitchTexture5: SwitchTexture1
			{
				property="SwitchTexture5";
				displayName="$STR_3den_object_attribute_objecttexturecustom4_displayname";
				expression="_this setObjectTextureGlobal [4, _value]";
			};
		};
	};
	class Land_Shoot_House_Panels_Prone_F: Land_Shoot_House_Panels_F
	{
		class Attributes: Attributes
		{
			class SwitchTexture2: SwitchTexture1
			{
				property="SwitchTexture2";
				displayName="$STR_3den_object_attribute_objecttexturecustom1_displayname";
				expression="_this setObjectTextureGlobal [1, _value]";
			};
			class SwitchTexture3: SwitchTexture1
			{
				property="SwitchTexture3";
				displayName="$STR_3den_object_attribute_objecttexturecustom2_displayname";
				expression="_this setObjectTextureGlobal [2, _value]";
			};
			class SwitchTexture4: SwitchTexture1
			{
				property="SwitchTexture4";
				displayName="$STR_3den_object_attribute_objecttexturecustom3_displayname";
				expression="_this setObjectTextureGlobal [3, _value]";
			};
			class SwitchTexture5: SwitchTexture1
			{
				property="SwitchTexture5";
				displayName="$STR_3den_object_attribute_objecttexturecustom4_displayname";
				expression="_this setObjectTextureGlobal [4, _value]";
			};
		};
	};
	class Land_Shoot_House_Panels_Vault_F: Land_Shoot_House_Panels_F
	{
		class Attributes
		{
			class SwitchTexture1
			{
				property="SwitchTexture1";
				displayName="$STR_3den_object_attribute_objecttexturecustom0_displayname";
				control="Combo";
				expression="_this setObjectTextureGlobal [0, _value]";
				defaultValue="'#(argb,8,8,3)color(0,0,0,0,ca)'";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="";
						value="#(argb,8,8,3)color(0,0,0,0,ca)";
						picture="#(argb,8,8,3)color(0,0,0,0,ca)";
					};
					class 2
					{
						name="Aliens#Fakenews";
						value="\A3\missions_f_beta\data\img\decals\decal_aliens_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_aliens_ca.paa";
					};
					class 3
					{
						name="$STR_A3_CFGVEHICLES_LAND_TARGET_DUELING_01_F0";
						value="\A3\missions_f_beta\data\img\decals\decal_binary_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_binary_ca.paa";
					};
					class 4
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F4";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA1_ca.paa";
					};
					class 5
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F5";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA2_ca.paa";
					};
					class 6
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F6";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA3_ca.paa";
					};
					class 7
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F7";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA4_ca.paa";
					};
					class 8
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F8";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA5_ca.paa";
					};
					class 9
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F9";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA6_ca.paa";
					};
					class 10
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F10";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB1_ca.paa";
					};
					class 11
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F11";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB2_ca.paa";
					};
					class 12
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F12";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB3_ca.paa";
					};
					class 13
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F13";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB4_ca.paa";
					};
					class 14
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F14";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB5_ca.paa";
					};
					class 15
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F15";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB6_ca.paa";
					};
					class 16
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F16";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC1_ca.paa";
					};
					class 17
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F17";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC2_ca.paa";
					};
					class 18
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F18";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC3_ca.paa";
					};
					class 19
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F19";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC4_ca.paa";
					};
					class 20
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F20";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC5_ca.paa";
					};
					class 21
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F21";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC6_ca.paa";
					};
					class 23
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F22";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD1_ca.paa";
					};
					class 24
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F23";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD2_ca.paa";
					};
					class 25
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F24";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD3_ca.paa";
					};
					class 26
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F25";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD4_ca.paa";
					};
					class 27
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F26";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD5_ca.paa";
					};
					class 28
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F27";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD6_ca.paa";
					};
					class 144
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F144";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH1_ca.paa";
					};
					class 29
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F29";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH2_ca.paa";
					};
					class 30
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F30";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH3_ca.paa";
					};
					class 31
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F31";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH4_ca.paa";
					};
					class 32
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F32";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH5_ca.paa";
					};
					class 33
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F33";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH6_ca.paa";
					};
					class 34
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F34";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl1_ca.paa";
					};
					class 35
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F35";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl2_ca.paa";
					};
					class 36
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F36";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl3_ca.paa";
					};
					class 37
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F37";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl4_ca.paa";
					};
					class 38
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F38";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl5_ca.paa";
					};
					class 39
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F39";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl6_ca.paa";
					};
					class 40
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F40";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch1_ca.paa";
					};
					class 41
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F41";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch2_ca.paa";
					};
					class 42
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F42";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch3_ca.paa";
					};
					class 43
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F43";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch4_ca.paa";
					};
					class 44
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F44";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch5_ca.paa";
					};
					class 45
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F45";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch6_ca.paa";
					};
					class 46
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F46";
						value="\A3\missions_f_beta\data\img\decals\decal_crowe_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crowe_ca.paa";
					};
					class 47
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F47";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel1_ca.paa";
					};
					class 48
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F48";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel2_ca.paa";
					};
					class 49
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F49";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel3_ca.paa";
					};
					class 50
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F50";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel4_ca.paa";
					};
					class 51
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F51";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel5_ca.paa";
					};
					class 52
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F52";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel6_ca.paa";
					};
					class 53
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F53";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left1_ca.paa";
					};
					class 54
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F54";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left2_ca.paa";
					};
					class 55
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F55";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left3_ca.paa";
					};
					class 56
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F56";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left4_ca.paa";
					};
					class 57
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F57";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left5_ca.paa";
					};
					class 58
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F58";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left6_ca.paa";
					};
					class 59
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F59";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right1_ca.paa";
					};
					class 60
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F60";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right2_ca.paa";
					};
					class 61
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F61";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right3_ca.paa";
					};
					class 62
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F62";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right4_ca.paa";
					};
					class 63
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F63";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right5_ca.paa";
					};
					class 64
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F64";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right6_ca.paa";
					};
					class 65
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F65";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left1_ca.paa";
					};
					class 66
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F66";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left2_ca.paa";
					};
					class 145
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F66";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left3_ca.paa";
					};
					class 67
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F67";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left4_ca.paa";
					};
					class 68
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F68";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left5_ca.paa";
					};
					class 69
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F69";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left6_ca.paa";
					};
					class 70
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F70";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right1_ca.paa";
					};
					class 71
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F71";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right2_ca.paa";
					};
					class 72
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F72";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right3_ca.paa";
					};
					class 73
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F73";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right4_ca.paa";
					};
					class 74
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F74";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right5_ca.paa";
					};
					class 75
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F75";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right6_ca.paa";
					};
					class 76
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F76";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target1_ca.paa";
					};
					class 77
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F77";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target2_ca.paa";
					};
					class 78
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F78";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target3_ca.paa";
					};
					class 79
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F79";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target4_ca.paa";
					};
					class 80
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F80";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target5_ca.paa";
					};
					class 81
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F81";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target6_ca.paa";
					};
					class 82
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F82";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate1_ca.paa";
					};
					class 83
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F83";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate2_ca.paa";
					};
					class 146
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F83";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate3_ca.paa";
					};
					class 84
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F84";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate4_ca.paa";
					};
					class 85
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F85";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate5_ca.paa";
					};
					class 86
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F86";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate6_ca.paa";
					};
					class 87
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F87";
						value="\A3\missions_f_beta\data\img\decals\decal_phalanx_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_phalanx_ca.paa";
					};
					class 88
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F88";
						value="\A3\missions_f_beta\data\img\decals\decal_prone1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone1_ca.paa";
					};
					class 89
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F89";
						value="\A3\missions_f_beta\data\img\decals\decal_prone2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone2_ca.paa";
					};
					class 90
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F90";
						value="\A3\missions_f_beta\data\img\decals\decal_prone3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone3_ca.paa";
					};
					class 91
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F91";
						value="\A3\missions_f_beta\data\img\decals\decal_prone4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone4_ca.paa";
					};
					class 92
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F92";
						value="\A3\missions_f_beta\data\img\decals\decal_prone5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone5_ca.paa";
					};
					class 93
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F93";
						value="\A3\missions_f_beta\data\img\decals\decal_prone6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone6_ca.paa";
					};
					class 94
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F94";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle1_ca.paa";
					};
					class 95
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F95";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle2_ca.paa";
					};
					class 96
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F96";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle3_ca.paa";
					};
					class 97
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F97";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle4_ca.paa";
					};
					class 98
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F98";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle5_ca.paa";
					};
					class 99
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F99";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle6_ca.paa";
					};
					class 100
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F100";
						value="\A3\missions_f_beta\data\img\decals\decal_santiago_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_santiago_ca.paa";
					};
					class 101
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F101";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm1_ca.paa";
					};
					class 102
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F102";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm2_ca.paa";
					};
					class 103
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F103";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm3_ca.paa";
					};
					class 104
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F104";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm4_ca.paa";
					};
					class 105
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F105";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm5_ca.paa";
					};
					class 106
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F106";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm6_ca.paa";
					};
					class 107
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F107";
						value="\A3\missions_f_beta\data\img\decals\decal_stand1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand1_ca.paa";
					};
					class 108
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F108";
						value="\A3\missions_f_beta\data\img\decals\decal_stand2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand2_ca.paa";
					};
					class 109
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F109";
						value="\A3\missions_f_beta\data\img\decals\decal_stand3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand3_ca.paa";
					};
					class 110
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F110";
						value="\A3\missions_f_beta\data\img\decals\decal_stand4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand4_ca.paa";
					};
					class 111
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F111";
						value="\A3\missions_f_beta\data\img\decals\decal_stand5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand5_ca.paa";
					};
					class 112
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F112";
						value="\A3\missions_f_beta\data\img\decals\decal_stand6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand6_ca.paa";
					};
					class 113
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F113";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot1_ca.paa";
					};
					class 114
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F114";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot2_ca.paa";
					};
					class 115
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F115";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot3_ca.paa";
					};
					class 116
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F116";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot4_ca.paa";
					};
					class 117
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F117";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot5_ca.paa";
					};
					class 118
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F118";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot6_ca.paa";
					};
					class 119
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F119";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right1_ca.paa";
					};
					class 120
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F120";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right2_ca.paa";
					};
					class 121
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F121";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right3_ca.paa";
					};
					class 122
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F122";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right4_ca.paa";
					};
					class 123
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F123";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right5_ca.paa";
					};
					class 124
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F124";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right6_ca.paa";
					};
					class 125
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F125";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target1_ca.paa";
					};
					class 126
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F126";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target2_ca.paa";
					};
					class 127
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F127";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target3_ca.paa";
					};
					class 128
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F128";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target4_ca.paa";
					};
					class 129
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F129";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target5_ca.paa";
					};
					class 130
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F130";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target6_ca.paa";
					};
					class 131
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F131";
						value="\A3\missions_f_beta\data\img\decals\decal_vault1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault1_ca.paa";
					};
					class 132
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F132";
						value="\A3\missions_f_beta\data\img\decals\decal_vault2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault2_ca.paa";
					};
					class 133
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F133";
						value="\A3\missions_f_beta\data\img\decals\decal_vault3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault3_ca.paa";
					};
					class 134
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F134";
						value="\A3\missions_f_beta\data\img\decals\decal_vault4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault4_ca.paa";
					};
					class 135
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F135";
						value="\A3\missions_f_beta\data\img\decals\decal_vault5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault5_ca.paa";
					};
					class 136
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F136";
						value="\A3\missions_f_beta\data\img\decals\decal_vault6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault6_ca.paa";
					};
					class 138
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F138";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out1_ca.paa";
					};
					class 139
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F139";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out2_ca.paa";
					};
					class 140
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F140";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out3_ca.paa";
					};
					class 141
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F141";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out4_ca.paa";
					};
					class 142
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F142";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out5_ca.paa";
					};
					class 143
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F143";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out6_ca.paa";
					};
				};
			};
		};
	};
	class Land_Shoot_House_Panels_Window_F: Land_Shoot_House_Panels_F
	{
		class Attributes
		{
			class SwitchTexture1
			{
				property="SwitchTexture1";
				displayName="$STR_3den_object_attribute_objecttexturecustom0_displayname";
				control="Combo";
				expression="_this setObjectTextureGlobal [0, _value]";
				defaultValue="'#(argb,8,8,3)color(0,0,0,0,ca)'";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="";
						value="#(argb,8,8,3)color(0,0,0,0,ca)";
						picture="#(argb,8,8,3)color(0,0,0,0,ca)";
					};
					class 2
					{
						name="Aliens#Fakenews";
						value="\A3\missions_f_beta\data\img\decals\decal_aliens_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_aliens_ca.paa";
					};
					class 3
					{
						name="$STR_A3_CFGVEHICLES_LAND_TARGET_DUELING_01_F0";
						value="\A3\missions_f_beta\data\img\decals\decal_binary_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_binary_ca.paa";
					};
					class 4
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F4";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA1_ca.paa";
					};
					class 5
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F5";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA2_ca.paa";
					};
					class 6
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F6";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA3_ca.paa";
					};
					class 7
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F7";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA4_ca.paa";
					};
					class 8
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F8";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA5_ca.paa";
					};
					class 9
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F9";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA6_ca.paa";
					};
					class 10
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F10";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB1_ca.paa";
					};
					class 11
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F11";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB2_ca.paa";
					};
					class 12
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F12";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB3_ca.paa";
					};
					class 13
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F13";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB4_ca.paa";
					};
					class 14
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F14";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB5_ca.paa";
					};
					class 15
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F15";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB6_ca.paa";
					};
					class 16
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F16";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC1_ca.paa";
					};
					class 17
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F17";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC2_ca.paa";
					};
					class 18
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F18";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC3_ca.paa";
					};
					class 19
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F19";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC4_ca.paa";
					};
					class 20
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F20";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC5_ca.paa";
					};
					class 21
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F21";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC6_ca.paa";
					};
					class 23
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F22";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD1_ca.paa";
					};
					class 24
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F23";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD2_ca.paa";
					};
					class 25
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F24";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD3_ca.paa";
					};
					class 26
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F25";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD4_ca.paa";
					};
					class 27
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F26";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD5_ca.paa";
					};
					class 28
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F27";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD6_ca.paa";
					};
					class 144
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F144";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH1_ca.paa";
					};
					class 29
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F29";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH2_ca.paa";
					};
					class 30
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F30";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH3_ca.paa";
					};
					class 31
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F31";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH4_ca.paa";
					};
					class 32
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F32";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH5_ca.paa";
					};
					class 33
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F33";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH6_ca.paa";
					};
					class 34
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F34";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl1_ca.paa";
					};
					class 35
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F35";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl2_ca.paa";
					};
					class 36
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F36";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl3_ca.paa";
					};
					class 37
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F37";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl4_ca.paa";
					};
					class 38
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F38";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl5_ca.paa";
					};
					class 39
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F39";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl6_ca.paa";
					};
					class 40
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F40";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch1_ca.paa";
					};
					class 41
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F41";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch2_ca.paa";
					};
					class 42
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F42";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch3_ca.paa";
					};
					class 43
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F43";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch4_ca.paa";
					};
					class 44
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F44";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch5_ca.paa";
					};
					class 45
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F45";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch6_ca.paa";
					};
					class 46
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F46";
						value="\A3\missions_f_beta\data\img\decals\decal_crowe_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crowe_ca.paa";
					};
					class 47
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F47";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel1_ca.paa";
					};
					class 48
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F48";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel2_ca.paa";
					};
					class 49
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F49";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel3_ca.paa";
					};
					class 50
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F50";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel4_ca.paa";
					};
					class 51
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F51";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel5_ca.paa";
					};
					class 52
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F52";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel6_ca.paa";
					};
					class 53
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F53";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left1_ca.paa";
					};
					class 54
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F54";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left2_ca.paa";
					};
					class 55
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F55";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left3_ca.paa";
					};
					class 56
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F56";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left4_ca.paa";
					};
					class 57
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F57";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left5_ca.paa";
					};
					class 58
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F58";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left6_ca.paa";
					};
					class 59
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F59";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right1_ca.paa";
					};
					class 60
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F60";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right2_ca.paa";
					};
					class 61
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F61";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right3_ca.paa";
					};
					class 62
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F62";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right4_ca.paa";
					};
					class 63
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F63";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right5_ca.paa";
					};
					class 64
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F64";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right6_ca.paa";
					};
					class 65
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F65";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left1_ca.paa";
					};
					class 66
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F66";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left2_ca.paa";
					};
					class 145
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F66";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left3_ca.paa";
					};
					class 67
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F67";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left4_ca.paa";
					};
					class 68
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F68";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left5_ca.paa";
					};
					class 69
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F69";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left6_ca.paa";
					};
					class 70
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F70";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right1_ca.paa";
					};
					class 71
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F71";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right2_ca.paa";
					};
					class 72
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F72";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right3_ca.paa";
					};
					class 73
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F73";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right4_ca.paa";
					};
					class 74
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F74";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right5_ca.paa";
					};
					class 75
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F75";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right6_ca.paa";
					};
					class 76
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F76";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target1_ca.paa";
					};
					class 77
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F77";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target2_ca.paa";
					};
					class 78
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F78";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target3_ca.paa";
					};
					class 79
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F79";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target4_ca.paa";
					};
					class 80
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F80";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target5_ca.paa";
					};
					class 81
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F81";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target6_ca.paa";
					};
					class 82
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F82";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate1_ca.paa";
					};
					class 83
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F83";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate2_ca.paa";
					};
					class 146
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F83";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate3_ca.paa";
					};
					class 84
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F84";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate4_ca.paa";
					};
					class 85
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F85";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate5_ca.paa";
					};
					class 86
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F86";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate6_ca.paa";
					};
					class 87
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F87";
						value="\A3\missions_f_beta\data\img\decals\decal_phalanx_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_phalanx_ca.paa";
					};
					class 88
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F88";
						value="\A3\missions_f_beta\data\img\decals\decal_prone1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone1_ca.paa";
					};
					class 89
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F89";
						value="\A3\missions_f_beta\data\img\decals\decal_prone2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone2_ca.paa";
					};
					class 90
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F90";
						value="\A3\missions_f_beta\data\img\decals\decal_prone3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone3_ca.paa";
					};
					class 91
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F91";
						value="\A3\missions_f_beta\data\img\decals\decal_prone4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone4_ca.paa";
					};
					class 92
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F92";
						value="\A3\missions_f_beta\data\img\decals\decal_prone5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone5_ca.paa";
					};
					class 93
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F93";
						value="\A3\missions_f_beta\data\img\decals\decal_prone6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone6_ca.paa";
					};
					class 94
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F94";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle1_ca.paa";
					};
					class 95
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F95";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle2_ca.paa";
					};
					class 96
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F96";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle3_ca.paa";
					};
					class 97
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F97";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle4_ca.paa";
					};
					class 98
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F98";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle5_ca.paa";
					};
					class 99
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F99";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle6_ca.paa";
					};
					class 100
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F100";
						value="\A3\missions_f_beta\data\img\decals\decal_santiago_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_santiago_ca.paa";
					};
					class 101
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F101";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm1_ca.paa";
					};
					class 102
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F102";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm2_ca.paa";
					};
					class 103
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F103";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm3_ca.paa";
					};
					class 104
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F104";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm4_ca.paa";
					};
					class 105
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F105";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm5_ca.paa";
					};
					class 106
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F106";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm6_ca.paa";
					};
					class 107
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F107";
						value="\A3\missions_f_beta\data\img\decals\decal_stand1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand1_ca.paa";
					};
					class 108
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F108";
						value="\A3\missions_f_beta\data\img\decals\decal_stand2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand2_ca.paa";
					};
					class 109
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F109";
						value="\A3\missions_f_beta\data\img\decals\decal_stand3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand3_ca.paa";
					};
					class 110
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F110";
						value="\A3\missions_f_beta\data\img\decals\decal_stand4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand4_ca.paa";
					};
					class 111
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F111";
						value="\A3\missions_f_beta\data\img\decals\decal_stand5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand5_ca.paa";
					};
					class 112
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F112";
						value="\A3\missions_f_beta\data\img\decals\decal_stand6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand6_ca.paa";
					};
					class 113
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F113";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot1_ca.paa";
					};
					class 114
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F114";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot2_ca.paa";
					};
					class 115
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F115";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot3_ca.paa";
					};
					class 116
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F116";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot4_ca.paa";
					};
					class 117
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F117";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot5_ca.paa";
					};
					class 118
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F118";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot6_ca.paa";
					};
					class 119
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F119";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right1_ca.paa";
					};
					class 120
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F120";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right2_ca.paa";
					};
					class 121
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F121";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right3_ca.paa";
					};
					class 122
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F122";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right4_ca.paa";
					};
					class 123
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F123";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right5_ca.paa";
					};
					class 124
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F124";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right6_ca.paa";
					};
					class 125
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F125";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target1_ca.paa";
					};
					class 126
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F126";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target2_ca.paa";
					};
					class 127
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F127";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target3_ca.paa";
					};
					class 128
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F128";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target4_ca.paa";
					};
					class 129
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F129";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target5_ca.paa";
					};
					class 130
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F130";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target6_ca.paa";
					};
					class 131
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F131";
						value="\A3\missions_f_beta\data\img\decals\decal_vault1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault1_ca.paa";
					};
					class 132
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F132";
						value="\A3\missions_f_beta\data\img\decals\decal_vault2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault2_ca.paa";
					};
					class 133
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F133";
						value="\A3\missions_f_beta\data\img\decals\decal_vault3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault3_ca.paa";
					};
					class 134
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F134";
						value="\A3\missions_f_beta\data\img\decals\decal_vault4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault4_ca.paa";
					};
					class 135
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F135";
						value="\A3\missions_f_beta\data\img\decals\decal_vault5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault5_ca.paa";
					};
					class 136
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F136";
						value="\A3\missions_f_beta\data\img\decals\decal_vault6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault6_ca.paa";
					};
					class 138
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F138";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out1_ca.paa";
					};
					class 139
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F139";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out2_ca.paa";
					};
					class 140
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F140";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out3_ca.paa";
					};
					class 141
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F141";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out4_ca.paa";
					};
					class 142
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F142";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out5_ca.paa";
					};
					class 143
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F143";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out6_ca.paa";
					};
				};
			};
			class SwitchTexture3: SwitchTexture1
			{
				property="SwitchTexture3";
				displayName="$STR_3den_object_attribute_objecttexturecustom2_displayname";
				expression="_this setObjectTextureGlobal [2, _value]";
			};
			class SwitchTexture4: SwitchTexture1
			{
				property="SwitchTexture4";
				displayName="$STR_3den_object_attribute_objecttexturecustom3_displayname";
				expression="_this setObjectTextureGlobal [3, _value]";
			};
			class SwitchTexture5: SwitchTexture1
			{
				property="SwitchTexture5";
				displayName="$STR_3den_object_attribute_objecttexturecustom4_displayname";
				expression="_this setObjectTextureGlobal [4, _value]";
			};
		};
	};
	class Land_Shoot_House_Panels_Windows_F: Land_Shoot_House_Panels_F
	{
		class Attributes: Attributes
		{
			class SwitchTexture2: SwitchTexture1
			{
				property="SwitchTexture2";
				displayName="$STR_3den_object_attribute_objecttexturecustom1_displayname";
				expression="_this setObjectTextureGlobal [1, _value]";
				defaultValue="'#(argb,8,8,3)color(0,0,0,0,ca)'";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="";
						value="#(argb,8,8,3)color(0,0,0,0,ca)";
						picture="#(argb,8,8,3)color(0,0,0,0,ca)";
					};
					class 2
					{
						name="Aliens#Fakenews";
						value="\A3\missions_f_beta\data\img\decals\decal_aliens_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_aliens_ca.paa";
					};
					class 3
					{
						name="$STR_A3_CFGVEHICLES_LAND_TARGET_DUELING_01_F0";
						value="\A3\missions_f_beta\data\img\decals\decal_binary_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_binary_ca.paa";
					};
					class 4
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F4";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA1_ca.paa";
					};
					class 5
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F5";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA2_ca.paa";
					};
					class 6
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F6";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA3_ca.paa";
					};
					class 7
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F7";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA4_ca.paa";
					};
					class 8
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F8";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA5_ca.paa";
					};
					class 9
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F9";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusA6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusA6_ca.paa";
					};
					class 10
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F10";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB1_ca.paa";
					};
					class 11
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F11";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB2_ca.paa";
					};
					class 12
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F12";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB3_ca.paa";
					};
					class 13
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F13";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB4_ca.paa";
					};
					class 14
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F14";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB5_ca.paa";
					};
					class 15
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F15";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusB6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusB6_ca.paa";
					};
					class 16
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F16";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC1_ca.paa";
					};
					class 17
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F17";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC2_ca.paa";
					};
					class 18
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F18";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC3_ca.paa";
					};
					class 19
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F19";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC4_ca.paa";
					};
					class 20
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F20";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC5_ca.paa";
					};
					class 21
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F21";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusC6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusC6_ca.paa";
					};
					class 23
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F22";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD1_ca.paa";
					};
					class 24
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F23";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD2_ca.paa";
					};
					class 25
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F24";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD3_ca.paa";
					};
					class 26
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F25";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD4_ca.paa";
					};
					class 27
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F26";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD5_ca.paa";
					};
					class 28
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F27";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusD6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusD6_ca.paa";
					};
					class 144
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F144";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH1_ca.paa";
					};
					class 29
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F29";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH2_ca.paa";
					};
					class 30
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F30";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH3_ca.paa";
					};
					class 31
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F31";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH4_ca.paa";
					};
					class 32
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F32";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH5_ca.paa";
					};
					class 33
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F33";
						value="\A3\missions_f_beta\data\img\decals\decal_bonusH6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_bonusH6_ca.paa";
					};
					class 34
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F34";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl1_ca.paa";
					};
					class 35
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F35";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl2_ca.paa";
					};
					class 36
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F36";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl3_ca.paa";
					};
					class 37
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F37";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl4_ca.paa";
					};
					class 38
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F38";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl5_ca.paa";
					};
					class 39
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F39";
						value="\A3\missions_f_beta\data\img\decals\decal_crawl6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crawl6_ca.paa";
					};
					class 40
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F40";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch1_ca.paa";
					};
					class 41
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F41";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch2_ca.paa";
					};
					class 42
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F42";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch3_ca.paa";
					};
					class 43
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F43";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch4_ca.paa";
					};
					class 44
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F44";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch5_ca.paa";
					};
					class 45
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F45";
						value="\A3\missions_f_beta\data\img\decals\decal_crouch6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crouch6_ca.paa";
					};
					class 46
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F46";
						value="\A3\missions_f_beta\data\img\decals\decal_crowe_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_crowe_ca.paa";
					};
					class 47
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F47";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel1_ca.paa";
					};
					class 48
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F48";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel2_ca.paa";
					};
					class 49
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F49";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel3_ca.paa";
					};
					class 50
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F50";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel4_ca.paa";
					};
					class 51
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F51";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel5_ca.paa";
					};
					class 52
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F52";
						value="\A3\missions_f_beta\data\img\decals\decal_kneel6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_kneel6_ca.paa";
					};
					class 53
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F53";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left1_ca.paa";
					};
					class 54
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F54";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left2_ca.paa";
					};
					class 55
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F55";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left3_ca.paa";
					};
					class 56
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F56";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left4_ca.paa";
					};
					class 57
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F57";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left5_ca.paa";
					};
					class 58
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F58";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_left6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_left6_ca.paa";
					};
					class 59
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F59";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right1_ca.paa";
					};
					class 60
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F60";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right2_ca.paa";
					};
					class 61
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F61";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right3_ca.paa";
					};
					class 62
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F62";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right4_ca.paa";
					};
					class 63
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F63";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right5_ca.paa";
					};
					class 64
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F64";
						value="\A3\missions_f_beta\data\img\decals\decal_lean_right6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_lean_right6_ca.paa";
					};
					class 65
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F65";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left1_ca.paa";
					};
					class 66
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F66";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left2_ca.paa";
					};
					class 145
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F66";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left3_ca.paa";
					};
					class 67
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F67";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left4_ca.paa";
					};
					class 68
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F68";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left5_ca.paa";
					};
					class 69
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F69";
						value="\A3\missions_f_beta\data\img\decals\decal_move_left6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_left6_ca.paa";
					};
					class 70
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F70";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right1_ca.paa";
					};
					class 71
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F71";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right2_ca.paa";
					};
					class 72
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F72";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right3_ca.paa";
					};
					class 73
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F73";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right4_ca.paa";
					};
					class 74
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F74";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right5_ca.paa";
					};
					class 75
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F75";
						value="\A3\missions_f_beta\data\img\decals\decal_move_right6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_move_right6_ca.paa";
					};
					class 76
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F76";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target1_ca.paa";
					};
					class 77
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F77";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target2_ca.paa";
					};
					class 78
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F78";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target3_ca.paa";
					};
					class 79
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F79";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target4_ca.paa";
					};
					class 80
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F80";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target5_ca.paa";
					};
					class 81
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F81";
						value="\A3\missions_f_beta\data\img\decals\decal_noshoot_target6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_noshoot_target6_ca.paa";
					};
					class 82
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F82";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate1_ca.paa";
					};
					class 83
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F83";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate2_ca.paa";
					};
					class 146
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F83";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate3_ca.paa";
					};
					class 84
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F84";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate4_ca.paa";
					};
					class 85
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F85";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate5_ca.paa";
					};
					class 86
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F86";
						value="\A3\missions_f_beta\data\img\decals\decal_penetrate6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_penetrate6_ca.paa";
					};
					class 87
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F87";
						value="\A3\missions_f_beta\data\img\decals\decal_phalanx_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_phalanx_ca.paa";
					};
					class 88
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F88";
						value="\A3\missions_f_beta\data\img\decals\decal_prone1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone1_ca.paa";
					};
					class 89
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F89";
						value="\A3\missions_f_beta\data\img\decals\decal_prone2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone2_ca.paa";
					};
					class 90
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F90";
						value="\A3\missions_f_beta\data\img\decals\decal_prone3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone3_ca.paa";
					};
					class 91
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F91";
						value="\A3\missions_f_beta\data\img\decals\decal_prone4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone4_ca.paa";
					};
					class 92
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F92";
						value="\A3\missions_f_beta\data\img\decals\decal_prone5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone5_ca.paa";
					};
					class 93
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F93";
						value="\A3\missions_f_beta\data\img\decals\decal_prone6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_prone6_ca.paa";
					};
					class 94
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F94";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle1_ca.paa";
					};
					class 95
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F95";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle2_ca.paa";
					};
					class 96
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F96";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle3_ca.paa";
					};
					class 97
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F97";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle4_ca.paa";
					};
					class 98
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F98";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle5_ca.paa";
					};
					class 99
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F99";
						value="\A3\missions_f_beta\data\img\decals\decal_rifle6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_rifle6_ca.paa";
					};
					class 100
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F100";
						value="\A3\missions_f_beta\data\img\decals\decal_santiago_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_santiago_ca.paa";
					};
					class 101
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F101";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm1_ca.paa";
					};
					class 102
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F102";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm2_ca.paa";
					};
					class 103
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F103";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm3_ca.paa";
					};
					class 104
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F104";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm4_ca.paa";
					};
					class 105
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F105";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm5_ca.paa";
					};
					class 106
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F106";
						value="\A3\missions_f_beta\data\img\decals\decal_sidearm6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_sidearm6_ca.paa";
					};
					class 107
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F107";
						value="\A3\missions_f_beta\data\img\decals\decal_stand1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand1_ca.paa";
					};
					class 108
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F108";
						value="\A3\missions_f_beta\data\img\decals\decal_stand2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand2_ca.paa";
					};
					class 109
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F109";
						value="\A3\missions_f_beta\data\img\decals\decal_stand3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand3_ca.paa";
					};
					class 110
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F110";
						value="\A3\missions_f_beta\data\img\decals\decal_stand4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand4_ca.paa";
					};
					class 111
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F111";
						value="\A3\missions_f_beta\data\img\decals\decal_stand5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand5_ca.paa";
					};
					class 112
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F112";
						value="\A3\missions_f_beta\data\img\decals\decal_stand6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_stand6_ca.paa";
					};
					class 113
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F113";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot1_ca.paa";
					};
					class 114
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F114";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot2_ca.paa";
					};
					class 115
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F115";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot3_ca.paa";
					};
					class 116
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F116";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot4_ca.paa";
					};
					class 117
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F117";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot5_ca.paa";
					};
					class 118
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F118";
						value="\A3\missions_f_beta\data\img\decals\decal_target_noshoot6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_noshoot6_ca.paa";
					};
					class 119
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F119";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right1_ca.paa";
					};
					class 120
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F120";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right2_ca.paa";
					};
					class 121
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F121";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right3_ca.paa";
					};
					class 122
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F122";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right4_ca.paa";
					};
					class 123
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F123";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right5_ca.paa";
					};
					class 124
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F124";
						value="\A3\missions_f_beta\data\img\decals\decal_target_right6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_right6_ca.paa";
					};
					class 125
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F125";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target1_ca.paa";
					};
					class 126
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F126";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target2_ca.paa";
					};
					class 127
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F127";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target3_ca.paa";
					};
					class 128
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F128";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target4_ca.paa";
					};
					class 129
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F129";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target5_ca.paa";
					};
					class 130
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F130";
						value="\A3\missions_f_beta\data\img\decals\decal_target_target6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_target_target6_ca.paa";
					};
					class 131
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F131";
						value="\A3\missions_f_beta\data\img\decals\decal_vault1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault1_ca.paa";
					};
					class 132
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F132";
						value="\A3\missions_f_beta\data\img\decals\decal_vault2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault2_ca.paa";
					};
					class 133
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F133";
						value="\A3\missions_f_beta\data\img\decals\decal_vault3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault3_ca.paa";
					};
					class 134
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F134";
						value="\A3\missions_f_beta\data\img\decals\decal_vault4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault4_ca.paa";
					};
					class 135
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F135";
						value="\A3\missions_f_beta\data\img\decals\decal_vault5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault5_ca.paa";
					};
					class 136
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F136";
						value="\A3\missions_f_beta\data\img\decals\decal_vault6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_vault6_ca.paa";
					};
					class 138
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F138";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out1_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out1_ca.paa";
					};
					class 139
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F139";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out2_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out2_ca.paa";
					};
					class 140
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F140";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out3_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out3_ca.paa";
					};
					class 141
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F141";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out4_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out4_ca.paa";
					};
					class 142
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F142";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out5_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out5_ca.paa";
					};
					class 143
					{
						name="STR_A3_Globe_Land_Shoot_House_dynamicTextures_F143";
						value="\A3\missions_f_beta\data\img\decals\decal_watch_out6_ca.paa";
						picture="\A3\missions_f_beta\data\img\decals\decal_watch_out6_ca.paa";
					};
				};
			};
			class SwitchTexture3: SwitchTexture1
			{
				property="SwitchTexture3";
				displayName="$STR_3den_object_attribute_objecttexturecustom2_displayname";
				expression="_this setObjectTextureGlobal [2, _value]";
			};
			class SwitchTexture5: SwitchTexture1
			{
				property="SwitchTexture5";
				displayName="$STR_3den_object_attribute_objecttexturecustom4_displayname";
				expression="_this setObjectTextureGlobal [4, _value]";
			};
		};
	};
	class TargetP_Inf_F: TargetBase
	{
		class Attributes
		{
			class ObjectTextureCustom0
			{
				displayName="$STR_3den_object_attribute_objecttexturecustom0_displayname";
				tooltip="$STR_3den_object_attribute_objecttexturecustom_tooltip";
				property="ObjectTextureCustom0";
				control="Edit";
				expression="_this setObjectTextureGlobal [0,_value]";
				defaultValue="(getObjectTextures _this) param [0,'',['']]";
			};
			class ObjectTextureCustom1
			{
				displayName="$STR_3den_object_attribute_objecttexturecustom1_displayname";
				tooltip="$STR_3den_object_attribute_objecttexturecustom_tooltip";
				property="ObjectTextureCustom1";
				control="Edit";
				expression="_this setObjectTextureGlobal [1,_value]";
				defaultValue="(getObjectTextures _this) param [1,'',['']]";
			};
			class ObjectTextureCustom2
			{
				displayName="$STR_3den_object_attribute_objecttexturecustom2_displayname";
				tooltip="$STR_3den_object_attribute_objecttexturecustom_tooltip";
				property="ObjectTextureCustom2";
				control="Edit";
				expression="_this setObjectTextureGlobal [2,_value]";
				defaultValue="(getObjectTextures _this) param [2,'',['']]";
			};
		};
	};
	class Target_F: TargetBase
	{
		class Attributes
		{
			class ObjectTextureCustom0
			{
				displayName="$STR_3den_object_attribute_objecttexturecustom0_displayname";
				tooltip="$STR_3den_object_attribute_objecttexturecustom_tooltip";
				property="ObjectTextureCustom0";
				control="Edit";
				expression="_this setObjectTextureGlobal [0,_value]";
				defaultValue="(getObjectTextures _this) param [0,'',['']]";
			};
			class ObjectTextureCustom1
			{
				displayName="$STR_3den_object_attribute_objecttexturecustom1_displayname";
				tooltip="$STR_3den_object_attribute_objecttexturecustom_tooltip";
				property="ObjectTextureCustom1";
				control="Edit";
				expression="_this setObjectTextureGlobal [1,_value]";
				defaultValue="(getObjectTextures _this) param [1,'',['']]";
			};
		};
	};
};
