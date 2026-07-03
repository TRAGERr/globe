params
[
    "_object",
    "_value"
];

if (!isServer) exitWith 
{
    _object remoteExecCall ['expEden_fnc_switchSoundSetSource',2]
};

private _objectNew = createVehicle [_value, [0,0,0], [], 0, "CAN_COLLIDE"];
_objectNew attachTo [_object, [0,-0.6,0]];

deleteVehicle _object;