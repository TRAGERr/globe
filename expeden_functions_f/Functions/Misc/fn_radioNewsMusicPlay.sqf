params
[
    ["_radio", objNull, [objNull]],
    ["_track", ""]
];

private _soundSource = _radio say3D
[
    _track,
    (_radio getVariable ["Globe_radioRange", 30]),
    random [0.9, 1, 1.1],
    false,
    0,
    false
];
sleep 5;
_radio setVariable ["Globe_radioTrackSrc", _soundSource];

waitUntil {isNull _soundSource};
_radio spawn expEden_fnc_radioNewsMusic;