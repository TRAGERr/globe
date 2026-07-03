class CfgPatches
{
	class Air_Globe_Plane_Fighter_02
	{
		addonRootClass="Air_Globe";
		requiredAddons[]=
		{
			"Air_Globe"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Plane_Base_F;
	class Plane_Fighter_02_Base_F: Plane_Base_F
	{
		class Attributes
		{
			class NumberHull_01
			{
				displayName="$STR_3den_object_attribute_objecttexturecustom3_displayname";
				property="NumberHull_01";
				control="Combo";
				expression="_this setObjectTextureGlobal [3,_value]; _this setObjectMaterialGlobal [3,'a3\air_f_jets\plane_Fighter_02\data\numbers\Fighter_02_numbers.rvmat']";
				defaultValue="(getObjectTextures _this) # 3";
				typeName="STRING";
				class Values
				{
					class Fighter_02_00
					{
						value="a3\air_f_jets\plane_fighter_02\data\numbers\fighter_02_number_00_co.paa";
						picture="a3\air_f_jets\plane_fighter_02\data\numbers\fighter_02_number_00_co.paa";
					};
					class Fighter_02_01
					{
						value="a3\air_f_jets\plane_fighter_02\data\numbers\fighter_02_number_01_co.paa";
						picture="a3\air_f_jets\plane_fighter_02\data\numbers\fighter_02_number_01_co.paa";
					};
					class Fighter_02_02
					{
						value="a3\air_f_jets\plane_fighter_02\data\numbers\fighter_02_number_02_co.paa";
						picture="a3\air_f_jets\plane_fighter_02\data\numbers\fighter_02_number_02_co.paa";
					};
					class Fighter_02_03
					{
						value="a3\air_f_jets\plane_fighter_02\data\numbers\fighter_02_number_03_co.paa";
						picture="a3\air_f_jets\plane_fighter_02\data\numbers\fighter_02_number_03_co.paa";
					};
					class Fighter_02_04
					{
						value="a3\air_f_jets\plane_fighter_02\data\numbers\fighter_02_number_04_co.paa";
						picture="a3\air_f_jets\plane_fighter_02\data\numbers\fighter_02_number_04_co.paa";
					};
					class Fighter_02_05
					{
						value="a3\air_f_jets\plane_fighter_02\data\numbers\fighter_02_number_05_co.paa";
						picture="a3\air_f_jets\plane_fighter_02\data\numbers\fighter_02_number_05_co.paa";
					};
					class Fighter_02_06
					{
						value="a3\air_f_jets\plane_fighter_02\data\numbers\fighter_02_number_06_co.paa";
						picture="a3\air_f_jets\plane_fighter_02\data\numbers\fighter_02_number_06_co.paa";
					};
					class Fighter_02_07
					{
						value="a3\air_f_jets\plane_fighter_02\data\numbers\fighter_02_number_07_co.paa";
						picture="a3\air_f_jets\plane_fighter_02\data\numbers\fighter_02_number_07_co.paa";
					};
					class Fighter_02_08
					{
						value="a3\air_f_jets\plane_fighter_02\data\numbers\fighter_02_number_08_co.paa";
						picture="a3\air_f_jets\plane_fighter_02\data\numbers\fighter_02_number_08_co.paa";
					};
					class Fighter_02_09
					{
						value="a3\air_f_jets\plane_fighter_02\data\numbers\fighter_02_number_09_co.paa";
						picture="a3\air_f_jets\plane_fighter_02\data\numbers\fighter_02_number_09_co.paa";
					};
				};
			};
			class NumberHull_02: NumberHull_01
			{
				displayName="$STR_3den_object_attribute_objecttexturecustom4_displayname";
				property="NumberHull_02";
				expression="_this setObjectTextureGlobal [4,_value]; _this setObjectMaterialGlobal [4,'a3\air_f_jets\plane_Fighter_02\data\numbers\fighter_02_numbers.rvmat']";
				defaultValue="(getObjectTextures _this) # 4";
			};
			class NumberHull_03: NumberHull_01
			{
				displayName="$STR_3den_object_attribute_objecttexturecustom5_displayname";
				property="NumberHull_03";
				expression="_this setObjectTextureGlobal [5,_value]; _this setObjectMaterialGlobal [5,'a3\air_f_jets\plane_Fighter_02\data\numbers\Fighter_02_numbers.rvmat']";
				defaultValue="(getObjectTextures _this) # 5";
			};
			class NumberHull_random
			{
				displayName="$STR_a3_rscdisplayarsenal_buttonrandom";
				property="NumberHull_random";
				control="CheckboxStateReversed";
				defaultValue="false";
				expression="if (_value) then {_this call expEden_fnc_fighterRandomHullNumber}";
			};
		};
	};
};
