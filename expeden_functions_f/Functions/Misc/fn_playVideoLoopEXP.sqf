/*
	Description:
		see a3\functions_f_patrol\Misc\fn_laptopPlayVideo.sqf

		just looped
*/
params["_object"];

_object setObjectTexture [0,"\a3\missions_f_exp\video\EXP_m06_vIntel.ogv"];

uiNameSpace setVariable ["Globe_video0",_object];
with uiNamespace do
{
	disableSerialization;
	65100 cutRsc ["RscMS_globe0","PLAIN"];

	private _scr = Globe_RscMS0 displayCtrl 65100;
	_scr ctrlSetPosition [-10,-10,0,0];
	_scr ctrlSetText "\a3\missions_f_exp\video\EXP_m06_vIntel.ogv";
	_scr ctrlCommit 0;
	_scr ctrlAddEventHandler 
	[
		"VideoStopped",
		{
			private _object = uiNameSpace getVariable ["Globe_video0",objNull];
			_object setObjectTexture [0,""];

			uiNameSpace setVariable ["Globe_video0",nil];
			(uiNamespace getVariable "Globe_RscMS0") closeDisplay 1;
			
			if (alive _object) then {_object call expEden_fnc_playVideoLoopEXP}
		}
	];
};
