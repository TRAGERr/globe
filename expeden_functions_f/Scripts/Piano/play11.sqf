params ["_source"];
_source setVariable ["Globe_pianoPlaying", true, true];				

private _E5   = ["a3\ui_f_curator\data\sound\cfgsound\ping04.wss", 1.0];
private _F5   = ["a3\ui_f_curator\data\sound\cfgsound\ping05.wss", 1.0];
private _G5   = ["a3\ui_f_curator\data\sound\cfgsound\ping06.wss", 1.0]; 
private _A5   = ["a3\ui_f_curator\data\sound\cfgsound\ping07.wss", 1.0];
private _rest = ["", 1];

_melody=
[
	_A5, _rest, _A5, _G5, _F5, _rest, _F5, _G5,
	_A5, _rest, _A5, _G5, _F5, _rest, _E5, _rest,
	_F5, _rest, _F5, _E5, _F5, _G5, _A5, _rest
];
_tempo = 0.18;

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
