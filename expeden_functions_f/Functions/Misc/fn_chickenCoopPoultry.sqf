params["_chickenCoop"];

_soundSource = createSoundSourceLocal ["Sound_ChickenCoop_SFX", getPosASL _chickenCoop, [], 0];
_soundSource attachTo [_chickenCoop];

_chickenCoop setVariable ["chickenCoopSoundSource",_soundSource,isServer];