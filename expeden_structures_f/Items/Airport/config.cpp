class CfgPatches
{
	class Structures_Globe_Items_Airport
	{
		addonRootClass="A3_Structures_F_Globe";
		requiredAddons[]=
		{
			"A3_Structures_F_Globe_Items"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Land_PortableHelipadLight_01_off",
			"PortableHelipadLight_01_blue_off",
			"PortableHelipadLight_01_red_off",
			"PortableHelipadLight_01_white_off",
			"PortableHelipadLight_01_green_off",
			"PortableHelipadLight_01_yellow_off"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class FloatingStructure_F;
	class Land_PortableHelipadLight_01_F: FloatingStructure_F
	{
		class MarkerLights
		{
			class Light_1;
		};
	};
	class PortableHelipadLight_01_blue_F: Land_PortableHelipadLight_01_F
	{
		class MarkerLights: MarkerLights
		{
			class Light_1;
		};
	};
	class PortableHelipadLight_01_red_F: Land_PortableHelipadLight_01_F
	{
		class MarkerLights: MarkerLights
		{
			class Light_1;
		};
	};
	class PortableHelipadLight_01_white_F: Land_PortableHelipadLight_01_F
	{
		class MarkerLights: MarkerLights
		{
			class Light_1;
		};
	};
	class PortableHelipadLight_01_green_F: Land_PortableHelipadLight_01_F
	{
		class MarkerLights: MarkerLights
		{
			class Light_1;
		};
	};
	class PortableHelipadLight_01_yellow_F: Land_PortableHelipadLight_01_F
	{
		class MarkerLights: MarkerLights
		{
			class Light_1;
		};
	};
	class Land_PortableHelipadLight_01_off: Land_PortableHelipadLight_01_F
	{
		author="O&T Expansion Eden";
		_generalMacro="Land_PortableHelipadLight_01_off";
		displayName="$STR_Globe_CfgVehicles_Land_PortableHelipadLight_01_off0";
		class Attributes
		{
			class DisableActions
			{
				displayName="$STR_A3_CfgVehicles_Land_BattlefieldCross_01_base_F_Attributes_DisableActions0";
				property="DisableActions";
				control="Checkbox";
				defaultValue="false";
				expression="_this setVariable ['Globe_disableAction',_value,isServer]";
			};
			class DisableInit
			{
				displayName="$STR_Action_searchLights_off";
				property="DisableInit";
				control="Checkbox";
				defaultValue="true";
				expression="_this setVariable ['Globe_disableInit',_value,isServer]";
			};
		};
		class EventHandlers
		{
			class Globe_ilumHelipad
			{
				postInit="if (!is3DEN) then { if ((_this # 0) getVariable ['Globe_disableInit',true]) then { (_this # 0) switchLight 'OFF' } else { (_this # 0) switchLight 'ON' } }";
			};
		};
		class UserActions
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
				condition="((this animationSourcePhase 'Lights_Hide') == 0) && (lightIsOn this isEqualTo 'ON') && Alive(this)&&  (!(this getVariable ['Globe_disableAction',false]))";
				statement="[this, 'OFF'] remoteExec ['switchLight',0,this]; playSound3D ['a3\sounds_f\arsenal\sfx\shared\zeroing_knob_tick_plastic.wss', player, false, getPosASL player, 1, 1, 6, 0, false ];";
			};
			class enableLight1: disableLight1
			{
				displayNameDefault="<img image='\A3\ui_f\data\igui\cfg\actions\take_ca.paa' size='1.8' shadow=2 /><img image='\a3\ui_f\data\igui\cfg\actions\ico_cpt_land_on_ca.paa' size='1.8' shadow=2 />";
				displayName="$STR_MPRole_enable";
				condition="((this animationSourcePhase 'Lights_Hide') == 0) && (lightIsOn this isEqualTo 'OFF') && Alive(this)&&  (!(this getVariable ['Globe_disableAction',false]))";
				statement="[this, 'ON'] remoteExec ['switchLight',0,this]; playSound3D ['a3\sounds_f\arsenal\sfx\shared\zeroing_knob_tick_plastic.wss', player, false, getPosASL player, 1, 1, 6, 0, false ];";
			};
		};
		class MarkerLights: MarkerLights
		{
			class Light_1: Light_1
			{
			};
		};
	};
	class PortableHelipadLight_01_blue_off: PortableHelipadLight_01_blue_F
	{
		author="O&T Expansion Eden";
		_generalMacro="PortableHelipadLight_01_blue_off";
		displayName="$STR_Globe_CfgVehicles_PortableHelipadLight_01_blue_off0";
		class Attributes
		{
			class DisableActions
			{
				displayName="$STR_A3_CfgVehicles_Land_BattlefieldCross_01_base_F_Attributes_DisableActions0";
				property="DisableActions";
				control="Checkbox";
				defaultValue="false";
				expression="_this setVariable ['Globe_disableAction',_value,isServer]";
			};
			class DisableInit
			{
				displayName="$STR_Action_searchLights_off";
				property="DisableInit";
				control="Checkbox";
				defaultValue="true";
				expression="_this setVariable ['Globe_disableInit',_value,isServer]";
			};
		};
		class EventHandlers
		{
			class Globe_ilumHelipad
			{
				postInit="if (!is3DEN) then { if ((_this # 0) getVariable ['Globe_disableInit',true]) then { (_this # 0) switchLight 'OFF' } else { (_this # 0) switchLight 'ON' } }";
			};
		};
		class UserActions
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
				condition="((this animationSourcePhase 'Lights_Hide') == 0) && (lightIsOn this isEqualTo 'ON') && Alive(this)&&  (!(this getVariable ['Globe_disableAction',false]))";
				statement="[this, 'OFF'] remoteExec ['switchLight',0,this]; playSound3D ['a3\sounds_f\arsenal\sfx\shared\zeroing_knob_tick_plastic.wss', player, false, getPosASL player, 1, 1, 6, 0, false ];";
			};
			class enableLight1: disableLight1
			{
				displayNameDefault="<img image='\A3\ui_f\data\igui\cfg\actions\take_ca.paa' size='1.8' shadow=2 /><img image='\a3\ui_f\data\igui\cfg\actions\ico_cpt_land_on_ca.paa' size='1.8' shadow=2 />";
				displayName="$STR_MPRole_enable";
				condition="((this animationSourcePhase 'Lights_Hide') == 0) && (lightIsOn this isEqualTo 'OFF') && Alive(this)&&  (!(this getVariable ['Globe_disableAction',false]))";
				statement="[this, 'ON'] remoteExec ['switchLight',0,this]; playSound3D ['a3\sounds_f\arsenal\sfx\shared\zeroing_knob_tick_plastic.wss', player, false, getPosASL player, 1, 1, 6, 0, false ];";
			};
		};
		class MarkerLights: MarkerLights
		{
			class Light_1: Light_1
			{
			};
		};
	};
	class PortableHelipadLight_01_red_off: PortableHelipadLight_01_red_F
	{
		author="O&T Expansion Eden";
		_generalMacro="PortableHelipadLight_01_red_off";
		displayName="$STR_Globe_CfgVehicles_PortableHelipadLight_01_red_off0";
		class Attributes
		{
			class DisableActions
			{
				displayName="$STR_A3_CfgVehicles_Land_BattlefieldCross_01_base_F_Attributes_DisableActions0";
				property="DisableActions";
				control="Checkbox";
				defaultValue="false";
				expression="_this setVariable ['Globe_disableAction',_value,isServer]";
			};
			class DisableInit
			{
				displayName="$STR_Action_searchLights_off";
				property="DisableInit";
				control="Checkbox";
				defaultValue="true";
				expression="_this setVariable ['Globe_disableInit',_value,isServer]";
			};
		};
		class EventHandlers
		{
			class Globe_ilumHelipad
			{
				postInit="if (!is3DEN) then { if ((_this # 0) getVariable ['Globe_disableInit',true]) then { (_this # 0) switchLight 'OFF' } else { (_this # 0) switchLight 'ON' } }";
			};
		};
		class UserActions
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
				condition="((this animationSourcePhase 'Lights_Hide') == 0) && (lightIsOn this isEqualTo 'ON') && Alive(this)&&  (!(this getVariable ['Globe_disableAction',false]))";
				statement="[this, 'OFF'] remoteExec ['switchLight',0,this]; playSound3D ['a3\sounds_f\arsenal\sfx\shared\zeroing_knob_tick_plastic.wss', player, false, getPosASL player, 1, 1, 6, 0, false ];";
			};
			class enableLight1: disableLight1
			{
				displayNameDefault="<img image='\A3\ui_f\data\igui\cfg\actions\take_ca.paa' size='1.8' shadow=2 /><img image='\a3\ui_f\data\igui\cfg\actions\ico_cpt_land_on_ca.paa' size='1.8' shadow=2 />";
				displayName="$STR_MPRole_enable";
				condition="((this animationSourcePhase 'Lights_Hide') == 0) && (lightIsOn this isEqualTo 'OFF') && Alive(this)&&  (!(this getVariable ['Globe_disableAction',false]))";
				statement="[this, 'ON'] remoteExec ['switchLight',0,this]; playSound3D ['a3\sounds_f\arsenal\sfx\shared\zeroing_knob_tick_plastic.wss', player, false, getPosASL player, 1, 1, 6, 0, false ];";
			};
		};
		class MarkerLights: MarkerLights
		{
			class Light_1: Light_1
			{
			};
		};
	};
	class PortableHelipadLight_01_white_off: PortableHelipadLight_01_white_F
	{
		author="O&T Expansion Eden";
		_generalMacro="PortableHelipadLight_01_white_off";
		displayName="$STR_Globe_CfgVehicles_PortableHelipadLight_01_white_off0";
		class Attributes
		{
			class DisableActions
			{
				displayName="$STR_A3_CfgVehicles_Land_BattlefieldCross_01_base_F_Attributes_DisableActions0";
				property="DisableActions";
				control="Checkbox";
				defaultValue="false";
				expression="_this setVariable ['Globe_disableAction',_value,isServer]";
			};
			class DisableInit
			{
				displayName="$STR_Action_searchLights_off";
				property="DisableInit";
				control="Checkbox";
				defaultValue="true";
				expression="_this setVariable ['Globe_disableInit',_value,isServer]";
			};
		};
		class EventHandlers
		{
			class Globe_ilumHelipad
			{
				postInit="if (!is3DEN) then { if ((_this # 0) getVariable ['Globe_disableInit',true]) then { (_this # 0) switchLight 'OFF' } else { (_this # 0) switchLight 'ON' } }";
			};
		};
		class UserActions
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
				condition="((this animationSourcePhase 'Lights_Hide') == 0) && (lightIsOn this isEqualTo 'ON') && Alive(this)&&  (!(this getVariable ['Globe_disableAction',false]))";
				statement="[this, 'OFF'] remoteExec ['switchLight',0,this]; playSound3D ['a3\sounds_f\arsenal\sfx\shared\zeroing_knob_tick_plastic.wss', player, false, getPosASL player, 1, 1, 6, 0, false ];";
			};
			class enableLight1: disableLight1
			{
				displayNameDefault="<img image='\A3\ui_f\data\igui\cfg\actions\take_ca.paa' size='1.8' shadow=2 /><img image='\a3\ui_f\data\igui\cfg\actions\ico_cpt_land_on_ca.paa' size='1.8' shadow=2 />";
				displayName="$STR_MPRole_enable";
				condition="((this animationSourcePhase 'Lights_Hide') == 0) && (lightIsOn this isEqualTo 'OFF') && Alive(this)&&  (!(this getVariable ['Globe_disableAction',false]))";
				statement="[this, 'ON'] remoteExec ['switchLight',0,this]; playSound3D ['a3\sounds_f\arsenal\sfx\shared\zeroing_knob_tick_plastic.wss', player, false, getPosASL player, 1, 1, 6, 0, false ];";
			};
		};
		class MarkerLights: MarkerLights
		{
			class Light_1: Light_1
			{
			};
		};
	};
	class PortableHelipadLight_01_green_off: PortableHelipadLight_01_green_F
	{
		author="O&T Expansion Eden";
		_generalMacro="PortableHelipadLight_01_green_off";
		displayName="$STR_Globe_CfgVehicles_PortableHelipadLight_01_green_off0";
		class Attributes
		{
			class DisableActions
			{
				displayName="$STR_A3_CfgVehicles_Land_BattlefieldCross_01_base_F_Attributes_DisableActions0";
				property="DisableActions";
				control="Checkbox";
				defaultValue="false";
				expression="_this setVariable ['Globe_disableAction',_value,isServer]";
			};
			class DisableInit
			{
				displayName="$STR_Action_searchLights_off";
				property="DisableInit";
				control="Checkbox";
				defaultValue="true";
				expression="_this setVariable ['Globe_disableInit',_value,isServer]";
			};
		};
		class EventHandlers
		{
			class Globe_ilumHelipad
			{
				postInit="if (!is3DEN) then { if ((_this # 0) getVariable ['Globe_disableInit',true]) then { (_this # 0) switchLight 'OFF' } else { (_this # 0) switchLight 'ON' } }";
			};
		};
		class UserActions
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
				condition="((this animationSourcePhase 'Lights_Hide') == 0) && (lightIsOn this isEqualTo 'ON') && Alive(this)&&  (!(this getVariable ['Globe_disableAction',false]))";
				statement="[this, 'OFF'] remoteExec ['switchLight',0,this]; playSound3D ['a3\sounds_f\arsenal\sfx\shared\zeroing_knob_tick_plastic.wss', player, false, getPosASL player, 1, 1, 6, 0, false ];";
			};
			class enableLight1: disableLight1
			{
				displayNameDefault="<img image='\A3\ui_f\data\igui\cfg\actions\take_ca.paa' size='1.8' shadow=2 /><img image='\a3\ui_f\data\igui\cfg\actions\ico_cpt_land_on_ca.paa' size='1.8' shadow=2 />";
				displayName="$STR_MPRole_enable";
				condition="((this animationSourcePhase 'Lights_Hide') == 0) && (lightIsOn this isEqualTo 'OFF') && Alive(this)&&  (!(this getVariable ['Globe_disableAction',false]))";
				statement="[this, 'ON'] remoteExec ['switchLight',0,this]; playSound3D ['a3\sounds_f\arsenal\sfx\shared\zeroing_knob_tick_plastic.wss', player, false, getPosASL player, 1, 1, 6, 0, false ];";
			};
		};
		class MarkerLights: MarkerLights
		{
			class Light_1: Light_1
			{
			};
		};
	};
	class PortableHelipadLight_01_yellow_off: PortableHelipadLight_01_yellow_F
	{
		author="O&T Expansion Eden";
		_generalMacro="PortableHelipadLight_01_yellow_off";
		displayName="$STR_Globe_CfgVehicles_PortableHelipadLight_01_yellow_off0";
		class Attributes
		{
			class DisableActions
			{
				displayName="$STR_A3_CfgVehicles_Land_BattlefieldCross_01_base_F_Attributes_DisableActions0";
				property="DisableActions";
				control="Checkbox";
				defaultValue="false";
				expression="_this setVariable ['Globe_disableAction',_value,isServer]";
			};
			class DisableInit
			{
				displayName="$STR_Action_searchLights_off";
				property="DisableInit";
				control="Checkbox";
				defaultValue="true";
				expression="_this setVariable ['Globe_disableInit',_value,isServer]";
			};
		};
		class EventHandlers
		{
			class Globe_ilumHelipad
			{
				postInit="if (!is3DEN) then { if ((_this # 0) getVariable ['Globe_disableInit',true]) then { (_this # 0) switchLight 'OFF' } else { (_this # 0) switchLight 'ON' } }";
			};
		};
		class UserActions
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
				condition="((this animationSourcePhase 'Lights_Hide') == 0) && (lightIsOn this isEqualTo 'ON') && Alive(this)&&  (!(this getVariable ['Globe_disableAction',false]))";
				statement="[this, 'OFF'] remoteExec ['switchLight',0,this]; playSound3D ['a3\sounds_f\arsenal\sfx\shared\zeroing_knob_tick_plastic.wss', player, false, getPosASL player, 1, 1, 6, 0, false ];";
			};
			class enableLight1: disableLight1
			{
				displayNameDefault="<img image='\A3\ui_f\data\igui\cfg\actions\take_ca.paa' size='1.8' shadow=2 /><img image='\a3\ui_f\data\igui\cfg\actions\ico_cpt_land_on_ca.paa' size='1.8' shadow=2 />";
				displayName="$STR_MPRole_enable";
				condition="((this animationSourcePhase 'Lights_Hide') == 0) && (lightIsOn this isEqualTo 'OFF') && Alive(this)&&  (!(this getVariable ['Globe_disableAction',false]))";
				statement="[this, 'ON'] remoteExec ['switchLight',0,this]; playSound3D ['a3\sounds_f\arsenal\sfx\shared\zeroing_knob_tick_plastic.wss', player, false, getPosASL player, 1, 1, 6, 0, false ];";
			};
		};
		class MarkerLights: MarkerLights
		{
			class Light_1: Light_1
			{
			};
		};
	};




























	
	class PortableHelipadLight_01_constant: Land_PortableHelipadLight_01_off
	{
		author="O&T Expansion Eden";
		_generalMacro="PortableHelipadLight_01_constant";
		displayName="$STR_Globe_CfgVehicles_PortableHelipadLight_01_constant0";
		class Attributes: Attributes
		{
			class DisableActions: DisableActions
			{
			};
			class DisableInit: DisableInit
			{
				defaultValue="false";
			};
		};
		class EventHandlers
		{
			class Globe_ilumHelipad
			{
				postInit="if (!is3DEN) then { if ((_this # 0) getVariable ['Globe_disableInit',false]) then { (_this # 0) switchLight 'OFF' } else { (_this # 0) switchLight 'ON' } }";
			};
		};
		class MarkerLights: MarkerLights
		{
			class Light_1: Light_1
			{
				blinking=0;
			};
		};
	};
	class PortableHelipadLight_01_blue_constant: PortableHelipadLight_01_blue_off
	{
		author="O&T Expansion Eden";
		_generalMacro="PortableHelipadLight_01_blue_constant";
		displayName="$STR_Globe_CfgVehicles_PortableHelipadLight_01_blue_constant0";
		class Attributes: Attributes
		{
			class DisableActions: DisableActions
			{
			};
			class DisableInit: DisableInit
			{
				defaultValue="false";
			};
		};
		class EventHandlers
		{
			class Globe_ilumHelipad
			{
				postInit="if (!is3DEN) then { if ((_this # 0) getVariable ['Globe_disableInit',false]) then { (_this # 0) switchLight 'OFF' } else { (_this # 0) switchLight 'ON' } }";
			};
		};
		class MarkerLights: MarkerLights
		{
			class Light_1: Light_1
			{
				blinking=0;
			};
		};
	};
	class PortableHelipadLight_01_red_constant: PortableHelipadLight_01_red_off
	{
		author="O&T Expansion Eden";
		_generalMacro="PortableHelipadLight_01_red_constant";
		displayName="$STR_Globe_CfgVehicles_PortableHelipadLight_01_red_constant0";
		class Attributes: Attributes
		{
			class DisableActions: DisableActions
			{
			};
			class DisableInit: DisableInit
			{
				defaultValue="false";
			};
		};
		class EventHandlers
		{
			class Globe_ilumHelipad
			{
				postInit="if (!is3DEN) then { if ((_this # 0) getVariable ['Globe_disableInit',false]) then { (_this # 0) switchLight 'OFF' } else { (_this # 0) switchLight 'ON' } }";
			};
		};
		class MarkerLights: MarkerLights
		{
			class Light_1: Light_1
			{
				blinking=0;
			};
		};
	};
	class PortableHelipadLight_01_white_constant: PortableHelipadLight_01_white_off
	{
		author="O&T Expansion Eden";
		_generalMacro="PortableHelipadLight_01_white_constant";
		displayName="$STR_Globe_CfgVehicles_PortableHelipadLight_01_white_constant0";
		class Attributes: Attributes
		{
			class DisableActions: DisableActions
			{
			};
			class DisableInit: DisableInit
			{
				defaultValue="false";
			};
		};
		class EventHandlers
		{
			class Globe_ilumHelipad
			{
				postInit="if (!is3DEN) then { if ((_this # 0) getVariable ['Globe_disableInit',false]) then { (_this # 0) switchLight 'OFF' } else { (_this # 0) switchLight 'ON' } }";
			};
		};
		class MarkerLights: MarkerLights
		{
			class Light_1: Light_1
			{
				blinking=0;
			};
		};
	};
	class PortableHelipadLight_01_green_constant: PortableHelipadLight_01_green_off
	{
		author="O&T Expansion Eden";
		_generalMacro="PortableHelipadLight_01_green_constant";
		displayName="$STR_Globe_CfgVehicles_PortableHelipadLight_01_green_constant0";
		class Attributes: Attributes
		{
			class DisableActions: DisableActions
			{
			};
			class DisableInit: DisableInit
			{
				defaultValue="false";
			};
		};
		class EventHandlers
		{
			class Globe_ilumHelipad
			{
				postInit="if (!is3DEN) then { if ((_this # 0) getVariable ['Globe_disableInit',false]) then { (_this # 0) switchLight 'OFF' } else { (_this # 0) switchLight 'ON' } }";
			};
		};
		class MarkerLights: MarkerLights
		{
			class Light_1: Light_1
			{
				blinking=0;
			};
		};
	};
	class PortableHelipadLight_01_yellow_constant: PortableHelipadLight_01_yellow_off
	{
		author="O&T Expansion Eden";
		_generalMacro="PortableHelipadLight_01_yellow_constant";
		displayName="$STR_Globe_CfgVehicles_PortableHelipadLight_01_yellow_constant0";
		class Attributes: Attributes
		{
			class DisableActions: DisableActions
			{
			};
			class DisableInit: DisableInit
			{
				defaultValue="false";
			};
		};
		class EventHandlers
		{
			class Globe_ilumHelipad
			{
				postInit="if (!is3DEN) then { if ((_this # 0) getVariable ['Globe_disableInit',false]) then { (_this # 0) switchLight 'OFF' } else { (_this # 0) switchLight 'ON' } }";
			};
		};
		class MarkerLights: MarkerLights
		{
			class Light_1: Light_1
			{
				blinking=0;
			};
		};
	};
};
