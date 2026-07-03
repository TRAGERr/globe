class CfgPatches
{
	class A3_Structures_F_Globe_Military_Flags
	{
		addonRootClass="A3_Structures_F_Globe";
		requiredAddons[]=
		{
			"A3_Structures_F_Globe_Military"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Flag_Checkered_01_G",
			"FlagMarker_01_G_mines",
			"FlagPole_military",
			"Flag_Netherlands",
			"Flag_Blanken",
			"Flag_damaged_F",
			"Flag_placeholder_F",
			"Banner_01_NATO_slides_F",
			"Banner_01_NATO_slides_random_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class NonStrategic;
	class FlagMarker_01_F;
	class Banner_01_base_F;
	class Building;
	class Strategic: Building
	{
		class EventHandlers;
	};
	class FlagCarrierCore: Strategic
	{
		class Attributes
		{
			class FlagpoleType
			{
				displayName="$STR_a3_cfgvehicles_flagpole_f0";
				property="FlagpoleType";
				control="Combo";
				expression="_this setObjectTextureGlobal [0,_value]; if (_value isEqualTo '\A3\Structures_F\Mil\Flags\Data\Mast_civ_CO.paa') then {_this setObjectMaterialGlobal [0,'\A3\Structures_F\Mil\Flags\Data\Mast_civ.rvmat']} else {_this setObjectMaterialGlobal [0,'\A3\Structures_F\Mil\Flags\Data\Mast_mil.rvmat']}";
				defaultValue="(getArray (configfile >> 'CfgVehicles' >> typeOf _this >> 'hiddenSelectionsTextures') # 0)";
				typeName="STRING";
				class Values
				{
					class Mil
					{
						name="$STR_a3_to_c02_callsign_civil";
						value="\A3\Structures_F\Mil\Flags\Data\Mast_civ_CO.paa";
						picture="\A3\Structures_F\Mil\Flags\Data\Mast_civ_CO.paa";
					};
					class Civ
					{
						name="$STR_Globe_CfgVehicles_FlagCarrier_Attributes_FlagpoleType0";
						value="\A3\Structures_F\Mil\Flags\Data\Mast_mil_CO.paa";
						picture="\A3\Structures_F\Mil\Flags\Data\Mast_mil_CO.paa";
					};
				};
			};
			class Flag
			{
				displayName="$STR_A3_CfgVehicles_PortableFlagPole_01_F_Attributes_Flag0";
				property="Flag";
				control="FlagTexture";
				expression="if(!(_this getVariable ['bis_flagPole_custom',false]) )then{_this setFlagTexture _value};";
				defaultValue="'\'+ (flagTexture _this)";
				wikiType="[[String]]";
			};
			class Flag_Custom
			{
				displayName="$STR_A3_CfgVehicles_PortableFlagPole_01_F_Attributes_Flag_Custom0";
				property="Flag_Custom";
				control="Edit";
				expression="if(_value != '')then{_this setFlagTexture _value;_this setVariable ['bis_flagPole_custom',true]}else{_this setVariable ['bis_flagPole_custom',false]};";
				defaultValue="''";
			};
		};
	};
	class FlagCarrier: FlagCarrierCore
	{
		class Attributes: Attributes
		{
			class FlagpoleType
			{
				displayName="$STR_a3_cfgvehicles_flagpole_f0";
				property="FlagpoleType";
				control="Combo";
				expression="_this setObjectTextureGlobal [0,_value]; if (_value isEqualTo '\A3\Structures_F\Mil\Flags\Data\Mast_civ_CO.paa') then {_this setObjectMaterialGlobal [0,'\A3\Structures_F\Mil\Flags\Data\Mast_civ.rvmat']} else {_this setObjectMaterialGlobal [0,'\A3\Structures_F\Mil\Flags\Data\Mast_mil.rvmat']}";
				defaultValue="(getArray (configfile >> 'CfgVehicles' >> typeOf _this >> 'hiddenSelectionsTextures') # 0)";
				typeName="STRING";
				class Values
				{
					class Mil
					{
						name="$STR_a3_to_c02_callsign_civil";
						value="\A3\Structures_F\Mil\Flags\Data\Mast_civ_CO.paa";
						picture="\A3\Structures_F\Mil\Flags\Data\Mast_civ_CO.paa";
					};
					class Civ
					{
						name="$STR_Globe_CfgVehicles_FlagCarrier_Attributes_FlagpoleType0";
						value="\A3\Structures_F\Mil\Flags\Data\Mast_mil_CO.paa";
						picture="\A3\Structures_F\Mil\Flags\Data\Mast_mil_CO.paa";
					};
				};
			};
			class Flag
			{
				displayName="$STR_A3_CfgVehicles_PortableFlagPole_01_F_Attributes_Flag0";
				property="Flag";
				control="FlagTexture";
				expression="if(!(_this getVariable ['bis_flagPole_custom',false]) )then{_this setFlagTexture _value};";
				defaultValue="'\'+ (flagTexture _this)";
				wikiType="[[String]]";
			};
			class Flag_Custom
			{
				displayName="$STR_A3_CfgVehicles_PortableFlagPole_01_F_Attributes_Flag_Custom0";
				property="Flag_Custom";
				control="Edit";
				expression="if(_value != '')then{_this setFlagTexture _value;_this setVariable ['bis_flagPole_custom',true]}else{_this setVariable ['bis_flagPole_custom',false]};";
				defaultValue="''";
			};
			class FlagAnimationPhase
			{
				displayName="$STR_A3_CfgVehicles_PortableFlagPole_01_F_Attributes_Flag_source0";
				property="FlagAnimationPhase";
				control="Slider";
				expression="_this setFlagAnimationPhase _value;";
				defaultValue="flagAnimationPhase _this;";
			};
		};
	};
	class FlagCarrier_Asym: FlagCarrier
	{
		class Attributes: Attributes
		{
			class FlagpoleType
			{
				displayName="$STR_a3_cfgvehicles_flagpole_f0";
				property="FlagpoleType";
				control="Combo";
				expression="_this setObjectTextureGlobal [0,_value]; if (_value isEqualTo '\A3\Structures_F\Mil\Flags\Data\Mast_civ_CO.paa') then {_this setObjectMaterialGlobal [0,'\A3\Structures_F\Mil\Flags\Data\Mast_civ.rvmat']} else {_this setObjectMaterialGlobal [0,'\A3\Structures_F\Mil\Flags\Data\Mast_mil.rvmat']}";
				defaultValue="(getArray (configfile >> 'CfgVehicles' >> typeOf _this >> 'hiddenSelectionsTextures') # 0)";
				typeName="STRING";
				class Values
				{
					class Mil
					{
						name="$STR_a3_to_c02_callsign_civil";
						value="\A3\Structures_F\Mil\Flags\Data\Mast_civ_CO.paa";
						picture="\A3\Structures_F\Mil\Flags\Data\Mast_civ_CO.paa";
					};
					class Civ
					{
						name="$STR_Globe_CfgVehicles_FlagCarrier_Attributes_FlagpoleType0";
						value="\A3\Structures_F\Mil\Flags\Data\Mast_mil_CO.paa";
						picture="\A3\Structures_F\Mil\Flags\Data\Mast_mil_CO.paa";
					};
				};
			};
			class Flag
			{
				displayName="$STR_A3_CfgVehicles_PortableFlagPole_01_F_Attributes_Flag0";
				property="Flag";
				control="FlagTexture";
				expression="if(!(_this getVariable ['bis_flagPole_custom',false]) )then{_this setFlagTexture _value};";
				defaultValue="'\'+ (flagTexture _this)";
				wikiType="[[String]]";
			};
			class Flag_Custom
			{
				displayName="$STR_A3_CfgVehicles_PortableFlagPole_01_F_Attributes_Flag_Custom0";
				property="Flag_Custom";
				control="Edit";
				expression="if(_value != '')then{_this setFlagTexture _value;_this setVariable ['bis_flagPole_custom',true]}else{_this setVariable ['bis_flagPole_custom',false]};";
				defaultValue="''";
			};
			class FlagAnimationPhase
			{
				displayName="$STR_A3_CfgVehicles_PortableFlagPole_01_F_Attributes_Flag_source0";
				property="FlagAnimationPhase";
				control="Slider";
				expression="_this setFlagAnimationPhase _value;";
				defaultValue="flagAnimationPhase _this;";
			};
		};
	};
	class PortableFlagPole_01_123: FlagCarrierCore
	{
		author="O&T Expansion Eden";
		mapSize=3.1099999;
		editorPreview="\A3\EditorPreviews_F_Decade\Data\CfgVehicles\PortableFlagPole_01_F.jpg";
		_generalMacro="PortableFlagPole_01_123";
		scope=1;
		scopeCurator=0;
		displayName="$STR_A3_CfgVehicles_PortableFlagPole_01_F0";
		model="\a3\Props_F_Decade\Objectives\PortableFlagPole_01_F.p3d";
		icon="iconObject_circle";
		editorCategory="EdCat_Signs";
		editorSubcategory="EdSubcat_Flags";
		destrType="DestructNo";
		accuracy=1000;
		animated=0;
		cost=1000;
		keepHorizontalPlacement=1;
		nameSound="obj_flag";
		supplyRadius=2;
		class AnimationSources
		{
			class Flag_source
			{
				source="user";
				initPhase=0;
				animPeriod=35;
			};
		};
		class Attributes: Attributes
		{
			class Flag
			{
				displayName="$STR_A3_CfgVehicles_PortableFlagPole_01_F_Attributes_Flag0";
				property="Flag_Property";
				control="FlagTexture";
				expression="if(!(_this getVariable ['bis_flagPole_custom',false]) )then{_this setFlagTexture _value};";
				defaultValue="'\'+ (flagTexture _this)";
				wikiType="[[String]]";
			};
			class Flag_Custom
			{
				displayName="$STR_A3_CfgVehicles_PortableFlagPole_01_F_Attributes_Flag_Custom0";
				property="Flag_Custom";
				control="Edit";
				expression="if(_value != '')then{_this setFlagTexture _value;_this setVariable ['bis_flagPole_custom',true]}else{_this setVariable ['bis_flagPole_custom',false]};";
				defaultValue="''";
			};
			class Flag_source
			{
				displayName="$STR_A3_CfgVehicles_PortableFlagPole_01_F_Attributes_Flag_source0";
				property="Flag_source";
				control="Slider";
				defaultValue=0;
				expression="_this animateSource ['%s',_value,true]";
			};
		};
		class EventHandlers
		{
			init="(_this # 0) setFlagTexture '\a3\missions_f_aow\data\Img\flag_blanken_co.paa'";
		};
	};
	class Banner_01_NATO_slides_F: Banner_01_base_F
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.46900001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Banner_01_NATO_slides_F.jpg";
		_generalMacro="Banner_01_NATO_slides_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_Globe_CfgVehicles_Banner_01_NATO_slides_F0";
		DLC="";
		hiddenSelectionsTextures[]=
		{
			"a3\missions_f_exp\data\img\lobby\ui_campaign_lobby_restricted_ca.paa"
		};
		class Attributes
		{
			class SwitchTexture
			{
				property="SwitchTexture";
				displayName="$STR_expEden_Land_Laptop_Syndiakt_select_F";
				control="Combo";
				expression="_this setObjectTextureGlobal [0, _value]";
				defaultValue="'\A3\missions_f_exp\data\Img\lobby\ui_campaign_lobby_background_co.paa'";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="$STR_A3_Globe_CfgVehicles_Land_TripodScreen_01_large_NATO_F_Attributes_values0";
						value="\A3\missions_f_exp\data\Img\lobby\ui_campaign_lobby_background_co.paa";
						picture="\A3\missions_f_exp\data\Img\lobby\ui_campaign_lobby_background_co.paa";
					};
					class 2
					{
						name="$STR_A3_Globe_CfgVehicles_Land_TripodScreen_01_large_NATO_F_Attributes_values1";
						value="\A3\missions_f_exp\data\Img\lobby\ui_campaign_lobby_background2_co.paa";
						picture="\A3\missions_f_exp\data\Img\lobby\ui_campaign_lobby_background2_co.paa";
					};
					class 3
					{
						name="Top Secret";
						value="\A3\missions_f_exp\data\Img\lobby\ui_campaign_lobby_restricted_ca.paa";
						picture="\A3\missions_f_exp\data\Img\lobby\ui_campaign_lobby_restricted_ca.paa";
					};
					class 4
					{
						name="$STR_A3_cfgvehicles_flag_nato_f0";
						value="a3\data_f\flags\flag_nato_co.paa";
						picture="a3\data_f\flags\flag_nato_co.paa";
					};
				};
			};
		};
	};
	class Banner_01_NATO_slides_random_F: Banner_01_NATO_slides_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Banner_01_NATO_slides_random_F.jpg";
		_generalMacro="Banner_01_NATO_slides_random_F";
		displayName="$STR_A3_Globe_CfgVehicles_Banner_01_NATO_slides_random_F0";
		class EventHandlers
		{
			init="(_this # 0) call compile preprocessFileLineNumbers '\A3\Structures_F_Globe\Military\Flags\scripts\randomize.sqf'";
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
		};
	};
	class Flag_damaged_F: FlagCarrier_Asym
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=0;
			animate[]=
			{
				
				{
					"flag",
					0
				}
			};
			hide[]={};
			verticalOffset=3.977;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_ExpEden\Data\CfgVehicles\Flag_damaged_F.jpg";
		_generalMacro="Flag_damaged_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_Globe_CfgVehicles_Flag_damaged_F0";
		class EventHandlers
		{
			init="(_this # 0) setFlagTexture '\A3\Data_F\Flags\Flag_White_dmg_co.paa'";
		};
	};
	class Flag_placeholder_F: FlagCarrier_Asym
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=0;
			animate[]=
			{
				
				{
					"flag",
					0
				}
			};
			hide[]={};
			verticalOffset=3.977;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_ExpEden\Data\CfgVehicles\Flag_placeholder_F.jpg";
		_generalMacro="Flag_placeholder_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_Globe_CfgVehicles_Flag_placehodler_F0";
		class EventHandlers
		{
			init="(_this # 0) setFlagTexture '\A3\Data_F_Exp\Flags\Flag_ION_co.paa'";
		};
	};
	class ShipFlag_US_F: FlagCarrier
	{
		scope=2;
		scopeCurator=2;
		editorPreview="\A3\EditorPreviews_F_ExpEden\Data\CfgVehicles\ShipFlag_US_F.jpg";
	};
	class Flag_Blanken: FlagCarrier_Asym
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=0;
			animate[]=
			{
				
				{
					"flag",
					0
				}
			};
			hide[]={};
			verticalOffset=3.977;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Flag_Blanken.jpg";
		_generalMacro="Flag_Blanken";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_Flag_Blanken";
		class EventHandlers
		{
			init="(_this # 0) setFlagTexture '\a3\missions_f_aow\data\Img\flag_blanken_co.paa'";
		};
	};
	class Flag_Netherlands: FlagCarrier_Asym
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=0;
			animate[]=
			{
				
				{
					"flag",
					0
				}
			};
			hide[]={};
			verticalOffset=3.977;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Flag_Netherlands.jpg";
		_generalMacro="Flag_Netherlands";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_Flag_Netherlands";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '\a3\missions_f_aow\data\Img\flag_netherlands_co.paa'";
		};
	};
	class FlagPole_military: FlagCarrier
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=0;
			animate[]=
			{
				
				{
					"flag",
					0
				}
			};
			hide[]={};
			verticalOffset=3.977;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\FlagPole_military.jpg";
		_generalMacro="FlagPole_military";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_FlagPole_military0";
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F\Mil\Flags\Data\Mast_mil_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Structures_F\Mil\Flags\Data\Mast_mil.rvmat"
		};
	};
	class Flag_NoFlagPole_base: FlagCarrierCore
	{
		author="O&T Expansion Eden";
		_generalMacro="Flag_NoFlagPole_base";
		scope=0;
		scopeCurator=0;
		displayName="";
		model="a3\structures_f\mil\flags\flag_asym_f";
		icon="iconObject_1x3";
		editorSubcategory="EdSubcat_Flags";
		vehicleClass="Flag";
		cost=1000;
		keepHorizontalPlacement=1;
		accuracy=1000;
		animated=0;
		nameSound="obj_flag";
		selectionFabric="latka";
		simulation="flag";
		autocenter=0;
		reversed=0;
		class Attributes
		{
			class Flag
			{
				displayName="$STR_A3_CfgVehicles_PortableFlagPole_01_F_Attributes_Flag0";
				property="Flag";
				control="FlagTexture";
				expression="if(!(_this getVariable ['bis_flagPole_custom',false]) )then{_this setFlagTexture _value};";
				defaultValue="'\'+ (flagTexture _this)";
				wikiType="[[String]]";
			};
			class Flag_Custom
			{
				displayName="$STR_A3_CfgVehicles_PortableFlagPole_01_F_Attributes_Flag_Custom0";
				property="Flag_Custom";
				control="Edit";
				expression="if(_value != '')then{_this setFlagTexture _value;_this setVariable ['bis_flagPole_custom',true]}else{_this setVariable ['bis_flagPole_custom',false]};";
				defaultValue="''";
			};
		};
	};
	class Flag_NoFlagPole_01: Flag_NoFlagPole_base
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=0;
			animate[]=
			{
				
				{
					"flag",
					0
				}
			};
			hide[]={};
			verticalOffset=3.977;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Flag_NoFlagPole_01.jpg";
		_generalMacro="Flag_NoFlagPole_01";
		scope=1;
		scopeCurator=0;
		displayName="$STR_Globe_CfgVehicles_Flag_NoFlagPole_010";
	};
	class FlagMarker_01_G_mines: FlagMarker_01_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\FlagMarker_01_mines.jpg";
		_generalMacro="FlagMarker_01_G_mines";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgVehicles_FlagMarker_01_mines0";
		hiddenselections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"#(rgb,512,512,3)text(1,1,""RobotoCondensedBold"",1,""#c30d0dff"",""#eaeaeaff"",""M"")"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\structures_f_orange\signs\special\data\flagmarker_f.rvmat"
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
		class EventHandlers
		{
			class Globe_flgMrkLtr
			{
				postInit="if (isServer) then {(_this # 0) setObjectTextureGlobal [0,'#(rgb,512,512,3)text(1,1,""RobotoCondensedBold"",1,""#c30d0dff"",""#eaeaeaff"",""M"")']}";
			};
		};
	};
	class FlagSmall_F: NonStrategic
	{
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
	class Flag_Checkered_01_G: FlagCarrier_Asym
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=0;
			animate[]=
			{
				
				{
					"flag",
					0
				}
			};
			hide[]={};
			verticalOffset=3.977;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\FlagChecked_F.jpg";
		_generalMacro="Flag_Checkered_01_G";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Flag_Checkered_01_G0";
		class EventHandlers
		{
			init="(_this # 0) setFlagTexture '\A3\Signs_F\SignSpecial\data\checker_flag_co.paa'";
		};
	};
};
