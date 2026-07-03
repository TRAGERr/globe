class CfgPatches
{
	class Weapons_Globe_Pistols_Postol_Heavy_01
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
			"hgun_Pistol_heavy_01_snds_G"
		};
	};
};
class CfgWeapons
{
	class hgun_Pistol_heavy_01_F;
	class hgun_Pistol_heavy_01_snds_G: hgun_Pistol_heavy_01_F
	{
		author="O&T Expansion Eden";
		_generalMacro="hgun_Pistol_heavy_01_sndso45_G";
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_o45";
			};
		};
	};
};
