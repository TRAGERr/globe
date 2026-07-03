class CfgPatches
{
	class Air_Globe_Plane_Civil_01
	{
		addonRootClass="Air_Globe";
		requiredAddons[]=
		{
			"Air_Globe"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Plane_Base_F;
	class Plane_Civil_01_base_F: Plane_Base_F
	{
		class Sounds
		{
			class WindNoise_Ext
			{
				sound[]=
				{
					"\a3\sounds_f_exp\vehicles\air\plane_civil_01\btt_ext_wind",
					1.7782794,
					1,
					400
				};
				frequency="(0.1+(1.2*(speed factor[1, 150])))";
				volume="camPos*(speed factor[1, 150])";
			};
			class WindNoise_Int
			{
				sound[]=
				{
					"\a3\sounds_f_exp\vehicles\air\plane_civil_01\btt_int_wind",
					1,
					1
				};
				frequency="(0.1+(1.2*(speed factor[1, 150])))";
				volume="(1-camPos)*(speed factor[1, 150])";
			};
		};
	};
};
