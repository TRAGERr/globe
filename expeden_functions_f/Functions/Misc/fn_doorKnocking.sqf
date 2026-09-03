/* 
	expEden_fnc_doorKnocking
	Параметры:
	- _object: объект здания
	- _doorIndex: индекс двери (число) или массив индексов, или nil (для всех дверей)
*/
params
[
	["_object", objNull, [objNull]],
	["_doorIndex", nil, [0, []]]
];
if (isNull _object || !(hasInterface)) exitWith {};

private _numberOfDoors 			= getNumber(configfile >> "CfgVehicles" >> typeOf _object >> "numberOfDoors");
private _fnc_addDoorKnocking	=
{
	params ["_object", "_doorIndex"];
	
	private _config = configFile >> "CfgVehicles" >> (typeOf _object) >> "UserActions" >> format ["OpenDoor_%1", _doorIndex];
	if !(isClass _config) exitWith {};
	
	private _selection = getText (_config >> "actionNamedSel");
	private _memory    = getText (_config >> "position");
	
	if (_selection == "" || _memory == "") exitWith {};
	
	private _doorName   = (_selection splitString "_") select [0, 2] joinString "_";
	private _isKnocking = format ["Globe_knocking_%1", _doorName];
	if (isNil {_object getVariable _isKnocking}) then
	{
		_object setVariable [_isKnocking, false, true]
	};
	
	private _conditionStr = format ["(alive _target) && (simulationEnabled _target) && !(_target getVariable ['%1', false])", _isKnocking];
	[
		_object,
		localize "STR_Globe_CfgFunctions_expEden_fnc_doorKnocking",
		{"<img image='\A3\3DEN_Globe\Data\icondoor_knock_ca.paa' size='2.5' />"},
		{"<img image='\A3\3DEN_Globe\Data\icondoor_knock_ca.paa' size='2.5' />"},
		_conditionStr,
		nil,
		{},
		{},
		{
			params ["_target", "_caller", "_actionId", "_arguments"];
			_arguments params ["_selection", "_memory", "_isKnocking"];
			
			private _sounds =
			[
				"a3\missions_f_oldman\data\sound\door_knock\knocking_awake_01.wss",
				"a3\missions_f_oldman\data\sound\door_knock\knocking_awake_02.wss",
				"a3\missions_f_oldman\data\sound\door_knock\knocking_awake_03.wss",
				"a3\missions_f_oldman\data\sound\door_knock\knocking_awake_04.wss",
				"a3\missions_f_oldman\data\sound\door_knock\knocking_awake_05.wss"
			];
			
			private _currentIndex  = _target getVariable ["Globe_knockIndex", 0];
			private _selectedSound = _sounds select _currentIndex;
		
			private _volume   = 1+_currentIndex;
			private _distance = 29+_currentIndex;

			private _relPos = _target selectionPosition [_memory, "Memory"];
			if (_relPos isEqualTo [0,0,0]) then 
			{
				_relPos = _target selectionPosition [_selection, "Geometry"];
			};
			private _soundPosASL = _target modelToWorldWorld _relPos;
			private _source = playSound3D [_selectedSound, _target, false, _soundPosASL, _volume, 1, _distance];
			_target setVariable [_isKnocking, true, true];
			[_source, _target, _isKnocking] spawn 
			{
				params ["_source", "_target", "_isKnocking"];
				waitUntil {soundParams _source isEqualTo []};
				uiSleep 0.1;
				_target setVariable [_isKnocking, false, true];
			};
			private _nextIndex = (_currentIndex + 1) min ((count _sounds) - 1);
			_target setVariable ["Globe_knockIndex", _nextIndex, true];
			_target spawn 
			{
				scriptName "expEden_fnc_doorKnocking - knock agressive reset cooldown";
				uiSleep 120;
				_this setVariable ["Globe_knockIndex", 0, true];
			};
		},
		{},
		[_selection, _memory, _isKnocking],
		0.123,
		0.345,
		false,
		false,
		false,
		1.75,
		_selection,
		_memory
	] call BIS_fnc_holdActionAdd;
};

private _doorIndices = [];
if (isNil "_doorIndex") then
{
	for "_i" from 1 to _numberOfDoors do
	{
		_doorIndices pushBack _i;
	};
}
else
{
	if (_doorIndex isEqualType []) then
	{
		_doorIndices = _doorIndex;
	}
	else
	{
		_doorIndices = [_doorIndex];
	};
};

{
	[_object, _x] call _fnc_addDoorKnocking;
} forEach _doorIndices;