params ["_source"];
_source setVariable ["Globe_pianoPlaying", true, true];				

					
private _E5   = ["a3\ui_f_curator\data\sound\cfgsound\ping01.wss", 2.000];
private _C5   = ["a3\ui_f_curator\data\sound\cfgsound\ping01.wss", 1.587];
private _G5   = ["a3\ui_f_curator\data\sound\cfgsound\ping01.wss", 2.378];
private _G4   = ["a3\ui_f_curator\data\sound\cfgsound\ping01.wss", 1.189];
private _rest = ["", 1];

_melody=
[
    _E5,
	_E5,
	_rest,
	_E5,
	_rest,
	_C5,
	_E5,
	_rest, 
    _G5,
	_rest,
	_rest,
	_rest,
	_G4,
	_rest,
	_rest,
	_rest
];
_tempo = 0.15;

[_source, _melody, _tempo] spawn 
{
	params ["_source", "_notes", "_tempo"];
	{
		if (!alive _source) exitWith {};
		
		private _file = _x # 0;
		private _pitch = _x # 1;

		if (_file != "") then
		{
			playSound3D [_file, _source, false, getPosASL _source, 2.5, _pitch, 95];
		};
		sleep _tempo;
	} forEach _notes;

	_source setVariable ["Globe_pianoPlaying", false, true];
};
