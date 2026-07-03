/* 
	Author: 
		Trager
		O&T Expansion Eden

	Description:
		123

*/

private _mode = param [0,"",[""]];
private _input = param [1,[],[[]]];
private _module = _input param [0,objNull,[objNull]];

switch _mode do
{
	// Default object init
	case "init":
	{
		if (is3DEN) exitWith {};
		params
		[
			"_center",
			"_object",
			"_size"
		];

		_logicCenter = createCenter sideLogic;
		_logicGroup = createGroup _logicCenter;
		_logicObject = _logicGroup createUnit ["Logic",_center, [], 0, "NONE"];


		private _source = "#particlesource" createVehicleLocal (position _logicObject);
		_source setParticleParams 
		[
		/*Sprite*/			[_object, 1, 0, 1, 0], "", // File, Ntieth, Index, Count, Loop(Bool)
		/*Type*/ 			"SpaceObject",
		/*TimmerPer*/ 		0.1,
		/*Lifetime*/ 		10, 
		/*Position*/		[0, 0, 0],
		/*MoveVelocity*/	[0, 0, 0.5],
		/*Simulation*/		0, 1.31, 1, 0, //rotationVel, weight, volume, rubbing
		/*Scale*/			[0.75, 0.75, 0.75, 0],
		/*Color*/			[[1, 1, 1, 1],[1, 1, 1, 1]],
		/*AnimSpeed*/		[1.5,0.5],
		/*randDirPeriod*/	0.01,
		/*randDirIntesity*/	0.08,
		/*onTimerScript*/ 	"",
		/*DestroyScript*/ 	"",
		/*Follow*/ 			""
		];

		_source setParticleRandom 
		[
		/*LifeTime*/ 		5, 
		/*Position*/		[10, 10, 2 ],
		/*MoveVelocity*/	[0, 0, 0],
		/*rotationVel*/ 	0,
		/*Scale*/			0,
		/*Color*/			[0, 0, 0, 0.1],
		/*randDirPeriod*/	0.01,
		/*randDirIntesity*/	0.03,
		/*Angle*/ 			0
		];

		_source setDropInterval 0.0025;

		while {isNull _logicObject} do
		{
			_logicObject say3d ["OMMosquitos", 50];
			sleep 4;
		};

		deleteVehicle _source;

		true
	};
	// When some attributes were changed (including position and rotation)
	case "attributesChanged3DEN":
	{

	};
	// When added to the world (e.g., after undoing and redoing creation)
	case "registeredToWorld3DEN":
	{

	};
	// When removed from the world (i.e., by deletion or undoing creation)
	case "unregisteredFromWorld3DEN":
	{

	};
	// When connection to object changes (i.e., new one is added or existing one removed)
	case "connectionChanged3DEN":
	{

	};
	// When object is being dragged
	case "dragged3DEN":
	{

	};
};