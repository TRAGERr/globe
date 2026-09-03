class CfgPatches
{
	class Structures_Globe_Industrial_Cargo
	{
		addonRootClass="A3_Structures_F_Globe";
		requiredAddons[]=
		{
			"Structures_Globe_Industrial"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Cargo20_VR_damaged",
			"Cargo20_blue_damaged",
			"Cargo20_military_green_damaged",
			"Cargo20_orange_damaged",
			"Cargo20_light_green_damaged",
			"Cargo20_cyan_damaged",
			"Cargo20_IDAP_damaged"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class ThingX;
	class Cargo_base_F: ThingX
	{
		class Attributes
		{
			class CargoRandomColor
			{
				displayName="$STR_A3_rscdisplayarsenal_buttonrandom";
				tooltip="$STR_Globe_CfgVehicles_Cargo_base_F_Attributes_CargoRandomColor_tooltip";
				property="CargoRandomColor";
				control="Checkbox";
				defaultValue=0;
				expression="if (_value isEqualTo true) then {_this spawn expEden_fnc_randomizeCargo}";
			};
		};
	};
	class CargoDamaged_base_F: Cargo_base_F
	{
		model="\A3\Soft_F_Gamma\Truck_01\Proxy_box_damage_F";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		class AnimationSources
		{
		};
		class UserActions
		{
		};
		class Attributes
		{
		};
		numberOfDoors=0;
	};
	class Cargo20_blue_damaged: CargoDamaged_base_F
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=1.324;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Cargo20_blue_damaged.jpg";
		_generalMacro="Cargo20_blue_damaged";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Cargo20_blue_damaged0";
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"a3\structures_f\data\metal\containers\containers_colors_01_co.paa"
		};
	};
	class Cargo20_military_green_damaged: CargoDamaged_base_F
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=1.324;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Cargo20_military_green_damaged.jpg";
		_generalMacro="Cargo20_military_green_damaged";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Cargo20_military_green_damaged0";
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"a3\structures_f\data\metal\containers\containers_colors_02_co.paa"
		};
	};
	class Cargo20_orange_damaged: CargoDamaged_base_F
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=1.324;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Cargo20_orange_damaged.jpg";
		_generalMacro="Cargo20_orange_damaged";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Cargo20_orange_damaged0";
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"a3\structures_f\data\metal\containers\containers_colors_03_co.paa"
		};
	};
	class Cargo20_light_green_damaged: CargoDamaged_base_F
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=1.324;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Cargo20_light_green_damaged.jpg";
		_generalMacro="Cargo20_light_green_damaged";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Cargo20_light_green_damaged0";
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"a3\structures_f\data\metal\containers\containers_colors_04_co.paa"
		};
	};
	class Cargo20_cyan_damaged: CargoDamaged_base_F
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=1.324;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Cargo20_cyan_damaged.jpg";
		_generalMacro="Cargo20_cyan_damaged";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Cargo20_cyan_damaged0";
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"a3\structures_f\data\metal\containers\containers_colors_05_co.paa"
		};
	};
	class Cargo20_IDAP_damaged: CargoDamaged_base_F
	{
		author="O&T Expansion Eden";
		mapSize=15.28;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=1.324;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Cargo20_IDAP_damaged.jpg";
		_generalMacro="Cargo20_IDAP_damaged";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Cargo20_IDAP_damaged0";
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"a3\structures_f_orange\industrial\cargo\data\cargo_idap_f_co.paa"
		};
	};
	class Cargo20_VR_damaged: CargoDamaged_base_F
	{
		author="O&T Expansion Eden";
		mapSize=6.1900001;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=1.324;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Cargo20_VR_damaged.jpg";
		_generalMacro="Cargo20_VR_damaged";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Cargo20_VR_damaged0";
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"a3\structures_f_bootcamp\ind\cargo\data\containers_colors_06_co.paa"
		};
	};
};
