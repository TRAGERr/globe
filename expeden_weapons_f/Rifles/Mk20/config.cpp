class CfgPatches
{
	class Weapons_Globe_Rifles_Mk20
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
			"arifle_Mk20_GL_ACO_pointer_snds_G"
		};
	};
};
class CfgWeapons
{
	class arifle_Mk20_GL_F;
	class arifle_Mk20_GL_ACO_pointer_snds_G: arifle_Mk20_GL_F
	{
		author="O&T Expansion Eden";
		_generalMacro="arifle_Mk20_GL_ACO_pointer_snds_G";
		emptySound[]=
		{
			"",
			1,
			1
		};
		soundBullet[]=
		{
			"emptySound",
			1
		};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO_grn";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_M";
			};
		};
		class EventHandlers
		{
			class Globe_caseDropEH
			{
				fired="(_this # 0) spawn expEden_fnc_caseDrops762;";
			};
		};
	};
};
