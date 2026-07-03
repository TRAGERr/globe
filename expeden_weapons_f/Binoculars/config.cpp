class CfgPatches
{
	class Weapons_Globe_Binoculars
	{
		addonRootClass="A3_Weapons_F_expEden";
		requiredAddons[]=
		{
			"A3_Weapons_F_expEden"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"O_NVGoggles_black",
			"NVGogglesOld_black",
			"LaserdesignatorGPS_01",
			"LaserdesignatorGPS_01_khk",
			"LaserdesignatorGPS_02",
			"LaserdesignatorGPS_02_ghex",
			"LaserdesignatorGPS_03"
		};
	};
};
class CfgWeapons
{
	class Binocular;
	class Laserdesignator;
	class Laserdesignator_01_khk_F;
	class Laserdesignator_02;
	class Laserdesignator_02_ghex_F;
	class Laserdesignator_03;
	class NVGoggles: Binocular
	{
		class ItemInfo;
	};
	class O_NVGoggles_hex_F: NVGoggles
	{
		class ItemInfo;
	};
	class LaserdesignatorGPS_01: Laserdesignator
	{
		author="O&T Expansion Eden";
		_generalMacro="LaserdesignatorGPS_01";
		displayName="$STR_Globe_CfgWeapons_LaserdesignatorGPS_010";
		weaponInfoType="RscOptics_LaserDesignatorGPS_01";
	};
	class LaserdesignatorGPS_01_khk: Laserdesignator_01_khk_F
	{
		author="O&T Expansion Eden";
		scope=1;
		scopeArsenal=0;
		_generalMacro="LaserdesignatorGPS_01_khk";
		displayName="$STR_Globe_CfgWeapons_LaserdesignatorGPS_01_khk0";
		weaponInfoType="RscOptics_LaserDesignatorGPS_01";
	};
	class LaserdesignatorGPS_02: Laserdesignator_02
	{
		author="O&T Expansion Eden";
		scope=1;
		scopeArsenal=0;
		_generalMacro="LaserdesignatorGPS_02";
		displayName="$STR_Globe_CfgWeapons_LaserdesignatorGPS_020";
		weaponInfoType="RscOptics_LaserDesignatorGPS_02";
	};
	class LaserdesignatorGPS_02_ghex: Laserdesignator_02_ghex_F
	{
		author="O&T Expansion Eden";
		scope=1;
		scopeArsenal=0;
		_generalMacro="LaserdesignatorGPS_02_ghex";
		displayName="$STR_Globe_CfgWeapons_LaserdesignatorGPS_02_ghex0";
		weaponInfoType="RscOptics_LaserDesignatorGPS_02";
	};
	class LaserdesignatorGPS_03: Laserdesignator_03
	{
		author="O&T Expansion Eden";
		scope=1;
		scopeArsenal=0;
		_generalMacro="LaserdesignatorGPS_03";
		displayName="$STR_Globe_CfgWeapons_LaserdesignatorGPS_030";
		weaponInfoType="RscOptics_LaserDesignatorGPS_01";
	};
	class NVGogglesOld_black: NVGoggles
	{
		scope=1;
		scopeArsenal=0;
		model="\a3\weapons_f\binocular\nvg_head_s.p3d";
		visionMode[]=
		{
			"NVG"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\a3\weapons_f\binocular\nvg_head_s.p3d";
			modelOff="\a3\weapons_f\binocular\nvg_head_s.p3d";
			mass=19;
		};
	};
	class O_NVGoggles_black: O_NVGoggles_hex_F
	{
		author="O&T Expansion Eden";
		_generalMacro="O_NVGoggles_black";
		displayName="$STR_Globe_CfgWeapons_O_NVGoggles_black0";
		model="\a3\weapons_f_exp\binocular\o_nvgoggles_blk_f.p3d";
		picture="\a3\weapons_f_exp\binocular\data\ui\icon_o_nvgoggles_blk_f_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel="\a3\weapons_f_exp\binocular\o_nvgoggles_blk_f.p3d";
			modelOff="\a3\weapons_f_exp\binocular\o_nvgoggles_blk_off_f.p3d";
		};
	};
};
