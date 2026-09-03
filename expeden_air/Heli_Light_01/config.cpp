class CfgPatches
{
	class Air_Globe_Heli_Light_01
	{
		addonRootClass="Air_Globe";
		requiredAddons[]=
		{
			"Air_Globe"
		};
		requiredVersion=0.1;
		units[]=
		{
			"B_Heli_Light_01_dynamicLoadout_Globe"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class B_Heli_Light_01_dynamicLoadout_F;
	class Helicopter_Base_F;
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class AnimationSources;
	};
	class Heli_Light_01_base_F: Helicopter_Base_H
	{
		class AnimationSources: AnimationSources
		{
			class BenchL_Up;
			class BenchR_Up;
		};
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
	};
	class Heli_Light_01_unarmed_base_F: Heli_Light_01_base_F
	{
		class AnimationSources: AnimationSources
		{
			class BenchL_Up: BenchL_Up
			{
				lockCargo[]={1,4};
				scope=2;
				sound="BenchAnimationSound_Heli_Light_01";
				soundPosition="z_benchl_axis";
			};
			class BenchR_Up: BenchR_Up
			{
				lockCargo[]={2,3};
				scope=2;
				sound="BenchAnimationSound_Heli_Light_01";
				soundPosition="z_benchr_axis";
			};
		};
		class UserActions
		{
			class BenchL_Fold
			{
				radius=2;
				position="z_benchl_axis";
				condition="((this animationPhase 'BenchL_Up') == 0) && (alive this && !(player in this)) && ((this animationPhase 'AddBenches') == 1) && (isNull (this turretUnit [2]) && isNull (this turretUnit [3]))";
				statement="this animate ['BenchL_Up', 1]; [[2],[3]] findIF {this lockTurret [_x,true]};";
			};
			class BenchR_Fold: BenchL_Fold
			{
				position="z_benchR_axis";
				condition="((this animationPhase 'BenchR_Up') == 0) && (alive this && !(player in this)) && ((this animationPhase 'AddBenches') == 1) && (isNull (this turretUnit [1]) && isNull (this turretUnit [4]))";
				statement="this animate ['BenchR_Up', 1]; [[1],[4]] findIF {this lockTurret [_x,true]};";
			};
			class BenchL_Unfold: BenchL_Fold
			{
				condition="((this animationPhase 'BenchL_Up') == 1) && (alive this && !(player in this)) && ((this animationPhase 'AddBenches') == 1) && (isNull (this turretUnit [2]) && isNull (this turretUnit [3]))";
				statement="this animate ['BenchL_Up', 0]; [[2],[3]] findIF {this lockTurret [_x,false]};";
			};
			class BenchR_Unfold: BenchL_Unfold
			{
				position="z_benchR_axis";
				condition="((this animationPhase 'BenchR_Up') == 1) && (alive this && !(player in this)) && ((this animationPhase 'AddBenches') == 1) && (isNull (this turretUnit [1]) && isNull (this turretUnit [4]))";
				statement="this animate ['BenchR_Up', 0]; [[1],[4]] findIF {this lockTurret [_x,false]};";
			};
		};
	};
	class B_Heli_Light_01_dynamicLoadout_Globe: B_Heli_Light_01_dynamicLoadout_F
	{
		scope=2;
		scopeCurator=2;
		weapons[]=
		{
			"M134_minigun_Globe_Heli_Light_01"
		};
	};
};
