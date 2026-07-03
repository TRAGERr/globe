/*
 *	Author: Trager
 *
 *	Description:
 *	Just holdAction and say3d with curator ping sounds
 *
 *	Parameter(s):
 *	_this # 0: Target - Name of object to holdActionAdd
 *
 *	Returns:
 *	none
 */
params["_object"];

[
	// 0: Target
	_object,

	// 1: Title
	localize "STR_expEden_piano_eg",

	// 2: Idle Icon
	"\a3\ui_f_curator\data\logos\arma3_curator_eye_32a_ca.paa",

	// 3: Progress Icon
	"\a3\ui_f_curator\data\logos\arma3_curator_eye_32_ca.paa",

	// 4: Condition Show
	"_this distance _target < 3 && abs((_target getRelDir _this) - 180) < 70",

	// 5: Condition Progress
	nil,

	// 6: Code Start
	{},

	// 7: Code Progress
	{},

	// 8: global say3d
	{
		[(_this # 0),
		[
			[
				"RscDisplayCurator_ping01",
				"RscDisplayCurator_ping02",
				"RscDisplayCurator_ping03",
				"RscDisplayCurator_ping04",
				"RscDisplayCurator_ping05",
				"RscDisplayCurator_ping06",
				"RscDisplayCurator_ping07"
			] select floor (random 7),
			95,1
		]] remoteExec ["say3D"];
	},

	// 9: Code Interrupted
	{},

	// 10: Arguments
	[],

	// 11: Duration
	0,

	// 12: Priority
	15,

	// 13: Remove When Completed
	false
] call bis_fnc_holdActionAdd;