params ["_uav"];
if (isNull _uav || is3DEN) exitWith {};

[_uav, BIS_functions_mainscope] call BIS_fnc_attachToRelative;
_uav lock true;
player disableUAVConnectability [_uav, true];

[
	_uav,
	localize "STR_Globe_RscLoiteringMunitionUAVGridMenu_holdAction",
	"\a3\Ui_f\data\IGUI\Cfg\HoldActions\holdAction_hack_ca.paa",
	"\a3\Ui_f\data\IGUI\Cfg\HoldActions\holdAction_hack_ca.paa",
	"_this distance _target < 9 && (isEngineOn _target isEqualTo false) && (alive _target) && (simulationEnabled _target)",
	nil,
	{},
	{},
	{
		params ["_target", "_caller"];

		createDialog "RscLoiteringMunitionUAVGridMenu";
		waitUntil {!isNull (findDisplay 9000)};

		disableSerialization;
		private _display = findDisplay 9000;
		private _gridCtrl = _display displayCtrl 171;
		_gridCtrl ctrlSetText (mapGridPosition _target);
		[_display] spawn 
		{
			disableSerialization;
			params ["_display"];
			private _timeCtrl = _display displayCtrl 190;

			while {!isNull _display} do 
			{
				_timeCtrl ctrlSetText ([daytime, "HH:MM:SS"] call BIS_fnc_timeToString);
				sleep 1;
			};
		};

		_display setVariable ["Globe_assignedUAV", _target];

		private _map = _display displayCtrl 1200;
		_map ctrlMapAnimAdd [0, 0.1, getPos _target]; 
		ctrlMapAnimCommit _map;

		_map ctrlAddEventHandler
		[
			"MouseButtonClick",
			{
				params ["_control", "_button", "_xPos", "_yPos"];

				if (_button == 0) then {
					private _pos = _control ctrlMapScreenToWorld [_xPos, _yPos];
					private _display = findDisplay 9000;
					_display setVariable ["Globe_selTgtPos", _pos];

					deleteMarkerLocal "Globe_mrkTgt";
					private _marker = createMarkerLocal ["Globe_mrkTgt", _pos];
					_marker setMarkerTypeLocal (selectRandom ['hd_Contact_pencilCircle1','hd_Contact_pencilCircle2','hd_Contact_pencilCircle3','hd_Contact_circle1','hd_Contact_circle2','hd_Contact_circle3','hd_Contact_circle4']);
					_marker setMarkerColorLocal "ColorRed";
					_marker setMarkerTextLocal (localize "STR_A3_MP_coop_m02_task2_wp");

					if (!isNull _display) then
					{
						private _targetGrid = mapGridPosition _pos;
						(_display displayCtrl 172) ctrlSetText _targetGrid;
					};
				};
			}
		];
	},
	{},
	[],
	1.5,
	15,
	false
] call BIS_fnc_holdActionAdd;

[
	_uav,
	localize "STR_usract_buld_rotate_X",
	"\a3\ui_f\data\igui\cfg\simpletasks\letters\x_ca.paa",
	"\a3\ui_f\data\igui\cfg\simpletasks\letters\x_ca.paa",
	"_this distance _target < 8 && (isEngineOn _target isEqualTo false) && (alive _target) && (simulationEnabled _target)",
	nil,
	{},
	{},
	{
		params ["_target"];

		private _dir = getDir _target;
		[_target, (_dir - 10)] remoteExecCall ["setDir", _target];
	},
	{},
	[],
	0.01,
	1,
	false
] call BIS_fnc_holdActionAdd;

[
	_uav,
	localize "STR_usract_buld_rotate_Z",
	"\a3\ui_f\data\igui\cfg\simpletasks\letters\y_ca.paa",
	"\a3\ui_f\data\igui\cfg\simpletasks\letters\y_ca.paa",
	"_this distance _target < 8 && (isEngineOn _target isEqualTo false) && (alive _target) && (simulationEnabled _target)",
	nil,
	{},
	{},
	{
		params ["_target"];

		private _pb 	= _target call BIS_fnc_getPitchBank;
		private _pitch 	= _pb # 0;
		private _bank 	= _pb # 1;
		[_target, _pitch + 5, _bank] remoteExecCall ["BIS_fnc_setPitchBank", _target];
		
	},
	{},
	[],
	0.01,
	1,
	false
] call BIS_fnc_holdActionAdd;