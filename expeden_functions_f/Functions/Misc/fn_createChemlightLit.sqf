params
[
	["_chemLight",objNull,[objNull]],
	["_color","",["Green","Red","Yellow","Blue"]]
];
if (isNull _chemLight) exitWith {};
if (is3DEN) exitWith {};

private _colorRGBA = switch (toUpper _color) do
{
	case "GREEN":
	{
		[0.02,0.1,0];
	};
	case "RED":
	{
		[0.1,0,0.0024999999];
	};
	case "YELLOW":
	{
		[1,0.60000002,0];
	};
	case "BLUE":
	{
		[0,0.60000002,1];
	};
	default
	{
		[1,0.60000002,0];
	};
};

private _sourceLight = "#lightpoint" createVehicleLocal (getPosATL _chemLight);
_sourceLight setLightColor _colorRGBA;
_sourceLight setLightAmbient [0,0,0];
_sourceLight setLightBrightness 1;
_sourceLight setLightIntensity 4000;
_sourceLight setLightAttenuation [ 0, 1, 0, 5, 0, 0 ];
_sourceLight setLightDayLight false;
_sourceLight lightAttachObject [_chemLight,[0,0,0]];