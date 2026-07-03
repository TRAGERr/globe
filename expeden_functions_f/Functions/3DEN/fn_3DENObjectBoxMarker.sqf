/*
	Author: 
		Trager

	Description:
		ы

	Parameter(s):
		0 (OBJECT): Object

	Returns:
		nothing

*/
params[["_object",objNull,[objNull]]];
if (isNull _object || !isServer) exitWith {};

if 
(
	(_object isKindOf 'StaticWeapon' || _object isKindOf 'Runway_01_Base' || _object isKindOf 'HeliH' || _object isKindOf 'GalleryLabel_01_base_F' || _object isKindOf 'Man' || _object isKindOf 'Car' || _object isKindOf 'Air' || _object isKindOf 'WeaponHolder' || _object isKindOf 'Items_base_F' || _object isKindOf 'Logic' || _object isKindOf 'Helper_Base_F' || _object isKindOf 'Surface_10m_base' || _object isKindOf 'Graffiti_base_F')
	||
	((getText (configFile >> "CfgVehicles" >> typeOf _object >> "editorSubcategory")) in ["EdSubcat_Graffiti","EdSubcat_Aquatic","EdSubcat_Clutter","EdSubcat_Craters"])
	||
	((getText (configFile >> "CfgVehicles" >> typeOf _object >> "vehicleClass")) in ["Small_items","Garbage",'Helpers'])
	||
	(_object get3DENAttribute "HideObject" isEqualTo [true])
	||
	"A3\Weapons_F\empty" in (getText (configFile >> "CfgVehicles" >> typeOf _object >> "model"))
)
exitWith
{
	["“O&amp;T Expansion Eden”: Unsupported and Hidden object was not marked!<br/>(Units, Vehicles, Small Items, Graffiti, Helpers, etc.)", 1, 6, true, 0.1] call BIS_fnc_3DENNotification;
	_object set3DENAttribute ["ObjectBoxMarker", false];
	_object clear3DENAttribute "ObjectBoxMarker";
};

if (_object get3DENAttribute "isLocalOnly" isEqualTo [true] && is3DEN) then
{
	_object set3DENAttribute ["isLocalOnly", false];
};

switch (true) do
{

	case (_object isKindOf 'Cargo_base_F'):
	{
		_thisMarker = [_object, true, "ColorCargo", "SolidFull", 1] call BIS_fnc_boundingBoxMarker;
		
	};

	case (_object isKindOf 'HBarrier_base_F'):
	{
		_thisMarker = [_object, true, "ColorHBarrier", "SolidFull", 1] call BIS_fnc_boundingBoxMarker;
	};

	case (_object isKindOf 'Land_TentHangar_V1_F' || _object isKindOf 'Land_TentHangar_V1_ruins_F' || _object isKindOf 'Land_Hangar_F' || _object isKindOf 'Airport_02_hangar_left' || _object isKindOf 'Airport_02_hangar_right' || _object isKindOf 'Land_Airport_01_hangar_F'):
	{
		_thisMarker = [_object, true, "ColorHungar", "SolidFull", 1] call BIS_fnc_boundingBoxMarker;
	};

	case (_object isKindOf 'Road_Highway_Base'):
	{
		_thisMarker = [_object, true, "ColorHighway", "SolidFull", 1] call BIS_fnc_boundingBoxMarker;	
	};

	case (_object isKindOf 'Road_City_Base' || _object isKindOf 'Road_Main_Base'):
	{
		_thisMarker = [_object, true, "ColorMainCity", "SolidFull", 1] call BIS_fnc_boundingBoxMarker;	
	};

	case (_object isKindOf 'Road_Rural_Base' || _object isKindOf 'Road_Dirt_Base'):
	{
		_thisMarker = [_object, true, "ColorDirtRural", "SolidFull", 1] call BIS_fnc_boundingBoxMarker;
	};

	case (_object isKindOf 'Land_cargo_addon02_V1_F'):
	{
		_thisMarker = [_object, true, "ColorSlumBlue", "SolidFull", 1] call BIS_fnc_boundingBoxMarker;
	};

	case (_object isKindOf 'Land_cargo_addon02_V2_F'):
	{
		_thisMarker = [_object, true, "ColorSlumBlack", "SolidFull", 1] call BIS_fnc_boundingBoxMarker;
	};

	case (_object isKindOf 'Land_fs_feed_F' || _object isKindOf 'Land_FuelStation_Feed_F' || _object isKindOf 'Land_FuelStation_03_pump_F' || _object isKindOf 'Land_FuelStation_01_pump_malevil_F' || _object isKindOf 'Land_FuelStation_01_pump_F' || _object isKindOf 'Land_FuelStation_02_pump_F'):
	{
		_thisMarker = createMarker 
		[
			format ["fuelstationMarker_%1", _object call BIS_fnc_netId],
			_object
		];
		_thisMarker setMarkerType "loc_Fuelstation";
	};

	case (_object isKindOf 'Land_Hedge_01_s_2m_F' || _object isKindOf 'Land_Hedge_01_s_4m_F'):
	{
		_thisMarker = [_object, true, "ColorHedge", "SolidFull", 1] call BIS_fnc_boundingBoxMarker;
	};

	case ((getText (configFile >> "CfgVehicles" >> typeOf _object >> "editorSubcategory")) isEqualTo "EdSubcat_Tree"):
	{
		_thisMarker = createMarker 
		[
			format ["treeMarker_%1", _object call BIS_fnc_netId],
			_object
		];
		_thisMarker setMarkerType "loc_Tree";
	};

	case ((getText (configFile >> "CfgVehicles" >> typeOf _object >> "editorSubcategory")) isEqualTo "EdSubcat_Bush"):
	{
		_thisMarker = createMarker 
		[
			format ["bushMarker_%1", _object call BIS_fnc_netId],
			_object
		];
		_thisMarker setMarkerType "loc_Bush";
		_thisMarker setMarkerSize [4,4];
	};

	case (typeOf _object in ["Land_ReservoirTower_ruins_F","Land_WaterTower_02_ruins_F","Land_WaterTower_01_ruins_F","Land_ReservoirTower_F","Land_WaterTower_02_F","Land_WaterTower_01_F","Land_SM_01_reservoirTower_F"]):
	{
		_thisMarker = createMarker 
		[
			format ["WaterTowerMarker_%1", _object call BIS_fnc_netId],
			_object
		];
		_thisMarker setMarkerType "loc_WaterTower";
	};

	case (_object isKindOf 'Land_Lighthouse_03_base_F' || (typeOf _object in ["Land_LightHouse_F","Land_LightHouse_ruins_F","Land_Lighthouse_small_ruins_F","Land_Lighthouse_small_F"])):
	{
		_thisMarker = createMarker 
		[
			format ["WaterTowerMarker_%1", _object call BIS_fnc_netId],
			_object
		];
		_thisMarker setMarkerType "loc_WaterTower";
	};

	case (_object isKindOf 'Land_Chapel_02_base_F' || _object isKindOf 'Land_Chapel_02_base_ruins_F' || (typeOf _object in ["Land_Chapel_01_F","Land_Chapel_Small_V1_F","Land_Chapel_Small_V2_F","Land_Chapel_Small_V1_ruins_F","Land_Chapel_Small_V2_ruins_F"])):
	{
		_thisMarker = createMarker 
		[
			format ["ChapelMarker_%1", _object call BIS_fnc_netId],
			_object
		];
		_thisMarker setMarkerType "loc_Chapel";
	};

	case (_object isKindOf 'Church_F' || (typeOf _object in ["Land_Chapel_V1_ruins_F","Land_Chapel_V2_ruins_F","Land_OrthodoxChurch_03_ruins_F","Land_ChurchRuin_01_F","Land_Church_01_ruins_F","Land_Church_03_ruins_F","Land_Church_02_ruins_F"])):
	{
		_churchBox = [_object, true, "ColorGrey", "SolidFull", 1] call BIS_fnc_boundingBoxMarker;
		_thisMarker = createMarker 
		[
			format ["ChurchMarker_%1", _object call BIS_fnc_netId],
			_object
		];
		_thisMarker setMarkerType "loc_Church";
		_thisMarker setMarkerDrawPriority (markerDrawPriority _churchBox + 0.2);
	};

	case (_object isKindOf 'Land_TTowerBig_1_F' || _object isKindOf 'Land_TTowerBig_2_F' || (typeOf _object in ["Land_Communication_F","Land_TTowerSmall_1_F","Land_TTowerSmall_2_F","Land_TTowerBig_2_ruins_F","Land_TTowerBig_1_ruins_F","Land_Radar_F","Land_Radar_Small_F","Land_MobileRadar_01_radar_F","Land_MobileRadar_01_radar_ruins_F","Land_Radar_ruins_F","Land_Radar_Small_ruins_F"])):
	{
		_thisMarker = createMarker 
		[
			format ["TransmitterMarker_%1", _object call BIS_fnc_netId],
			_object
		];
		_thisMarker setMarkerType "loc_Transmitter";
	};

	case (typeOf _object in ["Land_BellTower_02_V1_ruins_F","Land_BellTower_02_V2_ruins_F","Land_BellTower_02_V1_F","Land_BellTower_02_V2_F","Land_BellTower_01_V2_F","Land_BellTower_01_V1_F"]):
	{
		_thisMarker = createMarker 
		[
			format ["CrossMarker_%1", _object call BIS_fnc_netId],
			_object
		];
		_thisMarker setMarkerType "loc_Cross";
	};

	case (typeOf _object in ["Land_StoneWell_01_F","Land_ConcreteWell_02_F","Land_ConcreteWell_01_F","GH_Fountain_F"]):
	{
		_thisMarker = createMarker 
		[
			format ["FountainMarker_%1", _object call BIS_fnc_netId],
			_object
		];
		_thisMarker setMarkerType "loc_Fountain";
	};

	case (typeOf _object in ["Land_Hotel_01_F","Land_Hotel_02_F","GH_MainBuilding_middle"]):
	{
		_thisMarker = createMarker 
		[
			format ["HotelMarker_%1", _object call BIS_fnc_netId],
			_object
		];
		_thisMarker setMarkerType "loc_Tourism";
	};

	case (typeOf _object in ["Land_spp_Tower_F","Land_spp_Tower_ruins_F"]):
	{
		_thisMarker = createMarker 
		[
			format ["PowerSolarMarker_%1", _object call BIS_fnc_netId],
			_object
		];
		_thisMarker setMarkerType "loc_PowerSolar";
	};

	case (_object isKindOf 'Land_wpp_Turbine_V1_F' || _object isKindOf 'Land_wpp_Turbine_V2_F'):
	{
		_thisMarker = createMarker 
		[
			format ["PowerWindMarker_%1", _object call BIS_fnc_netId],
			_object
		];
		_thisMarker setMarkerType "loc_PowerWind";
	};

	case (typeOf _object in ["Land_WavePowerPlant_F","Land_WavePowerPlantBroken_F"]):
	{
		_thisMarker = createMarker 
		[
			format ["PowerWaveMarker_%1", _object call BIS_fnc_netId],
			_object
		];
		_thisMarker setMarkerType "loc_PowerWave";
	};

	case (_object isKindOf 'Rocks_base_F'):
	{
		_thisMarker = createMarker 
		[
			format ["RockMarker_%1", _object call BIS_fnc_netId],
			_object
		];
		_thisMarker setMarkerType "loc_Rock";
	};

	case (typeOf _object in ["Land_WoodenPlanks_01_F","Land_WoodenPlanks_01_messy_F"]):
	{
		_thisMarker = [_object, true, "ColorWoodenPlankKauri", "SolidFull", 1] call BIS_fnc_boundingBoxMarker;
	};

	case (typeOf _object in ["Land_WoodenPlanks_01_pine_F","Land_WoodenPlanks_01_messy_pine_F"]):
	{
		_thisMarker = [_object, true, "ColorWoodenPlankPine", "SolidFull", 1] call BIS_fnc_boundingBoxMarker;
	};

	case (_object isKindOf 'Wall_F' && (getText (configFile >> "CfgVehicles" >> typeOf _object >> "editorSubcategory")) in ["EdSubcat_Industrial","EdSubcat_Obstacles"]):
	{
		_thisMarker = [_object, true, "ColorWallCityOrIndustrial", "SolidFull", 1] call BIS_fnc_boundingBoxMarker;
	};

	case (_object isKindOf 'Wall_F' && (getText (configFile >> "CfgVehicles" >> typeOf _object >> "editorSubcategory")) isEqualTo "EdSubcat_Residential_Village"):
	{
		_thisMarker = [_object, true, "ColorWallVillage", "SolidFull", 1] call BIS_fnc_boundingBoxMarker;
	};

	case (typeOf _object in ["Land_Shed_01_F","Land_Shed_04_F","Land_Shed_06_F","Land_Shed_02_F","Land_Shed_03_F","Land_Shed_07_F","Land_Shed_05_F","Land_Shed_04_ruins_F","Land_Shed_01_ruins_F","Land_Shed_06_ruins_F","Land_Shed_02_ruins_F","Land_Shed_03_ruins_F","Land_Shed_07_ruins_F","Land_Shed_05_ruins_F"]):
	{
		_thisMarker = [_object, true, "ColorShedTanoa", "SolidFull", 1] call BIS_fnc_boundingBoxMarker;
	};

	case (_object isKindOf 'Land_Slum_House01_F'|| typeOf _object in ["Land_cargo_addon01_V1_F","Land_cargo_addon01_V2_F","Land_Slum_House03_ruins_F","Land_Slum_House01_ruins_F","Land_Slum_House02_ruins_F"]):
	{
		_thisMarker = [_object, true, "ColorShed", "SolidFull", 1] call BIS_fnc_boundingBoxMarker;
	};


	default
	{
		_thisMarker = [_object, true, "ColorGrey", "SolidFull", 1] call BIS_fnc_boundingBoxMarker;
	};

};