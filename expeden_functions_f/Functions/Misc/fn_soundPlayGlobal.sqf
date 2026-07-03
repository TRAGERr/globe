/*
	Author:
        Trager, O&T Expansion Eden

	Description:
	    Ref tickets https://feedback.bistudio.com/T180412
                    https://feedback.bistudio.com/T178500
        Can be enabled via mission 'other' attributes.
        Hold breath and bipods for now.

	Params:
	    n

	Returns:
	    n

	Examples:
        remoteExecCall ['expEden_fnc_soundPlayGlobal'];

*/

if (is3DEN) exitWith {};
if (!isMultiplayer) exitWith {};

if (!(player getVariable ["Globe_sndPld",false])) then
{
    player setVariable ["Globe_sndPld", true];
    player addEventHandler 
    [
        "SoundPlayed",
        {
            params ["_unit","_soundID"];
            
            private _speaker = speaker _unit;
            switch _soundID do
            {

                case 15:
                {
                    private _param = switch true do
                    {

                        case (_speaker == "Male08ENG")   :{   format ["A3\sounds_f\characters\human-sfx\P01\Breath_Aiming_%1.wss", ceil random 2]    };
                        case (_speaker == "Male06ENG")   :{   format ["A3\sounds_f\characters\human-sfx\P02\Breath_Aiming_%1.wss", ceil random 2]    };
                        case (_speaker == "Male09ENG")   :{   format ["A3\sounds_f\characters\human-sfx\P03\Breath_Aiming_%1.wss", ceil random 2]    };
                        case (_speaker == "Male07ENG")   :{   format ["A3\sounds_f\characters\human-sfx\P04\Breath_Aiming_%1.wss", ceil random 2]    };
                        case (_speaker == "Male03ENG")   :{   format ["A3\sounds_f\characters\human-sfx\P05\Breath_Aiming_%1.wss", ceil random 2]    };
                        case (_speaker == "Male02ENG")   :{   format ["A3\sounds_f\characters\human-sfx\P06\Breath_Aiming_%1.wss", ceil random 2]    };
                        case (_speaker == "Male01ENG")   :{   format ["A3\sounds_f\characters\human-sfx\P07\Breath_Aiming_%1.wss", ceil random 2]    };
                        case (_speaker == "Male01GRE")   :{   format ["A3\sounds_f\characters\human-sfx\P08\Breath_Aiming_%1.wss", ceil random 2]    };
                        case (_speaker == "Male02ENGB")  :{   format ["A3\sounds_f\characters\human-sfx\P09\Breath_Aiming_%1.wss", ceil random 2]    };
                        case (_speaker == "Male02GRE")   :{   format ["A3\sounds_f\characters\human-sfx\P10\Breath_Aiming_%1.wss", ceil random 2]    };
                        case (_speaker == "Male04ENGB")  :{   format ["A3\sounds_f\characters\human-sfx\P11\Breath_Aiming_%1.wss", ceil random 2]    };
                        case (_speaker == "Male03ENGB")  :{   format ["A3\sounds_f\characters\human-sfx\P12\Breath_Aiming_%1.wss", ceil random 2]    };
                        case (_speaker == "Male04ENG")   :{   format ["A3\sounds_f\characters\human-sfx\P13\Breath_Aiming_%1.wss", ceil random 2]    };
                        case (_speaker == "Male05GRE")   :{   format ["A3\sounds_f\characters\human-sfx\P14\Breath_Aiming_%1.wss", ceil random 2]    };
                        case (_speaker == "Male06GRE")   :{   format ["A3\sounds_f\characters\human-sfx\P15\Breath_Aiming_%1.wss", ceil random 2]    };
                        case (_speaker == "Male04GRE")   :{   format ["A3\sounds_f\characters\human-sfx\P16\Breath_Aiming_%1.wss", ceil random 2]    };
                        case (_speaker == "Male05ENGB")  :{   format ["A3\sounds_f\characters\human-sfx\P17\Breath_Aiming_%1.wss", ceil random 2]    };
                        case (_speaker == "Male05ENG")   :{   format ["A3\sounds_f\characters\human-sfx\P18\Breath_Aiming_%1.wss", ceil random 2]    };
                        default { format ["A3\sounds_f\characters\human-sfx\P01\Breath_Aiming_%1.wss", ceil random 2] };
                    };
                    [[_param, _unit, false, eyePos _unit, 0.354813, 1, 7, 0, true]] remoteExec ["playSound3D", (allPlayers - [_unit])];
                };
            }
        }
    ];
};

if (!(player getVariable ["Globe_wpnDep",false])) then
{
    player setVariable ["Globe_wpnDep", true];
    player addEventHandler 
    [
        "WeaponDeployed",
        {
            params ["_unit","_isDeployed"];

            private _params = getArray (configfile >> "CfgWeapons" >> (primaryWeaponItems _unit # 3) >> "ItemInfo" >> (if (_isDeployed) then {"soundBipodDown"} else {"soundBipodUp"}));
            if (_params isNotEqualTo []) then
            {
                [[_params # 0 + ".wss", _unit, false, eyePos _unit, (_params # 1), (_params # 2), (_params # 3), 0, true]] remoteExec ["playSound3D", (allPlayers - [_unit])]
            };
        }
    ];
};