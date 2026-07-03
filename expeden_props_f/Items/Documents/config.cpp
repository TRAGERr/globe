class CfgPatches
{
	class A3_Props_F_Globe_Items_Documents
	{
		addonRootClass="A3_Props_F_Globe";
		requiredAddons[]=
		{
			"A3_Props_F_Globe_Items"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Poster_04_empty",
			"Poster_04_protest1",
			"Poster_04_protest2",
			"Poster_04_protest3",
			"Poster_04_protest4",
			"Poster_04_protest5",
			"Poster_Sign_AntiCSAT",
			"Newspaper_01_aow",
			"DiaryImages_AltisStratis_random",
			"DiaryImages_Stratis",
			"DiaryImages_Stratis_random",
			"DiaryImages_Altis",
			"DiaryImages_Altis_random",
			"Photos_V1_scenarios_random",
			"Photos_V2_scenarios_random",
			"Photos_V3_scenarios_random",
			"Photos_V4_scenarios_random",
			"Photos_V5_scenarios_random",
			"Photos_V6_scenarios_random",
			"Photos_V1_scenarios",
			"Photos_V2_scenarios",
			"Photos_V3_scenarios",
			"Photos_V4_scenarios",
			"Photos_V5_scenarios",
			"Photos_V6_scenarios",
			"Book_01_CultureInCrisis_F",
			"Book_02_CultureInCrisis_F",
			"Book_01_Dictionary_F",
			"Book_02_Dictionary_F",
			"Book_01_random_F",
			"Book_01_CallsignNomad_F",
			"Book_01_BattlefieldLogistic_F",
			"Book_01_SUT_F",
			"Book_01_Checkmate_F",
			"Book_01_SokolskiMutin_F",
			"Book_01_LivoniaTravelGuide_F",
			"Book_02_random_F",
			"Book_02_CallsignNomad_F",
			"Book_02_BattlefieldLogistic_F",
			"Book_02_SUT_F",
			"Book_02_Checkmate_F",
			"Book_02_SokolskiMutin_F",
			"Book_02_LivoniaTravelGuide_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Items_base_F;
	class Poster_base_F;
	class Newspaper_01_base_F;
	class Land_Photos_V3_F;
	class Land_Photos_V4_F;
	
	class Books_base_F: Items_base_F
	{
		delete ObjectTextureCustom0;
		class Attributes
		{
			class ObjectTextureCustom0
			{
				displayName="$STR_3den_object_attribute_objecttexturecustom0_displayname";
				tooltip="$STR_3den_object_attribute_objecttexturecustom_tooltip";
				property="ObjectTextureCustom0";
				control="Edit";
				expression="_this setObjectTextureGlobal [0,_value]";
				defaultValue="(getObjectTextures _this) param [0,'',['']]";
			};
		};
	};

	class Newspaper_base_F: Items_base_F
	{
		delete ObjectTextureCustom0;
		class Attributes
		{
			class ObjectTextureCustom0
			{
				displayName="$STR_3den_object_attribute_objecttexturecustom0_displayname";
				tooltip="$STR_3den_object_attribute_objecttexturecustom_tooltip";
				property="ObjectTextureCustom0";
				control="Edit";
				expression="_this setObjectTextureGlobal [0,_value]";
				defaultValue="(getObjectTextures _this) param [0,'',['']]";
			};
		};
	};

	class Book_01_F;
	class Book_02_F;
	class Book_01_random_F: Book_01_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Book_01_random_F.jpg";
		_generalMacro="Book_01_random_F";
		displayName="$STR_expEden_Book_02_Random";
		class EventHandlers
		{
			init="(_this # 0) call compile preprocessFileLineNumbers '\A3\Props_F_Globe\Items\Documents\scripts\randomize.sqf'";
		};
	};
	class Book_01_CallsignNomad_F: Book_01_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Book_01_CallsignNomad_F.jpg";
		_generalMacro="Book_01_CallsignNomad_F";
		displayName="$STR_expEden_Book_01_Small";
		hiddenSelectionsTextures[]=
		{
			"\a3\Props_F_Enoch\Items\Documents\data\Book_01_co.paa"
		};
	};
	class Book_01_BattlefieldLogistic_F: Book_01_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Book_01_BattlefieldLogistic_F.jpg";
		_generalMacro="Book_01_BattlefieldLogistic_F";
		displayName="$STR_expEden_Book_02_Small";
		hiddenSelectionsTextures[]=
		{
			"\a3\Props_F_Enoch\Items\Documents\data\Book_02_co.paa"
		};
	};
	class Book_01_SUT_F: Book_01_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Book_01_SUT_F.jpg";
		_generalMacro="Book_01_SUT_F";
		displayName="$STR_expEden_Book_03_Small";
		hiddenSelectionsTextures[]=
		{
			"\a3\Props_F_Enoch\Items\Documents\data\Book_03_co.paa"
		};
	};
	class Book_01_Checkmate_F: Book_01_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Book_01_Checkmate_F.jpg";
		_generalMacro="Book_01_Checkmate_F";
		displayName="$STR_expEden_Book_04_Small";
		hiddenSelectionsTextures[]=
		{
			"\a3\Props_F_Enoch\Items\Documents\data\Book_04_co.paa"
		};
	};
	class Book_01_SokolskiMutin_F: Book_01_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Book_01_SokolskiMutin_F.jpg";
		_generalMacro="Book_01_SokolskiMutin_F";
		displayName="$STR_expEden_Book_05_Small";
		hiddenSelectionsTextures[]=
		{
			"\a3\Props_F_Enoch\Items\Documents\data\Book_05_co.paa"
		};
	};
	class Book_01_LivoniaTravelGuide_F: Book_01_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Book_01_LivoniaTravelGuide_F.jpg";
		_generalMacro="Book_01_LivoniaTravelGuide_F";
		displayName="$STR_expEden_Book_06_Small";
		hiddenSelectionsTextures[]=
		{
			"\a3\Props_F_Enoch\Items\Documents\data\Book_06_co.paa"
		};
	};
	class Book_02_random_F: Book_02_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Book_02_random_F.jpg";
		_generalMacro="Book_02_random_F";
		displayName="$STR_expEden_Book_01_Random";
		class EventHandlers
		{
			init="(_this # 0) call compile preprocessFileLineNumbers '\A3\Props_F_Globe\Items\Documents\scripts\randomize.sqf'";
		};
	};
	class Book_02_CallsignNomad_F: Book_02_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Book_02_CallsignNomad_F.jpg";
		_generalMacro="Book_02_CallsignNomad_F";
		displayName="$STR_expEden_Book_01_Large";
		hiddenSelectionsTextures[]=
		{
			"\a3\Props_F_Enoch\Items\Documents\data\Book_01_co.paa"
		};
	};
	class Book_02_BattlefieldLogistic_F: Book_02_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Book_02_BattlefieldLogistic_F.jpg";
		_generalMacro="Book_02_BattlefieldLogistic_F";
		displayName="$STR_expEden_Book_02_Large";
		hiddenSelectionsTextures[]=
		{
			"\a3\Props_F_Enoch\Items\Documents\data\Book_02_co.paa"
		};
	};
	class Book_02_SUT_F: Book_02_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Book_02_SUT_F.jpg";
		_generalMacro="Book_02_SUT_F";
		displayName="$STR_expEden_Book_03_Large";
		hiddenSelectionsTextures[]=
		{
			"\a3\Props_F_Enoch\Items\Documents\data\Book_03_co.paa"
		};
	};
	class Book_02_Checkmate_F: Book_02_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Book_02_Checkmate_F.jpg";
		_generalMacro="Book_02_Checkmate_F";
		displayName="$STR_expEden_Book_04_Large";
		hiddenSelectionsTextures[]=
		{
			"\a3\Props_F_Enoch\Items\Documents\data\Book_04_co.paa"
		};
	};
	class Book_02_SokolskiMutin_F: Book_02_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Book_02_SokolskiMutin_F.jpg";
		_generalMacro="Book_02_SokolskiMutin_F";
		displayName="$STR_expEden_Book_05_Large";
		hiddenSelectionsTextures[]=
		{
			"\a3\Props_F_Enoch\Items\Documents\data\Book_05_co.paa"
		};
	};
	class Book_02_LivoniaTravelGuide_F: Book_02_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Book_02_LivoniaTravelGuide_F.jpg";
		_generalMacro="Book_02_LivoniaTravelGuide_F";
		displayName="$STR_expEden_Book_06_Large";
		hiddenSelectionsTextures[]=
		{
			"\a3\Props_F_Enoch\Items\Documents\data\Book_06_co.paa"
		};
	};
	class Book_01_CultureInCrisis_F: Book_01_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Book_01_CultureInCrisis_F.jpg";
		_generalMacro="Book_01_CultureInCrisis_F";
		displayName="$STR_A3_Globe_CfgVehicles_Book_01_CultureInCrisis_F0";
		DLC="AoW";
		hiddenSelectionsTextures[]=
		{
			"\A3\Missions_F_AoW\Data\Img\book_cover_culture_co.paa"
		};
	};
	class Book_02_CultureInCrisis_F: Book_02_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Book_02_CultureInCrisis_F.jpg";
		_generalMacro="Book_02_CultureInCrisis_F";
		displayName="$STR_A3_Globe_CfgVehicles_Book_02_CultureInCrisis_F0";
		DLC="AoW";
		hiddenSelectionsTextures[]=
		{
			"\A3\Missions_F_AoW\Data\Img\book_cover_culture_co.paa"
		};
	};
	class Book_01_Dictionary_F: Book_01_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Book_01_Dictionary_F.jpg";
		_generalMacro="Book_01_Dictionary_F";
		displayName="$STR_A3_Globe_CfgVehicles_Book_01_Dictionary_F0";
		DLC="AoW";
		hiddenSelectionsTextures[]=
		{
			"\A3\Missions_F_AoW\Data\Img\book_cover_latin_co.paa"
		};
	};
	class Book_02_Dictionary_F: Book_02_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Book_02_Dictionary_F.jpg";
		_generalMacro="Book_02_Dictionary_F";
		displayName="$STR_A3_Globe_CfgVehicles_Book_02_Dictionary_F0";
		DLC="AoW";
		hiddenSelectionsTextures[]=
		{
			"\A3\Missions_F_AoW\Data\Img\book_cover_latin_co.paa"
		};
	};
	class Photos_V4_scenarios: Land_Photos_V4_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Photos_V4_scenarios.jpg";
		_generalMacro="Photos_V4_scenarios";
		displayName="$STR_Globe_Photos_V4_scenarios";
		hiddenSelectionsTextures[]=
		{
			"\a3\missions_f\data\img\Showcase_Infantry_overview_CA.paa"
		};
		class Attributes
		{
			class SwitchTexture
			{
				property="SwitchTexture";
				displayName="$STR_A3_cfgmissions_missions0";
				control="Combo";
				expression="_this setObjectTextureGlobal [0, _value]";
				defaultValue="'\a3\missions_f\data\img\Showcase_Infantry_overview_CA.paa'";
				typeName="STRING";
				class values
				{
					class Showcase_Infantry
					{
						name="$STR_A3_Showcase_Infantry_Mission_Name";
						value="\a3\missions_f\data\img\Showcase_Infantry_overview_CA.paa";
						picture="\a3\missions_f\data\img\Showcase_Infantry_overview_CA.paa";
					};
					class Showcase_SCUBA
					{
						name="$STR_A3_Showcase_SCUBA_briefingName";
						value="\A3\Missions_F\Data\Img\Showcase_SCUBA_overview_CA.paa";
						picture="\A3\Missions_F\Data\Img\Showcase_SCUBA_overview_CA.paa";
					};
					class Showcase_Vehicles
					{
						name="$STR_A3_Showcase_Vehicles_briefingName";
						value="\A3\Missions_F\Data\Img\Showcase_Vehicles_overview_CA.paa";
						picture="\A3\Missions_F\Data\Img\Showcase_Vehicles_overview_CA.paa";
					};
					class Showcase_Helicopters
					{
						name="$STR_A3_Showcase_Helicopters_Mission_Name";
						value="\A3\Missions_F\Data\Img\Showcase_Helicopters_overview_CA.paa";
						picture="\A3\Missions_F\Data\Img\Showcase_Helicopters_overview_CA.paa";
					};
					class Showcase_CombinedArms
					{
						name="$STR_A3_Showcase_Combined_Arms_Mission_Name";
						value="\a3\Missions_F_Beta\data\img\Showcase_Combined_Arms_overview_CA.paa";
						picture="\a3\Missions_F_Beta\data\img\Showcase_Combined_Arms_overview_CA.paa";
					};
					class Showcase_CommandingI
					{
						name="$STR_A3_Showcase_Commanding_I_Mission_Name";
						value="\a3\Missions_F_Beta\data\img\showcase_commanding_I_overview_ca.paa";
						picture="\a3\Missions_F_Beta\data\img\showcase_commanding_I_overview_ca.paa";
					};
					class Showcase_Night2
					{
						name="$STR_A3_Showcase_Night2_Mission_Name";
						value="\a3\Missions_F_Beta\data\img\Showcase_Night_overview_CA.paa";
						picture="\a3\Missions_F_Beta\data\img\Showcase_Night_overview_CA.paa";
					};
					class Showcase_Supports
					{
						name="$STR_A3_Showcase_Supports_briefingName";
						value="\a3\Missions_F_Beta\data\img\Showcase_Supports_overview_CA.paa";
						picture="\a3\Missions_F_Beta\data\img\Showcase_Supports_overview_CA.paa";
					};
					class Showcase_Tanks
					{
						name="$STR_A3_Showcase_Tanks_Mission_Name";
						value="\a3\Missions_F_Gamma\data\img\Showcase_Tanks_overview_CA.paa";
						picture="\a3\Missions_F_Gamma\data\img\Showcase_Tanks_overview_CA.paa";
					};
					class Showcase_Arma
					{
						name="$STR_A3_Showcase_Arma_Mission_Name";
						value="\a3\Missions_F_Gamma\data\img\Showcase_Arma_overview_CA.paa";
						picture="\a3\Missions_F_Gamma\data\img\Showcase_Arma_overview_CA.paa";
					};
					class Showcase_Drones
					{
						name="$STR_A3_Showcase_Drones_Mission_Name";
						value="\a3\Missions_F_Gamma\data\img\showcase_drones_overview_ca.paa";
						picture="\a3\Missions_F_Gamma\data\img\showcase_drones_overview_ca.paa";
					};
					class Showcase_Gunships
					{
						name="$STR_A3_Showcase_Gunships_Mission_Name";
						value="\a3\Missions_F_Gamma\data\img\showcase_gunships_overview_ca.paa";
						picture="\a3\Missions_F_Gamma\data\img\showcase_gunships_overview_ca.paa";
					};
					class Showcase_Faction_BLU
					{
						name="$STR_A3_Showcase_Showcase_Faction_BLUFOR_Mission_Name";
						value="\a3\Missions_F_Gamma\data\img\Faction_BLUFOR_overview_CA.paa";
						picture="\a3\Missions_F_Gamma\data\img\Faction_BLUFOR_overview_CA.paa";
					};
					class Showcase_Faction_OPF
					{
						name="$STR_A3_Showcase_Showcase_Faction_OPFOR_Mission_Name";
						value="\a3\Missions_F_Gamma\data\img\Faction_OPFOR_overview_CA.paa";
						picture="\a3\Missions_F_Gamma\data\img\Faction_OPFOR_overview_CA.paa";
					};
					class Showcase_Faction_IND
					{
						name="$STR_A3_Showcase_Showcase_Faction_INDEPENDENT_Mission_Name";
						value="\a3\Missions_F_Gamma\data\img\Faction_INDEPENDENT_overview_CA.paa";
						picture="\a3\Missions_F_Gamma\data\img\Faction_INDEPENDENT_overview_CA.paa";
					};
					class Showcase_FixedWings
					{
						name="$STR_A3_Showcase_FixedWings_Mission_Name";
						value="\a3\Missions_F_EPA\data\img\Showcase_Fixed_Wings_overview_CA.paa";
						picture="\a3\Missions_F_EPA\data\img\Showcase_Fixed_Wings_overview_CA.paa";
					};
					class Showcase_Curator
					{
						name="$STR_A3_Curator";
						value="\a3\Missions_F_Curator\data\img\showcase_Curator_overview_CA.paa";
						picture="\a3\Missions_F_Curator\data\img\showcase_Curator_overview_CA.paa";
					};
					class Showcase_SlingLoading
					{
						name="$STR_A3_Showcase_SlingLoading_Mission_Name";
						value="\a3\Missions_F_Heli\data\img\Showcase_SlingLoading_overview_CA.paa";
						picture="\a3\Missions_F_Heli\data\img\Showcase_SlingLoading_overview_CA.paa";
					};
					class Showcase_FiringFromVehicles
					{
						name="$STR_A3_Showcase_FiringFromVehicles_Mission_Name1";
						value="\a3\missions_f_mark\data\img\showcase_firingfromvehicles_overview_ca.paa";
						picture="\a3\missions_f_mark\data\img\showcase_firingfromvehicles_overview_ca.paa";
					};
					class Showcase_Marksman
					{
						name="$STR_A3_Showcase_Marksman_Mission_Name";
						value="\a3\missions_f_mark\data\img\Showcase_Marksman_overview_CA.paa";
						picture="\a3\missions_f_mark\data\img\Showcase_Marksman_overview_CA.paa";
					};
					class Showcase_EndGame
					{
						name="$STR_A3_Showcase_EndGame_Mission_Name";
						value="\a3\Missions_F_Exp\data\img\Showcase_EndGame_overview_CA.paa";
						picture="\a3\Missions_F_Exp\data\img\Showcase_EndGame_overview_CA.paa";
					};
					class Showcase_VTOL
					{
						name="$STR_A3_Showcase_VTOL_missionName";
						value="\a3\Missions_F_Exp\data\img\Showcase_VTOL_overview_CA.paa";
						picture="\a3\Missions_F_Exp\data\img\Showcase_VTOL_overview_CA.paa";
					};
					class Showcase_Jets
					{
						name="$STR_A3_Showcase_Jets_Mission_Name";
						value="\a3\Missions_F_Jets\data\img\Showcase_Jets_overview_CA.paa";
						picture="\a3\Missions_F_Jets\data\img\Showcase_Jets_overview_CA.paa";
					};
					class Showcase_Faction_IDAP
					{
						name="$STR_A3_Orange_Faction_IDAP_briefingName";
						value="\a3\Missions_F_Orange\data\img\Faction_IDAP_overview_CA.paa";
						picture="\a3\Missions_F_Orange\data\img\Faction_IDAP_overview_CA.paa";
					};
					class Showcase_LawsOfWar
					{
						name="$STR_A3_Orange_Showcase_LawsOfWar_briefingName";
						value="\a3\Missions_F_Orange\data\img\Showcase_LawsOfWar_overview_CA.paa";
						picture="\a3\Missions_F_Orange\data\img\Showcase_LawsOfWar_overview_CA.paa";
					};
					class Showcase_TankDestroyers
					{
						name="$STR_A3_TA_Showcase_TankDestroyers_missionName";
						value="\A3\Missions_F_Tank\data\img\Showcase_TankDestroyers.paa";
						picture="\A3\Missions_F_Tank\data\img\Showcase_TankDestroyers.paa";
					};
					class Showcase_AoW
					{
						name="$STR_A3_Showcase_AoW_Mission_Name";
						value="\a3\missions_f_aow\data\img\Showcase_aow_overview_ca.paa";
						picture="\a3\missions_f_aow\data\img\Showcase_aow_overview_ca.paa";
					};
					class Showcase_Future
					{
						name="$STR_A3_Showcase_Future_Mission_Name";
						value="\a3\missions_f_aow\data\img\Showcase_future_overview_ca.paa";
						picture="\a3\missions_f_aow\data\img\Showcase_future_overview_ca.paa";
					};
					class MP_COOP_m01
					{
						name="$STR_A3_MP_COOP_m01_briefingName";
						value="\a3\Missions_F\data\img\MP_COOP_m01_overview_CA.paa";
						picture="\a3\Missions_F\data\img\MP_COOP_m01_overview_CA.paa";
					};
					class MP_COOP_m02
					{
						name="$STR_A3_MP_COOP_m02_briefingName";
						value="\a3\Missions_F\data\img\MP_COOP_m02_overview_CA.paa";
						picture="\a3\Missions_F\data\img\MP_COOP_m02_overview_CA.paa";
					};
					class MP_COOP_m03
					{
						name="$STR_A3_MP_COOP_m03_briefingName";
						value="\A3\Missions_F_Gamma\data\img\MP_COOP_m03_overview_CA.paa";
						picture="\A3\Missions_F_Gamma\data\img\MP_COOP_m03_overview_CA.paa";
					};
					class MP_COOP_m04
					{
						name="$STR_A3_MP_COOP_04_onLoadName";
						value="\A3\Missions_F_Beta\data\img\MP_COOP_m04_overview_CA.paa";
						picture="\A3\Missions_F_Beta\data\img\MP_COOP_m04_overview_CA.paa";
					};
					class MP_COOP_m05
					{
						name="$STR_A3_MP_COOP_05_onLoadName";
						value="\A3\Missions_F_Gamma\data\img\MP_COOP_m05_overview_CA.paa";
						picture="\A3\Missions_F_Gamma\data\img\MP_COOP_m05_overview_CA.paa";
					};
					class MP_COOP_m06
					{
						name="$STR_A3_MP_COOP_06_onLoadName";
						value="\A3\Missions_F_Gamma\data\img\MP_COOP_m06_overview_CA.paa";
						picture="\A3\Missions_F_Gamma\data\img\MP_COOP_m06_overview_CA.paa";
					};
					class MP_COOP_m07
					{
						name="$STR_A3_MP_COOP_07_overviewText";
						value="\A3\Missions_F_Gamma\data\img\MP_COOP_m07_overview_CA.paa";
						picture="\A3\Missions_F_Gamma\data\img\MP_COOP_m07_overview_CA.paa";
					};
					class MP_COOP_m08
					{
						name="$STR_A3_MP_COOP_m08_briefingName";
						value="\A3\Missions_F_Gamma\data\img\MP_COOP_m08_overview_CA.paa";
						picture="\A3\Missions_F_Gamma\data\img\MP_COOP_m08_overview_CA.paa";
					};
					class MP_Bootcamp
					{
						name="$STR_A3_MP_Bootcamp_Name";
						value="\A3\Missions_F_Bootcamp\data\img\Bootcamp_MP_overview_CA.paa";
						picture="\A3\Missions_F_Bootcamp\data\img\Bootcamp_MP_overview_CA.paa";
					};
					class MP_ZSC_m10
					{
						name="$STR_A3_MP_ZSC_m10_onLoadName";
						value="\A3\Missions_F_curator\data\img\mp_zsc_m10_overview_ca.paa";
						picture="\A3\Missions_F_curator\data\img\mp_zsc_m10_overview_ca.paa";
					};
					class MP_ZSC_m11
					{
						name="$STR_A3_moduleMPTypeGameMaster_onLoadName_Altis";
						value="\A3\Missions_F_curator\data\img\mp_zgm_m11_overview_ca.paa";
						picture="\A3\Missions_F_curator\data\img\mp_zgm_m11_overview_ca.paa";
					};
					class MP_ZSC_m11_east
					{
						name="$STR_A3_moduleMPTypeGameMaster_onLoadName_Altis";
						value="\A3\Missions_F_curator\data\img\mp_zgm_m11_east_overview_ca.paa";
						picture="\A3\Missions_F_curator\data\img\mp_zgm_m11_east_overview_ca.paa";
					};
					class MP_ZSC_m11_west
					{
						name="$STR_A3_moduleMPTypeGameMaster_onLoadName_Altis";
						value="\A3\Missions_F_curator\data\img\mp_zgm_m11_west_overview_ca.paa";
						picture="\A3\Missions_F_curator\data\img\mp_zgm_m11_west_overview_ca.paa";
					};
					class MP_ZSC_m11_guer
					{
						name="$STR_A3_moduleMPTypeGameMaster_onLoadName_Altis";
						value="\A3\Missions_F_curator\data\img\mp_zgm_m11_guer_overview_ca.paa";
						picture="\A3\Missions_F_curator\data\img\mp_zgm_m11_guer_overview_ca.paa";
					};
					class MP_ZSC_m12
					{
						name="$STR_A3_moduleMPTypeGameMaster_onLoadName_Stratis";
						value="\A3\Missions_F_curator\data\img\mp_zgm_m12_overview_ca.paa";
						picture="\A3\Missions_F_curator\data\img\mp_zgm_m12_overview_ca.paa";
					};
					class MP_ZSC_m12_east
					{
						name="$STR_A3_moduleMPTypeGameMaster_onLoadName_Stratis";
						value="\A3\Missions_F_curator\data\img\mp_zgm_m12_east_overview_ca.paa";
						picture="\A3\Missions_F_curator\data\img\mp_zgm_m12_east_overview_ca.paa";
					};
					class MP_ZSC_m12_west
					{
						name="$STR_A3_moduleMPTypeGameMaster_onLoadName_Stratis";
						value="\A3\Missions_F_curator\data\img\mp_zgm_m12_west_overview_ca.paa";
						picture="\A3\Missions_F_curator\data\img\mp_zgm_m12_west_overview_ca.paa";
					};
					class MP_ZSC_m12_guer
					{
						name="$STR_A3_moduleMPTypeGameMaster_onLoadName_Stratis";
						value="\A3\Missions_F_curator\data\img\mp_zgm_m12_guer_overview_ca.paa";
						picture="\A3\Missions_F_curator\data\img\mp_zgm_m12_guer_overview_ca.paa";
					};
					class MP_ZSC_m13
					{
						name="$STR_A3_moduleMPTypeGameMaster_onLoadName_VR";
						value="\A3\Missions_F_bootcamp\data\img\mp_zgm_m13_overview_ca.paa";
						picture="\A3\Missions_F_bootcamp\data\img\mp_zgm_m13_overview_ca.paa";
					};
					class MP_ZSC_m13_east
					{
						name="$STR_A3_moduleMPTypeGameMaster_onLoadName_VR";
						value="\A3\Missions_F_bootcamp\data\img\mp_zgm_m13_east_overview_ca.paa";
						picture="\A3\Missions_F_bootcamp\data\img\mp_zgm_m13_east_overview_ca.paa";
					};
					class MP_ZSC_m13_west
					{
						name="$STR_A3_moduleMPTypeGameMaster_onLoadName_VR";
						value="\A3\Missions_F_bootcamp\data\img\mp_zgm_m13_west_overview_ca.paa";
						picture="\A3\Missions_F_bootcamp\data\img\mp_zgm_m13_west_overview_ca.paa";
					};
					class MP_ZSC_m13_guer
					{
						name="$STR_A3_moduleMPTypeGameMaster_onLoadName_VR";
						value="\A3\Missions_F_bootcamp\data\img\mp_zgm_m13_guer_overview_ca.paa";
						picture="\A3\Missions_F_bootcamp\data\img\mp_zgm_m13_guer_overview_ca.paa";
					};
					class MP_ZSC_m14
					{
						name="$STR_A3_MasterTanoa_loadName";
						value="\A3\Missions_F_exp\data\img\mp_zgm_m14_overview_ca.paa";
						picture="\A3\Missions_F_exp\data\img\mp_zgm_m14_overview_ca.paa";
					};
					class MP_ZSC_m14_east
					{
						name="$STR_A3_MasterTanoa_loadName";
						value="\A3\Missions_F_exp\data\img\mp_zgm_m14_east_overview_ca.paa";
						picture="\A3\Missions_F_exp\data\img\mp_zgm_m14_east_overview_ca.paa";
					};
					class MP_ZSC_m14_west
					{
						name="$STR_A3_MasterTanoa_loadName";
						value="\A3\Missions_F_exp\data\img\mp_zgm_m14_west_overview_ca.paa";
						picture="\A3\Missions_F_exp\data\img\mp_zgm_m14_west_overview_ca.paa";
					};
					class MP_ZSC_m14_guer
					{
						name="$STR_A3_MasterTanoa_loadName";
						value="\A3\Missions_F_exp\data\img\mp_zgm_m14_guer_overview_ca.paa";
						picture="\A3\Missions_F_exp\data\img\mp_zgm_m14_guer_overview_ca.paa";
					};
					class MP_ZSC_m15
					{
						name="$STR_A3_MasterMalden_loadName";
						value="\A3\Missions_F_Patrol\data\img\mp_zgm_m15_overview_ca.paa";
						picture="\A3\Missions_F_Patrol\data\img\mp_zgm_m15_overview_ca.paa";
					};
					class MP_ZSC_m15_east
					{
						name="$STR_A3_MasterMalden_loadName";
						value="\A3\Missions_F_Patrol\data\img\mp_zgm_m15_east_overview_ca.paa";
						picture="\A3\Missions_F_Patrol\data\img\mp_zgm_m15_east_overview_ca.paa";
					};
					class MP_ZSC_m15_west
					{
						name="$STR_A3_MasterMalden_loadName";
						value="\A3\Missions_F_Patrol\data\img\mp_zgm_m15_west_overview_ca.paa";
						picture="\A3\Missions_F_Patrol\data\img\mp_zgm_m15_west_overview_ca.paa";
					};
					class MP_ZSC_m15_guer
					{
						name="$STR_A3_MasterMalden_loadName";
						value="\A3\Missions_F_Patrol\data\img\mp_zgm_m15_guer_overview_ca.paa";
						picture="\A3\Missions_F_Patrol\data\img\mp_zgm_m15_guer_overview_ca.paa";
					};
					class MP_ZSC_m16
					{
						name="$STR_A3_C_moduleMPTypeGameMaster_onLoadName_Enoch";
						value="\A3\Missions_F_Enoch\data\img\mp_zgm_m16_overview_ca.paa";
						picture="\A3\Missions_F_Enoch\data\img\mp_zgm_m16_overview_ca.paa";
					};
					class MP_ZSC_m16_east
					{
						name="$STR_A3_C_moduleMPTypeGameMaster_onLoadName_Enoch";
						value="\A3\Missions_F_Enoch\data\img\mp_zgm_m16_east_overview_ca.paa";
						picture="\A3\Missions_F_Enoch\data\img\mp_zgm_m16_east_overview_ca.paa";
					};
					class MP_ZSC_m16_west
					{
						name="$STR_A3_C_moduleMPTypeGameMaster_onLoadName_Enoch";
						value="\A3\Missions_F_Enoch\data\img\mp_zgm_m16_west_overview_ca.paa";
						picture="\A3\Missions_F_Enoch\data\img\mp_zgm_m16_west_overview_ca.paa";
					};
					class MP_ZSC_m16_guer
					{
						name="$STR_A3_C_moduleMPTypeGameMaster_onLoadName_Enoch";
						value="\A3\Missions_F_Enoch\data\img\mp_zgm_m16_guer_overview_ca.paa";
						picture="\A3\Missions_F_Enoch\data\img\mp_zgm_m16_guer_overview_ca.paa";
					};
					class EscapeFromMalden
					{
						name="$STR_A3_EscapeFromMalden_missionName";
						value="\A3\Missions_F_Patrol\data\img\MP_EscapeFromMalden_overview_CA.paa";
						picture="\A3\Missions_F_Patrol\data\img\MP_EscapeFromMalden_overview_CA.paa";
					};
					class EscapeFromTanoa
					{
						name="$STR_A3_EscapeFromTanoa_missionName";
						value="\A3\Missions_F_exp\data\img\MP_EscapeFromTanoa_overview_CA.paa";
						picture="\A3\Missions_F_exp\data\img\MP_EscapeFromTanoa_overview_CA.paa";
					};
					class CP_01
					{
						name="$STR_A3_combatpatrol_mission_1";
						value="\a3\missions_f_patrol\data\img\mp_combatPatrol_ca.paa";
						picture="\a3\missions_f_patrol\data\img\mp_combatPatrol_ca.paa";
					};
					class CP_02
					{
						name="$STR_A3_combatpatrol_mission_1";
						value="\a3\missions_f_patrol\data\img\mp_mouts_ca.paa";
						picture="\a3\missions_f_patrol\data\img\mp_mouts_ca.paa";
					};
					class CP_03
					{
						name="$STR_A3_combatpatrol_mission_1";
						value="\a3\missions_f_patrol\data\img\mp_moutt_ca.paa";
						picture="\a3\missions_f_patrol\data\img\mp_moutt_ca.paa";
					};
					class CP_04
					{
						name="$STR_A3_combatpatrol_mission_1";
						value="\a3\missions_f_patrol\data\img\mp_moutm_ca.paa";
						picture="\a3\missions_f_patrol\data\img\mp_moutm_ca.paa";
					};
					class CP_05
					{
						name="$STR_A3_combatpatrol_mission_1";
						value="\a3\missions_f_enoch\data\img\overview_enochcp_ca.paa";
						picture="\a3\missions_f_enoch\data\img\overview_enochcp_ca.paa";
					};
					class Contact
					{
						name="$STR_A3_C_campaign_briefingname";
						value="\a3\missions_f_enoch\data\img\contact_overview_co.paa";
						picture="\a3\missions_f_enoch\data\img\contact_overview_co.paa";
					};
					class MP_GS_SC_01
					{
						name="$STR_A3_MP_GS_SC_01_Mission_name";
						value="\A3\Missions_F_Heli\data\img\MP_GroundSupport01_overview_CA.paa";
						picture="\A3\Missions_F_Heli\data\img\MP_GroundSupport01_overview_CA.paa";
					};
					class MP_GS_SC_02
					{
						name="$STR_A3_MP_GS_SC_02_Mission_name";
						value="\A3\Missions_F_Heli\data\img\MP_GroundSupport02_overview_CA.paa";
						picture="\A3\Missions_F_Heli\data\img\MP_GroundSupport02_overview_CA.paa";
					};
					class MP_GS_SC_03
					{
						name="$STR_A3_MP_GS_SC_01_Mission_name";
						value="\A3\Missions_F_Heli\data\img\MP_GroundSupport03_overview_CA.paa";
						picture="\A3\Missions_F_Heli\data\img\MP_GroundSupport03_overview_CA.paa";
					};
					class MP_GS_SC_04
					{
						name="$STR_A3_MP_GS_SC_02_Mission_name";
						value="\A3\Missions_F_Heli\data\img\MP_GroundSupport04_overview_CA.paa";
						picture="\A3\Missions_F_Heli\data\img\MP_GroundSupport04_overview_CA.paa";
					};
					class MP_GS_SC_05
					{
						name="$STR_A3_MP_GS_SC_01_Mission_name";
						value="\A3\Missions_F_Heli\data\img\MP_GroundSupport05_overview_CA.paa";
						picture="\A3\Missions_F_Heli\data\img\MP_GroundSupport05_overview_CA.paa";
					};
					class MP_ZR_8_Karts01
					{
						name="$STR_A3_MP_ZR_8_Karts01_briefingName";
						value="\A3\Missions_F_Kart\data\img\MP_ZR_Altis_overview_CA.paa";
						picture="\A3\Missions_F_Kart\data\img\MP_ZR_Altis_overview_CA.paa";
					};
					class MP_ZR_8_Karts02
					{
						name="$STR_A3_MP_ZR_8_Karts02_briefingName";
						value="\A3\Missions_F_Kart\data\img\MP_ZR_Stratis_overview_CA.paa";
						picture="\A3\Missions_F_Kart\data\img\MP_ZR_Stratis_overview_CA.paa";
					};
					class MP_Marksmen_01
					{
						name="$STR_A3_mp_marksmen_01_missionName";
						value="\A3\Missions_F_MP_Mark\Data\Marksmen_scenario01_overview_CA.paa";
						picture="\A3\Missions_F_MP_Mark\Data\Marksmen_scenario01_overview_CA.paa";
					};
					class MP_Marksmen_02
					{
						name="$STR_A3_mp_marksmen_02_missionName";
						value="\A3\Missions_F_MP_Mark\Data\Marksmen_scenario02_overview_CA.paa";
						picture="\A3\Missions_F_MP_Mark\Data\Marksmen_scenario02_overview_CA.paa";
					};
					class MP_Marksmen_04
					{
						name="$STR_A3_EndGame04_missionName";
						value="\A3\Missions_F_Exp\Data\Img\MP_EndGame04_overview_CA.paa";
						picture="\A3\Missions_F_Exp\Data\Img\MP_EndGame04_overview_CA.paa";
					};
					class MP_Marksmen_05
					{
						name="$STR_A3_EndGame05_missionName";
						value="\A3\Missions_F_Exp\Data\Img\MP_EndGame05_overview_CA.paa";
						picture="\A3\Missions_F_Exp\Data\Img\MP_EndGame05_overview_CA.paa";
					};
					class BOOT
					{
						name="$STR_A3_BootcampName3";
						value="\A3\Missions_F_BOOTCAMP\data\img\Bootcamp_overview_CA.paa";
						picture="\A3\Missions_F_BOOTCAMP\data\img\Bootcamp_overview_CA.paa";
					};
					class BOOT_m01
					{
						name="$STR_A3_BOOT_m01_Mission_Name";
						value="\A3\Missions_F_Bootcamp\data\img\Boot_m01_overview_CA.paa";
						picture="\A3\Missions_F_Bootcamp\data\img\Boot_m01_overview_CA.paa";
					};
					class BOOT_m02
					{
						name="$STR_A3_BOOT_m02_Mission_Name";
						value="\A3\Missions_F_Bootcamp\data\img\Boot_m02_overview_CA.paa";
						picture="\A3\Missions_F_Bootcamp\data\img\Boot_m02_overview_CA.paa";
					};
					class BOOT_m03
					{
						name="$STR_A3_BOOT_m03_Mission_Name";
						value="\A3\Missions_F_Bootcamp\data\img\Boot_m03_overview_CA.paa";
						picture="\A3\Missions_F_Bootcamp\data\img\Boot_m03_overview_CA.paa";
					};
					class BOOT_m04
					{
						name="$STR_A3_BOOT_m04_Mission_Name";
						value="\A3\Missions_F_Bootcamp\data\img\Boot_m04_overview_CA.paa";
						picture="\A3\Missions_F_Bootcamp\data\img\Boot_m04_overview_CA.paa";
					};
					class BOOT_m05
					{
						name="$STR_A3_BOOT_m05_Mission_Name";
						value="\A3\Missions_F_Bootcamp\data\img\Boot_m05_overview_CA.paa";
						picture="\A3\Missions_F_Bootcamp\data\img\Boot_m05_overview_CA.paa";
					};
					class Episode
					{
						name="$STR_A3_CampaignName";
						value="\A3\Missions_F_EPA\data\img\Campaign_overview_CA.paa";
						picture="\A3\Missions_F_EPA\data\img\Campaign_overview_CA.paa";
					};
					class Episode_StageA
					{
						name="$STR_A3_StageAName";
						value="\A3\Missions_F_EPA\data\img\stage_a_overview_ca.paa";
						picture="\A3\Missions_F_EPA\data\img\stage_a_overview_ca.paa";
					};
					class A_in
					{
						name="$STR_A3_A_in_Mission_Name";
						value="\A3\Missions_F_EPA\data\img\A_in_overview_CA.paa";
						picture="\A3\Missions_F_EPA\data\img\A_in_overview_CA.paa";
					};
					class A_in2
					{
						name="$STR_A3_A_in2_Mission_Name";
						value="\A3\Missions_F_EPA\data\img\A_in2_overview_CA.paa";
						picture="\A3\Missions_F_EPA\data\img\A_in2_overview_CA.paa";
					};
					class A_hub01
					{
						name="$STR_A3_a_hub_missionname_a_hub01";
						value="\A3\Missions_F_EPA\data\img\A_hub01_overview_CA.paa";
						picture="\A3\Missions_F_EPA\data\img\A_hub01_overview_CA.paa";
					};
					class A_m02
					{
						name="$STR_A3_A_m02_Mission_Name";
						value="\A3\Missions_F_EPA\data\img\A_m02_overview_CA.paa";
						picture="\A3\Missions_F_EPA\data\img\A_m02_overview_CA.paa";
					};
					class A_m03
					{
						name="$STR_a3_campaign_a_m04_mission_name";
						value="\A3\Missions_F_EPA\data\img\A_m03_overview_CA.paa";
						picture="\A3\Missions_F_EPA\data\img\A_m03_overview_CA.paa";
					};
					class A_m04
					{
						name="$STR_A3_A_m04_Mission_Name";
						value="\A3\Missions_F_EPA\data\img\A_m04_overview_CA.paa";
						picture="\A3\Missions_F_EPA\data\img\A_m04_overview_CA.paa";
					};
					class A_skirmish01
					{
						name="$STR_A3_A_hub_MissionName_A_skirmish01";
						value="\A3\Missions_F_EPA\data\img\A_skirmish01_overview_CA.paa";
						picture="\A3\Missions_F_EPA\data\img\A_skirmish01_overview_CA.paa";
					};
					class A_m05
					{
						name="$STR_A3_A_m05_Mission_Name";
						value="\A3\Missions_F_EPA\data\img\A_m05_overview_CA.paa";
						picture="\A3\Missions_F_EPA\data\img\A_m05_overview_CA.paa";
					};
					class A_hub02
					{
						name="$STR_A3_a_hub_missionname_a_hub02";
						value="\A3\Missions_F_EPA\data\img\A_hub02_overview_CA.paa";
						picture="\A3\Missions_F_EPA\data\img\A_hub02_overview_CA.paa";
					};
					class A_skirmish02
					{
						name="$STR_A3_A_hub_MissionName_A_skirmish02";
						value="\A3\Missions_F_EPA\data\img\A_skirmish02_overview_CA.paa";
						picture="\A3\Missions_F_EPA\data\img\A_skirmish02_overview_CA.paa";
					};
					class A_Out
					{
						name="$STR_A3_A_out_Mission_Name";
						value="\A3\Missions_F_EPA\data\img\A_Out_overview_CA.paa";
						picture="\A3\Missions_F_EPA\data\img\A_Out_overview_CA.paa";
					};
					class B_in
					{
						name="$STR_A3_B_in_Mission_Name";
						value="\A3\Missions_F_EPA\data\img\B_in_overview_CA.paa";
						picture="\A3\Missions_F_EPA\data\img\B_in_overview_CA.paa";
					};
					class Episode_StageB
					{
						name="$STR_A3_StageBName";
						value="\A3\Missions_F_EPA\data\img\stage_b_overview_ca.paa";
						picture="\A3\Missions_F_EPA\data\img\stage_b_overview_ca.paa";
					};
					class B_in2
					{
						name="$STR_A3_B_in2_Mission_Name";
						value="\A3\Missions_F_EPA\data\img\B_in2_overview_CA.paa";
						picture="\A3\Missions_F_EPA\data\img\B_in2_overview_CA.paa";
					};
					class B_hub01
					{
						name="$STR_A3_B_hub01_mission_name";
						value="\A3\Missions_F_EPA\data\img\B_hub01_overview_CA.paa";
						picture="\A3\Missions_F_EPA\data\img\B_hub01_overview_CA.paa";
					};
					class B_skirmish01
					{
						name="$STR_A3_B_skirmishX_mission_name";
						value="\A3\Missions_F_EPA\data\img\B_skirmish01_overview_CA.paa";
						picture="\A3\Missions_F_EPA\data\img\B_skirmish01_overview_CA.paa";
					};
					class B_m06
					{
						name="$STR_A3_B_m06_mission_name";
						value="\A3\Missions_F_EPA\data\img\B_m06_overview_CA.paa";
						picture="\A3\Missions_F_EPA\data\img\B_m06_overview_CA.paa";
					};
					class B_hub02
					{
						name="$STR_A3_B_hub02_mission_name";
						value="\A3\Missions_F_EPA\data\img\B_hub02_overview_CA.paa";
						picture="\A3\Missions_F_EPA\data\img\B_hub02_overview_CA.paa";
					};
					class B_skirmish02
					{
						name="$STR_A3_B_skirmishX_mission_name";
						value="\A3\Missions_F_EPA\data\img\B_skirmish02_overview_CA.paa";
						picture="\A3\Missions_F_EPA\data\img\B_skirmish02_overview_CA.paa";
					};
					class B_m03
					{
						name="$STR_A3_B_m03_mission_name";
						value="\A3\Missions_F_EPA\data\img\B_m03_overview_CA.paa";
						picture="\A3\Missions_F_EPA\data\img\B_m03_overview_CA.paa";
					};
					class B_m01
					{
						name="$STR_A3_B_m01_mission_name";
						value="\A3\Missions_F_EPA\data\img\B_m01_overview_CA.paa";
						picture="\A3\Missions_F_EPA\data\img\B_m01_overview_CA.paa";
					};
					class B_m05
					{
						name="$STR_A3_B_m05_mission_name";
						value="\A3\Missions_F_EPA\data\img\B_m05_overview_CA.paa";
						picture="\A3\Missions_F_EPA\data\img\B_m05_overview_CA.paa";
					};
					class m02_1
					{
						name="$STR_A3_B_m02_1_mission_name";
						value="\A3\Missions_F_EPA\data\img\B_m02_1_overview_CA.paa";
						picture="\A3\Missions_F_EPA\data\img\B_m02_1_overview_CA.paa";
					};
					class m02_2
					{
						name="$STR_A3_B_m02_2_mission_name";
						value="\A3\Missions_F_EPA\data\img\B_m02_2_overview_CA.paa";
						picture="\A3\Missions_F_EPA\data\img\B_m02_2_overview_CA.paa";
					};
					class B_hub03
					{
						name="$STR_A3_B_hub03_mission_name";
						value="\A3\Missions_F_EPA\data\img\B_hub03_overview_CA.paa";
						picture="\A3\Missions_F_EPA\data\img\B_hub03_overview_CA.paa";
					};
					class B_skirmish03
					{
						name="$STR_A3_B_skirmishX_mission_name";
						value="\A3\Missions_F_EPA\data\img\B_skirmish03_overview_CA.paa";
						picture="\A3\Missions_F_EPA\data\img\B_skirmish03_overview_CA.paa";
					};
					class B_out2
					{
						name="$STR_A3_B_out2_mission_name";
						value="\A3\Missions_F_EPA\data\img\B_out2_overview_CA.paa";
						picture="\A3\Missions_F_EPA\data\img\B_out2_overview_CA.paa";
					};
					class Episode_StageC
					{
						name="$STR_A3_StageCName";
						value="\A3\Missions_F_EPA\data\img\stage_c_overview_ca.paa";
						picture="\A3\Missions_F_EPA\data\img\stage_c_overview_ca.paa";
					};
					class C_in1
					{
						name="$STR_A3_C_in1_mission_name";
						value="\A3\Missions_F_EPA\data\img\C_in1_overview_ca.paa";
						picture="\A3\Missions_F_EPA\data\img\C_in1_overview_ca.paa";
					};
					class C_m01
					{
						name="$STR_A3_C_m01_mission_name";
						value="\A3\Missions_F_EPA\data\img\C_m01_overview_ca.paa";
						picture="\A3\Missions_F_EPA\data\img\C_m01_overview_ca.paa";
					};
					class C_m02
					{
						name="$STR_A3_C_m02_mission_name";
						value="\A3\Missions_F_EPA\data\img\C_m02_overview_ca.paa";
						picture="\A3\Missions_F_EPA\data\img\C_m02_overview_ca.paa";
					};
					class C_out1
					{
						name="$STR_A3_C_out1_mission_name";
						value="\A3\Missions_F_EPA\data\img\C_out1_overview_ca.paa";
						picture="\A3\Missions_F_EPA\data\img\C_out1_overview_ca.paa";
					};
					class C_out2
					{
						name="$STR_A3_C_out2_mission_name";
						value="\A3\Missions_F_EPA\data\img\C_out2_overview_ca.paa";
						picture="\A3\Missions_F_EPA\data\img\C_out2_overview_ca.paa";
					};
					class C_EA
					{
						name="$STR_A3_C_EA_mission_name";
						value="\A3\Missions_F_EPA\data\img\C_EA_overview_ca.paa";
						picture="\A3\Missions_F_EPA\data\img\C_EA_overview_ca.paa";
					};
					class C_EB
					{
						name="$STR_A3_C_EB_mission_name";
						value="\A3\Missions_F_EPA\data\img\C_EB_overview_ca.paa";
						picture="\A3\Missions_F_EPA\data\img\C_EB_overview_ca.paa";
					};
					class TO_C01
					{
						name="$STR_A3_TO_C01_briefingName";
						value="\A3\Missions_F_Tacops\data\img\campaign1_ca.paa";
						picture="\A3\Missions_F_Tacops\data\img\campaign1_ca.paa";
					};
					class TO_C01_M01
					{
						name="$STR_A3_to_c01m01_Mission_Name";
						value="\A3\Missions_F_Tacops\data\img\campaign1_m1_ca.paa";
						picture="\A3\Missions_F_Tacops\data\img\campaign1_m1_ca.paa";
					};
					class TO_C01_M02
					{
						name="$STR_A3_to_c01m02_Mission_Name";
						value="\A3\Missions_F_Tacops\data\img\campaign1_m2_ca.paa";
						picture="\A3\Missions_F_Tacops\data\img\campaign1_m2_ca.paa";
					};
					class TO_C02
					{
						name="$STR_A3_TO_C02_briefingName";
						value="\A3\Missions_F_Tacops\data\img\campaign2_ca.paa";
						picture="\A3\Missions_F_Tacops\data\img\campaign2_ca.paa";
					};
					class TO_C02_M01
					{
						name="$STR_A3_to_c02m01_onloadname";
						value="\A3\Missions_F_Tacops\data\img\campaign2_m1_ca.paa";
						picture="\A3\Missions_F_Tacops\data\img\campaign2_m1_ca.paa";
					};
					class TO_C02_M02
					{
						name="$STR_A3_to_c02m02_onloadname";
						value="\A3\Missions_F_Tacops\data\img\campaign2_m2_ca.paa";
						picture="\A3\Missions_F_Tacops\data\img\campaign2_m2_ca.paa";
					};
					class TO_C03
					{
						name="$STR_A3_TO_C03_briefingName";
						value="\A3\Missions_F_Tacops\data\img\campaign3_ca.paa";
						picture="\A3\Missions_F_Tacops\data\img\campaign3_ca.paa";
					};
					class TO_C03_M01
					{
						name="$STR_A3_to_c03m01_onloadname";
						value="\A3\Missions_F_Tacops\data\img\campaign3_m1_ca.paa";
						picture="\A3\Missions_F_Tacops\data\img\campaign3_m1_ca.paa";
					};
					class TO_C03_M02
					{
						name="$STR_A3_to_c03m02_onloadname";
						value="\A3\Missions_F_Tacops\data\img\campaign3_m2_ca.paa";
						picture="\A3\Missions_F_Tacops\data\img\campaign3_m2_ca.paa";
					};
					class TO_C03_M03
					{
						name="$STR_A3_to_c03m03_onloadname";
						value="\A3\Missions_F_Tacops\data\img\campaign3_m3_ca.paa";
						picture="\A3\Missions_F_Tacops\data\img\campaign3_m3_ca.paa";
					};
				};
			};
		};
	};
	class Photos_V5_scenarios: Photos_V4_scenarios
	{
		mapSize=0.15000001;
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Photos_V5_scenarios.jpg";
		_generalMacro="Photos_V5_scenarios";
		displayName="$STR_Globe_Photos_V5_scenarios";
		model="\A3\Structures_F\Items\Documents\Photos_V5_F.p3d";
		icon="iconObject_3x2";
	};
	class Photos_V6_scenarios: Photos_V4_scenarios
	{
		mapSize=0.20999999;
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Photos_V6_scenarios.jpg";
		_generalMacro="Photos_V6_scenarios";
		displayName="$STR_Globe_Photos_V6_scenarios";
		model="\A3\Structures_F\Items\Documents\Photos_V6_F.p3d";
		icon="iconObject_3x2";
	};
	class Photos_V4_scenarios_random: Land_Photos_V4_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Photos_V4_scenarios_random.jpg";
		_generalMacro="Photos_V4_scenarios_random";
		displayName="$STR_Globe_Photos_V4_scenarios_random";
		hiddenSelectionsTextures[]=
		{
			"\a3\missions_f\data\img\Showcase_Infantry_overview_CA.paa"
		};
		class EventHandlers
		{
			init="(_this # 0) call compile preprocessFileLineNumbers '\A3\Props_F_Globe\Items\Documents\scripts\randomize_photos.sqf'";
		};
	};
	class Photos_V5_scenarios_random: Photos_V4_scenarios_random
	{
		mapSize=0.15000001;
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Photos_V5_scenarios_random.jpg";
		_generalMacro="Photos_V5_scenarios_random";
		displayName="$STR_Globe_Photos_V5_scenarios_random";
		model="\A3\Structures_F\Items\Documents\Photos_V5_F.p3d";
		icon="iconObject_3x2";
	};
	class Photos_V6_scenarios_random: Photos_V4_scenarios_random
	{
		mapSize=0.20999999;
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Photos_V6_scenarios_random.jpg";
		_generalMacro="Photos_V6_scenarios_random";
		displayName="$STR_Globe_Photos_V6_scenarios_random";
		model="\A3\Structures_F\Items\Documents\Photos_V6_F.p3d";
		icon="iconObject_3x2";
	};
	class DiaryImages_Altis_random: Land_Photos_V3_F
	{
		author="O&T Expansion Eden";
		mapSize=0.20999999;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\DiaryImages_Altis_random.jpg";
		_generalMacro="DiaryImages_Altis_random";
		displayName="$STR_Globe_DiaryImages_Altis_random";
		icon="iconObject_1x1";
		editorSubcategory="EdSubcat_Intel";
		hiddenSelectionsTextures[]=
		{
			"\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Abdera_ca.paa"
		};
		class EventHandlers
		{
			class Globe_CfgDiaryImages
			{
				postInit="(_this # 0) call compile preprocessFileLineNumbers '\A3\Props_F_Globe\Items\Documents\scripts\randomize_photos_diaryimages.sqf'";
			};
		};
	};
	class DiaryImages_Stratis_random: Land_Photos_V3_F
	{
		author="O&T Expansion Eden";
		mapSize=0.20999999;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\DiaryImages_Stratis_random.jpg";
		_generalMacro="DiaryImages_Stratis_random";
		displayName="$STR_Globe_DiaryImages_Stratis_random";
		icon="iconObject_1x1";
		editorSubcategory="EdSubcat_Intel";
		hiddenSelectionsTextures[]=
		{
			"\A3\ui_f_curator\Data\CfgDiaryImages\Stratis\AgiaMarina_ca.paa"
		};
		class EventHandlers
		{
			class Globe_CfgDiaryImages
			{
				postInit="(_this # 0) call compile preprocessFileLineNumbers '\A3\Props_F_Globe\Items\Documents\scripts\randomize_photos_diaryimages.sqf'";
			};
		};
	};
	class DiaryImages_AltisStratis_random: Land_Photos_V3_F
	{
		author="O&T Expansion Eden";
		mapSize=0.20999999;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\DiaryImages_AltisStratis_random.jpg";
		_generalMacro="DiaryImages_AltisStratis_random";
		displayName="$STR_Globe_DiaryImages_AltisStratis_random";
		icon="iconObject_1x1";
		editorSubcategory="EdSubcat_Intel";
		hiddenSelectionsTextures[]=
		{
			"\A3\ui_f_curator\Data\CfgDiaryImages\Stratis\AgiaMarina_ca.paa"
		};
		class EventHandlers
		{
			init="(_this # 0) call compile preprocessFileLineNumbers '\A3\Props_F_Globe\Items\Documents\scripts\randomize_photos_diaryimages.sqf'";
		};
	};
	class DiaryImages_Altis: Land_Photos_V3_F
	{
		author="O&T Expansion Eden";
		mapSize=0.20999999;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\DiaryImages_Altis.jpg";
		_generalMacro="DiaryImages_Altis";
		displayName="$STR_expEden_Land_DiaryImages_Altis_F";
		icon="iconObject_1x1";
		editorSubcategory="EdSubcat_Intel";
		hiddenSelectionsTextures[]=
		{
			"\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Abdera_ca.paa"
		};
		class Attributes
		{
			class SwitchTexture
			{
				property="SwitchTexture";
				displayName="$STR_NAME_CITY";
				control="Combo";
				expression="_this setObjectTextureGlobal [0, _value]";
				defaultValue="'\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Abdera_ca.paa'";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="$STR_A3_abdera0";
						picture="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Abdera_ca.paa";
						value="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Abdera_ca.paa";
					};
					class 2
					{
						name="$STR_A3_Aggelochori0";
						picture="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Aggelochori_ca.paa";
						value="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Aggelochori_ca.paa";
					};
					class 3
					{
						name="$STR_A3_AgiaTriada0";
						picture="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\AgiaTriada_ca.paa";
						value="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\AgiaTriada_ca.paa";
					};
					class 4
					{
						name="$STR_A3_AgiosDionysios0";
						picture="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\AgiosDionysios_ca.paa";
						value="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\AgiosDionysios_ca.paa";
					};
					class 5
					{
						name="$STR_A3_AgiosKonstantinos0";
						picture="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\AgiosKonstantinos_ca.paa";
						value="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\AgiosKonstantinos_ca.paa";
					};
					class 6
					{
						name="$STR_A3_AgiosPetros0";
						picture="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\AgiosPetros_ca.paa";
						value="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\AgiosPetros_ca.paa";
					};
					class 7
					{
						name="$STR_A3_Alikampos0";
						picture="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Alikampos_ca.paa";
						value="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Alikampos_ca.paa";
					};
					class 8
					{
						name="$STR_A3_Anthrakia0";
						picture="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Anthrakia_ca.paa";
						value="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Anthrakia_ca.paa";
					};
					class 9
					{
						name="$STR_A3_Athira0";
						picture="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Athira_ca.paa";
						value="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Athira_ca.paa";
					};
					class 10
					{
						name="$STR_A3_Chalkeia0";
						picture="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Chalkeia_ca.paa";
						value="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Chalkeia_ca.paa";
					};
					class 11
					{
						name="$STR_A3_Charkia0";
						picture="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Charkia_ca.paa";
						value="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Charkia_ca.paa";
					};
					class 12
					{
						name="$STR_A3_Delfinaki0";
						picture="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Delfinaki_ca.paa";
						value="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Delfinaki_ca.paa";
					};
					class 13
					{
						name="$STR_A3_Dorida0";
						picture="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Dorida_ca.paa";
						value="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Dorida_ca.paa";
					};
					class 14
					{
						name="$STR_A3_Ekali0";
						picture="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Ekali_ca.paa";
						value="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Ekali_ca.paa";
					};
					class 15
					{
						name="$STR_A3_Feres0";
						picture="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Feres_ca.paa";
						value="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Feres_ca.paa";
					};
					class 16
					{
						name="$STR_A3_Frini0";
						picture="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Frini_ca.paa";
						value="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Frini_ca.paa";
					};
					class 17
					{
						name="$STR_A3_Gravia0";
						picture="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Gravia_ca.paa";
						value="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Gravia_ca.paa";
					};
					class 18
					{
						name="$STR_A3_Ifestiona0";
						picture="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Ifestiona_ca.paa";
						value="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Ifestiona_ca.paa";
					};
					class 19
					{
						name="$STR_A3_Ioannina0";
						picture="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Ioannina_ca.paa";
						value="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Ioannina_ca.paa";
					};
					class 20
					{
						name="$STR_A3_AgiosPetros0";
						picture="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\AgiosPetros_ca.paa";
						value="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\AgiosPetros_ca.paa";
					};
					class 21
					{
						name="$STR_A3_Kalithea0";
						picture="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Kalithea_ca.paa";
						value="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Kalithea_ca.paa";
					};
					class 22
					{
						name="$STR_A3_Kalochori0";
						picture="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Kalochori_ca.paa";
						value="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Kalochori_ca.paa";
					};
					class 23
					{
						name="$STR_A3_Katalaki0";
						picture="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Katalaki_ca.paa";
						value="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Katalaki_ca.paa";
					};
					class 24
					{
						name="$STR_A3_Kavala0";
						picture="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Kavala_ca.paa";
						value="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Kavala_ca.paa";
					};
					class 25
					{
						name="$STR_A3_Kore0";
						picture="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Kore_ca.paa";
						value="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Kore_ca.paa";
					};
					class 26
					{
						name="$STR_A3_Koroni0";
						picture="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Koroni_ca.paa";
						value="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Koroni_ca.paa";
					};
					class 27
					{
						name="$STR_A3_Lakka0";
						picture="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Lakka_ca.paa";
						value="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Lakka_ca.paa";
					};
					class 28
					{
						name="$STR_A3_Molos0";
						picture="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Molos_ca.paa";
						value="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Molos_ca.paa";
					};
					class 29
					{
						name="$STR_A3_Negades0";
						picture="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Negades_ca.paa";
						value="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Negades_ca.paa";
					};
					class 30
					{
						name="$STR_A3_Neochori0";
						picture="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Neochori_ca.paa";
						value="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Neochori_ca.paa";
					};
					class 31
					{
						name="$STR_A3_Neri0";
						picture="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Neri_ca.paa";
						value="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Neri_ca.paa";
					};
					class 32
					{
						name="$STR_A3_Nifi0";
						picture="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Nifi_ca.paa";
						value="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Nifi_ca.paa";
					};
					class 33
					{
						name="$STR_A3_Oreokastro0";
						picture="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Oreokastro_ca.paa";
						value="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Oreokastro_ca.paa";
					};
					class 34
					{
						name="$STR_A3_Orino0";
						picture="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Orino_ca.paa";
						value="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Orino_ca.paa";
					};
					class 35
					{
						name="$STR_A3_Panagia0";
						picture="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Panagia_ca.paa";
						value="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Panagia_ca.paa";
					};
					class 36
					{
						name="$STR_A3_Panochori0";
						picture="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Panochori_ca.paa";
						value="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Panochori_ca.paa";
					};
					class 37
					{
						name="$STR_A3_Paros0";
						picture="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Paros_ca.paa";
						value="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Paros_ca.paa";
					};
					class 38
					{
						name="$STR_A3_Poliakko0";
						picture="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Poliakko_ca.paa";
						value="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Poliakko_ca.paa";
					};
					class 39
					{
						name="$STR_A3_Pyrgos0";
						picture="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Pyrgos_ca.paa";
						value="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Pyrgos_ca.paa";
					};
					class 40
					{
						name="$STR_A3_Rodopoli0";
						picture="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Rodopoli_ca.paa";
						value="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Rodopoli_ca.paa";
					};
					class 41
					{
						name="$STR_A3_Selakano0";
						picture="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Selakano_ca.paa";
						value="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Selakano_ca.paa";
					};
					class 42
					{
						name="$STR_A3_Sofia0";
						picture="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Sofia_ca.paa";
						value="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Sofia_ca.paa";
					};
					class 43
					{
						name="$STR_A3_Stavros0";
						picture="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Stavros_ca.paa";
						value="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Stavros_ca.paa";
					};
					class 44
					{
						name="$STR_A3_Syrta0";
						picture="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Syrta_ca.paa";
						value="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Syrta_ca.paa";
					};
					class 45
					{
						name="$STR_A3_Telos0";
						picture="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Telos_ca.paa";
						value="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Telos_ca.paa";
					};
					class 46
					{
						name="$STR_A3_Therisa0";
						picture="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Therisa_ca.paa";
						value="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Therisa_ca.paa";
					};
					class 47
					{
						name="$STR_A3_topolia0";
						picture="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Topolia_ca.paa";
						value="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Topolia_ca.paa";
					};
					class 48
					{
						name="$STR_A3_zaros0";
						picture="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Zaros_ca.paa";
						value="\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Zaros_ca.paa";
					};
				};
			};
		};
	};
	class DiaryImages_Stratis: Land_Photos_V3_F
	{
		author="O&T Expansion Eden";
		mapSize=0.20999999;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\DiaryImages_Stratis.jpg";
		_generalMacro="DiaryImages_Stratis";
		displayName="$STR_expEden_Land_DiaryImages_Stratis_F";
		icon="iconObject_1x1";
		editorSubcategory="EdSubcat_Intel";
		hiddenSelectionsTextures[]=
		{
			"\A3\ui_f_curator\Data\CfgDiaryImages\Stratis\AgiaMarina_ca.paa"
		};
		class Attributes
		{
			class SwitchTexture
			{
				property="SwitchTexture";
				displayName="$STR_NAME_CITY";
				control="Combo";
				expression="_this setObjectTextureGlobal [0, _value]";
				defaultValue="'\A3\ui_f_curator\Data\CfgDiaryImages\Stratis\AgiaMarina_ca.paa'";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="$STR_A3_agia_marina0";
						picture="\A3\ui_f_curator\Data\CfgDiaryImages\Stratis\AgiaMarina_ca.paa";
						value="\A3\ui_f_curator\Data\CfgDiaryImages\Stratis\AgiaMarina_ca.paa";
					};
					class 2
					{
						name="$STR_A3_airstation0";
						picture="\A3\ui_f_curator\Data\CfgDiaryImages\Stratis\AirStationMike26_ca.paa";
						value="\A3\ui_f_curator\Data\CfgDiaryImages\Stratis\AirStationMike26_ca.paa";
					};
					class 3
					{
						name="$STR_A3_CampMaxwell0";
						picture="\A3\ui_f_curator\Data\CfgDiaryImages\Stratis\CampMaxwell_ca.paa";
						value="\A3\ui_f_curator\Data\CfgDiaryImages\Stratis\CampMaxwell_ca.paa";
					};
					class 4
					{
						name="$STR_A3_CampRogain0";
						picture="\A3\ui_f_curator\Data\CfgDiaryImages\Stratis\CampRogain_ca.paa";
						value="\A3\ui_f_curator\Data\CfgDiaryImages\Stratis\CampRogain_ca.paa";
					};
					class 5
					{
						name="$STR_A3_camptempest10";
						picture="\A3\ui_f_curator\Data\CfgDiaryImages\Stratis\CampTempest_ca.paa";
						value="\A3\ui_f_curator\Data\CfgDiaryImages\Stratis\CampTempest_ca.paa";
					};
					class 6
					{
						name="$STR_A3_Girna0";
						picture="\A3\ui_f_curator\Data\CfgDiaryImages\Stratis\Girna_ca.paa";
						value="\A3\ui_f_curator\Data\CfgDiaryImages\Stratis\Girna_ca.paa";
					};
					class 7
					{
						name="$STR_A3_sniperschool0";
						picture="\A3\ui_f_curator\Data\CfgDiaryImages\Stratis\KaminoFiringRange_ca.paa";
						value="\A3\ui_f_curator\Data\CfgDiaryImages\Stratis\KaminoFiringRange_ca.paa";
					};
					class 8
					{
						name="$STR_A3_natobase10";
						picture="\A3\ui_f_curator\Data\CfgDiaryImages\Stratis\stratisAirBase_ca.paa";
						value="\A3\ui_f_curator\Data\CfgDiaryImages\Stratis\stratisAirBase_ca.paa";
					};
				};
			};
		};
	};
	class Newspaper_01_aow: Newspaper_01_base_F
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.012;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Newspaper_01_aow.jpg";
		_generalMacro="Newspaper_01_aow";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Newspaper_01_aow0";
		hiddenSelectionsTextures[]=
		{
			"\A3\Missions_F_AoW\Data\Img\Newspaper_special_co.paa"
		};
	};
	class Poster_Sign_AntiCSAT: Poster_base_F
	{
		author="O&T Expansion Eden";
		mapSize=1.85;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.048999999;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Poster_Sign_AntiCSAT.jpg";
		_generalMacro="Poster_Sign_AntiCSAT";
		scope=2;
		scopeCurator=2;
		displayName="$STR_expEden_Poster_Sign_AntiCSAT";
		model="\A3\Structures_F_EPB\Items\Documents\Poster_04_F.p3d";
		icon="iconObject_10x1";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C13+C14+C15\Poster_Sign_AntiCSAT_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"A3\Structures_F_EPB\Items\Documents\Data\Poster_04_v5.rvmat"
		};
		class Attributes
		{
			class ObjectTextureCustom0
			{
				displayName="$STR_3den_object_attribute_objecttexturecustom0_displayname";
				tooltip="$STR_3den_object_attribute_objecttexturecustom_tooltip";
				property="ObjectTextureCustom0";
				control="Edit";
				expression="_this setObjectTextureGlobal [0,_value]";
				defaultValue="(getObjectTextures _this) param [0,'',['']]";
			};
			class ObjectMaterialCustom0
			{
				displayName="$STR_3den_object_attribute_objectmaterialcustom0_displayname";
				tooltip="$STR_3den_object_attribute_objectmaterialcustom_tooltip";
				property="ObjectMaterialCustom0";
				control="Edit";
				expression="_this setObjectMaterialGlobal [0,_value]";
				defaultValue="(getObjectMaterials _this) param [0,'',['']]";
			};
		};
	};
	class Poster_04_empty: Poster_base_F
	{
		author="O&T Expansion Eden";
		mapSize=1.85;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.048999999;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Poster_04_empty.jpg";
		_generalMacro="Poster_04_empty";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Poster_04_empty0";
		model="\A3\Structures_F_EPB\Items\Documents\Poster_04_F.p3d";
		icon="iconObject_10x1";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\structures_f_epb\items\documents\data\poster_04_back_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\structures_f_epb\items\documents\data\poster_04_back.rvmat"
		};
		class Attributes
		{
			class ObjectTextureCustom0
			{
				displayName="$STR_3den_object_attribute_objecttexturecustom0_displayname";
				tooltip="$STR_3den_object_attribute_objecttexturecustom_tooltip";
				property="ObjectTextureCustom0";
				control="Edit";
				expression="_this setObjectTextureGlobal [0,_value]";
				defaultValue="(getObjectTextures _this) param [0,'',['']]";
			};
			class ObjectMaterialCustom0
			{
				displayName="$STR_3den_object_attribute_objectmaterialcustom0_displayname";
				tooltip="$STR_3den_object_attribute_objectmaterialcustom_tooltip";
				property="ObjectMaterialCustom0";
				control="Edit";
				expression="_this setObjectMaterialGlobal [0,_value]";
				defaultValue="(getObjectMaterials _this) param [0,'',['']]";
			};
		};
	};
	class Poster_04_protest1: Poster_base_F
	{
		author="O&T Expansion Eden";
		mapSize=1.85;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.048999999;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Poster_04_protest1.jpg";
		_generalMacro="Poster_04_protest1";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Poster_04_protest10";
		model="\A3\Structures_F_EPB\Items\Documents\Poster_04_F.p3d";
		icon="iconObject_10x1";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\structures_f_epb\items\documents\data\poster_04_v1_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\structures_f_epb\items\documents\data\poster_04_v1.rvmat"
		};
		class Attributes
		{
			class ObjectTextureCustom0
			{
				displayName="$STR_3den_object_attribute_objecttexturecustom0_displayname";
				tooltip="$STR_3den_object_attribute_objecttexturecustom_tooltip";
				property="ObjectTextureCustom0";
				control="Edit";
				expression="_this setObjectTextureGlobal [0,_value]";
				defaultValue="(getObjectTextures _this) param [0,'',['']]";
			};
			class ObjectMaterialCustom0
			{
				displayName="$STR_3den_object_attribute_objectmaterialcustom0_displayname";
				tooltip="$STR_3den_object_attribute_objectmaterialcustom_tooltip";
				property="ObjectMaterialCustom0";
				control="Edit";
				expression="_this setObjectMaterialGlobal [0,_value]";
				defaultValue="(getObjectMaterials _this) param [0,'',['']]";
			};
		};
	};
	class Poster_04_protest2: Poster_base_F
	{
		author="O&T Expansion Eden";
		mapSize=1.85;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.048999999;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Poster_04_protest2.jpg";
		_generalMacro="Poster_04_protest2";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Poster_04_protest20";
		model="\A3\Structures_F_EPB\Items\Documents\Poster_04_F.p3d";
		icon="iconObject_10x1";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\structures_f_epb\items\documents\data\poster_04_v2_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\structures_f_epb\items\documents\data\poster_04_v2.rvmat"
		};
		class Attributes
		{
			class ObjectTextureCustom0
			{
				displayName="$STR_3den_object_attribute_objecttexturecustom0_displayname";
				tooltip="$STR_3den_object_attribute_objecttexturecustom_tooltip";
				property="ObjectTextureCustom0";
				control="Edit";
				expression="_this setObjectTextureGlobal [0,_value]";
				defaultValue="(getObjectTextures _this) param [0,'',['']]";
			};
			class ObjectMaterialCustom0
			{
				displayName="$STR_3den_object_attribute_objectmaterialcustom0_displayname";
				tooltip="$STR_3den_object_attribute_objectmaterialcustom_tooltip";
				property="ObjectMaterialCustom0";
				control="Edit";
				expression="_this setObjectMaterialGlobal [0,_value]";
				defaultValue="(getObjectMaterials _this) param [0,'',['']]";
			};
		};
	};
	class Poster_04_protest3: Poster_base_F
	{
		author="O&T Expansion Eden";
		mapSize=1.85;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.048999999;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Poster_04_protest3.jpg";
		_generalMacro="Poster_04_protest3";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Poster_04_protest30";
		model="\A3\Structures_F_EPB\Items\Documents\Poster_04_F.p3d";
		icon="iconObject_10x1";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\structures_f_epb\items\documents\data\poster_04_v3_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\structures_f_epb\items\documents\data\poster_04_v3.rvmat"
		};
		class Attributes
		{
			class ObjectTextureCustom0
			{
				displayName="$STR_3den_object_attribute_objecttexturecustom0_displayname";
				tooltip="$STR_3den_object_attribute_objecttexturecustom_tooltip";
				property="ObjectTextureCustom0";
				control="Edit";
				expression="_this setObjectTextureGlobal [0,_value]";
				defaultValue="(getObjectTextures _this) param [0,'',['']]";
			};
			class ObjectMaterialCustom0
			{
				displayName="$STR_3den_object_attribute_objectmaterialcustom0_displayname";
				tooltip="$STR_3den_object_attribute_objectmaterialcustom_tooltip";
				property="ObjectMaterialCustom0";
				control="Edit";
				expression="_this setObjectMaterialGlobal [0,_value]";
				defaultValue="(getObjectMaterials _this) param [0,'',['']]";
			};
		};
	};
	class Poster_04_protest4: Poster_base_F
	{
		author="O&T Expansion Eden";
		mapSize=1.85;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.048999999;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Poster_04_protest4.jpg";
		_generalMacro="Poster_04_protest4";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Poster_04_protest40";
		model="\A3\Structures_F_EPB\Items\Documents\Poster_04_F.p3d";
		icon="iconObject_10x1";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\structures_f_epb\items\documents\data\poster_04_v4_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\structures_f_epb\items\documents\data\poster_04_v4.rvmat"
		};
		class Attributes
		{
			class ObjectTextureCustom0
			{
				displayName="$STR_3den_object_attribute_objecttexturecustom0_displayname";
				tooltip="$STR_3den_object_attribute_objecttexturecustom_tooltip";
				property="ObjectTextureCustom0";
				control="Edit";
				expression="_this setObjectTextureGlobal [0,_value]";
				defaultValue="(getObjectTextures _this) param [0,'',['']]";
			};
			class ObjectMaterialCustom0
			{
				displayName="$STR_3den_object_attribute_objectmaterialcustom0_displayname";
				tooltip="$STR_3den_object_attribute_objectmaterialcustom_tooltip";
				property="ObjectMaterialCustom0";
				control="Edit";
				expression="_this setObjectMaterialGlobal [0,_value]";
				defaultValue="(getObjectMaterials _this) param [0,'',['']]";
			};
		};
	};
	class Poster_04_protest5: Poster_base_F
	{
		author="O&T Expansion Eden";
		mapSize=1.85;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.048999999;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Poster_04_protest5.jpg";
		_generalMacro="Poster_04_protest5";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Poster_04_protest50";
		model="\A3\Structures_F_EPB\Items\Documents\Poster_04_F.p3d";
		icon="iconObject_10x1";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\structures_f_epb\items\documents\data\poster_04_v5_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\structures_f_epb\items\documents\data\poster_04_v5.rvmat"
		};
		class Attributes
		{
			class ObjectTextureCustom0
			{
				displayName="$STR_3den_object_attribute_objecttexturecustom0_displayname";
				tooltip="$STR_3den_object_attribute_objecttexturecustom_tooltip";
				property="ObjectTextureCustom0";
				control="Edit";
				expression="_this setObjectTextureGlobal [0,_value]";
				defaultValue="(getObjectTextures _this) param [0,'',['']]";
			};
			class ObjectMaterialCustom0
			{
				displayName="$STR_3den_object_attribute_objectmaterialcustom0_displayname";
				tooltip="$STR_3den_object_attribute_objectmaterialcustom_tooltip";
				property="ObjectMaterialCustom0";
				control="Edit";
				expression="_this setObjectMaterialGlobal [0,_value]";
				defaultValue="(getObjectMaterials _this) param [0,'',['']]";
			};
		};
	};
};
