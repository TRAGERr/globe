class CfgPatches
{
	class Structures_Globe_Naval_Buoys
	{
		addonRootClass="A3_Structures_F_Globe";
		requiredAddons[]=
		{
			"Structures_Globe_Naval"
		};
		requiredVersion=0.1;
		units[]=
		{
			"BuoyBig_disabled"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Land_BuoyBig_F;
	class BuoyBig_disabled: Land_BuoyBig_F
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]=
			{
				"zasleh",
				"zadni svetlo",
				"brzdove svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=2.3559999;
			verticalOffsetWorld=0;
			init="''";
		};
		_generalMacro="BuoyBig_disabled";
		displayName="$STR_Globe_CfgVehicles_BuoyBig_disabled0";
		class AnimationSources
		{
		};
		class MarkerLights
		{
		};
	};
};
