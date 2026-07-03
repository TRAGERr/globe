class CfgPatches
{
	class Structures_Globe_Research
	{
		addonRootClass="A3_Structures_F_Globe";
		requiredAddons[]=
		{
			"A3_Structures_F_Globe"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Land_Dome_Big_WIP_cage_decal",
			"Land_Dome_Big_WIP_entrance_decal",
			"Land_Dome_Big_WIP_base_decal",
			"Land_Dome_Small_decal"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class House_Small_F;
	class Land_Dome_Big_WIP_cage_decal: House_Small_F
	{
		author="O&T Expansion Eden";
		mapSize=54.349998;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=10.187;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Dome_Big_WIP_cage_decal.jpg";
		_generalMacro="Land_Dome_Big_WIP_cage_decal";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_Dome_Big_WIP_cage_decal0";
		model="\a3\structures_f\research\dome_b_cage_f.p3d";
		keepHorizontalPlacement=0;
		icon="iconObject_circle";
		editorCategory="EdCat_Structures_Altis";
		editorSubcategory="EdSubcat_Military";
		vehicleClass="Structures_Commercial";
		destrType="DestructNo";
		cost=130000;
		class DestructionEffects
		{
		};
	};
	class Land_Dome_Big_WIP_entrance_decal: House_Small_F
	{
		author="O&T Expansion Eden";
		mapSize=5.349998;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.91869998;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Dome_Big_WIP_entrance_decal.jpg";
		_generalMacro="Land_Dome_Big_WIP_entrance_decal";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_Dome_Big_WIP_entrance_decal0";
		model="\a3\structures_f\research\dome_b_cargo_entrance_f.p3d";
		keepHorizontalPlacement=0;
		icon="iconObject_1x4";
		editorCategory="EdCat_Structures_Altis";
		editorSubcategory="EdSubcat_Military";
		vehicleClass="Structures_Commercial";
		destrType="DestructNo";
		cost=100;
		class DestructionEffects
		{
		};
	};
	class Land_Dome_Big_WIP_base_decal: House_Small_F
	{
		author="O&T Expansion Eden";
		mapSize=54.349998;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.91869998;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Dome_Big_WIP_base_decal.jpg";
		_generalMacro="Land_Dome_Big_WIP_base_decal";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_Dome_Big_WIP_base_decal0";
		model="\a3\structures_f\research\dome_b_person_entrance_f.p3d";
		keepHorizontalPlacement=0;
		icon="iconObject_circle";
		editorCategory="EdCat_Structures_Altis";
		editorSubcategory="EdSubcat_Military";
		vehicleClass="Structures_Commercial";
		destrType="DestructNo";
		cost=100;
		class DestructionEffects
		{
		};
	};
	class Land_Dome_Small_decal: House_Small_F
	{
		author="O&T Expansion Eden";
		mapSize=36.52;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=6.9710002;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Dome_Small_decal.jpg";
		_generalMacro="Land_Dome_Small_decal";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_Dome_Small_decal0";
		model="\a3\structures_f\research\dome_small_plates_f.p3d";
		icon="iconObject_circle";
		editorCategory="EdCat_Structures_Altis";
		editorSubcategory="EdSubcat_Military";
		vehicleClass="Structures_Commercial";
		cost=80000;
	};
};
