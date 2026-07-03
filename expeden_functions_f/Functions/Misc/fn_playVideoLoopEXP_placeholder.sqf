/*
	Description:
		see a3\functions_f_patrol\Misc\fn_laptopPlayVideo.sqf

		just looped
*/
params["_object"];

_object setObjectTexture [0,"\a3\missions_f_exp\video\EXP_m06_v01.ogv"];

uiNameSpace setVariable ["Globe_video1",_object];
with uiNamespace do
{
	disableSerialization;
	95100 cutRsc ["RscMS_globe1","PLAIN"];

	private _scr = Globe_RscMS1 displayCtrl 95100;
	_scr ctrlSetPosition [-10,-10,0,0];
	_scr ctrlSetText "\a3\missions_f_exp\video\EXP_m06_v01.ogv";
	_scr ctrlCommit 0;
	_scr ctrlAddEventHandler 
	[
		"VideoStopped",
		{
			private _object = uiNameSpace getVariable ["Globe_video1",objNull];
			_object setObjectTexture [0,""];

			uiNameSpace setVariable ["Globe_video1",nil];
			(uiNamespace getVariable "Globe_RscMS1") closeDisplay 1;
			
			if (alive _object) then {_object call expEden_fnc_playVideoLoopEXP_placeholder}
		}
	];
};
