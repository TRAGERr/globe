if (!isServer) exitWith {};
params["_roadSignOld"];
if (!(typeOf _roadSignOld in ["RoadSign_01_speedLimit80","Land_SignRestrict_01_speedLimit_80_F"])) exitWith {false};
			
private _roadSignOldPos = getPosWorld 		_roadSignOld;
private _roadSignOldVar = vehicleVarName 	_roadSignOld;
private _roadSignOldDmg = damage 			_roadSignOld;
private _roadSignOldDir = vectorDir 		_roadSignOld;
private _roadSignOldUp	= vectorUp 			_roadSignOld;

deleteVehicle _roadSignOld;

private _roadSignNew = createVehicle 
[
	if (typeOf _roadSignOld isEqualTo "RoadSign_01_speedLimit80")then
	{
		"RoadSign_01_speedLimit80_damaged"
	}
	else
	{
		"Land_SignRestrict_01_speedLimit_80_d_F"
	},
	_roadSignOldPos,
	[],
	0,
	"CAN_COLLIDE"
];
_roadSignNew setPosWorld _roadSignOldPos;
_roadSignNew setVectorDirAndUp [_roadSignOldDir, _roadSignOldUp];
_roadSignNew setDamage _roadSignOldDmg;
if (_roadSignOldVar != "") then 
{
	missionNameSpace setVariable [_roadSignOldVar,_roadSignNew,isServer];
};
if (dynamicSimulationEnabled _roadSignOld) then 
{
	_roadSignNew enableDynamicSimulation true
};

true