class CfgPatches
{
	class A3_Animals_F_Globe_Turtle
	{
		addonRootClass="A3_expEden_Animals_F";
		requiredAddons[]=
		{
			"A3_expEden_Animals_F"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Animal_Base_F;
	class Turtle_F: Animal_Base_F
	{
		editorPreview="\a3\editorpreviews_f_expEden\data\CfgVehicles\Turtle_F.jpg";
		scope=2;
	};
};
