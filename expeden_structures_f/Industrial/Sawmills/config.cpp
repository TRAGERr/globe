class CfgPatches
{
	class Structures_Globe_Industrial_Sawmills
	{
		addonRootClass="A3_Structures_F_Globe";
		requiredAddons[]=
		{
			"Structures_Globe_Industrial"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Land_Sawmill_01_illuminati_tower_on"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class House_F;
	class Land_Sawmill_01_illuminati_tower_F: House_F
	{
		class EventHandlers;
		class UserActions;
	};
	class Land_Sawmill_01_illuminati_tower_on: Land_Sawmill_01_illuminati_tower_F
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=0;
			animate[]=
			{
				
				{
					"Lights_Hide",
					0
				}
			};
			hide[]={};
			verticalOffset=9.9709997;
			verticalOffsetWorld=0;
			init="''";
		};
		_generalMacro="Land_Sawmill_01_illuminati_tower_on";
		displayName="$STR_Globe_CfgVehicles_Land_Sawmill_01_illuminati_tower_on0";
		class AnimationSources
		{
			class Lights_Hide
			{
				source="user";
				initPhase=0;
				animPeriod=0.001;
			};
		};
		class Attributes
		{
			class DisableActions
			{
				displayName="$STR_A3_CfgVehicles_Land_BattlefieldCross_01_base_F_Attributes_DisableActions0";
				property="DisableActions";
				control="Checkbox";
				defaultValue=0;
				expression="_this setVariable ['Globe_disableAction',_value,isServer]";
			};
			class DisableInit
			{
				displayName="$STR_Action_searchLights_off";
				property="DisableInit";
				control="Checkbox";
				defaultValue=0;
				expression="_this setVariable ['Globe_disableInit',_value,isServer]";
			};
		};
		class EventHandlers: EventHandlers
		{
			class Globe_ilumTower
			{
				postInit="if (!is3DEN) then { if (!((_this # 0) getVariable ['Globe_disableInit',false])) then { (_this # 0) switchLight 'ON' } else { (_this # 0) switchLight 'OFF' } }";
			};
		};
		class UserActions: UserActions
		{
			class disableLight1
			{
				displayNameDefault="<img image='\A3\ui_f\data\igui\cfg\actions\take_ca.paa' size='1.8' shadow=2 /><img image='\a3\ui_f\data\igui\cfg\actions\ico_cpt_land_off_ca.paa' size='1.8' shadow=2 />";
				displayName="$STR_MPRole_disable";
				position="Light_1_pos";
				actionNamedSel="";
				radius=2;
				onlyForPlayer=1;
				priority=0.1;
				showWindow=1;
				condition="((this animationSourcePhase 'Lights_Hide') == 0) && (lightIsOn this isEqualTo 'ON') && Alive(this)&&  {!(this getVariable ['Globe_disableAction',false])}";
				statement="[this, 'OFF'] remoteExec ['switchLight',0,this]; playSound3D ['a3\missions_f_exp\data\sounds\exp_m07_lightsoff_01.wss', player, false, getPosASL player, 1, 1.2, 300, 0, false ]; playSound3D ['a3\missions_f_exp\data\sounds\exp_m07_lightsoff_02.wss', player, false, getPosASL player, 1, 1, 300, 0, false ]; playSound3D ['a3\missions_f_exp\data\sounds\exp_m07_lightsoff_03.wss', player, false, getPosASL player, 1, 1, 300, 0, false ]; playSound3D ['a3\missions_f_exp\data\sounds\exp_m07_lightsoff_01.wss', player, false, getPosASL player, 1, 0.9, 300, 0, false ];playSound3D [ format ['a3\missions_f_oldman\data\sound\light_switch\light_switch_0%1.wss', ceil random 3], player, false, getPosASL player, 2, 0, 150, 0, false ]";
			};
			class disableLight2: disableLight1
			{
				position="Light_2_pos";
			};
			class disableLight3: disableLight1
			{
				position="Light_3_pos";
			};
			class disableLight4: disableLight1
			{
				position="Light_4_pos";
			};
			class enableLight1: disableLight1
			{
				displayNameDefault="<img image='\A3\ui_f\data\igui\cfg\actions\take_ca.paa' size='1.8' shadow=2 /><img image='\a3\ui_f\data\igui\cfg\actions\ico_cpt_land_on_ca.paa' size='1.8' shadow=2 />";
				displayName="$STR_MPRole_enable";
				condition="((this animationSourcePhase 'Lights_Hide') == 0) && (lightIsOn this isEqualTo 'OFF') && Alive(this)&&  {!(this getVariable ['Globe_disableAction',false])}";
				statement="[this, 'ON'] remoteExec ['switchLight',0,this]; playSound3D ['a3\missions_f_exp\data\sounds\exp_m07_lightson_01.wss', player, false, getPosASL player, 1, 1.2, 300, 0, false ]; playSound3D ['a3\missions_f_exp\data\sounds\exp_m07_lightson_02.wss', player, false, getPosASL player, 1, 1, 300, 0, false ]; playSound3D ['a3\missions_f_exp\data\sounds\exp_m07_lightson_03.wss', player, false, getPosASL player, 1, 1, 300, 0, false ]; playSound3D ['a3\missions_f_exp\data\sounds\exp_m07_lightson_01.wss', player, false, getPosASL player, 1, 0.9, 300, 0, false ];playSound3D [ format ['a3\missions_f_oldman\data\sound\light_switch\light_switch_0%1.wss', ceil random 3], player, false, getPosASL player, 2, 0, 150, 0, false ]";
			};
			class enableLight2: enableLight1
			{
				position="Light_2_pos";
			};
			class enableLight3: enableLight1
			{
				position="Light_3_pos";
			};
			class enableLight4: enableLight1
			{
				position="Light_4_pos";
			};
		};
	};
};
