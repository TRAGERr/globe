params ["_victim","_transformer"];
if ((!alive _victim) || (isNull _victim) || (!alive _transformer) || (isNull _transformer)) exitWith {};

private _pos = _transformer modelToWorld [0.0350342, 0.245605, 2.01693];
if (isServer) then 
{
    playSound3D ["A3\Sounds_F\ambient\thunder\thunder_03.wss", _victim, false, _pos, 3, 1.75, 900, 0, false, false];
};

private _light =  createVehicleLocal ["#lightpoint", _pos, [], 0, "CAN_COLLIDE"];
_light setLightColor [0.4, 0.7, 1.0];
_light setLightAmbient [0.2, 0.4, 0.8];
_light setLightIntensity 150000;
_light setLightUseFlare true;
_light setLightFlareSize 15;
_light setLightFlareMaxDistance 500;
_light setLightDayLight true;
_light spawn
{
    params ["_lit"];
    sleep 0.1;
    _lit setLightIntensity 20000;
    sleep 0.3;
    deleteVehicle _lit;
};

private _sparks =  createVehicleLocal ["#particlesource", _pos, [], 0, "CAN_COLLIDE"];
_sparks setParticleClass "FireSparks";
_sparks setParticleRandom [0.3, [0.5, 0.5, 0.5], [5, 5, 10], 0, 0.1, [0, 0, 0, 0], 0, 0];
_sparks setDropInterval 0.002;
private _smoke =  createVehicleLocal ["#particlesource", _pos, [], 0, "CAN_COLLIDE"];
_smoke setParticleClass "MediumSmoke";
_smoke setDropInterval 0.05;
[_sparks, _smoke] spawn
{
    params ["_spk", "_smk"];
    sleep 0.5;
    deleteVehicle _spk;
    sleep 2.0;
    deleteVehicle _smk;
};

if (_victim != _transformer) then
{
    private _dirVector = (getPosASL _victim) vectorDiff (_transformer modelToWorldWorld [0.0350342, 0.245605, 2.01693]);
    _dirVector = vectorNormalized _dirVector;
    private _forceVector =
    [
        (_dirVector select 0) * 5000, 
        (_dirVector select 1) * 5000, 
        1500
    ];
    [_forceVector, _victim selectionPosition "Pelvis", false] remoteExecCall ["addForce", _victim];
};

[_victim, 1] remoteExecCall ['setDamage',2]
