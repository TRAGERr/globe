class CfgPatches
{
	class Structures_Globe_Military_Boats
	{
		addonRootClass="A3_Structures_F_Globe";
		requiredAddons[]=
		{
			"A3_Structures_F_Globe_Military",
			"A3_Boat_F_Destroyer_Destroyer_01",
			"A3_Boat_F_Jets_Carrier_01"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgVehicles
{
	class StaticShip;
	class Land_Carrier_01_hull_base_F;
	class Land_Destroyer_01_hull_base_F;
	class Land_Destroyer_01_hull_01_F: Land_Destroyer_01_hull_base_F
	{
		scope=2;
		scopeCurator=2;
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Destroyer_01_hull_01_F.jpg";
		editorCategory="EdCat_Structures_Altis";
		editorSubcategory="EdSubcat_StaticShips";
		displayName="$STR_Globe_Land_Destroyer_01_hull_01_F";
		hiddenSelectionsMaterials[]=
		{
			"A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_n.rvmat",
			"A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_n.rvmat",
			"A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_n.rvmat"
		};
		class Attributes
		{
			class SwitchTextureDestroyer1
			{
				property="SwitchTextureDestroyer1";
				displayName="$STR_3den_object_attribute_CustomShipNumber1_displayname";
				tooltip="$STR_3den_object_attribute_CustomShipNumber1_tooltip";
				control="Combo";
				expression="_this setObjectTextureGlobal [0, _value]";
				defaultValue="'\A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_N_00_co.paa'";
				typeName="STRING";
				class values
				{
					class n0
					{
						name="0";
						value="\A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_N_00_co.paa";
						picture="\A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_N_00_co.paa";
					};
					class n1
					{
						name="1";
						value="\A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_N_01_co.paa";
						picture="\A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_N_01_co.paa";
					};
					class n2
					{
						name="2";
						value="\A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_N_02_co.paa";
						picture="\A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_N_02_co.paa";
					};
					class n3
					{
						name="3";
						value="\A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_N_03_co.paa";
						picture="\A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_N_03_co.paa";
					};
					class n4
					{
						name="4";
						value="\A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_N_04_co.paa";
						picture="\A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_N_04_co.paa";
					};
					class n5
					{
						name="5";
						value="\A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_N_05_co.paa";
						picture="\A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_N_05_co.paa";
					};
					class n6
					{
						name="6";
						value="\A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_N_06_co.paa";
						picture="\A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_N_06_co.paa";
					};
					class n7
					{
						name="7";
						value="\A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_N_07_co.paa";
						picture="\A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_N_07_co.paa";
					};
					class n8
					{
						name="8";
						value="\A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_N_08_co.paa";
						picture="\A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_N_08_co.paa";
					};
					class n9
					{
						name="9";
						value="\A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_N_09_co.paa";
						picture="\A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_N_09_co.paa";
					};
				};
			};
			class SwitchTextureDestroyer2: SwitchTextureDestroyer1
			{
				property="SwitchTextureDestroyer2";
				displayName="$STR_3den_object_attribute_CustomShipNumber2_displayname";
				tooltip="$STR_3den_object_attribute_CustomShipNumber2_tooltip";
				expression="_this setObjectTextureGlobal [1, _value]";
				defaultValue="'\A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_N_00_co.paa'";
				class values;
			};
			class SwitchTextureDestroyer3: SwitchTextureDestroyer1
			{
				property="SwitchTextureDestroyer3";
				displayName="$STR_3den_object_attribute_CustomShipNumber3_displayname";
				tooltip="$STR_3den_object_attribute_CustomShipNumber3_tooltip";
				expression="_this setObjectTextureGlobal [2, _value]";
				defaultValue="'\A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_N_01_co.paa'";
				class values;
			};
			class RandomNumber
			{
				property="RandomNumber";
				displayName="$STR_Globe_Land_Destroyer_01_hull_01_F_Attributes_RandomNumber";
				control="Checkbox";
				defaultValue="false";
				expression="if(_value) then {_this call compile preprocessFileLineNumbers '\A3\Structures_F_Globe\Military\Boats\scripts\randomize.sqf'}";
			};
		};
	};
	class Land_Destroyer_01_hull_02_F: Land_Destroyer_01_hull_base_F
	{
		scope=2;
		scopeCurator=2;
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Destroyer_01_hull_02_F.jpg";
		editorCategory="EdCat_Structures_Altis";
		editorSubcategory="EdSubcat_StaticShips";
		displayName="$STR_Globe_Land_Destroyer_01_hull_02_F";
		class Attributes
		{
			class brokeGlass1
			{
				property="brokeGlass1";
				displayName="$STR_Globe_Land_Destroyer_01_hull_02_F_Attributes_brokeGlass1";
				control="Checkbox";
				defaultValue="false";
				expression="if(_value)then{[_this,'glass_1_hide','glass_1_unhide'] call expEden_fnc_Destroyer01HandleDamage3den}";
			};
			class brokeGlass2: brokeGlass1
			{
				property="brokeGlass2";
				displayName="$STR_Globe_Land_Destroyer_01_hull_02_F_Attributes_brokeGlass2";
				expression="if(_value)then{[_this,'glass_2_hide','glass_2_unhide'] call expEden_fnc_Destroyer01HandleDamage3den}";
			};
			class brokeGlass3: brokeGlass1
			{
				property="brokeGlass3";
				displayName="$STR_Globe_Land_Destroyer_01_hull_02_F_Attributes_brokeGlass3";
				expression="if(_value)then{[_this,'glass_3_hide','glass_3_unhide'] call expEden_fnc_Destroyer01HandleDamage3den}";
			};
			class brokeGlass4: brokeGlass1
			{
				property="brokeGlass4";
				displayName="$STR_Globe_Land_Destroyer_01_hull_02_F_Attributes_brokeGlass4";
				expression="if(_value)then{[_this,'glass_4_hide','glass_4_unhide'] call expEden_fnc_Destroyer01HandleDamage3den}";
			};
			class brokeGlass5: brokeGlass1
			{
				property="brokeGlass5";
				displayName="$STR_Globe_Land_Destroyer_01_hull_02_F_Attributes_brokeGlass5";
				expression="if(_value)then{[_this,'glass_5_hide','glass_5_unhide'] call expEden_fnc_Destroyer01HandleDamage3den}";
			};
			class brokeGlass6: brokeGlass1
			{
				property="brokeGlass6";
				displayName="$STR_Globe_Land_Destroyer_01_hull_02_F_Attributes_brokeGlass6";
				expression="if(_value)then{[_this,'glass_6_hide','glass_6_unhide'] call expEden_fnc_Destroyer01HandleDamage3den}";
			};
			class brokeGlass7: brokeGlass1
			{
				property="brokeGlass7";
				displayName="$STR_Globe_Land_Destroyer_01_hull_02_F_Attributes_brokeGlass7";
				expression="if(_value)then{[_this,'glass_7_hide','glass_7_unhide'] call expEden_fnc_Destroyer01HandleDamage3den}";
			};
			class brokeGlass8: brokeGlass1
			{
				property="brokeGlass8";
				displayName="$STR_Globe_Land_Destroyer_01_hull_02_F_Attributes_brokeGlass8";
				expression="if(_value)then{[_this,'glass_8_hide','glass_8_unhide'] call expEden_fnc_Destroyer01HandleDamage3den}";
			};
			class brokeGlass9: brokeGlass1
			{
				property="brokeGlass9";
				displayName="$STR_Globe_Land_Destroyer_01_hull_02_F_Attributes_brokeGlass9";
				expression="if(_value)then{[_this,'glass_9_hide','glass_9_unhide'] call expEden_fnc_Destroyer01HandleDamage3den}";
			};
			class brokeGlass10: brokeGlass1
			{
				property="brokeGlass10";
				displayName="$STR_Globe_Land_Destroyer_01_hull_02_F_Attributes_brokeGlass10";
				expression="if(_value)then{[_this,'glass_10_hide','glass_10_unhide'] call expEden_fnc_Destroyer01HandleDamage3den}";
			};
			class brokeGlass11: brokeGlass1
			{
				property="brokeGlass11";
				displayName="$STR_Globe_Land_Destroyer_01_hull_02_F_Attributes_brokeGlass11";
				expression="if(_value)then{[_this,'glass_11_hide','glass_11_unhide'] call expEden_fnc_Destroyer01HandleDamage3den}";
			};
			class brokeGlass12: brokeGlass1
			{
				property="brokeGlass12";
				displayName="$STR_Globe_Land_Destroyer_01_hull_02_F_Attributes_brokeGlass12";
				expression="if(_value)then{[_this,'glass_12_hide','glass_12_unhide'] call expEden_fnc_Destroyer01HandleDamage3den}";
			};
			class brokeGlass13: brokeGlass1
			{
				property="brokeGlass13";
				displayName="$STR_Globe_Land_Destroyer_01_hull_02_F_Attributes_brokeGlass13";
				expression="if(_value)then{[_this,'glass_13_hide','glass_13_unhide'] call expEden_fnc_Destroyer01HandleDamage3den}";
			};
			class brokeGlass14: brokeGlass1
			{
				property="brokeGlass14";
				displayName="$STR_Globe_Land_Destroyer_01_hull_02_F_Attributes_brokeGlass14";
				expression="if(_value)then{[_this,'glass_14_hide','glass_14_unhide'] call expEden_fnc_Destroyer01HandleDamage3den}";
			};
			class brokeGlass15: brokeGlass1
			{
				property="brokeGlass15";
				displayName="$STR_Globe_Land_Destroyer_01_hull_02_F_Attributes_brokeGlass15";
				expression="if(_value)then{[_this,'glass_15_hide','glass_15_unhide'] call expEden_fnc_Destroyer01HandleDamage3den}";
			};
			class brokeGlass16: brokeGlass1
			{
				property="brokeGlass16";
				displayName="$STR_Globe_Land_Destroyer_01_hull_02_F_Attributes_brokeGlass16";
				expression="if(_value)then{[_this,'glass_16_hide','glass_16_unhide'] call expEden_fnc_Destroyer01HandleDamage3den}";
			};
			class brokeGlass17: brokeGlass1
			{
				property="brokeGlass17";
				displayName="$STR_Globe_Land_Destroyer_01_hull_02_F_Attributes_brokeGlass17";
				expression="if(_value)then{[_this,'glass_17_hide','glass_17_unhide'] call expEden_fnc_Destroyer01HandleDamage3den}";
			};
			class brokeGlass18: brokeGlass1
			{
				property="brokeGlass18";
				displayName="$STR_Globe_Land_Destroyer_01_hull_02_F_Attributes_brokeGlass18";
				expression="if(_value)then{[_this,'glass_18_hide','glass_18_unhide'] call expEden_fnc_Destroyer01HandleDamage3den}";
			};
		};
	};
	class Land_Destroyer_01_hull_03_F: Land_Destroyer_01_hull_base_F
	{
		scope=2;
		scopeCurator=2;
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Destroyer_01_hull_03_F.jpg";
		editorCategory="EdCat_Structures_Altis";
		editorSubcategory="EdSubcat_StaticShips";
		displayName="$STR_Globe_Land_Destroyer_01_hull_03_F";
	};
	class Land_Destroyer_01_hull_04_F: Land_Destroyer_01_hull_base_F
	{
		scope=2;
		scopeCurator=2;
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Destroyer_01_hull_04_F.jpg";
		editorCategory="EdCat_Structures_Altis";
		editorSubcategory="EdSubcat_StaticShips";
		displayName="$STR_Globe_Land_Destroyer_01_hull_04_F";
		class Attributes
		{
			class ShipHangarDoorState_hull04
			{
				displayName="$STR_3den_object_attribute_ShipHangarDoorState_displayname";
				tooltip="$STR_3den_object_attribute_ShipHangarDoorState_tooltip";
				property="ShipHangarDoorState_hull04";
				control="CheckboxNumber";
				expression="[_this, _value, false] spawn bis_fnc_destroyer01AnimateHangarDoors;";
				defaultValue="0";
				typeName="NUMBER";
			};
		};
	};
	class Land_Destroyer_01_hull_05_F: Land_Destroyer_01_hull_base_F
	{
		scope=2;
		scopeCurator=2;
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Destroyer_01_hull_05_F.jpg";
		editorCategory="EdCat_Structures_Altis";
		editorSubcategory="EdSubcat_StaticShips";
		displayName="$STR_Globe_Land_Destroyer_01_hull_05_F";
		class Attributes
		{
			class CustomShipNameTexture0_hull05
			{
				displayName="$STR_3den_object_attribute_CustomShipNameTexture0_displayname";
				tooltip="$STR_3den_object_attribute_objecttexturecustom_tooltip";
				property="CustomShipNameTexture0_hull05";
				control="Edit";
				expression="_this setObjectTextureGlobal [0, _value];";
				typeName="STRING";
				defaultValue="'a3\boat_f_destroyer\destroyer_01\data\destroyer_01_tag_01_co.paa'";
			};
			class SwitchTextureDestroyer2
			{
				property="SwitchTextureDestroyer2";
				displayName="$STR_3den_object_attribute_CustomShipNameTexture0_displayname";
				control="Combo";
				expression="_this setObjectTextureGlobal [0, _value]";
				defaultValue="'\A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_tag_01_co.paa'";
				typeName="STRING";
				class values
				{
					class tag1
					{
						name="USS Liberty";
						value="\A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_tag_01_co.paa";
						picture="\A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_tag_01_co.paa";
					};
					class tag2
					{
						name="USS Virtuous";
						value="\A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_tag_02_co.paa";
						picture="\A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_tag_02_co.paa";
					};
					class tag3
					{
						name="USS Constitution";
						value="\A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_tag_03_co.paa";
						picture="\A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_tag_03_co.paa";
					};
					class tag4
					{
						name="USS Valor";
						value="\A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_tag_04_co.paa";
						picture="\A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_tag_04_co.paa";
					};
					class tag5
					{
						name="USS Glory";
						value="\A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_tag_05_co.paa";
						picture="\A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_tag_05_co.paa";
					};
					class tag6
					{
						name="USS Democracy";
						value="\A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_tag_06_co.paa";
						picture="\A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_tag_06_co.paa";
					};
					class tag7
					{
						name="USS Micdonals";
						value="\A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_tag_07_co.paa";
						picture="\A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_tag_07_co.paa";
					};
					class tagEmpty
					{
						name="$STR_Cfg_Markers_Empty";
						value="";
						picture="";
					};
				};
			};
			class RandomTag
			{
				property="RandomTag";
				displayName="$STR_Globe_Land_Destroyer_01_hull_01_F_Attributes_RandomNumber";
				control="Checkbox";
				defaultValue="false";
				expression="if(_value)then{_this call compile preprocessFileLineNumbers '\A3\Structures_F_Globe\Military\Boats\scripts\randomize_tag.sqf'}";
			};
		};
	};
	class Land_Destroyer_01_interior_02_F: Land_Destroyer_01_hull_base_F
	{
		scope=2;
		scopeCurator=2;
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Destroyer_01_interior_02_F.jpg";
		editorCategory="EdCat_Structures_Altis";
		editorSubcategory="EdSubcat_StaticShips";
		displayName="$STR_Globe_Land_Destroyer_01_interior_02_F";
	};
	class Land_Destroyer_01_interior_03_F: Land_Destroyer_01_hull_base_F
	{
		scope=2;
		scopeCurator=2;
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Destroyer_01_interior_03_F.jpg";
		editorCategory="EdCat_Structures_Altis";
		editorSubcategory="EdSubcat_StaticShips";
		displayName="$STR_Globe_Land_Destroyer_01_interior_03_F";
	};
	class Land_Destroyer_01_interior_04_F: Land_Destroyer_01_hull_base_F
	{
		scope=2;
		scopeCurator=2;
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Destroyer_01_interior_04_F.jpg";
		editorCategory="EdCat_Structures_Altis";
		editorSubcategory="EdSubcat_StaticShips";
		displayName="$STR_Globe_Land_Destroyer_01_interior_04_F";
	};
	class Land_Carrier_01_hull_01_F: Land_Carrier_01_hull_base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_Land_Carrier_01_hull_01_F";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\Cfgvehicles\Land_Carrier_01_hull_01_F.jpg";
		editorCategory="EdCat_Structures_Altis";
		editorSubcategory="EdSubcat_StaticShips";
	};
	class Land_Carrier_01_hull_02_F: Land_Carrier_01_hull_base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_Land_Carrier_01_hull_02_F";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\Cfgvehicles\Land_Carrier_01_hull_02_F.jpg";
		editorCategory="EdCat_Structures_Altis";
		editorSubcategory="EdSubcat_StaticShips";
	};
	class Land_Carrier_01_hull_03_1_F: Land_Carrier_01_hull_base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_Land_Carrier_01_hull_03_1_F";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\Cfgvehicles\Land_Carrier_01_hull_03_1_F.jpg";
		editorCategory="EdCat_Structures_Altis";
		editorSubcategory="EdSubcat_StaticShips";
	};
	class Land_Carrier_01_hull_03_2_F: Land_Carrier_01_hull_base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_Land_Carrier_01_hull_03_2_F";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\Cfgvehicles\Land_Carrier_01_hull_03_2_F.jpg";
		editorCategory="EdCat_Structures_Altis";
		editorSubcategory="EdSubcat_StaticShips";
	};
	class Land_Carrier_01_hull_04_1_F: Land_Carrier_01_hull_base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_Land_Carrier_01_hull_04_1_F";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\Cfgvehicles\Land_Carrier_01_hull_04_1_F.jpg";
		editorCategory="EdCat_Structures_Altis";
		editorSubcategory="EdSubcat_StaticShips";
		class AnimationSources
		{
			class Deflector_2
			{
				source="user";
				animPeriod=1;
				initPhase=0;
				sound="carrier_01_deflector";
				soundPosition="pos_catapult_01";
			};
			class Deflector_2_hydraulic_1: Deflector_2
			{
			};
			class Deflector_2_hydraulic_2: Deflector_2
			{
			};
			class Deflector_2_hydraulic_3: Deflector_2
			{
			};
		};
		class Attributes
		{
			class Deflectors2
			{
				displayName="$STR_Globe_Land_Land_Carrier_01_base_F_Attributes_Deflector2";
				tooltip="$STR_Globe_Land_Land_Carrier_01_base_F_Attributes_Deflector1_Tooltip";
				property="Deflectors2";
				control="Slider";
				defaultValue=0;
				expression="{_this animate [_x,_value*10,true]} forEach animationNames _this;";
			};
		};
	};
	class Land_Carrier_01_hull_04_2_F: Land_Carrier_01_hull_base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_Land_Carrier_01_hull_04_2_F";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\Cfgvehicles\Land_Carrier_01_hull_04_2_F.jpg";
		editorCategory="EdCat_Structures_Altis";
		editorSubcategory="EdSubcat_StaticShips";
		class AnimationSources
		{
			class Deflector_1
			{
				source="user";
				animPeriod=1;
				initPhase=0;
				sound="carrier_01_deflector";
				soundPosition="pos_catapult_01";
			};
			class Deflector_1_hydraulic_1: Deflector_1
			{
			};
			class Deflector_1_hydraulic_2: Deflector_1
			{
			};
			class Deflector_1_hydraulic_3: Deflector_1
			{
			};
		};
		class Attributes
		{
			class Deflectors1
			{
				displayName="$STR_Globe_Land_Land_Carrier_01_base_F_Attributes_Deflector1";
				tooltip="$STR_Globe_Land_Land_Carrier_01_base_F_Attributes_Deflector1_Tooltip";
				property="Deflectors1";
				control="Slider";
				defaultValue=0;
				expression="{_this animate [_x,_value*10,true]} forEach animationNames _this;";
			};
		};
	};
	class Land_Carrier_01_hull_05_1_F: Land_Carrier_01_hull_base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_Land_Carrier_01_hull_05_1_F";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\Cfgvehicles\Land_Carrier_01_hull_05_1_F.jpg";
		editorCategory="EdCat_Structures_Altis";
		editorSubcategory="EdSubcat_StaticShips";
	};
	class Land_Carrier_01_hull_05_2_F: Land_Carrier_01_hull_base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_Land_Carrier_01_hull_05_2_F";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\Cfgvehicles\Land_Carrier_01_hull_05_2_F.jpg";
		editorCategory="EdCat_Structures_Altis";
		editorSubcategory="EdSubcat_StaticShips";
	};
	class Land_Carrier_01_hull_06_1_F: Land_Carrier_01_hull_base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_Land_Carrier_01_hull_06_1_F";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\Cfgvehicles\Land_Carrier_01_hull_06_1_F.jpg";
		editorCategory="EdCat_Structures_Altis";
		editorSubcategory="EdSubcat_StaticShips";
	};
	class Land_Carrier_01_hull_06_2_F: Land_Carrier_01_hull_base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_Land_Carrier_01_hull_06_2_F";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\Cfgvehicles\Land_Carrier_01_hull_06_2_F.jpg";
		editorCategory="EdCat_Structures_Altis";
		editorSubcategory="EdSubcat_StaticShips";
	};
	class Land_Carrier_01_hull_07_1_F: Land_Carrier_01_hull_base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_Land_Carrier_01_hull_07_1_F";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\Cfgvehicles\Land_Carrier_01_hull_07_1_F.jpg";
		editorCategory="EdCat_Structures_Altis";
		editorSubcategory="EdSubcat_StaticShips";
		class AnimationSources
		{
			class Deflector_3
			{
				source="user";
				animPeriod=1;
				initPhase=0;
				sound="carrier_01_deflector";
				soundPosition="pos_catapult_01";
			};
			class Deflector_3_hydraulic_1: Deflector_3
			{
			};
			class Deflector_3_hydraulic_2: Deflector_3
			{
			};
			class Deflector_3_hydraulic_3: Deflector_3
			{
			};
			class Deflector_4: Deflector_3
			{
			};
			class Deflector_4_hydraulic_1: Deflector_3
			{
			};
			class Deflector_4_hydraulic_2: Deflector_3
			{
			};
			class Deflector_4_hydraulic_3: Deflector_3
			{
			};
		};
		class Attributes
		{
			class Deflectors3_1
			{
				displayName="$STR_Globe_Land_Land_Carrier_01_base_F_Attributes_Deflector3";
				tooltip="$STR_Globe_Land_Land_Carrier_01_base_F_Attributes_Deflector1_Tooltip";
				property="Deflectors3_1";
				control="Slider";
				defaultValue=0;
				expression="{_this animate [_x,_value*10,true]} forEach ['Deflector_3','Deflector_3_hydraulic_1','Deflector_3_hydraulic_2','Deflector_3_hydraulic_3']";
			};
			class Deflectors3_2: Deflectors3_1
			{
				displayName="$STR_Globe_Land_Land_Carrier_01_base_F_Attributes_Deflector4";
				property="Deflectors3_2";
				expression="{_this animate [_x,_value*10,true]} forEach ['Deflector_4','Deflector_4_hydraulic_1','Deflector_4_hydraulic_2','Deflector_4_hydraulic_3']";
			};
		};
	};
	class Land_Carrier_01_hull_07_2_F: Land_Carrier_01_hull_base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_Land_Carrier_01_hull_07_2_F";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\Cfgvehicles\Land_Carrier_01_hull_07_2_F.jpg";
		editorCategory="EdCat_Structures_Altis";
		editorSubcategory="EdSubcat_StaticShips";
	};
	class Land_Carrier_01_hull_08_1_F: Land_Carrier_01_hull_01_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_Land_Carrier_01_hull_08_1_F";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\Cfgvehicles\Land_Carrier_01_hull_08_1_F.jpg";
		editorCategory="EdCat_Structures_Altis";
		editorSubcategory="EdSubcat_StaticShips";
	};
	class Land_Carrier_01_hull_08_2_F: Land_Carrier_01_hull_01_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_Land_Carrier_01_hull_08_2_F";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\Cfgvehicles\Land_Carrier_01_hull_08_2_F.jpg";
		editorCategory="EdCat_Structures_Altis";
		editorSubcategory="EdSubcat_StaticShips";
	};
	class Land_Carrier_01_hull_09_1_F: Land_Carrier_01_hull_01_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_Land_Carrier_01_hull_09_1_F";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\Cfgvehicles\Land_Carrier_01_hull_09_1_F.jpg";
		editorCategory="EdCat_Structures_Altis";
		editorSubcategory="EdSubcat_StaticShips";
	};
	class Land_Carrier_01_hull_09_2_F: Land_Carrier_01_hull_01_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_Land_Carrier_01_hull_09_2_F";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\Cfgvehicles\Land_Carrier_01_hull_09_2_F.jpg";
		editorCategory="EdCat_Structures_Altis";
		editorSubcategory="EdSubcat_StaticShips";
	};
	class Land_Carrier_01_island_01_F: Land_Carrier_01_hull_01_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_Land_Carrier_01_island_01_F";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\Cfgvehicles\Land_Carrier_01_island_01_F.jpg";
		editorCategory="EdCat_Structures_Altis";
		editorSubcategory="EdSubcat_StaticShips";
	};
	class Land_Carrier_01_island_02_F: Land_Carrier_01_island_01_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_Land_Carrier_01_island_02_F";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\Cfgvehicles\Land_Carrier_01_island_02_F.jpg";
		editorCategory="EdCat_Structures_Altis";
		editorSubcategory="EdSubcat_StaticShips";
	};
	class Land_Carrier_01_island_03_F: Land_Carrier_01_island_01_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_Land_Carrier_01_island_03_F";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\Cfgvehicles\Land_Carrier_01_island_03_F.jpg";
		editorCategory="EdCat_Structures_Altis";
		editorSubcategory="EdSubcat_StaticShips";
	};
	class Land_Destroyer_01_base_F: StaticShip
	{
		class Attributes
		{
			class RandomNumber1
			{
				property="RandomNumber1";
				displayName="$STR_Globe_Land_Destroyer_01_hull_01_F_Attributes_RandomNumber";
				control="Checkbox";
				defaultValue="false";
				expression="if (_value) then {([_this, 'Land_Destroyer_01_hull_01_F'] call bis_fnc_destroyer01GetShipPart) call compile preprocessFileLineNumbers '\A3\Structures_F_Globe\Military\Boats\scripts\randomize.sqf'}";
			};
			class brokeGlass1
			{
				property="brokeGlass1";
				displayName="$STR_Globe_Land_Destroyer_01_hull_02_F_Attributes_brokeGlass1";
				control="Checkbox";
				defaultValue="false";
				expression="if (_value) then {[([_this,'Land_Destroyer_01_hull_02_F'] call bis_fnc_destroyer01GetShipPart),'glass_1_hide','glass_1_unhide'] call expEden_fnc_Destroyer01HandleDamage3den}";
			};
			class brokeGlass2: brokeGlass1
			{
				property="brokeGlass2";
				displayName="$STR_Globe_Land_Destroyer_01_hull_02_F_Attributes_brokeGlass2";
				expression="if (_value) then {[([_this,'Land_Destroyer_01_hull_02_F'] call bis_fnc_destroyer01GetShipPart),'glass_2_hide','glass_2_unhide'] call expEden_fnc_Destroyer01HandleDamage3den}";
			};
			class brokeGlass3: brokeGlass1
			{
				property="brokeGlass3";
				displayName="$STR_Globe_Land_Destroyer_01_hull_02_F_Attributes_brokeGlass3";
				expression="if (_value) then {[([_this,'Land_Destroyer_01_hull_02_F'] call bis_fnc_destroyer01GetShipPart),'glass_3_hide','glass_3_unhide'] call expEden_fnc_Destroyer01HandleDamage3den}";
			};
			class brokeGlass4: brokeGlass1
			{
				property="brokeGlass4";
				displayName="$STR_Globe_Land_Destroyer_01_hull_02_F_Attributes_brokeGlass4";
				expression="if (_value) then {[([_this,'Land_Destroyer_01_hull_02_F'] call bis_fnc_destroyer01GetShipPart),'glass_4_hide','glass_4_unhide'] call expEden_fnc_Destroyer01HandleDamage3den}";
			};
			class brokeGlass5: brokeGlass1
			{
				property="brokeGlass5";
				displayName="$STR_Globe_Land_Destroyer_01_hull_02_F_Attributes_brokeGlass5";
				expression="if (_value) then {[([_this,'Land_Destroyer_01_hull_02_F'] call bis_fnc_destroyer01GetShipPart),'glass_5_hide','glass_5_unhide'] call expEden_fnc_Destroyer01HandleDamage3den}";
			};
			class brokeGlass6: brokeGlass1
			{
				property="brokeGlass6";
				displayName="$STR_Globe_Land_Destroyer_01_hull_02_F_Attributes_brokeGlass6";
				expression="if (_value) then {[([_this,'Land_Destroyer_01_hull_02_F'] call bis_fnc_destroyer01GetShipPart),'glass_6_hide','glass_6_unhide'] call expEden_fnc_Destroyer01HandleDamage3den}";
			};
			class brokeGlass7: brokeGlass1
			{
				property="brokeGlass7";
				displayName="$STR_Globe_Land_Destroyer_01_hull_02_F_Attributes_brokeGlass7";
				expression="if (_value) then {[([_this,'Land_Destroyer_01_hull_02_F'] call bis_fnc_destroyer01GetShipPart),'glass_7_hide','glass_7_unhide'] call expEden_fnc_Destroyer01HandleDamage3den}";
			};
			class brokeGlass8: brokeGlass1
			{
				property="brokeGlass8";
				displayName="$STR_Globe_Land_Destroyer_01_hull_02_F_Attributes_brokeGlass8";
				expression="if (_value) then {[([_this,'Land_Destroyer_01_hull_02_F'] call bis_fnc_destroyer01GetShipPart),'glass_8_hide','glass_8_unhide'] call expEden_fnc_Destroyer01HandleDamage3den}";
			};
			class brokeGlass9: brokeGlass1
			{
				property="brokeGlass9";
				displayName="$STR_Globe_Land_Destroyer_01_hull_02_F_Attributes_brokeGlass9";
				expression="if (_value) then {[([_this,'Land_Destroyer_01_hull_02_F'] call bis_fnc_destroyer01GetShipPart),'glass_9_hide','glass_9_unhide'] call expEden_fnc_Destroyer01HandleDamage3den}";
			};
			class brokeGlass10: brokeGlass1
			{
				property="brokeGlass10";
				displayName="$STR_Globe_Land_Destroyer_01_hull_02_F_Attributes_brokeGlass10";
				expression="if (_value) then {[([_this,'Land_Destroyer_01_hull_02_F'] call bis_fnc_destroyer01GetShipPart),'glass_10_hide','glass_10_unhide'] call expEden_fnc_Destroyer01HandleDamage3den}";
			};
			class brokeGlass11: brokeGlass1
			{
				property="brokeGlass11";
				displayName="$STR_Globe_Land_Destroyer_01_hull_02_F_Attributes_brokeGlass11";
				expression="if (_value) then {[([_this,'Land_Destroyer_01_hull_02_F'] call bis_fnc_destroyer01GetShipPart),'glass_11_hide','glass_11_unhide'] call expEden_fnc_Destroyer01HandleDamage3den}";
			};
			class brokeGlass12: brokeGlass1
			{
				property="brokeGlass12";
				displayName="$STR_Globe_Land_Destroyer_01_hull_02_F_Attributes_brokeGlass12";
				expression="if (_value) then {[([_this,'Land_Destroyer_01_hull_02_F'] call bis_fnc_destroyer01GetShipPart),'glass_12_hide','glass_12_unhide'] call expEden_fnc_Destroyer01HandleDamage3den}";
			};
			class brokeGlass13: brokeGlass1
			{
				property="brokeGlass13";
				displayName="$STR_Globe_Land_Destroyer_01_hull_02_F_Attributes_brokeGlass13";
				expression="if (_value) then {[([_this,'Land_Destroyer_01_hull_02_F'] call bis_fnc_destroyer01GetShipPart),'glass_13_hide','glass_13_unhide'] call expEden_fnc_Destroyer01HandleDamage3den}";
			};
			class brokeGlass14: brokeGlass1
			{
				property="brokeGlass14";
				displayName="$STR_Globe_Land_Destroyer_01_hull_02_F_Attributes_brokeGlass14";
				expression="if (_value) then {[([_this,'Land_Destroyer_01_hull_02_F'] call bis_fnc_destroyer01GetShipPart),'glass_14_hide','glass_14_unhide'] call expEden_fnc_Destroyer01HandleDamage3den}";
			};
			class brokeGlass15: brokeGlass1
			{
				property="brokeGlass15";
				displayName="$STR_Globe_Land_Destroyer_01_hull_02_F_Attributes_brokeGlass15";
				expression="if (_value) then {[([_this,'Land_Destroyer_01_hull_02_F'] call bis_fnc_destroyer01GetShipPart),'glass_15_hide','glass_15_unhide'] call expEden_fnc_Destroyer01HandleDamage3den}";
			};
			class brokeGlass16: brokeGlass1
			{
				property="brokeGlass16";
				displayName="$STR_Globe_Land_Destroyer_01_hull_02_F_Attributes_brokeGlass16";
				expression="if (_value) then {[([_this,'Land_Destroyer_01_hull_02_F'] call bis_fnc_destroyer01GetShipPart),'glass_16_hide','glass_16_unhide'] call expEden_fnc_Destroyer01HandleDamage3den}";
			};
			class brokeGlass17: brokeGlass1
			{
				property="brokeGlass17";
				displayName="$STR_Globe_Land_Destroyer_01_hull_02_F_Attributes_brokeGlass17";
				expression="if (_value) then {[([_this,'Land_Destroyer_01_hull_02_F'] call bis_fnc_destroyer01GetShipPart),'glass_17_hide','glass_17_unhide'] call expEden_fnc_Destroyer01HandleDamage3den}";
			};
			class brokeGlass18: brokeGlass1
			{
				property="brokeGlass18";
				displayName="$STR_Globe_Land_Destroyer_01_hull_02_F_Attributes_brokeGlass18";
				expression="if (_value) then {[([_this,'Land_Destroyer_01_hull_02_F'] call bis_fnc_destroyer01GetShipPart),'glass_18_hide','glass_18_unhide'] call expEden_fnc_Destroyer01HandleDamage3den}";
			};
			class SwitchTextureDestroyer3
			{
				property="SwitchTextureDestroyer3";
				displayName="$STR_3den_object_attribute_CustomShipNameTexture0_displayname";
				control="Combo";
				expression="([_this,'Land_Destroyer_01_hull_05_F'] call bis_fnc_destroyer01GetShipPart) setObjectTextureGlobal [0, _value]";
				defaultValue="'\A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_tag_01_co.paa'";
				typeName="STRING";
				class values
				{
					class tag1
					{
						name="USS Liberty";
						value="\A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_tag_01_co.paa";
						picture="\A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_tag_01_co.paa";
					};
					class tag2
					{
						name="USS Virtuous";
						value="\A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_tag_02_co.paa";
						picture="\A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_tag_02_co.paa";
					};
					class tag3
					{
						name="USS Constitution";
						value="\A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_tag_03_co.paa";
						picture="\A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_tag_03_co.paa";
					};
					class tag4
					{
						name="USS Valor";
						value="\A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_tag_04_co.paa";
						picture="\A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_tag_04_co.paa";
					};
					class tag5
					{
						name="USS Glory";
						value="\A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_tag_05_co.paa";
						picture="\A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_tag_05_co.paa";
					};
					class tag6
					{
						name="USS Democracy";
						value="\A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_tag_06_co.paa";
						picture="\A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_tag_06_co.paa";
					};
					class tag7
					{
						name="USS Micdonals";
						value="\A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_tag_07_co.paa";
						picture="\A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_tag_07_co.paa";
					};
				};
			};
			class RandomTag
			{
				property="RandomTag";
				displayName="$STR_Globe_Land_Destroyer_01_hull_01_F_Attributes_RandomTag";
				control="Checkbox";
				defaultValue="false";
				expression="if (_value) then {([_this,'Land_Destroyer_01_hull_05_F'] call bis_fnc_destroyer01GetShipPart) call compile preprocessFileLineNumbers '\A3\Structures_F_Globe\Military\Boats\scripts\randomize_Tag.sqf'}";
			};
		};
	};
};
