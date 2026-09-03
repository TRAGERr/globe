#include "\A3\3den_globe\defines.inc"

private _mode = _this param [0,"",[""]];
private _object = _this param [1,objNull,[objNull]];

switch (_mode) do
{
	case "init":
	{
		if (is3DEN) exitWith {};

		private _value = param [2,[0,0,0],[123,[]]];
		private _flags = ["decodeDoorFlags",_object,_value] call expEden_fnc_3DENAttributeDoorKnocking;

		{
			if (_x == KNOCK_ENABLED) then
			{
				// [_object, _forEachIndex + 1] call expEden_fnc_doorKnocking;
				[_object, _forEachIndex + 1] remoteExecCall ['expEden_fnc_doorKnocking',0,true];
			};
		} forEach _flags;
	};

	case "encodeDoorFlags":
	{
		private _flags = param [2,[],[[]]];
		if (count _flags == 0) then {_flags resize [DOOR_INDEX_MAX, 0]};

		private _value =
		[
			(_flags select [0,8]) call bis_fnc_encodeFlags2,
			(_flags select [8,8]) call bis_fnc_encodeFlags2,
			(_flags select [16,8]) call bis_fnc_encodeFlags2
		];
		_value
	};

	case "decodeDoorFlags":
	{
		private _value = param [2,[0,0,0],[123,[]]];
		private _flags = [];

		if (_value isEqualType 123) then
		{
			_flags = [_value, DOOR_INDEX_MAX] call bis_fnc_decodeFlags2;
		}
		else
		{
			{ _flags append ([_x, DOOR_COLUMNS] call bis_fnc_decodeFlags2); } forEach _value;
		};
		_flags
	};

	case "onMouseButtonUp":
	{
		private _mouseArgs = _this select 2;
		private _ctrlCheckbox = _mouseArgs select 0; 
		private _mouseButton  = _mouseArgs select 1;

		if (isNull _ctrlCheckbox) exitWith {};

		private _state = _ctrlCheckbox getVariable ["#state", KNOCK_DISABLED];

		if (_mouseButton == 0) then
		{
			if (_state == KNOCK_DISABLED) then { _state = KNOCK_ENABLED } else { _state = KNOCK_DISABLED; };
		}
		else
		{
			_state = KNOCK_DISABLED;
		};

		_ctrlCheckbox setVariable ["#state", _state];
		_ctrlCheckbox ctrlSetText ([TEXTURE_KNOCK_OFF, TEXTURE_KNOCK_ON] select _state);
		_ctrlCheckbox ctrlSetTooltip ([TEXT_KNOCK_OFF, TEXT_KNOCK_ON] select _state);

		private _alpha = if (ctrlText _ctrlCheckbox isEqualTo "\A3\3DEN_Globe\Data\texturedoor_knock_ca.paa") then {1} else {0.5};
		_ctrlCheckbox ctrlSetTextColor [1, 1, 1, _alpha];
	};

	case "attributeLoad":
	{
		private _ctrlAttribute = param [2, controlNull, [controlNull]]; 
		if (isNull _ctrlAttribute || isNull _object) exitWith {};

		private _value = param [3,[0,0,0],[123, []]];
		private _flags = ["decodeDoorFlags", _object, _value] call expEden_fnc_3DENAttributeDoorKnocking;
		private _available = getNumber(configfile >> "CfgVehicles" >> typeOf _object >> "numberOfDoors") min DOOR_INDEX_MAX;
		
		private _pos = ctrlPosition _ctrlAttribute;
		if (_available == 0) exitWith
		{
			_pos set [3,0]; _ctrlAttribute ctrlSetPosition _pos; _ctrlAttribute ctrlCommit 0;
		};
		
		if (_available <= DOOR_INDEX_MAX - DOOR_COLUMNS) then 
		{
			private _heightMultiplier = (ceil(_available / DOOR_COLUMNS)) / DOOR_ROWS;
			_pos set [3, (_pos select 3) * _heightMultiplier]; _ctrlAttribute ctrlSetPosition _pos; _ctrlAttribute ctrlCommit 0;

			private _ctrlTitle = _ctrlAttribute controlsGroupCtrl 99;
			_ctrlTitlePos = ctrlPosition _ctrlTitle; _ctrlTitlePos set [3, (_ctrlTitlePos select 3) * _heightMultiplier]; _ctrlTitle ctrlSetPosition _ctrlTitlePos; _ctrlTitle ctrlCommit 0;
			
			private _ctrlValue = _ctrlAttribute controlsGroupCtrl 100;
			_ctrlValuePos = ctrlPosition _ctrlValue; _ctrlValuePos set [3, (_ctrlValuePos select 3) * _heightMultiplier]; _ctrlValue ctrlSetPosition _ctrlValuePos; _ctrlValue ctrlCommit 0;
		};
		
		private _ctrlCheckboxes = _ctrlAttribute controlsGroupCtrl 100;
		{
			private _id = _forEachIndex + 1;
			if (_id > _available) then
			{
				{
					private _ctrl = _ctrlCheckboxes controlsGroupCtrl (_x + _id);
					_ctrl ctrlSetPosition [0,0,0,0]; _ctrl ctrlCommit 0;
				} forEach [100, 125, 150];
			}
			else
			{
				private _ctrlCheckbox = _ctrlCheckboxes controlsGroupCtrl (100 + _id);
				_ctrlCheckbox setVariable ["#state", _x];
				_ctrlCheckbox ctrlSetText ([TEXTURE_KNOCK_OFF, TEXTURE_KNOCK_ON] select _x);
				_ctrlCheckbox ctrlSetTooltip ([TEXT_KNOCK_OFF, TEXT_KNOCK_ON] select _x);

				private _alpha = if (ctrlText _ctrlCheckbox isEqualTo "\A3\3DEN_Globe\Data\texturedoor_knock_ca.paa") then {1} else {0.5};
				_ctrlCheckbox ctrlSetTextColor [1, 1, 1, _alpha];
			};
		} forEach _flags;

		private ["_ctrlCheckbox", "_ctrlCheckboxBackground", "_ctrlSubtitle"];
		for "_doorID" from 1 to DOOR_INDEX_MAX do
		{
			_ctrlCheckbox = _ctrlCheckboxes controlsGroupCtrl (100 + _doorID);
			_ctrlCheckboxBackground = _ctrlCheckboxes controlsGroupCtrl (125 + _doorID);
			_ctrlSubtitle = _ctrlCheckboxes controlsGroupCtrl (150 + _doorID);
			if (_doorID <= _available) then
			{
				_ctrlCheckbox ctrlSetFade 0;
				_ctrlCheckboxBackground ctrlSetFade 0;
				_ctrlSubtitle ctrlSetFade 0;
			}
			else
			{
				_ctrlCheckbox ctrlSetFade 1;
				_ctrlCheckboxBackground ctrlSetFade 1;
				_ctrlSubtitle ctrlSetFade 1;
			};
			_ctrlCheckbox ctrlCommit 0;
			_ctrlCheckboxBackground ctrlCommit 0;
			_ctrlSubtitle ctrlCommit 0;
		};
	};

	case "attributeSave":
	{
		private _ctrlAttribute = param [2, controlNull, [controlNull]];
		private _ctrlCheckboxes = _ctrlAttribute controlsGroupCtrl 100;
		private _flags = [];

		for "_idc" from 101 to (100 + DOOR_INDEX_MAX) do
		{
			private _ctrlCheckbox = _ctrlCheckboxes controlsGroupCtrl _idc;
			_flags pushBack (_ctrlCheckbox getVariable ["#state", KNOCK_DISABLED]);
		};

		private _value = ["encodeDoorFlags", _object, _flags] call expEden_fnc_3DENAttributeDoorKnocking;
		_value
	};
};
