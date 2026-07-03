class CfgPatches
{
	class Air_Globe_Heli_Light_03
	{
		addonRootClass="Air_Globe";
		requiredAddons[]=
		{
			"Air_Globe"
		};
		requiredVersion=0.1;
		units[]=
		{
			"I_Heli_light_03_dynamicLoadout_Globe"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class I_Heli_light_03_dynamicLoadout_F;
	class Helicopter_Base_F;
	class Heli_light_03_base_F: Helicopter_Base_F
	{
		slingCargoDetachAir[]=
		{
			"slingCargoDetachAir0",
			"slingCargoDetachAir1"
		};
		slingCargoRopeBreak[]=
		{
			"slingCargoRopeBreak0",
			"slingCargoRopeBreak1"
		};
		class MFD
		{
			class AirplaneHUD
			{
				class Draw
				{
					class Rockets
					{
						condition="rocket";
					};
				};
			};
		};
	};
	class I_Heli_light_03_dynamicLoadout_Globe: I_Heli_light_03_dynamicLoadout_F
	{
		weapons[]=
		{
			"M134_minigun_Globe",
			"CMFlareLauncher"
		};
	};
};
