class CfgPatches
{
	class Structures_Globe_Military_Barracks
	{
		addonRootClass="A3_Structures_F_Globe";
		requiredAddons[]=
		{
			"A3_Structures_F_Globe_Military"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Land_GuardTower_01_ruins_G",
			"Land_GuardTower_02_ruins_G",
			"Land_GuardHouse_03_gate_F",
			"Land_GuardTower_02_on"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class House;
	class Wall_F;
	class Ruins_F;
	class Land_i_Barracks_V1_F;
	class House_F: House
	{
		class DestructionEffects;
		class EventHandlers;
		class UserActions;
	};
	class Land_GuardTower_02_F: House_F
	{
		class EventHandlers;
		class UserActions;
	};
	class Land_GuardTower_02_on: Land_GuardTower_02_F
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
			verticalOffset=3.421;
			verticalOffsetWorld=0;
			init="''";
		};
		_generalMacro="Land_GuardTower_02_on";
		displayName="$STR_Globe_CfgVehicles_Land_GuardTower_02_on0";
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
				priority=5;
				showWindow=1;
				condition="((this animationSourcePhase 'Lights_Hide') == 0) && (lightIsOn this isEqualTo 'ON') && Alive(this)&&  {!(this getVariable ['Globe_disableAction',false])}";
				statement="[this, 'OFF'] remoteExec ['switchLight',0,this]; playSound3D ['a3\missions_f_exp\data\sounds\exp_m07_lightsoff_01.wss', player, false, getPosASL player, 1, 1, 250, 0, false ]; playSound3D ['a3\missions_f_exp\data\sounds\exp_m07_lightsoff_02.wss', player, false, getPosASL player, 1, 1, 250, 0, false ]; playSound3D ['a3\missions_f_exp\data\sounds\exp_m07_lightsoff_03.wss', player, false, getPosASL player, 1, 1, 250, 0, false ]; playSound3D [ format ['a3\missions_f_oldman\data\sound\light_switch\light_switch_0%1.wss', ceil random 3], player, false, getPosASL player, 1.5, 0, 100, 0, false ]";
			};
			class enableLight1: disableLight1
			{
				displayNameDefault="<img image='\A3\ui_f\data\igui\cfg\actions\take_ca.paa' size='1.8' shadow=2 /><img image='\a3\ui_f\data\igui\cfg\actions\ico_cpt_land_on_ca.paa' size='1.8' shadow=2 />";
				displayName="$STR_MPRole_enable";
				condition="((this animationSourcePhase 'Lights_Hide') == 0) && (lightIsOn this isEqualTo 'OFF') && Alive(this)&&  {!(this getVariable ['Globe_disableAction',false])}";
				statement="[this, 'ON'] remoteExec ['switchLight',0,this]; playSound3D ['a3\missions_f_exp\data\sounds\exp_m07_lightson_01.wss', player, false, getPosASL player, 1, 1, 250, 0, false ]; playSound3D ['a3\missions_f_exp\data\sounds\exp_m07_lightson_02.wss', player, false, getPosASL player, 1, 1, 250, 0, false ]; playSound3D ['a3\missions_f_exp\data\sounds\exp_m07_lightson_03.wss', player, false, getPosASL player, 1, 1, 250, 0, false ]; playSound3D [ format ['a3\missions_f_oldman\data\sound\light_switch\light_switch_0%1.wss', ceil random 3], player, false, getPosASL player, 1.5, 0, 100, 0, false ]";
			};
		};
	};
	class Land_i_Barracks_V1_dam_F: Land_i_Barracks_V1_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_i_Barracks_V1_dam_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_i_Barracks_V1_dam_F0";
	};
	class Land_i_Barracks_V2_dam_F: Land_i_Barracks_V1_dam_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_i_Barracks_V2_dam_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_i_Barracks_V2_dam_F0";
	};
	class Land_GuardTower_01_ruins_G: Ruins_F
	{
		author="O&T Expansion Eden";
		mapSize=6.2600002;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=2.5999999;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_GuardTower_01_ruins_G.jpg";
		_generalMacro="Land_GuardTower_01_ruins_G";
		scope=2;
		scopeCurator=0;
		displayName="$STR_Globe_CfgVehicles_Land_GuardTower_01_ruins_G0";
		model="\A3\Structures_F_Enoch\Military\Barracks\guardtower_01_ruins_f.p3d";
		icon="iconObject_3x2";
		editorCategory="EdCat_Ruins_Enoch";
		editorSubcategory="EdSubcat_Military";
	};
	class Land_GuardTower_02_ruins_G: Ruins_F
	{
		author="O&T Expansion Eden";
		mapSize=6.2600002;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=2.5999999;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_GuardTower_02_ruins_G.jpg";
		_generalMacro="Land_GuardTower_02_ruins_G";
		scope=2;
		scopeCurator=0;
		displayName="$STR_Globe_CfgVehicles_Land_GuardTower_02_ruins_G0";
		model="\A3\Structures_F_Enoch\Military\Barracks\guardtower_02_ruins_f.p3d";
		icon="iconObject_3x2";
		editorCategory="EdCat_Ruins_Enoch";
		editorSubcategory="EdSubcat_Military";
	};
	class Land_GuardHouse_03_gate_F: Wall_F
	{
		author="O&T Expansion Eden";
		mapSize=6.1220303;
		class SimpleObject
		{
			eden=0;
			animate[]=
			{};
			hide[]={};
			verticalOffset=0.851228;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Land_GuardHouse_03_gate_F.jpg";
		_generalMacro="Land_GuardHouse_03_gate_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_expEden_Land_GuardHouse_03_gate_F";
		model="\A3\Structures_F_Enoch\military\Barracks\GuardHouse_03_gate_F.p3d";
		icon="iconObject_10x1";
		editorCategory="EdCat_Structures_Enoch";
		editorSubcategory="EdSubcat_Military";
		vehicleClass="Structures_Fences";
		armor=1000;
	};
};
