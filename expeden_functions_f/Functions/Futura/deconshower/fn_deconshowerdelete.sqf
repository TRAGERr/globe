/*
	bin_fnc_deconShowerDelete
	Delete all sound sources attachted to decon shower in case it's destroyed or deleted
*/
params
[
	"_object"
];

{
	deleteVehicle _x;
}foreach (_object getVariable ["bin_deconShower_objects",[]]);