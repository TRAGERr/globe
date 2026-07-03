/*
	bin_fnc_deconShowerAnimStop
	Delete all sound sources attachted to decon shower in case it's destroyed or deleted
*/
params
[
	"_object"
];

_object call bin_fnc_deconShowerDelete;

if(!local _object)exitWith{};

_object animateSource ["Hide_Mist_Source",1,true];
_object animateSource ["Valve_Source",0];
_object setVariable ["BIN_Shower_Stop",true,true];
