class CfgPatches
{
	class Weapons_Globe_Rifles_MX
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
			"arifle_MX_Hamr_pointer_bipod_G",
			"arifle_MX_GL_flashightMax"
		};
	};
};
class CfgWeapons
{
	class arifle_MX_F;
	class arifle_MX_GL_F;
	class arifle_MX_GL_flashightMax: arifle_MX_GL_F
	{
		author="O&T Expansion Eden";
		_generalMacro="arifle_MX_GL_flashightMax";
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_flashlightMax";
			};
		};
	};	
	class arifle_MX_Hamr_pointer_bipod_G: arifle_MX_F
	{
		author="O&T Expansion Eden";
		_generalMacro="arifle_MX_Hamr_pointer_bipod_G";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_snd";
			};
		};
	};
};
