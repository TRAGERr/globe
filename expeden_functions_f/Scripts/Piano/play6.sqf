				params ["_source"];
					_source setVariable ["Globe_pianoPlaying", true, true];
				
				private _melody =
				[
					"a3\ui_f_curator\data\sound\cfgsound\ping01.wss",
					"",
					"a3\ui_f_curator\data\sound\cfgsound\ping04.wss",
					"a3\ui_f_curator\data\sound\cfgsound\ping04.wss",
					"a3\ui_f_curator\data\sound\cfgsound\ping05.wss",
					"a3\ui_f_curator\data\sound\cfgsound\ping04.wss",
					"",
					"a3\ui_f_curator\data\sound\cfgsound\ping06.wss",
					"a3\ui_f_curator\data\sound\cfgsound\ping05.wss",
					"a3\ui_f_curator\data\sound\cfgsound\ping04.wss",
					"",
					"a3\ui_f_curator\data\sound\cfgsound\ping07.wss",
					"a3\ui_f_curator\data\sound\cfgsound\ping06.wss",
					"a3\ui_f_curator\data\sound\cfgsound\ping05.wss",
					"a3\ui_f_curator\data\sound\cfgsound\ping04.wss"
				];
				[_source, _melody, 0.32] spawn 
				{
					params ["_source", "_notes", "_tempo"];
					{
						if (!alive _source) exitWith {};

						if (_x != "") then 
						{
							playSound3D [_x, _source, false, getPosASL _source, 2, 1, 95];
						};
						sleep _tempo;
					} forEach _notes;

					_source setVariable ["Globe_pianoPlaying", false, true];
				};