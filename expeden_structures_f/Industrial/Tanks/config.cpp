class CfgPatches
{
	class Structures_Globe_Industrial_Tanks
	{
		addonRootClass="A3_Structures_F_Globe";
		requiredAddons[]=
		{
			"Structures_Globe_Industrial"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Land_RailwayCar_01_tank_G_fuel",
			"Land_TrailerCistern_wreck_G_fuel",
			"Land_Tank_rust_G_fuel"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class ThingX;
	class House_Small_F;
	class Land_Tank_rust_G_fuel: House_Small_F
	{
		author="O&T Expansion Eden";
		mapSize=6.0999999;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=1.358;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Land_Tank_rust_F.jpg";
		_generalMacro="Land_Tank_rust_G_fuel";
		scope=1;
		scopeCurator=0;
		displayName="$STR_Globe_CfgVehicles_Land_Tank_rust_G_fuel0";
		model="\A3\Structures_F\Ind\Tank\Tank_rust_F.p3d";
		icon="iconObject_5x2";
		editorCategory="EdCat_Structures_Altis";
		editorSubcategory="EdSubcat_Industrial";
		vehicleClass="Support";
		cost=2000;
		keepHorizontalPlacement=0;
		armor=200;
		supplyRadius=10;
		transportFuel=3000;
		explosionEffect="FuelExplosion";
		secondaryExplosion=100;
		class DestructionEffects
		{
			class FireBig1
			{
				simulation="particles";
				type="ObjectDestructionFire1";
				position="";
				intensity=0.15000001;
				interval=1;
				lifeTime=3;
			};
			class FireBig2
			{
				simulation="particles";
				type="ObjectDestructionFire2";
				position="";
				intensity=0.15000001;
				interval=1;
				lifeTime=3;
			};
			class FireSparksBig1
			{
				simulation="particles";
				type="FireSparks";
				position="";
				intensity=1;
				interval=1;
				lifeTime=2.8;
			};
			class LightBig1
			{
				simulation="light";
				type="ObjectDestructionLight";
				position="";
				intensity=0.001;
				interval=1;
				lifeTime=3;
			};
			class Refract1
			{
				simulation="particles";
				type="ObjectDestructionRefract";
				position="";
				intensity=0.15000001;
				interval=1;
				lifeTime=3;
			};
			class SmokeBig1
			{
				simulation="particles";
				type="ObjectDestructionSmoke";
				position="";
				intensity=0.15000001;
				interval=1;
				lifeTime=3.5;
			};
			class SmokeBig1_2
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2";
				position="";
				intensity=0.15000001;
				interval=1;
				lifeTime=3.5;
			};
			class Sound
			{
				simulation="sound";
				type="Fire";
				position="";
				intensity=1;
				interval=1;
				lifeTime=1;
			};
			class SparksBig1
			{
				simulation="particles";
				type="ObjectDestructionSparks";
				position="";
				intensity=0;
				interval=1;
				lifeTime=3;
			};
		};
	};
	class Land_TrailerCistern_wreck_G_fuel: House_Small_F
	{
		author="O&T Expansion Eden";
		mapSize=5.6100001;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=1.358;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\Land_TrailerCistern_wreck_F.jpg";
		_generalMacro="Land_TrailerCistern_wreck_G_fuel";
		scope=1;
		scopeCurator=0;
		displayName="$STR_Globe_CfgVehicles_Land_TrailerCistern_wreck_G_fuel0";
		model="\A3\Structures_F_Enoch\Wrecks\TrailerCistern_wreck_F.p3d";
		icon="iconObject_1x2";
		editorCategory="EdCat_Wrecks";
		editorSubcategory="EdSubcat_Industrial";
		vehicleClass="Support";
		cost=2000;
		keepHorizontalPlacement=0;
		armor=170;
		supplyRadius=10;
		transportFuel=2600;
		explosionEffect="FuelExplosion";
		secondaryExplosion=1;
		class DestructionEffects
		{
			class FireBig1
			{
				simulation="particles";
				type="ObjectDestructionFire1";
				position="";
				intensity=0.13;
				interval=1;
				lifeTime=3;
			};
			class FireBig2
			{
				simulation="particles";
				type="ObjectDestructionFire2";
				position="";
				intensity=0.13;
				interval=1;
				lifeTime=3;
			};
			class FireSparksBig1
			{
				simulation="particles";
				type="FireSparks";
				position="";
				intensity=1;
				interval=1;
				lifeTime=2.8;
			};
			class LightBig1
			{
				simulation="light";
				type="ObjectDestructionLight";
				position="";
				intensity=0.001;
				interval=1;
				lifeTime=3;
			};
			class Refract1
			{
				simulation="particles";
				type="ObjectDestructionRefract";
				position="";
				intensity=0.13;
				interval=1;
				lifeTime=3;
			};
			class SmokeBig1
			{
				simulation="particles";
				type="ObjectDestructionSmoke";
				position="";
				intensity=0.13;
				interval=1;
				lifeTime=3.5;
			};
			class SmokeBig1_2
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2";
				position="";
				intensity=0.14;
				interval=1;
				lifeTime=3.5;
			};
			class Sound
			{
				simulation="sound";
				type="Fire";
				position="";
				intensity=1;
				interval=1;
				lifeTime=1;
			};
			class SparksBig1
			{
				simulation="particles";
				type="ObjectDestructionSparks";
				position="";
				intensity=0;
				interval=1;
				lifeTime=3;
			};
		};
	};
	class Land_RailwayCar_01_tank_G_fuel: ThingX
	{
		author="O&T Expansion Eden";
		mapSize=5.7199998;
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"wheels_1_rot",
					0
				},
				
				{
					"wheels_2_rot",
					0
				},
				
				{
					"wheels_3_rot",
					0
				},
				
				{
					"wheels_4_rot",
					0
				}
			};
			hide[]=
			{
				"damage"
			};
			verticalOffset=1.276;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_Exp\Data\CfgVehicles\Land_RailwayCar_01_tank_F.jpg";
		_generalMacro="Land_TrailerCistern_wreck_G_fuel";
		scope=1;
		scopeCurator=0;
		displayName="$STR_Globe_CfgVehicles_Land_TrailerCistern_wreck_G_fuel0";
		model="\A3\Structures_F_Enoch\Wrecks\TrailerCistern_wreck_F.p3d";
		icon="iconObject_2x5";
		editorCategory="EdCat_Wrecks";
		editorSubcategory="EdSubcat_Trains";
		vehicleClass="Support";
		cost=2000;
		keepHorizontalPlacement=0;
		armor=185;
		supplyRadius=10;
		transportFuel=2850;
		explosionEffect="FuelExplosion";
		secondaryExplosion=100;
		fuelExplosionPower=5;
		class DestructionEffects
		{
			class FireBig1
			{
				simulation="particles";
				type="ObjectDestructionFire1";
				position="";
				intensity=0.145;
				interval=1;
				lifeTime=3;
			};
			class FireBig2
			{
				simulation="particles";
				type="ObjectDestructionFire2";
				position="";
				intensity=0.145;
				interval=1;
				lifeTime=3;
			};
			class FireSparksBig1
			{
				simulation="particles";
				type="FireSparks";
				position="";
				intensity=1;
				interval=1;
				lifeTime=2.8;
			};
			class LightBig1
			{
				simulation="light";
				type="ObjectDestructionLight";
				position="";
				intensity=0.0015;
				interval=1;
				lifeTime=3;
			};
			class Refract1
			{
				simulation="particles";
				type="ObjectDestructionRefract";
				position="";
				intensity=0.137;
				interval=1;
				lifeTime=3;
			};
			class SmokeBig1
			{
				simulation="particles";
				type="ObjectDestructionSmoke";
				position="";
				intensity=0.137;
				interval=1;
				lifeTime=3.5;
			};
			class SmokeBig1_2
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2";
				position="";
				intensity=0.14;
				interval=1;
				lifeTime=3.5;
			};
			class Sound
			{
				simulation="sound";
				type="Fire";
				position="";
				intensity=1;
				interval=1;
				lifeTime=1;
			};
			class SparksBig1
			{
				simulation="particles";
				type="ObjectDestructionSparks";
				position="";
				intensity=0;
				interval=1;
				lifeTime=3;
			};
		};
	};
};
