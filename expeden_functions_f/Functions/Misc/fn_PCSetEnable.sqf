params["_object"];
if (isNull _object) exitWith {};
if ((!canSuspend) || (!isServer)) exitWith {_object remoteExec ['expEden_fnc_PCSetEnable',2]};

_object setVariable ['Globe_actionShow',false,isServer];
[_object, ["zeroing_knob_tick_plastic",5,1,true]] remoteExecCall ["say3D",0];

sleep 1;

[_object, ["OMComputerReboot",25,1,true]] remoteExecCall ["say3D",0];

sleep 9;

[_object, ["ComputerCriticalBeep",8,1,true]] remoteExecCall ["say3D",0];
[_object, ["zeroing_knob_tick_metal",5,1,true]] remoteExecCall ["say3D",0];

sleep 1;

_object setVariable ['Globe_actionShow',true,isServer];