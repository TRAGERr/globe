/*--------------------------------------------------------------------------------------------------

	3DEN MOD: Hiddes closest terrain object.

--------------------------------------------------------------------------------------------------*/
#define MAP_TYPES_BUILDING			["BUILDING","HOUSE","CHURCH","CHAPEL","FUELSTATION","HOSPITAL","RUIN","BUNKER"]
#define MAP_TYPES_VEGETATION		["TREE","SMALL TREE","BUSH"]
#define MAP_TYPES_WALL				["WALL","FENCE"]
#define MAP_TYPES_MISC				["ROCK","ROCKS","FOREST BORDER","FOREST TRIANGLE","FOREST SQUARE","CROSS","FORTRESS","FOUNTAIN","VIEW-TOWER","LIGHTHOUSE","QUAY","HIDE","BUSSTOP","ROAD","FOREST","TRANSMITTER","STACK","TOURISM","WATERTOWER","TRACK","MAIN ROAD","POWER LINES","RAILWAY","POWERSOLAR","POWERWAVE","POWERWIND","SHIPWRECK","TRAIL"]

#define CATEGORY_COMP				[MAP_TYPES_BUILDING,MAP_TYPES_WALL,MAP_TYPES_VEGETATION,MAP_TYPES_MISC]

//["[ ] %1",_this] call bis_fnc_logFormat;

private _mode = param [0,"",[""]];
private _input = param [1,[],[[]]];
private _module = _input param [0,objNull,[objNull]];

switch _mode do
{
	// Default object init
	case "init":
	{
		if (is3DEN) exitWith {};

		//local hiding is applicable only in MP where checkbox is ticked
		private _hideLocaly = (_module getVariable ["#hideLocally",false]) && isMultiplayer;

		//filter flags
		private _value = _module getVariable ["#filter",0];

		if (_hideLocaly) then
		{
			//hide locally on each client; cannot delete the module
			["hide",[_module,_hideLocaly,_value]] remoteExecCall ["bis_fnc_moduleHideTerrainObjects",0,true];
		}
		else
		{
			//hide globally on server
			["hide",[_module,_hideLocaly,_value]] call bis_fnc_moduleHideTerrainObjects;

			//delete module
			deleteVehicle _module;
		};
	};
	//[_mode,[_module,_hideLocaly]] call bis_fnc_moduleHideTerrainObjects;
	case "hide":
	{
		//local hiding is applicable only in MP where checkbox is ticked
		private _hideLocaly = _input param [1,false,[true]];
		private _value = _input param [2,0,[123]];

		//get the data
		private _area = [getPos _module];
		_area append (_module getVariable ["objectarea",[]]);
		_area params ["_pivot","_a","_b"];

		private _radius = (_a max _b) * 1.42;
		private _objects = [];

		//get objects to hide
		private _flags = _value call bis_fnc_decodeFlags2;

		//prepare hiding code
		private _hidingCode = switch (true) do
		{
			case (_hideLocaly && isServer):
			{
				{_x hideObject true;_x allowDamage false;};
			};
			case (_hideLocaly && !isServer):
			{
				{_x hideObject true;};
			};
			default
			{
				{_x hideObjectGlobal true;_x allowDamage false;};
			};
		};

		{
			if (_x == 1) then
			{
				private _found = nearestTerrainObjects [_module,CATEGORY_COMP select _forEachIndex,_radius,false,true];

				_hidingCode forEach (_found inAreaArray _area);
			};
		}
		forEach _flags;
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
			private _found = nearestTerrainObjects [_module,CATEGORY_COMP select _i,_radius,false,true];
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
		forEach ((all3DENEntities select 3) select {typeOf _x == "ModuleHideTerrainObjects_F"});
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

	case "objectTypeFilter_attributeLoad":
	{
		private _ctrlAttribute = _input param [1,controlNull,[controlNull]];
		private _value = _input param [2,1,[123]];

		private _ctrlCheckboxes = _ctrlAttribute controlsGroupCtrl 100;
		private _flags = _value call bis_fnc_decodeFlags2;

		for "_i" from 0 to 3 do
		{
			private _state= _flags param [_i,0];

			if (_state == 1) then
			{
				private _ctrlCheckbox = _ctrlCheckboxes controlsGroupCtrl (101+_i);
				_ctrlCheckbox cbSetChecked true;
			};

			private _count = (_module getVariable ["#counts",0]) select _i;

			if (_count > 0) then
			{
				private _ctrlText = _ctrlCheckboxes controlsGroupCtrl (121+_i);
				_ctrlText ctrlSetText str _count;
				_ctrlText ctrlSetTextColor [1, 0.56, 0, 1];
				_ctrlText ctrlSetTooltip format[localize "STR_a3_to_hideTerrainObjects5",_count];
			};
		};
	};
	case "objectTypeFilter_attributeSave":
	{
		private _ctrlAttribute = _input param [1,controlNull,[controlNull]];
		private _ctrlCheckboxes = _ctrlAttribute controlsGroupCtrl 100;
		private _flags = [];
		private _value = 0;

		for "_idc" from 101 to 104 do
		{
			if (cbChecked(_ctrlCheckboxes controlsGroupCtrl _idc)) then
			{
				_flags pushBack 1;
			}
			else
			{
				_flags pushBack 0;
			};
		};

		_value = _flags call bis_fnc_encodeFlags2;

		_value
	};
};