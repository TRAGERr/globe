class CfgPatches
{
	class Static_Globe_SAM_Systems
	{
		addonRootClass="A3_Static_F_HMG_02_ScopeShieldDeMount_a3_expEden";
		requiredAddons[]=
		{
			"A3_Static_F_HMG_02_ScopeShieldDeMount_a3_expEden",
			"A3_Static_F_Sams",
			"A3_Static_F_Jets"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgVehicles
{
	class StaticWeapon;
	class StaticMGWeapon: StaticWeapon
	{
		class Attributes;
		class EventHandlers;
	};
	class SAM_System_01_base_F: StaticMGWeapon
	{
		class Attributes: Attributes
		{
			class setTurretLimits0
			{
				displayName="$STR_Globe_CfgVehicles_StaticWeapon_Attributes_setTurretLimit_displayName0";
				tooltip="$STR_Globe_CfgVehicles_StaticWeapon_Attributes_setTurretLimit_tooltip0";
				property="setTurretLimits0";
				control="edit";
				defaultValue="(_this getTurretLimits [0])#0";
				validate="number";
				expression="_this setTurretLimits [ [0], _value, (_this getTurretLimits [0])#1, (_this getTurretLimits [0])#2, (_this getTurretLimits [0])#3 ]";
				wikiType="[[Number]]";
			};
			class setTurretLimits1: setTurretLimits0
			{
				displayName="$STR_Globe_CfgVehicles_StaticWeapon_Attributes_setTurretLimit_displayName1";
				tooltip="$STR_Globe_CfgVehicles_StaticWeapon_Attributes_setTurretLimit_tooltip1";
				property="setTurretLimits1";
				defaultValue="(_this getTurretLimits [0])#1";
				expression="_this setTurretLimits [ [0], (_this getTurretLimits [0])#0, _value, (_this getTurretLimits [0])#2, (_this getTurretLimits [0])#3 ]";
			};
			class setTurretLimits2: setTurretLimits0
			{
				displayName="$STR_Globe_CfgVehicles_StaticWeapon_Attributes_setTurretLimit_displayName2";
				property="setTurretLimits2";
				defaultValue="(_this getTurretLimits [0])#2";
				expression="_this setTurretLimits [ [0], (_this getTurretLimits [0])#0, (_this getTurretLimits [0])#1, _value, (_this getTurretLimits [0])#3 ]";
			};
			class setTurretLimits3: setTurretLimits1
			{
				displayName="$STR_Globe_CfgVehicles_StaticWeapon_Attributes_setTurretLimit_displayName3";
				property="setTurretLimits3";
				defaultValue="(_this getTurretLimits [0])#3";
				expression="_this setTurretLimits [ [0], (_this getTurretLimits [0])#0, (_this getTurretLimits [0])#1, (_this getTurretLimits [0])#2, _value ]";
			};
			class Globe_MissileMulfuntions
			{
				displayName="$STR_Globe_CfgVehicles_SAM_System_01_base_F_Attributes_Globe_MissileMulfuntions0";
				tooltip="$STR_Globe_CfgVehicles_SAM_System_01_base_F_Attributes_Globe_MissileMulfuntions1";
				property="Globe_MissileMulfuntions_property";
				control="slider";
				defaultValue=0;
				validate="number";
				expression="_this setVariable ['Globe_missileMulf', _value, true]";
				wikiType="[[Number]]";
			};
		};
		class EventHandlers: EventHandlers
		{
			class Globe_MulfSAM_EH
			{
				fired="_this remoteExec ['expEden_fnc_missileMulfunction',2]";
			};
		};
	};
	class SAM_System_02_base_F: StaticMGWeapon
	{
		class Attributes: Attributes
		{
			class setTurretLimits0
			{
				displayName="$STR_Globe_CfgVehicles_StaticWeapon_Attributes_setTurretLimit_displayName0";
				tooltip="$STR_Globe_CfgVehicles_StaticWeapon_Attributes_setTurretLimit_tooltip0";
				property="setTurretLimits0";
				control="edit";
				defaultValue="(_this getTurretLimits [0])#0";
				validate="number";
				expression="_this setTurretLimits [ [0], _value, (_this getTurretLimits [0])#1, (_this getTurretLimits [0])#2, (_this getTurretLimits [0])#3 ]";
				wikiType="[[Number]]";
			};
			class setTurretLimits1: setTurretLimits0
			{
				displayName="$STR_Globe_CfgVehicles_StaticWeapon_Attributes_setTurretLimit_displayName1";
				tooltip="$STR_Globe_CfgVehicles_StaticWeapon_Attributes_setTurretLimit_tooltip1";
				property="setTurretLimits1";
				defaultValue="(_this getTurretLimits [0])#1";
				expression="_this setTurretLimits [ [0], (_this getTurretLimits [0])#0, _value, (_this getTurretLimits [0])#2, (_this getTurretLimits [0])#3 ]";
			};
			class setTurretLimits2: setTurretLimits0
			{
				displayName="$STR_Globe_CfgVehicles_StaticWeapon_Attributes_setTurretLimit_displayName2";
				property="setTurretLimits2";
				defaultValue="(_this getTurretLimits [0])#2";
				expression="_this setTurretLimits [ [0], (_this getTurretLimits [0])#0, (_this getTurretLimits [0])#1, _value, (_this getTurretLimits [0])#3 ]";
			};
			class setTurretLimits3: setTurretLimits1
			{
				displayName="$STR_Globe_CfgVehicles_StaticWeapon_Attributes_setTurretLimit_displayName3";
				property="setTurretLimits3";
				defaultValue="(_this getTurretLimits [0])#3";
				expression="_this setTurretLimits [ [0], (_this getTurretLimits [0])#0, (_this getTurretLimits [0])#1, (_this getTurretLimits [0])#2, _value ]";
			};
			class Globe_MissileMulfuntions
			{
				displayName="$STR_Globe_CfgVehicles_SAM_System_01_base_F_Attributes_Globe_MissileMulfuntions0";
				tooltip="$STR_Globe_CfgVehicles_SAM_System_01_base_F_Attributes_Globe_MissileMulfuntions1";
				property="Globe_MissileMulfuntions_property";
				control="slider";
				defaultValue=0;
				validate="number";
				expression="_this setVariable ['Globe_missileMulf', _value, true]";
				wikiType="[[Number]]";
			};
		};
		class EventHandlers: EventHandlers
		{
			class Globe_MulfSAM_EH
			{
				fired="_this remoteExec ['expEden_fnc_missileMulfunction',2]";
			};
		};
	};
	class SAM_System_03_base_F: StaticMGWeapon
	{
		class Attributes: Attributes
		{
			class setTurretLimits0
			{
				displayName="$STR_Globe_CfgVehicles_StaticWeapon_Attributes_setTurretLimit_displayName0";
				tooltip="$STR_Globe_CfgVehicles_StaticWeapon_Attributes_setTurretLimit_tooltip0";
				property="setTurretLimits0";
				control="edit";
				defaultValue="(_this getTurretLimits [0])#0";
				validate="number";
				expression="_this setTurretLimits [ [0], _value, (_this getTurretLimits [0])#1, (_this getTurretLimits [0])#2, (_this getTurretLimits [0])#3 ]";
				wikiType="[[Number]]";
			};
			class setTurretLimits1: setTurretLimits0
			{
				displayName="$STR_Globe_CfgVehicles_StaticWeapon_Attributes_setTurretLimit_displayName1";
				tooltip="$STR_Globe_CfgVehicles_StaticWeapon_Attributes_setTurretLimit_tooltip1";
				property="setTurretLimits1";
				defaultValue="(_this getTurretLimits [0])#1";
				expression="_this setTurretLimits [ [0], (_this getTurretLimits [0])#0, _value, (_this getTurretLimits [0])#2, (_this getTurretLimits [0])#3 ]";
			};
			class setTurretLimits2: setTurretLimits0
			{
				displayName="$STR_Globe_CfgVehicles_StaticWeapon_Attributes_setTurretLimit_displayName2";
				property="setTurretLimits2";
				defaultValue="(_this getTurretLimits [0])#2";
				expression="_this setTurretLimits [ [0], (_this getTurretLimits [0])#0, (_this getTurretLimits [0])#1, _value, (_this getTurretLimits [0])#3 ]";
			};
			class setTurretLimits3: setTurretLimits1
			{
				displayName="$STR_Globe_CfgVehicles_StaticWeapon_Attributes_setTurretLimit_displayName3";
				property="setTurretLimits3";
				defaultValue="(_this getTurretLimits [0])#3";
				expression="_this setTurretLimits [ [0], (_this getTurretLimits [0])#0, (_this getTurretLimits [0])#1, (_this getTurretLimits [0])#2, _value ]";
			};
			class Globe_MissileMulfuntions
			{
				displayName="$STR_Globe_CfgVehicles_SAM_System_01_base_F_Attributes_Globe_MissileMulfuntions0";
				tooltip="$STR_Globe_CfgVehicles_SAM_System_01_base_F_Attributes_Globe_MissileMulfuntions1";
				property="Globe_MissileMulfuntions_property";
				control="slider";
				defaultValue=0;
				validate="number";
				expression="_this setVariable ['Globe_missileMulf', _value, true]";
				wikiType="[[Number]]";
			};
		};
		class EventHandlers: EventHandlers
		{
			class Globe_MulfSAM_EH
			{
				fired="_this remoteExec ['expEden_fnc_missileMulfunction',2]";
			};
		};
	};
	class SAM_System_04_base_F: StaticMGWeapon
	{
		class Attributes: Attributes
		{
			class setTurretLimits0
			{
				displayName="$STR_Globe_CfgVehicles_StaticWeapon_Attributes_setTurretLimit_displayName0";
				tooltip="$STR_Globe_CfgVehicles_StaticWeapon_Attributes_setTurretLimit_tooltip0";
				property="setTurretLimits0";
				control="edit";
				defaultValue="(_this getTurretLimits [0])#0";
				validate="number";
				expression="_this setTurretLimits [ [0], _value, (_this getTurretLimits [0])#1, (_this getTurretLimits [0])#2, (_this getTurretLimits [0])#3 ]";
				wikiType="[[Number]]";
			};
			class setTurretLimits1: setTurretLimits0
			{
				displayName="$STR_Globe_CfgVehicles_StaticWeapon_Attributes_setTurretLimit_displayName1";
				tooltip="$STR_Globe_CfgVehicles_StaticWeapon_Attributes_setTurretLimit_tooltip1";
				property="setTurretLimits1";
				defaultValue="(_this getTurretLimits [0])#1";
				expression="_this setTurretLimits [ [0], (_this getTurretLimits [0])#0, _value, (_this getTurretLimits [0])#2, (_this getTurretLimits [0])#3 ]";
			};
			class setTurretLimits2: setTurretLimits0
			{
				displayName="$STR_Globe_CfgVehicles_StaticWeapon_Attributes_setTurretLimit_displayName2";
				property="setTurretLimits2";
				defaultValue="(_this getTurretLimits [0])#2";
				expression="_this setTurretLimits [ [0], (_this getTurretLimits [0])#0, (_this getTurretLimits [0])#1, _value, (_this getTurretLimits [0])#3 ]";
			};
			class setTurretLimits3: setTurretLimits1
			{
				displayName="$STR_Globe_CfgVehicles_StaticWeapon_Attributes_setTurretLimit_displayName3";
				property="setTurretLimits3";
				defaultValue="(_this getTurretLimits [0])#3";
				expression="_this setTurretLimits [ [0], (_this getTurretLimits [0])#0, (_this getTurretLimits [0])#1, (_this getTurretLimits [0])#2, _value ]";
			};
			class Globe_MissileMulfuntions
			{
				displayName="$STR_Globe_CfgVehicles_SAM_System_01_base_F_Attributes_Globe_MissileMulfuntions0";
				tooltip="$STR_Globe_CfgVehicles_SAM_System_01_base_F_Attributes_Globe_MissileMulfuntions1";
				property="Globe_MissileMulfuntions_property";
				control="slider";
				defaultValue=0;
				validate="number";
				expression="_this setVariable ['Globe_missileMulf', _value, true]";
				wikiType="[[Number]]";
			};
		};
		class EventHandlers: EventHandlers
		{
			class Globe_MulfSAM_EH
			{
				fired="_this remoteExec ['expEden_fnc_missileMulfunction',2]";
			};
		};
	};
};
