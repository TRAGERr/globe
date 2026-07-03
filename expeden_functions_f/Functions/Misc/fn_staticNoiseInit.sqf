params["_object"];

private _varDistance = _object getVariable ['expEden_StaticNoise_distance',20];

[_object, _varDistance, 1] spawn expEden_fnc_staticNoise;

true