params ["_source"];
_source setVariable ["Globe_pianoPlaying", true, true];				

					
private _E4  = ["a3\ui_f_curator\data\sound\cfgsound\ping01.wss", 1.000];
private _Fs4 = ["a3\ui_f_curator\data\sound\cfgsound\ping01.wss", 1.122];
private _Gs4 = ["a3\ui_f_curator\data\sound\cfgsound\ping01.wss", 1.260];
private _B4  = ["a3\ui_f_curator\data\sound\cfgsound\ping01.wss", 1.498];
private _rest = ["", 1];

_melody =
[
	_Gs4, _Fs4, _E4, _B4, 
	_rest,
	_E4, _Fs4, _Gs4, _E4,
	_rest,
	_Gs4, _E4, _Fs4, _B4,
	_rest,
	_B4, _Fs4, _Gs4, _E4
];
_tempo = 0.55;

[_source, _melody, _tempo] spawn 
{
	params ["_source", "_notes", "_tempo"];
	{
		if (!alive _source) exitWith {};
		
		private _file = _x # 0;
		private _pitch = _x # 1;

		if (_file != "") then
		{
			playSound3D [_file, _source, false, getPosASL _source, 3.5, _pitch, 95];
		};
		sleep _tempo;
	} forEach _notes;

	_source setVariable ["Globe_pianoPlaying", false, true];
};
