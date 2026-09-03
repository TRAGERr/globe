/*
	Author: 
		Trager

	Description:
		Checks for show/hide this option in object atributes

	Parameter(s):
		0 (OBJECT): Object

	Returns:
		nothing

*/
params[["_object",objNull,[objNull]]];
if (isNull _object) exitWith {};

if 
(
	(
		   _object isKindOf 'StaticWeapon'
		|| _object isKindOf 'Runway_01_Base'
		|| _object isKindOf 'HeliH'
		|| _object isKindOf 'GalleryLabel_01_base_F'
		|| _object isKindOf 'Man'
		|| _object isKindOf 'Car'
		|| _object isKindOf 'Air'
		|| _object isKindOf 'WeaponHolder'
		|| _object isKindOf 'Items_base_F'
		|| _object isKindOf 'Logic'
		|| _object isKindOf 'Helper_Base_F'
		|| _object isKindOf 'Surface_10m_base' 
		|| _object isKindOf 'Graffiti_base_F'
	)
	|| ((getText (configFile >> "CfgVehicles" >> typeOf _object >> "editorSubcategory")) in ["EdSubcat_Graffiti","EdSubcat_Aquatic","EdSubcat_Clutter","EdSubcat_Craters"])
	|| ((getText (configFile >> "CfgVehicles" >> typeOf _object >> "vehicleClass")) in ["Small_items","Garbage",'Helpers'])
	|| "A3\Weapons_F\empty" in (getText (configFile >> "CfgVehicles" >> typeOf _object >> "model"))
)
exitWith
{
	false
};

true