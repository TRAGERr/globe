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
				defaultValue=0;
				expression="if (_value isEqualTo true) then {_this call expEden_fnc_fighterRandomHullNumber}";
			};
		};
		class UserActions
		{
			class Plane_Fighter_01_Eject;
			class Plane_Fighter_01_tailhook_down: Plane_Fighter_01_Eject
			{
				statement="this animate ['tailhook',0]; this animate ['tailhook_door_l',0]; this animate ['tailhook_door_r',0]; this SetUserMFDvalue [4,1]; [this] spawn BIS_fnc_AircraftTailhook; [ [this], { params ['_veh']; if (player in _veh) then { playSound 'Plane_Fighter_01_tailhook_down_sound'} else { _veh say3D ['Plane_Fighter_01_tailhook_down_sound', 100, 1, false]; }; }] remoteExec ['spawn', 0];";
			};
			class Plane_Fighter_01_tailhook_up: Plane_Fighter_01_tailhook_down
			{
				statement="this animate ['tailhook',1]; this animate ['tailhook_door_l',1]; this animate ['tailhook_door_r',1]; this SetUserMFDvalue [4,0]; [ [this], { params ['_veh']; if (player in _veh) then { playSound 'Plane_Fighter_01_tailhook_up_sound'; } else { _veh say3D ['Plane_Fighter_01_tailhook_up_sound', 100, 1, false]; }; } ] remoteExec ['spawn', 0];";
			};
			class Plane_Fighter_01_fold_wings: Plane_Fighter_01_Eject
			{
				statement="this animate ['wing_fold_l',1]; this animate ['wing_fold_r',1]; this animate ['wing_fold_cover_l',1]; this animate ['wing_fold_cover_r',1]; [this, ['Plane_Fighter_01_foldwing_sound', 150, 1, 0, 0, false]] remoteExecCall ['say3D'];";
			};
			class Plane_Fighter_01_unfold_wings: Plane_Fighter_01_fold_wings
			{
				statement="this animate ['wing_fold_l',0]; this animate ['wing_fold_r',0]; this animate ['wing_fold_cover_l',0]; this animate ['wing_fold_cover_r',0]; [this, ['Plane_Fighter_01_foldwing_sound', 150, 1, 0, 0, false]] remoteExecCall ['say3D'];";
			};
		};
	};
};
