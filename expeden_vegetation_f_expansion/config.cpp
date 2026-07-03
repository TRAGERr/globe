class CfgPatches
{
	class A3_Vegetation_F_Exp_expEden
	{
		author="Trager";
		name="O&T Expansion Eden - Apex Flora";
		url="https://steamcommunity.com/workshop/filedetails/?id=1923321700";
		requiredAddons[]=
		{
			"A3_expEden"
		};
		requiredVersion=0.1;
		units[]=
		{
			"d_FallenBranch",
			"d_FallenBranch_LC",
			"d_FallenTrunk_branches",
			"d_FallenTrunk_branches_LC",
			"d_FallenTrunk_clear",
			"d_FallenTrunk_clear_LC",
			"d_FallenTrunk_roots",
			"d_FallenTrunk_roots_LC",
			"d_TreeStump_cut_large",
			"d_TreeStump_cut_small",
			"d_TreeStump_natural_large",
			"d_TreeStump_natural_small",
			"d_LianaTangle_narrow",
			"d_LianaTangle_wide",
			"t_Agathis_tall",
			"t_Agathis_wide",
			"t_Albizia",
			"t_Cocos_bend",
			"t_Cocos_small",
			"t_Cocos_tall",
			"t_CocosNucifera2s_small",
			"t_CocosNucifera3s_bend",
			"t_CocosNucifera3s_tall",
			"t_Cyathea",
			"t_Ficus_big",
			"t_Ficus_medium",
			"t_Ficus_small",
			"t_Inocarpus",
			"t_Millettia",
			"t_Millettia_plantation",
			"t_Palaquium",
			"t_Pritchardia",
			"t_Rhizophora",
			"b_Calochlaena",
			"b_Cestrum",
			"b_Colored_red",
			"b_Colored_yellow",
			"b_Cycas",
			"b_FicusC2d_tanoa",
			"b_Gardenia_dec_01",
			"b_Gardenia_dec_02",
			"b_Gardenia",
			"b_Leucaena",
			"b_NeriumO2d_tanoa",
			"b_PiperMeth",
			"b_Rhizophora",
			"b_Ginger_3",
			"b_Ginger_9",
			"b_Ginger_20",
			"b_Sugarcane_mature_row",
			"b_Sugarcane_sapling_row",
			"b_Sugarcane_sapling_single",
			"t_Banana",
			"t_Banana_wild",
			"t_Cacao_ripe",
			"c_rock_stones",
			"c_forest_BiglLeaves",
			"c_forest_BiglLeaves2",
			"c_forest_fern",
			"c_forest_roots",
			"c_forest_violet_leaves",
			"c_forest_violet_leaves2",
			"c_forest_violet_single",
			"c_Grass_leaf_big",
			"c_Grass_Leaves_coltsfoot",
			"c_Grass_mimosa",
			"c_GrassBunch_LO"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Strategic;
	class ThingX;
	class d_FallenBranch: ThingX
	{
		author="$STR_A3_Bohemia_Interactive";
		mapSize=0.69999999;
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\d_FallenBranch.jpg";
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.24699999;
			verticalOffsetWorld=0;
			init="''";
		};
		displayName="$STR_d_FallenBranch";
		model="\A3\vegetation_f_exp\TreeParts\d_FallenBranch_F.p3d";
		_generalMacro="d_FallenBranch";
		scope=2;
		scopeCurator=2;
		icon="iconObject_10x1";
		editorCategory="EdCat_Vegetation_exp";
		editorSubcategory="EdSubcat_Tree";
		destrType="DestructNo";
		cost=0;
		DLC="Expansion";
		affectedByWind=1;
		accuracy=1000;
		nameSound="obj_tree";
	};
	class d_FallenBranch_LC: d_FallenBranch
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\d_FallenBranch_LC.jpg";
		_generalMacro="d_FallenBranch_LC";
		displayName="$STR_d_FallenBranch_LC";
		model="\A3\vegetation_f_exp\TreeParts\d_FallenBranch_LC_F.p3d";
	};
	class d_FallenTrunk_branches: d_FallenBranch
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\d_FallenTrunk_branches.jpg";
		_generalMacro="d_FallenTrunk_branches";
		displayName="$STR_d_FallenTrunk_branches";
		model="\A3\vegetation_f_exp\TreeParts\d_FallenTrunk_branches_F.p3d";
	};
	class d_FallenTrunk_branches_LC: d_FallenBranch
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\d_FallenTrunk_branches_LC.jpg";
		_generalMacro="d_FallenTrunk_branches_LC";
		displayName="$STR_d_FallenTrunk_branches_LC";
		model="\A3\vegetation_f_exp\TreeParts\d_FallenTrunk_branches_LC_F.p3d";
	};
	class d_FallenTrunk_clear: d_FallenBranch
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\d_FallenTrunk_clear.jpg";
		_generalMacro="d_FallenTrunk_clear";
		displayName="$STR_d_FallenTrunk_clear";
		model="\A3\vegetation_f_exp\TreeParts\d_FallenTrunk_clear_F.p3d";
	};
	class d_FallenTrunk_clear_LC: d_FallenBranch
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\d_FallenTrunk_clear_LC.jpg";
		_generalMacro="d_FallenTrunk_clear_LC";
		displayName="$STR_d_FallenTrunk_clear_LC";
		model="\A3\vegetation_f_exp\TreeParts\d_FallenTrunk_clear_LC_F.p3d";
	};
	class d_FallenTrunk_roots: Strategic
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\d_FallenTrunk_roots.jpg";
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.24699999;
			verticalOffsetWorld=0;
			init="''";
		};
		_generalMacro="d_FallenTrunk_roots";
		displayName="$STR_d_FallenTrunk_roots";
		model="\A3\vegetation_f_exp\TreeParts\d_FallenTrunk_roots_F.p3d";
		scope=2;
		scopeCurator=2;
		icon="iconObject_circle";
		editorCategory="EdCat_Vegetation_exp";
		editorSubcategory="EdSubcat_Tree";
		destrType="DestructNo";
		cost=0;
		DLC="Expansion";
		accuracy=1000;
		nameSound="obj_tree";
	};
	class d_FallenTrunk_roots_LC: d_FallenTrunk_roots
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\d_FallenTrunk_roots_LC.jpg";
		scope=1;
		scopeCurator=0;
		_generalMacro="d_FallenTrunk_roots_LC";
		displayName="$STR_d_FallenTrunk_roots_LC";
		model="\A3\vegetation_f_exp\TreeParts\d_FallenTrunk_roots_LC_F.p3d";
	};
	class d_TreeStump_cut_large: d_FallenTrunk_roots
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\d_TreeStump_cut_large.jpg";
		_generalMacro="d_TreeStump_cut_large";
		displayName="$STR_d_TreeStump_cut_large";
		model="\A3\vegetation_f_exp\TreeParts\d_TreeStump_cut_large_F.p3d";
	};
	class d_TreeStump_cut_small: d_FallenTrunk_roots
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\d_TreeStump_cut_small.jpg";
		_generalMacro="d_TreeStump_cut_small";
		displayName="$STR_d_TreeStump_cut_small";
		model="\A3\vegetation_f_exp\TreeParts\d_TreeStump_cut_small_F.p3d";
	};
	class d_TreeStump_natural_large: d_FallenTrunk_roots
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\d_TreeStump_natural_large.jpg";
		_generalMacro="d_TreeStump_natural_large";
		displayName="$STR_d_TreeStump_natural_large";
		model="\A3\vegetation_f_exp\TreeParts\d_TreeStump_natural_large_F.p3d";
	};
	class d_TreeStump_natural_small: d_FallenTrunk_roots
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\d_TreeStump_natural_small.jpg";
		_generalMacro="d_TreeStump_natural_small";
		displayName="$STR_d_TreeStump_natural_small";
		model="\A3\vegetation_f_exp\TreeParts\d_TreeStump_natural_small_F.p3d";
	};
	class d_LianaTangle_narrow: d_FallenTrunk_roots
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\d_LianaTangle_narrow.jpg";
		_generalMacro="d_LianaTangle_narrow";
		displayName="$STR_d_LianaTangle_narrow";
		model="\A3\vegetation_f_exp\Lianas\d_LianaTangle_narrow_F.p3d";
	};
	class d_LianaTangle_wide: d_FallenTrunk_roots
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\d_LianaTangle_wide.jpg";
		_generalMacro="d_LianaTangle_wide";
		displayName="$STR_d_LianaTangle_wide";
		model="\A3\vegetation_f_exp\Lianas\d_LianaTangle_wide_F.p3d";
	};
	class t_Agathis_tall: Strategic
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\t_Agathis_tall.jpg";
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.24699999;
			verticalOffsetWorld=0;
			init="''";
		};
		_generalMacro="t_Agathis_tall";
		displayName="$STR_t_Agathis_tall";
		model="\A3\vegetation_f_exp\Tree\t_Agathis_tall_F.p3d";
		scope=2;
		scopeCurator=2;
		editorCategory="EdCat_Vegetation_exp";
		editorSubcategory="EdSubcat_Tree";
		icon="iconObject_circle";
		destrType="DestructTree";
		cost=0;
		DLC="Expansion";
		accuracy=1000;
		armor=1000;
		nameSound="obj_tree";
	};
	class t_Agathis_wide: t_Agathis_tall
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\t_Agathis_wide.jpg";
		_generalMacro="t_Agathis_wide";
		displayName="$STR_t_Agathis_wide";
		model="\A3\vegetation_f_exp\Tree\t_Agathis_wide_F.p3d";
	};
	class t_Albizia: t_Agathis_tall
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\t_Albizia.jpg";
		_generalMacro="t_Albizia";
		displayName="$STR_t_Albizia";
		model="\A3\vegetation_f_exp\Tree\t_Albizia_F.p3d";
	};
	class t_Cocos_bend: t_Agathis_tall
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\t_Cocos_bend.jpg";
		_generalMacro="t_Cocos_bend";
		displayName="$STR_t_Cocos_bend";
		model="\A3\vegetation_f_exp\Tree\t_Cocos_bend_F.p3d";
		scope=1;
		scopeCurator=0;
	};
	class t_Cocos_small: t_Agathis_tall
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\t_Cocos_small.jpg";
		_generalMacro="t_Cocos_small";
		displayName="$STR_t_Cocos_small";
		model="\A3\vegetation_f_exp\Tree\t_Cocos_small_F.p3d";
		scope=1;
		scopeCurator=0;
	};
	class t_Cocos_tall: t_Agathis_tall
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\t_Cocos_tall.jpg";
		_generalMacro="t_Cocos_tall";
		displayName="$STR_t_Cocos_tall";
		model="\A3\vegetation_f_exp\Tree\t_Cocos_tall_F.p3d";
		scope=1;
		scopeCurator=0;
	};
	class t_CocosNucifera2s_small: t_Agathis_tall
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\t_CocosNucifera2s_small.jpg";
		_generalMacro="t_CocosNucifera2s_small";
		displayName="$STR_t_CocosNucifera2s_small";
		model="\A3\vegetation_f_exp\Tree\t_CocosNucifera2s_small_F.p3d";
	};
	class t_CocosNucifera3s_bend: t_Agathis_tall
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\t_CocosNucifera3s_bend.jpg";
		_generalMacro="t_CocosNucifera3s_bend";
		displayName="$STR_t_CocosNucifera3s_bend";
		model="\A3\vegetation_f_exp\Tree\t_CocosNucifera3s_bend_F.p3d";
	};
	class t_CocosNucifera3s_tall: t_Agathis_tall
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\t_CocosNucifera3s_tall.jpg";
		_generalMacro="t_CocosNucifera3s_tall";
		displayName="$STR_t_CocosNucifera3s_tall";
		model="\A3\vegetation_f_exp\Tree\t_CocosNucifera3s_tall_F.p3d";
	};
	class t_Cyathea: t_Agathis_tall
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\t_Cyathea.jpg";
		_generalMacro="t_Cyathea";
		displayName="$STR_t_Cyathea";
		model="\A3\vegetation_f_exp\Tree\t_Cyathea_F.p3d";
	};
	class t_Ficus_big: t_Agathis_tall
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\t_Ficus_big.jpg";
		_generalMacro="t_Ficus_big";
		displayName="$STR_t_Ficus_big";
		model="\A3\vegetation_f_exp\Tree\t_Ficus_big_F.p3d";
	};
	class t_Ficus_medium: t_Agathis_tall
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\t_Ficus_medium.jpg";
		_generalMacro="t_Ficus_medium";
		displayName="$STR_t_Ficus_medium";
		model="\A3\vegetation_f_exp\Tree\t_Ficus_medium_F.p3d";
	};
	class t_Ficus_small: t_Agathis_tall
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\t_Ficus_small.jpg";
		_generalMacro="t_Ficus_small";
		displayName="$STR_t_Ficus_small";
		model="\A3\vegetation_f_exp\Tree\t_Ficus_small_F.p3d";
	};
	class t_Inocarpus: t_Agathis_tall
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\t_Inocarpus.jpg";
		_generalMacro="t_Inocarpus";
		displayName="$STR_t_Inocarpus";
		model="\A3\vegetation_f_exp\Tree\t_Inocarpus_F.p3d";
		destrType="DestructNo";
	};
	class t_Millettia: t_Agathis_tall
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\t_Millettia.jpg";
		_generalMacro="t_Millettia";
		displayName="$STR_t_Millettia";
		model="\A3\vegetation_f_exp\Tree\t_Millettia_F.p3d";
	};
	class t_Millettia_plantation: t_Agathis_tall
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\t_Millettia_plantation.jpg";
		_generalMacro="t_Millettia_plantation";
		displayName="$STR_t_Millettia_plantation";
		model="\A3\vegetation_f_exp\Tree\t_Millettia_plantation_F.p3d";
	};
	class t_Palaquium: t_Agathis_tall
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\t_Palaquium.jpg";
		_generalMacro="t_Palaquium";
		displayName="$STR_t_Palaquium";
		model="\A3\vegetation_f_exp\Tree\t_Palaquium_F.p3d";
	};
	class t_Pritchardia: t_Agathis_tall
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\t_Pritchardia.jpg";
		_generalMacro="t_Pritchardia";
		displayName="$STR_t_Pritchardia";
		model="\A3\vegetation_f_exp\Tree\t_Pritchardia_F.p3d";
	};
	class t_Rhizophora: t_Agathis_tall
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\t_Rhizophora.jpg";
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.14699998;
			verticalOffsetWorld=0;
			init="''";
		};
		_generalMacro="t_Rhizophora";
		displayName="$STR_t_Rhizophora";
		model="\A3\vegetation_f_exp\Tree\t_Rhizophora_F.p3d";
		destrType="DestructNo";
	};
	class b_Calochlaena: Strategic
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\b_Calochlaena.jpg";
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.24699999;
			verticalOffsetWorld=0;
			init="''";
		};
		_generalMacro="b_Calochlaena";
		displayName="$STR_b_Calochlaena";
		model="\A3\vegetation_f_exp\Shrub\b_Calochlaena_F.p3d";
		scope=2;
		scopeCurator=2;
		editorCategory="EdCat_Vegetation_exp";
		editorSubcategory="EdSubcat_Bush";
		icon="iconObject_circle";
		destrType="DestructTent";
		cost=0;
		DLC="Expansion";
		accuracy=1000;
		armor=500;
		nameSound="obj_bush";
	};
	class b_Cestrum: b_Calochlaena
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\b_Cestrum.jpg";
		_generalMacro="b_Cestrum";
		displayName="$STR_b_Cestrum";
		model="\A3\vegetation_f_exp\Shrub\b_Cestrum_F.p3d";
	};
	class b_Colored_red: b_Calochlaena
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\b_Colored_red.jpg";
		_generalMacro="b_Colored_red";
		displayName="$STR_b_Colored_red";
		model="\A3\vegetation_f_exp\Shrub\b_Colored_red_F.p3d";
	};
	class b_Colored_yellow: b_Calochlaena
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\b_Colored_yellow.jpg";
		_generalMacro="b_Colored_yellow";
		displayName="$STR_b_Colored_yellow";
		model="\A3\vegetation_f_exp\Shrub\b_Colored_yellow_F.p3d";
	};
	class b_Cycas: b_Calochlaena
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\b_Cycas.jpg";
		_generalMacro="b_Cycas";
		displayName="$STR_b_Cycas";
		model="\A3\vegetation_f_exp\Shrub\b_Cycas_F.p3d";
	};
	class b_FicusC2d_tanoa: b_Calochlaena
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=1;
		scopeCurator=0;
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\b_FicusC2d_tanoa.jpg";
		_generalMacro="b_FicusC2d_tanoa";
		displayName="$STR_b_FicusC2d_tanoa";
		model="\A3\vegetation_f_exp\Shrub\b_FicusC2d_tanoa_F.p3d";
	};
	class b_Gardenia_dec_01: b_Calochlaena
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\b_Gardenia_dec_01.jpg";
		_generalMacro="b_Gardenia_dec_01";
		displayName="$STR_b_Gardenia_dec_01";
		model="\A3\vegetation_f_exp\Shrub\b_Gardenia_dec_01_F.p3d";
	};
	class b_Gardenia_dec_02: b_Calochlaena
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\b_Gardenia_dec_02.jpg";
		_generalMacro="b_Gardenia_dec_02";
		displayName="$STR_b_Gardenia_dec_02";
		model="\A3\vegetation_f_exp\Shrub\b_Gardenia_dec_02_F.p3d";
	};
	class b_Gardenia: b_Calochlaena
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\b_Gardenia.jpg";
		_generalMacro="b_Gardenia";
		displayName="$STR_b_Gardenia";
		model="\A3\vegetation_f_exp\Shrub\b_Gardenia_F.p3d";
	};
	class b_Leucaena: b_Calochlaena
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\b_Gardenia.jpg";
		_generalMacro="b_Leucaena";
		displayName="$STR_b_Leucaena";
		model="\A3\vegetation_f_exp\Shrub\b_Leucaena_F.p3d";
	};
	class b_NeriumO2d_tanoa: b_Calochlaena
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\b_NeriumO2d_tanoa.jpg";
		_generalMacro="b_NeriumO2d_tanoa";
		displayName="$STR_b_NeriumO2d_tanoa";
		model="\A3\vegetation_f_exp\Shrub\b_NeriumO2d_tanoa_F.p3d";
	};
	class b_PiperMeth: b_Calochlaena
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\b_PiperMeth.jpg";
		_generalMacro="b_PiperMeth";
		displayName="$STR_b_PiperMeth";
		model="\A3\vegetation_f_exp\Shrub\b_PiperMeth_F.p3d";
	};
	class b_Rhizophora: b_Calochlaena
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\b_Rhizophora.jpg";
		_generalMacro="b_Rhizophora";
		displayName="$STR_b_Rhizophora";
		model="\A3\vegetation_f_exp\Shrub\b_Rhizophora_F.p3d";
	};
	class b_Ginger_3: Strategic
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\b_Ginger_3.jpg";
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.24699999;
			verticalOffsetWorld=0;
			init="''";
		};
		_generalMacro="b_Ginger_3";
		displayName="$STR_b_Ginger_3";
		model="\A3\vegetation_f_exp\Crop\b_Ginger_3_F.p3d";
		scope=2;
		scopeCurator=2;
		editorCategory="EdCat_Vegetation_exp";
		editorSubcategory="EdSubcat_Crop";
		icon="iconObject_circle";
		destrType="DestructTent";
		cost=0;
		DLC="Expansion";
		accuracy=1000;
		armor=500;
		nameSound="obj_bush";
	};
	class b_Ginger_9: b_Ginger_3
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\b_Ginger_9.jpg";
		_generalMacro="b_Ginger_9";
		displayName="$STR_b_Ginger_9";
		model="\A3\vegetation_f_exp\Crop\b_Ginger_9_F.p3d";
	};
	class b_Ginger_20: b_Ginger_3
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\b_Ginger_20.jpg";
		_generalMacro="b_Ginger_20";
		displayName="$STR_b_Ginger_20";
		model="\A3\vegetation_f_exp\Crop\b_Ginger_20_F.p3d";
	};
	class b_Sugarcane_mature_row: b_Ginger_3
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\b_Sugarcane_mature_row.jpg";
		_generalMacro="b_Sugarcane_mature_row";
		displayName="$STR_b_Sugarcane_mature_row";
		model="\A3\vegetation_f_exp\Crop\b_Sugarcane_mature_row_F.p3d";
	};
	class b_Sugarcane_sapling_row: b_Ginger_3
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\b_Sugarcane_sapling_row.jpg";
		_generalMacro="b_Sugarcane_sapling_row";
		displayName="$STR_b_Sugarcane_sapling_row";
		model="\A3\vegetation_f_exp\Crop\b_Sugarcane_sapling_row_F.p3d";
	};
	class b_Sugarcane_sapling_single: b_Ginger_3
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\b_Sugarcane_sapling_single.jpg";
		_generalMacro="b_Sugarcane_sapling_single";
		displayName="$STR_b_Sugarcane_sapling_single";
		model="\A3\vegetation_f_exp\Crop\b_Sugarcane_sapling_single_F.p3d";
	};
	class t_Banana: b_Ginger_3
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\t_Banana.jpg";
		_generalMacro="t_Banana";
		displayName="$STR_t_Banana";
		model="\A3\vegetation_f_exp\Crop\t_Banana_F.p3d";
		destrType="DestructTree";
	};
	class t_Banana_wild: b_Ginger_3
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\t_Banana_wild.jpg";
		_generalMacro="t_Banana_wild";
		displayName="$STR_t_Banana_wild";
		model="\A3\vegetation_f_exp\Crop\t_Banana_wild_F.p3d";
		destrType="DestructTree";
	};
	class t_Cacao_ripe: b_Ginger_3
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\t_Cacao_ripe.jpg";
		_generalMacro="t_Cacao_ripe";
		displayName="$STR_t_Cacao_ripe";
		model="\A3\vegetation_f_exp\Crop\t_Cacao_ripe_F.p3d";
		destrType="DestructTree";
	};
	class c_rock_stones: Strategic
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\c_rock_stones.jpg";
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.24699999;
			verticalOffsetWorld=0;
			init="''";
		};
		_generalMacro="c_rock_stones";
		displayName="$STR_c_rock_stones";
		model="\A3\vegetation_f_exp\clutter\cliff\c_rock_stones.p3d";
		scope=2;
		scopeCurator=2;
		editorCategory="EdCat_Vegetation_exp";
		editorSubcategory="EdSubcat_Clutter";
		icon="iconObject_1x1";
		destrType="DestructNo";
		DLC="Expansion";
		nameSound="clutter";
	};
	class c_forest_BiglLeaves: c_rock_stones
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\c_forest_BiglLeaves.jpg";
		_generalMacro="c_forest_BiglLeaves";
		displayName="$STR_c_forest_BiglLeaves";
		model="A3\vegetation_f_exp\clutter\forest\c_forest_BiglLeaves.p3d";
	};
	class c_forest_BiglLeaves2: c_rock_stones
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\c_forest_BiglLeaves2.jpg";
		_generalMacro="c_forest_BiglLeaves2";
		displayName="$STR_c_forest_BiglLeaves2";
		model="A3\vegetation_f_exp\clutter\forest\c_forest_BiglLeaves2.p3d";
	};
	class c_forest_fern: c_rock_stones
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\c_forest_fern.jpg";
		_generalMacro="c_forest_fern";
		displayName="$STR_c_forest_fern";
		model="A3\vegetation_f_exp\clutter\forest\c_forest_fern.p3d";
	};
	class c_forest_roots: c_rock_stones
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\c_forest_roots.jpg";
		_generalMacro="c_forest_roots";
		displayName="$STR_c_forest_roots";
		model="A3\vegetation_f_exp\clutter\forest\c_forest_roots.p3d";
	};
	class c_forest_violet_leaves: c_rock_stones
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\c_forest_violet_leaves.jpg";
		_generalMacro="c_forest_violet_leaves";
		displayName="$STR_c_forest_violet_leaves";
		model="A3\vegetation_f_exp\clutter\forest\c_forest_violet_leaves.p3d";
	};
	class c_forest_violet_leaves2: c_rock_stones
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=1;
		scopeCurator=0;
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\c_forest_violet_leaves2.jpg";
		_generalMacro="c_forest_violet_leaves2";
		displayName="$STR_c_forest_violet_leaves2";
		model="A3\vegetation_f_exp\clutter\forest\c_forest_violet_leaves2.p3d";
	};
	class c_forest_violet_single: c_rock_stones
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\c_forest_violet_single.jpg";
		_generalMacro="c_forest_violet_single";
		displayName="$STR_c_forest_violet_single";
		model="A3\vegetation_f_exp\clutter\forest\c_forest_violet_single.p3d";
	};
	class c_Grass_leaf_big: Strategic
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\c_Grass_leaf_big.jpg";
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.14699998;
			verticalOffsetWorld=0;
			init="''";
		};
		_generalMacro="c_Grass_leaf_big";
		displayName="$STR_c_Grass_leaf_big";
		model="\A3\vegetation_f_exp\clutter\grass\c_Grass_leaf_big.p3d";
		scope=2;
		scopeCurator=2;
		editorCategory="EdCat_Vegetation_exp";
		editorSubcategory="EdSubcat_Clutter";
		icon="iconObject_1x1";
		destrType="DestructNo";
		DLC="Expansion";
		nameSound="";
	};
	class c_Grass_Leaves_coltsfoot: c_rock_stones
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\c_Grass_Leaves_coltsfoot.jpg";
		_generalMacro="c_Grass_Leaves_coltsfoot";
		displayName="$STR_c_Grass_Leaves_coltsfoot";
		model="\A3\vegetation_f_exp\clutter\grass\c_Grass_Leaves_coltsfoot.p3d";
	};
	class c_Grass_mimosa: c_rock_stones
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\c_Grass_mimosa.jpg";
		_generalMacro="c_Grass_mimosa";
		displayName="$STR_c_Grass_mimosa";
		model="\A3\vegetation_f_exp\clutter\grass\c_Grass_mimosa.p3d";
	};
	class c_Grass_nettle: c_rock_stones
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\c_Grass_nettle.jpg";
		_generalMacro="c_Grass_nettle";
		displayName="$STR_c_Grass_nettle";
		model="\A3\vegetation_f_exp\clutter\grass\c_Grass_nettle.p3d";
	};
	class c_Grass_short_bunch: c_rock_stones
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\c_Grass_short_bunch.jpg";
		_generalMacro="c_Grass_short_bunch";
		displayName="$STR_c_Grass_short_bunch";
		model="\A3\vegetation_f_exp\clutter\grass\c_Grass_short_bunch.p3d";
	};
	class c_Grass_short_leaf: c_rock_stones
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\c_Grass_short_leaf.jpg";
		_generalMacro="c_Grass_short_leaf";
		displayName="$STR_c_Grass_short_leaf";
		model="\A3\vegetation_f_exp\clutter\grass\c_Grass_short_leaf.p3d";
	};
	class c_Grass_short_mimosa: c_rock_stones
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\c_Grass_short_mimosa.jpg";
		_generalMacro="c_Grass_short_mimosa";
		displayName="$STR_c_Grass_short_mimosa";
		model="\A3\vegetation_f_exp\clutter\grass\c_Grass_short_mimosa.p3d";
	};
	class c_Grass_short_nettle: c_rock_stones
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\c_Grass_short_nettle.jpg";
		_generalMacro="c_Grass_short_nettle";
		displayName="$STR_c_Grass_short_nettle";
		model="\A3\vegetation_f_exp\clutter\grass\c_Grass_short_nettle.p3d";
	};
	class c_Grass_short_small: c_rock_stones
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\c_Grass_short_small.jpg";
		_generalMacro="c_Grass_short_small";
		displayName="$STR_c_Grass_short_small";
		model="\A3\vegetation_f_exp\clutter\grass\c_Grass_short_small.p3d";
	};
	class c_Grass_Tropic: c_rock_stones
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\c_Grass_Tropic.jpg";
		_generalMacro="c_Grass_Tropic";
		displayName="$STR_c_Grass_Tropic";
		model="\A3\vegetation_f_exp\clutter\grass\c_Grass_Tropic.p3d";
	};
	class c_GrassBunch_HI: c_rock_stones
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\c_GrassBunch_HI.jpg";
		_generalMacro="c_GrassBunch_HI";
		displayName="$STR_c_GrassBunch_HI";
		model="\A3\vegetation_f_exp\clutter\grass\c_GrassBunch_HI.p3d";
	};
	class c_GrassBunch_LO: c_rock_stones
	{
		scope=1;
		scopeCurator=0;
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\c_GrassBunch_LO.jpg";
		_generalMacro="c_GrassBunch_LO";
		displayName="$STR_c_GrassBunch_LO";
		model="\A3\vegetation_f_exp\clutter\grass\c_GrassBunch_LO.p3d";
	};
};
