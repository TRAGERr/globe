class CfgPatches
{
	class A3_Vegetation_F_Argo_expEden
	{
		author="Trager";
		name="O&T Expansion Eden - Malden Flora";
		url="https://steamcommunity.com/workshop/filedetails/?id=1923321700";
		requiredAddons[]=
		{
			"A3_expEden"
		};
		requiredVersion=0.1;
		units[]=
		{
			"b_OpuntiaFicusIndica3s",
			"b_Vitis_vinifera",
			"t_Cupressus_stricta_2S",
			"t_Cupressus_stricta_3S",
			"t_Ficus_3D",
			"t_PhoenixRupicola1s",
			"t_PhoenixRupicola3s"
		};
		weapons[]={};
	};
};
class CfgEditorCategories
{
	class EdCat_Vegetation_Argo
	{
		displayName="$STR_EdCat_Vegetation_Enoch";
	};
};
class CfgVehicles
{
	class Strategic;
	class b_OpuntiaFicusIndica3s: Strategic
	{
		author="$STR_A3_Bohemia_Interactive";
		mapSize=0.69999999;
		icon="iconObject_circle";
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.24699999;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\b_OpuntiaFicusIndica3s.jpg";
		_generalMacro="b_OpuntiaFicusIndica3s";
		displayName="$STR_b_OpuntiaFicusIndica3s";
		model="\a3\vegetation_f_argo\Bushes\b_OpuntiaFicusIndica3s_F.p3d";
		editorSubcategory="EdSubcat_Bush";
		nameSound="obj_bush";
		editorCategory="EdCat_Vegetation_Argo";
		affectedByWind=1;
		accuracy=1000;
		armor=500;
		destrType="DestructTent";
		cost=0;
		DLC="Argo";
		scope=2;
		scopeCurator=2;
	};
	class b_Vitis_vinifera: b_OpuntiaFicusIndica3s
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\b_Vitis_vinifera.jpg";
		_generalMacro="b_Vitis_vinifera";
		displayName="$STR_b_Vitis_vinifera";
		model="\a3\vegetation_f_argo\Bushes\b_Vitis_vinifera_F.p3d";
	};
	class t_Cupressus_stricta_2S: Strategic
	{
		author="$STR_A3_Bohemia_Interactive";
		mapSize=0.69999999;
		icon="iconObject_circle";
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.24699999;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\t_Cupressus_stricta_2S.jpg";
		_generalMacro="t_Cupressus_stricta_2S";
		displayName="$STR_t_Cupressus_stricta_2S";
		model="\a3\vegetation_f_argo\Trees\t_Cupressus_stricta_2S_F.p3d";
		editorCategory="EdCat_Vegetation_Argo";
		editorSubcategory="EdSubcat_Tree";
		destrType="DestructTree";
		nameSound="obj_tree";
		cost=0;
		DLC="Argo";
		scope=2;
		scopeCurator=2;
		affectedByWind=1;
		accuracy=1000;
		armor=1000;
	};
	class t_Cupressus_stricta_3S: t_Cupressus_stricta_2S
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\t_Cupressus_stricta_3S.jpg";
		_generalMacro="t_Cupressus_stricta_3S";
		displayName="$STR_t_Cupressus_stricta_3S";
		model="\a3\vegetation_f_argo\Trees\t_Cupressus_stricta_3S_F.p3d";
	};
	class t_Ficus_3D: t_Cupressus_stricta_2S
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\t_Ficus_3D.jpg";
		_generalMacro="t_Ficus_3D";
		displayName="$STR_t_Ficus_3D";
		model="\a3\vegetation_f_argo\Trees\t_Ficus_3D_F.p3d";
	};
	class t_PhoenixRupicola1s: t_Cupressus_stricta_2S
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\t_PhoenixRupicola1s.jpg";
		_generalMacro="t_PhoenixRupicola1s";
		displayName="$STR_t_PhoenixRupicola1s";
		model="\a3\vegetation_f_argo\Trees\t_PhoenixRupicola1s_F.p3d";
		icon="iconObject_1x2";
	};
	class t_PhoenixRupicola3s: t_Cupressus_stricta_2S
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\a3\editorpreviews_f_expEden\data\cfgVehicles\t_PhoenixRupicola3s.jpg";
		_generalMacro="t_PhoenixRupicola3s";
		displayName="$STR_t_PhoenixRupicola3s";
		model="\a3\vegetation_f_argo\Trees\t_PhoenixRupicola3s_F.p3d";
		icon="iconObject_1x3";
	};
};
