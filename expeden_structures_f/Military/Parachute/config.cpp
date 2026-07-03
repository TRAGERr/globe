class CfgPatches
{
	class Structures_Globe_Military_Parachute
	{
		addonRootClass="A3_Structures_F_Globe";
		requiredAddons[]=
		{
			"A3_Structures_F_Globe_Military"
		};
		requiredVersion=0.1;
		units[]=
		{
			"ParachuteInfantry_01",
			"ParachuteCargo_01",
			"ParachuteCargo_02"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Items_base_F;
	class ParachuteInfantry_01: Items_base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		mapSize=20;
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_air_parachute_s"
				};
				speechPlural[]=
				{
					"veh_air_parachute_p"
				};
			};
		};
		textSingular="$STR_A3_nameSound_veh_air_parachute_s";
		textPlural="$STR_A3_nameSound_veh_air_parachute_p";
		nameSound="veh_air_parachute_s";
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.176;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\ParachuteInfantry_01.jpg";
		_generalMacro="ParachuteInfantry_01";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_ParachuteInfantry_010";
		model="\A3\Air_F_Beta\Parachute_01\Parachute_01_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\weapons_f\Ammoboxes\Data\Supplydrop_OPFOR_co.paa"
		};
		icon="iconParachute";
		picture="\A3\Air_F_Beta\Parachute_01\Data\UI\Portrait_Parachute_01_CA.paa";
		destrType="DestructNo";
		accuracy=1000;
		editorSubcategory="EdSubcat_Military";
	};
	class ParachuteCargo_01: Items_base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		mapSize=20;
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_air_parachute_s"
				};
				speechPlural[]=
				{
					"veh_air_parachute_p"
				};
			};
		};
		textSingular="$STR_A3_nameSound_veh_air_parachute_s";
		textPlural="$STR_A3_nameSound_veh_air_parachute_p";
		nameSound="veh_air_parachute_s";
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.176;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\ParachuteCargo_01.jpg";
		_generalMacro="ParachuteCargo_01";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_ParachuteCargo_010";
		model="\A3\Air_F_Beta\Parachute_02\Parachute_02_F.p3d";
		icon="iconParachute";
		picture="\A3\Air_F_Beta\Parachute_01\Data\UI\Portrait_Parachute_01_CA.paa";
		destrType="DestructNo";
		accuracy=1000;
		editorSubcategory="EdSubcat_Military";
	};
	class SpaceshipCapsule_01_parachute_static: Items_base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		mapSize=60;
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_air_parachute_s"
				};
				speechPlural[]=
				{
					"veh_air_parachute_p"
				};
			};
		};
		textSingular="$STR_A3_nameSound_veh_air_parachute_s";
		textPlural="$STR_A3_nameSound_veh_air_parachute_p";
		nameSound="veh_air_parachute_s";
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.176;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\a3\editorpreviews_f_decade\Data\CfgVehicles\SpaceshipCapsule_01_parachute_F.jpg";
		_generalMacro="SpaceshipCapsule_01_parachute_static";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgVehicles_SpaceshipCapsule_01_parachute_F0";
		model="\a3\Props_F_Decade\Spaceship\SpaceshipCapsule_01_parachute_F.p3d";
		icon="iconParachute";
		picture="\A3\Air_F_Beta\Parachute_01\Data\UI\Portrait_Parachute_01_CA.paa";
		destrType="DestructNo";
		accuracy=1000;
		editorSubcategory="EdSubcat_Space";
	};
};
