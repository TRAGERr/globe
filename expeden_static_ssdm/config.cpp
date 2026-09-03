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
		units[]=
		{
			"B_HMG_02_weapon_G",
			"B_HMG_02_G",
			"B_HMG_02_high_weapon_G",
			"B_HMG_02_high_G"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Bag_Base;
	class Weapon_Bag_Base;
	class B_HMG_02_weapon_F: Weapon_Bag_Base
	{
		class assembleInfo;
	};
	class B_HMG_02_high_weapon_F: Weapon_Bag_Base
	{
		class assembleInfo;
	};
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
				condition="script";
				conditionScript="(isClass (configFile >> 'CfgVehicles' >> typeOf _this >> 'assembleInfo'))";
			};
			class fixPosition
			{
				property="fixPosition";
				control="Checkbox";
				displayName="$STR_3DEN_Display3DEN_ControlsHint_Attach";
				tooltip="$STR_Globe_3DEN_Object_Attribute_FixPosition_tooltip";
				defaultValue=0;
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
		class UserActions;
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
		class Attributes: Attributes
		{
			class shield_UpDown_DisableUserActionShield
			{
				displayName="$STR_sUP_mounting_shield_UserActions0";
				tooltip="$STR_sUP_mounting_shield_UserActions1";
				property="shield_UpDown_DisableUserActionShield";
				control="Checkbox";
				defaultValue=0;
				expression="_this setVariable ['Globe_userActionShild',_value,isServer]";
			};
			class shield_UpDown_DisableUserActionScope
			{
				displayName="$STR_sUP_mounting_scope_UserActions0";
				tooltip="$STR_sUP_mounting_scope_UserActions1";
				property="shield_UpDown_DisableUserActionScope";
				control="Checkbox";
				defaultValue=0;
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
				expression="_this enableWeaponDisassembly _value;";
				condition="script";
				conditionScript="(isClass (configFile >> 'CfgVehicles' >> typeOf _this >> 'assembleInfo'))";
			};
			class fixPosition
			{
				property="fixPosition";
				control="Checkbox";
				displayName="$STR_3DEN_Display3DEN_ControlsHint_Attach";
				tooltip="$STR_Globe_3DEN_Object_Attribute_FixPosition_tooltip";
				defaultValue=0;
				expression="if (_value isEqualTo true) then {_this call expEden_fnc_turretAttach}";
			};
		};
		class UserActions: UserActions
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
	class HMG_02_high_base_F: HMG_02_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class B_HMG_02_G: HMG_02_base_F
	{
		author="O&T Expansion Eden";
		mapSize=3.1600001;
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"mainturret",
					0
				},
				
				{
					"maingun",
					0
				},
				
				{
					"mainturret_destructx",
					0
				},
				
				{
					"mainturret_destructy",
					0
				},
				
				{
					"mainturret_destructz",
					0
				},
				
				{
					"maingun_destructx",
					0
				},
				
				{
					"maingun_destructy",
					0
				},
				
				{
					"maingun_destructz",
					0
				},
				
				{
					"magazine_destruct",
					0
				},
				
				{
					"ammo_belt_destruct",
					0
				},
				
				{
					"bolt_destruct",
					0
				},
				
				{
					"charging_handle_destruct",
					0
				},
				
				{
					"damagehidevez_destruct",
					0
				},
				
				{
					"damagehidehlaven_destruct",
					0
				},
				
				{
					"damagehiderecoil_destruct",
					0
				},
				
				{
					"ammo_belt_rotation",
					0
				},
				
				{
					"barrel_recoil",
					0
				},
				
				{
					"bolt_recoil",
					0
				},
				
				{
					"turret_shake",
					0
				},
				
				{
					"turret_shake_backside",
					0
				},
				
				{
					"turret_shake_aside",
					0
				},
				
				{
					"charging_handle_shake",
					0
				},
				
				{
					"feedtray_cover_up",
					0
				},
				
				{
					"feedtray_cover_down",
					0
				},
				
				{
					"bolt_reload_begin",
					0
				},
				
				{
					"bolt_reload_end",
					0
				},
				
				{
					"charging_handle_reload_begin",
					0
				},
				
				{
					"charging_handle_reload_end",
					0
				},
				
				{
					"magazine_hide",
					0
				},
				
				{
					"muzzleflash",
					0
				},
				
				{
					"zaslehrot",
					255
				},
				
				{
					"ammo_belt_hide",
					0
				},
				
				{
					"bullet001_reload_hide",
					1
				},
				
				{
					"bullet002_reload_hide",
					1
				},
				
				{
					"bullet003_reload_hide",
					1
				},
				
				{
					"bullet004_reload_hide",
					1
				},
				
				{
					"bullet005_reload_hide",
					1
				},
				
				{
					"bullet006_reload_hide",
					1
				},
				
				{
					"bullet007_reload_hide",
					1
				},
				
				{
					"bullet008_reload_hide",
					1
				},
				
				{
					"hide_rail_damage",
					0
				},
				
				{
					"move_opticview",
					1
				},
				
				{
					"maingunner",
					0
				},
				
				{
					"maingunnerup",
					0
				},
				
				{
					"maingunnertranslation",
					0
				},
				
				{
					"maingunnerlegstranslation",
					0
				}
			};
			hide[]=
			{
				"light_back",
				"brzdove svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
		};
		_generalMacro="B_HMG_02_G";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\I_HMG_02_high_F.jpg";
		scope=2;
		side=1;
		faction="BLU_F";
		crew="B_Soldier_F";
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]=
			{
				"B_HMG_02_weapon_G",
				"B_HMG_02_support_F"
			};
			displayName="";
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					"100Rnd_127x99_SLAP_mag",
					"100Rnd_127x99_SLAP_mag",
					"100Rnd_127x99_HEIAP_01_G_traser_red_mag",
					"100Rnd_127x99_HEIAP_01_G_traser_red_mag"
				};
			};
		};
		class AnimationSources
		{
			class Hide_Shield
			{
				displayName="$STR_A3_C_CfgVehicles_HMG_02_base_F_AnimationSources_Hide_Shield0";
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class Hide_Rail
			{
				displayName="$STR_A3_C_CfgVehicles_HMG_02_base_F_AnimationSources_Hide_Rail0";
				useSource=1;
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class muzzle_source
			{
				source="reload";
				weapon="HMG_M2_Mounted";
			};
			class muzzle_source_rot
			{
				source="ammorandom";
				weapon="HMG_M2_Mounted";
			};
			class ReloadAnim
			{
				source="reload";
				weapon="HMG_M2_Mounted";
			};
			class ReloadMagazine
			{
				source="reloadmagazine";
				weapon="HMG_M2_Mounted";
			};
			class Revolving
			{
				source="revolving";
				weapon="HMG_M2_Mounted";
			};
		};
	};
	class B_HMG_02_high_G: HMG_02_high_base_F
	{
		author="O&T Expansion Eden";
		mapSize=3.1600001;
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"mainturret",
					0
				},
				
				{
					"maingun",
					0
				},
				
				{
					"mainturret_destructx",
					0
				},
				
				{
					"mainturret_destructy",
					0
				},
				
				{
					"mainturret_destructz",
					0
				},
				
				{
					"maingun_destructx",
					0
				},
				
				{
					"maingun_destructy",
					0
				},
				
				{
					"maingun_destructz",
					0
				},
				
				{
					"magazine_destruct",
					0
				},
				
				{
					"ammo_belt_destruct",
					0
				},
				
				{
					"bolt_destruct",
					0
				},
				
				{
					"charging_handle_destruct",
					0
				},
				
				{
					"damagehidevez_destruct",
					0
				},
				
				{
					"damagehidehlaven_destruct",
					0
				},
				
				{
					"damagehiderecoil_destruct",
					0
				},
				
				{
					"ammo_belt_rotation",
					0
				},
				
				{
					"barrel_recoil",
					0
				},
				
				{
					"bolt_recoil",
					0
				},
				
				{
					"turret_shake",
					0
				},
				
				{
					"turret_shake_backside",
					0
				},
				
				{
					"turret_shake_aside",
					0
				},
				
				{
					"charging_handle_shake",
					0
				},
				
				{
					"feedtray_cover_up",
					0
				},
				
				{
					"feedtray_cover_down",
					0
				},
				
				{
					"bolt_reload_begin",
					0
				},
				
				{
					"bolt_reload_end",
					0
				},
				
				{
					"charging_handle_reload_begin",
					0
				},
				
				{
					"charging_handle_reload_end",
					0
				},
				
				{
					"magazine_hide",
					0
				},
				
				{
					"muzzleflash",
					0
				},
				
				{
					"zaslehrot",
					15
				},
				
				{
					"ammo_belt_hide",
					0
				},
				
				{
					"bullet001_reload_hide",
					1
				},
				
				{
					"bullet002_reload_hide",
					1
				},
				
				{
					"bullet003_reload_hide",
					1
				},
				
				{
					"bullet004_reload_hide",
					1
				},
				
				{
					"bullet005_reload_hide",
					1
				},
				
				{
					"bullet006_reload_hide",
					1
				},
				
				{
					"bullet007_reload_hide",
					1
				},
				
				{
					"bullet008_reload_hide",
					1
				},
				
				{
					"hide_rail_damage",
					0
				},
				
				{
					"move_opticview",
					1
				},
				
				{
					"maingunner",
					0
				},
				
				{
					"maingunnerup",
					0
				},
				
				{
					"maingunnertranslation",
					0
				},
				
				{
					"maingunnerlegstranslation",
					0
				},
				
				{
					"travelev_1_mov_1",
					0
				},
				
				{
					"travelev_1_mov_2",
					0
				},
				
				{
					"travelev_1_mov_3",
					0
				},
				
				{
					"travelev_2_mov_1",
					0
				},
				
				{
					"travelev_2_mov_2",
					0
				},
				
				{
					"travelev_2_mov_3",
					0
				}
			};
			hide[]=
			{
				"light_back",
				"brzdove svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=1.247;
			verticalOffsetWorld=0.012;
			postinit="[this, '', []] call bis_fnc_initVehicle";
		};
		_generalMacro="B_HMG_02_high_G";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\I_HMG_02_high_F.jpg";
		scope=2;
		side=1;
		faction="BLU_F";
		crew="B_Soldier_F";
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]=
			{
				"B_HMG_02_high_weapon_G",
				"B_HMG_02_support_high_F"
			};
			displayName="";
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					"100Rnd_127x99_SLAP_mag",
					"100Rnd_127x99_SLAP_mag",
					"100Rnd_127x99_HEIAP_01_G_traser_red_mag",
					"100Rnd_127x99_HEIAP_01_G_traser_red_mag"
				};
			};
		};
		class AnimationSources
		{
			class Hide_Shield
			{
				displayName="$STR_A3_C_CfgVehicles_HMG_02_base_F_AnimationSources_Hide_Shield0";
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class Hide_Rail
			{
				displayName="$STR_A3_C_CfgVehicles_HMG_02_base_F_AnimationSources_Hide_Rail0";
				useSource=1;
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class muzzle_source
			{
				source="reload";
				weapon="HMG_M2_Mounted";
			};
			class muzzle_source_rot
			{
				source="ammorandom";
				weapon="HMG_M2_Mounted";
			};
			class ReloadAnim
			{
				source="reload";
				weapon="HMG_M2_Mounted";
			};
			class ReloadMagazine
			{
				source="reloadmagazine";
				weapon="HMG_M2_Mounted";
			};
			class Revolving
			{
				source="revolving";
				weapon="HMG_M2_Mounted";
			};
		};
	};
	class B_HMG_02_weapon_G: B_HMG_02_weapon_F
	{
		author="O&T Expansion Eden";
		_generalMacro="B_HMG_02_weapon_G";
		scope=2;
		displayName="$STR_Globe_CfgVehicles_B_HMG_02_weapon_G0";
		faction="BLU_F";
		class assembleInfo: assembleInfo
		{
			displayName="$STR_A3_CfgVehicles_B_HMG_01_Wpn_assembleInfo0";
			assembleTo="B_HMG_02_G";
			base[]=
			{
				"B_HMG_02_support_high_F",
				"O_HMG_02_support_high_F",
				"I_HMG_02_support_high_F",
				"I_E_HMG_02_support_high_F",
				"I_C_HMG_02_support_high_F",
				"I_G_HMG_02_support_high_F",
				"O_G_HMG_02_support_high_F",
				"B_G_HMG_02_support_high_F",
				"B_HMG_01_support_high_F",
				"O_HMG_01_support_high_F",
				"I_HMG_01_support_F",
				"I_E_HMG_01_support_high_F",
				"B_HMG_02_support_F",
				"O_HMG_02_support_F",
				"I_HMG_02_support_F",
				"I_E_HMG_02_support_F",
				"I_C_HMG_02_support_F",
				"I_G_HMG_02_support_F",
				"O_G_HMG_02_support_F",
				"B_G_HMG_02_support_F",
				"B_HMG_01_support_F",
				"O_HMG_01_support_F",
				"I_HMG_01_support_F",
				"I_E_HMG_01_support_F"
			};
		};
	};
	class B_HMG_02_high_weapon_G: B_HMG_02_high_weapon_F
	{
		author="O&T Expansion Eden";
		_generalMacro="B_HMG_02_high_weapon_G";
		scope=2;
		displayName="$STR_Globe_CfgVehicles_B_HMG_02_high_weapon_G0";
		faction="BLU_F";
		class assembleInfo: assembleInfo
		{
			displayName="$STR_A3_CfgVehicles_B_HMG_01_Wpn_assembleInfo0";
			assembleTo="B_HMG_02_high_G";
			base[]=
			{
				"B_HMG_02_support_high_F",
				"O_HMG_02_support_high_F",
				"I_HMG_02_support_high_F",
				"I_E_HMG_02_support_high_F",
				"I_C_HMG_02_support_high_F",
				"I_G_HMG_02_support_high_F",
				"O_G_HMG_02_support_high_F",
				"B_G_HMG_02_support_high_F",
				"B_HMG_01_support_high_F",
				"O_HMG_01_support_high_F",
				"I_HMG_01_support_F",
				"I_E_HMG_01_support_high_F",
				"B_HMG_02_support_F",
				"O_HMG_02_support_F",
				"I_HMG_02_support_F",
				"I_E_HMG_02_support_F",
				"I_C_HMG_02_support_F",
				"I_G_HMG_02_support_F",
				"O_G_HMG_02_support_F",
				"B_G_HMG_02_support_F",
				"B_HMG_01_support_F",
				"O_HMG_01_support_F",
				"I_HMG_01_support_F",
				"I_E_HMG_01_support_F"
			};
		};
	};
};
