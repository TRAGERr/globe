#include "\A3\3den_globe\defines.inc"

#define COLOR_GLASS_PROPS				[1,0.8,0,1]
/*

	Author: 
		Trager

	Description:
		This is an edited BIS_fnc_3DENAttributeDoorStates function for windows, not doors
		3DENAttributeDoorStates original here: a3\3den\Functions\Attributes\fn_3DENAttributeDoorStates.sqf

	Parameter(s):
		0 (MODE): init
		1 (OBJECT): house/building with windows
		2 (STATE): value of damage [default,damaged,destroy], see setHitPointDamage param 'damage'

	Returns:
		n

*/
private _mode 	= param [0,"",[""]];
private _object = param [1,objNull,[objNull]];
if (isNull _object) exitWith {};

switch _mode do
{
	// Default object init
	case "init":
	{
		if (!is3DEN && !isServer) exitWith {};
		private _value = param [2,[0,0,0],[123,[]]];

		//set glass states
		private _flags = ["decodeGlassFlags",_object,_value] call expEden_fnc_3DENAttributeGlassStates;

		{
			if (is3DEN) then
			{
				if (!isDamageAllowed _object) then 
				{
					_object allowDamage true;
					SETUP_GLASS_PREVIEW(_object,_forEachIndex,_x)
				}
				else
				{
					SETUP_GLASS_PREVIEW(_object,_forEachIndex,_x)
				}
			}
			else
			{
				if (!isDamageAllowed _object) then
				{
					[_object,_forEachIndex,_x] spawn 
					{
						params["_object","_forEachIndex","_x"];
						
						waitUntil {time > 0};
						_object allowDamage true;
						sleep 0.5;
						SETUP_GLASS(_object,_forEachIndex,_x);
						sleep 0.5;
						_object allowDamage false;
					}
				}
				else
				{
					SETUP_GLASS(_object,_forEachIndex,_x);
				}
			};
		}
		forEach _flags;

		if (is3DEN) then
		{
			//add 'Draw3D' eh to ease operations with object glasses
			private _ehDraw3D = missionNamespace getVariable ["expEden_fnc_3DENAttributeGlassStates_ehDraw3D",-1];
			if (_ehDraw3D == -1) then
			{
				_ehDraw3D = addMissionEventHandler ["Draw3D",
				{
					private _object = (get3DENSelected "object") param [0,objNull];
					if (isNull _object) exitWith {};

					//get positions of window 3D icons
					private _glassPositions = GET_OBJVAR(_object,"#glassPositions",nil);
					if (isNil{_glassPositions}) then
					{
						_glassPositions = ["#glassPositions",_object] call expEden_fnc_3DENAttributeGlassStates;
						SET_OBJVAR(_object,"#glassPositions",_glassPositions);
					};

					//exit if no windows were detected
					if (count _glassPositions == 0) exitWith {};

					//draw 3d icons on window positions
					//---> no pos for windows?
					//------> there are!
					if (get3DENCamera distance _object > DISTANCE_HIGHLIGHT) exitWith {};

					private _value = (_object get3DENAttribute "GlassStates") param [0,0];
					private _glassFlags = ["decodeGlassFlags",_object,_value] call expEden_fnc_3DENAttributeGlassStates;

					private ["_icon","_state","_color"];
					{
						_state = _glassFlags # _forEachIndex;

						_icon 	= [ICON3D_GLAS_CLOSED,ICON3D_GLAS_LOCKED,ICON3D_GLAS_OPENED	] # _state;
						_color 	= [COLOR_GLASS_CLOSED,COLOR_GLASS_LOCKED,COLOR_GLASS_OPENED	] # _state;

						drawIcon3D ["", _color, _x, 0.6, -0.85, 0, str (_forEachIndex + 1), 2, 0.045, "RobotoCondensedBold","right",false];
						drawIcon3D [_icon, _color, _x, 0.8, 0.8, 0, "", 2];

					}
					forEach (_glassPositions apply {_object modelToWorld (_object selectionPosition _x)});
				}];

				missionNamespace setVariable ["expEden_fnc_3DENAttributeGlassStates_ehDraw3D",_ehDraw3D];
			};
		};
	};

	case "encodeGlassFlags":
	{
		private _flags = param [2,GLASS_FLAGS_EMPTY,[[]]];

		private _value = [(_flags select [0,8]) call bis_fnc_encodeFlags4,(_flags select [8,8]) call bis_fnc_encodeFlags4,(_flags select [16,8]) call bis_fnc_encodeFlags4];

		_value
	};
	
	case "decodeGlassFlags":
	{
		private _value = param [2,[0,0,0],[123,[]]];
		private _flags = [];

		//retype from old tech using single numeric value (with indexes from 0-15), each index can have one ot the 2 values (opened/closed)
		if (_value isEqualType 123) then
		{
			_flags = ([_value,GLASS_INDEX_MAX] call bis_fnc_decodeFlags2) apply {if (_x == 0) then {GLASS_STATE_CLOSED} else {GLASS_STATE_OPENED}};
		}
		//handle new tech with 3 values with indexes 0-7 (3 rows & 8 columns), each index can have one ot the 3 values (opened/locked/closed)
		else
		{
			{_flags append ([_x,GLASS_COLUMNS] call bis_fnc_decodeFlags4);} forEach _value;
		};

		_flags
	};

	case "onMouseButtonUp":
	{
		(_this # 2) params ["_ctrlAttribute","_mouseButton","","","_shiftKey","_ctrlKey","_altKey"];

		private _state = _ctrlAttribute getVariable ["#state",GLASS_STATE_CLOSED];

		if (_shiftKey || _ctrlKey || _altKey) then
		{
			_state = switch (true) do
			{
				case _altKey: 	{GLASS_STATE_OPENED};
				case _shiftKey: {GLASS_STATE_LOCKED};
				case _ctrlKey: 	{GLASS_STATE_CLOSED};
			};
		}
		else
		{
			if (_mouseButton == 0) then
			{
				_state = [GLASS_STATE_CLOSED,GLASS_STATE_LOCKED,GLASS_STATE_OPENED] # ((_state + 1) % 3);
			}
			else
			{
				_state = GLASS_STATE_CLOSED;
			};
		};

		_ctrlAttribute setVariable 		["#state", _state];
		_ctrlAttribute ctrlSetText 		([TEXTURE_GLASS, TEXTURE_GLASS_DAMAGED, TEXTURE_GLASS_DESTROYED	] # _state);
		_ctrlAttribute ctrlSetTooltip 	([TEXT_GLASS, TEXT_GLASS_DAMAGE, TEXT_GLASS_DESTROY		] # _state);
	};

	case "attributeLoad":
	{
		private _ctrlAttribute = param [2,controlNull,[controlNull]]; if (isNull _ctrlAttribute) exitWith {};
		private _value = param [3,[0,0,0],[123,[]]];

		private _flags = ["decodeGlassFlags",_object,_value] call expEden_fnc_3DENAttributeGlassStates;

		private _available = getNumber(configfile >> "CfgVehicles" >> typeOf _object >> "numberOfWindows");
		_available = _available min GLASS_INDEX_MAX;
		
		//adjust control height according to number of windows detected
		private _pos = ctrlPosition _ctrlAttribute;

		//hide completely if no windows detected
		if (_available == 0) exitWith
		{
			_pos set [3,0];
			_ctrlAttribute ctrlSetPosition _pos;
			_ctrlAttribute ctrlCommit 0;
		};
		
		//shrink if there is no need for all glass rows
		if (_available <= GLASS_INDEX_MAX - GLASS_COLUMNS) then 
		{
			private _heightMultiplier = (ceil(_available / GLASS_COLUMNS))/GLASS_ROWS;

			_pos set [3,(_pos # 3) * _heightMultiplier];
			_ctrlAttribute ctrlSetPosition _pos;
			_ctrlAttribute ctrlCommit 0;

			private _ctrlTitle = _ctrlAttribute controlsGroupCtrl 99; //title
			_ctrlTitlePos = ctrlPosition _ctrlTitle;
			_ctrlTitlePos set [3,(_ctrlTitlePos # 3) * _heightMultiplier];
			_ctrlTitle ctrlSetPosition _ctrlTitlePos;
			_ctrlTitle ctrlCommit 0;
			
			private _ctrlValue = _ctrlAttribute controlsGroupCtrl 100; //value
			_ctrlValuePos = ctrlPosition _ctrlValue;
			_ctrlValuePos set [3,(_ctrlValuePos # 3) * _heightMultiplier];
			_ctrlValue ctrlSetPosition _ctrlValuePos;
			_ctrlValue ctrlCommit 0;
		};
		
		private _ctrlCheckboxes = _ctrlAttribute controlsGroupCtrl 100;
		{
			private _id = _forEachIndex + 1;
			if (_id > _available) then
			{ 
				// squash all invisible controls 
				{
					private _ctrl = _ctrlCheckboxes controlsGroupCtrl (_x + _id);
					_ctrl ctrlSetPosition [0,0,0,0];
					_ctrl ctrlCommit 0;
				}
				forEach [100, 125, 150];
			}
			else
			{
				// set option on visible controls
				private _ctrlCheckbox = _ctrlCheckboxes controlsGroupCtrl (100 + _id);
				_ctrlCheckbox setVariable ["#state",_x];
				_ctrlCheckbox ctrlSetText ([TEXTURE_GLASS,TEXTURE_GLASS_DAMAGED,TEXTURE_GLASS_DESTROYED] # _x);
				_ctrlCheckbox ctrlSetTooltip ([TEXT_GLASS,TEXT_GLASS_DAMAGE,TEXT_GLASS_DESTROY] # _x) 
			};
		}
		forEach _flags;


		private ["_ctrlCheckbox","_ctrlCheckboxBackground","_ctrlSubtitle"];

		for "_glassID" from 1 to GLASS_INDEX_MAX do
		{
			_ctrlCheckbox 			= _ctrlCheckboxes controlsGroupCtrl (100+_glassID);
			_ctrlCheckboxBackground = _ctrlCheckboxes controlsGroupCtrl (125+_glassID);
			_ctrlSubtitle 			= _ctrlCheckboxes controlsGroupCtrl (150+_glassID);
			if (_glassID <= _available) then
			{
				_ctrlCheckbox 			ctrlSetFade 0;
				_ctrlCheckboxBackground ctrlSetFade 0;
				_ctrlSubtitle 			ctrlSetFade 0;
			}
			else
			{
				_ctrlCheckbox 			ctrlSetFade 1;
				_ctrlCheckboxBackground ctrlSetFade 1;
				_ctrlSubtitle 			ctrlSetFade 1;
			};
			_ctrlCheckbox 			ctrlCommit 0;
			_ctrlCheckboxBackground ctrlCommit 0;
			_ctrlSubtitle			ctrlCommit 0;
		};
	};
	case "attributeSave":
	{
		private _ctrlAttribute = param [2,controlNull,[controlNull]];
		private _ctrlCheckboxes = _ctrlAttribute controlsGroupCtrl 100;

		private _flags = [];

		for "_idc" from 101 to (100+GLASS_INDEX_MAX) do
		{
			_flags pushBack ((_ctrlCheckboxes controlsGroupCtrl _idc) getVariable ["#state",GLASS_STATE_CLOSED]);
		};

		private _value = ["encodeGlassFlags",_object,_flags] call expEden_fnc_3DENAttributeGlassStates;

		_value
	};
	case "#glassPositions":
	{
		private _cfg = configfile >> "CfgVehicles" >> typeOf _object >> "HitPoints";
		if !(isClass _cfg) exitWith {[]};

		private _positions = [];
		private _position = "";

		for "_glassID" from GLASS_INDEX_MIN to GLASS_INDEX_MAX do
		{
			_position = getText(_cfg >> format["glass_%1_hitpoint",_glassID] >> "DestructionEffects" >> format ["BrokenGlass%1",_glassID] >> "position");

			if (_position == "") exitWith {};

			_positions pushBack _position;
		};
		if (count _positions == 0) exitWith {[]};

		_positions
	};
};