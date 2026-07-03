params ["_ctrlGroup"];
private _data =
[
    "a3\data_f\snowflake4_ca.paa",
    4,
    0.01,
    55,
    0.01,
    -0.4,
    1.5,
    1.5,
    0.15,
    0.15,
    [0.07,0.05,0.05,0.65],
    0.0,
    0.0,
    0.01,
    0.01,
    true,
    false
];
[_ctrlGroup, _data] call expEden_fnc_3DENRainParamsAttributeLoad;