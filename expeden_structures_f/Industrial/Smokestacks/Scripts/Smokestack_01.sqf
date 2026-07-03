params["_object"];
if (isNull _object || is3DEN) exitWith {};

if (isServer) then 
{

    private _effects = [];

    private _sound = createVehicle ['SoundSetSource_Sfx_ElectricMotor066_01_G', [0,0,0], [], 0, "CAN_COLLIDE"];
    _sound attachTo [_object, [2.8,-4.7,-28.1]];

    private _smoke = createVehicle ['Particle_FactorySmoke_01_G', [0,0,0], [], 0, "CAN_COLLIDE"];
    _smoke attachTo [_object, [-2.1,3.8,30]];

    _effects pushBack [_sound,_smoke];

    _object setVariable ["Globe_effects",_effects,true];

};