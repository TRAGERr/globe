class CfgPatches
{
	class 3DEN_Globe
	{
		author="Trager";
		name="O&T Expansion Eden - Eden Editor";
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
class ctrlStaticPictureKeepAspect;
class ctrlXSliderH;
class ctrlStaticFrame;
class ctrlCombo;
class ctrlCheckbox;
class ctrlButton;
class ctrlButtonPicture;
class ctrlEdit;
class ctrlMenu;
class ctrlStatic;
class ctrlActivePicture;
class ctrlControlsGroup;
class ctrlControlsGroupNoScrollbars;
class ctrlCheckboxBaseline;
class Cfg3DEN
{
	class Object
	{
		class AttributeCategories
		{
			class State
			{
				class Attributes
				{
					class FuelConsumptionCoef
					{
						property="FuelConsumptionCoef";
						control="SliderFuelConsumptionCoef";
						displayName="$STR_Globe_3DEN_Object_Attribute_FuelConsumption_displayName";
						tooltip="$STR_Globe_3DEN_Object_Attribute_FuelConsumption_tooltip";
						expression="_this setFuelConsumptionCoef _value;";
						defaultValue="getFuelConsumptionCoef _this;";
						wikiType="[[Number]]";
						condition="objectVehicle";
					};
				};
			};
			class StateSpecial
			{
				class Attributes
				{
					class DoorKnocking
					{
						property="DoorKnocking";
						control="DoorKnocking";
						displayName="$STR_Globe_3DEN_Object_Attribute_DoorKnocking0";
						tooltip="$STR_Globe_3DEN_Object_Attribute_DoorKnocking1";
						expression = "['init', _this, _value] call expEden_fnc_3DENAttributeDoorKnocking;";
						defaultValue="[0,0,0]";
						condition="script";
						conditionScript="getNumber (configfile >> 'CfgVehicles' >> typeOf _this >> 'numberOfDoors') != 0";
					};
					class ObjectBoxMarker
					{
						property="ObjectBoxMarker";
						control="Checkbox";
						displayName="$STR_Globe_3DEN_Object_Attribute_ObjectBoxMarker_displayName";
						tooltip="$STR_Globe_3DEN_Object_Attribute_ObjectBoxMarker_tooltip";
						expression="if (_value isEqualTo true) then {_this call expEden_fnc_3DENObjectBoxMarker};";
						defaultValue=0;
						wikiType="[[Bool]]";
						condition="Script";
						conditionScript="_this call expEden_fnc_3DENObjectBoxMarkerCondition";
					};
					class GlassStates
					{
						property="GlassStates";
						displayName="$STR_Globe_Cfg3DEN_StateSpecial_Attributes_GlassStates_displayName0";
						tooltip="$STR_Globe_Cfg3DEN_StateSpecial_Attributes_GlassStates_tooltip0";
						control="GlassStates";
						expression="['init',_this,_value] call expEden_fnc_3DENAttributeGlassStates;";
						defaultValue="[0,0,0]";
					};
					class ObjectInterior
					{
						property="ObjectInterior";
						control="Checkbox";
						displayName="$STR_Globe_3DEN_Object_Attribute_ObjectInterior_displayName";
						tooltip="$STR_Globe_3DEN_Object_Attribute_ObjectInterior_tooltip";
						expression="[_this, ['building_interior', _value]] remoteExecCall ['enableAudioFeature', 0, _this];";
						defaultValue="_this enableAudioFeature ['building_interior']";
						wikiType="[[Bool]]";
						condition="(1 - (objectBrain)) 	* (1 - (logicModule)) 	* (1 - (objectVehicle)) 	* (1 - (objectAgent))";
					};
					class attachMarker
					{
						property="attachMarker";
						control="EditShort";
						displayName="$STR_Globe_Cfg3DEN_Object_Attribute_attachMarker0";
						tooltip="$STR_Globe_Cfg3DEN_Object_Attribute_attachMarker1";
						expression="if (_value isNotEqualTo '') then {[_this, _value] spawn expEden_fnc_markerAttachToObject}";
						defaultValue="_object getVariable ['Globe_atchdMrk', ''];";
						wikiType="[[String]]";
						condition="objectBrain + objectControllable + objectAgent + objectVehicle";
					};
					class ObjectCollision
					{
						property="ObjectCollision";
						control="CheckboxArray0";
						displayName="$STR_Globe_3DEN_Object_Attribute_ObjectCollision0";
						tooltip="$STR_Globe_3DEN_Object_Attribute_ObjectCollision1";
						expression="private _actualValue = _value; if (_actualValue isEqualType []) then { _actualValue = _actualValue # 0 }; if (_actualValue isEqualType 0) then { _actualValue = _actualValue isEqualTo 1 }; [_this, _actualValue] remoteExecCall ['setPhysicsCollisionFlag', 0, _this];";
						defaultValue="getPhysicsCollisionFlag _this";
						wikiType="[[Bool]]";
						condition="(1 - (logicModule))";
					};
					class InfantryBackpack
					{
						property="InfantryBackpack";
						control="checkbox";
						displayName="$STR_Globe_3DEN_Object_Attribute_InfantryBackpack0";
						tooltip="$STR_Globe_3DEN_Object_Attribute_InfantryBackpack1";
						expression="if (_value isNotEqualTo false) then {[(backpackContainer _this), _value] remoteExecCall ['lockInventory', 0, _this]};";
						defaultValue="lockedInventory (backpackContainer _this)";
						condition="objectControllable";
						typeName="BOOL";
						wikiType="[[Bool]]";
					};

				};
			};
			class VehicleSystems
			{
				class Attributes
				{
					class CarAlarm
					{
						property="CarAlarm";
						control="Checkbox";
						displayName="$STR_a3_cfgsounds_alarmcar0";
						tooltip="$STR_Globe_3DEN_Object_Attribute_CarAlarm_tooltip";
						expression="if (_value isEqualTo true) then {_this remoteExecCall ['expEden_fnc_3DENCarAlarmInit']}";
						defaultValue=0;
						wikiType="[[Bool]]";
						condition="objectVehicle";
					};
				};
			};
			class Transformation
			{
				class Attributes
				{
					class RotationRadnom
					{
						property="RotationRadnom";
						control="Checkbox";
						displayName="$STR_Globe_3DEN_Object_AttributeCategories_Transformation_RotationRadnom0";
						tooltip="$STR_Globe_3DEN_Object_AttributeCategories_Transformation_RotationRadnom1";
						expression="if (is3DEN && _value isEqualTo true) then {_this set3DENAttribute ['Rotation',[	(_this get3DENAttribute 'Rotation')#0#0, (_this get3DENAttribute 'Rotation')#0#1,		(random 360)]]}";
						defaultValue="false";
						wikiType="[[Bool]]";
					};
				};
			};
			class Inventory
			{
				class Attributes
				{
					class AmmoBoxLock
					{
						property="AmmoBoxLock";
						control="checkbox";
						displayName="$STR_Globe_3DEN_Object_Attribute_AmmoBoxLock0";
						tooltip="$STR_Globe_3DEN_Object_Attribute_AmmoBoxLock1";
						expression="if (_value isNotEqualTo false) then {[_this, _value] remoteExecCall ['lockInventory', 0, _this]};";
						defaultValue="lockedInventory _this";
						condition="objectHasInventoryCargo";
						typeName="BOOL";
						wikiType="[[Bool]]";
					};
				};
			};
			class Presence
			{
				class Attributes
				{
					class DeleteDelay
					{
						property="DeleteDelay_property";
						control="EditShort";
						displayName="$STR_Globe_Cfg3DEN_Object_Attribute_DeleteDelay0";
						tooltip="$STR_Globe_Cfg3DEN_Object_Attribute_DeleteDelay1";
						expression="if (!is3DEN && {_value isEqualType 0 && {_value > 0}}) then {[_this, _value] spawn {params ['_object', '_value']; if (isNull _object) exitWith {}; private _cond = _object getVariable ['Globe_delCond', 'false']; if (_cond isEqualType '') then {if (!(call compile _cond)) exitWith {}}; waitUntil {sleep 0.1; if (isNull _object) exitWith {true}; private _condNow = _object getVariable ['Globe_delCond', 'false']; private _result = call compile _condNow; if (isNil '_result') then {false} else {_result}}; sleep _value; if (isNull _object) exitWith {}; deleteVehicle _object}}";
						defaultValue=0;
						wikiType="[[Number]]";
						validate="number";
						typeName="NUMBER";
					};
					class DeleteDelayCondition
					{
						property="DeleteDelayCondition_property";
						control="EditCode";
						displayName="$STR_Globe_Cfg3DEN_Object_Attribute_DeleteDelayCondition0";
						tooltip="$STR_Globe_Cfg3DEN_Object_Attribute_DeleteDelayCondition1";
						expression="_this setVariable ['Globe_delCond', _value, true]";
						defaultValue="true";
						wikiType="[[Code]]";
						typeName="CODE";
					};
				};
			};
		};
	};
	class Attributes
	{
		class Default;
		class Title: Default
		{
			class Controls;
		};
		class Checkbox: Title
		{
			class Controls: Controls
			{
				class Title: Title
				{
				};
				class Value: ctrlCheckboxBaseline
				{
				};
			};
		};
		class Slider: Title
		{
			class Controls: Controls
			{
				class Title;
				class Value;
				class Edit;
			};
		};
		class SliderTime: Title
		{
			class Controls: Controls
			{
				class Title: Title
				{
				};
				class Value: ctrlXSliderH
				{
				};
				class Frame: ctrlStaticFrame
				{
				};
				class Separator: ctrlStatic
				{
				};
				class Hour: ctrlEdit
				{
				};
				class Minute: Hour
				{
				};
				class Second: Hour
				{
				};
			};
		};
		class SliderMultiplier: Slider
		{
			class Controls: Controls
			{
				class Title: Title
				{
				};
				class Value: Value
				{
				};
				class Edit: Edit
				{
				};
			};
		};
		class Toolbox: Title
		{
			class Controls: Controls
			{
				class Value;
				class Title;
			};
		};
		class Combo: Title
		{
			class Controls: Controls
			{
				class Title;
				class Value;
			};
		};
		class EditXYZ: Title
		{
			class Controls: Controls
			{
				class Title;
			};
		};
		class GlassStates: Title
		{
			attributeLoad="['attributeLoad',get3DENSelected 'object' select 0,_this,_value] call expEden_fnc_3DENAttributeGlassStates";
			attributeSave="['attributeSave',get3DENSelected 'object' select 0,_this] call expEden_fnc_3DENAttributeGlassStates";
			h="3 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
			class Controls: Controls
			{
				class Title: Title
				{
					idc=99;
					h="3 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
					colorBackground[]={0,0,0,0};
				};
				class Value: ctrlControlsGroupNoScrollbars
				{
					idc=100;
					x="48 * (pixelW * pixelGrid * 	0.50)";
					w="80 * (pixelW * pixelGrid * 	0.50)";
					h="3 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
					class Controls
					{
						class CheckboxBackground1: ctrlStatic
						{
							idc="125+1";
							text="";
							x="(1-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y=0;
							w="2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h="2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							shadow=0;
							colorText[]={1,1,1,0.5};
							colorBackground[]={0,0,0,0.25};
							colorShadow[]={0,0,0,0};
							type=0;
							style=2;
							onLoad="(_this select 0) ctrlEnable false;";
						};
						class Checkbox1: ctrlActivePicture
						{
							idc="100+1";
							x="(1-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y=0;
							w="2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h="2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							color[]={1,1,1,1};
							colorBackground[]={0,0,0,0.25};
							colorActive[]={1,1,1,1};
							colorDisabled[]={1,1,1,1};
							text="\A3\3DEN_Globe\Data\textureWindow_fullXP_ca.paa";
							onMouseButtonDown="['onMouseButtonUp',get3DENSelected 'object' select 0,_this] call expEden_fnc_3DENAttributeGlassStates";
						};
						class Text1: ctrlStatic
						{
							idc="150+1";
							text=1;
							x="(1-1) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
							w="2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h="1 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							shadow=0;
							colorText[]={1,1,1,0.5};
							colorBackground[]={0,0,0,0.25};
							colorShadow[]={0,0,0,0};
							type=0;
							style=2;
							onLoad="(_this select 0) ctrlEnable false;";
						};
						class CheckboxBackground2: ctrlStatic
						{
							idc="125+2";
							text="";
							x="(2-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y=0;
							w="2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h="2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							shadow=0;
							colorText[]={1,1,1,0.5};
							colorBackground[]={0,0,0,0.25};
							colorShadow[]={0,0,0,0};
							type=0;
							style=2;
							onLoad="(_this select 0) ctrlEnable false;";
						};
						class Checkbox2: ctrlActivePicture
						{
							idc="100+2";
							x="(2-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y=0;
							w="2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h="2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							color[]={1,1,1,1};
							colorBackground[]={0,0,0,0.25};
							colorActive[]={1,1,1,1};
							colorDisabled[]={1,1,1,1};
							text="\A3\3DEN_Globe\Data\textureWindow_fullXP_ca.paa";
							onMouseButtonDown="['onMouseButtonUp',get3DENSelected 'object' select 0,_this] call expEden_fnc_3DENAttributeGlassStates";
						};
						class Text2: ctrlStatic
						{
							idc="150+2";
							text=2;
							x="(2-1) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
							w="2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h="1 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							shadow=0;
							colorText[]={1,1,1,0.5};
							colorBackground[]={0,0,0,0.25};
							colorShadow[]={0,0,0,0};
							type=0;
							style=2;
							onLoad="(_this select 0) ctrlEnable false;";
						};
						class CheckboxBackground3: ctrlStatic
						{
							idc="125+3";
							text="";
							x="(3-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y=0;
							w="2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h="2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							shadow=0;
							colorText[]={1,1,1,0.5};
							colorBackground[]={0,0,0,0.25};
							colorShadow[]={0,0,0,0};
							type=0;
							style=2;
							onLoad="(_this select 0) ctrlEnable false;";
						};
						class Checkbox3: ctrlActivePicture
						{
							idc="100+3";
							x="(3-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y=0;
							w="2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h="2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							color[]={1,1,1,1};
							colorBackground[]={0,0,0,0.25};
							colorActive[]={1,1,1,1};
							colorDisabled[]={1,1,1,1};
							text="\A3\3DEN_Globe\Data\textureWindow_fullXP_ca.paa";
							onMouseButtonDown="['onMouseButtonUp',get3DENSelected 'object' select 0,_this] call expEden_fnc_3DENAttributeGlassStates";
						};
						class Text3: ctrlStatic
						{
							idc="150+3";
							text=3;
							x="(3-1) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
							w="2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h="1 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							shadow=0;
							colorText[]={1,1,1,0.5};
							colorBackground[]={0,0,0,0.25};
							colorShadow[]={0,0,0,0};
							type=0;
							style=2;
							onLoad="(_this select 0) ctrlEnable false;";
						};
						class CheckboxBackground4: ctrlStatic
						{
							idc="125+4";
							text="";
							x="(4-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y=0;
							w="2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h="2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							shadow=0;
							colorText[]={1,1,1,0.5};
							colorBackground[]={0,0,0,0.25};
							colorShadow[]={0,0,0,0};
							type=0;
							style=2;
							onLoad="(_this select 0) ctrlEnable false;";
						};
						class Checkbox4: ctrlActivePicture
						{
							idc="100+4";
							x="(4-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y=0;
							w="2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h="2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							color[]={1,1,1,1};
							colorBackground[]={0,0,0,0.25};
							colorActive[]={1,1,1,1};
							colorDisabled[]={1,1,1,1};
							text="\A3\3DEN_Globe\Data\textureWindow_fullXP_ca.paa";
							onMouseButtonDown="['onMouseButtonUp',get3DENSelected 'object' select 0,_this] call expEden_fnc_3DENAttributeGlassStates";
						};
						class Text4: ctrlStatic
						{
							idc="150+4";
							text=4;
							x="(4-1) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
							w="2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h="1 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							shadow=0;
							colorText[]={1,1,1,0.5};
							colorBackground[]={0,0,0,0.25};
							colorShadow[]={0,0,0,0};
							type=0;
							style=2;
							onLoad="(_this select 0) ctrlEnable false;";
						};
						class CheckboxBackground5: ctrlStatic
						{
							idc="125+5";
							text="";
							x="(5-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y=0;
							w="2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h="2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							shadow=0;
							colorText[]={1,1,1,0.5};
							colorBackground[]={0,0,0,0.25};
							colorShadow[]={0,0,0,0};
							type=0;
							style=2;
							onLoad="(_this select 0) ctrlEnable false;";
						};
						class Checkbox5: ctrlActivePicture
						{
							idc="100+5";
							x="(5-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y=0;
							w="2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h="2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							color[]={1,1,1,1};
							colorBackground[]={0,0,0,0.25};
							colorActive[]={1,1,1,1};
							colorDisabled[]={1,1,1,1};
							text="\A3\3DEN_Globe\Data\textureWindow_fullXP_ca.paa";
							onMouseButtonDown="['onMouseButtonUp',get3DENSelected 'object' select 0,_this] call expEden_fnc_3DENAttributeGlassStates";
						};
						class Text5: ctrlStatic
						{
							idc="150+5";
							text=5;
							x="(5-1) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
							w="2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h="1 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							shadow=0;
							colorText[]={1,1,1,0.5};
							colorBackground[]={0,0,0,0.25};
							colorShadow[]={0,0,0,0};
							type=0;
							style=2;
							onLoad="(_this select 0) ctrlEnable false;";
						};
						class CheckboxBackground6: ctrlStatic
						{
							idc="125+6";
							text="";
							x="(6-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y=0;
							w="2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h="2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							shadow=0;
							colorText[]={1,1,1,0.5};
							colorBackground[]={0,0,0,0.25};
							colorShadow[]={0,0,0,0};
							type=0;
							style=2;
							onLoad="(_this select 0) ctrlEnable false;";
						};
						class Checkbox6: ctrlActivePicture
						{
							idc="100+6";
							x="(6-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y=0;
							w="2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h="2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							color[]={1,1,1,1};
							colorBackground[]={0,0,0,0.25};
							colorActive[]={1,1,1,1};
							colorDisabled[]={1,1,1,1};
							text="\A3\3DEN_Globe\Data\textureWindow_fullXP_ca.paa";
							onMouseButtonDown="['onMouseButtonUp',get3DENSelected 'object' select 0,_this] call expEden_fnc_3DENAttributeGlassStates";
						};
						class Text6: ctrlStatic
						{
							idc="150+6";
							text=6;
							x="(6-1) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
							w="2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h="1 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							shadow=0;
							colorText[]={1,1,1,0.5};
							colorBackground[]={0,0,0,0.25};
							colorShadow[]={0,0,0,0};
							type=0;
							style=2;
							onLoad="(_this select 0) ctrlEnable false;";
						};
						class CheckboxBackground7: ctrlStatic
						{
							idc="125+7";
							text="";
							x="(7-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y=0;
							w="2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h="2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							shadow=0;
							colorText[]={1,1,1,0.5};
							colorBackground[]={0,0,0,0.25};
							colorShadow[]={0,0,0,0};
							type=0;
							style=2;
							onLoad="(_this select 0) ctrlEnable false;";
						};
						class Checkbox7: ctrlActivePicture
						{
							idc="100+7";
							x="(7-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y=0;
							w="2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h="2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							color[]={1,1,1,1};
							colorBackground[]={0,0,0,0.25};
							colorActive[]={1,1,1,1};
							colorDisabled[]={1,1,1,1};
							text="\A3\3DEN_Globe\Data\textureWindow_fullXP_ca.paa";
							onMouseButtonDown="['onMouseButtonUp',get3DENSelected 'object' select 0,_this] call expEden_fnc_3DENAttributeGlassStates";
						};
						class Text7: ctrlStatic
						{
							idc="150+7";
							text=7;
							x="(7-1) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
							w="2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h="1 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							shadow=0;
							colorText[]={1,1,1,0.5};
							colorBackground[]={0,0,0,0.25};
							colorShadow[]={0,0,0,0};
							type=0;
							style=2;
							onLoad="(_this select 0) ctrlEnable false;";
						};
						class CheckboxBackground8: ctrlStatic
						{
							idc="125+8";
							text="";
							x="(8-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y=0;
							w="2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h="2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							shadow=0;
							colorText[]={1,1,1,0.5};
							colorBackground[]={0,0,0,0.25};
							colorShadow[]={0,0,0,0};
							type=0;
							style=2;
							onLoad="(_this select 0) ctrlEnable false;";
						};
						class Checkbox8: ctrlActivePicture
						{
							idc="100+8";
							x="(8-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y=0;
							w="2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h="2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							color[]={1,1,1,1};
							colorBackground[]={0,0,0,0.25};
							colorActive[]={1,1,1,1};
							colorDisabled[]={1,1,1,1};
							text="\A3\3DEN_Globe\Data\textureWindow_fullXP_ca.paa";
							onMouseButtonDown="['onMouseButtonUp',get3DENSelected 'object' select 0,_this] call expEden_fnc_3DENAttributeGlassStates";
						};
						class Text8: ctrlStatic
						{
							idc="150+8";
							text=8;
							x="(8-1) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
							w="2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h="1 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							shadow=0;
							colorText[]={1,1,1,0.5};
							colorBackground[]={0,0,0,0.25};
							colorShadow[]={0,0,0,0};
							type=0;
							style=2;
							onLoad="(_this select 0) ctrlEnable false;";
						};
						class CheckboxBackground9: CheckboxBackground1
						{
							idc="125+9";
							x="(9-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Checkbox9: Checkbox1
						{
							idc="100+9";
							x="(9-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text9: Text1
						{
							idc="150+9";
							text=9;
							x="(9-9) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class CheckboxBackground10: CheckboxBackground1
						{
							idc="125+10";
							x="(10-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Checkbox10: Checkbox1
						{
							idc="100+10";
							x="(10-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text10: Text1
						{
							idc="150+10";
							text=10;
							x="(10-9) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class CheckboxBackground11: CheckboxBackground1
						{
							idc="125+11";
							x="(11-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Checkbox11: Checkbox1
						{
							idc="100+11";
							x="(11-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text11: Text1
						{
							idc="150+11";
							text=11;
							x="(11-9) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class CheckboxBackground12: CheckboxBackground1
						{
							idc="125+12";
							x="(12-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Checkbox12: Checkbox1
						{
							idc="100+12";
							x="(12-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text12: Text1
						{
							idc="150+12";
							text=12;
							x="(12-9) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class CheckboxBackground13: CheckboxBackground1
						{
							idc="125+13";
							x="(13-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Checkbox13: Checkbox1
						{
							idc="100+13";
							x="(13-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text13: Text1
						{
							idc="150+13";
							text=13;
							x="(13-9) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class CheckboxBackground14: CheckboxBackground1
						{
							idc="125+14";
							x="(14-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Checkbox14: Checkbox1
						{
							idc="100+14";
							x="(14-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text14: Text1
						{
							idc="150+14";
							text=14;
							x="(14-9) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class CheckboxBackground15: CheckboxBackground1
						{
							idc="125+15";
							x="(15-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Checkbox15: Checkbox1
						{
							idc="100+15";
							x="(15-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text15: Text1
						{
							idc="150+15";
							text=15;
							x="(15-9) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class CheckboxBackground16: CheckboxBackground1
						{
							idc="125+16";
							x="(16-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Checkbox16: Checkbox1
						{
							idc="100+16";
							x="(16-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text16: Text1
						{
							idc="150+16";
							text=16;
							x="(16-9) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class CheckboxBackground17: CheckboxBackground1
						{
							idc="125+17";
							x="(17-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class Checkbox17: Checkbox1
						{
							idc="100+17";
							x="(17-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class Text17: Text1
						{
							idc="150+17";
							text=17;
							x="(17-17) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="3 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 2 * 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class CheckboxBackground18: CheckboxBackground1
						{
							idc="125+18";
							x="(18-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class Checkbox18: Checkbox1
						{
							idc="100+18";
							x="(18-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class Text18: Text1
						{
							idc="150+18";
							text=18;
							x="(18-17) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="3 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 2 * 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class CheckboxBackground19: CheckboxBackground1
						{
							idc="125+19";
							x="(19-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class Checkbox19: Checkbox1
						{
							idc="100+19";
							x="(19-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class Text19: Text1
						{
							idc="150+19";
							text=19;
							x="(19-17) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="3 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 2 * 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class CheckboxBackground20: CheckboxBackground1
						{
							idc="125+20";
							x="(20-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class Checkbox20: Checkbox1
						{
							idc="100+20";
							x="(20-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class Text20: Text1
						{
							idc="150+20";
							text=20;
							x="(20-17) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="3 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 2 * 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class CheckboxBackground21: CheckboxBackground1
						{
							idc="125+21";
							x="(21-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class Checkbox21: Checkbox1
						{
							idc="100+21";
							x="(21-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class Text21: Text1
						{
							idc="150+21";
							text=21;
							x="(21-17) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="3 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 2 * 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class CheckboxBackground22: CheckboxBackground1
						{
							idc="125+22";
							x="(22-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class Checkbox22: Checkbox1
						{
							idc="100+22";
							x="(22-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class Text22: Text1
						{
							idc="150+22";
							text=22;
							x="(22-17) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="3 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 2 * 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class CheckboxBackground23: CheckboxBackground1
						{
							idc="125+23";
							x="(23-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class Checkbox23: Checkbox1
						{
							idc="100+23";
							x="(23-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class Text23: Text1
						{
							idc="150+23";
							text=23;
							x="(23-17) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="3 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 2 * 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class CheckboxBackground24: CheckboxBackground1
						{
							idc="125+24";
							x="(24-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class Checkbox24: Checkbox1
						{
							idc="100+24";
							x="(24-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class Text24: Text1
						{
							idc="150+24";
							text=24;
							x="(24-17) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="3 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 2 * 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
					};
				};
			};
		};
		class SliderFuelConsumptionCoef: SliderMultiplier
		{
			class Controls: Controls
			{
				class Title: Title
				{
				};
				class Value: Value
				{
					sliderRange[]={0,1000};
					sliderPosition=1;
					lineSize=0.1;
					sliderStep=0.1;
				};
				class Edit: Edit
				{
				};
			};
		};
		class CheckboxStateReversed: Checkbox
		{
			class Controls: Controls
			{
				class Title: Title
				{
				};
				class Value: Value
				{
					onCheckedChanged="					_ctrlCheckbox = _this select 0; _state = [false,true] select (cbChecked _ctrlCheckbox); _fade = [0.75,0] select _state; _ctrlGroup = ctrlParentControlsGroup ctrlParentControlsGroup _ctrlCheckbox; { if (ctrlParentControlsGroup _x == _ctrlGroup) then { _x ctrlenable ( if (_state) then {false} else {true}    ); _x ctrlsetfade ( if (_state) then {0.75} else {0}    ); _x ctrlcommit 0; }; } foreach (allcontrols (ctrlparent _ctrlCheckbox) - [ctrlParentControlsGroup _ctrlCheckbox]);	";
					onLoad="                    				_this spawn { disableserialization; _ctrlCheckbox = _this select 0; _state = [false,true] select (cbChecked _ctrlCheckbox); _fade = [0.75,0] select _state; _ctrlGroup = ctrlParentControlsGroup ctrlParentControlsGroup _ctrlCheckbox; { if (ctrlParentControlsGroup _x == _ctrlGroup) then { _x ctrlenable ( if (_state) then {false} else {true} ); _x ctrlsetfade ( if (_state) then {0.75} else {}    ); _x ctrlcommit 0; }; } foreach (allcontrols (ctrlparent _ctrlCheckbox) - [ctrlParentControlsGroup _ctrlCheckbox]); };			";
				};
			};
		};
		class SliderPortableLightPitch: SliderMultiplier
		{
			onLoad="		comment 'DO NOT COPY THIS CODE TO YOUR ATTRIBUTE CONFIG UNLESS YOU ARE CHANGING SOMETHING IN THE CODE!';		_ctrlGroup = _this select 0;		[_ctrlGroup controlsgroupctrl 100,_ctrlGroup controlsgroupctrl 101,'°'] call bis_fnc_initSliderValue;	";
			attributeLoad="		comment 'DO NOT COPY THIS CODE TO YOUR ATTRIBUTE CONFIG UNLESS YOU ARE CHANGING SOMETHING IN THE CODE!';		_ctrlGroup = _this;		[_ctrlGroup controlsgroupctrl 100,_ctrlGroup controlsgroupctrl 101,'°',_value] call bis_fnc_initSliderValue;	";
			class Controls: Controls
			{
				class Title: Title
				{
				};
				class Value: Value
				{
					sliderRange[]={-90,90};
					sliderPosition=0;
					lineSize=0.1;
					sliderStep=0.1;
				};
				class Edit: Edit
				{
				};
			};
		};
		class CheckboxVehDoors: Checkbox
		{
			attributeLoad="		_checked = switch (true) do {			case (_value isequaltype 0): {([false,true] select (_value max 0 min 1))};			case (_value isequaltype ''): {([false,true] select ((parsenumber _value) max 0 min 1))};			default {_value};		};		(_this controlsGroupCtrl 100) cbsetchecked _checked;	";
		};
		class CheckboxArray0: Checkbox
		{
			attributeLoad="		_checked = switch (true) do { case (_value isequaltype 0): {([false,true] select (_value max 0 min 1))}; case (_value isequaltype ''): {([false,true] select ((parsenumber _value) max 0 min 1))}; case (_value isequaltype []): {([false,true] select (_value # 0))}; default {_value}; }; (_this controlsGroupCtrl 100) cbsetchecked _checked;";
		};
		class ShapeMarkerCustom: Toolbox
		{
			attributeLoad="(_this controlsGroupCtrl 100) lbsetcursel (['IGNORE','TRIANGLE','PENTAGON','HEXAGON','HEPTAGON','OCTAGON','NONAGON','DECAGON'] find toupper _value);";
			attributeSave="['IGNORE','TRIANGLE','PENTAGON','HEXAGON','HEPTAGON','OCTAGON','NONAGON','DECAGON'] select lbcursel (_this controlsGroupCtrl 100);";
			h="2 * 	5 * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Title: Title
				{
					h="2 * 	5 * (pixelH * pixelGrid * 	0.50)";
				};
				class Value: Value
				{
					idc=100;
					style="0x02 + 0x30 + 0x800";
					h="2 * 	5 * (pixelH * pixelGrid * 	0.50)";
					rows=1;
					columns=8;
					strings[]=
					{
						"\a3\3DEN\Data\Attributes\default_ca.paa",
						"#(rgb,512,512,3)text(1,1,""EtelkaMonospacePro"",0.85,""#00000000"",""#ffffff"",""TR"")",
						"#(rgb,512,512,3)text(1,1,""EtelkaMonospacePro"",0.85,""#00000000"",""#ffffff"",""PE"")",
						"#(rgb,512,512,3)text(1,1,""EtelkaMonospacePro"",0.85,""#00000000"",""#ffffff"",""HE"")",
						"#(rgb,512,512,3)text(1,1,""EtelkaMonospacePro"",0.85,""#00000000"",""#ffffff"",""HP"")",
						"#(rgb,512,512,3)text(1,1,""EtelkaMonospacePro"",0.85,""#00000000"",""#ffffff"",""OC"")",
						"#(rgb,512,512,3)text(1,1,""EtelkaMonospacePro"",0.85,""#00000000"",""#ffffff"",""NO"")",
						"#(rgb,512,512,3)text(1,1,""EtelkaMonospacePro"",0.85,""#00000000"",""#ffffff"",""DE"")"
					};
					values[]={0,1,2,3,4,5,6,7};
					tooltips[]=
					{
						"$STR_DISP_TAGS_UNUSED",
						"$STR_Globe_Cfg3DEN_Attributes_ShapeMarkerCustom_0",
						"$STR_Globe_Cfg3DEN_Attributes_ShapeMarkerCustom_1",
						"$STR_Globe_Cfg3DEN_Attributes_ShapeMarkerCustom_2",
						"$STR_Globe_Cfg3DEN_Attributes_ShapeMarkerCustom_3",
						"$STR_Globe_Cfg3DEN_Attributes_ShapeMarkerCustom_4",
						"$STR_Globe_Cfg3DEN_Attributes_ShapeMarkerCustom_5",
						"$STR_Globe_Cfg3DEN_Attributes_ShapeMarkerCustom_6"
					};
					onToolboxSelChanged="";
				};
			};
		};
		class EditRGBA123: Title
		{
			idc=100;
			attributeLoad="		(_this controlsGroupCtrl 101) ctrlSetText str (_value select 0);		(_this controlsGroupCtrl 102) ctrlSetText str (_value select 1);		(_this controlsGroupCtrl 103) ctrlSetText str (_value select 2);		(_this controlsGroupCtrl 104) ctrlSetText str (_value select 3);";
			attributeSave="		[			parsenumber ctrlText (_this controlsGroupCtrl 101),			parsenumber ctrlText (_this controlsGroupCtrl 102),			parsenumber ctrlText (_this controlsGroupCtrl 103),			parsenumber ctrlText (_this controlsGroupCtrl 104)		]	";
			class Controls: Controls
			{
				class Title: Title
				{
				};
				class TitleR: ctrlStatic
				{
					text="R";
					style=2;
					shadow=0;
					x="48 * (pixelW * pixelGrid * 	0.50)";
					w="(	5) * (pixelW * pixelGrid * 	0.50)";
					h="5 * (pixelH * pixelGrid * 	0.50)";
					colorBackground[]={0.76999998,0.18000001,0.1,1};
				};
				class ValueR: ctrlEdit
				{
					idc=101;
					text="0";
					x="(	48 + 	(	6)) * (pixelW * pixelGrid * 	0.50)";
					w="(	82 / 4 - 	5) * (pixelW * pixelGrid * 	0.50)";
					h="5 * (pixelH * pixelGrid * 	0.50)";
					font="EtelkaMonospacePro";
					sizeEx="3.875 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
				};
				class TitleG: TitleR
				{
					text="G";
					x="(	48 + 	82 * (1/4)) * (pixelW * pixelGrid * 	0.50)";
					colorBackground[]={0.57999998,0.81999999,0.22,1};
				};
				class ValueG: ValueR
				{
					idc=102;
					x="(	48 + 	82 * (1/4) + 	(	6)) * (pixelW * pixelGrid * 	0.50)";
				};
				class TitleB: TitleR
				{
					text="B";
					x="(	48 + 	82 * (2/4)) * (pixelW * pixelGrid * 	0.50)";
					colorBackground[]={0.25999999,0.51999998,0.92000002,1};
				};
				class ValueB: ValueR
				{
					idc=103;
					x="(	48 + 	82 * (2/4) + 	(	6)) * (pixelW * pixelGrid * 	0.50)";
				};
				class TitleA: TitleR
				{
					text="A";
					x="(	48 + 	82 * (3/4)) * (pixelW * pixelGrid * 	0.50)";
					colorBackground[]={0,0,0,0};
				};
				class ValueA: ValueR
				{
					idc=104;
					x="(	48 + 	82 * (3/4) + 	(	6)) * (pixelW * pixelGrid * 	0.50)";
				};
			};
		};
		class RainParamsWork: Title
		{
			idc=100;
			attributeLoad="		(_this controlsGroupCtrl 101) ctrlSetText str (_value select 0); (_this controlsGroupCtrl 102) ctrlSetText (_value select 1); (_this controlsGroupCtrl 103) ctrlSetText str (_value select 2); (_this controlsGroupCtrl 104) ctrlSetText str (_value select 3); (_this controlsGroupCtrl 105) ctrlSetText str (_value select 4); (_this controlsGroupCtrl 106) ctrlSetText str (_value select 5); (_this controlsGroupCtrl 107) ctrlSetText str (_value select 6); (_this controlsGroupCtrl 108) ctrlSetText str (_value select 7); (_this controlsGroupCtrl 109) ctrlSetText str (_value select 8); (_this controlsGroupCtrl 110) ctrlSetText str (_value select 9); (_this controlsGroupCtrl 111) ctrlSetText str (_value select 10); (_this controlsGroupCtrl 112) ctrlSetText str (_value select 11); (_this controlsGroupCtrl 113) ctrlSetText str (_value select 12); (_this controlsGroupCtrl 114) ctrlSetText str (_value select 13); (_this controlsGroupCtrl 115) ctrlSetText str (_value select 14); (_this controlsGroupCtrl 116) ctrlSetText str (_value select 15); (_this controlsGroupCtrl 117) ctrlSetText str (_value select 16);";
			attributeSave=" [ ctrlText (_this controlsGroupCtrl 101), ctrlText (_this controlsGroupCtrl 102), ctrlText (_this controlsGroupCtrl 103), ctrlText (_this controlsGroupCtrl 104), ctrlText (_this controlsGroupCtrl 105), ctrlText (_this controlsGroupCtrl 106), ctrlText (_this controlsGroupCtrl 107), ctrlText (_this controlsGroupCtrl 108), ctrlText (_this controlsGroupCtrl 109), ctrlText (_this controlsGroupCtrl 110), ctrlText (_this controlsGroupCtrl 111), ctrlText (_this controlsGroupCtrl 112), ctrlText (_this controlsGroupCtrl 113), ctrlText (_this controlsGroupCtrl 114), ctrlText (_this controlsGroupCtrl 115), ctrlText (_this controlsGroupCtrl 116), ctrlText (_this controlsGroupCtrl 117) ]";
			class Controls: Controls
			{
				class RainParamsWork: ctrlCheckbox
				{
					idc=101;
					text="$STR_disp_opt_aspect_ratio_custom";
					style=2;
					shadow=0;
					x="((getResolution select 2) * 0.5 * pixelW) - (		180 * 0.5) * (pixelW * pixelGrid * 	0.50)";
					y="0.5 - (		(120) * 0.5 - 	18) * (pixelH * pixelGrid * 	0.50)";
					w="180 * (pixelW * pixelGrid * 	0.50)";
					h="5 * (pixelH * pixelGrid * 	0.50)";
					sizeEx="3.875 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
					colorBackground[]={0.76999998,0.18000001,0.1,1};
				};
				class RainTexture: ctrlCombo
				{
					idc=102;
					text="$STR_a3_rscattributetargettexture_title";
					x="((getResolution select 2) * 0.5 * pixelW) - (		180 * 0.5) * (pixelW * pixelGrid * 	0.50)";
					y="0.5 - (		(120) * 0.5 - 	17) * (pixelH * pixelGrid * 	0.50)";
					w="180 * (pixelW * pixelGrid * 	0.50)";
					h="5 * (pixelH * pixelGrid * 	0.50)";
					sizeEx="3.875 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
					class Items
					{
						class Item0
						{
							name="1";
							value="A3\data_f\rain_ca.01.paa";
							picture="A3\data_f\rain_ca.01.paa";
						};
						class Item1
						{
							name="1";
							value="A3\data_f\rain_ca.01.paa";
							picture="A3\data_f\rain_ca.01.paa";
						};
						class Item2
						{
							name="1";
							value="A3\data_f\rain_ca.01.paa";
							picture="A3\data_f\rain_ca.01.paa";
						};
						class Item3
						{
							name="1";
							value="A3\data_f\rain_ca.01.paa";
							picture="A3\data_f\rain_ca.01.paa";
						};
						class Item4
						{
							name="$STR_A3_CfgRoles_default0";
							value="A3\data_f\rain_ca.paa";
							picture="A3\data_f\rain_ca.paa";
						};
						class Item5
						{
							name="sneg 4 flakes";
							value="A3\data_f\snowflake4_ca.paa";
							picture="A3\data_f\snowflake4_ca.paa";
						};
						class Item6
						{
							name="sneg 8 flakes";
							value="A3\data_f\snowflake8_ca.paa";
							picture="A3\data_f\snowflake8_ca.paa";
						};
						class Item7
						{
							name="sneg 16 flakes";
							value="A3\data_f\snowflake16_ca.paa";
							picture="A3\data_f\snowflake16_ca.paa";
						};
					};
				};
				class RainTextureFlakesDropCount: ctrlEdit
				{
					idc=103;
					text="RainTextureFlakesDropCount";
					x="((getResolution select 2) * 0.5 * pixelW) - (		180 * 0.5) * (pixelW * pixelGrid * 	0.50)";
					y="0.5 - (		(120) * 0.5 - 	16) * (pixelH * pixelGrid * 	0.50)";
					w="180 * (pixelW * pixelGrid * 	0.50)";
					h="5 * (pixelH * pixelGrid * 	0.50)";
					sizeEx="3.875 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
					colorBackground[]={0.57999998,0.81999999,0.22,1};
				};
				class RainMinDensity: ctrlEdit
				{
					idc=104;
					x="((getResolution select 2) * 0.5 * pixelW) - (		180 * 0.5) * (pixelW * pixelGrid * 	0.50)";
					y="0.5 - (		(120) * 0.5 - 	15) * (pixelH * pixelGrid * 	0.50)";
					w="180 * (pixelW * pixelGrid * 	0.50)";
					h="5 * (pixelH * pixelGrid * 	0.50)";
					sizeEx="3.875 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
				};
				class RainEffectRadius: ctrlEdit
				{
					idc=105;
					x="((getResolution select 2) * 0.5 * pixelW) - (		180 * 0.5) * (pixelW * pixelGrid * 	0.50)";
					y="0.5 - (		(120) * 0.5 - 	14) * (pixelH * pixelGrid * 	0.50)";
					w="180 * (pixelW * pixelGrid * 	0.50)";
					h="5 * (pixelH * pixelGrid * 	0.50)";
					sizeEx="3.875 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
				};
				class RainWindCoef: ctrlEdit
				{
					idc=106;
					x="((getResolution select 2) * 0.5 * pixelW) - (		180 * 0.5) * (pixelW * pixelGrid * 	0.50)";
					y="0.5 - (		(120) * 0.5 - 	13) * (pixelH * pixelGrid * 	0.50)";
					w="180 * (pixelW * pixelGrid * 	0.50)";
					h="5 * (pixelH * pixelGrid * 	0.50)";
					sizeEx="3.875 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
				};
				class RainDropSpeed: ctrlEdit
				{
					idc=107;
					x="((getResolution select 2) * 0.5 * pixelW) - (		180 * 0.5) * (pixelW * pixelGrid * 	0.50)";
					y="0.5 - (		(120) * 0.5 - 	12) * (pixelH * pixelGrid * 	0.50)";
					w="180 * (pixelW * pixelGrid * 	0.50)";
					h="5 * (pixelH * pixelGrid * 	0.50)";
					sizeEx="3.875 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
				};
				class RainRndSpeed: ctrlEdit
				{
					idc=108;
					x="((getResolution select 2) * 0.5 * pixelW) - (		180 * 0.5) * (pixelW * pixelGrid * 	0.50)";
					y="0.5 - (		(120) * 0.5 - 	11) * (pixelH * pixelGrid * 	0.50)";
					w="180 * (pixelW * pixelGrid * 	0.50)";
					h="5 * (pixelH * pixelGrid * 	0.50)";
					sizeEx="3.875 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
				};
				class RainRndDir: ctrlEdit
				{
					idc=109;
					x="((getResolution select 2) * 0.5 * pixelW) - (		180 * 0.5) * (pixelW * pixelGrid * 	0.50)";
					y="0.5 - (		(120) * 0.5 - 	10) * (pixelH * pixelGrid * 	0.50)";
					w="180 * (pixelW * pixelGrid * 	0.50)";
					h="5 * (pixelH * pixelGrid * 	0.50)";
					sizeEx="3.875 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
				};
				class RainDropWidth: ctrlEdit
				{
					idc=110;
					x="((getResolution select 2) * 0.5 * pixelW) - (		180 * 0.5) * (pixelW * pixelGrid * 	0.50)";
					y="0.5 - (		(120) * 0.5 - 	9) * (pixelH * pixelGrid * 	0.50)";
					w="180 * (pixelW * pixelGrid * 	0.50)";
					h="5 * (pixelH * pixelGrid * 	0.50)";
					sizeEx="3.875 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
				};
				class RainDropHeight: ctrlEdit
				{
					idc=111;
					x="((getResolution select 2) * 0.5 * pixelW) - (		180 * 0.5) * (pixelW * pixelGrid * 	0.50)";
					y="0.5 - (		(120) * 0.5 - 	8) * (pixelH * pixelGrid * 	0.50)";
					w="180 * (pixelW * pixelGrid * 	0.50)";
					h="5 * (pixelH * pixelGrid * 	0.50)";
					sizeEx="3.875 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
				};
				class RainDropColor: EditRGBA123
				{
					idc=112;
					x="((getResolution select 2) * 0.5 * pixelW) - (		180 * 0.5) * (pixelW * pixelGrid * 	0.50)";
					y="0.5 - (		(120) * 0.5 - 	7) * (pixelH * pixelGrid * 	0.50)";
					w="180 * (pixelW * pixelGrid * 	0.50)";
					h="5 * (pixelH * pixelGrid * 	0.50)";
					sizeEx="3.875 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
				};
				class rest1: ctrlEdit
				{
					idc=113;
					x="((getResolution select 2) * 0.5 * pixelW) - (		180 * 0.5) * (pixelW * pixelGrid * 	0.50)";
					y="0.5 - (		(120) * 0.5 - 	56) * (pixelH * pixelGrid * 	0.50)";
					w="180 * (pixelW * pixelGrid * 	0.50)";
					h="5 * (pixelH * pixelGrid * 	0.50)";
					sizeEx="3.875 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
				};
				class rest2: ctrlEdit
				{
					idc=114;
					x="((getResolution select 2) * 0.5 * pixelW) - (		180 * 0.5) * (pixelW * pixelGrid * 	0.50)";
					y="0.5 - (		(120) * 0.5 - 	5) * (pixelH * pixelGrid * 	0.50)";
					w="180 * (pixelW * pixelGrid * 	0.50)";
					h="5 * (pixelH * pixelGrid * 	0.50)";
					sizeEx="3.875 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
				};
				class rest3: ctrlEdit
				{
					idc=115;
					x="((getResolution select 2) * 0.5 * pixelW) - (		180 * 0.5) * (pixelW * pixelGrid * 	0.50)";
					y="0.5 - (		(120) * 0.5 - 	4) * (pixelH * pixelGrid * 	0.50)";
					w="180 * (pixelW * pixelGrid * 	0.50)";
					h="5 * (pixelH * pixelGrid * 	0.50)";
					sizeEx="3.875 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
				};
				class rest4: ctrlCheckbox
				{
					idc=116;
					x="((getResolution select 2) * 0.5 * pixelW) - (		180 * 0.5) * (pixelW * pixelGrid * 	0.50)";
					y="0.5 - (		(120) * 0.5 - 	3) * (pixelH * pixelGrid * 	0.50)";
					w="180 * (pixelW * pixelGrid * 	0.50)";
					h="5 * (pixelH * pixelGrid * 	0.50)";
					sizeEx="3.875 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
				};
				class rest5: ctrlCheckbox
				{
					idc=117;
					x="((getResolution select 2) * 0.5 * pixelW) - (		180 * 0.5) * (pixelW * pixelGrid * 	0.50)";
					y="0.5 - (		(120) * 0.5 - 	2) * (pixelH * pixelGrid * 	0.50)";
					w="180 * (pixelW * pixelGrid * 	0.50)";
					h="5 * (pixelH * pixelGrid * 	0.50)";
					sizeEx="3.875 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
				};
				class reset: ctrlButtonPicture
				{
					idc=118;
					x="((getResolution select 2) * 0.5 * pixelW) - (		180 * 0.5) * (pixelW * pixelGrid * 	0.50)";
					y="0.5 - (		(120) * 0.5 - 	1) * (pixelH * pixelGrid * 	0.50)";
					w="180 * (pixelW * pixelGrid * 	0.50)";
					h="5 * (pixelH * pixelGrid * 	0.50)";
					sizeEx="3.875 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
					colorBackground[]={0.1,0.1,0.1,1};
					text="\a3\3DEN\Data\Displays\Display3DEN\search_end_ca.paa";
					onMouseButtonUp="(_this # 0) controlsGroupCtrl 101) ctrlSetText 'false'; ((_this # 0) controlsGroupCtrl 102) ctrlSetText (getNumber 	(configFile >> 'CfgWorlds' >> worldName >> 'RainParticles' >> 'texDropCount')); ((_this # 0) controlsGroupCtrl 103) ctrlSetText (getNumber 	(configFile >> 'CfgWorlds' >> worldName >> 'RainParticles' >> 'minRainDensity')); ((_this # 0) controlsGroupCtrl 104) ctrlSetText (getNumber 	(configFile >> 'CfgWorlds' >> worldName >> 'RainParticles' >> 'effectRadius')); ((_this # 0) controlsGroupCtrl 105) ctrlSetText (getNumber 	(configFile >> 'CfgWorlds' >> worldName >> 'RainParticles' >> 'windCoef'))	; ((_this # 0) controlsGroupCtrl 106) ctrlSetText (getNumber 	(configFile >> 'CfgWorlds' >> worldName >> 'RainParticles' >> 'dropSpeed')); ((_this # 0) controlsGroupCtrl 107) ctrlSetText (getNumber 	(configFile >> 'CfgWorlds' >> worldName >> 'RainParticles' >> 'rndSpeed')); ((_this # 0) controlsGroupCtrl 108) ctrlSetText (getNumber 	(configFile >> 'CfgWorlds' >> worldName >> 'RainParticles' >> 'rndDir')); ((_this # 0) controlsGroupCtrl 109) ctrlSetText (getNumber 	(configFile >> 'CfgWorlds' >> worldName >> 'RainParticles' >> 'dropWidth'))	; ((_this # 0) controlsGroupCtrl 110) ctrlSetText (getNumber 	(configFile >> 'CfgWorlds' >> worldName >> 'RainParticles' >> 'dropHeight')); ((_this # 0) controlsGroupCtrl 111) ctrlSetText (getArray 	(configFile >> 'CfgWorlds' >> worldName >> 'RainParticles' >> 'dropColor')); ((_this # 0) controlsGroupCtrl 112) ctrlSetText (getNumber 	(configFile >> 'CfgWorlds' >> worldName >> 'RainParticles' >> 'lumSunFront')); ((_this # 0) controlsGroupCtrl 113) ctrlSetText (getNumber 	(configFile >> 'CfgWorlds' >> worldName >> 'RainParticles' >> 'lumSunBack')); ((_this # 0) controlsGroupCtrl 114) ctrlSetText (getNumber 	(configFile >> 'CfgWorlds' >> worldName >> 'RainParticles' >> 'refractCoef')); ((_this # 0) controlsGroupCtrl 115) ctrlSetText (getNumber 	(configFile >> 'CfgWorlds' >> worldName >> 'RainParticles' >> 'refractSaturation')); ((_this # 0) controlsGroupCtrl 116) ctrlSetText 'false'; ((_this # 0) controlsGroupCtrl 117) ctrlSetText 'false';";
				};
			};
		};
		class SliderTurretRotation_360: SliderPortableLightPitch
		{
			class Controls: Controls
			{
				class Title: Title
				{
				};
				class Value: Value
				{
					sliderRange[]={-180,180};
					sliderPosition=0;
					lineSize=0.1;
					sliderStep=0.1;
				};
				class Edit: Edit
				{
				};
			};
		};
		class SliderGunElevation_15: SliderPortableLightPitch
		{
			class Controls: Controls
			{
				class Title: Title
				{
				};
				class Value: Value
				{
					sliderRange[]={-5,15};
					sliderPosition=0;
					lineSize=0.1;
					sliderStep=0.1;
				};
				class Edit: Edit
				{
				};
			};
		};
		class SliderGunElevation_25: SliderPortableLightPitch
		{
			class Controls: Controls
			{
				class Title: Title
				{
				};
				class Value: Value
				{
					sliderRange[]={-15,25};
					sliderPosition=0;
					lineSize=0.1;
					sliderStep=0.1;
				};
				class Edit: Edit
				{
				};
			};
		};
		class SliderMSComputerScreenL: Slider
		{
			attributeLoad="_ctrlGroup = _this; [_ctrlGroup controlsgroupctrl 100, _ctrlGroup controlsgroupctrl 101, nil, _value] call bis_fnc_initSliderValue; _valuePercent = round (((_value - 0.3) / 0.3) * 100); (_ctrlGroup controlsgroupctrl 101) ctrlSetText (str _valuePercent + '%'); ";
			class Controls: Controls
			{
				class Title: Title
				{
				};
				class Value: Value
				{
					sliderRange[]={0.3,0.6};
					sliderPosition=0.3;
					lineSize=0.01;
					sliderStep=0.001;
					onSliderPosChanged="	_ctrlGroup = ctrlParentControlsGroup (_this select 0); _pos = _this select 1; _valuePercent = round (((_pos - 0.3) / 0.3) * 100); (_ctrlGroup controlsgroupctrl 101) ctrlSetText (str _valuePercent + '%'); ";
				};
				class Edit: Edit
				{
				};
			};
		};
		class SliderMSComputerScreenR: Slider
		{
			attributeLoad=" _ctrlGroup = _this; [_ctrlGroup controlsgroupctrl 100, _ctrlGroup controlsgroupctrl 101, nil, _value] call bis_fnc_initSliderValue; _valuePercent = round ((_value / 0.3) * 100); (_ctrlGroup controlsgroupctrl 101) ctrlSetText (str _valuePercent + '%'); ";
			class Controls: Controls
			{
				class Title: Title
				{
				};
				class Value: Value
				{
					sliderRange[]={0,0.3};
					sliderPosition=0;
					lineSize=0.01;
					sliderStep=0.001;
					onSliderPosChanged="		_ctrlGroup = ctrlParentControlsGroup (_this select 0); _pos = _this select 1; _valuePercent = round ((_pos / 0.3) * 100); (_ctrlGroup controlsgroupctrl 101) ctrlSetText (str _valuePercent + '%'); ";
				};
				class Edit: Edit
				{
				};
			};
		};
		class EditRGBA: EditXYZ
		{
			idc=100;
			attributeLoad="		(_this controlsGroupCtrl 101) ctrlSetText str (_value select 0);		(_this controlsGroupCtrl 102) ctrlSetText str (_value select 1);		(_this controlsGroupCtrl 103) ctrlSetText str (_value select 2);		(_this controlsGroupCtrl 104) ctrlSetText str (_value select 3);";
			attributeSave="		[			parsenumber ctrlText (_this controlsGroupCtrl 101),			parsenumber ctrlText (_this controlsGroupCtrl 102),			parsenumber ctrlText (_this controlsGroupCtrl 103),			parsenumber ctrlText (_this controlsGroupCtrl 104)		]";
			class Controls: Controls
			{
				class Title: Title
				{
				};
				class TitleX: ctrlStatic
				{
					text="R";
					style=2;
					shadow=0;
					x="48 * (pixelW * pixelGrid * 	0.50)";
					w="(	5) * (pixelW * pixelGrid * 	0.50)";
					h="5 * (pixelH * pixelGrid * 	0.50)";
					colorBackground[]={0.76999998,0.18000001,0.1,1};
				};
				class ValueX: ctrlEdit
				{
					idc=101;
					text="0";
					x="(	48 + 	(	5)) * (pixelW * pixelGrid * 	0.50)";
					w="(	82 / 4 - 	5) * (pixelW * pixelGrid * 	0.50)";
					h="5 * (pixelH * pixelGrid * 	0.50)";
					font="EtelkaMonospacePro";
					sizeEx="3.875 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
				};
				class TitleY: TitleX
				{
					text="G";
					x="(	48 + 	82 * (1/4)) * (pixelW * pixelGrid * 	0.50)";
					colorBackground[]={0.57999998,0.81999999,0.22,1};
				};
				class ValueY: ValueX
				{
					idc=102;
					x="(	48 + 	82 * (1/4) + 	(	5)) * (pixelW * pixelGrid * 	0.50)";
				};
				class TitleZ: TitleX
				{
					text="B";
					x="(	48 + 	82 * (2/4)) * (pixelW * pixelGrid * 	0.50)";
					colorBackground[]={0.25999999,0.51999998,0.92000002,1};
				};
				class ValueZ: ValueX
				{
					idc=103;
					x="(	48 + 	82 * (2/4) + 	(	5)) * (pixelW * pixelGrid * 	0.50)";
				};
				class TitleA: TitleX
				{
					text="A";
					x="(	48 + 	82 * (3/4)) * (pixelW * pixelGrid * 	0.50)";
					colorBackground[]={0,0,0,0};
				};
				class ValueA: ValueX
				{
					idc=104;
					x="(	48 + 	82 * (3/4) + 	(	5)) * (pixelW * pixelGrid * 	0.50)";
				};
			};
		};
		class SliderSignDirection: Slider
		{
			class Controls: Controls
			{
				class Title: Title
				{
				};
				class Value: Value
				{
					sliderRange[]={0,1};
					sliderPosition=1;
					lineSize=0.01;
					sliderStep=0.01;
				};
				class Edit: Edit
				{
				};
			};
		};
		class Slider_0_3: Slider
		{
			class Controls: Controls
			{
				class Title: Title
				{
				};
				class Value: Value
				{
					sliderRange[]={0,3};
					sliderPosition=0;
					lineSize=0.01;
					sliderStep=0.01;
				};
				class Edit: Edit
				{
				};
			};
		};
		class Slider_2_4: Slider_0_3
		{
			class Controls: Controls
			{
				class Title: Title
				{
				};
				class Value: Value
				{
					sliderRange[]={2,4};
					sliderPosition=2;
				};
				class Edit: Edit
				{
				};
			};
		};
		class Slider_4_20: Slider_0_3
		{
			class Controls: Controls
			{
				class Title: Title
				{
				};
				class Value: Value
				{
					sliderRange[]={4,20};
					sliderPosition=4;
				};
				class Edit: Edit
				{
				};
			};
		};
		class Slider_10_30: Slider_0_3
		{
			class Controls: Controls
			{
				class Title: Title
				{
				};
				class Value: Value
				{
					sliderRange[]={10,30};
					sliderPosition=10;
				};
				class Edit: Edit
				{
				};
			};
		};
		class Slider_25_32: Slider_0_3
		{
			class Controls: Controls
			{
				class Title: Title
				{
				};
				class Value: Value
				{
					sliderRange[]={25,32};
					sliderPosition=25;
				};
				class Edit: Edit
				{
				};
			};
		};
		class Slider_32_40: Slider_0_3
		{
			class Controls: Controls
			{
				class Title: Title
				{
				};
				class Value: Value
				{
					sliderRange[]={32,40};
					sliderPosition=32;
				};
				class Edit: Edit
				{
				};
			};
		};
		class Slider_20_40: Slider_0_3
		{
			class Controls: Controls
			{
				class Title: Title
				{
				};
				class Value: Value
				{
					sliderRange[]={20,40};
					sliderPosition=20;
				};
				class Edit: Edit
				{
				};
			};
		};
		class Slider_6__283185: Slider
		{
			class Controls: Controls
			{
				class Title: Title
				{
				};
				class Value: Value
				{
					sliderRange[]={0,6.283185};
					sliderPosition=0;
					onSliderPosChanged="(_this # 0) ctrlSetTooltip str (_this # 1); _ctrlParent = ctrlParentControlsGroup (_this # 0); _ctrlEdit = _ctrlParent controlsGroupCtrl 101; _ctrlEdit ctrlSetText (str (round (((_this # 1) / 6.283185) * 100)) + '%');";
				};
				class Edit: Edit
				{
				};
			};
		};
		class RainParams: ctrlControlsGroup
		{
			attributeLoad = "[_this,_value] call expEden_fnc_3DENRainParamsAttributeLoad;";
			attributeSave = "_this call expEden_fnc_3DENRainParamsAttributeSave;";
			h = "(19 * 5 + 2) * (pixelH * pixelGrid * 0.50)";
			class Controls
			{
				class rainDropTextureTitle: ctrlStatic
				{
					text = "$STR_Globe_Cfg3DEN_Attributes_rainDropTextureTitle";
					x = "0 * (pixelW * pixelGrid * 0.50)";
					y = "0 * (pixelH * pixelGrid * 0.50)";
					w = "48 * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
				};
				class rainDropTexture: ctrlCombo
				{
					idc = 100;
					x = "48 * (pixelW * pixelGrid * 0.50)";
					y = "0 * (pixelH * pixelGrid * 0.50)";
					w = "82 * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
					class Items
					{
						class Default
						{
							text = "$STR_A3_OPTIONS_DEFAULT";
							data = "a3\data_f\rainnormal_ca.paa";
							default = 1;
						};
						class snowflake4_ca
						{
							text = "$STR_Globe_Cfg3DEN_Attributes_rainDropTexture_Snowflake4";
							data = "\a3\data_f\snowflake4_ca.paa";
						};
						class snowflake8_ca
						{
							text = "$STR_Globe_Cfg3DEN_Attributes_rainDropTexture_Snowflake8";
							data = "\a3\data_f\snowflake8_ca.paa";
						};
						class snowflake16_ca
						{
							text = "$STR_Globe_Cfg3DEN_Attributes_rainDropTexture_Snowflake16";
							data = "\a3\data_f\snowflake16_ca.paa";
						};
					};
				};
				class rainDropTextureCustomTitle: ctrlStatic
				{
					text ="$STR_Globe_Cfg3DEN_Attributes_rainDropTextureCustomTitle";
					x = "0 * (pixelW * pixelGrid * 0.50)";
					y = "(5 + 1) * (pixelH * pixelGrid * 0.50)";
					w = "48 * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
					tooltip="$STR_Globe_Cfg3DEN_Attributes_rainDropTextureCustomTitle_tooltip";
				};
				class rainDropTextureCustom: ctrlEdit
				{
					idc = 117;
					x = "48 * (pixelW * pixelGrid * 0.50)";
					y = "(5 + 1) * (pixelH * pixelGrid * 0.50)";
					w = "82 * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
					tooltip="$STR_Globe_Cfg3DEN_Attributes_rainDropTextureCustomTitle_tooltip";
				};
				class texDropCountTitle: ctrlStatic
				{
					text ="$STR_Globe_Cfg3DEN_Attributes_texDropCountTitle";
					x = "0 * (pixelW * pixelGrid * 0.50)";
					y = "(2 * 5 + 2) * (pixelH * pixelGrid * 0.50)";
					w = "48 * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
					tooltip="$STR_Globe_Cfg3DEN_Attributes_texDropCountTitle_tooltip";
				};
				class texDropCount: ctrlEdit
				{
					idc = 101;
					x = "48 * (pixelW * pixelGrid * 0.50)";
					y = "(2 * 5 + 2) * (pixelH * pixelGrid * 0.50)";
					w = "82 * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
					tooltip="$STR_Globe_Cfg3DEN_Attributes_texDropCountTitle_tooltip";
				};
				class minRainDensityTitle: ctrlStatic
				{
					text ="$STR_Globe_Cfg3DEN_Attributes_minRainDensityTitle";
					x = "0 * (pixelW * pixelGrid * 0.50)";
					y = "(3 * 5 + 3) * (pixelH * pixelGrid * 0.50)";
					w = "48 * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
					tooltip="$STR_Globe_Cfg3DEN_Attributes_minRainDensityTitle_tooltip";
				};
				class minRainDensity: ctrlEdit
				{
					idc = 102;
					x = "48 * (pixelW * pixelGrid * 0.50)";
					y = "(3 * 5 + 3) * (pixelH * pixelGrid * 0.50)";
					w = "82 * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
					tooltip="$STR_Globe_Cfg3DEN_Attributes_minRainDensityTitle_tooltip";
				};
				class effectRadiusTitle: ctrlStatic
				{
					text ="$STR_Globe_Cfg3DEN_Attributes_effectRadiusTitle";
					x = "0 * (pixelW * pixelGrid * 0.50)";
					y = "(4 * 5 + 4) * (pixelH * pixelGrid * 0.50)";
					w = "48 * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
				};
				class effectRadius: ctrlEdit
				{
					idc = 103;
					x = "48 * (pixelW * pixelGrid * 0.50)";
					y = "(4 * 5 + 4) * (pixelH * pixelGrid * 0.50)";
					w = "82 * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
				};
				class windCoefTitle: ctrlStatic
				{
					text ="$STR_Globe_Cfg3DEN_Attributes_windCoefTitle";
					x = "0 * (pixelW * pixelGrid * 0.50)";
					y = "(5 * 5 + 5) * (pixelH * pixelGrid * 0.50)";
					w = "48 * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
					tooltip="$STR_Globe_Cfg3DEN_Attributes_windCoefTitle_tooltip";
				};
				class windCoef: ctrlEdit
				{
					idc = 104;
					x = "48 * (pixelW * pixelGrid * 0.50)";
					y = "(5 * 5 + 5) * (pixelH * pixelGrid * 0.50)";
					w = "82 * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
					tooltip="$STR_Globe_Cfg3DEN_Attributes_windCoefTitle_tooltip";
				};
				class dropSpeedTitle: ctrlStatic
				{
					text ="$STR_Globe_Cfg3DEN_Attributes_dropSpeedTitle";
					x = "0 * (pixelW * pixelGrid * 0.50)";
					y = "(6 * 5 + 6) * (pixelH * pixelGrid * 0.50)";
					w = "48 * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
				};
				class dropSpeed: ctrlEdit
				{
					idc = 105;
					x = "48 * (pixelW * pixelGrid * 0.50)";
					y = "(6 * 5 + 6) * (pixelH * pixelGrid * 0.50)";
					w = "82 * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
				};
				class rndSpeedTitle: ctrlStatic
				{
					text ="$STR_Globe_Cfg3DEN_Attributes_rndSpeedTitle";
					x = "0 * (pixelW * pixelGrid * 0.50)";
					y = "(7 * 5 + 7) * (pixelH * pixelGrid * 0.50)";
					w = "48 * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
					tooltip="$STR_Globe_Cfg3DEN_Attributes_rndSpeedTitle_tooltip";
				};
				class rndSpeed: ctrlEdit
				{
					idc = 106;
					x = "48 * (pixelW * pixelGrid * 0.50)";
					y = "(7 * 5 + 7) * (pixelH * pixelGrid * 0.50)";
					w = "82 * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
					tooltip="$STR_Globe_Cfg3DEN_Attributes_rndSpeedTitle_tooltip";
				};
				class rndDirTitle: ctrlStatic
				{
					text ="$STR_Globe_Cfg3DEN_Attributes_rndDirTitle";
					x = "0 * (pixelW * pixelGrid * 0.50)";
					y = "(8 * 5 + 8) * (pixelH * pixelGrid * 0.50)";
					w = "48 * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
					tooltip="$STR_Globe_Cfg3DEN_Attributes_rndDirTitle_tooltip";
				};
				class rndDir: ctrlEdit
				{
					idc = 107;
					x = "48 * (pixelW * pixelGrid * 0.50)";
					y = "(8 * 5 + 8) * (pixelH * pixelGrid * 0.50)";
					w = "82 * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
					tooltip="$STR_Globe_Cfg3DEN_Attributes_rndDirTitle_tooltip";
				};
				class dropWidthTitle: ctrlStatic
				{
					text ="$STR_Globe_Cfg3DEN_Attributes_dropWidthTitle";
					x = "0 * (pixelW * pixelGrid * 0.50)";
					y = "(9 * 5 + 9) * (pixelH * pixelGrid * 0.50)";
					w = "48 * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
				};
				class dropWidth: ctrlEdit
				{
					idc = 108;
					x = "48 * (pixelW * pixelGrid * 0.50)";
					y = "(9 * 5 + 9) * (pixelH * pixelGrid * 0.50)";
					w = "82 * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
				};
				class dropHeightTitle: ctrlStatic
				{
					text ="$STR_Globe_Cfg3DEN_Attributes_dropHeightTitle";
					x = "0 * (pixelW * pixelGrid * 0.50)";
					y = "(10 * 5 + 10) * (pixelH * pixelGrid * 0.50)";
					w = "48 * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
				};
				class dropHeight: ctrlEdit
				{
					idc = 109;
					x = "48 * (pixelW * pixelGrid * 0.50)";
					y = "(10 * 5 + 10) * (pixelH * pixelGrid * 0.50)";
					w = "82 * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
				};
				class dropColorTitle: ctrlStatic
				{
					text ="$STR_Globe_Cfg3DEN_Attributes_dropColorTitle";
					x = "0 * (pixelW * pixelGrid * 0.50)";
					y = "(11 * 5 + 11) * (pixelH * pixelGrid * 0.50)";
					w = "48 * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
				};
				class dropColor: ctrlEdit
				{
					idc = 110;
					x = "48 * (pixelW * pixelGrid * 0.50)";
					y = "(11 * 5 + 11) * (pixelH * pixelGrid * 0.50)";
					w = "82 * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
				};
				class lumSunFrontTitle: ctrlStatic
				{
					text ="$STR_Globe_Cfg3DEN_Attributes_lumSunFrontTitle";
					x = "0 * (pixelW * pixelGrid * 0.50)";
					y = "(12 * 5 + 12) * (pixelH * pixelGrid * 0.50)";
					w = "48 * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
				};
				class lumSunFront: ctrlEdit
				{
					idc = 111;
					x = "48 * (pixelW * pixelGrid * 0.50)";
					y = "(12 * 5 + 12) * (pixelH * pixelGrid * 0.50)";
					w = "82 * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
				};
				class lumSunBackTitle: ctrlStatic
				{
					text ="$STR_Globe_Cfg3DEN_Attributes_lumSunBackTitle";
					x = "0 * (pixelW * pixelGrid * 0.50)";
					y = "(13 * 5 + 13) * (pixelH * pixelGrid * 0.50)";
					w = "48 * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
				};
				class lumSunBack: ctrlEdit
				{
					idc = 112;
					x = "48 * (pixelW * pixelGrid * 0.50)";
					y = "(13 * 5 + 13) * (pixelH * pixelGrid * 0.50)";
					w = "82 * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
				};
				class refractCoefTitle: ctrlStatic
				{
					text ="$STR_Globe_Cfg3DEN_Attributes_refractCoefTitle";
					x = "0 * (pixelW * pixelGrid * 0.50)";
					y = "(14 * 5 + 14) * (pixelH * pixelGrid * 0.50)";
					w = "48 * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
					tooltip="$STR_Globe_Cfg3DEN_Attributes_refractCoefTitle_tooltip";
				};
				class refractCoef: ctrlEdit
				{
					idc = 113;
					x = "48 * (pixelW * pixelGrid * 0.50)";
					y = "(14 * 5 + 14) * (pixelH * pixelGrid * 0.50)";
					w = "82 * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
					tooltip="$STR_Globe_Cfg3DEN_Attributes_refractCoefTitle_tooltip";
				};
				class refractSaturationTitle: ctrlStatic
				{
					text ="$STR_Globe_Cfg3DEN_Attributes_refractSaturationTitle";
					x = "0 * (pixelW * pixelGrid * 0.50)";
					y = "(15 * 5 + 15) * (pixelH * pixelGrid * 0.50)";
					w = "48 * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
					tooltip="$STR_Globe_Cfg3DEN_Attributes_refractSaturationTitle_tooltip";
				};
				class refractSaturation: ctrlEdit
				{
					idc = 114;
					x = "48 * (pixelW * pixelGrid * 0.50)";
					y = "(15 * 5 + 15) * (pixelH * pixelGrid * 0.50)";
					w = "82 * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
					tooltip="$STR_Globe_Cfg3DEN_Attributes_refractSaturationTitle_tooltip";
				};
				class snowTitle: ctrlStatic
				{
					text ="$STR_Globe_Cfg3DEN_Attributes_snowTitle";
					x = "0 * (pixelW * pixelGrid * 0.50)";
					y = "(16 * 5 + 16) * (pixelH * pixelGrid * 0.50)";
					w = "48 * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
					tooltip="$STR_Globe_Cfg3DEN_Attributes_snowTitle_tooltip";
				};
				class snow: ctrlCheckbox
				{
					idc = 115;
					x = "48 * (pixelW * pixelGrid * 0.50)";
					y = "(16 * 5 + 16) * (pixelH * pixelGrid * 0.50)";
					w = "5 * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
				};
				class dropColorStrongTitle: ctrlStatic
				{
					text ="$STR_Globe_Cfg3DEN_Attributes_dropColorStrongTitle";
					x="0 * (pixelW * pixelGrid * 0.50)";
					y="(17 * 5 + 17) * (pixelH * pixelGrid * 0.50)";
					w="48 * (pixelW * pixelGrid * 0.50)";
					h="5 * (pixelH * pixelGrid * 0.50)";
					tooltip="$STR_Globe_Cfg3DEN_Attributes_dropColorStrongTitle_tooltip";
				};
				class dropColorStrong: ctrlCheckbox
				{
					idc=116;
					x="48 * (pixelW * pixelGrid * 0.50)";
					y="(17 * 5 + 17) * (pixelH * pixelGrid * 0.50)";
					w="5 * (pixelW * pixelGrid * 0.50)";
					h="5 * (pixelH * pixelGrid * 0.50)";
				};
				class btnReset: ctrlButton
				{
					idc=118;
					text="$STR_Globe_Cfg3DEN_Attributes_RainParams_btnReset0";
					x="48 * (pixelW * pixelGrid * 0.50)";
					y="(18 * 5 + 18) * (pixelH * pixelGrid * 0.50)";
					w="82 * (pixelW * pixelGrid * 0.50)";
					h="5 * (pixelH * pixelGrid * 0.50)";
					onButtonClick="[ctrlParentControlsGroup (_this # 0)] call expEden_fnc_3DENRainParamsButtonReset;";
				};
				class btnSnowPreset: ctrlButton
				{
					idc=119;
					text="$STR_Globe_Cfg3DEN_Attributes_RainParams_btnSnowPreset0";
					x="48 * (pixelW * pixelGrid * 0.50)";
					y="(19 * 5 + 19) * (pixelH * pixelGrid * 0.50)";
					w="82 * (pixelW * pixelGrid * 0.50)";
					h="5 * (pixelH * pixelGrid * 0.50)";
					onButtonClick="[ctrlParentControlsGroup (_this # 0)] call expEden_fnc_3DENRainParamsButtonSnow;";
					tooltip="$STR_Globe_Cfg3DEN_Attributes_RainParams_btnSnowPreset1";
				};
				class btnSnowDarkPreset: ctrlButton
				{
					idc=120;
					text="$STR_Globe_Cfg3DEN_Attributes_RainParams_btnSnowDarkPreset0";
					x="48 * (pixelW * pixelGrid * 0.50)";
					y="(20 * 5 + 20) * (pixelH * pixelGrid * 0.50)";
					w="82 * (pixelW * pixelGrid * 0.50)";
					h="5 * (pixelH * pixelGrid * 0.50)";
					onButtonClick="[ctrlParentControlsGroup (_this # 0)] call expEden_fnc_3DENRainParamsButtonSIGNAL;";
					tooltip="$STR_Globe_Cfg3DEN_Attributes_RainParams_btnSnowDarkPreset1";
				};
			};
		};
		class SliderTimeSyncCloudLayer: SliderTime
		{
			class Controls: Controls
			{
				class Title: Title
				{
				};
				class Value: Value
				{
					sliderRange[]={90,3600};
					sliderPosition=600;
					lineSize=1800;
					sliderStep=1;
				};
				class Frame: Frame
				{
				};
				class Separator: Separator
				{
				};
				class Hour: Hour
				{
				};
				class Minute: Minute
				{
				};
				class Second: Second
				{
				};
			};
		};
		class CheckboxStateSyncCloudLayer: Checkbox
		{
            class Controls: Controls
            {
                class Title: Title
				{
				};
                class Value: Value
                {
                    onCheckedChanged=" _ctrlCheckbox = _this # 0; _state = cbChecked _ctrlCheckbox; _fade = [0.75, 0] select _state; _ctrlGroup = ctrlParentControlsGroup _ctrlCheckbox; _parentGroup = ctrlParentControlsGroup _ctrlGroup; _allControls = allControls (ctrlParent _ctrlCheckbox); { if (ctrlParentControlsGroup _x == _parentGroup) then { _ctrlClassName = ctrlClassName _x; if (_ctrlClassName == 'SliderTimeSyncCloudLayer') then { _x ctrlEnable _state; _x ctrlSetFade _fade; _x ctrlCommit 0; }; }; } forEach _allControls; ";
                    onLoad="_ctrlCheckbox = _this select 0; _ctrlCheckbox spawn { disableSerialization; _state = cbChecked _this; _fade = [0.75, 0] select _state; _display = ctrlParent _this; { if (ctrlClassName _x == 'SliderTimeSyncCloudLayer') then { _x ctrlEnable _state; _x ctrlSetFade _fade; _x ctrlCommit 0; }; } forEach allControls _display; };";
                };
            };
        };
		class ShowLawOfWar_G_control: ctrlControlsGroup
		{
			attributeLoad = "[_this,_value] call expEden_fnc_3DENShowLawOfWarAttributeLoad;";
			attributeSave = "_this call expEden_fnc_3DENShowLawOfWarAttributeSave;";
			h = "26 * (pixelH * pixelGrid * 0.50)";
			class Controls
			{
				class LoW_HeaderLabel: ctrlStatic
				{
					style=2;
					text="$STR_Globe_Cfg3DEN_Attributes_ShowLawOfWar_G_control0";
					tooltip="$STR_Globe_Cfg3DEN_Attributes_ShowLawOfWar_G_control1";
					x="0 * (pixelW * pixelGrid * 0.50)";
					y = "0 * (pixelH * pixelGrid * 0.50)";
					w = "130 * (pixelW * pixelGrid * 0.50)";
					h = "12 * (pixelH * pixelGrid * 0.50)";
					colorText[] = {1,1,1,0.6};
					sizeEx = "5.0 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
				};
				class LoW1_Title: ctrlStatic
				{
					text="$STR_Globe_Cfg3DEN_Attributes_ShowLawOfWar_G_control2";
					tooltip="$STR_Globe_Cfg3DEN_Attributes_ShowLawOfWar_G_control3";
					x = "0 * (pixelW * pixelGrid * 0.50)";
					y = "10 * (pixelH * pixelGrid * 0.50)";
					w = "48 * (pixelW * pixelGrid * 0.50)";
					h = "12 * (pixelH * pixelGrid * 0.50)";
					style=1;
				};
				class LoW1_Background: ctrlStatic
				{
					tooltip="$STR_Globe_Cfg3DEN_Attributes_ShowLawOfWar_G_control1";
					x = "48 * (pixelW * pixelGrid * 0.50)";
					y = "10 * (pixelH * pixelGrid * 0.50)";
					w = "82 * (pixelW * pixelGrid * 0.50)";
					h = "12 * (pixelH * pixelGrid * 0.50)";
					colorBackground[] = {0, 0, 0, 0.5};
				};
				class LoW1_WestIcon: ctrlStaticPictureKeepAspect
				{
					tooltip="$STR_Globe_Cfg3DEN_Attributes_ShowLawOfWar_G_control1";
					x = "(48 + 2) * (pixelW * pixelGrid * 0.50)";
					y = "10 * (pixelH * pixelGrid * 0.50)";
					w = "12 * (pixelW * pixelGrid * 0.50)";
					h = "12 * (pixelH * pixelGrid * 0.50)";
					text = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\side_west_ca.paa";
				};
				class LoW1_EastIcon: LoW1_WestIcon
				{
					x = "(70 + 2) * (pixelW * pixelGrid * 0.50)";
					text = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\side_east_ca.paa";
				};
				class LoW1_GuerillaIcon: LoW1_WestIcon
				{
					x = "(90 + 2) * (pixelW * pixelGrid * 0.50)";
					text = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\side_guer_ca.paa";
				};
				class LoW1_CivilianIcon: LoW1_WestIcon
				{
					x = "(110 + 2) * (pixelW * pixelGrid * 0.50)";
					text = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\side_civ_ca.paa";
				};
				class LoW1_West: ctrlCheckbox
				{
					tooltip="$STR_Globe_Cfg3DEN_Attributes_ShowLawOfWar_G_control1";
					idc = 101;
					x = "(48 + 4) * (pixelW * pixelGrid * 0.50)";
					y = "(10 + 2) * (pixelH * pixelGrid * 0.50)";
					w = "8 * (pixelW * pixelGrid * 0.50)";
					h = "8 * (pixelH * pixelGrid * 0.50)";
					textureChecked = "\a3\3den\data\attributes\taskstates\succeeded_ca.paa";
					textureUnchecked = "\a3\3den\data\attributes\taskstates\failed_ca.paa";
					textureFocusedChecked = "\a3\3den\data\attributes\taskstates\succeeded_ca.paa";
					textureFocusedUnchecked = "\a3\3den\data\attributes\taskstates\failed_ca.paa";
					textureHoverChecked = "\a3\3den\data\attributes\taskstates\succeeded_ca.paa";
					textureHoverUnchecked = "\a3\3den\data\attributes\taskstates\failed_ca.paa";
					texturePressedChecked = "\a3\3den\data\attributes\taskstates\succeeded_ca.paa";
					texturePressedUnchecked = "\a3\3den\data\attributes\taskstates\failed_ca.paa";
					textureDisabledChecked = "\a3\3den\data\attributes\taskstates\succeeded_ca.paa";
					textureDisabledUnchecked = "\a3\3den\data\attributes\taskstates\failed_ca.paa";
				};
				class LoW1_East: LoW1_West
				{
					idc = 102;
					x = "(70 + 4) * (pixelW * pixelGrid * 0.50)";
					y = "(10 + 2) * (pixelH * pixelGrid * 0.50)";
				};
				class LoW1_Guerilla: LoW1_West
				{
					idc = 103;
					x = "(90 + 4) * (pixelW * pixelGrid * 0.50)";
					y = "(10 + 2) * (pixelH * pixelGrid * 0.50)";
				};
				class LoW1_Civilian: LoW1_West
				{
					idc = 104;
					x = "(110 + 4) * (pixelW * pixelGrid * 0.50)";
					y = "(10 + 2) * (pixelH * pixelGrid * 0.50)";
				};
			};
		};
		class DoorKnocking: Title
		{
			attributeLoad = "['attributeLoad', (get3DENSelected 'object' select 0), _this, _value] call expEden_fnc_3DENAttributeDoorKnocking";
			attributeSave = "['attributeSave', (get3DENSelected 'object' select 0), _this] call expEden_fnc_3DENAttributeDoorKnocking";
			h="3 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
			class Controls: Controls
			{
				class Title: Title
				{
					idc=99;
					h="3 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
					colorBackground[]={0,0,0,0};
				};
				class Value: ctrlControlsGroupNoScrollbars
				{
					idc=100;
					x="48 * (pixelW * pixelGrid * 	0.50)";
					w="80 * (pixelW * pixelGrid * 	0.50)";
					h="3 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
					class Controls
					{
						class CheckboxBackground1: ctrlStatic
						{
							idc="125+1";
							text="";
							x="(1-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y=0;
							w="2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h="2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							shadow=0;
							colorText[]={1,1,1,0.5};
							colorBackground[]={0,0,0,0.25};
							colorShadow[]={0,0,0,0};
							type=0;
							style=2;
							onLoad="(_this select 0) ctrlEnable false;";
						};
						class Checkbox1: ctrlActivePicture
						{
							idc="100+1";
							x="(1-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y=0;
							w="2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h="2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							color[]={1,1,1,1};
							colorBackground[]={0,0,0,0.25};
							colorActive[]={1,1,1,1};
							colorDisabled[]={1,1,1,1};
							text="\a3\modules_f\data\editterrainobject\texturedoor_closed_ca.paa";
							onMouseButtonDown="['onMouseButtonUp',get3DENSelected 'object' select 0,_this] call expEden_fnc_3DENAttributeDoorKnocking";
						};
						class Text1: ctrlStatic
						{
							idc="150+1";
							text=1;
							x="(1-1) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
							w="2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h="1 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							shadow=0;
							colorText[]={1,1,1,0.5};
							colorBackground[]={0,0,0,0.25};
							colorShadow[]={0,0,0,0};
							type=0;
							style=2;
							onLoad="(_this select 0) ctrlEnable false;";
						};
						class CheckboxBackground2: ctrlStatic
						{
							idc="125+2";
							text="";
							x="(2-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y=0;
							w="2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h="2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							shadow=0;
							colorText[]={1,1,1,0.5};
							colorBackground[]={0,0,0,0.25};
							colorShadow[]={0,0,0,0};
							type=0;
							style=2;
							onLoad="(_this select 0) ctrlEnable false;";
						};
						class Checkbox2: ctrlActivePicture
						{
							idc="100+2";
							x="(2-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y=0;
							w="2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h="2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							color[]={1,1,1,1};
							colorBackground[]={0,0,0,0.25};
							colorActive[]={1,1,1,1};
							colorDisabled[]={1,1,1,1};
							text="\a3\modules_f\data\editterrainobject\texturedoor_closed_ca.paa";
							onMouseButtonDown="['onMouseButtonUp',get3DENSelected 'object' select 0,_this] call expEden_fnc_3DENAttributeDoorKnocking";
						};
						class Text2: ctrlStatic
						{
							idc="150+2";
							text=2;
							x="(2-1) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
							w="2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h="1 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							shadow=0;
							colorText[]={1,1,1,0.5};
							colorBackground[]={0,0,0,0.25};
							colorShadow[]={0,0,0,0};
							type=0;
							style=2;
							onLoad="(_this select 0) ctrlEnable false;";
						};
						class CheckboxBackground3: ctrlStatic
						{
							idc="125+3";
							text="";
							x="(3-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y=0;
							w="2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h="2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							shadow=0;
							colorText[]={1,1,1,0.5};
							colorBackground[]={0,0,0,0.25};
							colorShadow[]={0,0,0,0};
							type=0;
							style=2;
							onLoad="(_this select 0) ctrlEnable false;";
						};
						class Checkbox3: ctrlActivePicture
						{
							idc="100+3";
							x="(3-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y=0;
							w="2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h="2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							color[]={1,1,1,1};
							colorBackground[]={0,0,0,0.25};
							colorActive[]={1,1,1,1};
							colorDisabled[]={1,1,1,1};
							text="\a3\modules_f\data\editterrainobject\texturedoor_closed_ca.paa";
							onMouseButtonDown="['onMouseButtonUp',get3DENSelected 'object' select 0,_this] call expEden_fnc_3DENAttributeDoorKnocking";
						};
						class Text3: ctrlStatic
						{
							idc="150+3";
							text=3;
							x="(3-1) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
							w="2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h="1 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							shadow=0;
							colorText[]={1,1,1,0.5};
							colorBackground[]={0,0,0,0.25};
							colorShadow[]={0,0,0,0};
							type=0;
							style=2;
							onLoad="(_this select 0) ctrlEnable false;";
						};
						class CheckboxBackground4: ctrlStatic
						{
							idc="125+4";
							text="";
							x="(4-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y=0;
							w="2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h="2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							shadow=0;
							colorText[]={1,1,1,0.5};
							colorBackground[]={0,0,0,0.25};
							colorShadow[]={0,0,0,0};
							type=0;
							style=2;
							onLoad="(_this select 0) ctrlEnable false;";
						};
						class Checkbox4: ctrlActivePicture
						{
							idc="100+4";
							x="(4-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y=0;
							w="2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h="2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							color[]={1,1,1,1};
							colorBackground[]={0,0,0,0.25};
							colorActive[]={1,1,1,1};
							colorDisabled[]={1,1,1,1};
							text="\a3\modules_f\data\editterrainobject\texturedoor_closed_ca.paa";
							onMouseButtonDown="['onMouseButtonUp',get3DENSelected 'object' select 0,_this] call expEden_fnc_3DENAttributeDoorKnocking";
						};
						class Text4: ctrlStatic
						{
							idc="150+4";
							text=4;
							x="(4-1) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
							w="2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h="1 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							shadow=0;
							colorText[]={1,1,1,0.5};
							colorBackground[]={0,0,0,0.25};
							colorShadow[]={0,0,0,0};
							type=0;
							style=2;
							onLoad="(_this select 0) ctrlEnable false;";
						};
						class CheckboxBackground5: ctrlStatic
						{
							idc="125+5";
							text="";
							x="(5-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y=0;
							w="2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h="2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							shadow=0;
							colorText[]={1,1,1,0.5};
							colorBackground[]={0,0,0,0.25};
							colorShadow[]={0,0,0,0};
							type=0;
							style=2;
							onLoad="(_this select 0) ctrlEnable false;";
						};
						class Checkbox5: ctrlActivePicture
						{
							idc="100+5";
							x="(5-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y=0;
							w="2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h="2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							color[]={1,1,1,1};
							colorBackground[]={0,0,0,0.25};
							colorActive[]={1,1,1,1};
							colorDisabled[]={1,1,1,1};
							text="\a3\modules_f\data\editterrainobject\texturedoor_closed_ca.paa";
							onMouseButtonDown="['onMouseButtonUp',get3DENSelected 'object' select 0,_this] call expEden_fnc_3DENAttributeDoorKnocking";
						};
						class Text5: ctrlStatic
						{
							idc="150+5";
							text=5;
							x="(5-1) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
							w="2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h="1 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							shadow=0;
							colorText[]={1,1,1,0.5};
							colorBackground[]={0,0,0,0.25};
							colorShadow[]={0,0,0,0};
							type=0;
							style=2;
							onLoad="(_this select 0) ctrlEnable false;";
						};
						class CheckboxBackground6: ctrlStatic
						{
							idc="125+6";
							text="";
							x="(6-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y=0;
							w="2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h="2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							shadow=0;
							colorText[]={1,1,1,0.5};
							colorBackground[]={0,0,0,0.25};
							colorShadow[]={0,0,0,0};
							type=0;
							style=2;
							onLoad="(_this select 0) ctrlEnable false;";
						};
						class Checkbox6: ctrlActivePicture
						{
							idc="100+6";
							x="(6-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y=0;
							w="2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h="2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							color[]={1,1,1,1};
							colorBackground[]={0,0,0,0.25};
							colorActive[]={1,1,1,1};
							colorDisabled[]={1,1,1,1};
							text="\a3\modules_f\data\editterrainobject\texturedoor_closed_ca.paa";
							onMouseButtonDown="['onMouseButtonUp',get3DENSelected 'object' select 0,_this] call expEden_fnc_3DENAttributeDoorKnocking";
						};
						class Text6: ctrlStatic
						{
							idc="150+6";
							text=6;
							x="(6-1) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
							w="2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h="1 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							shadow=0;
							colorText[]={1,1,1,0.5};
							colorBackground[]={0,0,0,0.25};
							colorShadow[]={0,0,0,0};
							type=0;
							style=2;
							onLoad="(_this select 0) ctrlEnable false;";
						};
						class CheckboxBackground7: ctrlStatic
						{
							idc="125+7";
							text="";
							x="(7-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y=0;
							w="2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h="2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							shadow=0;
							colorText[]={1,1,1,0.5};
							colorBackground[]={0,0,0,0.25};
							colorShadow[]={0,0,0,0};
							type=0;
							style=2;
							onLoad="(_this select 0) ctrlEnable false;";
						};
						class Checkbox7: ctrlActivePicture
						{
							idc="100+7";
							x="(7-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y=0;
							w="2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h="2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							color[]={1,1,1,1};
							colorBackground[]={0,0,0,0.25};
							colorActive[]={1,1,1,1};
							colorDisabled[]={1,1,1,1};
							text="\a3\modules_f\data\editterrainobject\texturedoor_closed_ca.paa";
							onMouseButtonDown="['onMouseButtonUp',get3DENSelected 'object' select 0,_this] call expEden_fnc_3DENAttributeDoorKnocking";
						};
						class Text7: ctrlStatic
						{
							idc="150+7";
							text=7;
							x="(7-1) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
							w="2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h="1 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							shadow=0;
							colorText[]={1,1,1,0.5};
							colorBackground[]={0,0,0,0.25};
							colorShadow[]={0,0,0,0};
							type=0;
							style=2;
							onLoad="(_this select 0) ctrlEnable false;";
						};
						class CheckboxBackground8: ctrlStatic
						{
							idc="125+8";
							text="";
							x="(8-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y=0;
							w="2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h="2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							shadow=0;
							colorText[]={1,1,1,0.5};
							colorBackground[]={0,0,0,0.25};
							colorShadow[]={0,0,0,0};
							type=0;
							style=2;
							onLoad="(_this select 0) ctrlEnable false;";
						};
						class Checkbox8: ctrlActivePicture
						{
							idc="100+8";
							x="(8-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y=0;
							w="2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h="2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							color[]={1,1,1,1};
							colorBackground[]={0,0,0,0.25};
							colorActive[]={1,1,1,1};
							colorDisabled[]={1,1,1,1};
							text="\a3\modules_f\data\editterrainobject\texturedoor_closed_ca.paa";
							onMouseButtonDown="['onMouseButtonUp',get3DENSelected 'object' select 0,_this] call expEden_fnc_3DENAttributeDoorKnocking";
						};
						class Text8: ctrlStatic
						{
							idc="150+8";
							text=8;
							x="(8-1) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
							w="2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h="1 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							shadow=0;
							colorText[]={1,1,1,0.5};
							colorBackground[]={0,0,0,0.25};
							colorShadow[]={0,0,0,0};
							type=0;
							style=2;
							onLoad="(_this select 0) ctrlEnable false;";
						};
						class CheckboxBackground9: CheckboxBackground1
						{
							idc="125+9";
							x="(9-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Checkbox9: Checkbox1
						{
							idc="100+9";
							x="(9-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text9: Text1
						{
							idc="150+9";
							text=9;
							x="(9-9) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class CheckboxBackground10: CheckboxBackground1
						{
							idc="125+10";
							x="(10-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Checkbox10: Checkbox1
						{
							idc="100+10";
							x="(10-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text10: Text1
						{
							idc="150+10";
							text=10;
							x="(10-9) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class CheckboxBackground11: CheckboxBackground1
						{
							idc="125+11";
							x="(11-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Checkbox11: Checkbox1
						{
							idc="100+11";
							x="(11-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text11: Text1
						{
							idc="150+11";
							text=11;
							x="(11-9) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class CheckboxBackground12: CheckboxBackground1
						{
							idc="125+12";
							x="(12-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Checkbox12: Checkbox1
						{
							idc="100+12";
							x="(12-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text12: Text1
						{
							idc="150+12";
							text=12;
							x="(12-9) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class CheckboxBackground13: CheckboxBackground1
						{
							idc="125+13";
							x="(13-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Checkbox13: Checkbox1
						{
							idc="100+13";
							x="(13-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text13: Text1
						{
							idc="150+13";
							text=13;
							x="(13-9) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class CheckboxBackground14: CheckboxBackground1
						{
							idc="125+14";
							x="(14-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Checkbox14: Checkbox1
						{
							idc="100+14";
							x="(14-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text14: Text1
						{
							idc="150+14";
							text=14;
							x="(14-9) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class CheckboxBackground15: CheckboxBackground1
						{
							idc="125+15";
							x="(15-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Checkbox15: Checkbox1
						{
							idc="100+15";
							x="(15-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text15: Text1
						{
							idc="150+15";
							text=15;
							x="(15-9) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class CheckboxBackground16: CheckboxBackground1
						{
							idc="125+16";
							x="(16-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Checkbox16: Checkbox1
						{
							idc="100+16";
							x="(16-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text16: Text1
						{
							idc="150+16";
							text=16;
							x="(16-9) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class CheckboxBackground17: CheckboxBackground1
						{
							idc="125+17";
							x="(17-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class Checkbox17: Checkbox1
						{
							idc="100+17";
							x="(17-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class Text17: Text1
						{
							idc="150+17";
							text=17;
							x="(17-17) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="3 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 2 * 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class CheckboxBackground18: CheckboxBackground1
						{
							idc="125+18";
							x="(18-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class Checkbox18: Checkbox1
						{
							idc="100+18";
							x="(18-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class Text18: Text1
						{
							idc="150+18";
							text=18;
							x="(18-17) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="3 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 2 * 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class CheckboxBackground19: CheckboxBackground1
						{
							idc="125+19";
							x="(19-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class Checkbox19: Checkbox1
						{
							idc="100+19";
							x="(19-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class Text19: Text1
						{
							idc="150+19";
							text=19;
							x="(19-17) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="3 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 2 * 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class CheckboxBackground20: CheckboxBackground1
						{
							idc="125+20";
							x="(20-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class Checkbox20: Checkbox1
						{
							idc="100+20";
							x="(20-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class Text20: Text1
						{
							idc="150+20";
							text=20;
							x="(20-17) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="3 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 2 * 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class CheckboxBackground21: CheckboxBackground1
						{
							idc="125+21";
							x="(21-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class Checkbox21: Checkbox1
						{
							idc="100+21";
							x="(21-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class Text21: Text1
						{
							idc="150+21";
							text=21;
							x="(21-17) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="3 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 2 * 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class CheckboxBackground22: CheckboxBackground1
						{
							idc="125+22";
							x="(22-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class Checkbox22: Checkbox1
						{
							idc="100+22";
							x="(22-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class Text22: Text1
						{
							idc="150+22";
							text=22;
							x="(22-17) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="3 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 2 * 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class CheckboxBackground23: CheckboxBackground1
						{
							idc="125+23";
							x="(23-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class Checkbox23: Checkbox1
						{
							idc="100+23";
							x="(23-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class Text23: Text1
						{
							idc="150+23";
							text=23;
							x="(23-17) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="3 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 2 * 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class CheckboxBackground24: CheckboxBackground1
						{
							idc="125+24";
							x="(24-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class Checkbox24: Checkbox1
						{
							idc="100+24";
							x="(24-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class Text24: Text1
						{
							idc="150+24";
							text=24;
							x="(24-17) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y="3 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 2 * 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
					};
				};
			};
		};
	};
	class Marker
	{
		class AttributeCategories
		{
			class Style
			{
				class Attributes
				{
					class markerDrawPriority
					{
						property="markerDrawPriority";
						control="Edit";
						typeName="number";
						displayName="$STR_A3_Modules_moduleomIntel_F_Attributes_Priority0";
						tooltip="$STR_Globe_Cfg3DEN_Marker_AttributeCategories_Style_Attributes_markerDrawPriority_tooltip";
						expression="[_this,_value] spawn { waitUntil { is3DENPreview || allMapMarkers isNotEqualTo [] }; (_this # 0) setMarkerDrawPriority (_this # 1) };";
						defaultValue="markerDrawPriority _this";
						wikiType="[[Number]]";
					};
					class markerBlink
					{
						displayName="$STR_Globe_Cfg3DEN_Marker_AttributeCategories_Style_Attributes_markerBlink0";
						property="markerblink";
						control="EditXY";
						defaultValue="[0,0]";
						tooltip="$STR_Globe_Cfg3DEN_Marker_AttributeCategories_Style_Attributes_markerBlink1";
						expression="if ((_value # 0 isNotEqualTo 0) || (_value # 1 isNotEqualTo 0)) then {[_this, _value # 0, _value # 1] spawn BIS_fnc_blinkMarker};";
					};
					class ShapeMarkerCustom
					{
						property="ShapeMarkerCustom";
						control="ShapeMarkerCustom";
						displayName="$STR_Globe_Cfg3DEN_ShapeMarkerCustom0";
						tooltip="$STR_Globe_Cfg3DEN_ShapeMarkerCustom1";
						defaultValue="'IGNORE'";
						expression="if (_value isNotEqualTo 'IGNORE') then  {[_this,_value] spawn { waitUntil { is3DENPreview || allMapMarkers isNotEqualTo [] }; (_this # 0) setMarkerShape (_this # 1) }};";
					};
				};
			};
		};
	};
	class Mission
	{
		class Intel
		{
			class AttributeCategories
			{
				class Rain
				{
					class Attributes
					{
						class RainParams
						{
							displayName="";
							tooltip="";
							property="RainParams";
							control="RainParams";
							defaultValue="rainParams";
							expression="_value call BIS_fnc_setRain";
							typeName="ARRAY";
						};
					};
				};
				class Overcast
				{
					class Attributes
					{
						class SyncCloudLayerCB
						{
							property="SyncCloudLayerCB";
							control="CheckboxStateSyncCloudLayer";
							displayName="$STR_Globe_Cfg3DEN_Attributes_SyncCloudLayerCB";
							tooltip="$STR_Globe_Cfg3DEN_Attributes_SyncCloudLayerCB_tooltip";
							defaultValue="false";
							expression="missionNamespace setVariable ['Globe_SyncCloudLayer',_value,true]";
							typeName="BOOL";
							wikiType="[[Bool]]";
						};
						class SyncCloudLayerSlider
						{
							property="SyncCloudLayerSlider";
							control="SliderTimeSyncCloudLayer";
							displayName="$STR_Globe_Cfg3DEN_Attributes_SyncCloudLayerSlider";
							tooltip="$STR_Globe_Cfg3DEN_Attributes_SyncCloudLayerSlider_tooltip";
							defaultValue="600";
							expression="if (missionNamespace getVariable ['Globe_SyncCloudLayer', false] && isMultiplayer && {!is3DEN}) then { _value spawn { private _delay = (_this param [0, 90, [0]]) max 90; waitUntil {time > 0}; while {missionNamespace getVariable ['Globe_SyncCloudLayer', false]} do { remoteExecCall ['simulWeatherSync', -2]; sleep _delay; }; }; };";
							typeName="NUMBER";
							wikiType="[[Number]]";
						};
					};
				};
			};
		};
		class Scenario
		{
			class AttributeCategories
			{
				class Misc
				{
					class Attributes
					{
						class ShowLawOfWar_G
						{
							displayName="";
							tooltip="";
							control="ShowLawOfWar_G_control";
							property="ShowLawOfWar_G_property";
							defaultValue="missionNamespace getVariable ['Globe_ShowLoW', [   false,     false,false,false]];";
							expression="missionNamespace setVariable ['Globe_ShowLoW', [   (_value # 0),     (_value # 1),     (_value # 2),    (_value # 3)       ], true];";
							typeName="ARRAY";
						};
					};
				};
			};
		};
	};
};
class Display3DEN
{
	class ContextMenu: ctrlMenu
	{
		class Items
		{
			class Transform
			{
				items[]+=
				{
					"SetRandomYaw"
				};
			};
			class SetRandomYaw
			{
				text="$STR_Globe_Display3DEN_ContextMenu_Items_SetRandomYaw0";
				value=0;
				conditionShow="hoverObject";
				picture="\a3\ui_f\data\igui\rsctitles\mpprogress\respawn_ca.paa";
				action="  {			_x set3DENAttribute ['Rotation',[	(_x get3DENAttribute 'Rotation')#0#0, (_x get3DENAttribute 'Rotation')#0#1,		(random 360)]]		}				forEach (get3DENSelected 'object')";
			};
		};
	};
};
class CfgNonAIVehicles
{
	class EmptyDetector;
	class EmptyDetectorShortArcZap_01_G: EmptyDetector
	{
		author="O&T Expansion Eden";
		scope=2;
		displayName="$STR_Globe_CfgNonAIVehicles_EmptyDetectorShortArcZap_01_G0";
		class AttributeValues
		{
			size2[]={3,3};
			size3[]={3,3,1.5};
			text="$STR_Globe_CfgNonAIVehicles_EmptyDetectorShortArcZap_01_G1";
			ActivationBy="ANY";
			repeatable=1;
			isServerOnly=0;
			onActivation="thisTrigger spawn expEden_fnc_shortArcZap;";
			triggerInterval=0.75;
		};
	};
	class EmptyDetectorRazorWire_01_G: EmptyDetector
	{
		author="O&T Expansion Eden";
		scope=2;
		displayName="$STR_Globe_CfgNonAIVehicles_EmptyDetectorRazorWire_01_G0";
		class AttributeValues
		{
			size2[]={1,4};
			size3[]={1,4,1.5};
			isRectangle=1;
			text="$STR_Globe_CfgNonAIVehicles_EmptyDetectorRazorWire_01_G1";
			ActivationBy="ANY";
			repeatable=1;
			isServerOnly=0;
			onActivation="thisTrigger spawn expEden_fnc_razorWireDamage;";
			triggerInterval=0.25;
		};
	};
};