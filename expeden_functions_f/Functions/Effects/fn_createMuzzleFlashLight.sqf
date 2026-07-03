params
[
    ["_object", objNull,[objNull]],
    ["_lightClass", "", [""]]
];

if ((_object getVariable ['Globe_objLightExec',true]) isEqualTo false) exitWith {};
if (isNull _object) exitWith {};
if (!(isClass (configFile >> "CfgLights" >> _lightClass))) exitWith {};

private _lightSource = "#lightpoint" createVehicleLocal (getPosATL _object);
_lightSource attachTo [_object, [0,0,0]];
_lightSource setLightColor      (getArray   (configfile >> "CfgLights" >> _lightClass >> "color"));
_lightSource setLightAmbient    (getArray   (configfile >> "CfgLights" >> _lightClass >> "diffuse"));
_lightSource setLightBrightness (getNumber  (configfile >> "CfgLights" >> _lightClass >> "brightness"));
_lightSource setLightIntensity  (getNumber  (configfile >> "CfgLights" >> _lightClass >> "intensity"));
_lightSource setLightAttenuation 
[
    (getNumber (configfile >> "CfgLights" >> _lightClass >> "Attenuation" >> "start")),
    (getNumber (configfile >> "CfgLights" >> _lightClass >> "Attenuation" >> "constant")),
    (getNumber (configfile >> "CfgLights" >> _lightClass >> "Attenuation" >> "linear")),
    (getNumber (configfile >> "CfgLights" >> _lightClass >> "Attenuation" >> "quadratic")),
    (getNumber (configfile >> "CfgLights" >> _lightClass >> "Attenuation" >> "hardLimitStart")),
    (getNumber (configfile >> "CfgLights" >> _lightClass >> "Attenuation" >> "hardLimitEnd"))
];

_object setVariable ["Globe_objLight",_lightSource,isServer];