
#define TYPES ["BUILDING","HOUSE","CHURCH","CHAPEL","FUELSTATION","HOSPITAL","BUNKER"]

//["[ ] %1",_this] call bis_fnc_logFormat;

private _mode 	= param [0,"",[""]];
private _module = param [1,objNull,[objNull]];

switch _mode do
{
	// Default object init
	case "init":
	{
		//get the data
		private _area = [getPosATL _module];
		_area append (_module getVariable ["objectArea",[]]);
		_area params ["_pivot","_a","_b"];

		private _radius = (_a max _b) * 1.42;
		private _objects = [];

		private _found = nearestTerrainObjects [_module, TYPES # _forEachIndex, _radius, false, true];

		{
			if !(isNil {_x getVariable "BIS_fnc_createRuin_ruin"}) exitwith {objNull};
			
			private _ruinModel = getText (configFile >> "CfgVehicles" >> typeOf _x >> "DestructionEffects" >> "Ruin1" >> "type");
			if (_ruinModel == "") exitWith {objNull};

			private _ruinParsed = _ruinModel splitString "\.";
			if (count _ruinParsed < 2) exitWith {objNull};

			//--- Create ruin
			private _ruinClass = if ((_ruinParsed # (count _ruinParsed - 1) == "p3d")) then {_ruinParsed # (count _ruinParsed - 2)} else {_ruinParsed # (count _ruinParsed - 1)};
			private _ruin = createVehicle ["Land_" + _ruinClass, position _x, [], 0, "CAN_COLLIDE"];
			_ruin setDir direction _x;
			_ruin setPosATL (_x modelToWorldVisual (boundingCenter _x vectorMultiply -1));
			_ruin setVectorDirAndUp [vectorDir _x, vectorUp _x];

			//--- Hide original object and create a link between them
			_ruin setVariable ["BIS_fnc_createRuin_object",_x];

			_x hideObjectGlobal true;
			_x allowDamage false;
			
			_module setVariable ["#ruins",_ruin];
		}
		forEach (_found inAreaArray _area);
	};

	// When some attributes were changed (including position and rotation)
	case "attributesChanged3DEN":
	{
		//get module info
		private _size = (_module get3DENAttribute "Size3") select 0;
		private _isRectangle = (_module get3DENAttribute "isRectangle") select 0;

		//exit if module is deleted during dragging; _size & _isRectangle become nil at that point
		if (isNil{_size} || {isNil{_isRectangle}}) exitWith {};

		_size params ["_a","_b"];

		private _radius = (_a max _b) * 1.42;
		private _objects = [];
		private _area = [getPos _module, _a, _b, getDir _module, _isRectangle, -1];

		private _value = (_module get3DENAttribute "#filter") select 0;

		private _flags = _value call bis_fnc_decodeFlags2;

		//get counts per category
		private _counts = _module getVariable ["#counts",[]];

		for "_i" from 0 to 3 do
		{
			private _state = _flags param [_i,0];

			//get objects in the area and category
			private _found = nearestTerrainObjects [_module, BUILDING select _i,_radius,false,true];
			_found = _found inAreaArray _area;

			//update count for given category
			_counts set [_i,count _found];

			//collect the objects
			if (_state == 1) then {_objects append _found};
		};

		//unhide previously hidden object
		{_x hideObject false;} forEach (_module getVariable ["#objects",[]]);

		//store objects that will be hidden and hide them
		_module setVariable ["#objects",_objects];
		_module setVariable ["#counts",_counts];

		//hide all objects on map
		{
			private _objects = _x getVariable ["#objects",[]];

			{_x hideObject true} forEach _objects;
		}
		forEach ((all3DENEntities # 3) select {typeOf _x == "ModuleRuinTerrainBuildings"});
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
		{deleteVehicle _x} forEach (_module getVariable ["#ruins",[]]);
	};

	// When connection to object changes (i.e., new one is added or existing one removed)
	case "connectionChanged3DEN":
	{
	};
};