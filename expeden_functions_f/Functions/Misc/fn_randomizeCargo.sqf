/*
	Author: 
		Trager

	Description:
		deletes old model and creates new with random color
		working with models because this cargos doesn't have hiden selections

	Parameter(s):
		0 (OBJECT): Old object

	Returns:
		n

*/
if (!isServer) exitWith {};
params["_objectOld"];

private ["_class"];
switch (true) do 
{

	case ('Land_Cargo10' in typeOf _objectOld):
	{
		_class = "10_"
	};

	case ('Land_Cargo20' in typeOf _objectOld):
	{
		_class = "20_"
	};

	case ('Land_Cargo40' in typeOf _objectOld):
	{
		_class = "40_"
	};

};

private _objectOldPos 		= getPosWorld 		_objectOld;
private _objectOldVarname 	= vehicleVarName 	_objectOld;
private _objectDoor1Anim 	= _objectOld animationSourcePhase "Door_1_sound_source";
private _objectDoor2Anim 	= _objectOld animationSourcePhase "Door_2_sound_source";

params["_objectNew"];
if (isSimpleObject _objectOld) then 
{
		// _objectOld hideObjectGlobal true;		
		deleteVehicle _objectOld;
		switch (true) do 
		{
			case (_class in ["20_","40_"]):
			{
				_objectNew = createSimpleObject 
				[
					"a3\structures_f\ind\cargo\Cargo" + _class + selectRandom
					[
						"blue_F.p3d",
						"brick_red_F.p3d",
						"cyan_F.p3d",
						"grey_F.p3d",
						"light_blue_F.p3d",
						"light_green_F.p3d",
						"military_green_F.p3d",
						"orange_F.p3d",
						"red_F.p3d",
						"sand_F.p3d",
						"yellow_F.p3d"
					],
					_objectOldPos
				];
			};
			case (_class isEqualTo "10_"): //>>> Helicopters DLC
			{
				_objectNew = createSimpleObject 
				[
					"\a3\structures_f_heli\ind\cargo\Cargo" + _class + selectRandom
					[
						"blue_F.p3d",
						"brick_red_F.p3d",
						"cyan_F.p3d",
						"grey_F.p3d",
						"light_blue_F.p3d",
						"light_green_F.p3d",
						"military_green_F.p3d",
						"orange_F.p3d",
						"red_F.p3d",
						"sand_F.p3d",
						"yellow_F.p3d"
					],
					_objectOldPos
				];
			};
		};
		_objectNew setVectorDirAndUp [vectorDir _objectOld, vectorUp _objectOld];

		//>>> Handle doors open
		_objectNew animateSource ["Door_1_sound_source", _objectDoor1Anim, true];
		_objectNew animateSource ["Door_2_sound_source", _objectDoor2Anim, true];

	}
	else
	{

		deleteVehicle _objectOld;
		_objectNew = createVehicle 
		[
			"Land_Cargo" + _class + selectRandom
			[
				"blue_F",
				"brick_red_F",
				"cyan_F",
				"grey_F",
				"light_blue_F",
				"light_green_F",
				"military_green_F",
				"orange_F",
				"red_F",
				"sand_F",
				"white_F",
				"yellow_F"
			],
			_objectOldPos,
			[],
			0,
			"CAN_COLLIDE"
		];
		_objectNew setPosWorld _objectOldPos;
		_objectNew setVectorDirAndUp [vectorDir _objectOld, vectorUp _objectOld];

		//>>> Export variable
		if (_objectOldVarname != "") then 
		{
			missionNameSpace setVariable [_objectOldVarname, _objectNew, true];
			_objectNew setVehicleVarname _objectOldVarname;
			publicVariable _objectOldVarname;
		};

		_objectNew animateSource ["Door_1_sound_source", _objectDoor1Anim, true];
		_objectNew animateSource ["Door_2_sound_source", _objectDoor2Anim, true];

		//>>> (Un)Lock door 1
		_objectNew setVariable
		[
			"BIS_Disabled_Door_1",
			_objectOld getVariable "BIS_Disabled_Door_1",
			true
		];
		//>>> (Un)Lock door 2
		_objectNew setVariable
		[
			"BIS_Disabled_Door_2",
			_objectOld getVariable "BIS_Disabled_Door_2",
			true
		];

		if (!(isDamageAllowed _objectOld)) then {_objectNew allowDamage false};
		if (!(simulationEnabled _objectOld)) then {_objectNew enableSimulationGlobal false};
		if (dynamicSimulationEnabled _objectOld) then {_objectNew enableDynamicSimulation true};
};