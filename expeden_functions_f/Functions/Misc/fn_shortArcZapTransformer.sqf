params["_transformer"];
if (is3DEN || isNull _transformer) exitWith {};
if (!isNil {_transformer getVariable "Globe_TrnsfrTrg"}) exitWith {};

private _relativePos = [0.0350342, 0.245605, 2.01693];
private _position = _transformer modelToWorldWorld _relativePos;

private _trigger = createTrigger ["EmptyDetector", _position, false];
_trigger setVariable ["Globe_TrgTrnsfr", _transformer];
_trigger setTriggerActivation ["ANY", "PRESENT", true];
_trigger setTriggerArea [1.4, 1.4, getDir _transformer, true, 4];
_trigger setTriggerStatements
[
	"
		this
	",
	"
		{
			if ((_x isKindOf 'Man') && (alive _x) && !(_x in (thisTrigger getVariable ['Globe_thisList', []]))) then
			{
				[_x, (thisTrigger getVariable 'Globe_TrgTrnsfr')] call expEden_fnc_shortArcZapTransformerFX;
				(thisTrigger getVariable 'Globe_thisList') pushBack _x;
			};
		} forEach thisList;
	",
	"
		thisTrigger setVariable ['Globe_thisList', []];
	"
];

_transformer setVariable ["Globe_TrnsfrTrg", _trigger];