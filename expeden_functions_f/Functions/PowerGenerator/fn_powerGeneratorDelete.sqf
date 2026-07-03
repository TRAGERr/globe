params ["_object"];

{
	deleteVehicle _x
}
forEach (_object getVariable ["Globe_powerGenerator_objects",[]]);