class CfgPatches
{
	class A3_Weapons_F_Globe_Items
	{
		addonRootClass="A3_Weapons_F_expEden";
		requiredAddons[]=
		{
			"A3_Weapons_F_expEden"
		};
		requiredVersion=0.1;
		units[]=
		{
			"MineDetector_20m_G",
			"MineDetector_25m_G",
			"Item_Medikit_Civilian_01",
			"Leaflet_05_realityCheck",
			"Leaflet_05_Old_realityCheck",
			"Leaflet_05_New_realityCheck",
			"Backgammon_01_Old",
			"Backgammon_01_New",
			"Backgammon_01",
			"Leaflet_05_New_SuicideNote_F",
			"Leaflet_05_Old_SuicideNote_F",
			"Leaflet_05_SuicideNote_F",
			"Leaflet_05_civilian_F",
			"Leaflet_05_Old_civilian_F",
			"Leaflet_05_New_civilian_F",
			"Leaflet_05_CSAT_F",
			"Leaflet_05_Old_CSAT_F",
			"Leaflet_05_New_CSAT_F",
			"Leaflet_05_FIA_F",
			"Leaflet_05_Old_FIA_F",
			"Leaflet_05_New_FIA_F",
			"Leaflet_05_NATO_F",
			"Leaflet_05_New_NATO_F",
			"Leaflet_05_Old_Crime_F",
			"Leaflet_05_announcements_01_F",
			"Leaflet_05_New_announcements_01_F",
			"Leaflet_05_Old_announcements_01_F",
			"Leaflet_05_announcements_01_random_F",
			"Leaflet_05_New_announcements_01_random_F",
			"Leaflet_05_Old_announcements_01_random_F",
			"Leaflet_05_New_ChildDrawings_F",
			"Leaflet_05_New_ChildDrawings_radnom_F",
			"Leaflet_05_Old_ChildDrawings_F",
			"Leaflet_05_Old_ChildDrawings_radnom_F",
			"Leaflet_05_ChildDrawings_F",
			"Leaflet_05_ChildDrawings_radnom_F",
			"Leaflet_05_New_Drawings_F",
			"Leaflet_05_New_Drawings_radnom_F",
			"Leaflet_05_Old_Drawings_F",
			"Leaflet_05_Old_Drawings_radnom_F",
			"Leaflet_05_Drawings_F",
			"Leaflet_05_Drawings_radnom_F",
			"Leaflet_05_New_Crime_F",
			"Leaflet_05_Crime_F",
			"Leaflet_05_Old_BenjaminHope_F",
			"Leaflet_05_New_BenjaminHope_F",
			"Leaflet_05_BenjaminHope_F",
			"Leaflet_05_New_IDAP_IHL_F",
			"Leaflet_05_New_IDAP_IHL_radnom_F",
			"Leaflet_05_Old_IDAP_IHL_F",
			"Leaflet_05_Old_IDAP_IHL_radnom_F",
			"Leaflet_05_IDAP_IHL_F",
			"Leaflet_05_IDAP_IHL_radnom_F"
		};
		weapons[]=
		{
			"Medikit_Civilian_01"
		};
	};
};
class CfgVehicles
{
	class Item_Base_F;
	class Leaflet_05_F;
	class Leaflet_05_Old_F;
	class Leaflet_05_New_F;
	class Leaflet_05_New_IDAP_IHL_F: Leaflet_05_New_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Leaflet_05_New_IDAP_IHL_F.jpg";
		_generalMacro="Leaflet_05_New_IDAP_IHL_F";
		displayName="$STR_expEden_Leaflet_05_New_IDAP_IHL_F";
		editorSubcategory="EdSubcat_Advertisements";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_distinction_CA.paa"
		};
		class Attributes
		{
			class SwitchTexture
			{
				property="SwitchTexture";
				displayName="$STR_EXPEDEN_LAND_INFOSTAND_V1_IDAP_F_ATTRIBUTESSELECT";
				control="Combo";
				expression="_this setObjectTextureGlobal [0, _value]";
				defaultValue="'\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_distinction_CA.paa'";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="$STR_A3_ORANGE_CFGHINTS_IHL_DISTINCTION_DISPLAYNAME";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_distinction_CA.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_distinction_CA.paa";
					};
					class 2
					{
						name="$STR_expEden_Leaflet_05_New_IDAP_IHL_F_select02";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_good_faith_CA.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_good_faith_CA.paa";
					};
					class 3
					{
						name="$STR_A3_ORANGE_CFGHINTS_INTERNATIONALHUMANITARIANLAW_DISPLAYNAME";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_ihl_CA.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_ihl_CA.paa";
					};
					class 4
					{
						name="$STR_expEden_Leaflet_05_New_IDAP_IHL_F_select04";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_military_necessity_CA.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_military_necessity_CA.paa";
					};
					class 5
					{
						name="$STR_expEden_Leaflet_05_New_IDAP_IHL_F_select05";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_mine_hunt_CA.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_mine_hunt_CA.paa";
					};
					class 6
					{
						name="$STR_A3_ORANGE_FACTION_IDAP_MARKER";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_open_day_CA.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_open_day_CA.paa";
					};
					class 7
					{
						name="$STR_A3_ORANGE_CFGHINTS_IHL_PRECAUTION_DISPLAYNAME";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_precaution_CA.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_precaution_CA.paa";
					};
					class 8
					{
						name="$STR_expEden_Leaflet_05_New_IDAP_IHL_F_select08";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_prisoners_CA.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_prisoners_CA.paa";
					};
					class 9
					{
						name="$STR_A3_ORANGE_CFGHINTS_IHL_PROPORTIONALITY_DISPLAYNAME";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_proportionality_CA.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_proportionality_CA.paa";
					};
					class 10
					{
						name="$STR_expEden_Leaflet_05_New_IDAP_IHL_F_select10";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_showcase_low_CA.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_showcase_low_CA.paa";
					};
					class 11
					{
						name="$STR_expEden_Leaflet_05_New_IDAP_IHL_F_select11";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_unnecessary_suffering_CA.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_unnecessary_suffering_CA.paa";
					};
				};
			};
		};
	};
	class Leaflet_05_New_IDAP_IHL_radnom_F: Leaflet_05_New_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Leaflet_05_New_IDAP_IHL_radnom_F.jpg";
		_generalMacro="Leaflet_05_New_IDAP_IHL_radnom_F";
		displayName="$STR_expEden_Leaflet_05_New_IDAP_IHL_radnom_F0";
		editorSubcategory="EdSubcat_Advertisements";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_distinction_CA.paa"
		};
		class EventHandlers
		{
			init="(_this # 0) call compile preprocessFileLineNumbers '\A3\weapons_f_expEden\Items\scripts\randomize_IHL.sqf'";
		};
	};
	class Leaflet_05_Old_IDAP_IHL_F: Leaflet_05_Old_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Leaflet_05_Old_IDAP_IHL_F.jpg";
		_generalMacro="Leaflet_05_Old_IDAP_IHL_F";
		displayName="$STR_A3_Globe_CfgVehicles_Leaflet_05_Old_IDAP_IHL_F0";
		editorSubcategory="EdSubcat_Advertisements";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_distinction_CA.paa"
		};
		class Attributes
		{
			class SwitchTexture
			{
				property="SwitchTexture";
				displayName="$STR_EXPEDEN_LAND_INFOSTAND_V1_IDAP_F_ATTRIBUTESSELECT";
				control="Combo";
				expression="_this setObjectTextureGlobal [0, _value]";
				defaultValue="'\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_distinction_CA.paa'";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="$STR_A3_ORANGE_CFGHINTS_IHL_DISTINCTION_DISPLAYNAME";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_distinction_CA.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_distinction_CA.paa";
					};
					class 2
					{
						name="$STR_expEden_Leaflet_05_New_IDAP_IHL_F_select02";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_good_faith_CA.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_good_faith_CA.paa";
					};
					class 3
					{
						name="$STR_A3_ORANGE_CFGHINTS_INTERNATIONALHUMANITARIANLAW_DISPLAYNAME";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_ihl_CA.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_ihl_CA.paa";
					};
					class 4
					{
						name="$STR_expEden_Leaflet_05_New_IDAP_IHL_F_select04";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_military_necessity_CA.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_military_necessity_CA.paa";
					};
					class 5
					{
						name="$STR_expEden_Leaflet_05_New_IDAP_IHL_F_select05";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_mine_hunt_CA.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_mine_hunt_CA.paa";
					};
					class 6
					{
						name="$STR_A3_ORANGE_FACTION_IDAP_MARKER";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_open_day_CA.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_open_day_CA.paa";
					};
					class 7
					{
						name="$STR_A3_ORANGE_CFGHINTS_IHL_PRECAUTION_DISPLAYNAME";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_precaution_CA.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_precaution_CA.paa";
					};
					class 8
					{
						name="$STR_expEden_Leaflet_05_New_IDAP_IHL_F_select08";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_prisoners_CA.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_prisoners_CA.paa";
					};
					class 9
					{
						name="$STR_A3_ORANGE_CFGHINTS_IHL_PROPORTIONALITY_DISPLAYNAME";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_proportionality_CA.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_proportionality_CA.paa";
					};
					class 10
					{
						name="$STR_expEden_Leaflet_05_New_IDAP_IHL_F_select10";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_showcase_low_CA.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_showcase_low_CA.paa";
					};
					class 11
					{
						name="$STR_expEden_Leaflet_05_New_IDAP_IHL_F_select11";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_unnecessary_suffering_CA.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_unnecessary_suffering_CA.paa";
					};
				};
			};
		};
	};
	class Leaflet_05_Old_IDAP_IHL_radnom_F: Leaflet_05_Old_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Leaflet_05_Old_IDAP_IHL_radnom_F.jpg";
		_generalMacro="Leaflet_05_Old_IDAP_IHL_radnom_F";
		displayName="$STR_A3_Globe_CfgVehicles_Leaflet_05_Old_IDAP_IHL_radnom_F0";
		editorSubcategory="EdSubcat_Advertisements";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_distinction_CA.paa"
		};
		class EventHandlers
		{
			init="(_this # 0) call compile preprocessFileLineNumbers '\A3\weapons_f_expEden\Items\scripts\randomize_IHL.sqf'";
		};
	};
	class Leaflet_05_IDAP_IHL_F: Leaflet_05_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Leaflet_05_IDAP_IHL_F.jpg";
		_generalMacro="Leaflet_05_IDAP_IHL_F";
		displayName="$STR_A3_Globe_CfgVehicles_Leaflet_05_IDAP_IHL_F0";
		editorSubcategory="EdSubcat_Advertisements";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_distinction_CA.paa"
		};
		class Attributes
		{
			class SwitchTexture
			{
				property="SwitchTexture";
				displayName="$STR_EXPEDEN_LAND_INFOSTAND_V1_IDAP_F_ATTRIBUTESSELECT";
				control="Combo";
				expression="_this setObjectTextureGlobal [0, _value]";
				defaultValue="'\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_distinction_CA.paa'";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="$STR_A3_ORANGE_CFGHINTS_IHL_DISTINCTION_DISPLAYNAME";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_distinction_CA.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_distinction_CA.paa";
					};
					class 2
					{
						name="$STR_expEden_Leaflet_05_New_IDAP_IHL_F_select02";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_good_faith_CA.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_good_faith_CA.paa";
					};
					class 3
					{
						name="$STR_A3_ORANGE_CFGHINTS_INTERNATIONALHUMANITARIANLAW_DISPLAYNAME";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_ihl_CA.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_ihl_CA.paa";
					};
					class 4
					{
						name="$STR_expEden_Leaflet_05_New_IDAP_IHL_F_select04";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_military_necessity_CA.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_military_necessity_CA.paa";
					};
					class 5
					{
						name="$STR_expEden_Leaflet_05_New_IDAP_IHL_F_select05";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_mine_hunt_CA.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_mine_hunt_CA.paa";
					};
					class 6
					{
						name="$STR_A3_ORANGE_FACTION_IDAP_MARKER";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_open_day_CA.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_open_day_CA.paa";
					};
					class 7
					{
						name="$STR_A3_ORANGE_CFGHINTS_IHL_PRECAUTION_DISPLAYNAME";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_precaution_CA.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_precaution_CA.paa";
					};
					class 8
					{
						name="$STR_expEden_Leaflet_05_New_IDAP_IHL_F_select08";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_prisoners_CA.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_prisoners_CA.paa";
					};
					class 9
					{
						name="$STR_A3_ORANGE_CFGHINTS_IHL_PROPORTIONALITY_DISPLAYNAME";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_proportionality_CA.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_proportionality_CA.paa";
					};
					class 10
					{
						name="$STR_expEden_Leaflet_05_New_IDAP_IHL_F_select10";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_showcase_low_CA.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_showcase_low_CA.paa";
					};
					class 11
					{
						name="$STR_expEden_Leaflet_05_New_IDAP_IHL_F_select11";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_unnecessary_suffering_CA.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_unnecessary_suffering_CA.paa";
					};
				};
			};
		};
	};
	class Leaflet_05_IDAP_IHL_radnom_F: Leaflet_05_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Leaflet_05_IDAP_IHL_radnom_F.jpg";
		_generalMacro="Leaflet_05_IDAP_IHL_radnom_F";
		displayName="$STR_A3_Globe_CfgVehicles_Leaflet_05_IDAP_IHL_radnom_F0";
		editorSubcategory="EdSubcat_Advertisements";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_orange\Data\Img\Faction_IDAP\leaflet_distinction_CA.paa"
		};
		class EventHandlers
		{
			init="(_this # 0) call compile preprocessFileLineNumbers '\A3\weapons_f_expEden\Items\scripts\randomize_IHL.sqf'";
		};
	};
	class Leaflet_05_BenjaminHope_F: Leaflet_05_F
	{
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Leaflet_05_BenjaminHope_F.jpg";
		_generalMacro="Leaflet_05_BenjaminHope_F";
		DLC="Oldman";
		displayName="$STR_A3_expEden_CfgVehicles_Leaflet_05_BenjaminHope_F0";
		editorSubcategory="EdSubcat_Advertisements";
		hiddenSelectionsTextures[]=
		{
			"\A3\Missions_F_Oldman\Data\img\leaflets\hope_leaflet_ca.paa"
		};
	};
	class Leaflet_05_New_BenjaminHope_F: Leaflet_05_New_F
	{
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Leaflet_05_New_BenjaminHope_F.jpg";
		_generalMacro="Leaflet_05_New_BenjaminHope_F";
		DLC="Oldman";
		displayName="$STR_A3_expEden_CfgVehicles_Leaflet_05_New_BenjaminHope_F0";
		editorSubcategory="EdSubcat_Advertisements";
		hiddenSelectionsTextures[]=
		{
			"\A3\Missions_F_Oldman\Data\img\leaflets\hope_leaflet_ca.paa"
		};
	};
	class Leaflet_05_Old_BenjaminHope_F: Leaflet_05_Old_F
	{
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Leaflet_05_Old_BenjaminHope_F.jpg";
		_generalMacro="Leaflet_05_Old_BenjaminHope_F";
		DLC="Oldman";
		displayName="$STR_A3_expEden_CfgVehicles_Leaflet_05_Old_BenjaminHope_F0";
		editorSubcategory="EdSubcat_Advertisements";
		hiddenSelectionsTextures[]=
		{
			"\A3\Missions_F_Oldman\Data\img\leaflets\hope_leaflet_ca.paa"
		};
	};
	class Leaflet_05_Crime_F: Leaflet_05_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Leaflet_05_Crime_F.jpg";
		_generalMacro="Leaflet_05_Crime_F";
		DLC="Oldman";
		displayName="$STR_A3_expEden_CfgVehicles_Leaflet_05_Crime_F0";
		editorSubcategory="EdSubcat_Advertisements";
		hiddenSelectionsTextures[]=
		{
			"\A3\Missions_F_Oldman\Data\img\leaflets\dead_body_note_ca.paa"
		};
		class EventHandlers
		{
			init="[(_this # 0), 'a3\Missions_F_Oldman\Data\img\leaflets\dead_body_note_ca.paa', localize 'str_a3_om_leaflet_colaborator'] call BIS_fnc_initInspectable";
		};
	};
	class Leaflet_05_New_Crime_F: Leaflet_05_New_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Leaflet_05_New_Crime_F.jpg";
		_generalMacro="Leaflet_05_New_Crime_F";
		DLC="Oldman";
		displayName="$STR_A3_expEden_CfgVehicles_Leaflet_05_New_Crime_F0";
		editorSubcategory="EdSubcat_Advertisements";
		hiddenSelectionsTextures[]=
		{
			"\A3\Missions_F_Oldman\Data\img\leaflets\dead_body_note_ca.paa"
		};
		class EventHandlers
		{
			init="[(_this # 0), 'a3\Missions_F_Oldman\Data\img\leaflets\dead_body_note_ca.paa', localize 'str_a3_om_leaflet_colaborator'] call BIS_fnc_initInspectable";
		};
	};
	class Leaflet_05_Old_Crime_F: Leaflet_05_Old_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Leaflet_05_Old_Crime_F.jpg";
		_generalMacro="Leaflet_05_Old_Crime_F";
		DLC="Oldman";
		displayName="$STR_A3_expEden_CfgVehicles_Leaflet_05_Old_Crime_F0";
		editorSubcategory="EdSubcat_Advertisements";
		hiddenSelectionsTextures[]=
		{
			"\A3\Missions_F_Oldman\Data\img\leaflets\dead_body_note_ca.paa"
		};
		class EventHandlers
		{
			init="[(_this # 0), 'a3\Missions_F_Oldman\Data\img\leaflets\dead_body_note_ca.paa', localize 'str_a3_om_leaflet_colaborator'] call BIS_fnc_initInspectable";
		};
	};
	class Leaflet_05_announcements_01_F: Leaflet_05_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Leaflet_05_announcements_01_F.jpg";
		_generalMacro="Leaflet_05_announcements_01_F";
		displayName="$STR_A3_expEden_Leaflet_05_announcements_01_F0";
		editorSubcategory="EdSubcat_Advertisements";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_orange\data\img\orange_compositions\tree\treenote_01_co.paa"
		};
		class Attributes
		{
			class SwitchTexture
			{
				property="SwitchTexture";
				displayName="$STR_A3_expEden_Leaflet_05_announcements_Attributes_SwitchTexture_displayName_F0";
				control="Combo";
				expression="_this setObjectTextureGlobal [0, _value]";
				defaultValue="'\A3\missions_f_orange\data\img\orange_compositions\tree\treenote_01_co.paa'";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="$STR_A3_expEden_Leaflet_05_announcements_Attributes_SwitchTexture_values_F0";
						value="\A3\missions_f_orange\data\img\orange_compositions\tree\treenote_01_co.paa";
						picture="\A3\missions_f_orange\data\img\orange_compositions\tree\treenote_01_co.paa";
					};
					class 2
					{
						name="$STR_A3_greekMen_lastNames15";
						value="\A3\missions_f_orange\data\img\orange_compositions\tree\treenote_02_co.paa";
						picture="\A3\missions_f_orange\data\img\orange_compositions\tree\treenote_02_co.paa";
					};
					class 3
					{
						name="$STR_A3_rscdisplaywelcome_orange_pare_list11_title_plain";
						value="\A3\missions_f_orange\data\img\orange_compositions\tree\treenote_03_co.paa";
						picture="\A3\missions_f_orange\data\img\orange_compositions\tree\treenote_03_co.paa";
					};
				};
			};
		};
	};
	class Leaflet_05_New_announcements_01_F: Leaflet_05_New_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Leaflet_05_New_announcements_01_F.jpg";
		_generalMacro="Leaflet_05_New_announcements_01_F";
		displayName="$STR_A3_expEden_Leaflet_05_New_announcements_01_F0";
		editorSubcategory="EdSubcat_Advertisements";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_orange\data\img\orange_compositions\tree\treenote_01_co.paa"
		};
		class Attributes
		{
			class SwitchTexture
			{
				property="SwitchTexture";
				displayName="$STR_A3_expEden_Leaflet_05_announcements_Attributes_SwitchTexture_displayName_F0";
				control="Combo";
				expression="_this setObjectTextureGlobal [0, _value]";
				defaultValue="'\A3\missions_f_orange\data\img\orange_compositions\tree\treenote_01_co.paa'";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="$STR_A3_expEden_Leaflet_05_announcements_Attributes_SwitchTexture_values_F0";
						value="\A3\missions_f_orange\data\img\orange_compositions\tree\treenote_01_co.paa";
						picture="\A3\missions_f_orange\data\img\orange_compositions\tree\treenote_01_co.paa";
					};
					class 2
					{
						name="$STR_A3_greekMen_lastNames15";
						value="\A3\missions_f_orange\data\img\orange_compositions\tree\treenote_02_co.paa";
						picture="\A3\missions_f_orange\data\img\orange_compositions\tree\treenote_02_co.paa";
					};
					class 3
					{
						name="$STR_A3_rscdisplaywelcome_orange_pare_list11_title_plain";
						value="\A3\missions_f_orange\data\img\orange_compositions\tree\treenote_03_co.paa";
						picture="\A3\missions_f_orange\data\img\orange_compositions\tree\treenote_03_co.paa";
					};
				};
			};
		};
	};
	class Leaflet_05_Old_announcements_01_F: Leaflet_05_Old_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Leaflet_05_Old_announcements_01_F.jpg";
		_generalMacro="Leaflet_05_Old_announcements_01_F";
		displayName="$STR_A3_expEden_Leaflet_05_Old_announcements_01_F0";
		editorSubcategory="EdSubcat_Advertisements";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_orange\data\img\orange_compositions\tree\treenote_01_co.paa"
		};
		class Attributes
		{
			class SwitchTexture
			{
				property="SwitchTexture";
				displayName="$STR_A3_expEden_Leaflet_05_announcements_Attributes_SwitchTexture_displayName_F0";
				control="Combo";
				expression="_this setObjectTextureGlobal [0, _value]";
				defaultValue="'\A3\missions_f_orange\data\img\orange_compositions\tree\treenote_01_co.paa'";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="$STR_A3_expEden_Leaflet_05_announcements_Attributes_SwitchTexture_values_F0";
						value="\A3\missions_f_orange\data\img\orange_compositions\tree\treenote_01_co.paa";
						picture="\A3\missions_f_orange\data\img\orange_compositions\tree\treenote_01_co.paa";
					};
					class 2
					{
						name="$STR_A3_greekMen_lastNames15";
						value="\A3\missions_f_orange\data\img\orange_compositions\tree\treenote_02_co.paa";
						picture="\A3\missions_f_orange\data\img\orange_compositions\tree\treenote_02_co.paa";
					};
					class 3
					{
						name="$STR_A3_rscdisplaywelcome_orange_pare_list11_title_plain";
						value="\A3\missions_f_orange\data\img\orange_compositions\tree\treenote_03_co.paa";
						picture="\A3\missions_f_orange\data\img\orange_compositions\tree\treenote_03_co.paa";
					};
				};
			};
		};
	};
	class Leaflet_05_announcements_01_random_F: Leaflet_05_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Leaflet_05_announcements_01_random_F.jpg";
		_generalMacro="Leaflet_05_announcements_01_random_F";
		displayName="$STR_A3_Globe_CfgVehicles_Leaflet_05_announcements_01_random_F0";
		editorSubcategory="EdSubcat_Advertisements";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_orange\data\img\orange_compositions\tree\treenote_01_co.paa"
		};
		class EventHandlers
		{
			init="(_this # 0) call compile preprocessFileLineNumbers '\A3\weapons_f_expEden\Items\scripts\randomize_Announcements.sqf'";
		};
	};
	class Leaflet_05_New_announcements_01_random_F: Leaflet_05_New_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Leaflet_05_New_announcements_01_random_F.jpg";
		_generalMacro="Leaflet_05_New_announcements_01_random_F";
		displayName="$STR_A3_Globe_CfgVehicles_Leaflet_05_New_announcements_01_random_F0";
		editorSubcategory="EdSubcat_Advertisements";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_orange\data\img\orange_compositions\tree\treenote_01_co.paa"
		};
		class EventHandlers
		{
			init="(_this # 0) call compile preprocessFileLineNumbers '\A3\weapons_f_expEden\Items\scripts\randomize_Announcements.sqf'";
		};
	};
	class Leaflet_05_Old_announcements_01_random_F: Leaflet_05_Old_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Leaflet_05_Old_announcements_01_F.jpg";
		_generalMacro="Leaflet_05_Old_announcements_01_F";
		displayName="$STR_A3_Globe_CfgVehicles_Leaflet_05_Old_announcements_01_F0";
		editorSubcategory="EdSubcat_Advertisements";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_orange\data\img\orange_compositions\tree\treenote_01_co.paa"
		};
		class EventHandlers
		{
			init="(_this # 0) call compile preprocessFileLineNumbers '\A3\weapons_f_expEden\Items\scripts\randomize_Announcements.sqf'";
		};
	};
	class Leaflet_05_New_ChildDrawings_F: Leaflet_05_New_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Leaflet_05_New_ChildDrawings_F.jpg";
		_generalMacro="Leaflet_05_New_ChildDrawings_F";
		displayName="$STR_A3_Globe_CfgVehicles_Leaflet_05_New_ChildDrawings_F0";
		editorSubcategory="EdSubcat_Sports";
		vehicleClass="Objects_Sports";
		hiddenSelectionsTextures[]=
		{
			"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_01_CO.paa"
		};
		class Attributes
		{
			class SwitchTexture
			{
				property="SwitchTexture";
				displayName="$STR_A3_expEden_Leaflet_05_announcements_Attributes_SwitchTexture_displayName_F0";
				control="Combo";
				expression="_this setObjectTextureGlobal [0, _value]";
				defaultValue="'\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_01_CO.paa'";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="$STR_expEden_Leaflet_New_childDrawings_01_F2";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_01_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_01_CO.paa";
					};
					class 2
					{
						name="$STR_expEden_Leaflet_New_childDrawings_01_F2";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_01_dirty_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_01_dirty_CO.paa";
					};
					class 3
					{
						name="$STR_dn_tank";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_02_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_02_CO.paa";
					};
					class 4
					{
						name="$STR_word_allGroup";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_03_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_03_CO.paa";
					};
					class 5
					{
						name="$STR_dn_animal";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_04_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_04_CO.paa";
					};
					class 6
					{
						name="$STR_expEden_Leaflet_New_childDrawings_01_F3";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_05_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_05_CO.paa";
					};
					class 7
					{
						name="$STR_expEden_Leaflet_New_childDrawings_01_F4";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_06_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_06_CO.paa";
					};
					class 8
					{
						name="$STR_dn_woman";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_D_01_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_D_01_CO.paa";
					};
					class 9
					{
						name="$STR_A3_showcase_arma_mission_name";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_J_01_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_J_01_CO.paa";
					};
					class 10
					{
						name="$STR_dn_airPlane";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_J_02_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_J_02_CO.paa";
					};
					class 11
					{
						name="$STR_dn_animals";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_J_03_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_J_03_CO.paa";
					};
					class 12
					{
						name="$STR_dn_men";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_JC_01_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_JC_01_CO.paa";
					};
					class 13
					{
						name="$STR_expEden_Leaflet_New_childDrawings_01_F5";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_JC_02_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_JC_02_CO.paa";
					};
					class 14
					{
						name="$STR_dn_rain";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_01_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_01_CO.paa";
					};
					class 15
					{
						name="$STR_expEden_loc_sdv";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_02_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_02_CO.paa";
					};
					class 16
					{
						name="$STR_civilian";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_03_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_03_CO.paa";
					};
					class 17
					{
						name="$STR_dn_animals";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_04_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_04_CO.paa";
					};
					class 18
					{
						name="$STR_dn_house";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_05_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_05_CO.paa";
					};
					class 19
					{
						name="$STR_A3_cfgVehicles_land_slide_F0";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_06_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_06_CO.paa";
					};
					class 20
					{
						name="$STR_A3_cfgMarkers_loc_fortress";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_07_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_07_CO.paa";
					};
					class 21
					{
						name="$STR_dn_house";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_08_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_08_CO.paa";
					};
					class 22
					{
						name="$STR_dn_woman";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_09_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_09_CO.paa";
					};
					class 23
					{
						name="$STR_expEden_Leaflet_New_childDrawings_01_F7";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_10_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_10_CO.paa";
					};
					class 24
					{
						name="$STR_A3_I_C_soldier_para_2_F0";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_Kor_01_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_Kor_01_CO.paa";
					};
					class 25
					{
						name="$STR_A3_cfgVehicles_fin_base_F0";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\c4_p_01_co.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\c4_p_01_co.paa";
					};
					class 26
					{
						name="$STR_A3_mdl_sites_disp_animal_poultry";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\c4_p_02_co.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\c4_p_02_co.paa";
					};
					class 27
					{
						name="$STR_expEden_Leaflet_New_childDrawings_01_F5";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\c4_p_03_co.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\c4_p_03_co.paa";
					};
					class 28
					{
						name="$STR_A3_cfgVehicles_land_suitcase_F0";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\c4_p_04_co.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\c4_p_04_co.paa";
					};
					class 29
					{
						name="$STR_dn_helicopter";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_01_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_01_CO.paa";
					};
					class 30
					{
						name="$STR_expEden_Leaflet_New_childDrawings_01_F14";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_02_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_02_CO.paa";
					};
					class 31
					{
						name="$STR_A3_CfgVehicles_ModuleSlingload_F_0";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_03_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_03_CO.paa";
					};
					class 32
					{
						name="$STR_A3_a_out_mission_name";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_04_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_04_CO.paa";
					};
					class 33
					{
						name="$STR_expEden_Leaflet_New_childDrawings_01_F8";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_05_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_05_CO.paa";
					};
					class 34
					{
						name="$str_a3_objecttype_category_soldier";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_06_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_06_CO.paa";
					};
					class 35
					{
						name="$STR_expEden_Leaflet_New_childDrawings_01_F10";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_07_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_07_CO.paa";
					};
					class 36
					{
						name="$STR_expEden_Leaflet_New_childDrawings_01_F11";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_08_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_08_CO.paa";
					};
					class 37
					{
						name="$STR_A3_orange_faction_idap_cfgDebriefing_friendlyFire_title";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_09_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_09_CO.paa";
					};
					class 38
					{
						name="$STR_THIS_IS_WAR";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_10_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_10_CO.paa";
					};
					class 39
					{
						name="$STR_A3_wl_airdrop_target";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_11_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_11_CO.paa";
					};
					class 40
					{
						name="$STR_A3_orange_cfgHints_uxo_displayName";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_T_01_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_T_01_CO.paa";
					};
					class 41
					{
						name="$STR_expEden_Leaflet_New_childDrawings_01_F12";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_T_02_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_T_02_CO.paa";
					};
					class 42
					{
						name="$STR_expEden_Leaflet_New_childDrawings_01_F13";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_T_03_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_T_03_CO.paa";
					};
					class 43
					{
						name="$STR_A3_cfgEditorSubcategories_edSubcat_beach0";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_T_04_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_T_04_CO.paa";
					};
				};
			};
		};
	};
	class Leaflet_05_New_ChildDrawings_radnom_F: Leaflet_05_New_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Leaflet_05_New_ChildDrawings_radnom_F.jpg";
		_generalMacro="Leaflet_05_New_ChildDrawings_radnom_F";
		displayName="$STR_A3_Globe_CfgVehicles_Leaflet_05_New_ChildDrawings_radnom_F0";
		editorSubcategory="EdSubcat_Sports";
		vehicleClass="Objects_Sports";
		class EventHandlers
		{
			init="(_this # 0) call compile preprocessFileLineNumbers '\A3\weapons_f_expEden\Items\scripts\randomize_ChildDrawings.sqf'";
		};
	};
	class Leaflet_05_Old_ChildDrawings_F: Leaflet_05_Old_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Leaflet_05_Old_ChildDrawings_F.jpg";
		_generalMacro="Leaflet_05_Old_ChildDrawings_F";
		displayName="$STR_A3_Globe_CfgVehicles_Leaflet_05_Old_ChildDrawings_F0";
		editorSubcategory="EdSubcat_Sports";
		vehicleClass="Objects_Sports";
		hiddenSelectionsTextures[]=
		{
			"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_01_CO.paa"
		};
		class Attributes
		{
			class SwitchTexture
			{
				property="SwitchTexture";
				displayName="$STR_A3_expEden_Leaflet_05_announcements_Attributes_SwitchTexture_displayName_F0";
				control="Combo";
				expression="_this setObjectTextureGlobal [0, _value]";
				defaultValue="'\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_01_CO.paa'";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="$STR_expEden_Leaflet_New_childDrawings_01_F2";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_01_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_01_CO.paa";
					};
					class 2
					{
						name="$STR_expEden_Leaflet_New_childDrawings_01_F2";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_01_dirty_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_01_dirty_CO.paa";
					};
					class 3
					{
						name="$STR_dn_tank";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_02_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_02_CO.paa";
					};
					class 4
					{
						name="$STR_word_allGroup";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_03_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_03_CO.paa";
					};
					class 5
					{
						name="$STR_dn_animal";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_04_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_04_CO.paa";
					};
					class 6
					{
						name="$STR_expEden_Leaflet_New_childDrawings_01_F3";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_05_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_05_CO.paa";
					};
					class 7
					{
						name="$STR_expEden_Leaflet_New_childDrawings_01_F4";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_06_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_06_CO.paa";
					};
					class 8
					{
						name="$STR_dn_woman";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_D_01_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_D_01_CO.paa";
					};
					class 9
					{
						name="$STR_A3_showcase_arma_mission_name";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_J_01_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_J_01_CO.paa";
					};
					class 10
					{
						name="$STR_dn_airPlane";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_J_02_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_J_02_CO.paa";
					};
					class 11
					{
						name="$STR_dn_animals";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_J_03_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_J_03_CO.paa";
					};
					class 12
					{
						name="$STR_dn_men";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_JC_01_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_JC_01_CO.paa";
					};
					class 13
					{
						name="$STR_expEden_Leaflet_New_childDrawings_01_F5";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_JC_02_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_JC_02_CO.paa";
					};
					class 14
					{
						name="$STR_dn_rain";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_01_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_01_CO.paa";
					};
					class 15
					{
						name="$STR_expEden_loc_sdv";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_02_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_02_CO.paa";
					};
					class 16
					{
						name="$STR_civilian";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_03_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_03_CO.paa";
					};
					class 17
					{
						name="$STR_dn_animals";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_04_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_04_CO.paa";
					};
					class 18
					{
						name="$STR_dn_house";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_05_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_05_CO.paa";
					};
					class 19
					{
						name="$STR_A3_cfgVehicles_land_slide_F0";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_06_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_06_CO.paa";
					};
					class 20
					{
						name="$STR_A3_cfgMarkers_loc_fortress";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_07_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_07_CO.paa";
					};
					class 21
					{
						name="$STR_dn_house";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_08_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_08_CO.paa";
					};
					class 22
					{
						name="$STR_dn_woman";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_09_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_09_CO.paa";
					};
					class 23
					{
						name="$STR_expEden_Leaflet_New_childDrawings_01_F7";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_10_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_10_CO.paa";
					};
					class 24
					{
						name="$STR_A3_I_C_soldier_para_2_F0";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_Kor_01_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_Kor_01_CO.paa";
					};
					class 25
					{
						name="$STR_A3_cfgVehicles_fin_base_F0";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\c4_p_01_co.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\c4_p_01_co.paa";
					};
					class 26
					{
						name="$STR_A3_mdl_sites_disp_animal_poultry";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\c4_p_02_co.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\c4_p_02_co.paa";
					};
					class 27
					{
						name="$STR_expEden_Leaflet_New_childDrawings_01_F5";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\c4_p_03_co.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\c4_p_03_co.paa";
					};
					class 28
					{
						name="$STR_A3_cfgVehicles_land_suitcase_F0";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\c4_p_04_co.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\c4_p_04_co.paa";
					};
					class 29
					{
						name="$STR_dn_helicopter";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_01_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_01_CO.paa";
					};
					class 30
					{
						name="$STR_expEden_Leaflet_New_childDrawings_01_F14";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_02_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_02_CO.paa";
					};
					class 31
					{
						name="$STR_A3_CfgVehicles_ModuleSlingload_F_0";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_03_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_03_CO.paa";
					};
					class 32
					{
						name="$STR_A3_a_out_mission_name";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_04_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_04_CO.paa";
					};
					class 33
					{
						name="$STR_expEden_Leaflet_New_childDrawings_01_F8";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_05_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_05_CO.paa";
					};
					class 34
					{
						name="$str_a3_objecttype_category_soldier";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_06_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_06_CO.paa";
					};
					class 35
					{
						name="$STR_expEden_Leaflet_New_childDrawings_01_F10";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_07_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_07_CO.paa";
					};
					class 36
					{
						name="$STR_expEden_Leaflet_New_childDrawings_01_F11";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_08_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_08_CO.paa";
					};
					class 37
					{
						name="$STR_A3_orange_faction_idap_cfgDebriefing_friendlyFire_title";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_09_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_09_CO.paa";
					};
					class 38
					{
						name="$STR_THIS_IS_WAR";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_10_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_10_CO.paa";
					};
					class 39
					{
						name="$STR_A3_wl_airdrop_target";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_11_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_11_CO.paa";
					};
					class 40
					{
						name="$STR_A3_orange_cfgHints_uxo_displayName";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_T_01_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_T_01_CO.paa";
					};
					class 41
					{
						name="$STR_expEden_Leaflet_New_childDrawings_01_F12";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_T_02_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_T_02_CO.paa";
					};
					class 42
					{
						name="$STR_expEden_Leaflet_New_childDrawings_01_F13";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_T_03_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_T_03_CO.paa";
					};
					class 43
					{
						name="$STR_A3_cfgEditorSubcategories_edSubcat_beach0";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_T_04_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_T_04_CO.paa";
					};
				};
			};
		};
	};
	class Leaflet_05_Old_ChildDrawings_radnom_F: Leaflet_05_Old_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Leaflet_05_Old_ChildDrawings_radnom_F.jpg";
		_generalMacro="Leaflet_05_Old_ChildDrawings_radnom_F";
		displayName="$STR_A3_Globe_CfgVehicles_Leaflet_05_Old_ChildDrawings_radnom_F0";
		editorSubcategory="EdSubcat_Sports";
		vehicleClass="Objects_Sports";
		class EventHandlers
		{
			init="(_this # 0) call compile preprocessFileLineNumbers '\A3\weapons_f_expEden\Items\scripts\randomize_ChildDrawings.sqf'";
		};
	};
	class Leaflet_05_ChildDrawings_F: Leaflet_05_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Leaflet_05_ChildDrawings_F.jpg";
		_generalMacro="Leaflet_05_ChildDrawings_F";
		displayName="$STR_A3_Globe_CfgVehicles_Leaflet_05_ChildDrawings_F0";
		editorSubcategory="EdSubcat_Sports";
		vehicleClass="Objects_Sports";
		hiddenSelectionsTextures[]=
		{
			"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_01_CO.paa"
		};
		class Attributes
		{
			class SwitchTexture
			{
				property="SwitchTexture";
				displayName="$STR_A3_expEden_Leaflet_05_announcements_Attributes_SwitchTexture_displayName_F0";
				control="Combo";
				expression="_this setObjectTextureGlobal [0, _value]";
				defaultValue="'\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_01_CO.paa'";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="$STR_expEden_Leaflet_New_childDrawings_01_F2";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_01_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_01_CO.paa";
					};
					class 2
					{
						name="$STR_expEden_Leaflet_New_childDrawings_01_F2";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_01_dirty_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_01_dirty_CO.paa";
					};
					class 3
					{
						name="$STR_dn_tank";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_02_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_02_CO.paa";
					};
					class 4
					{
						name="$STR_word_allGroup";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_03_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_03_CO.paa";
					};
					class 5
					{
						name="$STR_dn_animal";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_04_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_04_CO.paa";
					};
					class 6
					{
						name="$STR_expEden_Leaflet_New_childDrawings_01_F3";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_05_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_05_CO.paa";
					};
					class 7
					{
						name="$STR_expEden_Leaflet_New_childDrawings_01_F4";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_06_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_06_CO.paa";
					};
					class 8
					{
						name="$STR_dn_woman";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_D_01_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_D_01_CO.paa";
					};
					class 9
					{
						name="$STR_A3_showcase_arma_mission_name";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_J_01_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_J_01_CO.paa";
					};
					class 10
					{
						name="$STR_dn_airPlane";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_J_02_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_J_02_CO.paa";
					};
					class 11
					{
						name="$STR_dn_animals";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_J_03_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_J_03_CO.paa";
					};
					class 12
					{
						name="$STR_dn_men";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_JC_01_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_JC_01_CO.paa";
					};
					class 13
					{
						name="$STR_expEden_Leaflet_New_childDrawings_01_F5";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_JC_02_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_JC_02_CO.paa";
					};
					class 14
					{
						name="$STR_dn_rain";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_01_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_01_CO.paa";
					};
					class 15
					{
						name="$STR_expEden_loc_sdv";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_02_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_02_CO.paa";
					};
					class 16
					{
						name="$STR_civilian";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_03_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_03_CO.paa";
					};
					class 17
					{
						name="$STR_dn_animals";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_04_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_04_CO.paa";
					};
					class 18
					{
						name="$STR_dn_house";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_05_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_05_CO.paa";
					};
					class 19
					{
						name="$STR_A3_cfgVehicles_land_slide_F0";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_06_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_06_CO.paa";
					};
					class 20
					{
						name="$STR_A3_cfgMarkers_loc_fortress";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_07_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_07_CO.paa";
					};
					class 21
					{
						name="$STR_dn_house";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_08_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_08_CO.paa";
					};
					class 22
					{
						name="$STR_dn_woman";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_09_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_09_CO.paa";
					};
					class 23
					{
						name="$STR_expEden_Leaflet_New_childDrawings_01_F7";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_10_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_10_CO.paa";
					};
					class 24
					{
						name="$STR_A3_I_C_soldier_para_2_F0";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_Kor_01_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_Kor_01_CO.paa";
					};
					class 25
					{
						name="$STR_A3_cfgVehicles_fin_base_F0";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\c4_p_01_co.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\c4_p_01_co.paa";
					};
					class 26
					{
						name="$STR_A3_mdl_sites_disp_animal_poultry";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\c4_p_02_co.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\c4_p_02_co.paa";
					};
					class 27
					{
						name="$STR_expEden_Leaflet_New_childDrawings_01_F5";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\c4_p_03_co.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\c4_p_03_co.paa";
					};
					class 28
					{
						name="$STR_A3_cfgVehicles_land_suitcase_F0";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\c4_p_04_co.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\c4_p_04_co.paa";
					};
					class 29
					{
						name="$STR_dn_helicopter";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_01_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_01_CO.paa";
					};
					class 30
					{
						name="$STR_expEden_Leaflet_New_childDrawings_01_F14";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_02_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_02_CO.paa";
					};
					class 31
					{
						name="$STR_A3_CfgVehicles_ModuleSlingload_F_0";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_03_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_03_CO.paa";
					};
					class 32
					{
						name="$STR_A3_a_out_mission_name";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_04_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_04_CO.paa";
					};
					class 33
					{
						name="$STR_expEden_Leaflet_New_childDrawings_01_F8";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_05_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_05_CO.paa";
					};
					class 34
					{
						name="$str_a3_objecttype_category_soldier";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_06_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_06_CO.paa";
					};
					class 35
					{
						name="$STR_expEden_Leaflet_New_childDrawings_01_F10";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_07_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_07_CO.paa";
					};
					class 36
					{
						name="$STR_expEden_Leaflet_New_childDrawings_01_F11";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_08_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_08_CO.paa";
					};
					class 37
					{
						name="$STR_A3_orange_faction_idap_cfgDebriefing_friendlyFire_title";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_09_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_09_CO.paa";
					};
					class 38
					{
						name="$STR_THIS_IS_WAR";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_10_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_10_CO.paa";
					};
					class 39
					{
						name="$STR_A3_wl_airdrop_target";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_11_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_11_CO.paa";
					};
					class 40
					{
						name="$STR_A3_orange_cfgHints_uxo_displayName";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_T_01_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_T_01_CO.paa";
					};
					class 41
					{
						name="$STR_expEden_Leaflet_New_childDrawings_01_F12";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_T_02_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_T_02_CO.paa";
					};
					class 42
					{
						name="$STR_expEden_Leaflet_New_childDrawings_01_F13";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_T_03_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_T_03_CO.paa";
					};
					class 43
					{
						name="$STR_A3_cfgEditorSubcategories_edSubcat_beach0";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_T_04_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_T_04_CO.paa";
					};
				};
			};
		};
	};
	class Leaflet_05_ChildDrawings_radnom_F: Leaflet_05_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Leaflet_05_ChildDrawings_radnom_F.jpg";
		_generalMacro="Leaflet_05_ChildDrawings_radnom_F";
		displayName="$STR_A3_Globe_CfgVehicles_Leaflet_05_ChildDrawings_radnom_F0";
		editorSubcategory="EdSubcat_Sports";
		vehicleClass="Objects_Sports";
		class EventHandlers
		{
			init="(_this # 0) call compile preprocessFileLineNumbers '\A3\weapons_f_expEden\Items\scripts\randomize_ChildDrawings.sqf'";
		};
	};
	class Leaflet_05_New_Drawings_F: Leaflet_05_New_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Leaflet_05_New_Drawings_F.jpg";
		_generalMacro="Leaflet_05_New_Drawings_F";
		displayName="$STR_A3_Globe_CfgVehicles_Leaflet_05_New_Drawings_F0";
		editorSubcategory="EdSubcat_Sports";
		vehicleClass="Objects_Sports";
		hiddenSelectionsTextures[]=
		{
			"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_01_CO.paa"
		};
		class Attributes
		{
			class SwitchTexture
			{
				property="SwitchTexture";
				displayName="$STR_A3_expEden_Leaflet_05_announcements_Attributes_SwitchTexture_displayName_F0";
				control="Combo";
				expression="_this setObjectTextureGlobal [0, _value]";
				defaultValue="'\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_01_CO.paa'";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="$STR_A3_cfgVehicles_land_wreck_car2_f0";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_01_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_01_CO.paa";
					};
					class 2
					{
						name="$STR_expEden_Leaflet_New_Drawings_01_F2";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_02_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_02_CO.paa";
					};
					class 3
					{
						name="$STR_A3_cfgEditorSubcategories_edSubcat_rocks0";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_03_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_03_CO.paa";
					};
					class 4
					{
						name="$STR_dn_tree";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_04_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_04_CO.paa";
					};
					class 5
					{
						name="$STR_A3_malden_h_montchauve0";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_05_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_05_CO.paa";
					};
					class 6
					{
						name="$STR_A3_CFGVEHICLES_LAND_CASTLE_STEP_F1";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_06_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_06_CO.paa";
					};
					class 7
					{
						name="$STR_expEden_Leaflet_New_Drawings_01_F3";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_07_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_07_CO.paa";
					};
					class 8
					{
						name="$STR_misc_campfire";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_08_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_08_CO.paa";
					};
					class 9
					{
						name="$STR_A3_greekmen_firstnames32";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_09_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_09_CO.paa";
					};
				};
			};
		};
	};
	class Leaflet_05_New_Drawings_radnom_F: Leaflet_05_New_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Leaflet_05_New_Drawings_radnom_F.jpg";
		_generalMacro="Leaflet_05_New_Drawings_radnom_F";
		displayName="$STR_A3_Globe_CfgVehicles_Leaflet_05_New_Drawings_radnom_F0";
		editorSubcategory="EdSubcat_Sports";
		vehicleClass="Objects_Sports";
		hiddenSelectionsTextures[]=
		{
			"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_01_CO.paa"
		};
		class EventHandlers
		{
			init="(_this # 0) call compile preprocessFileLineNumbers '\A3\weapons_f_expEden\Items\scripts\randomize_Drawings.sqf'";
		};
	};
	class Leaflet_05_Old_Drawings_F: Leaflet_05_Old_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Leaflet_05_Old_Drawings_F.jpg";
		_generalMacro="Leaflet_05_Old_Drawings_F";
		displayName="$STR_A3_Globe_CfgVehicles_Leaflet_05_Old_Drawings_F0";
		editorSubcategory="EdSubcat_Sports";
		vehicleClass="Objects_Sports";
		hiddenSelectionsTextures[]=
		{
			"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_01_CO.paa"
		};
		class Attributes
		{
			class SwitchTexture
			{
				property="SwitchTexture";
				displayName="$STR_A3_expEden_Leaflet_05_announcements_Attributes_SwitchTexture_displayName_F0";
				control="Combo";
				expression="_this setObjectTextureGlobal [0, _value]";
				defaultValue="'\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_01_CO.paa'";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="$STR_A3_cfgVehicles_land_wreck_car2_f0";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_01_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_01_CO.paa";
					};
					class 2
					{
						name="$STR_expEden_Leaflet_New_Drawings_01_F2";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_02_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_02_CO.paa";
					};
					class 3
					{
						name="$STR_A3_cfgEditorSubcategories_edSubcat_rocks0";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_03_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_03_CO.paa";
					};
					class 4
					{
						name="$STR_dn_tree";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_04_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_04_CO.paa";
					};
					class 5
					{
						name="$STR_A3_malden_h_montchauve0";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_05_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_05_CO.paa";
					};
					class 6
					{
						name="$STR_A3_CFGVEHICLES_LAND_CASTLE_STEP_F1";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_06_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_06_CO.paa";
					};
					class 7
					{
						name="$STR_expEden_Leaflet_New_Drawings_01_F3";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_07_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_07_CO.paa";
					};
					class 8
					{
						name="$STR_misc_campfire";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_08_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_08_CO.paa";
					};
					class 9
					{
						name="$STR_A3_greekmen_firstnames32";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_09_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_09_CO.paa";
					};
				};
			};
		};
	};
	class Leaflet_05_Old_Drawings_radnom_F: Leaflet_05_Old_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Leaflet_05_Old_Drawings_radnom_F.jpg";
		_generalMacro="Leaflet_05_Old_Drawings_radnom_F";
		displayName="$STR_A3_Globe_CfgVehicles_Leaflet_05_Old_Drawings_radnom_F0";
		editorSubcategory="EdSubcat_Sports";
		vehicleClass="Objects_Sports";
		hiddenSelectionsTextures[]=
		{
			"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_01_CO.paa"
		};
		class EventHandlers
		{
			init="(_this # 0) call compile preprocessFileLineNumbers '\A3\weapons_f_expEden\Items\scripts\randomize_Drawings.sqf'";
		};
	};
	class Leaflet_05_Drawings_F: Leaflet_05_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Leaflet_05_Drawings_F.jpg";
		_generalMacro="Leaflet_05_Drawings_F";
		displayName="$STR_A3_Globe_CfgVehicles_Leaflet_05_Drawings_F0";
		editorSubcategory="EdSubcat_Sports";
		vehicleClass="Objects_Sports";
		hiddenSelectionsTextures[]=
		{
			"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_01_CO.paa"
		};
		class Attributes
		{
			class SwitchTexture
			{
				property="SwitchTexture";
				displayName="$STR_A3_expEden_Leaflet_05_announcements_Attributes_SwitchTexture_displayName_F0";
				control="Combo";
				expression="_this setObjectTextureGlobal [0, _value]";
				defaultValue="'\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_01_CO.paa'";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="$STR_A3_cfgVehicles_land_wreck_car2_f0";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_01_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_01_CO.paa";
					};
					class 2
					{
						name="$STR_expEden_Leaflet_New_Drawings_01_F2";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_02_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_02_CO.paa";
					};
					class 3
					{
						name="$STR_A3_cfgEditorSubcategories_edSubcat_rocks0";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_03_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_03_CO.paa";
					};
					class 4
					{
						name="$STR_dn_tree";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_04_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_04_CO.paa";
					};
					class 5
					{
						name="$STR_A3_malden_h_montchauve0";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_05_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_05_CO.paa";
					};
					class 6
					{
						name="$STR_A3_CFGVEHICLES_LAND_CASTLE_STEP_F1";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_06_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_06_CO.paa";
					};
					class 7
					{
						name="$STR_expEden_Leaflet_New_Drawings_01_F3";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_07_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_07_CO.paa";
					};
					class 8
					{
						name="$STR_misc_campfire";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_08_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_08_CO.paa";
					};
					class 9
					{
						name="$STR_A3_greekmen_firstnames32";
						value="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_09_CO.paa";
						picture="\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_09_CO.paa";
					};
				};
			};
		};
	};
	class Leaflet_05_Drawings_radnom_F: Leaflet_05_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Leaflet_05_Drawings_radnom_F.jpg";
		_generalMacro="Leaflet_05_Drawings_radnom_F";
		displayName="$STR_A3_Globe_CfgVehicles_Leaflet_05_Drawings_radnom_F0";
		editorSubcategory="EdSubcat_Sports";
		vehicleClass="Objects_Sports";
		hiddenSelectionsTextures[]=
		{
			"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_01_CO.paa"
		};
		class EventHandlers
		{
			init="(_this # 0) call compile preprocessFileLineNumbers '\A3\weapons_f_expEden\Items\scripts\randomize_Drawings.sqf'";
		};
	};
	class Leaflet_05_AccommodationNorthernBalavu_F: Leaflet_05_F
	{
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Leaflet_05_AccommodationNorthernBalavu_F.jpg";
		_generalMacro="Leaflet_05_AccommodationNorthernBalavu_F";
		DLC="Oldman";
		displayName="$STR_A3_expEden_CfgVehicles_Leaflet_05_AccommodationNorthernBalavu_F0";
		editorSubcategory="EdSubcat_Advertisements";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_oldman\Data\img\leaflets\Balavu_ca.paa"
		};
		class EventHandlers
		{
			init="[(_this # 0), 'a3\missions_f_oldman\data\img\leaflets\Balavu_ca.paa', localize 'STR_A3_OM_LEAFLET_NorthenBala'] call BIS_fnc_initInspectable;";
		};
	};
	class Leaflet_05_New_AccommodationNorthernBalavu_F: Leaflet_05_New_F
	{
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Leaflet_05_New_AccommodationNorthernBalavu_F.jpg";
		_generalMacro="Leaflet_05_New_AccommodationNorthernBalavu_F";
		DLC="Oldman";
		displayName="$STR_A3_expEden_CfgVehicles_Leaflet_05_New_AccommodationNorthernBalavu_F0";
		editorSubcategory="EdSubcat_Advertisements";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_oldman\Data\img\leaflets\Balavu_ca.paa"
		};
		class EventHandlers
		{
			init="[(_this # 0), 'a3\missions_f_oldman\data\img\leaflets\Balavu_ca.paa', localize 'STR_A3_OM_LEAFLET_NorthenBala'] call BIS_fnc_initInspectable;";
		};
	};
	class Leaflet_05_Old_AccommodationNorthernBalavu_F: Leaflet_05_Old_F
	{
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Leaflet_05_Old_AccommodationNorthernBalavu_F.jpg";
		_generalMacro="Leaflet_05_Old_AccommodationNorthernBalavu_F";
		DLC="Oldman";
		displayName="$STR_A3_expEden_CfgVehicles_Leaflet_05_Old_AccommodationNorthernBalavu_F0";
		editorSubcategory="EdSubcat_Advertisements";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_oldman\Data\img\leaflets\Balavu_ca.paa"
		};
		class EventHandlers
		{
			init="[(_this # 0), 'a3\missions_f_oldman\data\img\leaflets\Balavu_ca.paa', localize 'STR_A3_OM_LEAFLET_NorthenBala'] call BIS_fnc_initInspectable;";
		};
	};
	class Leaflet_05_AccommodationNorthernTanoa_F: Leaflet_05_F
	{
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Leaflet_05_AccommodationNorthernTanoa_F.jpg";
		_generalMacro="Leaflet_05_AccommodationNorthernTanoa_F";
		DLC="Oldman";
		displayName="$STR_A3_expEden_CfgVehicles_Leaflet_05_AccommodationNorthernTanoa_F0";
		editorSubcategory="EdSubcat_Advertisements";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_oldman\Data\img\leaflets\North_Tanoa_ca.paa"
		};
		class EventHandlers
		{
			init="[(_this # 0), 'a3\missions_f_oldman\data\img\leaflets\North_Tanoa_ca.paa', localize 'STR_A3_OM_LEAFLET_NorthenTanoa'] call BIS_fnc_initInspectable;";
		};
	};
	class Leaflet_05_New_AccommodationNorthernTanoa_F: Leaflet_05_New_F
	{
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Leaflet_05_New_AccommodationNorthernTanoa_F.jpg";
		_generalMacro="Leaflet_05_New_AccommodationNorthernTanoa_F";
		DLC="Oldman";
		displayName="$STR_A3_expEden_CfgVehicles_Leaflet_05_New_AccommodationNorthernTanoa_F0";
		editorSubcategory="EdSubcat_Advertisements";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_oldman\Data\img\leaflets\North_Tanoa_ca.paa"
		};
		class EventHandlers
		{
			init="[(_this # 0), 'a3\missions_f_oldman\data\img\leaflets\North_Tanoa_ca.paa', localize 'STR_A3_OM_LEAFLET_NorthenTanoa'] call BIS_fnc_initInspectable;";
		};
	};
	class Leaflet_05_Old_AccommodationNorthernTanoa_F: Leaflet_05_Old_F
	{
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Leaflet_05_Old_AccommodationNorthernTanoa_F.jpg";
		_generalMacro="Leaflet_05_Old_AccommodationNorthernTanoa_F";
		DLC="Oldman";
		displayName="$STR_A3_expEden_CfgVehicles_Leaflet_05_Old_AccommodationNorthernTanoa_F0";
		editorSubcategory="EdSubcat_Advertisements";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_oldman\Data\img\leaflets\North_Tanoa_ca.paa"
		};
		class EventHandlers
		{
			init="[(_this # 0), 'a3\missions_f_oldman\data\img\leaflets\North_Tanoa_ca.paa', localize 'STR_A3_OM_LEAFLET_NorthenTanoa'] call BIS_fnc_initInspectable;";
		};
	};
	class Leaflet_05_AccommodationCentralTanoa_F: Leaflet_05_F
	{
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Leaflet_05_AccommodationCentralTanoa_F.jpg";
		_generalMacro="Leaflet_05_AccommodationCentralTanoa_F";
		DLC="Oldman";
		displayName="$STR_A3_expEden_CfgVehicles_Leaflet_05_AccommodationCentralTanoa_F0";
		editorSubcategory="EdSubcat_Advertisements";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_oldman\Data\img\leaflets\Central_tanoa_ca.paa"
		};
		class EventHandlers
		{
			init="[(_this # 0), 'a3\missions_f_oldman\data\img\leaflets\Central_tanoa_ca.paa', localize 'STR_A3_OM_LEAFLET_CentralTanoa'] call BIS_fnc_initInspectable;";
		};
	};
	class Leaflet_05_New_AccommodationCentralTanoa_F: Leaflet_05_New_F
	{
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Leaflet_05_New_AccommodationCentralTanoa_F.jpg";
		_generalMacro="Leaflet_05_New_AccommodationCentralTanoa_F";
		DLC="Oldman";
		displayName="$STR_A3_expEden_CfgVehicles_Leaflet_05_New_AccommodationCentralTanoa_F0";
		editorSubcategory="EdSubcat_Advertisements";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_oldman\Data\img\leaflets\Central_tanoa_ca.paa"
		};
		class EventHandlers
		{
			init="[(_this # 0), 'a3\missions_f_oldman\data\img\leaflets\Central_tanoa_ca.paa', localize 'STR_A3_OM_LEAFLET_CentralTanoa'] call BIS_fnc_initInspectable;";
		};
	};
	class Leaflet_05_Old_AccommodationCentralTanoa_F: Leaflet_05_Old_F
	{
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Leaflet_05_Old_AccommodationCentralTanoa_F.jpg";
		_generalMacro="Leaflet_05_Old_AccommodationCentralTanoa_F";
		DLC="Oldman";
		displayName="$STR_A3_expEden_CfgVehicles_Leaflet_05_Old_AccommodationCentralTanoa_F0";
		editorSubcategory="EdSubcat_Advertisements";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_oldman\Data\img\leaflets\Central_tanoa_ca.paa"
		};
		class EventHandlers
		{
			init="[(_this # 0), 'a3\missions_f_oldman\data\img\leaflets\Central_tanoa_ca.paa', localize 'STR_A3_OM_LEAFLET_CentralTanoa'] call BIS_fnc_initInspectable;";
		};
	};
	class Leaflet_05_AccommodationSouthernBalavu_F: Leaflet_05_F
	{
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Leaflet_05_AccommodationSouthernBalavu_F.jpg";
		_generalMacro="Leaflet_05_AccommodationSouthernBalavu_F";
		DLC="Oldman";
		displayName="$STR_A3_expEden_CfgVehicles_Leaflet_05_AccommodationSouthernBalavu_F0";
		editorSubcategory="EdSubcat_Advertisements";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_oldman\Data\img\leaflets\Balavu_ca.paa"
		};
		class EventHandlers
		{
			init="[(_this # 0), 'a3\missions_f_oldman\data\img\leaflets\Balavu_ca.paa', localize 'STR_A3_OM_LEAFLET_SouthernBala'] call BIS_fnc_initInspectable;";
		};
	};
	class Leaflet_05_New_AccommodationSouthernBalavu_F: Leaflet_05_New_F
	{
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Leaflet_05_New_AccommodationSouthernBalavu_F.jpg";
		_generalMacro="Leaflet_05_New_AccommodationSouthernBalavu_F";
		DLC="Oldman";
		displayName="$STR_A3_expEden_CfgVehicles_Leaflet_05_New_AccommodationSouthernBalavu_F0";
		editorSubcategory="EdSubcat_Advertisements";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_oldman\Data\img\leaflets\Balavu_ca.paa"
		};
		class EventHandlers
		{
			init="[(_this # 0), 'a3\missions_f_oldman\data\img\leaflets\Balavu_ca.paa', localize 'STR_A3_OM_LEAFLET_SouthernBala'] call BIS_fnc_initInspectable;";
		};
	};
	class Leaflet_05_Old_AccommodationSouthernBalavu_F: Leaflet_05_Old_F
	{
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Leaflet_05_Old_AccommodationSouthernBalavu_F.jpg";
		_generalMacro="Leaflet_05_Old_AccommodationSouthernBalavu_F";
		DLC="Oldman";
		displayName="$STR_A3_expEden_CfgVehicles_Leaflet_05_Old_AccommodationSouthernBalavu_F0";
		editorSubcategory="EdSubcat_Advertisements";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_oldman\Data\img\leaflets\Balavu_ca.paa"
		};
		class EventHandlers
		{
			init="[(_this # 0), 'a3\missions_f_oldman\data\img\leaflets\Balavu_ca.paa', localize 'STR_A3_OM_LEAFLET_SouthernBala'] call BIS_fnc_initInspectable;";
		};
	};
	class Leaflet_05_AccommodationDutchIsland_F: Leaflet_05_F
	{
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Leaflet_05_AccommodationDutchIsland_F.jpg";
		_generalMacro="Leaflet_05_AccommodationDutchIsland_F";
		DLC="Oldman";
		displayName="$STR_A3_expEden_CfgVehicles_Leaflet_05_AccommodationDutchIsland_F0";
		editorSubcategory="EdSubcat_Advertisements";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_oldman\Data\img\leaflets\Lijn_Islands_ca.paa"
		};
		class EventHandlers
		{
			init="[(_this # 0), 'a3\missions_f_oldman\data\img\leaflets\Lijn_Islands_ca.paa', localize 'STR_A3_OM_LEAFLET_DutchIsland'] call BIS_fnc_initInspectable;";
		};
	};
	class Leaflet_05_New_AccommodationDutchIsland_F: Leaflet_05_New_F
	{
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Leaflet_05_New_AccommodationDutchIsland_F.jpg";
		_generalMacro="Leaflet_05_New_AccommodationDutchIsland_F";
		DLC="Oldman";
		displayName="$STR_A3_expEden_CfgVehicles_Leaflet_05_New_AccommodationDutchIsland_F0";
		editorSubcategory="EdSubcat_Advertisements";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_oldman\Data\img\leaflets\Lijn_Islands_ca.paa"
		};
		class EventHandlers
		{
			init="[(_this # 0), 'a3\missions_f_oldman\data\img\leaflets\Lijn_Islands_ca.paa', localize 'STR_A3_OM_LEAFLET_DutchIsland'] call BIS_fnc_initInspectable;";
		};
	};
	class Leaflet_05_Old_AccommodationDutchIsland_F: Leaflet_05_Old_F
	{
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Leaflet_05_Old_AccommodationDutchIsland_F.jpg";
		_generalMacro="Leaflet_05_Old_AccommodationDutchIsland_F";
		DLC="Oldman";
		displayName="$STR_A3_expEden_CfgVehicles_Leaflet_05_Old_AccommodationDutchIsland_F0";
		editorSubcategory="EdSubcat_Advertisements";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_oldman\Data\img\leaflets\Lijn_Islands_ca.paa"
		};
		class EventHandlers
		{
			init="[(_this # 0), 'a3\missions_f_oldman\data\img\leaflets\Lijn_Islands_ca.paa', localize 'STR_A3_OM_LEAFLET_DutchIsland'] call BIS_fnc_initInspectable;";
		};
	};
	class Leaflet_05_civilian_F: Leaflet_05_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Leaflet_05_civilian_F.jpg";
		_generalMacro="Leaflet_05_civilian_F";
		displayName="$STR_A3_expEden_Leaflet_05_civilian_F0";
		model="\a3\Weapons_F_Orange\Ammo\leaflet_05_civ_f.p3d";
		class EventHandlers
		{
			init="(_this # 0) call compile preprocessFileLineNumbers '\A3\Weapons_F_expEden\Items\scripts\init_leaflet.sqf'";
		};
	};
	class Leaflet_05_Old_civilian_F: Leaflet_05_Old_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Leaflet_05_Old_civilian_F.jpg";
		_generalMacro="Leaflet_05_Old_civilian_F";
		displayName="$STR_A3_expEden_Leaflet_05_Old_civilian_F0";
		hiddenSelectionsTextures[]=
		{
			"a3\ui_f_orange\data\cfgleaflets\civ_ca.paa"
		};
		class EventHandlers
		{
			init="(_this # 0) call compile preprocessFileLineNumbers '\A3\Weapons_F_expEden\Items\scripts\init_leaflet.sqf'";
		};
	};
	class Leaflet_05_New_civilian_F: Leaflet_05_New_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Leaflet_05_New_civilian_F.jpg";
		_generalMacro="Leaflet_05_New_civilian_F";
		displayName="$STR_A3_expEden_Leaflet_05_New_civilian_F0";
		hiddenSelectionsTextures[]=
		{
			"a3\ui_f_orange\data\cfgleaflets\civ_ca.paa"
		};
		class EventHandlers
		{
			init="(_this # 0) call compile preprocessFileLineNumbers '\A3\Weapons_F_expEden\Items\scripts\init_leaflet.sqf'";
		};
	};
	class Leaflet_05_CSAT_F: Leaflet_05_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Leaflet_05_CSAT_F.jpg";
		_generalMacro="Leaflet_05_CSAT_F";
		displayName="$STR_A3_expEden_Leaflet_05_CSAT_F0";
		model="\a3\Weapons_F_Orange\Ammo\leaflet_05_east_f.p3d";
		class EventHandlers
		{
			init="(_this # 0) call compile preprocessFileLineNumbers '\A3\Weapons_F_expEden\Items\scripts\init_leaflet.sqf'";
		};
	};
	class Leaflet_05_Old_CSAT_F: Leaflet_05_Old_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Leaflet_05_Old_CSAT_F.jpg";
		_generalMacro="Leaflet_05_Old_CSAT_F";
		displayName="$STR_A3_expEden_Leaflet_05_Old_CSAT_F0";
		hiddenSelectionsTextures[]=
		{
			"a3\ui_f_orange\data\cfgleaflets\east_ca.paa"
		};
		class EventHandlers
		{
			init="(_this # 0) call compile preprocessFileLineNumbers '\A3\Weapons_F_expEden\Items\scripts\init_leaflet.sqf'";
		};
	};
	class Leaflet_05_New_CSAT_F: Leaflet_05_New_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Leaflet_05_New_CSAT_F.jpg";
		_generalMacro="Leaflet_05_New_CSAT_F";
		displayName="$STR_A3_expEden_Leaflet_05_New_CSAT_F0";
		hiddenSelectionsTextures[]=
		{
			"a3\ui_f_orange\data\cfgleaflets\east_ca.paa"
		};
		class EventHandlers
		{
			init="(_this # 0) call compile preprocessFileLineNumbers '\A3\Weapons_F_expEden\Items\scripts\init_leaflet.sqf'";
		};
	};
	class Leaflet_05_FIA_F: Leaflet_05_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Leaflet_05_FIA_F.jpg";
		_generalMacro="Leaflet_05_FIA_F";
		displayName="$STR_A3_expEden_Leaflet_05_FIA_F0";
		model="\a3\Weapons_F_Orange\Ammo\leaflet_05_guer_f.p3d";
		class EventHandlers
		{
			init="(_this # 0) call compile preprocessFileLineNumbers '\A3\Weapons_F_expEden\Items\scripts\init_leaflet.sqf'";
		};
	};
	class Leaflet_05_Old_FIA_F: Leaflet_05_Old_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Leaflet_05_Old_FIA_F.jpg";
		_generalMacro="Leaflet_05_Old_FIA_F";
		displayName="$STR_A3_expEden_Leaflet_05_Old_FIA_F0";
		hiddenSelectionsTextures[]=
		{
			"a3\ui_f_orange\data\cfgleaflets\guer_ca.paa"
		};
		class EventHandlers
		{
			init="(_this # 0) call compile preprocessFileLineNumbers '\A3\Weapons_F_expEden\Items\scripts\init_leaflet.sqf'";
		};
	};
	class Leaflet_05_New_FIA_F: Leaflet_05_New_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Leaflet_05_New_FIA_F.jpg";
		_generalMacro="Leaflet_05_New_FIA_F";
		displayName="$STR_A3_expEden_Leaflet_05_New_FIA_F0";
		hiddenSelectionsTextures[]=
		{
			"a3\ui_f_orange\data\cfgleaflets\guer_ca.paa"
		};
		class EventHandlers
		{
			init="(_this # 0) call compile preprocessFileLineNumbers '\A3\Weapons_F_expEden\Items\scripts\init_leaflet.sqf'";
		};
	};
	class Leaflet_05_NATO_F: Leaflet_05_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Leaflet_05_NATO_F.jpg";
		_generalMacro="Leaflet_05_NATO_F";
		displayName="$STR_A3_expEden_Leaflet_05_NATO_F0";
		model="\a3\Weapons_F_Orange\Ammo\leaflet_05_west_f.p3d";
		class EventHandlers
		{
			init="(_this # 0) call compile preprocessFileLineNumbers '\A3\Weapons_F_expEden\Items\scripts\init_leaflet.sqf'";
		};
	};
	class Leaflet_05_Old_NATO_F: Leaflet_05_Old_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Leaflet_05_Old_NATO_F.jpg";
		_generalMacro="Leaflet_05_Old_NATO_F";
		displayName="$STR_A3_expEden_Leaflet_05_Old_NATO_F0";
		hiddenSelectionsTextures[]=
		{
			"a3\ui_f_orange\data\cfgleaflets\west_ca.paa"
		};
		class EventHandlers
		{
			init="(_this # 0) call compile preprocessFileLineNumbers '\A3\Weapons_F_expEden\Items\scripts\init_leaflet.sqf'";
		};
	};
	class Leaflet_05_New_NATO_F: Leaflet_05_New_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Leaflet_05_New_NATO_F.jpg";
		_generalMacro="Leaflet_05_New_NATO_F";
		displayName="$STR_A3_expEden_Leaflet_05_New_NATO_F0";
		hiddenSelectionsTextures[]=
		{
			"a3\ui_f_orange\data\cfgleaflets\west_ca.paa"
		};
		class EventHandlers
		{
			init="(_this # 0) call compile preprocessFileLineNumbers '\A3\Weapons_F_expEden\Items\scripts\init_leaflet.sqf'";
		};
	};
	class Leaflet_05_SuicideNote_F: Leaflet_05_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Leaflet_05_SuicideNote_F.jpg";
		_generalMacro="Leaflet_05_SuicideNote_F";
		displayName="$STR_A3_Globe_CfgVehicles_Leaflet_05_SuicideNote_F0";
		hiddenSelectionsTextures[]=
		{
			"A3\Missions_F_AoW\Data\Img\Leaflets\dead_letter_ca.paa"
		};
		class EventHandlers
		{
			init="['init', [(_this # 0),'\a3\Missions_F_AoW\Data\Img\Leaflets\dead_letter_ca.paa', localize 'STR_A3_showcase_future_letter']] call BIS_fnc_initLeaflet;";
		};
	};
	class Leaflet_05_Old_SuicideNote_F: Leaflet_05_Old_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Leaflet_05_Old_SuicideNote_F.jpg";
		_generalMacro="Leaflet_05_Old_SuicideNote_F";
		displayName="$STR_A3_Globe_CfgVehicles_Leaflet_05_Old_SuicideNote_F0";
		hiddenSelectionsTextures[]=
		{
			"A3\Missions_F_AoW\Data\Img\Leaflets\dead_letter_ca.paa"
		};
		class EventHandlers
		{
			init="['init', [(_this # 0),'\a3\Missions_F_AoW\Data\Img\Leaflets\dead_letter_ca.paa', localize 'STR_A3_showcase_future_letter']] call BIS_fnc_initLeaflet;";
		};
	};
	class Leaflet_05_New_SuicideNote_F: Leaflet_05_New_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Leaflet_05_New_SuicideNote_F.jpg";
		_generalMacro="Leaflet_05_New_SuicideNote_F";
		displayName="$STR_A3_Globe_CfgVehicles_Leaflet_05_New_SuicideNote_F0";
		hiddenSelectionsTextures[]=
		{
			"A3\Missions_F_AoW\Data\Img\Leaflets\dead_letter_ca.paa"
		};
		class EventHandlers
		{
			init="['init', [(_this # 0),'\a3\Missions_F_AoW\Data\Img\Leaflets\dead_letter_ca.paa', localize 'STR_A3_showcase_future_letter']] call BIS_fnc_initLeaflet;";
		};
	};
	class Backgammon_01: Leaflet_05_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Backgammon_01.jpg";
		_generalMacro="Backgammon_01";
		displayName="$STR_Globe_Backgammon_01";
		editorSubcategory="EdSubcat_Sports";
		vehicleClass="Objects_Sports";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_orange\data\img\orange_compositions\s1+s2+s3+s6\s6_game_01_co.paa"
		};
	};
	class Backgammon_01_Old: Leaflet_05_Old_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Backgammon_01_Old.jpg";
		_generalMacro="Backgammon_01_Old";
		displayName="$STR_Globe_Backgammon_01_Old";
		editorSubcategory="EdSubcat_Sports";
		vehicleClass="Objects_Sports";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_orange\data\img\orange_compositions\s1+s2+s3+s6\s6_game_01_co.paa"
		};
	};
	class Backgammon_01_New: Leaflet_05_New_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Backgammon_01_New.jpg";
		_generalMacro="Backgammon_01_New";
		displayName="$STR_Globe_Backgammon_01_New";
		editorSubcategory="EdSubcat_Sports";
		vehicleClass="Objects_Sports";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_orange\data\img\orange_compositions\s1+s2+s3+s6\s6_game_01_co.paa"
		};
	};
	class Leaflet_05_realityCheck: Leaflet_05_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Leaflet_05_realityCheck.jpg";
		_generalMacro="Leaflet_05_realityCheck";
		displayName="$STR_Globe_CfgVehicles_Leaflet_05_realityCheck0";
		model="\a3\data_f_tacops\particleeffects\leaflets\leaflet_developer.p3d";
		hiddenSelectionsTextures[]=
		{
			"a3\data_f_tacops\particleeffects\leaflets\data\leaflet_developer_ca.paa"
		};
		class EventHandlers
		{
			init="['init', [(_this # 0),'a3\data_f_tacops\particleeffects\leaflets\data\leaflet_developer_ca.paa', localize 'STR_A3_tacops_cfgleaflets_developer']] call BIS_fnc_initLeaflet;";
		};
	};
	class Leaflet_05_Old_realityCheck: Leaflet_05_Old_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Leaflet_05_Old_realityCheck.jpg";
		_generalMacro="Leaflet_05_Old_realityCheck";
		displayName="$STR_Globe_CfgVehicles_Leaflet_05_Old_realityCheck0";
		hiddenSelectionsTextures[]=
		{
			"a3\data_f_tacops\particleeffects\leaflets\data\leaflet_developer_ca.paa"
		};
		class EventHandlers
		{
			init="['init', [(_this # 0),'a3\data_f_tacops\particleeffects\leaflets\data\leaflet_developer_ca.paa', localize 'STR_A3_tacops_cfgleaflets_developer']] call BIS_fnc_initLeaflet;";
		};
	};
	class Leaflet_05_New_realityCheck: Leaflet_05_New_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_f_expEden\data\CfgVehicles\Leaflet_05_New_realityCheck.jpg";
		_generalMacro="Leaflet_05_New_realityCheck";
		displayName="$STR_A3_Globe_CfgVehicles_Leaflet_05_New_realityCheck0";
		hiddenSelectionsTextures[]=
		{
			"a3\data_f_tacops\particleeffects\leaflets\data\leaflet_developer_ca.paa"
		};
		class EventHandlers
		{
			init="['init', [(_this # 0),'a3\data_f_tacops\particleeffects\leaflets\data\leaflet_developer_ca.paa', localize 'STR_A3_tacops_cfgleaflets_developer']] call BIS_fnc_initLeaflet;";
		};
	};
	class Item_Medikit_Civilian_01: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgWeapons_Medikit_Civilian_010";
		author="O&T Explansion Eden";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_InventoryItems";
		vehicleClass="Items";
		class TransportItems
		{
			class Medikit_Civilian_01
			{
				name="Medikit_Civilian_01";
				count=1;
			};
		};
	};
};
class CfgWeapons
{
	class Default;
	class MedikitItem;
	class ItemCore;
	class DetectorCore;
	class Medikit_Civilian_01: ItemCore
	{
		author="O&T Explansion Eden";
		_generalMacro="MedikitCivilian";
		scope=2;
		reversed=1;
		displayName="$STR_Globe_CfgWeapons_Medikit_Civilian_010";
		descriptionShort="$STR_A3_cfgWeapons_Medikit1";
		descriptionUse="$STR_A3_CfgWeapons_use_Medikit0";
		picture="\a3\weapons_f_expEden\Data\UI\gear_medikit_civilian_01_ca.paa";
		model="\A3\props_f_orange\Humanitarian\Camps\FirstAidKit_01_closed_F";
		class ItemInfo: MedikitItem
		{
			mass=100;
			uniformModel="\A3\props_f_orange\Humanitarian\Camps\FirstAidKit_01_closed_F";
		};
	};
	class MineDetector_20m_G: DetectorCore
	{
		author="O&T Explansion Eden";
		_generalMacro="MineDetector_20m_G";
		type=131072;
		weaponPoolAvailable=1;
		scope=0;
		displayName="$STR_Globe_Cfgweapons_MineDetector_20m_G0";
		descriptionshort="$STR_Globe_Cfgweapons_MineDetector_20m_G1";
		detectRange=20;
		soundMineDetector[]=
		{
			"a3\Sounds_F_Orange\Test\beep",
			1,
			1
		};
		class ItemInfo
		{
			mass=25;
		};
		picture="\a3\Weapons_F_Enoch\Pistols\ESD_01\data\ui\gear_muzzle_antenna_03_ca.paa";
		model="\a3\Weapons_F_Enoch\Pistols\ESD_01\muzzle_antenna_03_F";
		mineDetectorSoundFrequency=2;
		mineDetectorPitchStart=0;
		mineDetectorPitchEnd=0;
	};
	class MineDetector_25m_G: DetectorCore
	{
		author="O&T Explansion Eden";
		_generalMacro="MineDetector_25m_G";
		type=131072;
		weaponPoolAvailable=1;
		scope=0;
		displayName="$STR_Globe_Cfgweapons_MineDetector_25m_G0";
		descriptionshort="$STR_Globe_Cfgweapons_MineDetector_25m_G1";
		detectRange=25;
		soundMineDetector[]=
		{
			"a3\Sounds_F_Orange\Test\beep",
			1,
			1
		};
		class ItemInfo
		{
			mass=30;
		};
		picture="\a3\Weapons_F_Enoch\Pistols\ESD_01\data\ui\gear_muzzle_antenna_01_ca.paa";
		model="\a3\Weapons_F_Enoch\Pistols\ESD_01\muzzle_antenna_01_F";
		mineDetectorSoundFrequency=3;
		mineDetectorPitchStart=0;
		mineDetectorPitchEnd=0;
	};
	class Put: Default
	{
		muzzles[]+=
		{
			"MineFlagMarkerMuzzle"
		};
		class PutMuzzle;
		class MineFlagMarkerMuzzle: PutMuzzle
		{

			autoreload=0;
			enableAttack=1;
			magazines[]=
			{
				"FlagMarkerMines_01_G_mag"
			};
			displayName="$STR_Globe_CfgMagazines_LandmineMarker_01_G0";
			picture="\A3\Weapons_F\Data\clear_empty.paa";
			showToPlayer=0;
			class EventHandlers
			{
				fired="_this call expEden_fnc_createFlagMarkerMine";
			};
		};
	};
};
class CfgAmmo
{
	class MineBase;
	class FlagMarkerMines_01_G_ammo: MineBase
	{
		hit=0;
		indirectHit=0;
		indirectHitRange=0;
		model="\A3\weapons_f\Ammo\stone_3";
		mineModelDisabled="\A3\weapons_f\Ammo\stone_3";
		defaultMagazine="FlagMarkerMines_01_G_mag";
		multiSoundHit[]=
		{
		};
		soundDeactivation[]=
		{
			"a3\sounds_f_aow\sfx\showcase_future\place_flag",
			1.9952624,
			1,
			20
		};
		soundActivation[]=
		{
			"a3\sounds_f_aow\sfx\showcase_future\place_flag",
			1.9952624,
			1,
			20
		};
		explosionEffects="";
		CraterEffects="";
		whistleDist=0;
		mineInconspicuousness=99;
		triggerWhenDestroyed=0;
		mineCanBeReactivated=0;

		deactivateRequiredTrait=0;
		deactivateRequiredToolkit=0;

		mineTrigger="TankTriggerMagneticFake";
		SoundSetExplosion[]=
		{
		};
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class FlagMarkerMines_01_G_mag: CA_Magazine
	{
		author="O&T Expansion Eden";
		scope=2;
		mass=0.8;
		displayName="$STR_Globe_CfgMagazines_LandmineMarker_01_G0";
		descriptionShort="$STR_Globe_CfgMagazines_LandmineMarker_01_G1";
		descriptionUse="$STR_A3_cfgMagazines_ATMine_Range_Mag0";
		picture="\a3\weapons_f_expEden\Items\Data\Gear_FlagMarkerMines_01_G_CA.paa";
		model="\A3\weapons_f\Ammo\stone_3";
		useAction=1;
		useActionTitle="$STR_Globe_CfgMagazines_LandmineMarker_01_G2";
		type="256/4";
		allowedSlots[]={801,701,901};
		value=2;
		ammo="FlagMarkerMines_01_G_ammo";
		nameSoundWeapon="mine";
		nameSound="mine";
		count=1;
		initSpeed=0;
		maxLeadSpeed=0;
		weaponPoolAvailable=1;
		sound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622776,
			1,
			10
		};
	};
};
class CfgMineTriggers
{
	class TankTriggerMagneticFake
	{
		scope=0;
		mineTriggerType="wire";
		mineTriggerRange=0;
		mineTriggerMass=0;
		mineDelay=0;
		mineMagnetic=0;
		mineUnderwaterOnly=0;
		mineWireStart[]={0,0,0};
		mineWireEnd[]={0,0,0};
		restrictZoneCenter[]={0,0,0};
		restrictZoneRadius=0;
		timerStep=-1;
	};
};