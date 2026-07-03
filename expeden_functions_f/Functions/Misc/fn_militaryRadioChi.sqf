params["_militartyRadio"];

private _soundSource = createSoundSource ["Sound_MilitaryRadioCSAT_SFX", getPosATL _militartyRadio, [], 0];
_soundSource attachTo [_militartyRadio];

_militartyRadio setVariable ["MilitaryRadioSoundSource",_soundSource,isServer];