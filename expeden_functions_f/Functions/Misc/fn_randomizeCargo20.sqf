/*
	Author: 
		Trager

	Description:
		this is a modified version of 
			a3\missions_f_exp\campaign\missions\exp_m01.tanoa\functions\fn_exp_m01_radiomusic.sqf
		
		now all tracks longer than --20-- 17.48 seconds will be played
		17.48 sec need for skip dialogs in global configuration

	Parameter(s):
		0 (OBJECT): Object / Radio

	Returns:
		true on complete

*/
if (!isServer) exitWith {};

params["_objectOld"];

private _objectOldPos 		= getPosWorld 		_objectOld;
private _objectOldVarname 	= vehicleVarName 	_objectOld;
private _objectDoor1Anim 	= _objectOld animationSourcePhase "Door_1_sound_source";
private _objectDoor2Anim 	= _objectOld animationSourcePhase "Door_2_sound_source";

if (isSimpleObject _objectOld) then 
{
		// _objectOld hideObjectGlobal true;
		deleteVehicle _objectOld;
		private _objectNew = createSimpleObject 
		[
			"a3\structures_f\ind\cargo\Cargo20_" + selectRandom
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
		_objectNew setVectorDirAndUp [vectorDir _objectOld, vectorUp _objectOld];

		//>>> Handle doors open
		if (_objectDoor1Anim != 0 || _objectDoor2Anim != 0) then 
		{
			_objectNew animateSource ["Door_1_sound_source", _objectDoor1Anim, true];
			_objectNew animateSource ["Door_2_sound_source", _objectDoor2Anim, true];
		};

	}
	else
	{

		deleteVehicle _objectOld;
		private _objectNew = createVehicle 
		[
			"Land_Cargo20_" + selectRandom
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

		//>>> Export vehicle variable name
		if (_objectOldVarname != "") then 
		{
			missionNameSpace setVariable [_objectOldVarname, _objectNew, true];
			_objectNew setVehicleVarname _objectOldVarname;
			publicVariable _objectOldVarname;
		};

		//>>> Handle doors open
		if (_objectDoor1Anim != 0 || _objectDoor2Anim != 0) then 
		{
			_objectNew animateSource ["Door_1_sound_source", _objectDoor1Anim, true];
			_objectNew animateSource ["Door_2_sound_source", _objectDoor2Anim, true];
		};

		//>>> (Un)Lock door 1
		_objectNew setVariable
		[
			"BIS_Disabled_Door_1",
			// (_objectOld getVariable ["BIS_Disabled_Door_1",1]),
			(_objectOld getVariable "BIS_Disabled_Door_1"),
			true
		];

		//>>> (Un)Lock door 2
		_objectNew setVariable
		[
			"BIS_Disabled_Door_2",
			// (_objectOld getVariable ["BIS_Disabled_Door_2",1]),
			(_objectOld getVariable "BIS_Disabled_Door_2"),
			true
		];

		if (!(isDamageAllowed _objectOld)) then {_objectNew allowDamage false};
		if (!(simulationEnabled _objectOld)) then {_objectNew enableSimulationGlobal false};
		if (dynamicSimulationEnabled _objectOld) then {_objectNew enableDynamicSimulation true};
};

if (isSimpleObject _objectNew) then {true} else {_objectNew}