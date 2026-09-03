params["_unit","_generator"];

if (isNull _unit || isNull _generator) exitWith {};

_unit playMoveNow "Acts_AidlPercMstpSlowWrflDnon_pissing";

private _fnc_clearPissHandlers =
{
	params ["_disp", "_kh", "_mh"];
	_disp displayRemoveEventHandler ["KeyDown", _kh];
	_disp displayRemoveEventHandler ["MouseButtonDown", _mh];
};

private _keyHandlerID = (findDisplay 46) displayAddEventHandler 
[
	"KeyDown",
	{
		private _isMoving = (inputAction "MoveForward" > 0) || (inputAction "MoveBack" > 0) || (inputAction "TurnLeft" > 0) || (inputAction "TurnRight" > 0) || (inputAction "AdjustStance" > 0) || (inputAction "Jump" > 0);

		if (_isMoving) then
		{
			_unit switchMove "";
			private _mouseID = _unit getVariable ["Globe_pissMouseEH", -1];
			[findDisplay 46, _thisEventHandler, _mouseID] call _fnc_clearPissHandlers;
		};
		false;
	}
];

private _mouseHandlerID = (findDisplay 46) displayAddEventHandler 
[
	"MouseButtonDown",
	{
		params ["_displayCode", "_button"];
		if (_button == 0 || _button == 1) then
		{
			{
				_unit switchMove "";
				private _keyID = _unit getVariable ["Globe_pissKeyEH", -1];
				[findDisplay 46, _keyID, _thisEventHandler] call _fnc_clearPissHandlers;
			};
			false
		}
	}
];

_unit setVariable ["Globe_pissKeyEH", _keyHandlerID];
_unit setVariable ["Globe_pissMouseEH", _mouseHandlerID];

[_keyHandlerID, _mouseHandlerID] spawn
{
	params ["_kh", "_mh"];
	sleep 19.157; 
	(findDisplay 46) displayRemoveEventHandler ["KeyDown", _kh];
	(findDisplay 46) displayRemoveEventHandler ["MouseButtonDown", _mh];
};
