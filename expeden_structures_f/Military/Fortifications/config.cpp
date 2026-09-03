class CfgPatches
{
	class Structures_Globe_Military_Fortifications
	{
		addonRootClass="A3_Structures_F_Globe";
		requiredAddons[]=
		{
			"A3_Structures_F_Globe_Military"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Land_Razorwire_01_G",
			"BagFence_couple",
			"BagFence_couple_green"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class NonStrategic;
	class Land_BagFence_End_F;
	class BagFence_couple: Land_BagFence_End_F
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.01490911;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\BagFence_Couple.jpg";
		_generalMacro="BagFence_couple";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_BagFence_Couple0";
		model="a3\Props_F_Decade\Military\Decorative\BattlefieldCross_01_F.p3d";
		class AnimationSources
		{
			class Hide_Sandbags
			{
				source="user";
				initPhase=0;
				animPeriod=0.5;
			};
			class Hide_Weapon
			{
				source="user";
				initPhase=1;
				animPeriod=0.5;
			};
			class Hide_Helmet
			{
				source="user";
				initPhase=1;
				animPeriod=0.5;
			};
			class Hide_Base_Generic
			{
				source="user";
				initPhase=1;
				animPeriod=0.5;
			};
			class Hide_Base_NATO
			{
				source="user";
				initPhase=1;
				animPeriod=0.5;
			};
			class Hide_Base_CSAT
			{
				source="user";
				initPhase=1;
				animPeriod=0.5;
			};
			class Hide_Base_AAF
			{
				source="user";
				initPhase=1;
				animPeriod=0.5;
			};
			class Hide_Base_LDF
			{
				source="user";
				initPhase=1;
				animPeriod=0.5;
			};
		};
		hiddenSelections[]=
		{
			"Camo_2"
		};
		hiddenSelectionsTextures[]=
		{
			"a3\Props_F_Decade\Military\Decorative\Data\sandbag_01_CO.paa"
		};
	};
	class BagFence_couple_green: BagFence_couple
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\BagFence_couple_green.jpg";
		_generalMacro="BagFence_couple_green";
		displayName="$STR_Globe_CfgVehicles_BagFence_couple_green0";
		hiddenSelectionsTextures[]=
		{
			"a3\structures_f_exp\military\fortifications\data\sandbag_01_green_co.paa"
		};
		editorCategory="EdCat_Structures_Tanoa";
	};
	class Land_Razorwire_01_G: NonStrategic
	{
		author="O&T Expansion Eden";
		mapSize=8.46;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.755;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Land_Razorwire_F.jpg";
		_generalMacro="Land_Razorwire_01_G";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_Razorwire_01_G0";
		model="\A3\Structures_F\Mil\Fortification\Razorwire_F.p3d";
		icon="iconObject_4x1";
		editorCategory="EdCat_Fences";
		editorSubcategory="EdSubcat_Military";
		vehicleClass="Fortifications";
		destrType="DestructTent";
		cost=100;
		armor=100;
		class EventHandlers
		{
			class Globe_rzrWreEH
			{
				postinit="(_this # 0) spawn expEden_fnc_razorWire;";
			};
		};
		class AttributeValues
		{
			ObjectCollision=0;
		};
	};
};
