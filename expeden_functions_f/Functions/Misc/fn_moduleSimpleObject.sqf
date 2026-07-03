params
[
	["_mode","",[""]],
	["_input",[],[[]]]
];

switch _mode do 
{
	case "init": 
	{
		if (!isServer) exitWith {};
		_input params 
		[
			["_logic",objnull,[objnull]],
			["_isActivated",true,[true]],
			["_isCuratorPlaced",false,[true]]
		];
		_model = _logic getVariable "Model";
		if (_model != "") then 
		{
			params["_obj"];
			switch true do 
			{

				case (isClass (configFile >> "CfgVehicles" >> _model)):
				{
					private _modelPath =  (getText (configfile >> "CfgVehicles" >> _model >> "model"));
					_obj = createSimpleObject [_modelPath, getPosASL _logic];
				};

				case (isClass (configFile >> "CfgWeapons" >> _model)):
				{
					private _modelPath =  (getText (configfile >> "CfgWeapons" >> _model >> "model"));
					_obj = createSimpleObject [_modelPath, getPosASL _logic];
				};

				case (isClass (configFile >> "CfgAmmo" >> _model)):
				{
					private _modelPath =  (getText (configfile >> "CfgAmmo" >> _model >> "model"));
					_obj = createSimpleObject [_modelPath, getPosASL _logic];
				};

				default
				{
					_obj = createSimpleObject [_model, getPosASL _logic];
				};
			};

			_obj attachTo [_logic,[0,0,0]];
			_logic setVariable ["obj",_obj];
			
			private _var = vehicleVarName _logic;
			if (_var != "") then 
			{
				missionNameSpace setVariable [_var,_obj,true];
				_obj setVehicleVarname _var;
				publicVariable _var;
			};
			
			private _init = _logic getVariable "Init";
			if (_init != "") then 
			{
				_obj call compile _init;
			};
			deleteVehicle _logic;
		};
	};
	case "attributesChanged3DEN";
	case "registeredToWorld3DEN": 
	{
		_input params 
		[
			["_logic",objnull,[objnull]]
		];
		_model = (_logic get3DENAttribute "ModuleSimpleObject_F_Model") param [0,""];
		_modelCurrent = _logic getVariable ["BIS_model",""];
		_obj = _logic getVariable ["BIS_object",objnull];
		if (_model != "" && _model != _modelCurrent) then 
		{
			deleteVehicle _obj;
			_obj = createSimpleObject [_model, getPosASL _logic];
			// _obj = [[_model, getPosASL _logic, true]] remoteExecCall ["createSimpleObject", 0, true];
			_logic setVariable ["BIS_object",_obj];
			_logic setVariable ["BIS_model",_model];
		};
		_obj attachTo [_logic,[0,0,0]];
	};
	case "unregisteredFromWorld3DEN": 
	{
		_input params 
		[
			["_logic",objnull,[objnull]]
		];
		deleteVehicle (_logic getVariable ["BIS_object",objnull]);
	};
	/*
	case "dragged3DEN":
	{
		_input params
		[
			["_logic",objnull,[objnull]]
		];
	};
	*/
};