class CfgPatches
{
	class Props_Globe_Items_Tools
	{
		addonRootClass="A3_Props_F_Globe";
		requiredAddons[]=
		{
			"A3_Props_F_Globe_Items"
		};
		requiredVersion=0.1;
		units[]=
		{
			"ButaneTorch_Full",
			"ButaneCanister_Full",
			"GasCanister_Full",
			"GasCooker_Full",
			"CanisterFuel_Full",
			"FireExtinguisher_Full",
			"Hook_01",
			"Rope_02_segment"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Items_base_F;
	class Hook_01_base: Items_base_F
	{
		scope=0;
		scopeCurator=0;
		model="\A3\Data_f\Hook\Hook_F.p3d";
		icon="iconObject_1x1";
		editorSubcategory="EdSubcat_Tools";
		vehicleClass="Cargo";
	};
	class Hook_01: Hook_01_base
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.024;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Hook_01.jpg";
		_generalMacro="Hook_01";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Hook_010";
	};
	class Rope_02_segment: Hook_01
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.024;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Rope_02_segment.jpg";
		_generalMacro="Rope_02_segment";
		model="\A3\Data_f\proxies\Rope\Rope.p3d";
		displayName="$STR_Globe_CfgVehicles_Rope_02_segment0";
	};
	class FireExtinguisher_Full: Items_base_F
	{
		author="O&T Expansion Eden";
		mapSize=0.38999999;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.38499999;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Land_FireExtinguisher_F.jpg";
		_generalMacro="FireExtinguisher_Full";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_FireExtinguisher_Full0";
		model="\A3\Structures_F_EPA\Items\Tools\FireExtinguisher_F.p3d";
		icon="iconObject_elipse_H";
		editorSubcategory="EdSubcat_Tools";
		class EventHandlers
		{
			class Globe_HitFE
			{
				hitPart="_this spawn expEden_fnc_effectHitFireExtinguisher";
			};
		};
	};
	class ButaneTorch_Full: Items_base_F
	{
		author="O&T Expansion Eden";
		mapSize=0.17;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.131;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Land_ButaneTorch_F.jpg";
		_generalMacro="ButaneTorch_Full";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_ButaneTorch_Full0";
		model="\A3\Structures_F_EPA\Items\Tools\ButaneTorch_F.p3d";
		icon="iconObject_2x1";
		editorSubcategory="EdSubcat_Tools";
		destrType="DestructBuilding";
		armor=1;
		class DestructionEffects
		{
			class Explo
			{
				simulation="particles";
				type="WinchDestructionExplo";
				position="";
				intensity=1;
				interval=1;
				lifeTime=0.059999999;
			};
			class Sparks
			{
				simulation="particles";
				type="WinchDestructionSparks";
				position="";
				intensity=1;
				interval=1;
				lifeTime=0.1;
			};
			class Sound1
			{
				simulation="sound";
				type="ButaneExplosion";
				position="";
				intensity=1;
				interval=1;
				lifeTime=1;
			};
			class Sound2
			{
				simulation="sound";
				type="ButaneExplosionTail";
				position="";
				intensity=1;
				interval=1;
				lifeTime=1;
			};
			class Destroy
			{
				simulation="destroy";
				type="InstantDestruction";
				position="";
				intensity=1;
				interval=1;
				lifeTime=1;
			};
		};
	};
	class ButaneCanister_Full: Items_base_F
	{
		author="O&T Expansion Eden";
		mapSize=0.079999998;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.098999999;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Land_ButaneCanister_F.jpg";
		_generalMacro="ButaneCanister_Full";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_ButaneCanister_Full0";
		model="\A3\Structures_F_EPA\Items\Tools\ButaneCanister_F.p3d";
		icon="iconObject_circle";
		editorSubcategory="EdSubcat_Tools";
		destrType="DestructBuilding";
		armor=1;
		class DestructionEffects
		{
			class Explo
			{
				simulation="particles";
				type="WinchDestructionExplo";
				position="";
				intensity=1;
				interval=1;
				lifeTime=0.059999999;
			};
			class Sparks
			{
				simulation="particles";
				type="WinchDestructionSparks";
				position="";
				intensity=1;
				interval=1;
				lifeTime=0.1;
			};
			class Sound1
			{
				simulation="sound";
				type="ButaneExplosion";
				position="";
				intensity=1;
				interval=1;
				lifeTime=1;
			};
			class Sound2
			{
				simulation="sound";
				type="ButaneExplosionTail";
				position="";
				intensity=1;
				interval=1;
				lifeTime=1;
			};
			class Destroy
			{
				simulation="destroy";
				type="InstantDestruction";
				position="";
				intensity=1;
				interval=1;
				lifeTime=1;
			};
		};
	};
	class GasCanister_Full: Items_base_F
	{
		author="O&T Expansion Eden";
		mapSize=0.13;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.055;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Land_GasCanister_F.jpg";
		_generalMacro="GasCanister_Full";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_GasCanister_Full0";
		model="\A3\Structures_F_EPA\Items\Tools\GasCanister_F.p3d";
		icon="iconObject_circle";
		editorSubcategory="EdSubcat_Tools";
		destrType="DestructBuilding";
		armor=1;
		class DestructionEffects
		{
			class Explo
			{
				simulation="particles";
				type="WinchDestructionExplo";
				position="";
				intensity=1;
				interval=1;
				lifeTime=0.059999999;
			};
			class Sparks
			{
				simulation="particles";
				type="WinchDestructionSparks";
				position="";
				intensity=1;
				interval=1;
				lifeTime=0.1;
			};
			class Sound1
			{
				simulation="sound";
				type="ButaneExplosion";
				position="";
				intensity=1;
				interval=1;
				lifeTime=1;
			};
			class Sound2
			{
				simulation="sound";
				type="ButaneExplosionTail";
				position="";
				intensity=1;
				interval=1;
				lifeTime=1;
			};
			class Destroy
			{
				simulation="destroy";
				type="InstantDestruction";
				position="";
				intensity=1;
				interval=1;
				lifeTime=1;
			};
		};
	};
	class GasCooker_Full: Items_base_F
	{
		author="O&T Expansion Eden";
		mapSize=0.16;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.094999999;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Land_GasCooker_F.jpg";
		_generalMacro="GasCooker_Full";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_GasCooker_Full0";
		model="\A3\Structures_F_EPA\Items\Tools\GasCooker_F.p3d";
		icon="iconObject_circle";
		editorSubcategory="EdSubcat_Tools";
		destrType="DestructBuilding";
		armor=1;
		class DestructionEffects
		{
			class Explo
			{
				simulation="particles";
				type="WinchDestructionExplo";
				position="";
				intensity=1;
				interval=1;
				lifeTime=0.059999999;
			};
			class Sparks
			{
				simulation="particles";
				type="WinchDestructionSparks";
				position="";
				intensity=1;
				interval=1;
				lifeTime=0.1;
			};
			class Sound1
			{
				simulation="sound";
				type="ButaneExplosion";
				position="";
				intensity=1;
				interval=1;
				lifeTime=1;
			};
			class Sound2
			{
				simulation="sound";
				type="ButaneExplosionTail";
				position="";
				intensity=1;
				interval=1;
				lifeTime=1;
			};
			class Destroy
			{
				simulation="destroy";
				type="InstantDestruction";
				position="";
				intensity=1;
				interval=1;
				lifeTime=1;
			};
		};
	};
	class CanisterFuel_Full: Items_base_F
	{
		author="O&T Expansion Eden";
		mapSize=0.38999999;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.273;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Land_CanisterFuel_F.jpg";
		_generalMacro="CanisterFuel_Full";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_CanisterFuel_Full0";
		model="\A3\Structures_F\Items\Vessels\CanisterFuel_F.p3d";
		icon="iconObject_5x2";
		editorSubcategory="EdSubcat_Tools";
		transportFuel=12;
		supplyRadius=2.4000001;
		disableInventory=1;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"a3\structures_f\items\vessels\data\canisterfuel_co.paa"
		};
		destrType="DestructBuilding";
		armor=18;
		class DestructionEffects
		{
			class Light
			{
				simulation="light";
				type="SmallFirePlaceLight";
				position="";
				intensity=0.80000001;
				interval=1;
				lifeTime=1;
			};
			class FuelFire
			{
				simulation="particles";
				type="FuelFireSmall";
				position="";
				intensity=1;
				interval=1;
				lifeTime=5.4499998;
			};
			class FuelSmoke
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2Smallx";
				position="";
				intensity=0.050000008;
				interval=1;
				lifeTime=0.5;
			};
			class Sound1
			{
				simulation="sound";
				type="Fire";
				position="";
				intensity=1;
				interval=1;
				lifeTime=1;
			};
			class Sound2
			{
				simulation="sound";
				type="ButaneExplosionTail";
				position="";
				intensity=1;
				interval=1;
				lifeTime=1;
			};
		};
		class Attributes
		{
			class SwitchTexture
			{
				property="SwitchTexture";
				displayName="$STR_A3_expEden_Leaflet_05_announcements_Attributes_SwitchTexture_displayName_F0";
				control="Combo";
				expression="if (_value isNotEqualTo 'random') then {_this setObjectTextureGlobal [0, _value]} else {_this setObjectTextureGlobal [0, selectRandom [ 	'a3\structures_f\items\vessels\data\canisterfuel_co.paa',			'a3\Props_F_Orange\Humanitarian\Supplies\Data\canisterfuel_red_co.paa', 		'a3\Props_F_Orange\Humanitarian\Supplies\Data\canisterfuel_Blue_co.paa',		'a3\Props_F_Orange\Humanitarian\Supplies\Data\canisterfuel_White_co.paa'			]]}";
				defaultValue="'random'";
				class values
				{
					class 1
					{
						name="$STR_A3_cfgVehicles_Land_CanisterFuel_F0";
						value="a3\structures_f\items\vessels\data\canisterfuel_co.paa";
						picture="a3\structures_f\items\vessels\data\canisterfuel_co.paa";
					};
					class 2
					{
						name="$STR_A3_CfgVehicles_Land_CanisterFuel_Red_F0";
						value="a3\Props_F_Orange\Humanitarian\Supplies\Data\canisterfuel_red_co.paa";
						picture="a3\Props_F_Orange\Humanitarian\Supplies\Data\canisterfuel_red_co.paa";
					};
					class 3
					{
						name="$STR_A3_CfgVehicles_Land_CanisterFuel_Blue_F0";
						value="a3\Props_F_Orange\Humanitarian\Supplies\Data\canisterfuel_Blue_co.paa";
						picture="a3\Props_F_Orange\Humanitarian\Supplies\Data\canisterfuel_Blue_co.paa";
					};
					class 4
					{
						name="$STR_A3_CfgVehicles_Land_CanisterFuel_White_F0";
						value="a3\Props_F_Orange\Humanitarian\Supplies\Data\canisterfuel_White_co.paa";
						picture="a3\Props_F_Orange\Humanitarian\Supplies\Data\canisterfuel_White_co.paa";
					};
					class 5
					{
						name="$STR_A3_RscDisplayArsenal_buttonRandom";
						value="random";
						picture="\a3\ui_f\data\map\markers\handdrawn\unknown_ca.paa";
					};
				};
			};
		};
		class EventHandlers
		{
			class Globe_burntCanisterFuel
			{
				killed="if (isServer) then {(_this # 0) setObjectTextureGlobal [0,'a3\armor_f_tank\mbt_04\data\mbt_04_decals_dirt_co.paa']};";
			};
		};
	};
};
