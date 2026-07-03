class CfgPatches
{
	class A3_Props_F_Globe_Military_Ammo
	{
		addonRootClass="A3_Props_F_Globe";
		requiredAddons[]=
		{
			"A3_Props_F_Globe_Military"
		};
		requiredVersion=0.1;
		units[]=
		{
			"DismantledWeapon_HeliHeavyMinigun_01_G_left",
			"DismantledWeapon_HeliHeavyMinigun_01_G_right",
			"Land_PylonPod_RocketDARDAGR_G",
			"TitanStaticLaunchTube_01_G",
			"TitanCommandLaunchUnit_01_G",
			"Titan_missile_AA",
			"Titan_missile_AA_fly",
			"Titan_missile_AT",
			"Titan_missile_AT_fly",
			"Titan_missile_AP",
			"Titan_missile_AP_fly",
			"Land_pylonpod_12x_rocket_dar_f",
			"MRL_Magazine_01_launcher",
			"MRL_Magazine_01_launcher_empty",
			"Land_pylonpod_rocket_skyfire_f"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Land_ANM8_white_F;
	class Items_base_F;
	class Land_pylonpod_rocket_skyfire_f: Items_base_F
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.89999998;
			verticalOffsetWorld=0;
			init="''";
		};
		scope=2;
		scopeCurator=2;
		displayName="$STR_expEden_Land_pylonpod_rocket_skyfire_f";
		_generalMacro="Land_pylonpod_rocket_skyfire_f";
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Land_pylonpod_rocket_skyfire_f.jpg";
		model="\A3\Weapons_F\DynamicLoadout\pylonpod_rocket_skyfire_f.p3d";
		editorSubcategory="EdSubcat_Airports";
		icon="iconObject_2x3";
		class Attributes
		{
			class randomRockets
			{
				displayName="$STR_A3_RscDisplayArsenal_ButtonRandom";
				property="randomRockets";
				control="CheckboxStateReversed";
				defaultValue="false";
				expression="if (_value) then {_this animate ['rocketa1', ceil random 19, true]; _this setVariable ['rocketPodRandom',true,isServer]}else{_this setVariable ['rocketPodRandom',false,isServer]}";
			};
			class rocketa1_source
			{
				displayName="$STR_A3_Globe_CfgVehicles_Land_pylonpod_rocket_skyfire_f_Attributes_rocketa1_source0";
				tooltip="from 0 to 19";
				property="rocketa1";
				control="edit";
				defaultValue=0;
				validate="number";
				expression="if (_this getVariable 'rocketPodRandom' isNotEqualTo true) then {_this animate ['rocketa1', _value, true]}; ";
			};
		};
	};
	class MRL_Magazine_01_launcher: Items_base_F
	{
		author="O&T Expansion Eden";
		mapSize=2.22001;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.119;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\MRL_Magazine_01_launcher.jpg";
		_generalMacro="MRL_Magazine_01_launcher";
		displayName="$STR_Globe_CfgVehicles_MRL_Magazine_01_launcher0";
		scope=2;
		scopeCurator=2;
		editorCategory="EdCat_Things";
		editorSubcategory="EdSubcat_Airports";
		model="a3\Soft_F_Gamma\Truck_02\mrl_launcher.p3d";
		icon="iconObject_1x5";
		reversed=1;
	};
	class MRL_Magazine_01_launcher_empty: MRL_Magazine_01_launcher
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\MRL_Magazine_01_launcher_empty.jpg";
		_generalMacro="MRL_Magazine_01_launcher_empty";
		displayName="$STR_Globe_CfgVehicles_MRL_Magazine_01_launcher_empty0";
		model="a3\Soft_F_Gamma\Truck_02\mrl_launcher_empty.p3d";
	};
	class Titan_missile_AA: Land_ANM8_white_F
	{
		author="O&T Expansion Eden";
		_generalMacro="Titan_missile_AA";
		displayName="$STR_A3_CfgMagazines_Titan_AA0";
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Titan_missile_AA.jpg";
		model="\a3\weapons_f_beta\launchers\titan\titan_missile_atl.p3d";
		editorSubcategory="EdSubcat_Military";
		vehicleClass="Military";
	};
	class Titan_missile_AA_fly: Titan_missile_AA
	{
		author="O&T Expansion Eden";
		_generalMacro="Titan_missile_AA_fly";
		displayName="$STR_A3_CfgMagazines_Titan_AA0";
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Titan_missile_AA_fly.jpg";
		model="\a3\weapons_f_beta\launchers\titan\titan_missile_atl_fly.p3d";
	};
	class Titan_missile_AT: Titan_missile_AA
	{
		author="O&T Expansion Eden";
		_generalMacro="Titan_missile_AT";
		displayName="$STR_A3_CfgMagazines_Titan_AT0";
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Titan_missile_AT.jpg";
		model="\a3\weapons_f_beta\launchers\titan\titan_missile_at.p3d";
	};
	class Titan_missile_AT_fly: Titan_missile_AA
	{
		author="O&T Expansion Eden";
		_generalMacro="Titan_missile_AT_fly";
		displayName="$STR_A3_CfgMagazines_Titan_AT0";
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Titan_missile_AT_fly.jpg";
		model="\a3\weapons_f_beta\launchers\titan\titan_missile_at_fly.p3d";
	};
	class Titan_missile_AP: Titan_missile_AA
	{
		author="O&T Expansion Eden";
		_generalMacro="Titan_missile_AP";
		displayName="$STR_A3_CfgMagazines_Titan_AP0";
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Titan_missile_AP.jpg";
		model="\a3\weapons_f_beta\launchers\titan\Titan_missile_AP.p3d";
	};
	class Titan_missile_AP_fly: Titan_missile_AA
	{
		author="O&T Expansion Eden";
		_generalMacro="Titan_missile_AP_fly";
		displayName="$STR_A3_CfgMagazines_Titan_AP0";
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Titan_missile_AP_fly.jpg";
		model="\a3\weapons_f_beta\launchers\titan\Titan_missile_AP_fly.p3d";
	};
	class TitanCommandLaunchUnit_01_G: Items_base_F
	{
		author="O&T Expansion Eden";
		mapSize=0.38000001;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.21900001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\TitanCommandLaunchUnit_01_G.jpg";
		_generalMacro="TitanCommandLaunchUnit_01_G";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_TitanCommandLaunchUnit_01_G0";
		model="\A3\Weapons_F_Beta\Launchers\Titan\Titan_F";
		icon="iconObject_2x1";
		destrType="DestructNo";
		editorSubcategory="EdSubcat_Military";
		vehicleClass="Military";
		shadow=0;
		hiddenSelections[]=
		{
			"camo_launcher",
			"camo_tube"
		};
		hiddenSelectionsTextures[]=
		{
			"A3\Weapons_F_Beta\Launchers\Titan\Data\Launcher_CO.paa",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\weapons_f_beta\launchers\titan\data\titan_launcher.rvmat",
			""
		};
		class Attributes
		{
			class TypeListTitanCLU0
			{
				displayName="$STR_3den_object_attribute_objecttexturecustom0_displayname";
				property="TypeListTitanCLU0";
				control="Combo";
				expression="_this setObjectTextureGlobal [0,_value];";
				defaultValue="'\A3\Weapons_F_Beta\Launchers\Titan\Data\Launcher_CO.paa'";
				typeName="STRING";
				class Values
				{
					class 1
					{
						name="$STR_A3_texturesources_sand0";
						value="\A3\Weapons_F_Beta\Launchers\Titan\Data\Launcher_CO.paa";
						picture="\A3\Weapons_F_Beta\Launchers\Titan\Data\Launcher_CO.paa";
					};
					class 2
					{
						name="$STR_A3_texturesources_digital0";
						value="A3\Weapons_F_Beta\Launchers\Titan\Data\Launcher_INDP_CO.paa";
						picture="A3\Weapons_F_Beta\Launchers\Titan\Data\Launcher_INDP_CO.paa";
					};
					class 3
					{
						name="$STR_A3_texturesources_hex0";
						value="A3\Weapons_F_Beta\Launchers\Titan\Data\Launcher_OPFOR_CO.paa";
						picture="A3\Weapons_F_Beta\Launchers\Titan\Data\Launcher_OPFOR_CO.paa";
					};
					class 4
					{
						name="$STR_A3_texturesources_greenhex0";
						value="\A3\Weapons_F_Exp\Launchers\Titan\Data\launch_O_Titan_ghex_F_01_co.paa";
						picture="\A3\Weapons_F_Exp\Launchers\Titan\Data\launch_O_Titan_ghex_F_01_co.paa";
					};
					class 5
					{
						name="$STR_Globe_TextureSources_Geometric0";
						value="\A3\Weapons_F_Enoch\Launchers\Titan\Data\launch_I_Titan_eaf_F_01_co.paa";
						picture="\A3\Weapons_F_Enoch\Launchers\Titan\Data\launch_I_Titan_eaf_F_01_co.paa";
					};
					class 6
					{
						name="$STR_Globe_TextureSources_Tropic0";
						value="\a3\weapons_f_exp\launchers\titan\data\launch_b_titan_tna_f_01_co.paa";
						picture="\a3\weapons_f_exp\launchers\titan\data\launch_b_titan_tna_f_01_co.paa";
					};
				};
			};
			class TypeListTitanCLU0_rvmat: TypeListTitanCLU0
			{
				displayName="$STR_3den_object_attribute_objectmaterialcustom0_displayname";
				property="TypeListTitanCLU0_rvmat";
				expression="_this setObjectMaterialGlobal [0,_value];";
				defaultValue="'\A3\Weapons_F_Beta\Launchers\Titan\Data\titan_launcher.rvmat'";
				class Values
				{
					class 1
					{
						name="$STR_a3_to_editterrainobject15";
						value="\A3\Weapons_F_Beta\Launchers\Titan\Data\titan_launcher.rvmat";
					};
					class 2
					{
						name="$STR_a3_rscdisplayavterminal_damaged";
						value="\A3\Weapons_F_Beta\Launchers\Titan\Data\titan_launcher_damage.rvmat";
					};
					class 3
					{
						name="$STR_SLING_LOAD_MANAGER_DESTROYED";
						value="\A3\Weapons_F_Beta\Launchers\Titan\Data\titan_launcher_destruct.rvmat";
					};
				};
			};
		};
	};
	class TitanStaticLaunchTube_01_G: Items_base_F
	{
		author="O&T Expansion Eden";
		mapSize=0.38000001;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.21900001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\TitanStaticLaunchTube_01_G.jpg";
		_generalMacro="TitanStaticLaunchTube_01_G";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_TitanStaticLaunchTube_01_G0";
		model="\a3\weapons_f_beta\launchers\titan\titan_tubelarge.p3d";
		icon="iconObject_3x1";
		destrType="DestructNo";
		editorSubcategory="EdSubcat_Military";
		vehicleClass="Military";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		hiddenSelectionsMaterials[]={};
	};
	class DismantledWeapon_HeliHeavyMinigun_01_G_left: Items_base_F
	{
		author="O&T Expansion Eden";
		mapSize=0.38000001;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.21900001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\DismantledWeapon_HeliHeavyMinigun_01_G_left.jpg";
		_generalMacro="DismantledWeapon_HeliHeavyMinigun_01_G_left";
		scope=1;
		scopeCurator=0;
		displayName="$STR_Globe_CfgVehicles_DismantledWeapon_HeliHeavyMinigun_01_G_left0";
		model="a3\Weapons_F\DynamicLoadout\PylonPod_HeavyMinigun_Heli_Transport_01_L_F.p3d";
		icon="iconObject_3x1";
		destrType="DestructNo";
		editorSubcategory="EdSubcat_Military";
		vehicleClass="Military";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		hiddenSelectionsMaterials[]={};
	};
	class DismantledWeapon_HeliHeavyMinigun_01_G_right: Items_base_F
	{
		author="O&T Expansion Eden";
		mapSize=0.38000001;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.21900001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\DismantledWeapon_HeliHeavyMinigun_01_G_right.jpg";
		_generalMacro="DismantledWeapon_HeliHeavyMinigun_01_G_right";
		scope=1;
		scopeCurator=0:
		displayName="$STR_Globe_CfgVehicles_DismantledWeapon_HeliHeavyMinigun_01_G_right0";
		model="a3\Weapons_F\DynamicLoadout\PylonPod_HeavyMinigun_Heli_Transport_01_R_F.p3d";
		icon="iconObject_3x1";
		destrType="DestructNo";
		editorSubcategory="EdSubcat_Military";
		vehicleClass="Military";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		hiddenSelectionsMaterials[]={};
		class AnimationSources
		{
		};
	};
	class Land_PylonPod_RocketDARDAGR_G: Items_base_F
	{
		author="O&T Expansion Eden";
		mapSize=0.38000001;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.89999998;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Land_pylonpod_12x_rocket_dar_f.jpg";
		_generalMacro="Land_PylonPod_RocketDARDAGR_G";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_PylonPod_RocketDARDAGR_G0";
		model="a3\weapons_f\DynamicLoadout\PylonPod_Rocket_DAGR_F.p3d";
		icon="iconObject_2x1";
		destrType="DestructNo";
		editorSubcategory="EdSubcat_Military";
		vehicleClass="Military";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"a3\air_f\data\rockets_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"a3\air_f\data\rockets.rvmat"
		};
		class Attributes
		{
			class randomRockets
			{
				displayName="$STR_A3_RscDisplayArsenal_ButtonRandom";
				property="randomRockets";
				control="CheckboxStateReversed";
				defaultValue="false";
				expression="if (_value) then {_this animate ['rocketb1', ceil random 12, true]; _this setVariable ['rocketPodRandom',true,isServer]}else{_this setVariable ['rocketPodRandom',false,isServer]}";
			};
			class rocketa1_source
			{
				displayName="$STR_A3_Globe_CfgVehicles_Land_pylonpod_rocket_skyfire_f_Attributes_rocketa1_source0";
				tooltip="from 0 to 12";
				property="rocketa1";
				control="edit";
				defaultValue=0;
				validate="number";
				expression="if (_this getVariable 'rocketPodRandom' isNotEqualTo true) then {_this animate ['rocketb1', _value, true]}; ";
			};
			class SwitchTextureHull
			{
				property="SwitchTextureHull";
				displayName="$STR_Globe_hull0";
				control="Combo";
				expression="_this setObjectTextureGlobal [0, _value]";
				defaultValue="(getObjectTextures _this) param [0,'',['']]";
				typeName="STRING";
				class values
				{
					class 0
					{
						name="$STR_A3_CFGVEHICLES_MODULECURATORSETOBJECTCOST_F_ARGUMENTS_SHOW_VALUES_NO";
						value="";
						picture="";
					};
					class 1
					{
						name="$STR_A3_TEXTURESOURCES_green0";
						value="a3\air_f\data\rockets_co.paa";
						picture="a3\air_f\data\rockets_co.paa";
					};
					class 2
					{
						name="$STR_A3_TEXTURESOURCES_black0";
						value="a3\weapons_f\dynamicloadout\data\rockets_black_co.paa";
						picture="a3\weapons_f\dynamicloadout\data\rockets_black_co.paa";
					};
				};
			};
		};
	};
	class Land_pylonpod_12x_rocket_dar_f: Land_PylonPod_RocketDARDAGR_G
	{
		scope=2;
		scopeCurator=2;
	};
};
