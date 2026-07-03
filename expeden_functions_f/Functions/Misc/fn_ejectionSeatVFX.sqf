/* params[["_object",objNull,[objNull]]];
if (isNull _object) exitWith {};

private _objectLightSource = "#lightpoint" createVehicle getPosATL _object;
_objectLightSource setLightBrightness 0.3;
_objectLightSource setLightAmbient[0.8, 0.6, 0.2];
_objectLightSource setLightColor[1, 0.5, 0.2];
_objectLightSource lightAttachObject [_object, [0,0,0]];

_object animate ["Rocket_Flash_hide",1];
_object setVariable ["objectLightSource",_objectLightSource,true]; */