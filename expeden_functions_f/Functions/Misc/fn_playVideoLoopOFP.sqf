/*
	Description:
		see a3\functions_f_patrol\Misc\fn_laptopPlayVideo.sqf

		just looped
*/
params["_object"];

_object setObjectTexture [0,"\a3\Props_F_Argo\Items\Electronics\data\OldLaptop_Video.ogv"];
_object say3d ["OldLaptop_VideoSound", 20, 1];

uiNameSpace setVariable ["Globe_video2",_object];
with uiNamespace do
{
	disableSerialization;
	125100 cutRsc ["RscMS_globe2","PLAIN"];

	private _scr = Globe_RscMS2 displayCtrl 125100;
	_scr ctrlSetPosition [-10,-10,0,0];
	_scr ctrlSetText "\a3\Props_F_Argo\Items\Electronics\data\OldLaptop_Video.ogv";
	_scr ctrlCommit 0;
	_scr ctrlAddEventHandler 
	[
		"VideoStopped",
		{
			private _object = uiNameSpace getVariable ["Globe_video2",objNull];
			_object setObjectTexture [0,""];

			uiNameSpace setVariable ["Globe_video2",nil];
			(uiNamespace getVariable "Globe_RscMS2") closeDisplay 1;
			
			if (alive _object) then {_object call expEden_fnc_playVideoLoopOFP}
		}
	];
};
