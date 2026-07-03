class CfgPatches
{
	class Structures_Globe_Walls_Concrete
	{
		addonRootClass="A3_Structures_F_Globe";
		requiredAddons[]=
		{
			"Structures_Globe_Walls"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Land_Concrete_SmallWall_4m_old",
			"Land_Concrete_SmallWall_8m_old"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Wall_F;
	class Land_Concrete_SmallWall_4m_old: Wall_F
	{
		author="O&T Expansion Eden";
		mapSize=4.02;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=-0.338;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Concrete_SmallWall_4m_old.jpg";
		_generalMacro="Land_Concrete_SmallWall_4m_old";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_Concrete_SmallWall_4m_old0";
		model="\a3\structures_f_enoch\walls\concrete\concrete_smallwall_4m_f.p3d";
		icon="iconObject_7x1";
		editorSubcategory="EdSubcat_Obstacles";
	};
	class Land_Concrete_SmallWall_8m_old: Wall_F
	{
		author="O&T Expansion Eden";
		mapSize=8;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=-0.34999999;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Concrete_SmallWall_8m_old.jpg";
		_generalMacro="Land_Concrete_SmallWall_8m_old";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_Concrete_SmallWall_8m_old0";
		model="\a3\structures_f_enoch\walls\concrete\concrete_smallwall_8m_f.p3d";
		icon="iconObject_10x1";
		editorSubcategory="EdSubcat_Obstacles";
	};
};
