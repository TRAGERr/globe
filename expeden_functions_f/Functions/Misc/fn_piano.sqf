params["_object"];

[
	_object,
	localize "STR_expEden_piano_eg",
	"\a3\ui_f_curator\data\logos\arma3_curator_eye_32a_ca.paa",
	"\a3\ui_f_curator\data\logos\arma3_curator_eye_32_ca.paa",
	"_this distance _target < 3 && abs((_target getRelDir _this) - 180) < 70 && ((_target getVariable ['Globe_pianoPlaying', false]) isEqualTo false)",
	nil,
	{},
	{},
	{
		private _source = (_this # 0);
		private _chance = random 100;

		switch (true) do 
		{
			case (_chance < 3):		{	_source execVM "a3\functions_f_globe\scripts\piano\play1.sqf"	};
			case (_chance < 6):		{	_source execVM "a3\functions_f_globe\scripts\piano\play2.sqf"	};
			case (_chance < 9):		{	_source execVM "a3\functions_f_globe\scripts\piano\play3.sqf"	};
			case (_chance < 12):	{	_source execVM "a3\functions_f_globe\scripts\piano\play4.sqf"	};
			case (_chance < 15):	{	_source execVM "a3\functions_f_globe\scripts\piano\play5.sqf"	};
			case (_chance < 18):	{	_source execVM "a3\functions_f_globe\scripts\piano\play6.sqf"	};
			case (_chance < 21):	{	_source execVM "a3\functions_f_globe\scripts\piano\play7.sqf"	};
			case (_chance < 24):	{	_source execVM "a3\functions_f_globe\scripts\piano\play8.sqf"	};
			case (_chance < 27):	{	_source execVM "a3\functions_f_globe\scripts\piano\play9.sqf"	};
			case (_chance < 30):	{	_source execVM "a3\functions_f_globe\scripts\piano\play10.sqf"	};
			case (_chance < 33):	{	_source execVM "a3\functions_f_globe\scripts\piano\play11.sqf"	};

			default 
			{
				private _sound =
				[
					"RscDisplayCurator_ping01",
					"RscDisplayCurator_ping02",
					"RscDisplayCurator_ping03",
					"RscDisplayCurator_ping04",
					"RscDisplayCurator_ping05",
					"RscDisplayCurator_ping06",
					"RscDisplayCurator_ping07"
				];

				[_source, [selectRandom _sound, 95, 1]] remoteExec ["say3D", 0];

			};
		};
	},
	{},
	[],
	0.01,
	15,
	false
]
call BIS_fnc_holdActionAdd;