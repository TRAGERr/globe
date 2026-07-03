class CfgPatches
{
	class Structures_Globe_Walls_Pipe
	{
		addonRootClass="A3_Structures_F_Globe";
		requiredAddons[]=
		{
			"Structures_Globe_Walls"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Land_PipeWall_concretel_8m_old"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Wall_F;
	class Land_PipeFence_02_s_4m_noLC_F: Wall_F
	{
		editorPreview="\A3\EditorPreviews_F_Exp\Data\CfgVehicles\Land_PipeFence_02_s_4m_F.jpg";
		scope=2;
		scopeCurator=0;
		displayName="$STR_Globe_CfgVehicles_Land_PipeFence_02_s_4m_noLC_F0";
	};
	class Land_PipeFence_02_s_8m_noLC_F: Wall_F
	{
		editorPreview="\A3\EditorPreviews_F_Exp\Data\CfgVehicles\Land_PipeFence_02_s_8m_F.jpg";
		scope=2;
		scopeCurator=0;
		displayName="$STR_Globe_CfgVehicles_Land_PipeFence_02_s_8m_noLC_F0";
	};
	class Land_PipeWall_concretel_8m_old: Wall_F
	{
		author="O&T Expansion Eden";
		mapSize=8.0299997;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.74400002;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_PipeWall_concretel_8m_old.jpg";
		_generalMacro="Land_PipeWall_concretel_8m_old";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_PipeWall_concretel_8m_old0";
		model="\a3\structures_f_enoch\walls\concrete\pipewall_concretel_8m_f";
		icon="iconObject_7x1";
		editorCategory="EdCat_Fences";
		editorSubcategory="EdSubcat_Residential_City";
		vehicleClass="Structures_Fences";
	};
};
