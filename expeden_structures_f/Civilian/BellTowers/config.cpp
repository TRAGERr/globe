class CfgPatches
{
	class Structures_Globe_Civilian_BellTowers
	{
		addonRootClass="A3_Structures_F_Globe";
		requiredAddons[]=
		{
			"A3_Structures_F_Globe_Civilian"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgVehicles
{
	class House_Small_F;
	class Land_BellTower_01_V1_F: House_Small_F
	{
		class UserActions
		{
			class RingTheBell
			{
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\take_ca.paa' size='2.5' />";
				displayName="$STR_a3_c_cfgvehicles_land_chapel_02_base_f_useractions_ringthebell0";
				position="";
				radius=3.5;
				onlyForPlayer=1;
				condition="alive this && simulationEnabled this";
				statement="playSound3D ['A3\Sounds_F\ambient\objects\bell_small.wss', this, false, [getPosASL this # 0, getPosASL this # 1, ((getPosASL this # 2) + 6)], 1.4125376, 1, 500, 0, false];";
			};
		};
	};
	class Land_BellTower_01_V2_F: House_Small_F
	{
		class UserActions
		{
			class RingTheBell
			{
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\take_ca.paa' size='2.5' />";
				displayName="$STR_a3_c_cfgvehicles_land_chapel_02_base_f_useractions_ringthebell0";
				position="";
				radius=3.5;
				onlyForPlayer=1;
				condition="alive this && simulationEnabled this";
				statement="playSound3D ['A3\Sounds_F\ambient\objects\bell_small.wss', this, false, [getPosASL this # 0, getPosASL this # 1, ((getPosASL this # 2) + 6)], 1.4125376, 1, 500, 0, false];";
			};
		};
	};
};
