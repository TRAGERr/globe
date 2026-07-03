/*
	Author: Trager

	Description:
		Create a building ruin and hide the original object

	Parameter(s):
		0: OBJECT

	Returns:
	OBJECT - ruin
*/

#define MAP_TYPES_BUILDING			["BUILDING","HOUSE","CHURCH","CHAPEL","FUELSTATION","HOSPITAL","RUIN","BUNKER"]
#define MAP_TYPES_VEGETATION		["TREE","SMALL TREE","BUSH"]
#define MAP_TYPES_WALL				["WALL","FENCE"]
#define MAP_TYPES_MISC				["ROCK","ROCKS","FOREST BORDER","FOREST TRIANGLE","FOREST SQUARE","CROSS","FORTRESS","FOUNTAIN","VIEW-TOWER","LIGHTHOUSE","QUAY","HIDE","BUSSTOP","ROAD","FOREST","TRANSMITTER","STACK","TOURISM","WATERTOWER","TRACK","MAIN ROAD","POWER LINES","RAILWAY","POWERSOLAR","POWERWAVE","POWERWIND","SHIPWRECK","TRAIL"]

#define CATEGORY_COMP				[MAP_TYPES_BUILDING,MAP_TYPES_WALL,MAP_TYPES_VEGETATION,MAP_TYPES_MISC]


private _mode = param [0,"",[""]];
private _input = param [1,[],[[]]];
private _module = _input param [0,objNull,[objNull]];


		private _hidingCode = 
		{
			if !(isnil {_x getVariable "BIS_fnc_createRuin_ruin"}) exitWith {objNull};

			//--- Get ruin model and convert it to a class
			private _ruinModel = getText (configFile >> "CfgVehicles" >> typeOf _x >> "DestructionEffects" >> "Ruin1" >> "type");
			if (_ruinModel == "") exitWith {objNull};

			private _ruinParsed = _ruinModel splitString "\.";
			if (count _ruinParsed < 2) exitWith {objNull};

			//--- Create ruin
			private _ruinClass = if ((_ruinParsed # (count _ruinParsed - 1) == "p3d")) then {_ruinParsed # (count _ruinParsed - 2)} else {_ruinParsed # (count _ruinParsed - 1)};
			private _ruin = createVehicle ["Land_" + _ruinClass, position _x, [], 0, "CAN_COLLIDE"];
			_ruin setDir direction _x;
			_ruin setPos (_x modelToWorldVisual (boundingCenter _x vectorMultiply -1));
			_ruin setVectorDirAndUp [vectorDir _x, vectorUp _x];

			//--- Hide original object and create a link between them
			_ruin setVariable ["BIS_fnc_createRuin_object",_x];
			_x setVariable ["BIS_fnc_createRuin_ruin",_ruin];
			_x hideObjectGlobal true;

			_ruin
		};





switch _mode do
{
	case "init":
	{
		//get the data
		private _area = [getPos _module];
		_area append (_module getVariable ["objectArea",[]]);
		_area params ["_pivot", "_a", "_b"];

		private _radius = (_a max _b) * 1.42;

		private _found = nearestTerrainObjects [_module, CATEGORY_COMP # _forEachIndex, _radius, false, true];
		_hidingCode forEach (_found inAreaArray _area);
	};
	
	// When some attributes were changed (including position and rotation)
	case "attributesChanged3DEN":
	{
		//get module info
		private _size = (_module get3DENAttribute "Size3") # 0;
		private _isRectangle = (_module get3DENAttribute "isRectangle") # 0;

		//exit if module is deleted during dragging; _size & _isRectangle become nil at that point
		if (isNil{_size} || {isNil{_isRectangle}}) exitWith {};

		_size params ["_a","_b"];

		private _radius = (_a max _b) * 1.42;
		private _objects = [];
		private _area = [getPos _module, _a, _b, getDir _module, _isRectangle, -1];
		
		//get objects in the area and category
		private _found = nearestTerrainObjects [_module, CATEGORY_COMP # _forEachIndex, _radius, false, true];
		_hidingCode forEach (_found inAreaArray _area);

		_objects append _found;
		

		//unhide previously hidden object
		{_x hideObject false} forEach (_module getVariable ["#objects",[]]);

		//store objects that will be hidden and hide them
		_module setVariable ["#objects", _objects];

		//hide all objects on map
		{
			private _objects = _x getVariable ["#objects",[]];

			{_x hideObject true} forEach _objects;
		}
		forEach ((all3DENEntities # 3) # {typeOf _x == "ModuleRuinTerrainBuildings_Globe"});
	};

	// When added to the world (e.g., after undoing and redoing creation)
	case "registeredToWorld3DEN":
	{
	};
	
	// When removed from the world (i.e., by deletion or undoing creation)
	case "unregisteredFromWorld3DEN":
	{
		//module is removed, show all hidden objects
		{_x hideObject false} forEach (_module getVariable ["#objects",[]]);
	};

	// When connection to object changes (i.e., new one is added or existing one removed)
	case "connectionChanged3DEN":
	{
	};
};