class CfgPatches
{
	class A3_Static_F_HMG_02_ScopeShieldDeMount_a3_expEden
	{
		author="Trager";
		name="O&T Expansion Eden - Static";
		url="https://steamcommunity.com/workshop/filedetails/?id=1923321700";
		requiredAddons[]=
		{
			"A3_expEden"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgVehicles
{
	class LandVehicle;
	class StaticWeapon: LandVehicle
	{
		class Turrets;
		class Attributes
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
			class desableWeaponDisassembly
			{
				property="desableWeaponDisassembly";
				control="CheckboxReversed";
				displayName="$STR_Globe_CfgVehicles_StaticMGWeaponStaticGLWeapon_Attributes_desableWeaponDisassembly_displayName0";
				tooltip="$STR_Globe_CfgVehicles_StaticMGWeaponStaticGLWeapon_Attributes_desableWeaponDisassembly_tooltip0";
				defaultValue="weaponDisassemblyEnabled _this";
				expression="_this enableWeaponDisassembly _value;";
			};
			class fixPosition
			{
				property="fixPosition";
				control="Checkbox";
				displayName="$STR_3DEN_Display3DEN_ControlsHint_Attach";
				tooltip="$STR_Globe_3DEN_Object_Attribute_FixPosition_tooltip";
				defaultValue="false";
				expression="if (_value isEqualTo true) then {_this call expEden_fnc_turretAttach}";
			};
		};
	};
	class StaticMGWeapon: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret;
			class ViewOptics;
		};
	};
	class HMG_02_base_F: StaticMGWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				optics=0;
				class ViewOptics: ViewOptics
				{
					visionMode[]=
					{
					};
				};
			};
		};
		class Attributes
		{
			class shield_UpDown_DisableUserActionShield
			{
				displayName="$STR_sUP_mounting_shield_UserActions0";
				tooltip="$STR_sUP_mounting_shield_UserActions1";
				property="shield_UpDown_DisableUserActionShield";
				control="Checkbox";
				defaultValue="false";
				expression="_this setVariable ['Globe_userActionShild',_value,isServer]";
			};
			class shield_UpDown_DisableUserActionScope
			{
				displayName="$STR_sUP_mounting_scope_UserActions0";
				tooltip="$STR_sUP_mounting_scope_UserActions1";
				property="shield_UpDown_DisableUserActionScope";
				control="Checkbox";
				defaultValue="false";
				expression="_this setVariable ['Globe_userActionScope',_value,isServer]";
			};
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
			class desableWeaponDisassembly
			{
				property="desableWeaponDisassembly";
				control="CheckboxReversed";
				displayName="$STR_Globe_CfgVehicles_StaticMGWeaponStaticGLWeapon_Attributes_desableWeaponDisassembly_displayName0";
				tooltip="$STR_Globe_CfgVehicles_StaticMGWeaponStaticGLWeapon_Attributes_desableWeaponDisassembly_tooltip0";
				defaultValue="weaponDisassemblyEnabled _this";
				expression="_this enableWeaponDisassembly _value";
			};
			class fixPosition
			{
				property="fixPosition";
				control="Checkbox";
				displayName="$STR_3DEN_Display3DEN_ControlsHint_Attach";
				tooltip="$STR_Globe_3DEN_Object_Attribute_FixPosition_tooltip";
				defaultValue="false";
				expression="if (_value isEqualTo true) then {_this call expEden_fnc_turretAttach}";
			};
		};
		class UserActions
		{
			class shield_Up
			{
				displayNameDefault="$STR_sUP_mounting_shield_Attributes";
				displayName="$STR_sUP_mounting_shield_Attributes";
				position="temp";
				onlyForPlayer=1;
				radius=3;
				priority=1.5;
				condition="(this animationSourcePhase 'Hide_Shield' <= 0) && (alive this) && { this getVariable ['Globe_userActionShild', false] } && (isNull objectParent player)";
				statement="playSound3D ['a3\sounds_f\sfx\ui\vehicles\vehicle_repair.wss',this,false,getPosASL this,1.3,1,20]; player playActionNow 'PutDown'; this animateSource ['Hide_Shield',1,true]";
			};
			class shield_Down: shield_Up
			{
				displayNameDefault="$STR_sUP_unmounting_shield_Attributes";
				displayName="$STR_sUP_unmounting_shield_Attributes";
				condition="(this animationSourcePhase 'Hide_Shield' >= 1) && (alive this) && { this getVariable ['Globe_userActionShild', false] } && (isNull objectParent player)";
				statement="playSound3D ['a3\sounds_f\sfx\ui\vehicles\vehicle_repair.wss',this,false,getPosASL this,1.3,1,20]; player playActionNow 'PutDown'; this animateSource ['Hide_Shield',0,true]";
			};
			class scope_Down: shield_Up
			{
				displayNameDefault="$STR_sUP_unmounting_Scope_Attributes";
				displayName="$STR_sUP_unmounting_Scope_Attributes";
				condition="(this animationSourcePhase 'Hide_Rail' <= 0) && (alive this) && { this getVariable ['Globe_userActionScope', false] } && (isNull objectParent player)";
				statement="playSound3D ['a3\ui_f\data\sound\cfgcutscenes\repair.wss',this,false,getPosASL this,3,1,15]; player playActionNow 'PutDown'; this animateSource ['Hide_Rail',1,true]";
			};
			class scope_up: shield_Up
			{
				displayNameDefault="$STR_sUP_mounting_Scope_Attributes";
				displayName="$STR_sUP_mounting_Scope_Attributes";
				condition="(this animationSourcePhase 'Hide_Rail' >= 1) && (alive this) && { this getVariable ['Globe_userActionScope', false ]} && (isNull objectParent player)";
				statement="playSound3D ['a3\ui_f\data\sound\cfgcutscenes\repair.wss',this,false,getPosASL this,3,1,15]; player playActionNow 'PutDown'; this animateSource ['Hide_Rail',0,true]";
			};
		};
	};
};
