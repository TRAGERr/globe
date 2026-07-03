class CfgPatches
{
	class A3_Props_F_Globe_Military_Equipment
	{
		addonRootClass="A3_Props_F_Globe";
		requiredAddons[]=
		{
			"A3_Props_F_Globe_Military"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Land_PylonPod_ECM_01_G_left",
			"Land_PylonPod_ECM_01_G_right",
			"Land_PylonPod_Searchlight_01_G",
			"Land_PylonPod_Radar_01_G",
			"Land_PylonPod_Camera_01_G",
			"Tablet_02_G_DiaryImagesAltis",
			"Tablet_02_G_DiaryImagesStratis",
			"Tablet_02_G_DiaryImagesAltis_random",
			"Tablet_02_G_DiaryImagesStratis_random",
			"Tablet_02_G_DiaryImagesAltisStratis_random",
			"Laptop_03_G_DiaryImagesAltis",
			"Laptop_03_G_DiaryImagesAltis_random",
			"Laptop_03_G_DiaryImagesStratis",
			"Laptop_03_G_DiaryImagesStratis_random",
			"Laptop_03_G_DiaryImagesAltisStratis_random",
			"Weapon_LMG_03_disassembled",
			"ExternalFuelDropTank_01_empty",
			"ExternalFuelDropTank_01",
			"Land_NVGogglesOld",
			"CombatBoot_random",
			"CombatBoot_NATO",
			"CombatBoot_NATO_wdl",
			"CombatBoot_CSAT",
			"CombatBoot_AAF",
			"CombatBoot_LDF",
			"MortarShell_01_HE",
			"MortarShell_01_smoke",
			"Laptop_03_olive_GSC",
			"Laptop_03_black_GSC",
			"Laptop_03_sand_GSC",
			"Laptop_03_olive_StaticNoise",
			"Laptop_03_black_StaticNoise",
			"Laptop_03_sand_StaticNoise",
			"Watch_01",
			"Land_Laptop_03_olive_NATO_random_F",
			"Land_Laptop_03_black_NATO_random_F",
			"Land_Laptop_03_sand_NATO_random_F",
			"Land_Laptop_03_olive_NATO_F",
			"Land_Laptop_03_black_NATO_F",
			"Land_Laptop_03_sand_NATO_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class ThingX;
	class Items_base_F: ThingX
	{
		class Attributes;
		class UserActions;
	};
	class Land_MultiScreenComputer_01_base_F: Items_base_F
	{
		class Attributes: Attributes
		{
			class open_source_monitors_left
			{
				property="open_source_monitors_left";
				displayName="$STR_Globe_CfgVehicles_Land_MultiScreenComputer_01_base_F_Attributes_open_source_monitors_left0";
				tooltip="$STR_Globe_AttributeAuthorNote";
				control="SliderMSComputerScreenL";
				defaultValue=0;
				expression="_this animate ['%s',_value,true]";
			};
			class open_source_monitors_right
			{
				property="open_source_monitors_right";
				displayName="$STR_Globe_CfgVehicles_Land_MultiScreenComputer_01_base_F_Attributes_open_source_monitors_right0";
				tooltip="$STR_Globe_AttributeAuthorNote";
				control="SliderMSComputerScreenR";
				defaultValue=0;
				expression="_this animate ['%s',_value,true]";
			};
			class open_source_monitors
			{
				property="open_source_monitors";
				displayName="$STR_Globe_CfgVehicles_Land_MultiScreenComputer_01_base_F_Attributes_open_source_monitors0";
				tooltip="$STR_Globe_AttributeAuthorNote";
				control="Checkbox";
				defaultValue=0;
				expression="if (_value isEqualTo true) then {_this animate ['open_source_monitors',1,true]} else {_this animate ['open_source_monitors',0,true]}";
			};
			class Open_Action
			{
				property="Open_Action";
				displayName="$STR_Globe_CfgVehicles_Land_Laptop_03_base_F_Attributes_Open_Action0";
				tooltip="$STR_Globe_CfgVehicles_Land_MultiScreenComputer_01_base_F_Attributes_Open_Action1";
				control="Checkbox";
				defaultValue=0;
				expression="if (_value isEqualTo true) then {_this setVariable ['Globe_enableAction',true,isServer]} else {_this setVariable ['Globe_enableAction',false,isServer]}";
			};
			class ObjectTextureCustom1;
			class ObjectTextureCustom2;
			class ObjectTextureCustom3;
		};
		class UserActions: UserActions
		{
			class MSComputerOpen
			{
				displayNameDefault="<img image='a3\data_f_destroyer\data\ui\igui\cfg\holdactions\holdaction_unloadvehicle_ca.paa' size='2.3' shadow=2 />";
				displayName="$STR_Globe_UserAction_OpenLaptop";
				position="";
				actionNamedSel="";
				radius=1.97;
				onlyForPlayer=1;
				priority=5;
				showWindow=1;
				condition="(alive this) && (simulationEnabled this) && (this getVariable ['Globe_enableAction',false]) && (this animationSourcePhase 'Open_Source' > 0.1)";
				statement="this animateSource ['Open_Source',0]";
			};
			class MSComputerClose: MSComputerOpen
			{
				displayName="$STR_Globe_UserAction_CloseLaptop";
				displayNameDefault="<img image='a3\data_f_destroyer\data\ui\igui\cfg\holdactions\holdaction_loadvehicle_ca.paa' size='2.3' shadow=2 />";
				actionNamedSel="";
				condition="(alive this) && (simulationEnabled this) && (this getVariable ['Globe_enableAction',false]) && (this animationSourcePhase 'Open_Source' < 0.9)";
				statement="this animateSource ['Open_Source',1]";
			};
		};
	};
	class Land_Laptop_03_base_F: Items_base_F
	{
		class Attributes
		{
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
					class 1
					{
						name="$STR_A3_TEXTURESOURCES_OLIVE0";
						value="a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_olive_CO.paa";
						picture="a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_olive_CO.paa";
					};
					class 2
					{
						name="$STR_a3_texturesources_sand0";
						value="a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_sand_CO.paa";
						picture="a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_sand_CO.paa";
					};
					class 3
					{
						name="$STR_a3_texturesources_black0";
						value="a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_black_CO.paa";
						picture="a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_black_CO.paa";
					};
				};
			};
			class ObjectTextureCustom1
			{
				displayName="$STR_3den_object_attribute_objecttexturecustom1_displayname";
				tooltip="$STR_3den_object_attribute_objecttexturecustom_tooltip";
				property="ObjectTextureCustom1";
				control="Edit";
				expression="_this setObjectTextureGlobal [1,_value]";
				defaultValue="(getObjectTextures _this) param [1,'',['']]";
			};
			class Open_Source
			{
				property="Open_Source";
				displayName="$STR_Globe_CfgVehicles_Land_Laptop_03_base_F_Attributes_Open_Source0";
				tooltip="$STR_Globe_AttributeAuthorNote";
				control="Slider";
				defaultValue=0;
				expression="_this animateSource ['%s',_value,true]";
			};
			class Open_Action
			{
				property="Open_Action";
				displayName="$STR_Globe_CfgVehicles_Land_Laptop_03_base_F_Attributes_Open_Action0";
				tooltip="$STR_Globe_CfgVehicles_Land_Laptop_03_base_F_Attributes_Open_Action1";
				control="Checkbox";
				defaultValue=0;
				expression="if (_value isEqualTo true) then {_this setVariable ['Globe_enableAction',true,isServer]} else {_this setVariable ['Globe_enableAction',false,isServer]}";
			};
		};
		class UserActions
		{
			class LaptopOpen
			{
				displayNameDefault="<img image='a3\data_f_destroyer\data\ui\igui\cfg\holdactions\holdaction_unloadvehicle_ca.paa' size='2.3' shadow=2 />";
				displayName="$STR_Globe_UserAction_OpenLaptop";
				position="";
				actionNamedSel="";
				radius=1.97;
				onlyForPlayer=1;
				priority=5;
				showWindow=1;
				condition="(alive this) && (simulationEnabled this) && (this getVariable ['Globe_enableAction',false]) && (this animationSourcePhase 'Open_Source' > 0)";
				statement="this animateSource ['Open_Source',0,2]";
			};
			class LaptopClose: LaptopOpen
			{
				displayName="$STR_Globe_UserAction_CloseLaptop";
				displayNameDefault="<img image='a3\data_f_destroyer\data\ui\igui\cfg\holdactions\holdaction_loadvehicle_ca.paa' size='2.3' shadow=2 />";
				actionNamedSel="";
				condition="(alive this) && (simulationEnabled this) && (this getVariable ['Globe_enableAction',false]) && (this animationSourcePhase 'Open_Source' < 1)";
				statement="this animateSource ['Open_Source',1,4]";
			};
		};
		class EventHandlers;
	};
	class Land_Laptop_03_closed_base_F: Land_Laptop_03_base_F
	{
		class Attributes
		{
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
					class 1
					{
						name="$STR_A3_TEXTURESOURCES_OLIVE0";
						value="a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_olive_CO.paa";
						picture="a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_olive_CO.paa";
					};
					class 2
					{
						name="$STR_a3_texturesources_sand0";
						value="a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_sand_CO.paa";
						picture="a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_sand_CO.paa";
					};
					class 3
					{
						name="$STR_a3_texturesources_black0";
						value="a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_black_CO.paa";
						picture="a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_black_CO.paa";
					};
				};
			};
			class ObjectTextureCustom1
			{
				displayName="$STR_3den_object_attribute_objecttexturecustom1_displayname";
				tooltip="$STR_3den_object_attribute_objecttexturecustom_tooltip";
				property="ObjectTextureCustom1";
				control="Edit";
				expression="_this setObjectTextureGlobal [1,_value]";
				defaultValue="(getObjectTextures _this) param [1,'',['']]";
			};
			class Open_Source
			{
				property="Open_Source";
				displayName="$STR_Globe_CfgVehicles_Land_Laptop_03_base_F_Attributes_Open_Source0";
				tooltip="$STR_Globe_AttributeAuthorNote";
				control="Slider";
				defaultValue=1;
				expression="_this animateSource ['%s',_value,true]";
			};
			class Open_Action
			{
				property="Open_Action";
				displayName="$STR_Globe_CfgVehicles_Land_Laptop_03_base_F_Attributes_Open_Action0";
				tooltip="$STR_Globe_CfgVehicles_Land_Laptop_03_base_F_Attributes_Open_Action1";
				control="Checkbox";
				defaultValue=0;
				expression="if (_value isEqualTo true) then {_this setVariable ['Globe_enableAction',true,isServer]} else {_this setVariable ['Globe_enableAction',false,isServer]}";
			};
		};
		class UserActions
		{
			class LaptopOpen
			{
				displayNameDefault="<img image='a3\data_f_destroyer\data\ui\igui\cfg\holdactions\holdaction_unloadvehicle_ca.paa' size='2.3' shadow=2 />";
				displayName="$STR_Globe_UserAction_OpenLaptop";
				position="";
				actionNamedSel="";
				radius=1.97;
				onlyForPlayer=1;
				priority=5;
				showWindow=1;
				condition="(alive this) && (simulationEnabled this) && (this getVariable ['Globe_enableAction',false]) && (this animationSourcePhase 'Open_Source' > 0)";
				statement="this animateSource ['Open_Source',0,2]";
			};
			class LaptopClose: LaptopOpen
			{
				displayName="$STR_Globe_UserAction_CloseLaptop";
				displayNameDefault="<img image='a3\data_f_destroyer\data\ui\igui\cfg\holdactions\holdaction_loadvehicle_ca.paa' size='2.3' shadow=2 />";
				actionNamedSel="";
				condition="(alive this) && (simulationEnabled this) && (this getVariable ['Globe_enableAction',false]) && (this animationSourcePhase 'Open_Source' < 1)";
				statement="this animateSource ['Open_Source',1,4]";
			};
		};
	};
	class Land_Laptop_03_olive_F;
	class Land_Laptop_03_black_F;
	class Land_Laptop_03_sand_F;
	class Land_Laptop_03_olive_NATO_F: Land_Laptop_03_base_F
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.167;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Laptop_03_olive_NATO_F.jpg";
		_generalMacro="Land_Laptop_03_olive_NATO_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_Globe_CfgVehicles_Land_Laptop_03_olive_NATO_F0";
		hiddenSelectionsTextures[]=
		{
			"a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_olive_CO.paa",
			"\A3\missions_f_oldman\Data\img\Screens\MillerNtbScreen01_co.paa"
		};
		class Attributes: Attributes
		{
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
					class 1
					{
						name="$STR_A3_TEXTURESOURCES_OLIVE0";
						value="a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_olive_CO.paa";
						picture="a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_olive_CO.paa";
					};
					class 2
					{
						name="$STR_a3_texturesources_sand0";
						value="a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_sand_CO.paa";
						picture="a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_sand_CO.paa";
					};
					class 3
					{
						name="$STR_a3_texturesources_black0";
						value="a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_black_CO.paa";
						picture="a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_black_CO.paa";
					};
				};
			};
			class SwitchTexture
			{
				property="SwitchTexture";
				displayName="$STR_expEden_Land_Laptop_Syndiakt_select_F";
				control="Combo";
				expression="_this setObjectTextureGlobal [1, _value]";
				defaultValue="'\A3\missions_f_oldman\Data\img\Screens\MillerNtbScreen01_co.paa'";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="$STR_A3_RSCDISPLAYMAIN_TITLE";
						value="\A3\missions_f_oldman\Data\img\Screens\MillerNtbScreen01_co.paa";
						picture="\A3\missions_f_oldman\Data\img\Screens\MillerNtbScreen01_co.paa";
					};
					class 2
					{
						name="$STR_expEden_Land_Laptop_03_MillerNtbScreen_01_F";
						value="\A3\missions_f_oldman\Data\img\Screens\MillerNtbScreen02_co.paa";
						picture="\A3\missions_f_oldman\Data\img\Screens\MillerNtbScreen02_co.paa";
					};
					class 3
					{
						name="$STR_A3_Globe_CfgVehicles_Land_TripodScreen_01_large_NATO_F_Attributes_values0";
						value="\A3\missions_f_exp\data\Img\lobby\ui_campaign_lobby_background_co.paa";
						picture="\A3\missions_f_exp\data\Img\lobby\ui_campaign_lobby_background_co.paa";
					};
					class 4
					{
						name="$STR_A3_Globe_CfgVehicles_Land_TripodScreen_01_large_NATO_F_Attributes_values1";
						value="\A3\missions_f_exp\data\Img\lobby\ui_campaign_lobby_background2_co.paa";
						picture="\A3\missions_f_exp\data\Img\lobby\ui_campaign_lobby_background2_co.paa";
					};
					class 5
					{
						name="Top Secret";
						value="\A3\missions_f_exp\data\Img\lobby\ui_campaign_lobby_restricted_ca.paa";
						picture="\A3\missions_f_exp\data\Img\lobby\ui_campaign_lobby_restricted_ca.paa";
					};
					class 6
					{
						name="$STR_A3_Globe_CfgVehicles_Land_TripodScreen_01_large_NATO_F_Attributes_values2";
						value="\A3\missions_f_exp\data\Img\exp_m01_monitor_ca.paa";
						picture="\A3\missions_f_exp\data\Img\exp_m01_monitor_ca.paa";
					};
				};
			};
			class Open_Source: Open_Source
			{
			};
			class Open_Action: Open_Action
			{
			};
		};
	};
	class Land_Laptop_03_olive_NATO_random_F: Land_Laptop_03_base_F
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.167;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Laptop_03_olive_NATO_random_F.jpg";
		_generalMacro="Land_Laptop_03_olive_NATO_random_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_Globe_CfgVehicles_Land_Laptop_03_olive_NATO_random_F0";
		hiddenSelectionsTextures[]=
		{
			"a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_olive_CO.paa",
			"\A3\missions_f_oldman\Data\img\Screens\MillerNtbScreen01_co.paa"
		};
		class EventHandlers: EventHandlers
		{
			class Globe_rLaptopRandom
			{
				postInit="(_this # 0) call compile preprocessFileLineNumbers '\A3\Props_F_Globe\Military\Equipment\scripts\randomize.sqf';";
			};
		};
	};
	class Land_Laptop_03_black_NATO_F: Land_Laptop_03_black_F
	{
		editorPreview="";
		_generalMacro="Land_Laptop_03_black_NATO_F";
		scope=1;
		scopeCurator=0;
		displayName="$STR_A3_Globe_CfgVehicles_Land_Laptop_03_black_NATO_F0";
		hiddenSelectionsTextures[]=
		{
			"a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_black_CO.paa",
			"\A3\missions_f_oldman\Data\img\Screens\MillerNtbScreen01_co.paa"
		};
		class Attributes
		{
			class SwitchTexture
			{
				property="SwitchTexture";
				displayName="$STR_expEden_Land_Laptop_Syndiakt_select_F";
				control="Combo";
				expression="_this setObjectTextureGlobal [1, _value]";
				defaultValue="'\A3\missions_f_oldman\Data\img\Screens\MillerNtbScreen01_co.paa'";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="$STR_A3_RSCDISPLAYMAIN_TITLE";
						value="\A3\missions_f_oldman\Data\img\Screens\MillerNtbScreen01_co.paa";
						picture="\A3\missions_f_oldman\Data\img\Screens\MillerNtbScreen01_co.paa";
					};
					class 2
					{
						name="$STR_expEden_Land_Laptop_03_MillerNtbScreen_01_F";
						value="\A3\missions_f_oldman\Data\img\Screens\MillerNtbScreen02_co.paa";
						picture="\A3\missions_f_oldman\Data\img\Screens\MillerNtbScreen02_co.paa";
					};
					class 3
					{
						name="$STR_A3_Globe_CfgVehicles_Land_TripodScreen_01_large_NATO_F_Attributes_values0";
						value="\A3\missions_f_exp\data\Img\lobby\ui_campaign_lobby_background_co.paa";
						picture="\A3\missions_f_exp\data\Img\lobby\ui_campaign_lobby_background_co.paa";
					};
					class 4
					{
						name="$STR_A3_Globe_CfgVehicles_Land_TripodScreen_01_large_NATO_F_Attributes_values1";
						value="\A3\missions_f_exp\data\Img\lobby\ui_campaign_lobby_background2_co.paa";
						picture="\A3\missions_f_exp\data\Img\lobby\ui_campaign_lobby_background2_co.paa";
					};
					class 5
					{
						name="Top Secret";
						value="\A3\missions_f_exp\data\Img\lobby\ui_campaign_lobby_restricted_ca.paa";
						picture="\A3\missions_f_exp\data\Img\lobby\ui_campaign_lobby_restricted_ca.paa";
					};
					class 6
					{
						name="$STR_A3_Globe_CfgVehicles_Land_TripodScreen_01_large_NATO_F_Attributes_values2";
						value="\A3\missions_f_exp\data\Img\exp_m01_monitor_ca.paa";
						picture="\A3\missions_f_exp\data\Img\exp_m01_monitor_ca.paa";
					};
				};
			};
		};
	};
	class Land_Laptop_03_black_NATO_random_F: Land_Laptop_03_black_NATO_F
	{
		editorPreview="";
		_generalMacro="Land_Laptop_03_black_NATO_random_F";
		scope=1;
		scopeCurator=0;
		displayName="$STR_A3_Globe_CfgVehicles_Land_Laptop_03_black_NATO_random_F0";
		class EventHandlers
		{
			postInit="(_this # 0) call compile preprocessFileLineNumbers '\A3\Props_F_Globe\Military\Equipment\scripts\randomize.sqf'";
		};
		class Attributes
		{
		};
	};
	class Land_Laptop_03_sand_NATO_F: Land_Laptop_03_sand_F
	{
		editorPreview="";
		_generalMacro="Land_Laptop_03_sand_NATO_F";
		scope=1;
		scopeCurator=0;
		displayName="$STR_A3_Globe_CfgVehicles_Land_Laptop_03_sand_NATO_F0";
		hiddenSelectionsTextures[]=
		{
			"a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_sand_CO.paa",
			"\A3\missions_f_oldman\Data\img\Screens\MillerNtbScreen01_co.paa"
		};
		class Attributes
		{
			class SwitchTexture
			{
				property="SwitchTexture";
				displayName="$STR_expEden_Land_Laptop_Syndiakt_select_F";
				control="Combo";
				expression="_this setObjectTextureGlobal [1, _value]";
				defaultValue="'\A3\missions_f_oldman\Data\img\Screens\MillerNtbScreen01_co.paa'";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="$STR_A3_RSCDISPLAYMAIN_TITLE";
						value="\A3\missions_f_oldman\Data\img\Screens\MillerNtbScreen01_co.paa";
						picture="\A3\missions_f_oldman\Data\img\Screens\MillerNtbScreen01_co.paa";
					};
					class 2
					{
						name="$STR_expEden_Land_Laptop_03_MillerNtbScreen_01_F";
						value="\A3\missions_f_oldman\Data\img\Screens\MillerNtbScreen02_co.paa";
						picture="\A3\missions_f_oldman\Data\img\Screens\MillerNtbScreen02_co.paa";
					};
					class 3
					{
						name="$STR_A3_Globe_CfgVehicles_Land_TripodScreen_01_large_NATO_F_Attributes_values0";
						value="\A3\missions_f_exp\data\Img\lobby\ui_campaign_lobby_background_co.paa";
						picture="\A3\missions_f_exp\data\Img\lobby\ui_campaign_lobby_background_co.paa";
					};
					class 4
					{
						name="$STR_A3_Globe_CfgVehicles_Land_TripodScreen_01_large_NATO_F_Attributes_values1";
						value="\A3\missions_f_exp\data\Img\lobby\ui_campaign_lobby_background2_co.paa";
						picture="\A3\missions_f_exp\data\Img\lobby\ui_campaign_lobby_background2_co.paa";
					};
					class 5
					{
						name="Top Secret";
						value="\A3\missions_f_exp\data\Img\lobby\ui_campaign_lobby_restricted_ca.paa";
						picture="\A3\missions_f_exp\data\Img\lobby\ui_campaign_lobby_restricted_ca.paa";
					};
					class 6
					{
						name="$STR_A3_Globe_CfgVehicles_Land_TripodScreen_01_large_NATO_F_Attributes_values2";
						value="\A3\missions_f_exp\data\Img\exp_m01_monitor_ca.paa";
						picture="\A3\missions_f_exp\data\Img\exp_m01_monitor_ca.paa";
					};
				};
			};
		};
	};
	class Land_Laptop_03_sand_NATO_random_F: Land_Laptop_03_sand_NATO_F
	{
		editorPreview="";
		_generalMacro="Land_Laptop_03_sand_NATO_random_F";
		scope=1;
		scopeCurator=0;
		displayName="$STR_A3_Globe_CfgVehicles_Land_Laptop_03_sand_NATO_random_F0";
		class EventHandlers
		{
			postInit="(_this # 0) call compile preprocessFileLineNumbers '\A3\Props_F_Globe\Military\Equipment\scripts\randomize.sqf'";
		};
		class Attributes
		{
		};
	};
	class Laptop_03_olive_GSC: Land_Laptop_03_base_F
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.167;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Laptop_03_olive_GSC.jpg";
		_generalMacro="Laptop_03_olive_GSC";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_Laptop_03_olive_GSC";
		hiddenSelectionsTextures[]=
		{
			"\a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_olive_CO.paa",
			"\a3\missions_f_aow\data\img\showcase_future_gcs_active_co.paa"
		};
		class Attributes: Attributes
		{
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
					class 1
					{
						name="$STR_A3_TEXTURESOURCES_OLIVE0";
						value="a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_olive_CO.paa";
						picture="a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_olive_CO.paa";
					};
					class 2
					{
						name="$STR_a3_texturesources_sand0";
						value="a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_sand_CO.paa";
						picture="a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_sand_CO.paa";
					};
					class 3
					{
						name="$STR_a3_texturesources_black0";
						value="a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_black_CO.paa";
						picture="a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_black_CO.paa";
					};
				};
			};
			class SwitchLaptopGSCTexture1
			{
				property="SwitchLaptopGSCTexture1";
				displayName="$STR_A3_expEden_Leaflet_05_announcements_Attributes_SwitchTexture_displayName_F0";
				control="Combo";
				expression="_this setObjectTextureGlobal [1, _value]";
				defaultValue="'\a3\missions_f_aow\data\img\showcase_future_gcs_active_co.paa'";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="$STR_vsync_enabled";
						value="\a3\missions_f_aow\data\img\showcase_future_gcs_active_co.paa";
						picture="\a3\missions_f_aow\data\img\showcase_future_gcs_active_co.paa";
					};
					class 2
					{
						name="$STR_disable_controller";
						value="\a3\missions_f_aow\data\img\showcase_future_gcs_inActive_co.paa";
						picture="\a3\missions_f_aow\data\img\showcase_future_gcs_inActive_co.paa";
					};
				};
			};
			class Open_Source: Open_Source
			{
			};
			class Open_Action: Open_Action
			{
			};
		};
	};
	class Laptop_03_black_GSC: Land_Laptop_03_black_F
	{
		editorPreview="";
		_generalMacro="Laptop_03_black_GSC";
		scope=1;
		scopeCurator=0;
		displayName="$STR_Globe_Laptop_03_black_GSC";
		hiddenSelectionsTextures[]=
		{
			"a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_black_CO.paa",
			"\a3\missions_f_aow\data\img\showcase_future_gcs_active_co.paa"
		};
		class Attributes
		{
			class SwitchLaptopGSCTexture2
			{
				property="SwitchLaptopGSCTexture2";
				displayName="$STR_A3_expEden_Leaflet_05_announcements_Attributes_SwitchTexture_displayName_F0";
				control="Combo";
				expression="_this setObjectTextureGlobal [1, _value]";
				defaultValue="'\a3\missions_f_aow\data\img\showcase_future_gcs_active_co.paa'";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="$STR_vsync_enabled";
						value="\a3\missions_f_aow\data\img\showcase_future_gcs_active_co.paa";
						picture="\a3\missions_f_aow\data\img\showcase_future_gcs_active_co.paa";
					};
					class 2
					{
						name="$STR_disable_controller";
						value="\a3\missions_f_aow\data\img\showcase_future_gcs_inActive_co.paa";
						picture="\a3\missions_f_aow\data\img\showcase_future_gcs_inActive_co.paa";
					};
				};
			};
		};
	};
	class Laptop_03_sand_GSC: Land_Laptop_03_sand_F
	{
		editorPreview="";
		_generalMacro="Laptop_03_sand_GSC";
		scope=1;
		scopeCurator=0;
		displayName="$STR_Globe_Laptop_03_sand_GSC";
		hiddenSelectionsTextures[]=
		{
			"a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_sand_CO.paa",
			"\a3\missions_f_aow\data\img\showcase_future_gcs_active_co"
		};
		class Attributes
		{
			class SwitchLaptopGSCTexture3
			{
				property="SwitchLaptopGSCTexture3";
				displayName="$STR_A3_expEden_Leaflet_05_announcements_Attributes_SwitchTexture_displayName_F0";
				control="Combo";
				expression="_this setObjectTextureGlobal [1, _value]";
				defaultValue="'\a3\missions_f_aow\data\img\showcase_future_gcs_active_co.paa'";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="$STR_vsync_enabled";
						value="\a3\missions_f_aow\data\img\showcase_future_gcs_active_co.paa";
						picture="\a3\missions_f_aow\data\img\showcase_future_gcs_active_co.paa";
					};
					class 2
					{
						name="$STR_disable_controller";
						value="\a3\missions_f_aow\data\img\showcase_future_gcs_inActive_co.paa";
						picture="\a3\missions_f_aow\data\img\showcase_future_gcs_inActive_co.paa";
					};
				};
			};
		};
	};
	class Laptop_03_olive_StaticNoise: Land_Laptop_03_base_F
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.167;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Laptop_03_olive_StaticNoise.jpg";
		_generalMacro="Laptop_03_olive_StaticNoise";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_Laptop_03_olive_StaticNoise";
		hiddenSelectionsTextures[]=
		{
			"\a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_olive_CO.paa",
			"\A3\Missions_F_AoW\Data\Img\showcase_future_static_01_co.paa"
		};
		class Attributes: Attributes
		{
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
					class 1
					{
						name="$STR_A3_TEXTURESOURCES_OLIVE0";
						value="a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_olive_CO.paa";
						picture="a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_olive_CO.paa";
					};
					class 2
					{
						name="$STR_a3_texturesources_sand0";
						value="a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_sand_CO.paa";
						picture="a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_sand_CO.paa";
					};
					class 3
					{
						name="$STR_a3_texturesources_black0";
						value="a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_black_CO.paa";
						picture="a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_black_CO.paa";
					};
				};
			};
			class Static_Noise1
			{
				displayName="$STR_A3_RscStatic_0";
				tooltip="$STR_Globe_Land_Laptop_03_olive_StaticNoise_Attributes_Static_Noise0";
				property="Static_Noise1";
				control="edit";
				defaultValue=20;
				validate="number";
				expression="_this setVariable ['expEden_StaticNoise_distance', _value, isServer]";
			};
			class Open_Source: Open_Source
			{
			};
			class Open_Action: Open_Action
			{
			};
		};
		class EventHandlers: EventHandlers
		{
			class Globe_rLaptopStatic
			{
				postInit="(_this # 0) call expEden_fnc_staticNoiseInit";
			};
		};
	};
	class Laptop_03_black_StaticNoise: Land_Laptop_03_black_F
	{
		editorPreview="";
		_generalMacro="Laptop_03_black_StaticNoise";
		scope=1;
		scopeCurator=0;
		displayName="$STR_Globe_Laptop_03_black_StaticNoise";
		hiddenSelectionsTextures[]=
		{
			"\a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_black_CO.paa",
			"\A3\Missions_F_AoW\Data\Img\showcase_future_static_02_co.paa"
		};
		class Attributes
		{
			class Static_Noise2
			{
				displayName="$STR_A3_RscStatic_0";
				tooltip="$STR_Globe_Land_Laptop_03_olive_StaticNoise_Attributes_Static_Noise0";
				property="Static_Noise2";
				control="edit";
				defaultValue=20;
				validate="number";
				expression="_this setVariable ['expEden_StaticNoise_distance', _value, isServer]";
			};
		};
		class EventHandlers
		{
			postInit="(_this # 0) call expEden_fnc_staticNoiseInit";
		};
	};
	class Laptop_03_sand_StaticNoise: Land_Laptop_03_sand_F
	{
		editorPreview="";
		_generalMacro="Laptop_03_sand_StaticNoise";
		scope=1;
		scopeCurator=0;
		displayName="$STR_Globe_Laptop_03_sand_StaticNoise";
		hiddenSelectionsTextures[]=
		{
			"\a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_sand_CO.paa",
			"\A3\Missions_F_AoW\Data\Img\showcase_future_static_03_co.paa"
		};
		class Attributes
		{
			class Static_Noise3
			{
				displayName="$STR_A3_RscStatic_0";
				tooltip="$STR_Globe_Land_Laptop_03_olive_StaticNoise_Attributes_Static_Noise0";
				property="Static_Noise3";
				control="edit";
				defaultValue=20;
				validate="number";
				expression="_this setVariable ['expEden_StaticNoise_distance', _value, isServer]";
			};
		};
		class EventHandlers
		{
			postInit="(_this # 0) call expEden_fnc_staticNoiseInit";
		};
	};
	class Watch_01: Items_base_F
	{
		author="O&T Expansion Eden";
		mapSize=0.11;
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"watchhour",
					0.2
				},
				
				{
					"watchminute",
					0.44999999
				},
				
				{
					"watchsecond",
					4.9999999e-006
				}
			};
			hide[]={};
			verticalOffset=0.001990001;
			verticalOffsetWorld=0;
			postInit="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Watch_01.jpg";
		_generalMacro="Watch_01";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_cfgWeapons_ItemWatch0";
		model="\a3\ui_f\objects\Watch.p3d";
		icon="iconObject_1x1";
		editorSubcategory="EdSubcat_Camping";
		vehicleClass="Tents";
		class AnimationSources
		{
			class Threat_Level_Source
			{
				source="user";
				postInitPhase=0.0049999999;
				animPeriod=1;
			};
		};
	};
	class Land_IPPhone_01_base_F: Items_base_F
	{
		class Attributes
		{
			class IPPhoneCall
			{
				displayName="$STR_A3_OM_Common_definitions.incphone_36";
				tooltip="$STR_A3_Systems_commonDescription.incCfgNotifications_OMIncomingCall0";
				property="IPPhoneCall";
				control="Checkbox";
				expression="if (_value) then {_this setVariable ['expEden_IPPhoneCall_enable', true, isServer]}";
				defaultValue="false";
			};
		};
		class EventHandlers
		{
			class Globe_IPPhoneCall
			{
				postInit="(_this # 0) spawn expEden_fnc_IPPhoneCall";
			};
		};
	};
	class MortarShell_01_base: Items_base_F
	{
		icon="iconObject_1x2";
		editorSubcategory="EdSubcat_Military";
	};
	class MortarShell_01_HE: MortarShell_01_base
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.121;
			verticalOffsetWorld=0;
			postInit="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\MortarShell_01_HE.jpg";
		_generalMacro="MortarShell_01_HE";
		scope=2;
		scopeCurator=2;
		model="\A3\Weapons_F\Ammo\Shell.p3d";
		displayName="$STR_A3_CfgMagazines_8rnd_82mm_mo_shells0";
	};
	class MortarShell_01_smoke: MortarShell_01_base
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.121;
			verticalOffsetWorld=0;
			postInit="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\MortarShell_01_smoke.jpg";
		_generalMacro="MortarShell_01_smoke";
		scope=2;
		scopeCurator=2;
		model="\A3\Weapons_F\Ammo\Shell_smoke.p3d";
		displayName="$STR_A3_CfgMagazines_8rnd_82mm_mo_smoke_white0";
	};
	class CombatBoot_base: Items_base_F
	{
		author="O&T Expansion Eden";
		mapSize=0.099659979;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.04900001;
			verticalOffsetWorld=0;
			init="''";
		};
		icon="iconObject_1x1";
		editorCategory="EdCat_Things";
		editorSubcategory="EdSubcat_Military";
		model="a3\Props_F_Decade\Military\Decorative\BattlefieldCross_01_F.p3d";
		class AnimationSources
		{
			class Hide_Sandbags
			{
				source="user";
				initPhase=1;
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
			"Camo_1"
		};
		class Attributes
		{
		};
		class UserActions
		{
		};
	};
	class CombatBoot_NATO: CombatBoot_base
	{
		class AnimationSources: AnimationSources
		{
			class Hide_Base_NATO
			{
				source="user";
				initPhase=0;
				animPeriod=0.5;
			};
		};
		hiddenSelectionsTextures[]=
		{
			"a3\characters_f\blufor\data\clothing1_co.paa"
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\CombatBoot_NATO.jpg";
		_generalMacro="CombatBoot_NATO";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_CombatBoot_NATO0";
	};
	class CombatBoot_NATO_wdl: CombatBoot_NATO
	{
		class AnimationSources: AnimationSources
		{
		};
		hiddenSelectionsTextures[]=
		{
			"a3\Characters_F_Enoch\Uniforms\Data\clothing_mcam_wdl_co.paa"
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\CombatBoot_NATO_wdl.jpg";
		_generalMacro="CombatBoot_NATO_wdl";
		displayName="$STR_Globe_CfgVehicles_CombatBoot_NATO_wdl0";
	};
	class CombatBoot_CSAT: CombatBoot_base
	{
		class AnimationSources: AnimationSources
		{
			class Hide_Base_CSAT
			{
				source="user";
				initPhase=0;
				animPeriod=0.5;
			};
		};
		hiddenSelectionsTextures[]=
		{
			"a3\characters_f\opfor\data\clothing_co.paa"
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\CombatBoot_CSAT.jpg";
		_generalMacro="CombatBoot_CSAT";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_CombatBoot_CSAT0";
	};
	class CombatBoot_AAF: CombatBoot_base
	{
		class AnimationSources: AnimationSources
		{
			class Hide_Base_AAF
			{
				source="user";
				initPhase=0;
				animPeriod=0.5;
			};
		};
		hiddenSelectionsTextures[]=
		{
			"a3\characters_f_beta\indep\data\ia_soldier_01_clothing_co.paa"
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\CombatBoot_AAF.jpg";
		_generalMacro="CombatBoot_AAF";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_CombatBoot_AAF0";
	};
	class CombatBoot_LDF: CombatBoot_base
	{
		class AnimationSources: AnimationSources
		{
			class Hide_Base_LDF
			{
				source="user";
				initPhase=0;
				animPeriod=0.5;
			};
		};
		hiddenSelectionsTextures[]=
		{
			"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_pants_co.paa"
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\CombatBoot_LDF.jpg";
		_generalMacro="CombatBoot_LDF";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_CombatBoot_LDF0";
	};
	class CombatBoot_random: CombatBoot_base
	{
		class AnimationSources: AnimationSources
		{
		};
		hiddenSelectionsTextures[]=
		{
			"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_pants_co.paa"
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\CombatBoot_random.jpg";
		_generalMacro="CombatBoot_random";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_CombatBoot_random0";
		class EventHandlers
		{
			init="(_this # 0) call compile preprocessFileLineNumbers '\A3\Props_F_Globe\Military\Equipment\scripts\randomizeCombatBoot.sqf';";
		};
	};
	class Land_NVGogglesOld: Items_base_F
	{
		author="O&T Expansion Eden";
		mapSize=0.090000018;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.070000008;
			verticalOffsetWorld=0;
			postInit="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_NVGogglesOld.jpg";
		_generalMacro="Land_NVGogglesOld";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_NVGogglesOld0";
		model="\a3\weapons_f\binocular\nvg_head_c.p3d";
		icon="iconObject_1x1";
		simulation="thing";
		editorCategory="EdCat_Things";
		editorSubcategory="EdSubcat_Military";
		vehicleClass="Small_items";
		destrType="DestructNo";
		reversed=1;
	};
	class ExternalFuelDropTank_01_empty: Items_base_F
	{
		author="O&T Expansion Eden";
		mapSize=0.44000009;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.29300001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\ExternalFuelDropTank_01.jpg";
		_generalMacro="ExternalFuelDropTank_01_empty";
		scope=1;
		scopeCurator=0;
		displayName="$STR_Globe_CfgVehicles_ExternalFuelDropTank_01_empty0";
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_Fuel.p3d";
		icon="iconObject_3x1";
		editorCategory="EdCat_Things";
		editorSubcategory="EdSubcat_Airports";
		vehicleClass="Structures_Military";
		destrType="DestructNo";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\air_f_beta\heli_transport_01\data\heli_transport_01_ext01_add_co.paa"
		};
	};
	class Land_FuelTank_UH80_G_empty: ExternalFuelDropTank_01_empty
	{
		scope=2;
		scopeCurator=2;
		_generalMacro="Land_FuelTank_UH80_G_empty";
		class Attributes
		{
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
						name="$STR_A3_TEXTURESOURCES_BLU0";
						value="\a3\air_f_beta\heli_transport_01\data\heli_transport_01_ext01_add_co.paa";
						picture="\a3\air_f_beta\heli_transport_01\data\heli_transport_01_ext01_add_co.paa";
					};
					class 1
					{
						name="$STR_A3_TEXTURESOURCES_BLU0";
						value="\A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_ext01_add_BLUFOR_CO.paa";
						picture="\A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_ext01_add_BLUFOR_CO.paa";
					};
					class 2
					{
						name="$STR_A3_TEXTURESOURCES_JUNGLE0";
						value="\A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_ext01_add_tropic_CO.paa";
						picture="\A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_ext01_add_tropic_CO.paa";
					};
					class 3
					{
						name="$STR_A3_TEXTURESOURCES_SAND0";
						value="\A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_ext01_add_sand_CO.paa";
						picture="\A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_ext01_add_sand_CO.paa";
					};
				};
			};
		};
	};
	class Land_FuelTank_UH80_F: ThingX
	{
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.29300001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\ExternalFuelDropTank_01.jpg";
		scope=1;
		scopeCurator=0;
		destrType="DestructBuilding";
		icon="iconObject_3x1";
		editorCategory="EdCat_Things";
		editorSubcategory="EdSubcat_Airports";
		vehicleClass="Structures_Military";
		class DestructionEffects
		{
			class Light1
			{
				simulation="light";
				type="ObjectDestructionLight";
				position="destructionEffect1";
				intensity=0.001;
				interval=1;
				lifeTime=3;
				enabled="distToWater";
			};
			class Sound
			{
				simulation="sound";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=1;
				type="Fire";
			};
			class Fire1
			{
				simulation="particles";
				type="ObjectDestructionFire1Small";
				position="destructionEffect1";
				intensity=0.12;
				interval=1;
				lifeTime=3;
			};
			class Refract1
			{
				simulation="particles";
				type="ObjectDestructionRefractSmall";
				position="destructionEffect1";
				intensity=0.1;
				interval=1;
				lifeTime=1.5;
			};
			class Smoke1
			{
				simulation="particles";
				type="ObjectDestructionSmokeSmall";
				position="destructionEffect1";
				intensity=0.1;
				interval=1;
				lifeTime=1.75;
			};
			class Sparks1
			{
				simulation="particles";
				type="ObjectDestructionSparks";
				position="destructionEffect1";
				intensity=0.2;
				interval=1;
				lifeTime=0;
			};
			class FireSparks1
			{
				simulation="particles";
				type="FireSparks";
				position="destructionEffect2";
				intensity=0.69;
				interval=1;
				lifeTime=1.4;
			};
			class Fire2
			{
				simulation="particles";
				type="ObjectDestructionFire2Small";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=1.5;
			};
			class Smoke1_2
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2Small";
				position="destructionEffect2";
				intensity=0.1;
				interval=1;
				lifeTime=1.75;
			};
			class Smoke2
			{
				simulation="particles";
				type="ObjectDestructionSmoke2";
				position="destructionEffect2";
				intensity=0.5;
				interval=1;
				lifeTime=1.6;
			};
		};
	};
	class ExternalFuelDropTank_01: Land_FuelTank_UH80_F
	{
		scope=1;
		scopeCurator=0;
	};
	class Land_FuelTank_UH80_G: ExternalFuelDropTank_01
	{
		scope=2;
		scopeCurator=2;
		class Attributes
		{
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
						name="$STR_A3_TEXTURESOURCES_BLU0";
						value="\a3\air_f_beta\heli_transport_01\data\heli_transport_01_ext01_add_co.paa";
						picture="\a3\air_f_beta\heli_transport_01\data\heli_transport_01_ext01_add_co.paa";
					};
					class 1
					{
						name="$STR_A3_TEXTURESOURCES_BLU0";
						value="\A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_ext01_add_BLUFOR_CO.paa";
						picture="\A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_ext01_add_BLUFOR_CO.paa";
					};
					class 2
					{
						name="$STR_A3_TEXTURESOURCES_JUNGLE0";
						value="\A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_ext01_add_tropic_CO.paa";
						picture="\A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_ext01_add_tropic_CO.paa";
					};
					class 3
					{
						name="$STR_A3_TEXTURESOURCES_SAND0";
						value="\A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_ext01_add_sand_CO.paa";
						picture="\A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_ext01_add_sand_CO.paa";
					};
				};
			};
		};
	};
	class Weapon_LMG_03_disassembled: Items_base_F
	{
		author="O&T Expansion Eden";
		mapSize=0.52999997;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.13500001;
			verticalOffsetWorld=0;
			postInit="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Weapon_LMG_03_disassembled.jpg";
		_generalMacro="Weapon_LMG_03_disassembled";
		scope=1;
		scopeCurator=0;
		displayName="$STR_Globe_CfgVehicles_Weapon_LMG_03_disassembled0";
		model="A3\Weapons_F_Exp\Machineguns\LMG_03\LMG_03_F";
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2",
			"Camo_3"
		};
		hiddenSelectionsTextures[]=
		{
			"A3\Weapons_F_Exp\Machineguns\LMG_03\Data\LMG_03_f_body_co.paa",
			"#(argb,8,8,3)color(0,0,0,0)",
			"#(argb,8,8,3)color(0,0,0,0)"
		};
		icon="iconObject_1x2";
		editorCategory="EdCat_Things";
		editorSubcategory="EdSubcat_Military";
		vehicleClass="Structures_Military";
		destrType="DestructNo";
		class Attributes
		{
			class BrlMag
			{
				property="BrlMag";
				displayName="$STR_A3_VR_WH3_stage2";
				control="Combo";
				expression="_this setObjectTextureGlobal [1, _value]";
				defaultValue="''";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="$STR_Globe_CfgVehicles_Weapon_LMG_03_disassembled1";
						value="\A3\Weapons_F_Exp\Machineguns\LMG_03\Data\LMG_03_f_acc_co.paa";
						picture="\A3\Weapons_F_Exp\Machineguns\LMG_03\Data\LMG_03_f_acc_co.paa";
					};
					class 2
					{
						name="$STR_Globe_CfgVehicles_Weapon_LMG_03_disassembled2";
						value="";
						picture="";
					};
				};
			};
			class Bpd
			{
				property="Bpd";
				displayName="$STR_A3_RscDisplayArsenal_tab_itemBipod";
				control="Combo";
				expression="_this setObjectTextureGlobal [2, _value]";
				defaultValue="''";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="$STR_A3_None";
						value="";
						picture="";
					};
					class 2
					{
						name="$STR_Globe_CfgVehicles_Weapon_LMG_03_disassembled3";
						value="\A3\weapons_f\machineguns\m200\data\grip_co.paa";
						picture="\A3\weapons_f\machineguns\m200\data\grip_co.paa";
					};
					class 3
					{
						name="$STR_Globe_CfgVehicles_Weapon_LMG_03_disassembled4";
						value="\A3\Weapons_F_Enoch\Machineguns\M200\Data\grip_black_co.paa";
						picture="\A3\Weapons_F_Enoch\Machineguns\M200\Data\grip_black_co.paa";
					};
				};
			};
		};
	};
	class Land_SolarPanel_04_base_F: Items_base_F
	{
		class Attributes
		{
			class Panels_Yaw_random
			{
				displayName="$STR_Globe_CfgVehicles_Land_SolarPanel_04_base_F_Attributes_Panels_Yaw_random0";
				property="Panels_Yaw_random";
				control="Checkbox";
				defaultValue="false";
				typeName="BOOL";
				wikiType="[[Bool]]";
				expression="if (_value isNotEqualTo false) then {_this animateSource ['Panels_Yaw',(random [-180,0,180]),true]}";
			};
			class Panel_1_Pitch_random: Panels_Yaw_random
			{
				displayName="$STR_Globe_CfgVehicles_Land_SolarPanel_04_base_F_Attributes_Panel_1_Pitch_random0";
				property="Panel_1_Pitch_random";
				expression="if (_value isNotEqualTo false) then {_this animateSource ['Panel_1_Pitch',(random [-45,0,45]),true]}";
			};
			class Panel_2_Pitch_random: Panel_1_Pitch_random
			{
				displayName="$STR_Globe_CfgVehicles_Land_SolarPanel_04_base_F_Attributes_Panel_2_Pitch_random0";
				property="Panel_2_Pitch_random";
				expression="if (_value isNotEqualTo false) then {_this animateSource ['Panel_2_Pitch',(random [-45,0,45]),true]}";
			};
		};
	};
	class Laptop_03_G_DiaryImagesAltis: Land_Laptop_03_base_F
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.167;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Laptop_03_G_DiaryImagesAltis.jpg";
		_generalMacro="Laptop_03_G_DiaryImagesAltis";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Laptop_03_G_DiaryImagesAltis0";
		hiddenSelectionsTextures[]=
		{
			"\a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_olive_CO.paa",
			"A3\ui_f_curator\Data\CfgDiaryImages\Altis\Abdera_ca.paa"
		};
		class Attributes: Attributes
		{
			delete ObjectTextureCustom1;
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
					class 1
					{
						name="$STR_A3_TEXTURESOURCES_OLIVE0";
						value="a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_olive_CO.paa";
						picture="a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_olive_CO.paa";
					};
					class 2
					{
						name="$STR_a3_texturesources_sand0";
						value="a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_sand_CO.paa";
						picture="a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_sand_CO.paa";
					};
					class 3
					{
						name="$STR_a3_texturesources_black0";
						value="a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_black_CO.paa";
						picture="a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_black_CO.paa";
					};
				};
			};
			class SwitchTextureScreen
			{
				property="SwitchTextureScreen";
				displayName="$STR_NAME_CITY";
				control="Combo";
				expression="_this setObjectTextureGlobal [1, _value]";
				defaultValue="(getObjectTextures _this) param [1,'',['']]";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="$STR_A3_abdera0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Abdera_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Abdera_ca.paa";
					};
					class 2
					{
						name="$STR_A3_Aggelochori0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Aggelochori_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Aggelochori_ca.paa";
					};
					class 3
					{
						name="$STR_A3_AgiaTriada0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\AgiaTriada_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\AgiaTriada_ca.paa";
					};
					class 4
					{
						name="$STR_A3_AgiosDionysios0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\AgiosDionysios_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\AgiosDionysios_ca.paa";
					};
					class 5
					{
						name="$STR_A3_AgiosKonstantinos0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\AgiosKonstantinos_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\AgiosKonstantinos_ca.paa";
					};
					class 6
					{
						name="$STR_A3_AgiosPetros0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\AgiosPetros_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\AgiosPetros_ca.paa";
					};
					class 7
					{
						name="$STR_A3_Alikampos0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Alikampos_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Alikampos_ca.paa";
					};
					class 8
					{
						name="$STR_A3_Anthrakia0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Anthrakia_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Anthrakia_ca.paa";
					};
					class 9
					{
						name="$STR_A3_Athira0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Athira_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Athira_ca.paa";
					};
					class 10
					{
						name="$STR_A3_Chalkeia0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Chalkeia_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Chalkeia_ca.paa";
					};
					class 11
					{
						name="$STR_A3_Charkia0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Charkia_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Charkia_ca.paa";
					};
					class 12
					{
						name="$STR_A3_Delfinaki0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Delfinaki_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Delfinaki_ca.paa";
					};
					class 13
					{
						name="$STR_A3_Dorida0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Dorida_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Dorida_ca.paa";
					};
					class 14
					{
						name="$STR_A3_Ekali0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Ekali_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Ekali_ca.paa";
					};
					class 15
					{
						name="$STR_A3_Feres0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Feres_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Feres_ca.paa";
					};
					class 16
					{
						name="$STR_A3_Frini0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Frini_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Frini_ca.paa";
					};
					class 17
					{
						name="$STR_A3_Gravia0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Gravia_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Gravia_ca.paa";
					};
					class 18
					{
						name="$STR_A3_Ifestiona0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Ifestiona_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Ifestiona_ca.paa";
					};
					class 19
					{
						name="$STR_A3_Ioannina0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Ioannina_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Ioannina_ca.paa";
					};
					class 20
					{
						name="$STR_A3_AgiosPetros0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\AgiosPetros_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\AgiosPetros_ca.paa";
					};
					class 21
					{
						name="$STR_A3_Kalithea0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Kalithea_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Kalithea_ca.paa";
					};
					class 22
					{
						name="$STR_A3_Kalochori0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Kalochori_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Kalochori_ca.paa";
					};
					class 23
					{
						name="$STR_A3_Katalaki0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Katalaki_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Katalaki_ca.paa";
					};
					class 24
					{
						name="$STR_A3_Kavala0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Kavala_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Kavala_ca.paa";
					};
					class 25
					{
						name="$STR_A3_Kore0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Kore_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Kore_ca.paa";
					};
					class 26
					{
						name="$STR_A3_Koroni0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Koroni_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Koroni_ca.paa";
					};
					class 27
					{
						name="$STR_A3_Lakka0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Lakka_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Lakka_ca.paa";
					};
					class 28
					{
						name="$STR_A3_Molos0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Molos_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Molos_ca.paa";
					};
					class 29
					{
						name="$STR_A3_Negades0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Negades_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Negades_ca.paa";
					};
					class 30
					{
						name="$STR_A3_Neochori0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Neochori_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Neochori_ca.paa";
					};
					class 31
					{
						name="$STR_A3_Neri0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Neri_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Neri_ca.paa";
					};
					class 32
					{
						name="$STR_A3_Nifi0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Nifi_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Nifi_ca.paa";
					};
					class 33
					{
						name="$STR_A3_Oreokastro0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Oreokastro_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Oreokastro_ca.paa";
					};
					class 34
					{
						name="$STR_A3_Orino0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Orino_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Orino_ca.paa";
					};
					class 35
					{
						name="$STR_A3_Panagia0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Panagia_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Panagia_ca.paa";
					};
					class 36
					{
						name="$STR_A3_Panochori0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Panochori_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Panochori_ca.paa";
					};
					class 37
					{
						name="$STR_A3_Paros0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Paros_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Paros_ca.paa";
					};
					class 38
					{
						name="$STR_A3_Poliakko0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Poliakko_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Poliakko_ca.paa";
					};
					class 39
					{
						name="$STR_A3_Pyrgos0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Pyrgos_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Pyrgos_ca.paa";
					};
					class 40
					{
						name="$STR_A3_Rodopoli0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Rodopoli_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Rodopoli_ca.paa";
					};
					class 41
					{
						name="$STR_A3_Selakano0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Selakano_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Selakano_ca.paa";
					};
					class 42
					{
						name="$STR_A3_Sofia0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Sofia_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Sofia_ca.paa";
					};
					class 43
					{
						name="$STR_A3_Stavros0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Stavros_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Stavros_ca.paa";
					};
					class 44
					{
						name="$STR_A3_Syrta0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Syrta_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Syrta_ca.paa";
					};
					class 45
					{
						name="$STR_A3_Telos0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Telos_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Telos_ca.paa";
					};
					class 46
					{
						name="$STR_A3_Therisa0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Therisa_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Therisa_ca.paa";
					};
					class 47
					{
						name="$STR_A3_topolia0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Topolia_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Topolia_ca.paa";
					};
					class 48
					{
						name="$STR_A3_zaros0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Zaros_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Zaros_ca.paa";
					};
				};
			};
			class Open_Source: Open_Source
			{
			};
			class Open_Action: Open_Action
			{
			};
		};
	};
	class Laptop_03_G_DiaryImagesAltis_random: Land_Laptop_03_base_F
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.167;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Laptop_03_G_DiaryImagesAltis.jpg";
		_generalMacro="Laptop_03_G_DiaryImagesAltis_random";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Laptop_03_G_DiaryImagesAltis_random0";
		hiddenSelectionsTextures[]=
		{
			"\a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_olive_CO.paa",
			"A3\ui_f_curator\Data\CfgDiaryImages\Altis\Abdera_ca.paa"
		};
		class Attributes: Attributes
		{
			class ObjectTextureCustom1: ObjectTextureCustom1
			{
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
					class 1
					{
						name="$STR_A3_TEXTURESOURCES_OLIVE0";
						value="a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_olive_CO.paa";
						picture="a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_olive_CO.paa";
					};
					class 2
					{
						name="$STR_a3_texturesources_sand0";
						value="a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_sand_CO.paa";
						picture="a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_sand_CO.paa";
					};
					class 3
					{
						name="$STR_a3_texturesources_black0";
						value="a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_black_CO.paa";
						picture="a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_black_CO.paa";
					};
				};
			};
			class Open_Source: Open_Source
			{
			};
			class Open_Action: Open_Action
			{
			};
		};
		class EventHandlers
		{
			class Globe_CfgDiaryImages
			{
				postInit="(_this # 0) call compile preprocessFileLineNumbers '\A3\Props_F_Globe\Military\Equipment\scripts\randomizeDiaryImagesLaptop.sqf'";
			};
		};
	};
	class Laptop_03_G_DiaryImagesStratis: Land_Laptop_03_base_F
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.167;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Laptop_03_G_DiaryImagesAltis.jpg";
		_generalMacro="Laptop_03_G_DiaryImagesStratis";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Laptop_03_G_DiaryImagesStratis0";
		hiddenSelectionsTextures[]=
		{
			"\a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_olive_CO.paa",
			"A3\ui_f_curator\Data\CfgDiaryImages\Stratis\AgiaMarina_ca.paa"
		};
		class Attributes: Attributes
		{
			delete ObjectTextureCustom1;
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
					class 1
					{
						name="$STR_A3_TEXTURESOURCES_OLIVE0";
						value="a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_olive_CO.paa";
						picture="a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_olive_CO.paa";
					};
					class 2
					{
						name="$STR_a3_texturesources_sand0";
						value="a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_sand_CO.paa";
						picture="a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_sand_CO.paa";
					};
					class 3
					{
						name="$STR_a3_texturesources_black0";
						value="a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_black_CO.paa";
						picture="a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_black_CO.paa";
					};
				};
			};
			class SwitchTextureScreen
			{
				property="SwitchTextureScreen";
				displayName="$STR_NAME_CITY";
				control="Combo";
				expression="_this setObjectTextureGlobal [1, _value]";
				defaultValue="(getObjectTextures _this) param [1,'',['']]";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="$STR_A3_agia_marina0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Stratis\AgiaMarina_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Stratis\AgiaMarina_ca.paa";
					};
					class 2
					{
						name="$STR_A3_airstation0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Stratis\AirStationMike26_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Stratis\AirStationMike26_ca.paa";
					};
					class 3
					{
						name="$STR_A3_CampMaxwell0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Stratis\CampMaxwell_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Stratis\CampMaxwell_ca.paa";
					};
					class 4
					{
						name="$STR_A3_CampRogain0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Stratis\CampRogain_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Stratis\CampRogain_ca.paa";
					};
					class 5
					{
						name="$STR_A3_camptempest10";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Stratis\CampTempest_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Stratis\CampTempest_ca.paa";
					};
					class 6
					{
						name="$STR_A3_Girna0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Stratis\Girna_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Stratis\Girna_ca.paa";
					};
					class 7
					{
						name="$STR_A3_sniperschool0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Stratis\KaminoFiringRange_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Stratis\KaminoFiringRange_ca.paa";
					};
					class 8
					{
						name="$STR_A3_natobase10";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Stratis\stratisAirBase_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Stratis\stratisAirBase_ca.paa";
					};
				};
			};
			class Open_Source: Open_Source
			{
			};
			class Open_Action: Open_Action
			{
			};
		};
	};
	class Laptop_03_G_DiaryImagesStratis_random: Land_Laptop_03_base_F
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.167;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Laptop_03_G_DiaryImagesAltis.jpg";
		_generalMacro="Laptop_03_G_DiaryImagesStratis_random";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Laptop_03_G_DiaryImagesStratis_random0";
		hiddenSelectionsTextures[]=
		{
			"\a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_olive_CO.paa",
			"A3\ui_f_curator\Data\CfgDiaryImages\Stratis\AgiaMarina_ca.paa"
		};
		class Attributes: Attributes
		{
			class ObjectTextureCustom1: ObjectTextureCustom1
			{
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
					class 1
					{
						name="$STR_A3_TEXTURESOURCES_OLIVE0";
						value="a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_olive_CO.paa";
						picture="a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_olive_CO.paa";
					};
					class 2
					{
						name="$STR_a3_texturesources_sand0";
						value="a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_sand_CO.paa";
						picture="a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_sand_CO.paa";
					};
					class 3
					{
						name="$STR_a3_texturesources_black0";
						value="a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_black_CO.paa";
						picture="a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_black_CO.paa";
					};
				};
			};
			class Open_Source: Open_Source
			{
			};
			class Open_Action: Open_Action
			{
			};
		};
		class EventHandlers
		{
			class Globe_CfgDiaryImages
			{
				postInit="(_this # 0) call compile preprocessFileLineNumbers '\A3\Props_F_Globe\Military\Equipment\scripts\randomizeDiaryImagesLaptop.sqf'";
			};
		};
	};
	class Laptop_03_G_DiaryImagesAltisStratis_random: Land_Laptop_03_base_F
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.167;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Laptop_03_G_DiaryImagesAltis.jpg";
		_generalMacro="Laptop_03_G_DiaryImagesAltisStratis_random";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Laptop_03_G_DiaryImagesAltisStratis_random0";
		hiddenSelectionsTextures[]=
		{
			"\a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_olive_CO.paa",
			"A3\ui_f_curator\Data\CfgDiaryImages\Stratis\AgiaMarina_ca.paa"
		};
		class Attributes: Attributes
		{
			class ObjectTextureCustom1: ObjectTextureCustom1
			{
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
					class 1
					{
						name="$STR_A3_TEXTURESOURCES_OLIVE0";
						value="a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_olive_CO.paa";
						picture="a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_olive_CO.paa";
					};
					class 2
					{
						name="$STR_a3_texturesources_sand0";
						value="a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_sand_CO.paa";
						picture="a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_sand_CO.paa";
					};
					class 3
					{
						name="$STR_a3_texturesources_black0";
						value="a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_black_CO.paa";
						picture="a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_black_CO.paa";
					};
				};
			};
			class Open_Source: Open_Source
			{
			};
			class Open_Action: Open_Action
			{
			};
		};
		class EventHandlers
		{
			class Globe_CfgDiaryImages
			{
				postInit="(_this # 0) call compile preprocessFileLineNumbers '\A3\Props_F_Globe\Military\Equipment\scripts\randomizeDiaryImagesLaptop.sqf'";
			};
		};
	};
	class Tablet_02_G_DiaryImagesAltis: Items_base_F
	{
		author="O&T Expansion Eden";
		mapSize=0.30000001;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.034000002;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Tablet_02_G_DiaryImagesAltis.jpg";
		_generalMacro="Tablet_02_G_DiaryImagesAltis";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Tablet_02_G_DiaryImagesAltis0";
		model="\A3\Props_F_Exp_A\Military\Equipment\Tablet_02_F.p3d";
		icon="iconObject_5x4";
		editorCategory="EdCat_Things";
		editorSubcategory="EdSubcat_Electronics";
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2"
		};
		hiddenSelectionsTextures[]=
		{
			"A3\ui_f_curator\Data\CfgDiaryImages\Altis\Abdera_ca.paa",
			"a3\props_f_exp_a\military\equipment\data\ruggedtablet_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Data_F\Lights\Lamp_lcd2.rvmat",
			"\a3\props_f_exp_a\military\equipment\data\ruggedtablet.rvmat"
		};
		class Attributes
		{
			delete ObjectTextureCustom0;
			class SwitchTextureScreen
			{
				property="SwitchTextureScreen";
				displayName="$STR_NAME_CITY";
				control="Combo";
				expression="_this setObjectTextureGlobal [0, _value]";
				defaultValue="(getObjectTextures _this) param [0,'',['']]";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="$STR_A3_abdera0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Abdera_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Abdera_ca.paa";
					};
					class 2
					{
						name="$STR_A3_Aggelochori0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Aggelochori_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Aggelochori_ca.paa";
					};
					class 3
					{
						name="$STR_A3_AgiaTriada0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\AgiaTriada_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\AgiaTriada_ca.paa";
					};
					class 4
					{
						name="$STR_A3_AgiosDionysios0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\AgiosDionysios_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\AgiosDionysios_ca.paa";
					};
					class 5
					{
						name="$STR_A3_AgiosKonstantinos0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\AgiosKonstantinos_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\AgiosKonstantinos_ca.paa";
					};
					class 6
					{
						name="$STR_A3_AgiosPetros0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\AgiosPetros_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\AgiosPetros_ca.paa";
					};
					class 7
					{
						name="$STR_A3_Alikampos0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Alikampos_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Alikampos_ca.paa";
					};
					class 8
					{
						name="$STR_A3_Anthrakia0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Anthrakia_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Anthrakia_ca.paa";
					};
					class 9
					{
						name="$STR_A3_Athira0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Athira_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Athira_ca.paa";
					};
					class 10
					{
						name="$STR_A3_Chalkeia0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Chalkeia_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Chalkeia_ca.paa";
					};
					class 11
					{
						name="$STR_A3_Charkia0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Charkia_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Charkia_ca.paa";
					};
					class 12
					{
						name="$STR_A3_Delfinaki0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Delfinaki_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Delfinaki_ca.paa";
					};
					class 13
					{
						name="$STR_A3_Dorida0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Dorida_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Dorida_ca.paa";
					};
					class 14
					{
						name="$STR_A3_Ekali0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Ekali_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Ekali_ca.paa";
					};
					class 15
					{
						name="$STR_A3_Feres0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Feres_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Feres_ca.paa";
					};
					class 16
					{
						name="$STR_A3_Frini0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Frini_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Frini_ca.paa";
					};
					class 17
					{
						name="$STR_A3_Gravia0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Gravia_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Gravia_ca.paa";
					};
					class 18
					{
						name="$STR_A3_Ifestiona0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Ifestiona_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Ifestiona_ca.paa";
					};
					class 19
					{
						name="$STR_A3_Ioannina0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Ioannina_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Ioannina_ca.paa";
					};
					class 20
					{
						name="$STR_A3_AgiosPetros0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\AgiosPetros_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\AgiosPetros_ca.paa";
					};
					class 21
					{
						name="$STR_A3_Kalithea0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Kalithea_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Kalithea_ca.paa";
					};
					class 22
					{
						name="$STR_A3_Kalochori0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Kalochori_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Kalochori_ca.paa";
					};
					class 23
					{
						name="$STR_A3_Katalaki0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Katalaki_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Katalaki_ca.paa";
					};
					class 24
					{
						name="$STR_A3_Kavala0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Kavala_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Kavala_ca.paa";
					};
					class 25
					{
						name="$STR_A3_Kore0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Kore_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Kore_ca.paa";
					};
					class 26
					{
						name="$STR_A3_Koroni0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Koroni_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Koroni_ca.paa";
					};
					class 27
					{
						name="$STR_A3_Lakka0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Lakka_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Lakka_ca.paa";
					};
					class 28
					{
						name="$STR_A3_Molos0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Molos_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Molos_ca.paa";
					};
					class 29
					{
						name="$STR_A3_Negades0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Negades_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Negades_ca.paa";
					};
					class 30
					{
						name="$STR_A3_Neochori0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Neochori_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Neochori_ca.paa";
					};
					class 31
					{
						name="$STR_A3_Neri0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Neri_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Neri_ca.paa";
					};
					class 32
					{
						name="$STR_A3_Nifi0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Nifi_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Nifi_ca.paa";
					};
					class 33
					{
						name="$STR_A3_Oreokastro0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Oreokastro_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Oreokastro_ca.paa";
					};
					class 34
					{
						name="$STR_A3_Orino0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Orino_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Orino_ca.paa";
					};
					class 35
					{
						name="$STR_A3_Panagia0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Panagia_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Panagia_ca.paa";
					};
					class 36
					{
						name="$STR_A3_Panochori0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Panochori_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Panochori_ca.paa";
					};
					class 37
					{
						name="$STR_A3_Paros0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Paros_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Paros_ca.paa";
					};
					class 38
					{
						name="$STR_A3_Poliakko0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Poliakko_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Poliakko_ca.paa";
					};
					class 39
					{
						name="$STR_A3_Pyrgos0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Pyrgos_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Pyrgos_ca.paa";
					};
					class 40
					{
						name="$STR_A3_Rodopoli0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Rodopoli_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Rodopoli_ca.paa";
					};
					class 41
					{
						name="$STR_A3_Selakano0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Selakano_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Selakano_ca.paa";
					};
					class 42
					{
						name="$STR_A3_Sofia0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Sofia_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Sofia_ca.paa";
					};
					class 43
					{
						name="$STR_A3_Stavros0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Stavros_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Stavros_ca.paa";
					};
					class 44
					{
						name="$STR_A3_Syrta0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Syrta_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Syrta_ca.paa";
					};
					class 45
					{
						name="$STR_A3_Telos0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Telos_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Telos_ca.paa";
					};
					class 46
					{
						name="$STR_A3_Therisa0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Therisa_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Therisa_ca.paa";
					};
					class 47
					{
						name="$STR_A3_topolia0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Topolia_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Topolia_ca.paa";
					};
					class 48
					{
						name="$STR_A3_zaros0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Zaros_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Zaros_ca.paa";
					};
				};
			};
			class SwitchTextureHull
			{
				property="SwitchTextureHull";
				displayName="$STR_Globe_hull0";
				control="Combo";
				expression="_this setObjectTextureGlobal [1, _value]";
				defaultValue="(getObjectTextures _this) param [1,'',['']]";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="$STR_A3_TEXTURESOURCES_OLIVE0";
						value="a3\props_f_exp_a\military\equipment\data\ruggedtablet_co.paa";
						picture="a3\props_f_exp_a\military\equipment\data\ruggedtablet_co.paa";
					};
					class 2
					{
						name="$STR_a3_texturesources_sand0";
						value="a3\Props_F_Enoch\Military\Camps\data\RuggedTablet_Sand_CO.paa";
						picture="a3\Props_F_Enoch\Military\Camps\data\RuggedTablet_Sand_CO.paa";
					};
					class 3
					{
						name="$STR_a3_texturesources_black0";
						value="a3\Props_F_Enoch\Military\Camps\data\RuggedTablet_black_CO.paa";
						picture="a3\Props_F_Enoch\Military\Camps\data\RuggedTablet_black_CO.paa";
					};
				};
			};
		};
	};
	class Tablet_02_G_DiaryImagesStratis: Items_base_F
	{
		author="O&T Expansion Eden";
		mapSize=0.30000001;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.034000002;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Tablet_02_G_DiaryImagesAltis.jpg";
		_generalMacro="Tablet_02_G_DiaryImagesStratis";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Tablet_02_G_DiaryImagesStratis0";
		model="\A3\Props_F_Exp_A\Military\Equipment\Tablet_02_F.p3d";
		icon="iconObject_5x4";
		editorCategory="EdCat_Things";
		editorSubcategory="EdSubcat_Electronics";
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2"
		};
		hiddenSelectionsTextures[]=
		{
			"A3\ui_f_curator\Data\CfgDiaryImages\Stratis\AgiaMarina_ca.paa",
			"a3\props_f_exp_a\military\equipment\data\ruggedtablet_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Data_F\Lights\Lamp_lcd2.rvmat",
			"\a3\props_f_exp_a\military\equipment\data\ruggedtablet.rvmat"
		};
		class Attributes
		{
			delete ObjectTextureCustom0;
			class SwitchTextureScreen
			{
				property="SwitchTextureScreen";
				displayName="$STR_NAME_CITY";
				control="Combo";
				expression="_this setObjectTextureGlobal [0, _value]";
				defaultValue="(getObjectTextures _this) param [0,'',['']]";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="$STR_A3_agia_marina0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Stratis\AgiaMarina_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Stratis\AgiaMarina_ca.paa";
					};
					class 2
					{
						name="$STR_A3_airstation0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Stratis\AirStationMike26_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Stratis\AirStationMike26_ca.paa";
					};
					class 3
					{
						name="$STR_A3_CampMaxwell0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Stratis\CampMaxwell_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Stratis\CampMaxwell_ca.paa";
					};
					class 4
					{
						name="$STR_A3_CampRogain0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Stratis\CampRogain_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Stratis\CampRogain_ca.paa";
					};
					class 5
					{
						name="$STR_A3_camptempest10";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Stratis\CampTempest_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Stratis\CampTempest_ca.paa";
					};
					class 6
					{
						name="$STR_A3_Girna0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Stratis\Girna_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Stratis\Girna_ca.paa";
					};
					class 7
					{
						name="$STR_A3_sniperschool0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Stratis\KaminoFiringRange_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Stratis\KaminoFiringRange_ca.paa";
					};
					class 8
					{
						name="$STR_A3_natobase10";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Stratis\stratisAirBase_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Stratis\stratisAirBase_ca.paa";
					};
				};
			};
			class SwitchTextureHull
			{
				property="SwitchTextureHull";
				displayName="$STR_Globe_hull0";
				control="Combo";
				expression="_this setObjectTextureGlobal [1, _value]";
				defaultValue="(getObjectTextures _this) param [1,'',['']]";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="$STR_A3_TEXTURESOURCES_OLIVE0";
						value="a3\props_f_exp_a\military\equipment\data\ruggedtablet_co.paa";
						picture="a3\props_f_exp_a\military\equipment\data\ruggedtablet_co.paa";
					};
					class 2
					{
						name="$STR_a3_texturesources_sand0";
						value="a3\Props_F_Enoch\Military\Camps\data\RuggedTablet_Sand_CO.paa";
						picture="a3\Props_F_Enoch\Military\Camps\data\RuggedTablet_Sand_CO.paa";
					};
					class 3
					{
						name="$STR_a3_texturesources_black0";
						value="a3\Props_F_Enoch\Military\Camps\data\RuggedTablet_black_CO.paa";
						picture="a3\Props_F_Enoch\Military\Camps\data\RuggedTablet_black_CO.paa";
					};
				};
			};
		};
	};
	class Tablet_02_G_DiaryImagesAltis_random: Items_base_F
	{
		author="O&T Expansion Eden";
		mapSize=0.30000001;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.034000002;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Tablet_02_G_DiaryImagesAltis.jpg";
		_generalMacro="Tablet_02_G_DiaryImagesAltis_random";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Tablet_02_G_DiaryImagesAltis_random0";
		model="\A3\Props_F_Exp_A\Military\Equipment\Tablet_02_F.p3d";
		icon="iconObject_5x4";
		editorCategory="EdCat_Things";
		editorSubcategory="EdSubcat_Electronics";
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2"
		};
		hiddenSelectionsTextures[]=
		{
			"A3\ui_f_curator\Data\CfgDiaryImages\Altis\Abdera_ca.paa",
			"a3\props_f_exp_a\military\equipment\data\ruggedtablet_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Data_F\Lights\Lamp_lcd2.rvmat",
			"\a3\props_f_exp_a\military\equipment\data\ruggedtablet.rvmat"
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
			class SwitchTextureHull
			{
				property="SwitchTextureHull";
				displayName="$STR_Globe_hull0";
				control="Combo";
				expression="_this setObjectTextureGlobal [1, _value]";
				defaultValue="(getObjectTextures _this) param [1,'',['']]";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="$STR_A3_TEXTURESOURCES_OLIVE0";
						value="a3\props_f_exp_a\military\equipment\data\ruggedtablet_co.paa";
						picture="a3\props_f_exp_a\military\equipment\data\ruggedtablet_co.paa";
					};
					class 2
					{
						name="$STR_a3_texturesources_sand0";
						value="a3\Props_F_Enoch\Military\Camps\data\RuggedTablet_Sand_CO.paa";
						picture="a3\Props_F_Enoch\Military\Camps\data\RuggedTablet_Sand_CO.paa";
					};
					class 3
					{
						name="$STR_a3_texturesources_black0";
						value="a3\Props_F_Enoch\Military\Camps\data\RuggedTablet_black_CO.paa";
						picture="a3\Props_F_Enoch\Military\Camps\data\RuggedTablet_black_CO.paa";
					};
				};
			};
		};
		class EventHandlers
		{
			class Globe_CfgDiaryImages
			{
				postInit="(_this # 0) call compile preprocessFileLineNumbers '\A3\Props_F_Globe\Military\Equipment\scripts\randomizeDiaryImagesTablet.sqf'";
			};
		};
	};
	class Tablet_02_G_DiaryImagesStratis_random: Items_base_F
	{
		author="O&T Expansion Eden";
		mapSize=0.30000001;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.034000002;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Tablet_02_G_DiaryImagesAltis.jpg";
		_generalMacro="Tablet_02_G_DiaryImagesStratis_random";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Tablet_02_G_DiaryImagesStratis_random0";
		model="\A3\Props_F_Exp_A\Military\Equipment\Tablet_02_F.p3d";
		icon="iconObject_5x4";
		editorCategory="EdCat_Things";
		editorSubcategory="EdSubcat_Electronics";
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2"
		};
		hiddenSelectionsTextures[]=
		{
			"A3\ui_f_curator\Data\CfgDiaryImages\Stratis\AgiaMarina_ca.paa",
			"a3\props_f_exp_a\military\equipment\data\ruggedtablet_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Data_F\Lights\Lamp_lcd2.rvmat",
			"\a3\props_f_exp_a\military\equipment\data\ruggedtablet.rvmat"
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
			class SwitchTextureHull
			{
				property="SwitchTextureHull";
				displayName="$STR_Globe_hull0";
				control="Combo";
				expression="_this setObjectTextureGlobal [1, _value]";
				defaultValue="(getObjectTextures _this) param [1,'',['']]";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="$STR_A3_TEXTURESOURCES_OLIVE0";
						value="a3\props_f_exp_a\military\equipment\data\ruggedtablet_co.paa";
						picture="a3\props_f_exp_a\military\equipment\data\ruggedtablet_co.paa";
					};
					class 2
					{
						name="$STR_a3_texturesources_sand0";
						value="a3\Props_F_Enoch\Military\Camps\data\RuggedTablet_Sand_CO.paa";
						picture="a3\Props_F_Enoch\Military\Camps\data\RuggedTablet_Sand_CO.paa";
					};
					class 3
					{
						name="$STR_a3_texturesources_black0";
						value="a3\Props_F_Enoch\Military\Camps\data\RuggedTablet_black_CO.paa";
						picture="a3\Props_F_Enoch\Military\Camps\data\RuggedTablet_black_CO.paa";
					};
				};
			};
		};
		class EventHandlers
		{
			class Globe_CfgDiaryImages
			{
				postInit="(_this # 0) call compile preprocessFileLineNumbers '\A3\Props_F_Globe\Military\Equipment\scripts\randomizeDiaryImagesTablet.sqf'";
			};
		};
	};
	class Tablet_02_G_DiaryImagesAltisStratis_random: Items_base_F
	{
		author="O&T Expansion Eden";
		mapSize=0.30000001;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.034000002;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Tablet_02_G_DiaryImagesAltis.jpg";
		_generalMacro="Tablet_02_G_DiaryImagesAltisStratis_random";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Tablet_02_G_DiaryImagesAltisStratis_random0";
		model="\A3\Props_F_Exp_A\Military\Equipment\Tablet_02_F.p3d";
		icon="iconObject_5x4";
		editorCategory="EdCat_Things";
		editorSubcategory="EdSubcat_Electronics";
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2"
		};
		hiddenSelectionsTextures[]=
		{
			"A3\ui_f_curator\Data\CfgDiaryImages\Stratis\AgiaMarina_ca.paa",
			"a3\props_f_exp_a\military\equipment\data\ruggedtablet_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Data_F\Lights\Lamp_lcd2.rvmat",
			"\a3\props_f_exp_a\military\equipment\data\ruggedtablet.rvmat"
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
			class SwitchTextureHull
			{
				property="SwitchTextureHull";
				displayName="$STR_Globe_hull0";
				control="Combo";
				expression="_this setObjectTextureGlobal [1, _value]";
				defaultValue="(getObjectTextures _this) param [1,'',['']]";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="$STR_A3_TEXTURESOURCES_OLIVE0";
						value="a3\props_f_exp_a\military\equipment\data\ruggedtablet_co.paa";
						picture="a3\props_f_exp_a\military\equipment\data\ruggedtablet_co.paa";
					};
					class 2
					{
						name="$STR_a3_texturesources_sand0";
						value="a3\Props_F_Enoch\Military\Camps\data\RuggedTablet_Sand_CO.paa";
						picture="a3\Props_F_Enoch\Military\Camps\data\RuggedTablet_Sand_CO.paa";
					};
					class 3
					{
						name="$STR_a3_texturesources_black0";
						value="a3\Props_F_Enoch\Military\Camps\data\RuggedTablet_black_CO.paa";
						picture="a3\Props_F_Enoch\Military\Camps\data\RuggedTablet_black_CO.paa";
					};
				};
			};
		};
		class EventHandlers
		{
			class Globe_CfgDiaryImages
			{
				postInit="(_this # 0) call compile preprocessFileLineNumbers '\A3\Props_F_Globe\Military\Equipment\scripts\randomizeDiaryImagesTablet.sqf'";
			};
		};
	};
	class MultiScreenComputer_01_G_DiaryImagesAltis: Land_MultiScreenComputer_01_base_F
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{

				{
					"open_source_monitors",
					0
				},
				
				{
					"open_source_monitors_left",
					0
				},
				
				{
					"open_source_monitors_right",
					0
				}
			};
			hide[]={};
			verticalOffset=0.25;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\MultiScreenComputer_01_G_DiaryImagesAltis.jpg";
		_generalMacro="MultiScreenComputer_01_G_DiaryImagesAltis";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_MultiScreenComputer_01_G_DiaryImagesAltis0";
		hiddenSelectionsTextures[]=
		{
			"a3\Props_F_Enoch\Military\Equipment\data\MultiScreenComputer_01_olive_co.paa",
			"A3\ui_f_curator\Data\CfgDiaryImages\Altis\Abdera_ca.paa",
			"A3\ui_f_curator\Data\CfgDiaryImages\Altis\Aggelochori_ca.paa",
			"A3\ui_f_curator\Data\CfgDiaryImages\Altis\AgiaTriada_ca.paa"
		};
		class Attributes: Attributes
		{
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
					class 1
					{
						name="$STR_A3_TEXTURESOURCES_OLIVE0";
						value="a3\Props_F_Enoch\Military\Equipment\data\MultiScreenComputer_01_olive_co.paa";
						picture="a3\Props_F_Enoch\Military\Equipment\data\MultiScreenComputer_01_olive_co.paa";
					};
					class 2
					{
						name="$STR_a3_texturesources_black0";
						value="a3\Props_F_Enoch\Military\Equipment\data\MultiScreenComputer_01_black_co.paa";
						picture="a3\Props_F_Enoch\Military\Equipment\data\MultiScreenComputer_01_black_co.paa";
					};
					class 3
					{
						name="$STR_a3_texturesources_sand0";
						value="a3\Props_F_Enoch\Military\Equipment\data\MultiScreenComputer_01_sand_co.paa";
						picture="a3\Props_F_Enoch\Military\Equipment\data\MultiScreenComputer_01_sand_co.paa";
					};
				};
			};
			delete ObjectTextureCustom1;
			delete ObjectTextureCustom2;
			delete ObjectTextureCustom3;
			class SwitchTextureScreen1
			{
				property="SwitchTextureScreen1";
				displayName="$STR_3den_object_attribute_objecttexturecustom1_displayname";
				control="Combo";
				expression="_this setObjectTextureGlobal [1, _value]";
				defaultValue="(getObjectTextures _this) param [1,'',['']]";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="$STR_A3_abdera0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Abdera_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Abdera_ca.paa";
					};
					class 2
					{
						name="$STR_A3_Aggelochori0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Aggelochori_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Aggelochori_ca.paa";
					};
					class 3
					{
						name="$STR_A3_AgiaTriada0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\AgiaTriada_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\AgiaTriada_ca.paa";
					};
					class 4
					{
						name="$STR_A3_AgiosDionysios0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\AgiosDionysios_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\AgiosDionysios_ca.paa";
					};
					class 5
					{
						name="$STR_A3_AgiosKonstantinos0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\AgiosKonstantinos_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\AgiosKonstantinos_ca.paa";
					};
					class 6
					{
						name="$STR_A3_AgiosPetros0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\AgiosPetros_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\AgiosPetros_ca.paa";
					};
					class 7
					{
						name="$STR_A3_Alikampos0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Alikampos_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Alikampos_ca.paa";
					};
					class 8
					{
						name="$STR_A3_Anthrakia0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Anthrakia_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Anthrakia_ca.paa";
					};
					class 9
					{
						name="$STR_A3_Athira0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Athira_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Athira_ca.paa";
					};
					class 10
					{
						name="$STR_A3_Chalkeia0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Chalkeia_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Chalkeia_ca.paa";
					};
					class 11
					{
						name="$STR_A3_Charkia0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Charkia_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Charkia_ca.paa";
					};
					class 12
					{
						name="$STR_A3_Delfinaki0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Delfinaki_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Delfinaki_ca.paa";
					};
					class 13
					{
						name="$STR_A3_Dorida0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Dorida_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Dorida_ca.paa";
					};
					class 14
					{
						name="$STR_A3_Ekali0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Ekali_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Ekali_ca.paa";
					};
					class 15
					{
						name="$STR_A3_Feres0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Feres_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Feres_ca.paa";
					};
					class 16
					{
						name="$STR_A3_Frini0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Frini_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Frini_ca.paa";
					};
					class 17
					{
						name="$STR_A3_Gravia0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Gravia_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Gravia_ca.paa";
					};
					class 18
					{
						name="$STR_A3_Ifestiona0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Ifestiona_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Ifestiona_ca.paa";
					};
					class 19
					{
						name="$STR_A3_Ioannina0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Ioannina_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Ioannina_ca.paa";
					};
					class 20
					{
						name="$STR_A3_AgiosPetros0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\AgiosPetros_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\AgiosPetros_ca.paa";
					};
					class 21
					{
						name="$STR_A3_Kalithea0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Kalithea_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Kalithea_ca.paa";
					};
					class 22
					{
						name="$STR_A3_Kalochori0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Kalochori_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Kalochori_ca.paa";
					};
					class 23
					{
						name="$STR_A3_Katalaki0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Katalaki_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Katalaki_ca.paa";
					};
					class 24
					{
						name="$STR_A3_Kavala0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Kavala_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Kavala_ca.paa";
					};
					class 25
					{
						name="$STR_A3_Kore0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Kore_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Kore_ca.paa";
					};
					class 26
					{
						name="$STR_A3_Koroni0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Koroni_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Koroni_ca.paa";
					};
					class 27
					{
						name="$STR_A3_Lakka0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Lakka_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Lakka_ca.paa";
					};
					class 28
					{
						name="$STR_A3_Molos0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Molos_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Molos_ca.paa";
					};
					class 29
					{
						name="$STR_A3_Negades0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Negades_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Negades_ca.paa";
					};
					class 30
					{
						name="$STR_A3_Neochori0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Neochori_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Neochori_ca.paa";
					};
					class 31
					{
						name="$STR_A3_Neri0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Neri_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Neri_ca.paa";
					};
					class 32
					{
						name="$STR_A3_Nifi0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Nifi_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Nifi_ca.paa";
					};
					class 33
					{
						name="$STR_A3_Oreokastro0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Oreokastro_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Oreokastro_ca.paa";
					};
					class 34
					{
						name="$STR_A3_Orino0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Orino_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Orino_ca.paa";
					};
					class 35
					{
						name="$STR_A3_Panagia0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Panagia_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Panagia_ca.paa";
					};
					class 36
					{
						name="$STR_A3_Panochori0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Panochori_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Panochori_ca.paa";
					};
					class 37
					{
						name="$STR_A3_Paros0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Paros_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Paros_ca.paa";
					};
					class 38
					{
						name="$STR_A3_Poliakko0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Poliakko_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Poliakko_ca.paa";
					};
					class 39
					{
						name="$STR_A3_Pyrgos0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Pyrgos_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Pyrgos_ca.paa";
					};
					class 40
					{
						name="$STR_A3_Rodopoli0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Rodopoli_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Rodopoli_ca.paa";
					};
					class 41
					{
						name="$STR_A3_Selakano0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Selakano_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Selakano_ca.paa";
					};
					class 42
					{
						name="$STR_A3_Sofia0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Sofia_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Sofia_ca.paa";
					};
					class 43
					{
						name="$STR_A3_Stavros0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Stavros_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Stavros_ca.paa";
					};
					class 44
					{
						name="$STR_A3_Syrta0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Syrta_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Syrta_ca.paa";
					};
					class 45
					{
						name="$STR_A3_Telos0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Telos_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Telos_ca.paa";
					};
					class 46
					{
						name="$STR_A3_Therisa0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Therisa_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Therisa_ca.paa";
					};
					class 47
					{
						name="$STR_A3_topolia0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Topolia_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Topolia_ca.paa";
					};
					class 48
					{
						name="$STR_A3_zaros0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Zaros_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Altis\Zaros_ca.paa";
					};
				};
			};
			class SwitchTextureScreen2: SwitchTextureScreen1
			{
				property="SwitchTextureScreen2";
				displayName="$STR_3den_object_attribute_objecttexturecustom2_displayname";
				expression="_this setObjectTextureGlobal [2, _value]";
				defaultValue="(getObjectTextures _this) param [2,'',['']]";
			};
			class SwitchTextureScreen3: SwitchTextureScreen1
			{
				property="SwitchTextureScreen3";
				displayName="$STR_3den_object_attribute_objecttexturecustom3_displayname";
				expression="_this setObjectTextureGlobal [3, _value]";
				defaultValue="(getObjectTextures _this) param [3,'',['']]";
			};
			class open_source_monitors_left: open_source_monitors_left
			{
			};
			class open_source_monitors_right: open_source_monitors_right
			{
			};
			class open_source_monitors: open_source_monitors
			{
			};
			class Open_Action: Open_Action
			{
			};
		};
	};
	class MultiScreenComputer_01_G_DiaryImagesStratis: Land_MultiScreenComputer_01_base_F
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{

				{
					"open_source_monitors",
					0
				},
				
				{
					"open_source_monitors_left",
					0
				},
				
				{
					"open_source_monitors_right",
					0
				}
			};
			hide[]={};
			verticalOffset=0.25;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\MultiScreenComputer_01_G_DiaryImagesAltis.jpg";
		_generalMacro="MultiScreenComputer_01_G_DiaryImagesStratis";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_MultiScreenComputer_01_G_DiaryImagesStratis0";
		hiddenSelectionsTextures[]=
		{
			"a3\Props_F_Enoch\Military\Equipment\data\MultiScreenComputer_01_olive_co.paa",
			"A3\ui_f_curator\Data\CfgDiaryImages\Stratis\AgiaMarina_ca.paa",
			"A3\ui_f_curator\Data\CfgDiaryImages\Stratis\AirStationMike26_ca.paa",
			"A3\ui_f_curator\Data\CfgDiaryImages\Stratis\CampMaxwell_ca.paa"
		};
		class Attributes: Attributes
		{
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
					class 1
					{
						name="$STR_A3_TEXTURESOURCES_OLIVE0";
						value="a3\Props_F_Enoch\Military\Equipment\data\MultiScreenComputer_01_olive_co.paa";
						picture="a3\Props_F_Enoch\Military\Equipment\data\MultiScreenComputer_01_olive_co.paa";
					};
					class 2
					{
						name="$STR_a3_texturesources_black0";
						value="a3\Props_F_Enoch\Military\Equipment\data\MultiScreenComputer_01_black_co.paa";
						picture="a3\Props_F_Enoch\Military\Equipment\data\MultiScreenComputer_01_black_co.paa";
					};
					class 3
					{
						name="$STR_a3_texturesources_sand0";
						value="a3\Props_F_Enoch\Military\Equipment\data\MultiScreenComputer_01_sand_co.paa";
						picture="a3\Props_F_Enoch\Military\Equipment\data\MultiScreenComputer_01_sand_co.paa";
					};
				};
			};
			delete ObjectTextureCustom1;
			delete ObjectTextureCustom2;
			delete ObjectTextureCustom3;
			class SwitchTextureScreen1
			{
				property="SwitchTextureScreen1";
				displayName="$STR_3den_object_attribute_objecttexturecustom1_displayname";
				control="Combo";
				expression="_this setObjectTextureGlobal [1, _value]";
				defaultValue="(getObjectTextures _this) param [1,'',['']]";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="$STR_A3_agia_marina0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Stratis\AgiaMarina_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Stratis\AgiaMarina_ca.paa";
					};
					class 2
					{
						name="$STR_A3_airstation0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Stratis\AirStationMike26_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Stratis\AirStationMike26_ca.paa";
					};
					class 3
					{
						name="$STR_A3_CampMaxwell0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Stratis\CampMaxwell_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Stratis\CampMaxwell_ca.paa";
					};
					class 4
					{
						name="$STR_A3_CampRogain0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Stratis\CampRogain_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Stratis\CampRogain_ca.paa";
					};
					class 5
					{
						name="$STR_A3_camptempest10";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Stratis\CampTempest_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Stratis\CampTempest_ca.paa";
					};
					class 6
					{
						name="$STR_A3_Girna0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Stratis\Girna_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Stratis\Girna_ca.paa";
					};
					class 7
					{
						name="$STR_A3_sniperschool0";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Stratis\KaminoFiringRange_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Stratis\KaminoFiringRange_ca.paa";
					};
					class 8
					{
						name="$STR_A3_natobase10";
						picture="A3\ui_f_curator\Data\CfgDiaryImages\Stratis\stratisAirBase_ca.paa";
						value="A3\ui_f_curator\Data\CfgDiaryImages\Stratis\stratisAirBase_ca.paa";
					};
				};
			};
			class SwitchTextureScreen2: SwitchTextureScreen1
			{
				property="SwitchTextureScreen2";
				displayName="$STR_3den_object_attribute_objecttexturecustom2_displayname";
				expression="_this setObjectTextureGlobal [2, _value]";
				defaultValue="(getObjectTextures _this) param [2,'',['']]";
			};
			class SwitchTextureScreen3: SwitchTextureScreen1
			{
				property="SwitchTextureScreen3";
				displayName="$STR_3den_object_attribute_objecttexturecustom3_displayname";
				expression="_this setObjectTextureGlobal [3, _value]";
				defaultValue="(getObjectTextures _this) param [3,'',['']]";
			};
			class open_source_monitors_left: open_source_monitors_left
			{
			};
			class open_source_monitors_right: open_source_monitors_right
			{
			};
			class open_source_monitors: open_source_monitors
			{
			};
			class Open_Action: Open_Action
			{
			};
		};
	};
	class MultiScreenComputer_01_G_DiaryImagesAltis_random: Land_MultiScreenComputer_01_base_F
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{

				{
					"open_source_monitors",
					0
				},
				
				{
					"open_source_monitors_left",
					0
				},
				
				{
					"open_source_monitors_right",
					0
				}
			};
			hide[]={};
			verticalOffset=0.25;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\MultiScreenComputer_01_G_DiaryImagesAltis.jpg";
		_generalMacro="MultiScreenComputer_01_G_DiaryImagesAltis_random";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_MultiScreenComputer_01_G_DiaryImagesAltis_random0";
		hiddenSelectionsTextures[]=
		{
			"a3\Props_F_Enoch\Military\Equipment\data\MultiScreenComputer_01_olive_co.paa",
			"A3\ui_f_curator\Data\CfgDiaryImages\Altis\Abdera_ca.paa",
			"A3\ui_f_curator\Data\CfgDiaryImages\Altis\Aggelochori_ca.paa",
			"A3\ui_f_curator\Data\CfgDiaryImages\Altis\AgiaTriada_ca.paa"
		};
		class Attributes: Attributes
		{
			class ObjectTextureCustom1: ObjectTextureCustom1
			{
			};
			class ObjectTextureCustom2: ObjectTextureCustom2
			{
			};
			class ObjectTextureCustom3: ObjectTextureCustom3
			{
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
					class 1
					{
						name="$STR_A3_TEXTURESOURCES_OLIVE0";
						value="a3\Props_F_Enoch\Military\Equipment\data\MultiScreenComputer_01_olive_co.paa";
						picture="a3\Props_F_Enoch\Military\Equipment\data\MultiScreenComputer_01_olive_co.paa";
					};
					class 2
					{
						name="$STR_a3_texturesources_black0";
						value="a3\Props_F_Enoch\Military\Equipment\data\MultiScreenComputer_01_black_co.paa";
						picture="a3\Props_F_Enoch\Military\Equipment\data\MultiScreenComputer_01_black_co.paa";
					};
					class 3
					{
						name="$STR_a3_texturesources_sand0";
						value="a3\Props_F_Enoch\Military\Equipment\data\MultiScreenComputer_01_sand_co.paa";
						picture="a3\Props_F_Enoch\Military\Equipment\data\MultiScreenComputer_01_sand_co.paa";
					};
				};
			};
			class open_source_monitors_left: open_source_monitors_left
			{
			};
			class open_source_monitors_right: open_source_monitors_right
			{
			};
			class open_source_monitors: open_source_monitors
			{
			};
			class Open_Action: Open_Action
			{
			};
		};
		class EventHandlers
		{
			class Globe_CfgDiaryImages
			{
				postInit="(_this # 0) call compile preprocessFileLineNumbers '\A3\Props_F_Globe\Military\Equipment\scripts\randomizeDiaryImagesComputer.sqf'";
			};
		};
	};
	class MultiScreenComputer_01_G_DiaryImagesStratis_random: Land_MultiScreenComputer_01_base_F
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{

				{
					"open_source_monitors",
					0
				},
				
				{
					"open_source_monitors_left",
					0
				},
				
				{
					"open_source_monitors_right",
					0
				}
			};
			hide[]={};
			verticalOffset=0.25;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\MultiScreenComputer_01_G_DiaryImagesAltis.jpg";
		_generalMacro="MultiScreenComputer_01_G_DiaryImagesStratis_random";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_MultiScreenComputer_01_G_DiaryImagesStratis_random0";
		hiddenSelectionsTextures[]=
		{
			"a3\Props_F_Enoch\Military\Equipment\data\MultiScreenComputer_01_olive_co.paa",
			"A3\ui_f_curator\Data\CfgDiaryImages\Stratis\AgiaMarina_ca.paa",
			"A3\ui_f_curator\Data\CfgDiaryImages\Stratis\AirStationMike26_ca.paa",
			"A3\ui_f_curator\Data\CfgDiaryImages\Stratis\CampMaxwell_ca.paa"
		};
		class Attributes: Attributes
		{
			class ObjectTextureCustom1: ObjectTextureCustom1
			{
			};
			class ObjectTextureCustom2: ObjectTextureCustom2
			{
			};
			class ObjectTextureCustom3: ObjectTextureCustom3
			{
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
					class 1
					{
						name="$STR_A3_TEXTURESOURCES_OLIVE0";
						value="a3\Props_F_Enoch\Military\Equipment\data\MultiScreenComputer_01_olive_co.paa";
						picture="a3\Props_F_Enoch\Military\Equipment\data\MultiScreenComputer_01_olive_co.paa";
					};
					class 2
					{
						name="$STR_a3_texturesources_black0";
						value="a3\Props_F_Enoch\Military\Equipment\data\MultiScreenComputer_01_black_co.paa";
						picture="a3\Props_F_Enoch\Military\Equipment\data\MultiScreenComputer_01_black_co.paa";
					};
					class 3
					{
						name="$STR_a3_texturesources_sand0";
						value="a3\Props_F_Enoch\Military\Equipment\data\MultiScreenComputer_01_sand_co.paa";
						picture="a3\Props_F_Enoch\Military\Equipment\data\MultiScreenComputer_01_sand_co.paa";
					};
				};
			};
			class open_source_monitors_left: open_source_monitors_left
			{
			};
			class open_source_monitors_right: open_source_monitors_right
			{
			};
			class open_source_monitors: open_source_monitors
			{
			};
			class Open_Action: Open_Action
			{
			};
		};
		class EventHandlers
		{
			class Globe_CfgDiaryImages
			{
				postInit="(_this # 0) call compile preprocessFileLineNumbers '\A3\Props_F_Globe\Military\Equipment\scripts\randomizeDiaryImagesComputer.sqf'";
			};
		};
	};
	class MultiScreenComputer_01_G_DiaryImagesAltisStratis_random: Land_MultiScreenComputer_01_base_F
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{

				{
					"open_source_monitors",
					0
				},
				
				{
					"open_source_monitors_left",
					0
				},
				
				{
					"open_source_monitors_right",
					0
				}
			};
			hide[]={};
			verticalOffset=0.25;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\MultiScreenComputer_01_G_DiaryImagesAltis.jpg";
		_generalMacro="MultiScreenComputer_01_G_DiaryImagesAltisStratis_random";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_MultiScreenComputer_01_G_DiaryImagesAltisStratis_random0";
		hiddenSelectionsTextures[]=
		{
			"a3\Props_F_Enoch\Military\Equipment\data\MultiScreenComputer_01_olive_co.paa",
			"A3\ui_f_curator\Data\CfgDiaryImages\Stratis\AgiaMarina_ca.paa",
			"A3\ui_f_curator\Data\CfgDiaryImages\Stratis\AirStationMike26_ca.paa",
			"A3\ui_f_curator\Data\CfgDiaryImages\Stratis\CampMaxwell_ca.paa"
		};
		class Attributes: Attributes
		{
			class ObjectTextureCustom1: ObjectTextureCustom1
			{
			};
			class ObjectTextureCustom2: ObjectTextureCustom2
			{
			};
			class ObjectTextureCustom3: ObjectTextureCustom3
			{
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
					class 1
					{
						name="$STR_A3_TEXTURESOURCES_OLIVE0";
						value="a3\Props_F_Enoch\Military\Equipment\data\MultiScreenComputer_01_olive_co.paa";
						picture="a3\Props_F_Enoch\Military\Equipment\data\MultiScreenComputer_01_olive_co.paa";
					};
					class 2
					{
						name="$STR_a3_texturesources_black0";
						value="a3\Props_F_Enoch\Military\Equipment\data\MultiScreenComputer_01_black_co.paa";
						picture="a3\Props_F_Enoch\Military\Equipment\data\MultiScreenComputer_01_black_co.paa";
					};
					class 3
					{
						name="$STR_a3_texturesources_sand0";
						value="a3\Props_F_Enoch\Military\Equipment\data\MultiScreenComputer_01_sand_co.paa";
						picture="a3\Props_F_Enoch\Military\Equipment\data\MultiScreenComputer_01_sand_co.paa";
					};
				};
			};
			class open_source_monitors_left: open_source_monitors_left
			{
			};
			class open_source_monitors_right: open_source_monitors_right
			{
			};
			class open_source_monitors: open_source_monitors
			{
			};
			class Open_Action: Open_Action
			{
			};
		};
		class EventHandlers
		{
			class Globe_CfgDiaryImages
			{
				postInit="(_this # 0) call compile preprocessFileLineNumbers '\A3\Props_F_Globe\Military\Equipment\scripts\randomizeDiaryImagesComputer.sqf'";
			};
		};
	};
	class PylonPod_ECM_01_G_base: Items_base_F
	{
		author="O&T Expansion Eden";
		_generalMacro="PylonPod_ECM_01_G_base";
		scope=1;
		scopeCurator=0;
		displayName="";
		icon="iconObject_7x1";
		model="a3\Weapons_F\DynamicLoadout\PylonPod_ECM_01_L_F.p3d";
		editorCategory="EdCat_Things";
		editorSubcategory="EdSubcat_Military";
		vehicleClass="Small_items";
		hiddenSelections[]=
		{
			"Camo1",
			"CamoFlare",
			"CamoCamera"
		};
		hiddenSelectionsTextures[]=
		{
			"a3\Weapons_F\DynamicLoadout\Data\PylonPod_ECM_01_CO.paa",
			"",
			""
		};
		class Attributes
		{
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
						name="$STR_A3_TEXTURESOURCES_black0";
						value="a3\Weapons_F\DynamicLoadout\Data\PylonPod_ECM_01_CO.paa";
						picture="a3\Weapons_F\DynamicLoadout\Data\PylonPod_ECM_01_CO.paa";
					};
					class 2
					{
						name="$STR_A3_TEXTURESOURCES_blu0";
						value="a3\Weapons_F\DynamicLoadout\Data\PylonPod_ECM_01_BLUFOR_CO.paa";
						picture="a3\Weapons_F\DynamicLoadout\Data\PylonPod_ECM_01_BLUFOR_CO.paa";
					};
					class 3
					{
						name="$STR_A3_TEXTURESOURCES_jungle0";
						value="a3\Weapons_F\DynamicLoadout\Data\PylonPod_ECM_01_tropic_CO.paa";
						picture="a3\Weapons_F\DynamicLoadout\Data\PylonPod_ECM_01_tropic_CO.paa";
					};
					class 4
					{
						name="$STR_A3_TEXTURESOURCES_sand0";
						value="a3\Weapons_F\DynamicLoadout\Data\PylonPod_ECM_01_sand_CO.paa";
						picture="a3\Weapons_F\DynamicLoadout\Data\PylonPod_ECM_01_sand_CO.paa";
					};
				};
			};
			class SwitchTextureFlare
			{
				property="SwitchTextureFlare";
				displayName="$STR_A3_CMFlareLauncher0";
				control="Combo";
				expression="_this setObjectTextureGlobal [1, _value]";
				defaultValue="(getObjectTextures _this) param [1,'',['']]";
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
						name="$STR_A3_TEXTURESOURCES_black0";
						value="a3\Weapons_F\DynamicLoadout\Data\PylonPod_ECM_01_CO.paa";
						picture="a3\Weapons_F\DynamicLoadout\Data\PylonPod_ECM_01_CO.paa";
					};
					class 2
					{
						name="$STR_A3_TEXTURESOURCES_blu0";
						value="a3\Weapons_F\DynamicLoadout\Data\PylonPod_ECM_01_BLUFOR_CO.paa";
						picture="a3\Weapons_F\DynamicLoadout\Data\PylonPod_ECM_01_BLUFOR_CO.paa";
					};
					class 3
					{
						name="$STR_A3_TEXTURESOURCES_jungle0";
						value="a3\Weapons_F\DynamicLoadout\Data\PylonPod_ECM_01_tropic_CO.paa";
						picture="a3\Weapons_F\DynamicLoadout\Data\PylonPod_ECM_01_tropic_CO.paa";
					};
					class 4
					{
						name="$STR_A3_TEXTURESOURCES_sand0";
						value="a3\Weapons_F\DynamicLoadout\Data\PylonPod_ECM_01_sand_CO.paa";
						picture="a3\Weapons_F\DynamicLoadout\Data\PylonPod_ECM_01_sand_CO.paa";
					};
				};
			};
			class SwitchTextureDIRCM
			{
				property="SwitchTextureDIRCM";
				displayName="DIRCM";
				control="Combo";
				expression="_this setObjectTextureGlobal [2, _value]";
				defaultValue="(getObjectTextures _this) param [2,'',['']]";
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
						name="$STR_A3_TEXTURESOURCES_black0";
						value="a3\Weapons_F\DynamicLoadout\Data\PylonPod_ECM_01_CO.paa";
						picture="a3\Weapons_F\DynamicLoadout\Data\PylonPod_ECM_01_CO.paa";
					};
					class 2
					{
						name="$STR_A3_TEXTURESOURCES_blu0";
						value="a3\Weapons_F\DynamicLoadout\Data\PylonPod_ECM_01_BLUFOR_CO.paa";
						picture="a3\Weapons_F\DynamicLoadout\Data\PylonPod_ECM_01_BLUFOR_CO.paa";
					};
					class 3
					{
						name="$STR_A3_TEXTURESOURCES_jungle0";
						value="a3\Weapons_F\DynamicLoadout\Data\PylonPod_ECM_01_tropic_CO.paa";
						picture="a3\Weapons_F\DynamicLoadout\Data\PylonPod_ECM_01_tropic_CO.paa";
					};
					class 4
					{
						name="$STR_A3_TEXTURESOURCES_sand0";
						value="a3\Weapons_F\DynamicLoadout\Data\PylonPod_ECM_01_sand_CO.paa";
						picture="a3\Weapons_F\DynamicLoadout\Data\PylonPod_ECM_01_sand_CO.paa";
					};
				};
			};
			class CameraHead
			{
				property="CameraHead";
				displayName="$STR_Globe_CfgVehicles_PylonPod_ECM_01_G_base_Attributes_CameraHead0";
				control="Slider_6__283185";
				defaultValue=0;
				expression="_this animateSource ['%s',_value,true]";
			};
		};
		class AnimationSources
		{
			class CameraHead
			{
				source="user";
				animPeriod=0.30000001;
				initPhase=0;
			};
		};
	};
	class PylonPod_ECM_01_G_left_base: PylonPod_ECM_01_G_base
	{
		author="O&T Expansion Eden";
		_generalMacro="PylonPod_ECM_01_G_left_base";
		scope=1;
		scopeCurator=0;
		model="a3\Weapons_F\DynamicLoadout\PylonPod_ECM_01_L_F.p3d";
	};
	class Land_PylonPod_ECM_01_G_left: PylonPod_ECM_01_G_left_base
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{

				{
					"CameraHead",
					0
				}
			};
			hide[]={};
			verticalOffset=0.29300001;
			verticalOffsetWorld=0;
			init="''";
		};
		_generalMacro="Land_PylonPod_ECM_01_G_left";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_PylonPod_ECM_01_G_right.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_PylonPod_ECM_01_G_left0";
	};
	class PylonPod_ECM_01_G_right_base: PylonPod_ECM_01_G_base
	{
		author="O&T Expansion Eden";
		_generalMacro="PylonPod_ECM_01_G_right_base";
		scope=1;
		scopeCurator=0;
		model="a3\Weapons_F\DynamicLoadout\PylonPod_ECM_01_R_F.p3d";
	};
	class Land_PylonPod_ECM_01_G_right: PylonPod_ECM_01_G_right_base
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{

				{
					"CameraHead",
					0
				}
			};
			hide[]={};
			verticalOffset=0.29300001;
			verticalOffsetWorld=0;
			init="''";
		};
		_generalMacro="Land_PylonPod_ECM_01_G_right";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_PylonPod_ECM_01_G_right.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_PylonPod_ECM_01_G_right0";
	};
	class PylonPod_Searchlight_01_G_base: Items_base_F
	{
		author="O&T Expansion Eden";
		_generalMacro="PylonPod_Searchlight_01_G_base";
		scope=1;
		scopeCurator=0;
		displayName="";
		icon="iconObject_1x2";
		model="a3\Weapons_F\DynamicLoadout\PylonPod_SearchLight_01_F.p3d";
		editorCategory="EdCat_Things";
		editorSubcategory="EdSubcat_Military";
		vehicleClass="Small_items";
		hiddenSelections[]=
		{
			"Camo1",
			"light",
			"CamoIR"
		};
		hiddenSelectionsTextures[]=
		{
			"a3\Weapons_F\DynamicLoadout\Data\PylonPod_SearchLight_01_CO.paa",
			"",
			""
		};
		class Attributes
		{
			class DisableInit
			{
				displayName="$STR_Action_searchLights_off";
				property="DisableInit";
				control="Checkbox";
				defaultValue=0;
				expression="_this setVariable ['Globe_disableInit',_value,isServer]";
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
						name="$STR_A3_TEXTURESOURCES_black0";
						value="a3\Weapons_F\DynamicLoadout\Data\PylonPod_SearchLight_01_CO.paa";
						picture="a3\Weapons_F\DynamicLoadout\Data\PylonPod_SearchLight_01_CO.paa";
					};
					class 2
					{
						name="$STR_A3_TEXTURESOURCES_blu0";
						value="a3\Weapons_F\DynamicLoadout\Data\PylonPod_SearchLight_01_BLUFOR_CO.paa";
						picture="a3\Weapons_F\DynamicLoadout\Data\PylonPod_SearchLight_01_BLUFOR_CO.paa";
					};
					class 3
					{
						name="$STR_A3_TEXTURESOURCES_jungle0";
						value="a3\Weapons_F\DynamicLoadout\Data\PylonPod_SearchLight_01_tropic_CO.paa";
						picture="a3\Weapons_F\DynamicLoadout\Data\PylonPod_SearchLight_01_tropic_CO.paa";
					};
					class 4
					{
						name="$STR_A3_TEXTURESOURCES_sand0";
						value="a3\Weapons_F\DynamicLoadout\Data\PylonPod_SearchLight_01_sand_CO.paa";
						picture="a3\Weapons_F\DynamicLoadout\Data\PylonPod_SearchLight_01_sand_CO.paa";
					};
				};
			};
			class HideIR
			{
				property="HideIR";
				displayName="$STR_Globe_CfgVehicles_PylonPod_Searchlight_01_G_base_Attributes_HideIR0";
				control="Combo";
				expression="_this setObjectTextureGlobal [2, _value]";
				defaultValue="(getObjectTextures _this) param [2,'',['']]";
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
						name="$STR_Globe_CfgVehicles_PylonPod_Searchlight_01_G_base_Attributes_HideIR1";
						value="a3\weapons_f\dynamicloadout\data\pylonpod_searchlight_01_ir_co.paa";
						picture="a3\weapons_f\dynamicloadout\data\pylonpod_searchlight_01_ir_co.paa";
					};
				};
			};
			class pilotcameraroty
			{
				property="pilotcameraroty";
				displayName="$STR_Globe_CfgVehicles_PylonPod_Searchlight_01_G_base_Attributes_pilotcameraroty0";
				control="Slider_6__283185";
				defaultValue=0;
				expression="_this animate ['%s',_value,true]";
			};
			class pilotcamerarotx
			{
				property="pilotcamerarotx";
				displayName="$STR_Globe_CfgVehicles_PylonPod_Searchlight_01_G_base_Attributes_pilotcamerarotx0";
				control="Slider_6__283185";
				defaultValue=0;
				expression="_this animate ['%s',_value,true]";
			};
			class disableActionX
			{
				displayName="$STR_Globe_CfgVehicles_PylonPod_Searchlight_01_G_base_Attributes_disableActionX0";
				tooltip="$STR_Globe_CfgVehicles_PylonPod_Searchlight_01_G_base_Attributes_disableActionX1";
				property="disableActionX";
				control="Checkbox";
				defaultValue=0;
				expression="if(_value isEqualTo true) then {_this setVariable ['Globe_disableActionX',true]} else {_this setVariable ['Globe_disableActionX',false]};";
			};
			class disableActionY
			{
				displayName="$STR_Globe_CfgVehicles_PylonPod_Searchlight_01_G_base_Attributes_disableActionY0";
				tooltip="$STR_A3_C_CfgVehicles_DeconShower_01_base_F_Attributes_Decon_Shower_DisableUserActions1";
				property="disableActionY";
				control="Checkbox";
				defaultValue=0;
				expression="if(_value isEqualTo true) then {_this setVariable ['Globe_disableActionY',true]} else {_this setVariable ['Globe_disableActionY',false]};";
			};
			class disableActionSwitch
			{
				displayName="$STR_Globe_CfgVehicles_PylonPod_Searchlight_01_G_base_Attributes_disableActionSwitch0";
				tooltip="$STR_Globe_CfgVehicles_PylonPod_Searchlight_01_G_base_Attributes_disableActionSwitch1";
				property="disableActionSwitch";
				control="Checkbox";
				defaultValue=0;
				expression="if(_value isEqualTo true) then {_this setVariable ['Globe_disableActionSwitch',true]} else {_this setVariable ['Globe_disableActionSwitch',false]};";
			};
		};
		armorLights=1;
		class Reflectors
		{
			class Light
			{
				position="light_pos";
				direction="light_dir";
				hitpoint="";
				selection="light";
				color[]={0.25,0.25,0.60000002};
				ambient[]={0.25,0.25,0.60000002};
				intensity=10000;
				size=1;
				coneFadeCoef=1;
				innerAngle=20;
				outerAngle=55;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=0.0040000002;
					hardLimitStart=1700;
					hardLimitEnd=2800;
				};
			};
			class Flare
			{
				position="light_pos";
				direction="light_dir";
				hitpoint="";
				selection="light";
				color[]={0.25,0.25,0.60000002};
				ambient[]={0.25,0.25,0.60000002};
				size=1;
				innerAngle=30;
				outerAngle=175;
				coneFadeCoef=10;
				intensity=100;
				useFlare=1;
				dayLight=0;
				flareSize=1.85;
				flareMaxDistance=1400;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=0;
					quadratic=10;
					hardLimitStart=0;
					hardLimitEnd=0.89999998;
				};
			};
		};
		aggregateReflectors[]=
		{

			{
				"Light"
			},
			
			{
				"Flare"
			}
		};
		class EventHandlers
		{
			class Globe_EHs
			{
				hitPart="((_this # 0) # 0) setDamage 1";
				postInit="if (!is3DEN) then { if (!((_this # 0) getVariable ['Globe_disableInit',false])) then { (_this # 0) switchLight 'ON' } else { (_this # 0) switchLight 'OFF' } }; 		_this call expEden_fnc_pylonPodSearchlightActions;";
			};
		};
	};
	class Land_PylonPod_Searchlight_01_G: PylonPod_Searchlight_01_G_base
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{

				{
					"pilotcameraroty",
					0
				},

				{
					"pilotcamerarotx",
					0
				}
			};
			hide[]=
			{
				"light"
			};
			verticalOffset=0.29300001;
			verticalOffsetWorld=0;
			init="''";
		};
		_generalMacro="Land_PylonPod_Searchlight_01_G";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_PylonPod_Searchlight_01_G.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_PylonPod_Searchlight_01_G0";
	};
	class PylonPod_Radar_01_G_base: Items_base_F
	{
		author="O&T Expansion Eden";
		_generalMacro="PylonPod_Radar_01_G_base";
		scope=1;
		scopeCurator=0;
		displayName="";
		icon="iconObject_1x1";
		model="a3\Weapons_F\DynamicLoadout\PylonPod_Radar_01_F.p3d";
		editorCategory="EdCat_Things";
		editorSubcategory="EdSubcat_Military";
		vehicleClass="Small_items";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\Weapons_F\DynamicLoadout\Data\PylonPod_Radar_01_CO.paa"
		};
		class Attributes
		{
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
						name="$STR_A3_TEXTURESOURCES_black0";
						value="a3\Weapons_F\DynamicLoadout\Data\PylonPod_Radar_01_CO.paa";
						picture="a3\Weapons_F\DynamicLoadout\Data\PylonPod_Radar_01_CO.paa";
					};
					class 2
					{
						name="$STR_A3_TEXTURESOURCES_blu0";
						value="a3\Weapons_F\DynamicLoadout\Data\PylonPod_Radar_01_BLUFOR_CO.paa";
						picture="a3\Weapons_F\DynamicLoadout\Data\PylonPod_Radar_01_BLUFOR_CO.paa";
					};
					class 3
					{
						name="$STR_A3_TEXTURESOURCES_jungle0";
						value="a3\Weapons_F\DynamicLoadout\Data\PylonPod_Radar_01_tropic_CO.paa";
						picture="a3\Weapons_F\DynamicLoadout\Data\PylonPod_Radar_01_tropic_CO.paa";
					};
					class 4
					{
						name="$STR_A3_TEXTURESOURCES_sand0";
						value="a3\Weapons_F\DynamicLoadout\Data\PylonPod_Radar_01_sand_CO.paa";
						picture="a3\Weapons_F\DynamicLoadout\Data\PylonPod_Radar_01_sand_CO.paa";
					};
				};
			};
			class pilotcameraroty
			{
				property="pilotcameraroty";
				displayName="$STR_Globe_CfgVehicles_PylonPod_Radar_01_G_base_Attributes_pilotcameraroty0";
				control="Slider_6__283185";
				defaultValue=0;
				expression="_this animate ['%s',_value,true]";
			};
			class pilotcamerarotx
			{
				property="pilotcamerarotx";
				displayName="$STR_Globe_CfgVehicles_PylonPod_Radar_01_G_base_Attributes_pilotcamerarotx0";
				control="Slider_6__283185";
				defaultValue=0;
				expression="_this animate ['%s',_value,true]";
			};
		};
	};
	class Land_PylonPod_Radar_01_G: PylonPod_Radar_01_G_base
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{

				{
					"pilotcameraroty",
					0
				},

				{
					"pilotcamerarotx",
					0
				}
			};
			hide[]={};
			verticalOffset=0.29300001;
			verticalOffsetWorld=0;
			init="''";
		};
		_generalMacro="Land_PylonPod_Radar_01_G";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_PylonPod_Radar_01_G.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_PylonPod_Radar_01_G0";
	};
	class PylonPod_Camera_01_G_base: Items_base_F
	{
		author="O&T Expansion Eden";
		_generalMacro="PylonPod_Camera_01_G_base";
		scope=1;
		scopeCurator=0;
		displayName="";
		icon="iconObject_1x1";
		model="a3\Weapons_F\DynamicLoadout\PylonPod_Camera_01_F.p3d";
		editorCategory="EdCat_Things";
		editorSubcategory="EdSubcat_Military";
		vehicleClass="Small_items";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\Weapons_F\DynamicLoadout\Data\PylonPod_Camera_01_CO.paa"
		};
		class Attributes
		{
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
						name="$STR_A3_TEXTURESOURCES_black0";
						value="a3\Weapons_F\DynamicLoadout\Data\PylonPod_Camera_01_CO.paa";
						picture="a3\Weapons_F\DynamicLoadout\Data\PylonPod_Camera_01_CO.paa";
					};
					class 2
					{
						name="$STR_A3_TEXTURESOURCES_blu0";
						value="a3\Weapons_F\DynamicLoadout\Data\PylonPod_Camera_01_BLUFOR_CO.paa";
						picture="a3\Weapons_F\DynamicLoadout\Data\PylonPod_Camera_01_BLUFOR_CO.paa";
					};
					class 3
					{
						name="$STR_A3_TEXTURESOURCES_jungle0";
						value="a3\Weapons_F\DynamicLoadout\Data\PylonPod_Camera_01_tropic_CO.paa";
						picture="a3\Weapons_F\DynamicLoadout\Data\PylonPod_Camera_01_tropic_CO.paa";
					};
					class 4
					{
						name="$STR_A3_TEXTURESOURCES_sand0";
						value="a3\Weapons_F\DynamicLoadout\Data\PylonPod_Camera_01_sand_CO.paa";
						picture="a3\Weapons_F\DynamicLoadout\Data\PylonPod_Camera_01_sand_CO.paa";
					};
				};
			};
			class pilotcameraroty
			{
				property="pilotcameraroty";
				displayName="$STR_Globe_CfgVehicles_PylonPod_Camera_01_G_base_Attributes_pilotcameraroty0";
				control="Slider_6__283185";
				defaultValue=0;
				expression="_this animate ['%s',_value,true]";
			};
			class pilotcamerarotx
			{
				property="pilotcamerarotx";
				displayName="$STR_Globe_CfgVehicles_PylonPod_Camera_01_G_base_Attributes_pilotcamerarotx0";
				control="Slider_6__283185";
				defaultValue=0;
				expression="_this animate ['%s',_value,true]";
			};
		};
	};
	class Land_PylonPod_Camera_01_G: PylonPod_Camera_01_G_base
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{

				{
					"pilotcameraroty",
					0
				},

				{
					"pilotcamerarotx",
					0
				}
			};
			hide[]={};
			verticalOffset=0.29300001;
			verticalOffsetWorld=0;
			init="''";
		};
		_generalMacro="Land_PylonPod_Camera_01_G";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_PylonPod_Camera_01_G.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_PylonPod_Camera_01_G0";
	};
};
