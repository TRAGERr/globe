params ["_ctrlGroup"];
private _data = 
[
    "\a3\data_f\snowflake16_ca.paa",
    16,
    0.01,
    25,
    0.05,
    2.5,
    0.5,
    0.5,
    0.07,
    0.07,
    [1,1,1,0.5],
    0.0,
    0.2,
    0.5,
    0.5,
    true,
    false
];
[_ctrlGroup, _data] call expEden_fnc_3DENRainParamsAttributeLoad;