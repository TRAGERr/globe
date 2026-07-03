class CfgPatches
{
	class Characters_Globe_Facewear
	{
		addonRootClass="A3_expEden_characters";
		requiredAddons[]=
		{
			"A3_expEden_characters"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgGlasses
{
	class G_AirPurifyingRespirator_01_F;
	class G_AirPurifyingRespirator_02_black_F;
	class G_AirPurifyingRespirator_02_olive_F;
	class G_AirPurifyingRespirator_02_sand_F;
	class None;
	class G_Balaclava_blk;
	class G_Balaclava_RedStrips: G_Balaclava_blk
	{
		author="O&T Expansion Eden";
		scope=2;
		scopeArsenal=2;
		displayName="$STR_Globe_CfgGlasses_G_Balaclava_RedStrips0";
		picture="\A3\expEden\characters\Facewear\Data\UI\icon_G_Balaclava_RedStrips_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\expEden\characters\Facewear\Data\G_Balaclava_RedStrips_CO.paa"
		};
		identityTypes[]=
		{
			"NoGlasses",
			0
		};
	};
	class G_Balaclava_GreenStrips: G_Balaclava_blk
	{
		author="O&T Expansion Eden";
		scope=2;
		scopeArsenal=2;
		displayName="$STR_Globe_CfgGlasses_G_Balaclava_GreenStrips0";
		picture="\A3\expEden\characters\Facewear\Data\UI\icon_G_Balaclava_GreenStrips_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\expEden\characters\Facewear\Data\G_Balaclava_GreenStrips_CO.paa"
		};
		identityTypes[]=
		{
			"NoGlasses",
			0
		};
	};
	class G_Tactical_camo: None
	{
		author="O&T Expansion Eden";
		_generalMacro="G_Tactical_camo";
		displayname="$STR_A3_CfgGlasses_G_Tactical_camo0";
		model="\A3\characters_f_beta\heads\glasses\g_tactical_black";
		picture="\A3\expEden\characters\Facewear\Data\UI\icon_G_Tactical_camo_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\heads\glasses\data\tactical_4_ca.paa"
		};
		identityTypes[]={};
		mass=2;
	};
	class G_Tactical_yellow: G_Tactical_camo
	{
		author="O&T Expansion Eden";
		_generalMacro="G_Tactical_yellow";
		displayname="$STR_A3_CfgGlasses_G_Tactical_yellow0";
		picture="\A3\expEden\characters\Facewear\Data\UI\icon_G_Tactical_yellow_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\heads\glasses\data\tactical_2_ca.paa"
		};
	};
	class G_Diving_NoPop
	{
		author="O&T Expansion Eden";
		_generalMacro="G_Diving_NoPop";
		displayname="$STR_Globe_CfgGlasses_G_Diving_NoPop0";
		descriptionUse="$str_a3_cfgglasses_g_diving1";
		model="\A3\characters_f\Heads\glasses\g_diving";
		picture="\A3\characters_F\data\ui\icon_G_Diving_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\heads\glasses\data\g_diving_ca.paa"
		};
		identityTypes[]={};
		mode=0;
		mass=4;
		scope=2;
	};
	class G_B_Diving_NoPop: G_Diving_NoPop
	{
		author="O&T Expansion Eden";
		_generalMacro="G_B_Diving_NoPop";
		displayname="$STR_Globe_CfgGlasses_G_B_Diving_NoPop0";
		model="\A3\Characters_F_EPB\Heads\Glasses\g_b_diving.p3d";
		picture="\A3\Characters_F_EPB\Heads\Glasses\data\UI\icon_g_diving_nato_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f_epb\heads\glasses\data\g_diving_nato_ca.paa"
		};
	};
	class G_O_Diving_NoPop: G_Diving_NoPop
	{
		author="O&T Expansion Eden";
		_generalMacro="G_O_Diving_NoPop";
		displayname="$STR_Globe_CfgGlasses_G_O_Diving_NoPop0";
		model="\A3\Characters_F_EPB\Heads\Glasses\g_o_diving.p3d";
		picture="\A3\Characters_F_EPB\Heads\Glasses\data\UI\icon_g_diving_iran_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f_epb\heads\glasses\data\g_diving_iran_ca.paa"
		};
	};
	class G_I_Diving_NoPop: G_Diving_NoPop
	{
		author="O&T Expansion Eden";
		_generalMacro="G_I_Diving";
		displayname="$STR_Globe_CfgGlasses_G_I_Diving_NoPop0";
		model="\A3\Characters_F_EPB\Heads\Glasses\g_i_diving.p3d";
		picture="\A3\Characters_F_EPB\Heads\Glasses\data\UI\icon_g_diving_rus_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f_epb\heads\glasses\data\g_diving_rus_ca.paa"
		};
	};
	class G_AirPurifyingRespirator_01_nofilter_F: G_AirPurifyingRespirator_01_F
	{
		author="O&T Expansion Eden";
		scope=2;
		scopeArsenal=2;
		displayName="$STR_Globe_CfgGlasses_G_AirPurifyingRespirator_01_nofilter_F0";
	};
	class G_AirPurifyingRespirator_02_black_nofilter_F: G_AirPurifyingRespirator_02_black_F
	{
		author="O&T Expansion Eden";
		scope=2;
		scopeArsenal=2;
		displayName="$STR_Globe_CfgGlasses_G_AirPurifyingRespirator_02_black_nofilter_F0";
	};
	class G_AirPurifyingRespirator_02_olive_nofilter_F: G_AirPurifyingRespirator_02_olive_F
	{
		author="O&T Expansion Eden";
		scope=2;
		scopeArsenal=2;
		displayName="$STR_Globe_CfgGlasses_G_AirPurifyingRespirator_02_olive_nofilter_F0";
	};
	class G_AirPurifyingRespirator_02_sand_nofilter_F: G_AirPurifyingRespirator_02_sand_F
	{
		author="O&T Expansion Eden";
		scope=2;
		scopeArsenal=2;
		displayName="$STR_Globe_CfgGlasses_G_AirPurifyingRespirator_02_sand_nofilter_F0";
	};
	class G_HeadSetMilitary: None
	{
		author="O&T Expansion Eden";
		_generalMacro="G_HeadSetMilitary";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="$STR_Globe_CfgWeapons_Headgear_H_HeadSetMilitary0";
		picture="\A3\expEden\Characters\Headgear\data\UI\icon_H_HeadSetMilitary_ca.paa";
		model="\A3\Characters_F\common\HeadSet_Light.p3d";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Data\Headset_3_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Characters_F\Common\Data\Headset.rvmat"
		};
		mass=7.5;
		identityTypes[]=
		{
		};
	};
};