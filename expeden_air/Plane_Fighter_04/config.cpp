class CfgPatches
{
	class Air_Globe_Plane_Fighter_04
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
	class Plane_Fighter_04_Base_F: Plane_Base_F
	{
		class Attributes
		{
			class NumberHull_01
			{
				displayName="$STR_3den_object_attribute_objecttexturecustom3_displayname";
				property="NumberHull_01";
				control="Combo";
				expression="_this setObjectTextureGlobal [3,_value]; _this setObjectMaterialGlobal [3,'a3\air_f_jets\plane_Fighter_04\data\numbers\Fighter_04_numbers.rvmat']";
				defaultValue="(getObjectTextures _this) # 3";
				typeName="STRING";
				class Values
				{
					class Fighter_04_00
					{
						value="a3\air_f_jets\plane_Fighter_04\data\numbers\Fighter_04_number_00_ca.paa";
						picture="a3\air_f_jets\plane_Fighter_04\data\numbers\Fighter_04_number_00_ca.paa";
					};
					class Fighter_04_01
					{
						value="a3\air_f_jets\plane_Fighter_04\data\numbers\Fighter_04_number_01_ca.paa";
						picture="a3\air_f_jets\plane_Fighter_04\data\numbers\Fighter_04_number_01_ca.paa";
					};
					class Fighter_04_02
					{
						value="a3\air_f_jets\plane_Fighter_04\data\numbers\Fighter_04_number_02_ca.paa";
						picture="a3\air_f_jets\plane_Fighter_04\data\numbers\Fighter_04_number_02_ca.paa";
					};
					class Fighter_04_03
					{
						value="a3\air_f_jets\plane_Fighter_04\data\numbers\Fighter_04_number_03_ca.paa";
						picture="a3\air_f_jets\plane_Fighter_04\data\numbers\Fighter_04_number_03_ca.paa";
					};
					class Fighter_04_04
					{
						value="a3\air_f_jets\plane_Fighter_04\data\numbers\Fighter_04_number_04_ca.paa";
						picture="a3\air_f_jets\plane_Fighter_04\data\numbers\Fighter_04_number_04_ca.paa";
					};
					class Fighter_04_05
					{
						value="a3\air_f_jets\plane_Fighter_04\data\numbers\Fighter_04_number_05_ca.paa";
						picture="a3\air_f_jets\plane_Fighter_04\data\numbers\Fighter_04_number_05_ca.paa";
					};
					class Fighter_04_06
					{
						value="a3\air_f_jets\plane_Fighter_04\data\numbers\Fighter_04_number_06_ca.paa";
						picture="a3\air_f_jets\plane_Fighter_04\data\numbers\Fighter_04_number_06_ca.paa";
					};
					class Fighter_04_07
					{
						value="a3\air_f_jets\plane_Fighter_04\data\numbers\Fighter_04_number_07_ca.paa";
						picture="a3\air_f_jets\plane_Fighter_04\data\numbers\Fighter_04_number_07_ca.paa";
					};
					class Fighter_04_08
					{
						value="a3\air_f_jets\plane_Fighter_04\data\numbers\Fighter_04_number_08_ca.paa";
						picture="a3\air_f_jets\plane_Fighter_04\data\numbers\Fighter_04_number_08_ca.paa";
					};
					class Fighter_04_09
					{
						value="a3\air_f_jets\plane_Fighter_04\data\numbers\fighter_04_number_09_ca.paa";
						picture="a3\air_f_jets\plane_Fighter_04\data\numbers\fighter_04_number_09_ca.paa";
					};
				};
			};
			class NumberHull_02: NumberHull_01
			{
				displayName="$STR_3den_object_attribute_objecttexturecustom4_displayname";
				property="NumberHull_02";
				expression="_this setObjectTextureGlobal [4,_value]; _this setObjectMaterialGlobal [4,'a3\air_f_jets\plane_Fighter_04\data\numbers\Fighter_04_numbers.rvmat']";
				defaultValue="(getObjectTextures _this) # 4";
			};
			class NumberHull_03: NumberHull_01
			{
				displayName="$STR_3den_object_attribute_objecttexturecustom5_displayname";
				property="NumberHull_03";
				expression="_this setObjectTextureGlobal [5,_value]; _this setObjectMaterialGlobal [5,'a3\air_f_jets\plane_Fighter_04\data\numbers\Fighter_04_numbers.rvmat']";
				defaultValue="(getObjectTextures _this) # 5";
			};
			class NumberHull_random
			{
				displayName="$STR_a3_rscdisplayarsenal_buttonrandom";
				property="NumberHull_random";
				control="CheckboxStateReversed";
				defaultValue=0;
				expression="if (_value isEqualTo true) then {_this call expEden_fnc_fighterRandomHullNumber}";
			};
		};
	};
};
