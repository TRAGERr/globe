player addEventHandler 
[
    "SoundPlayed",
    {
	    params ["_unit", "_soundID"];

        private _soundPath = switch _soundID do
        {
            case 15:
            {
                format ["a3\sounds_f\characters\human-sfx\p%1\breath_aiming_%2.wss", ceil random 18, ceil random 2];
            };
            case 14:
            {

            };
            case 13:
            {
                format ["a3\sounds_f\characters\human-sfx\p%1\breath_aiming_%2.wss", ceil random 18, ceil random 2];
            };
            case 12:
            {
                format ["a3\sounds_f\characters\human-sfx\p%1\breath_aiming_%2.wss", ceil random 18, ceil random 2];
            };
            case 11:
            {
                format ["a3\sounds_f\characters\human-sfx\p%1\breath_aiming_%2.wss", ceil random 18, ceil random 2];
            };
            case 10:
            {
                format ["a3\sounds_f\characters\human-sfx\p%1\breath_aiming_%2.wss", ceil random 18, ceil random 2];
            };
            case 9:
            {
                format ["a3\sounds_f\characters\human-sfx\p%1\breath_aiming_%2.wss", ceil random 18, ceil random 2];
            };
            case 8:
            {
                format ["a3\sounds_f\characters\human-sfx\p%1\breath_aiming_%2.wss", ceil random 18, ceil random 2];
            };
            case 7:
            {
                format ["a3\sounds_f\characters\human-sfx\p%1\breath_aiming_%2.wss", ceil random 18, ceil random 2];
            };
            case 6:
            {
                format ["a3\sounds_f\characters\human-sfx\p%1\breath_aiming_%2.wss", ceil random 18, ceil random 2];
            };
            case 5:
            {
                format ["a3\sounds_f\characters\human-sfx\p%1\breath_aiming_%2.wss", ceil random 18, ceil random 2];
            };
            case 4:
            {
                format ["a3\sounds_f\characters\human-sfx\p%1\breath_aiming_%2.wss", ceil random 18, ceil random 2];
            };
            case 3:
            {
                format ["a3\sounds_f\characters\human-sfx\p%1\breath_aiming_%2.wss", ceil random 18, ceil random 2];
            };
            case 2:
            {
                format ["a3\sounds_f\characters\human-sfx\p%1\breath_aiming_%2.wss", ceil random 18, ceil random 2];
            };
            case 1:
            {
                format ["a3\sounds_f\characters\human-sfx\p%1\breath_aiming_%2.wss", ceil random 18, ceil random 2];
            };
        };

        [[_soundPath, _unit, false, getPosASL _unit, 0.3548134, 1, 20, 0, true]] remoteExec ["playSound3D", [0, -clientOwner] select isDedicated]
    }
];