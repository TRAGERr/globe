params ["_source"];
_source setVariable ["Globe_pianoPlaying", true, true];

private _F4   = ["a3\ui_f_curator\data\sound\cfgsound\ping01.wss", 1.122];
private _G4   = ["a3\ui_f_curator\data\sound\cfgsound\ping01.wss", 1.189];
private _As4  = ["a3\ui_f_curator\data\sound\cfgsound\ping01.wss", 1.414];
private _C5   = ["a3\ui_f_curator\data\sound\cfgsound\ping01.wss", 1.587];
private _D5   = ["a3\ui_f_curator\data\sound\cfgsound\ping01.wss", 1.682];
private _F5   = ["a3\ui_f_curator\data\sound\cfgsound\ping01.wss", 2.119];
private _rest = ["", 1];

_melody=
[
	_F4,_G4,_As4,_G4,_D5,
	_rest,
	_D5,
	_rest,
	_C5,
	_rest,_rest,
	_F4,_G4,_As4,_G4,_C5,
	_rest,
	_C5,
	_rest,
	_As4
];
_tempo = 0.14;

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
