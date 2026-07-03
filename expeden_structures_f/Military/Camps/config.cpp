class CfgPatches
{
	class Structures_Globe_Military_Camps
	{
		addonRootClass="A3_Structures_F_Globe";
		requiredAddons[]=
		{
			"A3_Structures_F_Globe_Military"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Land_MedicalTent_01_frame"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Camping_base_F;
	class Land_MedicalTent_01_frame: Camping_base_F
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=0;
			animate[]=
			{
				
				{
					"door1_hide",
					1
				},
				
				{
					"door2_hide",
					1
				},
				
				{
					"windows_hide",
					1
				},
				
				{
					"innertent_hide",
					1
				},
				
				{
					"outertent_hide",
					1
				},
				
				{
					"medsign_hide",
					1
				},
				
				{
					"roof_1_solar_hide",
					1
				},
				
				{
					"roof_1_nosolar_unhide",
					1
				},
				
				{
					"roof_2_solar_hide",
					1
				},
				
				{
					"roof_2_nosolar_unhide",
					1
				}
			};
			hide[]={};
			verticalOffset=1.375;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_MedicalTent_01_frame.jpg";
		_generalMacro="Land_MedicalTent_01_frame";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_MedicalTent_01_frame0";
		editorCategory="EdCat_Things";
		editorSubcategory="EdSubcat_Camping";
		vehicleClass="Tents";
		model="\A3\Structures_F_Orange\Humanitarian\Camps\MedicalTent_01_F.p3d";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_tropic_F_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01.rvmat"
		};
		icon="iconObject_2x3";
		disableInventory=1;
		class AnimationSources
		{
			class Door_Hide
			{
				source="user";
				animPeriod=1e-006;
				initPhase=1;
			};
			class InnerTent_Hide
			{
				source="user";
				animPeriod=1e-006;
				initPhase=1;
			};
			class OuterTent_Hide
			{
				source="user";
				animPeriod=1e-006;
				initPhase=1;
			};
			class MedSign_Hide
			{
				source="user";
				animPeriod=1e-006;
				initPhase=1;
			};
			class SolarPanel1_Hide
			{
				source="user";
				animPeriod=1e-006;
				initPhase=1;
			};
			class SolarPanel2_Hide
			{
				source="user";
				animPeriod=1e-006;
				initPhase=1;
			};
		};
		class Attributes
		{
			class FrameColor
			{
				displayName="$STR_a3_cfgvehicles_modulecuratoraddicon_f_arguments_texture";
				property="FrameColor";
				control="Combo";
				expression="_this setObjectTextureGlobal [0,_value];";
				defaultValue="'A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_tropic_F_CO.paa'";
				typeName="STRING";
				class Values
				{
					class Tropic
					{
						name="Tropic";
						value="A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_tropic_F_CO.paa";
						picture="A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_tropic_F_CO.paa";
					};
					class MTP
					{
						name="MTP";
						value="A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_MTP_F_CO.paa";
						picture="A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_MTP_F_CO.paa";
					};
					class hex
					{
						name="$STR_A3_texturesources_hex0";
						value="A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_brownhex_F_CO.paa";
						picture="A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_brownhex_F_CO.paa";
					};
					class gHex
					{
						name="$STR_A3_texturesources_greenhex0";
						value="A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_greenhex_F_CO.paa";
						picture="A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_greenhex_F_CO.paa";
					};
					class digital
					{
						name="$str_a3_texturesources_digital0";
						value="A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_digital_F_CO.paa";
						picture="A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_digital_F_CO.paa";
					};
					class IDAP
					{
						name="IDAP";
						value="A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_white_IDAP_F_CO.paa";
						picture="A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_white_IDAP_F_CO.paa";
					};
					class Livonia
					{
						name="$STR_A3_C_CfgMods_Enoch_CB_NATOWoodland_name";
						value="A3\Structures_F_Enoch\Military\Camps\data\MedicalTent_01_wdl_F_CO";
						picture="A3\Structures_F_Enoch\Military\Camps\data\MedicalTent_01_wdl_F_CO";
					};
				};
			};
		};
	};
};
