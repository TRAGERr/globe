class CfgPatches
{
	class Air_Globe_VTOL_01
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
	class VTOL_Base_F;
	class VTOL_01_base_F: VTOL_Base_F
	{
		class Attributes
		{
			class NumberHull_hide
			{
				displayName="$STR_Globe_CfgVehicles_VTOL_01_base_F_Attributes0";
				property="NumberHull_hide";
				control="Checkbox";
				defaultValue="false";
				expression="if (_value isEqualTo true) then {		_this spawn {	waitUntil {time > 0};		_this setObjectTextureGlobal [4,''];		}}";
			};
		};
	};
};
