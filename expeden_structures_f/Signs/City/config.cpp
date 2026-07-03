class CfgPatches
{
	class Structures_Globe_Signs_City
	{
		addonRootClass="A3_Structures_F_Globe";
		requiredAddons[]=
		{
			"Structures_Globe_Signs"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Signs_base_F;
	class RoadSign_City_Base: Signs_base_F
	{
		author="O&T Expansion Eden";
		_generalMacro="RoadSign_City_Base";
		icon="iconObject_2x1";
		editorCategory="EdCat_Signs";
		editorSubcategory="EdSubcat_RoadSigns_City";
		armor=100;
		destrType="DestructWall";
		keepHorizontalPlacement=1;
	};
	class RoadSign_City_Livonia_Adamow: RoadSign_City_Base
	{
		mapSize=0.72299999;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.412;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Livonia_Adamow.jpg";
		_generalMacro="RoadSign_City_Livonia_Adamow";
		scope=2;
		scopeCurator=0;
		editorCategory="EdCat_Structures_Enoch";
		displayName="$STR_Globe_RoadSign_City_Livonia_Adamow";
		model="\a3\structures_f_enoch\Signs\City\Sign_Adamow_start.p3d";
	};
	class RoadSign_City_Livonia_Adamow_end: RoadSign_City_Livonia_Adamow
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Livonia_Adamow_end.jpg";
		_generalMacro="RoadSign_City_Livonia_Adamow_end";
		displayName="$STR_Globe_RoadSign_City_Livonia_Adamow_end";
		model="\a3\structures_f_enoch\Signs\City\Sign_Adamow_end.p3d";
	};
	class RoadSign_City_Livonia_Bielawa: RoadSign_City_Livonia_Adamow
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Livonia_Bielawa.jpg";
		_generalMacro="RoadSign_City_Livonia_Bielawa";
		displayName="$STR_Globe_RoadSign_City_Livonia_Bielawa";
		model="\a3\structures_f_enoch\Signs\City\Sign_Bielawa_start.p3d";
	};
	class RoadSign_City_Livonia_Bielawa_end: RoadSign_City_Livonia_Adamow
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Livonia_Bielawa_end.jpg";
		_generalMacro="RoadSign_City_Livonia_Bielawa_end";
		displayName="$STR_Globe_RoadSign_City_Livonia_Bielawa_end";
		model="\a3\structures_f_enoch\Signs\City\Sign_Bielawa_end.p3d";
	};
	class RoadSign_City_Livonia_Borek: RoadSign_City_Livonia_Adamow
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Livonia_Borek.jpg";
		_generalMacro="RoadSign_City_Livonia_Borek";
		displayName="$STR_Globe_RoadSign_City_Livonia_Borek";
		model="\a3\structures_f_enoch\Signs\City\Sign_Borek_start.p3d";
	};
	class RoadSign_City_Livonia_Borek_end: RoadSign_City_Livonia_Adamow
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Livonia_Borek_end.jpg";
		_generalMacro="RoadSign_City_Livonia_Borek_end";
		displayName="$STR_Globe_RoadSign_City_Livonia_Borek_end";
		model="\a3\structures_f_enoch\Signs\City\Sign_Borek_end.p3d";
	};
	class RoadSign_City_Livonia_Brena: RoadSign_City_Livonia_Adamow
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Livonia_Brena.jpg";
		_generalMacro="RoadSign_City_Livonia_Brena";
		displayName="$STR_Globe_RoadSign_City_Livonia_Brena";
		model="\a3\structures_f_enoch\Signs\City\Sign_Brena_start.p3d";
	};
	class RoadSign_City_Livonia_Brena_end: RoadSign_City_Livonia_Adamow
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Livonia_Brena_end.jpg";
		_generalMacro="RoadSign_City_Livonia_Brena_end";
		displayName="$STR_Globe_RoadSign_City_Livonia_Brena_end";
		model="\a3\structures_f_enoch\Signs\City\Sign_Brena_end.p3d";
	};
	class RoadSign_City_Livonia_Dolnik: RoadSign_City_Livonia_Adamow
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Livonia_Dolnik.jpg";
		_generalMacro="RoadSign_City_Livonia_Dolnik";
		displayName="$STR_Globe_RoadSign_City_Livonia_Dolnik";
		model="\a3\structures_f_enoch\Signs\City\Sign_Dolnik_start.p3d";
	};
	class RoadSign_City_Livonia_Dolnik_end: RoadSign_City_Livonia_Adamow
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Livonia_Dolnik_end.jpg";
		_generalMacro="RoadSign_City_Livonia_Dolnik_end";
		displayName="$STR_Globe_RoadSign_City_Livonia_Dolnik_end";
		model="\a3\structures_f_enoch\Signs\City\Sign_Dolnik_end.p3d";
	};
	class RoadSign_City_Livonia_Gieraltow: RoadSign_City_Livonia_Adamow
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Livonia_Gieraltow.jpg";
		_generalMacro="RoadSign_City_Livonia_Gieraltow";
		displayName="$STR_Globe_RoadSign_City_Livonia_Gieraltow";
		model="\a3\structures_f_enoch\Signs\City\Sign_Gieraltow_start.p3d";
	};
	class RoadSign_City_Livonia_Gieraltow_end: RoadSign_City_Livonia_Adamow
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Livonia_Gieraltow_end.jpg";
		_generalMacro="RoadSign_City_Livonia_Gieraltow_end";
		displayName="$STR_Globe_RoadSign_City_Livonia_Gieraltow_end";
		model="\a3\structures_f_enoch\Signs\City\Sign_Gieraltow_end.p3d";
	};
	class RoadSign_City_Livonia_Gliniska: RoadSign_City_Livonia_Adamow
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Livonia_Gliniska.jpg";
		_generalMacro="RoadSign_City_Livonia_Gliniska";
		displayName="$STR_Globe_RoadSign_City_Livonia_Gliniska";
		model="\a3\structures_f_enoch\Signs\City\Sign_Gliniska_start.p3d";
	};
	class RoadSign_City_Livonia_Gliniska_end: RoadSign_City_Livonia_Adamow
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Livonia_Gliniska_end.jpg";
		_generalMacro="RoadSign_City_Livonia_Gliniska_end";
		displayName="$STR_Globe_RoadSign_City_Livonia_Gliniska_end";
		model="\a3\structures_f_enoch\Signs\City\Sign_Gliniska_end.p3d";
	};
	class RoadSign_City_Livonia_Grabin: RoadSign_City_Livonia_Adamow
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Livonia_Grabin.jpg";
		_generalMacro="RoadSign_City_Livonia_Grabin";
		displayName="$STR_Globe_RoadSign_City_Livonia_Grabin";
		model="\a3\structures_f_enoch\Signs\City\Sign_Grabin_start.p3d";
	};
	class RoadSign_City_Livonia_Grabin_end: RoadSign_City_Livonia_Adamow
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Livonia_Grabin_end.jpg";
		_generalMacro="RoadSign_City_Livonia_Grabin_end";
		displayName="$STR_Globe_RoadSign_City_Livonia_Grabin_end";
		model="\a3\structures_f_enoch\Signs\City\Sign_Grabin_end.p3d";
	};
	class RoadSign_City_Livonia_Huta: RoadSign_City_Livonia_Adamow
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Livonia_Huta.jpg";
		_generalMacro="RoadSign_City_Livonia_Huta";
		displayName="$STR_Globe_RoadSign_City_Livonia_Huta";
		model="\a3\structures_f_enoch\Signs\City\Sign_Huta_start.p3d";
	};
	class RoadSign_City_Livonia_Huta_end: RoadSign_City_Livonia_Adamow
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Livonia_Huta_end.jpg";
		_generalMacro="RoadSign_City_Livonia_Huta_end";
		displayName="$STR_Globe_RoadSign_City_Livonia_Huta_end";
		model="\a3\structures_f_enoch\Signs\City\Sign_Huta_end.p3d";
	};
	class RoadSign_City_Livonia_Karlin: RoadSign_City_Livonia_Adamow
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Livonia_Karlin.jpg";
		_generalMacro="RoadSign_City_Livonia_Karlin";
		displayName="$STR_Globe_RoadSign_City_Livonia_Karlin";
		model="\a3\structures_f_enoch\Signs\City\Sign_Karlin_start.p3d";
	};
	class RoadSign_City_Livonia_Karlin_end: RoadSign_City_Livonia_Adamow
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Livonia_Karlin_end.jpg";
		_generalMacro="RoadSign_City_Livonia_Karlin_end";
		displayName="$STR_Globe_RoadSign_City_Livonia_Karlin_end";
		model="\a3\structures_f_enoch\Signs\City\Sign_Karlin_end.p3d";
	};
	class RoadSign_City_Livonia_Kolembrody: RoadSign_City_Livonia_Adamow
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Livonia_Kolembrody.jpg";
		_generalMacro="RoadSign_City_Livonia_Kolembrody";
		displayName="$STR_Globe_RoadSign_City_Livonia_Kolembrody";
		model="\a3\structures_f_enoch\Signs\City\Sign_Kolembrody_start.p3d";
	};
	class RoadSign_City_Livonia_Kolembrody_end: RoadSign_City_Livonia_Adamow
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Livonia_Kolembrody_end.jpg";
		_generalMacro="RoadSign_City_Livonia_Kolembrody_end";
		displayName="$STR_Globe_RoadSign_City_Livonia_Kolembrody_end";
		model="\a3\structures_f_enoch\Signs\City\Sign_Kolembrody_end.p3d";
	};
	class RoadSign_City_Livonia_Lembork: RoadSign_City_Livonia_Adamow
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Livonia_Lembork.jpg";
		_generalMacro="RoadSign_City_Livonia_Lembork";
		displayName="$STR_Globe_RoadSign_City_Livonia_Lembork";
		model="\a3\structures_f_enoch\Signs\City\Sign_Lembork_start.p3d";
	};
	class RoadSign_City_Livonia_Lembork_end: RoadSign_City_Livonia_Adamow
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Livonia_Lembork_end.jpg";
		_generalMacro="RoadSign_City_Livonia_Lembork_end";
		displayName="$STR_Globe_RoadSign_City_Livonia_Lembork_end";
		model="\a3\structures_f_enoch\Signs\City\Sign_Lembork_end.p3d";
	};
	class RoadSign_City_Livonia_Lipina: RoadSign_City_Livonia_Adamow
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Livonia_Lipina.jpg";
		_generalMacro="RoadSign_City_Livonia_Lipina";
		displayName="$STR_Globe_RoadSign_City_Livonia_Lipina";
		model="\a3\structures_f_enoch\Signs\City\Sign_Lipina_start.p3d";
	};
	class RoadSign_City_Livonia_Lipina_end: RoadSign_City_Livonia_Adamow
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Livonia_Lipina_end.jpg";
		_generalMacro="RoadSign_City_Livonia_Lipina_end";
		displayName="$STR_Globe_RoadSign_City_Livonia_Lipina_end";
		model="\a3\structures_f_enoch\Signs\City\Sign_Lipina_end.p3d";
	};
	class RoadSign_City_Livonia_Lomnica: RoadSign_City_Livonia_Adamow
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Livonia_Lomnica.jpg";
		_generalMacro="RoadSign_City_Livonia_Lomnica";
		displayName="$STR_Globe_RoadSign_City_Livonia_Lomnica";
		model="\a3\structures_f_enoch\Signs\City\Sign_Lomnica_start.p3d";
	};
	class RoadSign_City_Livonia_Lomnica_end: RoadSign_City_Livonia_Adamow
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Livonia_Lomnica_end.jpg";
		_generalMacro="RoadSign_City_Livonia_Lomnica_end";
		displayName="$STR_Globe_RoadSign_City_Livonia_Lomnica_end";
		model="\a3\structures_f_enoch\Signs\City\Sign_Lomnica_end.p3d";
	};
	class RoadSign_City_Livonia_Lukow: RoadSign_City_Livonia_Adamow
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Livonia_Lukow.jpg";
		_generalMacro="RoadSign_City_Livonia_Lukow";
		displayName="$STR_Globe_RoadSign_City_Livonia_Lukow";
		model="\a3\structures_f_enoch\Signs\City\Sign_Lukow_start.p3d";
	};
	class RoadSign_City_Livonia_Lukow_end: RoadSign_City_Livonia_Adamow
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Livonia_Lukow_end.jpg";
		_generalMacro="RoadSign_City_Livonia_Lukow_end";
		displayName="$STR_Globe_RoadSign_City_Livonia_Lukow_end";
		model="\a3\structures_f_enoch\Signs\City\Sign_Lukow_end.p3d";
	};
	class RoadSign_City_Livonia_Majdan: RoadSign_City_Livonia_Adamow
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Livonia_Majdan.jpg";
		_generalMacro="RoadSign_City_Livonia_Majdan";
		displayName="$STR_Globe_RoadSign_City_Livonia_Majdan";
		model="\a3\structures_f_enoch\Signs\City\Sign_Majdan_start.p3d";
	};
	class RoadSign_City_Livonia_Majdan_end: RoadSign_City_Livonia_Adamow
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Livonia_Majdan_end.jpg";
		_generalMacro="RoadSign_City_Livonia_Majdan_end";
		displayName="$STR_Globe_RoadSign_City_Livonia_Majdan_end";
		model="\a3\structures_f_enoch\Signs\City\Sign_Majdan_end.p3d";
	};
	class RoadSign_City_Livonia_Muratyn: RoadSign_City_Livonia_Adamow
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Livonia_Muratyn.jpg";
		_generalMacro="RoadSign_City_Livonia_Muratyn";
		displayName="$STR_Globe_RoadSign_City_Livonia_Muratyn";
		model="\a3\structures_f_enoch\Signs\City\Sign_Muratyn_start.p3d";
	};
	class RoadSign_City_Livonia_Muratyn_end: RoadSign_City_Livonia_Adamow
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Livonia_Muratyn_end.jpg";
		_generalMacro="RoadSign_City_Livonia_Muratyn_end";
		displayName="$STR_Globe_RoadSign_City_Livonia_Muratyn_end";
		model="\a3\structures_f_enoch\Signs\City\Sign_Muratyn_end.p3d";
	};
	class RoadSign_City_Livonia_Nadbor: RoadSign_City_Livonia_Adamow
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Livonia_Nadbor.jpg";
		_generalMacro="RoadSign_City_Livonia_Nadbor";
		displayName="$STR_Globe_RoadSign_City_Livonia_Nadbor";
		model="\a3\structures_f_enoch\Signs\City\Sign_Nadbor_start.p3d";
	};
	class RoadSign_City_Livonia_Nadbor_end: RoadSign_City_Livonia_Adamow
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Livonia_Nadbor_end.jpg";
		_generalMacro="RoadSign_City_Livonia_Nadbor_end";
		displayName="$STR_Globe_RoadSign_City_Livonia_Nadbor_end";
		model="\a3\structures_f_enoch\Signs\City\Sign_Nadbor_end.p3d";
	};
	class RoadSign_City_Livonia_Olszanka: RoadSign_City_Livonia_Adamow
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Livonia_Olszanka.jpg";
		_generalMacro="RoadSign_City_Livonia_Olszanka";
		displayName="$STR_Globe_RoadSign_City_Livonia_Olszanka";
		model="\a3\structures_f_enoch\Signs\City\Sign_Olszanka_start.p3d";
	};
	class RoadSign_City_Livonia_Olszanka_end: RoadSign_City_Livonia_Adamow
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Livonia_Olszanka_end.jpg";
		_generalMacro="RoadSign_City_Livonia_Olszanka_end";
		displayName="$STR_Globe_RoadSign_City_Livonia_Olszanka_end";
		model="\a3\structures_f_enoch\Signs\City\Sign_Olszanka_end.p3d";
	};
	class RoadSign_City_Livonia_Polana: RoadSign_City_Livonia_Adamow
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Livonia_Polana.jpg";
		_generalMacro="RoadSign_City_Livonia_Polana";
		displayName="$STR_Globe_RoadSign_City_Livonia_Polana";
		model="\a3\structures_f_enoch\Signs\City\Sign_Polana_start.p3d";
	};
	class RoadSign_City_Livonia_Polana_end: RoadSign_City_Livonia_Adamow
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Livonia_Polana_end.jpg";
		_generalMacro="RoadSign_City_Livonia_Polana_end";
		displayName="$STR_Globe_RoadSign_City_Livonia_Polana_end";
		model="\a3\structures_f_enoch\Signs\City\Sign_Polana_end.p3d";
	};
	class RoadSign_City_Livonia_Radacz: RoadSign_City_Livonia_Adamow
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Livonia_Radacz.jpg";
		_generalMacro="RoadSign_City_Livonia_Radacz";
		displayName="$STR_Globe_RoadSign_City_Livonia_Radacz";
		model="\a3\structures_f_enoch\Signs\City\Sign_Radacz_start.p3d";
	};
	class RoadSign_City_Livonia_Radacz_end: RoadSign_City_Livonia_Adamow
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Livonia_Radacz_end.jpg";
		_generalMacro="RoadSign_City_Livonia_Radacz_end";
		displayName="$STR_Globe_RoadSign_City_Livonia_Radacz_end";
		model="\a3\structures_f_enoch\Signs\City\Sign_Radacz_end.p3d";
	};
	class RoadSign_City_Livonia_Radunin: RoadSign_City_Livonia_Adamow
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Livonia_Radunin.jpg";
		_generalMacro="RoadSign_City_Livonia_Radunin";
		displayName="$STR_Globe_RoadSign_City_Livonia_Radunin";
		model="\a3\structures_f_enoch\Signs\City\Sign_Radunin_start.p3d";
	};
	class RoadSign_City_Livonia_Radunin_end: RoadSign_City_Livonia_Adamow
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Livonia_Radunin_end.jpg";
		_generalMacro="RoadSign_City_Livonia_Radunin_end";
		displayName="$STR_Globe_RoadSign_City_Livonia_Radunin_end";
		model="\a3\structures_f_enoch\Signs\City\Sign_Radunin_end.p3d";
	};
	class RoadSign_City_Livonia_Roztoka: RoadSign_City_Livonia_Adamow
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Livonia_Roztoka.jpg";
		_generalMacro="RoadSign_City_Livonia_Roztoka";
		displayName="$STR_Globe_RoadSign_City_Livonia_Roztoka";
		model="\a3\structures_f_enoch\Signs\City\Sign_Roztoka_start.p3d";
	};
	class RoadSign_City_Livonia_Roztoka_end: RoadSign_City_Livonia_Adamow
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Livonia_Roztoka_end.jpg";
		_generalMacro="RoadSign_City_Livonia_Roztoka_end";
		displayName="$STR_Globe_RoadSign_City_Livonia_Roztoka_end";
		model="\a3\structures_f_enoch\Signs\City\Sign_Roztoka_end.p3d";
	};
	class RoadSign_City_Livonia_Sitnik: RoadSign_City_Livonia_Adamow
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Livonia_Sitnik.jpg";
		_generalMacro="RoadSign_City_Livonia_Sitnik";
		displayName="$STR_Globe_RoadSign_City_Livonia_Sitnik";
		model="\a3\structures_f_enoch\Signs\City\Sign_Sitnik_start.p3d";
	};
	class RoadSign_City_Livonia_Sitnik_end: RoadSign_City_Livonia_Adamow
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Livonia_Sitnik_end.jpg";
		_generalMacro="RoadSign_City_Livonia_Sitnik_end";
		displayName="$STR_Globe_RoadSign_City_Livonia_Sitnik_end";
		model="\a3\structures_f_enoch\Signs\City\Sign_Sitnik_end.p3d";
	};
	class RoadSign_City_Livonia_Sobotka: RoadSign_City_Livonia_Adamow
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Livonia_Sobotka.jpg";
		_generalMacro="RoadSign_City_Livonia_Sobotka";
		displayName="$STR_Globe_RoadSign_City_Livonia_Sobotka";
		model="\a3\structures_f_enoch\Signs\City\Sign_Sobotka_start.p3d";
	};
	class RoadSign_City_Livonia_Sobotka_end: RoadSign_City_Livonia_Adamow
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Livonia_Sobotka_end.jpg";
		_generalMacro="RoadSign_City_Livonia_Sobotka_end";
		displayName="$STR_Globe_RoadSign_City_Livonia_Sobotka_end";
		model="\a3\structures_f_enoch\Signs\City\Sign_Sobotka_end.p3d";
	};
	class RoadSign_City_Livonia_Tarnow: RoadSign_City_Livonia_Adamow
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Livonia_Tarnow.jpg";
		_generalMacro="RoadSign_City_Livonia_Tarnow";
		displayName="$STR_Globe_RoadSign_City_Livonia_Tarnow";
		model="\a3\structures_f_enoch\Signs\City\Sign_Tarnow_start.p3d";
	};
	class RoadSign_City_Livonia_Tarnow_end: RoadSign_City_Livonia_Adamow
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Livonia_Tarnow_end.jpg";
		_generalMacro="RoadSign_City_Livonia_Tarnow_end";
		displayName="$STR_Globe_RoadSign_City_Livonia_Tarnow_end";
		model="\a3\structures_f_enoch\Signs\City\Sign_Tarnow_end.p3d";
	};
	class RoadSign_City_Livonia_Topolin: RoadSign_City_Livonia_Adamow
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Livonia_Topolin.jpg";
		_generalMacro="RoadSign_City_Livonia_Topolin";
		displayName="$STR_Globe_RoadSign_City_Livonia_Topolin";
		model="\a3\structures_f_enoch\Signs\City\Sign_Topolin_start.p3d";
	};
	class RoadSign_City_Livonia_Topolin_end: RoadSign_City_Livonia_Adamow
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Livonia_Topolin_end.jpg";
		_generalMacro="RoadSign_City_Livonia_Topolin_end";
		displayName="$STR_Globe_RoadSign_City_Livonia_Topolin_end";
		model="\a3\structures_f_enoch\Signs\City\Sign_Topolin_end.p3d";
	};
	class RoadSign_City_Livonia_Wrzeszcz: RoadSign_City_Livonia_Adamow
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Livonia_Wrzeszcz.jpg";
		_generalMacro="RoadSign_City_Livonia_Wrzeszcz";
		displayName="$STR_Globe_RoadSign_City_Livonia_Wrzeszcz";
		model="\a3\structures_f_enoch\Signs\City\Sign_Wrzeszcz_start.p3d";
	};
	class RoadSign_City_Livonia_Wrzeszcz_end: RoadSign_City_Livonia_Adamow
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Livonia_Wrzeszcz_end.jpg";
		_generalMacro="RoadSign_City_Livonia_Wrzeszcz_end";
		displayName="$STR_Globe_RoadSign_City_Livonia_Wrzeszcz_end";
		model="\a3\structures_f_enoch\Signs\City\Sign_Wrzeszcz_end.p3d";
	};
	class RoadSign_City_Livonia_Zalesie: RoadSign_City_Livonia_Adamow
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Livonia_Zalesie.jpg";
		_generalMacro="RoadSign_City_Livonia_Zalesie";
		displayName="$STR_Globe_RoadSign_City_Livonia_Zalesie";
		model="\a3\structures_f_enoch\Signs\City\Sign_Zalesie_start.p3d";
	};
	class RoadSign_City_Livonia_Zalesie_end: RoadSign_City_Livonia_Adamow
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Livonia_Zalesie_end.jpg";
		_generalMacro="RoadSign_City_Livonia_Zalesie_end";
		displayName="$STR_Globe_RoadSign_City_Livonia_Zalesie_end";
		model="\a3\structures_f_enoch\Signs\City\Sign_Zalesie_end.p3d";
	};
	class RoadSign_City_Livonia_Zapadlisko: RoadSign_City_Livonia_Adamow
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Livonia_Zapadlisko.jpg";
		_generalMacro="RoadSign_City_Livonia_Zapadlisko";
		displayName="$STR_Globe_RoadSign_City_Livonia_Zapadlisko";
		model="\a3\structures_f_enoch\Signs\City\Sign_Zapadlisko_start.p3d";
	};
	class RoadSign_City_Livonia_Zapadlisko_end: RoadSign_City_Livonia_Adamow
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Livonia_Zapadlisko_end.jpg";
		_generalMacro="RoadSign_City_Livonia_Zapadlisko_end";
		displayName="$STR_Globe_RoadSign_City_Livonia_Zapadlisko_end";
		model="\a3\structures_f_enoch\Signs\City\Sign_Zapadlisko_end.p3d";
	};
	class RoadSign_City_Altis_01: RoadSign_City_Base
	{
		mapSize=0.72299999;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.412;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_01.jpg";
		_generalMacro="RoadSign_City_Altis_01";
		scope=2;
		scopeCurator=0;
		editorCategory="EdCat_Structures_Altis";
		displayName="$STR_Globe_RoadSign_City_Altis_01";
		model="\a3\signs_f\signs\signs_abdera_start.p3d";
	};
	class RoadSign_City_Altis_02: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_02.jpg";
		_generalMacro="RoadSign_City_Altis_02";
		displayName="$STR_Globe_RoadSign_City_Altis_02";
		model="\a3\signs_f\signs\signs_aggelochori_start.p3d";
	};
	class RoadSign_City_Altis_03: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_03.jpg";
		_generalMacro="RoadSign_City_Altis_03";
		displayName="$STR_Globe_RoadSign_City_Altis_03";
		model="\a3\signs_f\signs\signs_agiosdionysios_start.p3d";
	};
	class RoadSign_City_Altis_04: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_04.jpg";
		_generalMacro="RoadSign_City_Altis_04";
		displayName="$STR_Globe_RoadSign_City_Altis_04";
		model="\a3\signs_f\signs\signs_agiosefstratios_start.p3d";
	};
	class RoadSign_City_Altis_05: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_05.jpg";
		_generalMacro="RoadSign_City_Altis_05";
		displayName="$STR_Globe_RoadSign_City_Altis_05";
		model="\a3\signs_f\signs\signs_agioskonstantinos_start.p3d";
	};
	class RoadSign_City_Altis_06: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_06.jpg";
		_generalMacro="RoadSign_City_Altis_06";
		displayName="$STR_Globe_RoadSign_City_Altis_06";
		model="\a3\signs_f\signs\signs_agiosnikolaos_start.p3d";
	};
	class RoadSign_City_Altis_07: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_07.jpg";
		_generalMacro="RoadSign_City_Altis_07";
		displayName="$STR_Globe_RoadSign_City_Altis_07";
		model="\a3\signs_f\signs\signs_alikampos_start.p3d";
	};
	class RoadSign_City_Altis_08: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_08.jpg";
		_generalMacro="RoadSign_City_Altis_08";
		displayName="$STR_Globe_RoadSign_City_Altis_08";
		model="\a3\signs_f\signs\signs_anthrakia_start.p3d";
	};
	class RoadSign_City_Altis_09: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_09.jpg";
		_generalMacro="RoadSign_City_Altis_09";
		displayName="$STR_Globe_RoadSign_City_Altis_09";
		model="\a3\signs_f\signs\signs_athira_start.p3d";
	};
	class RoadSign_City_Altis_10: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_10.jpg";
		_generalMacro="RoadSign_City_Altis_10";
		displayName="$STR_Globe_RoadSign_City_Altis_10";
		model="\a3\signs_f\signs\signs_chalkeia_start.p3d";
	};
	class RoadSign_City_Altis_11: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_11.jpg";
		_generalMacro="RoadSign_City_Altis_11";
		displayName="$STR_Globe_RoadSign_City_Altis_11";
		model="\a3\signs_f\signs\signs_charkia_start.p3d";
	};
	class RoadSign_City_Altis_12: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_12.jpg";
		_generalMacro="RoadSign_City_Altis_12";
		displayName="$STR_Globe_RoadSign_City_Altis_12";
		model="\a3\signs_f\signs\signs_delfinaki_start.p3d";
	};
	class RoadSign_City_Altis_13: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_13.jpg";
		_generalMacro="RoadSign_City_Altis_13";
		displayName="$STR_Globe_RoadSign_City_Altis_13";
		model="\a3\signs_f\signs\signs_dorida_start.p3d";
	};
	class RoadSign_City_Altis_14: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_14.jpg";
		_generalMacro="RoadSign_City_Altis_14";
		displayName="$STR_Globe_RoadSign_City_Altis_14";
		model="\a3\signs_f\signs\signs_feres_start.p3d";
	};
	class RoadSign_City_Altis_15: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_15.jpg";
		_generalMacro="RoadSign_City_Altis_15";
		displayName="$STR_Globe_RoadSign_City_Altis_15";
		model="\a3\signs_f\signs\signs_frini_start.p3d";
	};
	class RoadSign_City_Altis_16: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_16.jpg";
		_generalMacro="RoadSign_City_Altis_16";
		displayName="$STR_Globe_RoadSign_City_Altis_16";
		model="\a3\signs_f\signs\signs_galati_start.p3d";
	};
	class RoadSign_City_Altis_17: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_17.jpg";
		_generalMacro="RoadSign_City_Altis_17";
		displayName="$STR_Globe_RoadSign_City_Altis_17";
		model="\a3\signs_f\signs\signs_gravia_start.p3d";
	};
	class RoadSign_City_Altis_43: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_43.jpg";
		_generalMacro="RoadSign_City_Altis_43";
		displayName="$STR_Globe_RoadSign_City_Altis_43";
		model="\a3\signs_f\signs\signs_ifestiona_start.p3d";
	};
	class RoadSign_City_Altis_18: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_18.jpg";
		_generalMacro="RoadSign_City_Altis_18";
		displayName="$STR_Globe_RoadSign_City_Altis_18";
		model="\a3\signs_f\signs\signs_ioannina_start.p3d";
	};
	class RoadSign_City_Altis_19: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_19.jpg";
		_generalMacro="RoadSign_City_Altis_19";
		displayName="$STR_Globe_RoadSign_City_Altis_19";
		model="\a3\signs_f\signs\signs_kalithea_start.p3d";
	};
	class RoadSign_City_Altis_20: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_20.jpg";
		_generalMacro="RoadSign_City_Altis_20";
		displayName="$STR_Globe_RoadSign_City_Altis_20";
		model="\a3\signs_f\signs\signs_kalochori_start.p3d";
	};
	class RoadSign_City_Altis_21: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_21.jpg";
		_generalMacro="RoadSign_City_Altis_21";
		displayName="$STR_Globe_RoadSign_City_Altis_21";
		model="\a3\signs_f\signs\signs_katalaki_start.p3d";
	};
	class RoadSign_City_Altis_22: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_22.jpg";
		_generalMacro="RoadSign_City_Altis_22";
		displayName="$STR_Globe_RoadSign_City_Altis_22";
		model="\a3\signs_f\signs\signs_kavala_start.p3d";
	};
	class RoadSign_City_Altis_23: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_23.jpg";
		_generalMacro="RoadSign_City_Altis_23";
		displayName="$STR_Globe_RoadSign_City_Altis_23";
		model="\a3\signs_f\signs\signs_kore_start.p3d";
	};
	class RoadSign_City_Altis_24: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_24.jpg";
		_generalMacro="RoadSign_City_Altis_24";
		displayName="$STR_Globe_RoadSign_City_Altis_24";
		model="\a3\signs_f\signs\signs_koroni_start.p3d";
	};
	class RoadSign_City_Altis_25: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_25.jpg";
		_generalMacro="RoadSign_City_Altis_25";
		displayName="$STR_Globe_RoadSign_City_Altis_25";
		model="\a3\signs_f\signs\signs_lakka_start.p3d";
	};
	class RoadSign_City_Altis_26: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_26.jpg";
		_generalMacro="RoadSign_City_Altis_26";
		displayName="$STR_Globe_RoadSign_City_Altis_26";
		model="\a3\signs_f\signs\signs_molos_start.p3d";
	};
	class RoadSign_City_Altis_27: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_27.jpg";
		_generalMacro="RoadSign_City_Altis_27";
		displayName="$STR_Globe_RoadSign_City_Altis_27";
		model="\a3\signs_f\signs\signs_negades_start.p3d";
	};
	class RoadSign_City_Altis_28: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_28.jpg";
		_generalMacro="RoadSign_City_Altis_28";
		displayName="$STR_Globe_RoadSign_City_Altis_28";
		model="\a3\signs_f\signs\signs_neochori_start.p3d";
	};
	class RoadSign_City_Altis_29: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_29.jpg";
		_generalMacro="RoadSign_City_Altis_29";
		displayName="$STR_Globe_RoadSign_City_Altis_29";
		model="\a3\signs_f\signs\signs_neri_start.p3d";
	};
	class RoadSign_City_Altis_30: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_30.jpg";
		_generalMacro="RoadSign_City_Altis_30";
		displayName="$STR_Globe_RoadSign_City_Altis_30";
		model="\a3\signs_f\signs\signs_oreokastro_start.p3d";
	};
	class RoadSign_City_Altis_31: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_31.jpg";
		_generalMacro="RoadSign_City_Altis_31";
		displayName="$STR_Globe_RoadSign_City_Altis_31";
		model="\a3\signs_f\signs\signs_panagia_start.p3d";
	};
	class RoadSign_City_Altis_32: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_32.jpg";
		_generalMacro="RoadSign_City_Altis_32";
		displayName="$STR_Globe_RoadSign_City_Altis_32";
		model="\a3\signs_f\signs\signs_panochori_start.p3d";
	};
	class RoadSign_City_Altis_33: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_33.jpg";
		_generalMacro="RoadSign_City_Altis_33";
		displayName="$STR_Globe_RoadSign_City_Altis_33";
		model="\a3\signs_f\signs\signs_paros_start.p3d";
	};
	class RoadSign_City_Altis_34: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_34.jpg";
		_generalMacro="RoadSign_City_Altis_34";
		displayName="$STR_Globe_RoadSign_City_Altis_34";
		model="\a3\signs_f\signs\signs_rodopoli_start.p3d";
	};
	class RoadSign_City_Altis_35: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_35.jpg";
		_generalMacro="RoadSign_City_Altis_35";
		displayName="$STR_Globe_RoadSign_City_Altis_35";
		model="\a3\signs_f\signs\signs_selakano_start.p3d";
	};
	class RoadSign_City_Altis_36: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_36.jpg";
		_generalMacro="RoadSign_City_Altis_36";
		displayName="$STR_Globe_RoadSign_City_Altis_36";
		model="\a3\signs_f\signs\signs_sofia_start.p3d";
	};
	class RoadSign_City_Altis_37: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_37.jpg";
		_generalMacro="RoadSign_City_Altis_37";
		displayName="$STR_Globe_RoadSign_City_Altis_37";
		model="\a3\signs_f\signs\signs_stavros_start.p3d";
	};
	class RoadSign_City_Altis_38: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_38.jpg";
		_generalMacro="RoadSign_City_Altis_38";
		displayName="$STR_Globe_RoadSign_City_Altis_38";
		model="\a3\signs_f\signs\signs_syrta_start.p3d";
	};
	class RoadSign_City_Altis_39: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_39.jpg";
		_generalMacro="RoadSign_City_Altis_39";
		displayName="$STR_Globe_RoadSign_City_Altis_39";
		model="\a3\signs_f\signs\signs_telos_start.p3d";
	};
	class RoadSign_City_Altis_40: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_40.jpg";
		_generalMacro="RoadSign_City_Altis_40";
		displayName="$STR_Globe_RoadSign_City_Altis_40";
		model="\a3\signs_f\signs\signs_therisa_start.p3d";
	};
	class RoadSign_City_Altis_41: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_41.jpg";
		_generalMacro="RoadSign_City_Altis_41";
		displayName="$STR_Globe_RoadSign_City_Altis_41";
		model="\a3\signs_f\signs\signs_topolia_start.p3d";
	};
	class RoadSign_City_Altis_42: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_42.jpg";
		_generalMacro="RoadSign_City_Altis_42";
		displayName="$STR_Globe_RoadSign_City_Altis_42";
		model="\a3\signs_f\signs\signs_zaros_start.p3d";
	};
	class RoadSign_City_Altis_01_end: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_01_end.jpg";
		_generalMacro="RoadSign_City_Altis_01_end";
		displayName="$STR_Globe_RoadSign_City_Altis_01_end";
		model="\a3\signs_f\signs\signs_abdera_end.p3d";
	};
	class RoadSign_City_Altis_02_end: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_02_end.jpg";
		_generalMacro="RoadSign_City_Altis_02_end";
		displayName="$STR_Globe_RoadSign_City_Altis_02_end";
		model="\a3\signs_f\signs\signs_aggelochori_end.p3d";
	};
	class RoadSign_City_Altis_03_end: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_03_end.jpg";
		_generalMacro="RoadSign_City_Altis_03_end";
		displayName="$STR_Globe_RoadSign_City_Altis_03_end";
		model="\a3\signs_f\signs\signs_agiosdionysios_end.p3d";
	};
	class RoadSign_City_Altis_04_end: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_04_end.jpg";
		_generalMacro="RoadSign_City_Altis_04_end";
		displayName="$STR_Globe_RoadSign_City_Altis_05_end";
		model="\a3\signs_f\signs\signs_agiosefstratios_end.p3d";
	};
	class RoadSign_City_Altis_05_end: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_05_end.jpg";
		_generalMacro="RoadSign_City_Altis_05_end";
		displayName="$STR_Globe_RoadSign_City_Altis_05_end";
		model="\a3\signs_f\signs\signs_agioskonstantinos_end.p3d";
	};
	class RoadSign_City_Altis_06_end: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_06_end.jpg";
		_generalMacro="RoadSign_City_Altis_06_end";
		displayName="$STR_Globe_RoadSign_City_Altis_06_end";
		model="\a3\signs_f\signs\signs_agiosnikolaos_end.p3d";
	};
	class RoadSign_City_Altis_07_end: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_07_end.jpg";
		_generalMacro="RoadSign_City_Altis_07_end";
		displayName="$STR_Globe_RoadSign_City_Altis_07_end";
		model="\a3\signs_f\signs\signs_alikampos_end.p3d";
	};
	class RoadSign_City_Altis_08_end: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_08_end.jpg";
		_generalMacro="RoadSign_City_Altis_08_end";
		displayName="$STR_Globe_RoadSign_City_Altis_08_end";
		model="\a3\signs_f\signs\signs_anthrakia_end.p3d";
	};
	class RoadSign_City_Altis_09_end: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_09_end.jpg";
		_generalMacro="RoadSign_City_Altis_09_end";
		displayName="$STR_Globe_RoadSign_City_Altis_09_end";
		model="\a3\signs_f\signs\signs_athira_end.p3d";
	};
	class RoadSign_City_Altis_10_end: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_10_end.jpg";
		_generalMacro="RoadSign_City_Altis_10_end";
		displayName="$STR_Globe_RoadSign_City_Altis_10_end";
		model="\a3\signs_f\signs\signs_chalkeia_end.p3d";
	};
	class RoadSign_City_Altis_11_end: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_11_end.jpg";
		_generalMacro="RoadSign_City_Altis_11_end";
		displayName="$STR_Globe_RoadSign_City_Altis_11_end";
		model="\a3\signs_f\signs\signs_charkia_end.p3d";
	};
	class RoadSign_City_Altis_12_end: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_12_end.jpg";
		_generalMacro="RoadSign_City_Altis_12_end";
		displayName="$STR_Globe_RoadSign_City_Altis_12_end";
		model="\a3\signs_f\signs\signs_delfinaki_end.p3d";
	};
	class RoadSign_City_Altis_13_end: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_13_end.jpg";
		_generalMacro="RoadSign_City_Altis_13_end";
		displayName="$STR_Globe_RoadSign_City_Altis_13_end";
		model="\a3\signs_f\signs\signs_dorida_end.p3d";
	};
	class RoadSign_City_Altis_14_end: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_14_end.jpg";
		_generalMacro="RoadSign_City_Altis_14_end";
		displayName="$STR_Globe_RoadSign_City_Altis_14_end";
		model="\a3\signs_f\signs\signs_feres_end.p3d";
	};
	class RoadSign_City_Altis_15_end: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_15_end.jpg";
		_generalMacro="RoadSign_City_Altis_15_end";
		displayName="$STR_Globe_RoadSign_City_Altis_15_end";
		model="\a3\signs_f\signs\signs_frini_end.p3d";
	};
	class RoadSign_City_Altis_16_end: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_16_end.jpg";
		_generalMacro="RoadSign_City_Altis_16_end";
		displayName="$STR_Globe_RoadSign_City_Altis_16_end";
		model="\a3\signs_f\signs\signs_galati_end.p3d";
	};
	class RoadSign_City_Altis_17_end: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_17_end.jpg";
		_generalMacro="RoadSign_City_Altis_17_end";
		displayName="$STR_Globe_RoadSign_City_Altis_17_end";
		model="\a3\signs_f\signs\signs_gravia_end.p3d";
	};
	class RoadSign_City_Altis_43_end: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_43_end.jpg";
		_generalMacro="RoadSign_City_Altis_43_end";
		displayName="$STR_Globe_RoadSign_City_Altis_43_end";
		model="\a3\signs_f\signs\signs_ifestiona_end.p3d";
	};
	class RoadSign_City_Altis_18_end: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_18_end.jpg";
		_generalMacro="RoadSign_City_Altis_18_end";
		displayName="$STR_Globe_RoadSign_City_Altis_18_end";
		model="\a3\signs_f\signs\signs_ioannina_end.p3d";
	};
	class RoadSign_City_Altis_19_end: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_19_end.jpg";
		_generalMacro="RoadSign_City_Altis_19_end";
		displayName="$STR_Globe_RoadSign_City_Altis_19_end";
		model="\a3\signs_f\signs\signs_kalithea_end.p3d";
	};
	class RoadSign_City_Altis_20_end: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_20_end.jpg";
		_generalMacro="RoadSign_City_Altis_20_end";
		displayName="$STR_Globe_RoadSign_City_Altis_20_end";
		model="\a3\signs_f\signs\signs_kalochori_end.p3d";
	};
	class RoadSign_City_Altis_21_end: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_21_end.jpg";
		_generalMacro="RoadSign_City_Altis_21_end";
		displayName="$STR_Globe_RoadSign_City_Altis_21_end";
		model="\a3\signs_f\signs\signs_katalaki_end.p3d";
	};
	class RoadSign_City_Altis_22_end: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_22_end.jpg";
		_generalMacro="RoadSign_City_Altis_22_end";
		displayName="$STR_Globe_RoadSign_City_Altis_22_end";
		model="\a3\signs_f\signs\signs_kavala_end.p3d";
	};
	class RoadSign_City_Altis_23_end: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_23_end.jpg";
		_generalMacro="RoadSign_City_Altis_23_end";
		displayName="$STR_Globe_RoadSign_City_Altis_23_end";
		model="\a3\signs_f\signs\signs_kore_end.p3d";
	};
	class RoadSign_City_Altis_24_end: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_24_end.jpg";
		_generalMacro="RoadSign_City_Altis_24_end";
		displayName="$STR_Globe_RoadSign_City_Altis_24_end";
		model="\a3\signs_f\signs\signs_koroni_end.p3d";
	};
	class RoadSign_City_Altis_25_end: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_25_end.jpg";
		_generalMacro="RoadSign_City_Altis_25_end";
		displayName="$STR_Globe_RoadSign_City_Altis_25_end";
		model="\a3\signs_f\signs\signs_lakka_end.p3d";
	};
	class RoadSign_City_Altis_26_end: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_26_end.jpg";
		_generalMacro="RoadSign_City_Altis_26_end";
		displayName="$STR_Globe_RoadSign_City_Altis_26_end";
		model="\a3\signs_f\signs\signs_molos_end.p3d";
	};
	class RoadSign_City_Altis_27_end: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_27_end.jpg";
		_generalMacro="RoadSign_City_Altis_27_end";
		displayName="$STR_Globe_RoadSign_City_Altis_27_end";
		model="\a3\signs_f\signs\signs_negades_end.p3d";
	};
	class RoadSign_City_Altis_28_end: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_28_end.jpg";
		_generalMacro="RoadSign_City_Altis_28_end";
		displayName="$STR_Globe_RoadSign_City_Altis_28_end";
		model="\a3\signs_f\signs\signs_neochori_end.p3d";
	};
	class RoadSign_City_Altis_29_end: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_29_end.jpg";
		_generalMacro="RoadSign_City_Altis_29_end";
		displayName="$STR_Globe_RoadSign_City_Altis_29_end";
		model="\a3\signs_f\signs\signs_neri_end.p3d";
	};
	class RoadSign_City_Altis_30_end: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_30_end.jpg";
		_generalMacro="RoadSign_City_Altis_30_end";
		displayName="$STR_Globe_RoadSign_City_Altis_30_end";
		model="\a3\signs_f\signs\signs_oreokastro_end.p3d";
	};
	class RoadSign_City_Altis_31_end: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_31_end.jpg";
		_generalMacro="RoadSign_City_Altis_31_end";
		displayName="$STR_Globe_RoadSign_City_Altis_31_end";
		model="\a3\signs_f\signs\signs_panagia_end.p3d";
	};
	class RoadSign_City_Altis_32_end: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_32_end.jpg";
		_generalMacro="RoadSign_City_Altis_32_end";
		displayName="$STR_Globe_RoadSign_City_Altis_32_end";
		model="\a3\signs_f\signs\signs_panochori_end.p3d";
	};
	class RoadSign_City_Altis_33_end: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_33_end.jpg";
		_generalMacro="RoadSign_City_Altis_33_end";
		displayName="$STR_Globe_RoadSign_City_Altis_33_end";
		model="\a3\signs_f\signs\signs_paros_end.p3d";
	};
	class RoadSign_City_Altis_34_end: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_34_end.jpg";
		_generalMacro="RoadSign_City_Altis_34_end";
		displayName="$STR_Globe_RoadSign_City_Altis_34_end";
		model="\a3\signs_f\signs\signs_rodopoli_end.p3d";
	};
	class RoadSign_City_Altis_35_end: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_35_end.jpg";
		_generalMacro="RoadSign_City_Altis_35_end";
		displayName="$STR_Globe_RoadSign_City_Altis_35_end";
		model="\a3\signs_f\signs\signs_selakano_end.p3d";
	};
	class RoadSign_City_Altis_36_end: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_36_end.jpg";
		_generalMacro="RoadSign_City_Altis_36_end";
		displayName="$STR_Globe_RoadSign_City_Altis_36_end";
		model="\a3\signs_f\signs\signs_sofia_end.p3d";
	};
	class RoadSign_City_Altis_37_end: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_37_end.jpg";
		_generalMacro="RoadSign_City_Altis_37_end";
		displayName="$STR_Globe_RoadSign_City_Altis_37_end";
		model="\a3\signs_f\signs\signs_stavros_end.p3d";
	};
	class RoadSign_City_Altis_38_end: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_38_end.jpg";
		_generalMacro="RoadSign_City_Altis_38_end";
		displayName="$STR_Globe_RoadSign_City_Altis_38_end";
		model="\a3\signs_f\signs\signs_syrta_end.p3d";
	};
	class RoadSign_City_Altis_39_end: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_39_end.jpg";
		_generalMacro="RoadSign_City_Altis_39_end";
		displayName="$STR_Globe_RoadSign_City_Altis_39_end";
		model="\a3\signs_f\signs\signs_telos_end.p3d";
	};
	class RoadSign_City_Altis_40_end: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_40_end.jpg";
		_generalMacro="RoadSign_City_Altis_40_end";
		displayName="$STR_Globe_RoadSign_City_Altis_40_end";
		model="\a3\signs_f\signs\signs_therisa_end.p3d";
	};
	class RoadSign_City_Altis_41_end: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_41_end.jpg";
		_generalMacro="RoadSign_City_Altis_41_end";
		displayName="$STR_Globe_RoadSign_City_Altis_41_end";
		model="\a3\signs_f\signs\signs_topolia_end.p3d";
	};
	class RoadSign_City_Altis_42_end: RoadSign_City_Altis_01
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Altis_42_end.jpg";
		_generalMacro="RoadSign_City_Altis_42_end";
		displayName="$STR_Globe_RoadSign_City_Altis_42_end";
		model="\a3\signs_f\signs\signs_zaros_end.p3d";
	};
	class RoadSign_City_Malden_Arudy: RoadSign_City_Base
	{
		mapSize=0.72299999;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.412;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Malden_Arudy.jpg";
		_generalMacro="RoadSign_City_Malden_Arudy";
		scope=2;
		scopeCurator=0;
		editorCategory="EdCat_Structures_Malden";
		displayName="$STR_Globe_RoadSign_City_Malden_Arudy";
		model="\A3\Structures_F_Argo\Signs\City\Signs_Arudy_Start.p3d";
	};
	class RoadSign_City_Malden_Cancon: RoadSign_City_Malden_Arudy
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Malden_Cancon.jpg";
		_generalMacro="RoadSign_City_Malden_Cancon";
		displayName="$STR_Globe_RoadSign_City_Malden_Cancon";
		model="\A3\Structures_F_Argo\Signs\City\Signs_Cancon_Start.p3d";
	};
	class RoadSign_City_Malden_Chapoi: RoadSign_City_Malden_Arudy
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Malden_Chapoi.jpg";
		_generalMacro="RoadSign_City_Malden_Chapoi";
		displayName="$STR_Globe_RoadSign_City_Malden_Chapoi";
		model="\A3\Structures_F_Argo\Signs\City\SignS_chapoi_Start.p3d";
	};
	class RoadSign_City_Malden_Leport: RoadSign_City_Malden_Arudy
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Malden_Leport.jpg";
		_generalMacro="RoadSign_City_Malden_Leport";
		displayName="$STR_Globe_RoadSign_City_Malden_Leport";
		model="\A3\Structures_F_Argo\Signs\City\SignS_leport_start.p3d";
	};
	class RoadSign_City_Malden_Lolisse: RoadSign_City_Malden_Arudy
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Malden_Lolisse.jpg";
		_generalMacro="RoadSign_City_Malden_Lolisse";
		displayName="$STR_Globe_RoadSign_City_Malden_Lolisse";
		model="\A3\Structures_F_Argo\Signs\City\SignS_lolisse_start.p3d";
	};
	class RoadSign_City_Malden_Stlouis: RoadSign_City_Malden_Arudy
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Malden_Stlouis.jpg";
		_generalMacro="RoadSign_City_Malden_Stlouis";
		displayName="$STR_Globe_RoadSign_City_Malden_Stlouis";
		model="\A3\Structures_F_Argo\Signs\City\SignS_stlouis_start.p3d";
	};
	class RoadSign_City_Malden_Stmarie: RoadSign_City_Malden_Arudy
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Malden_Stmarie.jpg";
		_generalMacro="RoadSign_City_Malden_Stmarie";
		displayName="$STR_Globe_RoadSign_City_Malden_Stmarie";
		model="\A3\Structures_F_Argo\Signs\City\SignS_stmarie_start.p3d";
	};
	class RoadSign_City_Malden_Vigny: RoadSign_City_Malden_Arudy
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Malden_Vigny.jpg";
		_generalMacro="RoadSign_City_Malden_Vigny";
		displayName="$STR_Globe_RoadSign_City_Malden_Vigny";
		model="\A3\Structures_F_Argo\Signs\City\SignS_vigny_start.p3d";
	};
	class RoadSign_City_Malden_Goisse: RoadSign_City_Malden_Arudy
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Malden_Goisse.jpg";
		_generalMacro="RoadSign_City_Malden_Goisse";
		displayName="$STR_Globe_RoadSign_City_Malden_Goisse";
		model="\A3\Structures_F_Argo\Signs\City\SignS_goisse_start.p3d";
	};
	class RoadSign_City_Malden_Lapessagne: RoadSign_City_Malden_Arudy
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Malden_Lapessagne.jpg";
		_generalMacro="RoadSign_City_Malden_Lapessagne";
		displayName="$STR_Globe_RoadSign_City_Malden_Lapessagne";
		model="\A3\Structures_F_Argo\Signs\City\SignS_lapessagne_start.p3d";
	};
	class RoadSign_City_Malden_Larche: RoadSign_City_Malden_Arudy
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Malden_Larche.jpg";
		_generalMacro="RoadSign_City_Malden_Larche";
		displayName="$STR_Globe_RoadSign_City_Malden_Larche";
		model="\A3\Structures_F_Argo\Signs\City\SignS_larche_start.p3d";
	};
	class RoadSign_City_Malden_Lariviere: RoadSign_City_Malden_Arudy
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Malden_Lariviere.jpg";
		_generalMacro="RoadSign_City_Malden_Lariviere";
		displayName="$STR_Globe_RoadSign_City_Malden_Lariviere";
		model="\A3\Structures_F_Argo\Signs\City\SignS_lariviere_start.p3d";
	};
	class RoadSign_City_Malden_Latrinite: RoadSign_City_Malden_Arudy
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Malden_Latrinite.jpg";
		_generalMacro="RoadSign_City_Malden_Latrinite";
		displayName="$STR_Globe_RoadSign_City_Malden_Latrinite";
		model="\A3\Structures_F_Argo\Signs\City\SignS_latrinite_start.p3d";
	};
	class RoadSign_City_Malden_Dourdan: RoadSign_City_Malden_Arudy
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Malden_Dourdan.jpg";
		_generalMacro="RoadSign_City_Malden_Dourdan";
		displayName="$STR_Globe_RoadSign_City_Malden_Dourdan";
		model="\A3\Structures_F_Argo\Signs\City\SignS_dourdan_start.p3d";
	};
	class RoadSign_City_Malden_Arudy_end: RoadSign_City_Malden_Arudy
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Malden_Arudy_end.jpg";
		_generalMacro="RoadSign_City_Malden_Arudy_end";
		displayName="$STR_Globe_RoadSign_City_Malden_Arudy_end";
		model="\A3\Structures_F_Argo\Signs\City\Signs_Arudy_end.p3d";
	};
	class RoadSign_City_Malden_Cancon_end: RoadSign_City_Malden_Arudy
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Malden_Cancon_end.jpg";
		_generalMacro="RoadSign_City_Malden_Cancon_end";
		displayName="$STR_Globe_RoadSign_City_Malden_Cancon_end";
		model="\A3\Structures_F_Argo\Signs\City\Signs_Cancon_end.p3d";
	};
	class RoadSign_City_Malden_Chapoi_end: RoadSign_City_Malden_Arudy
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Malden_Chapoi_end.jpg";
		_generalMacro="RoadSign_City_Malden_Chapoi_end";
		displayName="$STR_Globe_RoadSign_City_Malden_Chapoi_end";
		model="\A3\Structures_F_Argo\Signs\City\SignS_chapoi_end.p3d";
	};
	class RoadSign_City_Malden_Leport_end: RoadSign_City_Malden_Arudy
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Malden_Leport_end.jpg";
		_generalMacro="RoadSign_City_Malden_Leport_end";
		displayName="$STR_Globe_RoadSign_City_Malden_Leport_end";
		model="\A3\Structures_F_Argo\Signs\City\SignS_leport_end.p3d";
	};
	class RoadSign_City_Malden_Lolisse_end: RoadSign_City_Malden_Arudy
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Malden_Lolisse_end.jpg";
		_generalMacro="RoadSign_City_Malden_Lolisse_end";
		displayName="$STR_Globe_RoadSign_City_Malden_Lolisse_end";
		model="\A3\Structures_F_Argo\Signs\City\SignS_lolisse_end.p3d";
	};
	class RoadSign_City_Malden_Stlouis_end: RoadSign_City_Malden_Arudy
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Malden_Stlouis_end.jpg";
		_generalMacro="RoadSign_City_Malden_Stlouis_end";
		displayName="$STR_Globe_RoadSign_City_Malden_Stlouis_end";
		model="\A3\Structures_F_Argo\Signs\City\SignS_stlouis_end.p3d";
	};
	class RoadSign_City_Malden_Stmarie_end: RoadSign_City_Malden_Arudy
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Malden_Stmarie_end.jpg";
		_generalMacro="RoadSign_City_Malden_Stmarie_end";
		displayName="$STR_Globe_RoadSign_City_Malden_Stmarie_end";
		model="\A3\Structures_F_Argo\Signs\City\SignS_stmarie_end.p3d";
	};
	class RoadSign_City_Malden_Vigny_end: RoadSign_City_Malden_Arudy
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Malden_Vigny_end.jpg";
		_generalMacro="RoadSign_City_Malden_Vigny_end";
		displayName="$STR_Globe_RoadSign_City_Malden_Vigny_end";
		model="\A3\Structures_F_Argo\Signs\City\SignS_vigny_end.p3d";
	};
	class RoadSign_City_Malden_Goisse_end: RoadSign_City_Malden_Arudy
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Malden_Goisse_end.jpg";
		_generalMacro="RoadSign_City_Malden_Goisse_end";
		displayName="$STR_Globe_RoadSign_City_Malden_Goisse_end";
		model="\A3\Structures_F_Argo\Signs\City\SignS_goisse_end.p3d";
	};
	class RoadSign_City_Malden_Lapessagne_end: RoadSign_City_Malden_Arudy
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Malden_Lapessagne_end.jpg";
		_generalMacro="RoadSign_City_Malden_Lapessagne_end";
		displayName="$STR_Globe_RoadSign_City_Malden_Lapessagne_end";
		model="\A3\Structures_F_Argo\Signs\City\SignS_lapessagne_end.p3d";
	};
	class RoadSign_City_Malden_Larche_end: RoadSign_City_Malden_Arudy
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Malden_Larche_end.jpg";
		_generalMacro="RoadSign_City_Malden_Larche_end";
		displayName="$STR_Globe_RoadSign_City_Malden_Larche_end";
		model="\A3\Structures_F_Argo\Signs\City\SignS_larche_end.p3d";
	};
	class RoadSign_City_Malden_Lariviere_end: RoadSign_City_Malden_Arudy
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Malden_Lariviere_end.jpg";
		_generalMacro="RoadSign_City_Malden_Lariviere_end";
		displayName="$STR_Globe_RoadSign_City_Malden_Lariviere_end";
		model="\A3\Structures_F_Argo\Signs\City\SignS_lariviere_end.p3d";
	};
	class RoadSign_City_Malden_Latrinite_end: RoadSign_City_Malden_Arudy
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Malden_Latrinite_end.jpg";
		_generalMacro="RoadSign_City_Malden_Latrinite_end";
		displayName="$STR_Globe_RoadSign_City_Malden_Latrinite_end";
		model="\A3\Structures_F_Argo\Signs\City\SignS_latrinite_end.p3d";
	};
	class RoadSign_City_Malden_Dourdan_end: RoadSign_City_Malden_Arudy
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Malden_Dourdan_end.jpg";
		_generalMacro="RoadSign_City_Malden_Dourdan_end";
		displayName="$STR_Globe_RoadSign_City_Malden_Dourdan_end";
		model="\A3\Structures_F_Argo\Signs\City\SignS_dourdan_end.p3d";
	};
	class RoadSign_City_Tanoa_Georgetown: RoadSign_City_Base
	{
		mapSize=0.72299999;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.412;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Tanoa_Georgetown.jpg";
		_generalMacro="RoadSign_City_Tanoa_Georgetown";
		scope=2;
		scopeCurator=0;
		editorCategory="EdCat_Structures_Tanoa";
		displayName="$STR_a3_Georgetown010";
		model="\a3\structures_f_exp\signs\townnames\signcity_georgetown";
	};
	class RoadSign_City_Tanoa_Harcourt: RoadSign_City_Tanoa_Georgetown
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Tanoa_Harcourt.jpg";
		_generalMacro="RoadSign_City_Tanoa_Harcourt";
		displayName="$STR_a3_Harcourt010";
		model="\a3\structures_f_exp\signs\townnames\signcity_harcourt";
	};
	class RoadSign_City_Tanoa_Katkoula: RoadSign_City_Tanoa_Georgetown
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Tanoa_Katkoula.jpg";
		_generalMacro="RoadSign_City_Tanoa_Katkoula";
		displayName="$STR_a3_Katkoula010";
		model="\a3\structures_f_exp\signs\townnames\signcity_katkoula";
	};
	class RoadSign_City_Tanoa_Larochelle: RoadSign_City_Tanoa_Georgetown
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Tanoa_Larochelle.jpg";
		_generalMacro="RoadSign_City_Tanoa_Larochelle";
		displayName="$STR_a3_Larochelle010";
		model="\a3\structures_f_exp\signs\townnames\signcity_larochelle";
	};
	class RoadSign_City_Tanoa_Lijnhaven: RoadSign_City_Tanoa_Georgetown
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Tanoa_Lijnhaven.jpg";
		_generalMacro="RoadSign_City_Tanoa_Lijnhaven";
		displayName="$STR_a3_Lijnhaven010";
		model="\a3\structures_f_exp\signs\townnames\signcity_lijnhaven";
	};
	class RoadSign_City_Tanoa_Tanouka: RoadSign_City_Tanoa_Georgetown
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Tanoa_Tanouka.jpg";
		_generalMacro="RoadSign_City_Tanoa_Tanouka";
		displayName="$STR_a3_Tanouka010";
		model="\a3\structures_f_exp\signs\townnames\signcity_tanouka";
	};
	class RoadSign_City_Tanoa_Tuvanaka: RoadSign_City_Tanoa_Georgetown
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Tanoa_Tuvanaka.jpg";
		_generalMacro="RoadSign_City_Tanoa_Tuvanaka";
		displayName="$STR_a3_Tuvanaka010";
		model="\a3\structures_f_exp\signs\townnames\signcity_tuvanaka";
	};
	class RoadSign_City_Tanoa_ba: RoadSign_City_Tanoa_Georgetown
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Tanoa_ba.jpg";
		_generalMacro="RoadSign_City_Tanoa_ba";
		displayName="$STR_a3_ba010";
		model="\a3\structures_f_exp\signs\townnames\signtown_01_ba";
	};
	class RoadSign_City_Tanoa_belavu: RoadSign_City_Tanoa_Georgetown
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Tanoa_belavu.jpg";
		_generalMacro="RoadSign_City_Tanoa_belavu";
		displayName="$STR_a3_balavu010";
		model="\a3\structures_f_exp\signs\townnames\signtown_01_belavu";
	};
	class RoadSign_City_Tanoa_belfort: RoadSign_City_Tanoa_Georgetown
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Tanoa_belfort.jpg";
		_generalMacro="RoadSign_City_Tanoa_belfort";
		displayName="$STR_a3_belfort010";
		model="\a3\structures_f_exp\signs\townnames\signtown_01_belfort";
	};
	class RoadSign_City_Tanoa_blerick: RoadSign_City_Tanoa_Georgetown
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Tanoa_blerick.jpg";
		_generalMacro="RoadSign_City_Tanoa_blerick";
		displayName="$STR_a3_blerick010";
		model="\a3\structures_f_exp\signs\townnames\signtown_01_blerick";
	};
	class RoadSign_City_Tanoa_buabua: RoadSign_City_Tanoa_Georgetown
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Tanoa_buabua.jpg";
		_generalMacro="RoadSign_City_Tanoa_buabua";
		displayName="$STR_a3_buabua010";
		model="\a3\structures_f_exp\signs\townnames\signtown_01_buabua";
	};
	class RoadSign_City_Tanoa_buawa: RoadSign_City_Tanoa_Georgetown
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Tanoa_buawa.jpg";
		_generalMacro="RoadSign_City_Tanoa_buawa";
		displayName="$STR_a3_buawa010";
		model="\a3\structures_f_exp\signs\townnames\signtown_01_buawa";
	};
	class RoadSign_City_Tanoa_cerebu: RoadSign_City_Tanoa_Georgetown
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Tanoa_cerebu.jpg";
		_generalMacro="RoadSign_City_Tanoa_cerebu";
		displayName="$STR_a3_cerebu010";
		model="\a3\structures_f_exp\signs\townnames\signtown_01_cerebu";
	};
	class RoadSign_City_Tanoa_doodstil: RoadSign_City_Tanoa_Georgetown
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Tanoa_doodstil.jpg";
		_generalMacro="RoadSign_City_Tanoa_doodstil";
		displayName="$STR_a3_doodstil010";
		model="\a3\structures_f_exp\signs\townnames\signtown_01_doodstil";
	};
	class RoadSign_City_Tanoa_galili: RoadSign_City_Tanoa_Georgetown
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Tanoa_galili.jpg";
		_generalMacro="RoadSign_City_Tanoa_galili";
		displayName="$STR_a3_galili010";
		model="\a3\structures_f_exp\signs\townnames\signtown_01_galili";
	};
	class RoadSign_City_Tanoa_imone: RoadSign_City_Tanoa_Georgetown
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Tanoa_imone.jpg";
		_generalMacro="RoadSign_City_Tanoa_imone";
		displayName="$STR_a3_imone010";
		model="\a3\structures_f_exp\signs\townnames\signtown_01_imone";
	};
	class RoadSign_City_Tanoa_komoto: RoadSign_City_Tanoa_Georgetown
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Tanoa_komoto.jpg";
		_generalMacro="RoadSign_City_Tanoa_komoto";
		displayName="$STR_a3_harcourtnord010";
		model="\a3\structures_f_exp\signs\townnames\signtown_01_komoto";
	};
	class RoadSign_City_Tanoa_koumac: RoadSign_City_Tanoa_Georgetown
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Tanoa_koumac.jpg";
		_generalMacro="RoadSign_City_Tanoa_koumac";
		displayName="$STR_a3_koumac010";
		model="\a3\structures_f_exp\signs\townnames\signtown_01_koumac";
	};
	class RoadSign_City_Tanoa_lafoa: RoadSign_City_Tanoa_Georgetown
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Tanoa_lafoa.jpg";
		_generalMacro="RoadSign_City_Tanoa_lafoa";
		displayName="$STR_a3_lafoa010";
		model="\a3\structures_f_exp\signs\townnames\signtown_01_lafoa";
	};
	class RoadSign_City_Tanoa_laikoro: RoadSign_City_Tanoa_Georgetown
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Tanoa_laikoro.jpg";
		_generalMacro="RoadSign_City_Tanoa_laikoro";
		displayName="$STR_a3_laikoro010";
		model="\a3\structures_f_exp\signs\townnames\signtown_01_laikoro";
	};
	class RoadSign_City_Tanoa_lailai: RoadSign_City_Tanoa_Georgetown
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Tanoa_lailai.jpg";
		_generalMacro="RoadSign_City_Tanoa_lailai";
		displayName="$STR_a3_lailai010";
		model="\a3\structures_f_exp\signs\townnames\signtown_01_lailai";
	};
	class RoadSign_City_Tanoa_lakatoro: RoadSign_City_Tanoa_Georgetown
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Tanoa_lakatoro.jpg";
		_generalMacro="RoadSign_City_Tanoa_lakatoro";
		displayName="$STR_a3_lakatoro010";
		model="\a3\structures_f_exp\signs\townnames\signtown_01_lakatoro";
	};
	class RoadSign_City_Tanoa_lami: RoadSign_City_Tanoa_Georgetown
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Tanoa_lami.jpg";
		_generalMacro="RoadSign_City_Tanoa_lami";
		displayName="$STR_a3_lami010";
		model="\a3\structures_f_exp\signs\townnames\signtown_01_lami";
	};
	class RoadSign_City_Tanoa_leqa: RoadSign_City_Tanoa_Georgetown
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Tanoa_leqa.jpg";
		_generalMacro="RoadSign_City_Tanoa_leqa";
		displayName="$STR_a3_leqa010";
		model="\a3\structures_f_exp\signs\townnames\signtown_01_leqa";
	};
	class RoadSign_City_Tanoa_lifou: RoadSign_City_Tanoa_Georgetown
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Tanoa_lifou.jpg";
		_generalMacro="RoadSign_City_Tanoa_lifou";
		displayName="$STR_a3_lifou010";
		model="\a3\structures_f_exp\signs\townnames\signtown_01_lifou";
	};
	class RoadSign_City_Tanoa_lobaka: RoadSign_City_Tanoa_Georgetown
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Tanoa_lobaka.jpg";
		_generalMacro="RoadSign_City_Tanoa_lobaka";
		displayName="$STR_a3_lobaka010";
		model="\a3\structures_f_exp\signs\townnames\signtown_01_lobaka";
	};
	class RoadSign_City_Tanoa_losi: RoadSign_City_Tanoa_Georgetown
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Tanoa_losi.jpg";
		_generalMacro="RoadSign_City_Tanoa_losi";
		displayName="$STR_a3_losi010";
		model="\a3\structures_f_exp\signs\townnames\signtown_01_losi";
	};
	class RoadSign_City_Tanoa_luganville: RoadSign_City_Tanoa_Georgetown
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Tanoa_luganville.jpg";
		_generalMacro="RoadSign_City_Tanoa_luganville";
		displayName="$STR_a3_luganville010";
		model="\a3\structures_f_exp\signs\townnames\signtown_01_luganville";
	};
	class RoadSign_City_Tanoa_moddergat: RoadSign_City_Tanoa_Georgetown
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Tanoa_moddergat.jpg";
		_generalMacro="RoadSign_City_Tanoa_moddergat";
		displayName="$STR_a3_moddergat010";
		model="\a3\structures_f_exp\signs\townnames\signtown_01_moddergat";
	};
	class RoadSign_City_Tanoa_momea: RoadSign_City_Tanoa_Georgetown
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Tanoa_momea.jpg";
		_generalMacro="RoadSign_City_Tanoa_momea";
		displayName="$STR_a3_momea010";
		model="\a3\structures_f_exp\signs\townnames\signtown_01_momea";
	};
	class RoadSign_City_Tanoa_muaceba: RoadSign_City_Tanoa_Georgetown
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Tanoa_muaceba.jpg";
		_generalMacro="RoadSign_City_Tanoa_muaceba";
		displayName="$STR_a3_muaceba010";
		model="\a3\structures_f_exp\signs\townnames\signtown_01_muaceba";
	};
	class RoadSign_City_Tanoa_namuvaka: RoadSign_City_Tanoa_Georgetown
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Tanoa_namuvaka.jpg";
		_generalMacro="RoadSign_City_Tanoa_namuvaka";
		displayName="$STR_a3_namuvaka010";
		model="\a3\structures_f_exp\signs\townnames\signtown_01_namuvaka";
	};
	class RoadSign_City_Tanoa_nandai: RoadSign_City_Tanoa_Georgetown
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Tanoa_nandai.jpg";
		_generalMacro="RoadSign_City_Tanoa_nandai";
		displayName="$STR_a3_nandai010";
		model="\a3\structures_f_exp\signs\townnames\signtown_01_nandai";
	};
	class RoadSign_City_Tanoa_nani: RoadSign_City_Tanoa_Georgetown
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Tanoa_nani.jpg";
		_generalMacro="RoadSign_City_Tanoa_nani";
		displayName="$STR_a3_nani010";
		model="\a3\structures_f_exp\signs\townnames\signtown_01_nani";
	};
	class RoadSign_City_Tanoa_nasua: RoadSign_City_Tanoa_Georgetown
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Tanoa_nasua.jpg";
		_generalMacro="RoadSign_City_Tanoa_nasua";
		displayName="$STR_a3_nasua010";
		model="\a3\structures_f_exp\signs\townnames\signtown_01_nasua";
	};
	class RoadSign_City_Tanoa_nicolet: RoadSign_City_Tanoa_Georgetown
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Tanoa_nicolet.jpg";
		_generalMacro="RoadSign_City_Tanoa_nicolet";
		displayName="$STR_a3_nicolet010";
		model="\a3\structures_f_exp\signs\townnames\signtown_01_nicolet";
	};
	class RoadSign_City_Tanoa_ouaoue: RoadSign_City_Tanoa_Georgetown
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Tanoa_ouaoue.jpg";
		_generalMacro="RoadSign_City_Tanoa_ouaoue";
		displayName="$STR_a3_ouaoue010";
		model="\a3\structures_f_exp\signs\townnames\signtown_01_ouaoue";
	};
	class RoadSign_City_Tanoa_oumere: RoadSign_City_Tanoa_Georgetown
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Tanoa_oumere.jpg";
		_generalMacro="RoadSign_City_Tanoa_oumere";
		displayName="$STR_a3_oumere010";
		model="\a3\structures_f_exp\signs\townnames\signtown_01_oumere";
	};
	class RoadSign_City_Tanoa_ovau: RoadSign_City_Tanoa_Georgetown
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Tanoa_ovau.jpg";
		_generalMacro="RoadSign_City_Tanoa_ovau";
		displayName="$STR_a3_ovau010";
		model="\a3\structures_f_exp\signs\townnames\signtown_01_ovau";
	};
	class RoadSign_City_Tanoa_penelo: RoadSign_City_Tanoa_Georgetown
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Tanoa_penelo.jpg";
		_generalMacro="RoadSign_City_Tanoa_penelo";
		displayName="$STR_a3_penelo010";
		model="\a3\structures_f_exp\signs\townnames\signtown_01_penelo";
	};
	class RoadSign_City_Tanoa_petitnicolet: RoadSign_City_Tanoa_Georgetown
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Tanoa_petitnicolet.jpg";
		_generalMacro="RoadSign_City_Tanoa_petitnicolet";
		displayName="$STR_a3_petitnicolet010";
		model="\a3\structures_f_exp\signs\townnames\signtown_01_petitnicolet";
	};
	class RoadSign_City_Tanoa_portboise: RoadSign_City_Tanoa_Georgetown
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Tanoa_portboise.jpg";
		_generalMacro="RoadSign_City_Tanoa_portboise";
		displayName="$STR_a3_portboise010";
		model="\a3\structures_f_exp\signs\townnames\signtown_01_portboise";
	};
	class RoadSign_City_Tanoa_rautake: RoadSign_City_Tanoa_Georgetown
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Tanoa_rautake.jpg";
		_generalMacro="RoadSign_City_Tanoa_rautake";
		displayName="$STR_a3_rautake010";
		model="\a3\structures_f_exp\signs\townnames\signtown_01_rautake";
	};
	class RoadSign_City_Tanoa_regina: RoadSign_City_Tanoa_Georgetown
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Tanoa_regina.jpg";
		_generalMacro="RoadSign_City_Tanoa_regina";
		displayName="$STR_a3_regina010";
		model="\a3\structures_f_exp\signs\townnames\signtown_01_regina";
	};
	class RoadSign_City_Tanoa_rereki: RoadSign_City_Tanoa_Georgetown
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Tanoa_rereki.jpg";
		_generalMacro="RoadSign_City_Tanoa_rereki";
		displayName="$STR_a3_rereki010";
		model="\a3\structures_f_exp\signs\townnames\signtown_01_rereki";
	};
	class RoadSign_City_Tanoa_saintjulien: RoadSign_City_Tanoa_Georgetown
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Tanoa_saintjulien.jpg";
		_generalMacro="RoadSign_City_Tanoa_saintjulien";
		displayName="$STR_a3_saintjulien010";
		model="\a3\structures_f_exp\signs\townnames\signtown_01_saintjulien";
	};
	class RoadSign_City_Tanoa_saintpaul: RoadSign_City_Tanoa_Georgetown
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Tanoa_saintpaul.jpg";
		_generalMacro="RoadSign_City_Tanoa_saintpaul";
		displayName="$STR_a3_saintpaul010";
		model="\a3\structures_f_exp\signs\townnames\signtown_01_saintpaul";
	};
	class RoadSign_City_Tanoa_saioko: RoadSign_City_Tanoa_Georgetown
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Tanoa_saioko.jpg";
		_generalMacro="RoadSign_City_Tanoa_saioko";
		displayName="$STR_a3_saioko010";
		model="\a3\structures_f_exp\signs\townnames\signtown_01_saioko";
	};
	class RoadSign_City_Tanoa_savaka: RoadSign_City_Tanoa_Georgetown
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Tanoa_savaka.jpg";
		_generalMacro="RoadSign_City_Tanoa_savaka";
		displayName="$STR_a3_savaka010";
		model="\a3\structures_f_exp\signs\townnames\signtown_01_savaka";
	};
	class RoadSign_City_Tanoa_savu: RoadSign_City_Tanoa_Georgetown
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Tanoa_savu.jpg";
		_generalMacro="RoadSign_City_Tanoa_savu";
		displayName="$STR_a3_savu010";
		model="\a3\structures_f_exp\signs\townnames\signtown_01_savu";
	};
	class RoadSign_City_Tanoa_taga: RoadSign_City_Tanoa_Georgetown
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Tanoa_taga.jpg";
		_generalMacro="RoadSign_City_Tanoa_taga";
		displayName="$STR_a3_taga010";
		model="\a3\structures_f_exp\signs\townnames\signtown_01_taga";
	};
	class RoadSign_City_Tanoa_tavu: RoadSign_City_Tanoa_Georgetown
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Tanoa_tavu.jpg";
		_generalMacro="RoadSign_City_Tanoa_tavu";
		displayName="$STR_a3_tavu010";
		model="\a3\structures_f_exp\signs\townnames\signtown_01_tavu";
	};
	class RoadSign_City_Tanoa_tobakoro: RoadSign_City_Tanoa_Georgetown
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Tanoa_tobakoro.jpg";
		_generalMacro="RoadSign_City_Tanoa_tobakoro";
		displayName="$STR_a3_tobakoro010";
		model="\a3\structures_f_exp\signs\townnames\signtown_01_tobakoro";
	};
	class RoadSign_City_Tanoa_vagalala: RoadSign_City_Tanoa_Georgetown
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Tanoa_vagalala.jpg";
		_generalMacro="RoadSign_City_Tanoa_vagalala";
		displayName="$STR_a3_vagalala010";
		model="\a3\structures_f_exp\signs\townnames\signtown_01_vagalala";
	};
	class RoadSign_City_Tanoa_yanukka: RoadSign_City_Tanoa_Georgetown
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Tanoa_yanukka.jpg";
		_generalMacro="RoadSign_City_Tanoa_yanukka";
		displayName="$STR_a3_yanukka010";
		model="\a3\structures_f_exp\signs\townnames\signtown_01_yanukka";
	};
	class RoadSign_City_Tanoa_driveCarefully: RoadSign_City_Tanoa_Georgetown
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_Tanoa_driveCarefully.jpg";
		_generalMacro="RoadSign_City_Tanoa_driveCarefully";
		displayName="$STR_Globe_CfgVehicles_RoadSign_City_Tanoa_driveCarefully0";
		model="\a3\structures_f_exp\signs\townnames\townsign_01_please_f";
	};
	class RoadSign_City_empty_01: RoadSign_City_Tanoa_Georgetown
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_empty_01.jpg";
		_generalMacro="RoadSign_City_empty_01";
		displayName="$STR_Globe_empty0";
		model="\a3\structures_f_exp\signs\townnames\townsign_01_template_f";
	};
	class RoadSign_City_empty_03: RoadSign_City_Tanoa_Georgetown
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_empty_03.jpg";
		_generalMacro="RoadSign_City_empty_03";
		displayName="$STR_Globe_CfgVehicles_RoadSign_City_empty_030";
		model="\a3\structures_f_exp\signs\signposts\signpost_02_template_f";
		editorCategory="EdCat_Signs";
		editorSubcategory="EdSubcat_BlankSigns";
	};
	class RoadSign_City_empty_02: RoadSign_City_Tanoa_Georgetown
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\RoadSign_City_empty_02.jpg";
		_generalMacro="RoadSign_City_empty_02";
		displayName="$STR_Globe_CfgVehicles_RoadSign_City_empty_020";
		model="\a3\structures_f_exp\signs\signposts\signpost_01_template_f";
		editorCategory="EdCat_Signs";
		editorSubcategory="EdSubcat_BlankSigns";
	};
};
