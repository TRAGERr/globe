params ["_object"];
if (isNull _object) exitWith {};

if (!(_object getVariable ['Globe_disableActionX',false])) then
{
	[
		_object,
		localize "STR_Globe_CfgVehicles_PylonPod_Searchlight_01_G_base_Attributes_pilotcamerarotx0",
		"\a3\ui_f\data\igui\cfg\simpletasks\letters\x_ca.paa",
		"\a3\ui_f\data\igui\cfg\simpletasks\letters\x_ca.paa",
		"_this distance _target < 3 && {simulationEnabled _target} && {alive _target}",
		"_this distance _target < 3 && {simulationEnabled _target} && {alive _target}",
		{},
		{},
		{
			params ["_target","_caller","_actionId","_arguments"];
	
			private _phase = (_target animationPhase 'pilotcamerarotx') + 0.1;
			_target animate 
			[
				'pilotcamerarotx',
				_phase % 6.283185
			];
		},
		{},
		[],
		0,
		1,
		false,
		false,
		false,
		10,
		"",
		""
	] call BIS_fnc_holdActionAdd;
};

if (!(_object getVariable ['Globe_disableActionY',false])) then
{
	[
		_object,
		localize "STR_Globe_CfgVehicles_PylonPod_Searchlight_01_G_base_Attributes_pilotcameraroty0",
		"\a3\ui_f\data\igui\cfg\simpletasks\letters\y_ca.paa",
		"\a3\ui_f\data\igui\cfg\simpletasks\letters\y_ca.paa",
		"_this distance _target < 3 && {simulationEnabled _target} && {alive _target}",
		"_this distance _target < 3 && {simulationEnabled _target} && {alive _target}",
		{},
		{},
		{
			params ["_target","_caller","_actionId","_arguments"];

			private _phase = (_target animationPhase 'pilotcameraroty') + 0.1;
			_target animate 
			[
				'pilotcameraroty',
				_phase % 6.283185
			];
		},
		{},
		[],
		0,
		1,
		false,
		false,
		false,
		10,
		"",
		""
	] call BIS_fnc_holdActionAdd;
};

if (!(_object getVariable ['Globe_disableActionSwitch',false])) then
{
	[
		_object,
		localize "STR_Globe_CfgFunctions_pylonPodSearchlightActions0",
		"a3\ui_f\data\igui\cfg\actions\ico_cpt_land_on_ca.paa",
		"a3\ui_f\data\igui\cfg\actions\ico_cpt_land_on_ca.paa",
		"_this distance _target < 3 && {simulationEnabled _target} && {alive _target}",
		"_this distance _target < 3 && {simulationEnabled _target} && {alive _target}",
		{},
		{},
		{
			params ["_target","_caller","_actionId","_arguments"];

			[
				_target,
				if (isLightOn _target) then {"OFF"} else {"ON"}
			] remoteExec ["switchLight", 0, _target];
		},
		{},
		[],
		0,
		1,
		false,
		false,
		false,
		10,
		"",
		""
	] call BIS_fnc_holdActionAdd;
};