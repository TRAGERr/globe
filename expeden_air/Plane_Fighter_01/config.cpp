class CfgPatches
{
	class Air_Globe_Plane_Fighter_01
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
	class Plane_Fighter_01_Base_F: Plane_Base_F
	{
		class Attributes
		{
			class NumberHull_01
			{
				displayName="$STR_3den_object_attribute_objecttexturecustom7_displayname";
				property="NumberHull_01";
				control="Combo";
				expression="_this setObjectTextureGlobal [7,_value]; _this setObjectMaterialGlobal [7,'a3\air_f_jets\plane_fighter_01\data\numbers\fighter_01_numbers.rvmat']";
				defaultValue="(getObjectTextures _this) # 7";
				typeName="STRING";
				class Values
				{
					class Fighter_01_00
					{
						value="A3\Air_F_Jets\Plane_Fighter_01\Data\Numbers\Fighter_01_00_ca.paa";
						picture="A3\Air_F_Jets\Plane_Fighter_01\Data\Numbers\Fighter_01_00_ca.paa";
					};
					class Fighter_01_01
					{
						value="A3\Air_F_Jets\Plane_Fighter_01\Data\Numbers\Fighter_01_01_ca.paa";
						picture="A3\Air_F_Jets\Plane_Fighter_01\Data\Numbers\Fighter_01_01_ca.paa";
					};
					class Fighter_01_02
					{
						value="A3\Air_F_Jets\Plane_Fighter_01\Data\Numbers\Fighter_01_02_ca.paa";
						picture="A3\Air_F_Jets\Plane_Fighter_01\Data\Numbers\Fighter_01_02_ca.paa";
					};
					class Fighter_01_03
					{
						value="A3\Air_F_Jets\Plane_Fighter_01\Data\Numbers\Fighter_01_03_ca.paa";
						picture="A3\Air_F_Jets\Plane_Fighter_01\Data\Numbers\Fighter_01_03_ca.paa";
					};
					class Fighter_01_04
					{
						value="A3\Air_F_Jets\Plane_Fighter_01\Data\Numbers\Fighter_01_04_ca.paa";
						picture="A3\Air_F_Jets\Plane_Fighter_01\Data\Numbers\Fighter_01_04_ca.paa";
					};
					class Fighter_01_05
					{
						value="A3\Air_F_Jets\Plane_Fighter_01\Data\Numbers\Fighter_01_05_ca.paa";
						picture="A3\Air_F_Jets\Plane_Fighter_01\Data\Numbers\Fighter_01_05_ca.paa";
					};
					class Fighter_01_06
					{
						value="A3\Air_F_Jets\Plane_Fighter_01\Data\Numbers\Fighter_01_06_ca.paa";
						picture="A3\Air_F_Jets\Plane_Fighter_01\Data\Numbers\Fighter_01_06_ca.paa";
					};
					class Fighter_01_07
					{
						value="A3\Air_F_Jets\Plane_Fighter_01\Data\Numbers\Fighter_01_07_ca.paa";
						picture="A3\Air_F_Jets\Plane_Fighter_01\Data\Numbers\Fighter_01_07_ca.paa";
					};
					class Fighter_01_08
					{
						value="A3\Air_F_Jets\Plane_Fighter_01\Data\Numbers\Fighter_01_08_ca.paa";
						picture="A3\Air_F_Jets\Plane_Fighter_01\Data\Numbers\Fighter_01_08_ca.paa";
					};
					class Fighter_01_09
					{
						value="A3\Air_F_Jets\Plane_Fighter_01\Data\Numbers\Fighter_01_09_ca.paa";
						picture="A3\Air_F_Jets\Plane_Fighter_01\Data\Numbers\Fighter_01_09_ca.paa";
					};
				};
			};
			class NumberHull_02: NumberHull_01
			{
				displayName="$STR_3den_object_attribute_objecttexturecustom8_displayname";
				property="NumberHull_02";
				expression="_this setObjectTextureGlobal [8,_value]; _this setObjectMaterialGlobal [8,'a3\air_f_jets\plane_fighter_01\data\numbers\fighter_01_numbers.rvmat']";
				defaultValue="(getObjectTextures _this) # 8";
			};
			class NumberHull_03: NumberHull_01
			{
				displayName="$STR_3den_object_attribute_objecttexturecustom9_displayname";
				property="NumberHull_03";
				expression="_this setObjectTextureGlobal [9,_value]; _this setObjectMaterialGlobal [9,'a3\air_f_jets\plane_fighter_01\data\numbers\fighter_01_numbers.rvmat']";
				defaultValue="(getObjectTextures _this) # 9";
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
