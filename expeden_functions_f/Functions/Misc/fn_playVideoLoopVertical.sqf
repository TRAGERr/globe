params
[
	"_object",
	"_index",
	"_selection"
];

private ["_type","_rsc","_video","_source"];
_type = switch _index do
{
	case 3:
	{
		"a3\ui_f_aow\video\spotlight_aow.ogv"
	};
	case 4:
	{
		"a3\ui_f_aow\video\spotlight_future.ogv"
	};
	case 5:
	{
		"a3\data_f_aow\video\preview_aow.ogv"
	};
	case 6:
	{
		"a3\ui_f_enoch\video\spotlight_b.ogv"
	};
	case 7:
	{
		"a3\ui_f_enoch\video\spotlight_a.ogv"
	};
	case 8:
	{
		"a3\data_f_enoch\video\preview_enoch.ogv"
	};
	case 9:
	{
		"a3\ui_f_tank\video\spotlight_a.ogv"
	};
	case 10:
	{
		"a3\ui_f_tank\video\spotlight_b.ogv"
	};
	case 11:
	{
		"a3\data_f_tank\video\preview_tank.ogv"
	};
	case 12:
	{
		"a3\ui_f_tacops\video\spotlight_a.ogv"
	};
	case 13:
	{
		"a3\ui_f_tacops\video\spotlight_c.ogv"
	};
	case 14:
	{
		"a3\ui_f_tacops\video\spotlight_b.ogv"
	};
	case 15:
	{
		"a3\data_f_tacops\video\preview_tacops.ogv"
	};
	case 16:
	{
		"a3\ui_f_orange\video\spotlight_a.ogv"
	};
	case 17:
	{
		"a3\ui_f_orange\video\spotlight_c.ogv"
	};
	case 18:
	{
		"a3\ui_f_orange\video\spotlight_b.ogv"
	};
	case 19:
	{
		"a3\data_f_orange\video\preview_orange.ogv"
	};
	case 20:
	{
		"a3\map_malden_scenes_f\video\previewvideo.ogv"
	};
	case 21:
	{
		"a3\data_f_argo\video\preview_argo.ogv"
	};
	case 22:
	{
		"a3\data_f_jets\video\preview_jets.ogv"
	};
	case 23:
	{
		"a3\ui_f_oldman\video\spotlight_a.ogv"
	};
	case 24:
	{
		"a3\ui_f_oldman\video\spotlight_fd14.ogv"
	};
	case 25:
	{
		"a3\map_tanoa_scenes_f\video\previewvideo.ogv"
	};
	case 26:
	{
		"a3\data_f_exp\video\preview_expansion.ogv"
	};
	case 27:
	{
		"a3\data_f_mark\video\preview_mark.ogv"
	};
	case 28:
	{
		"a3\data_f_kart\video\preview_kart.ogv"
	};
	case 29:
	{
		"a3\data_f_heli\video\preview_heli.ogv"
	};
	case 30:
	{
		"a3\ui_f\video\spotlight_2.ogv"
	};
	case 31:
	{
		"a3\ui_f\video\spotlight_1_eastwind.ogv"
	};
	case 32:
	{
		"a3\ui_f\video\spotlight_1_bootcamp.ogv"
	};
	case 33:
	{
		"a3\ui_f\video\spotlight3.ogv"
	};
	case 34:
	{
		"a3\ui_f\video\preview_dlcbundle2.ogv"
	};
	case 35:
	{
		"a3\ui_f\video\preview_dlcbundle.ogv"
	};
	case 36:
	{
		"a3\ui_f\video\spotlight_1_apex.ogv"
	};
	case 37:
	{
		"a3\ui_f\video\spotlight_1_old_man.ogv"
	};
	case 38:
	{
		"a3\map_vr_scenes_f\video\previewvideo.ogv"
	};
	case 39:
	{
		"a3\map_stratis_scenes_f\video\previewvideo.ogv"
	};
	case 40:
	{
		"a3\map_altis_scenes_f\video\previewvideo.ogv"
	};
};
_rsc	= "RscMS_globe" + str _index;
_video	= "Globe_video" + str _index;
_source	= "Globe_RscMS" + str _index;






_object setObjectTexture [_selection,_type];

uiNamespace setVariable [_video,_object];
with uiNamespace do
{
	disableSerialization;
	(getNumber (configfile >> "RscTitles" >> _rsc >> "controls" >> "Picture_0" >> "idc")) cutRsc [_rsc,"PLAIN"];

	_scr = (uiNamespace getVariable _source) displayCtrl (getNumber (configfile >> "RscTitles" >> _rsc >> "controls" >> "Picture_0" >> "idc"));
	_scr ctrlSetPosition [-10,-10,0,0];
	_scr ctrlSetText _type;
	_scr ctrlCommit 0;
	_scr ctrlAddEventHandler 
	[
		"VideoStopped",
		{
			_rsc	= "RscMS_globe" + str _index;
			_video	= "Globe_video" + str _index;
			_source	= "Globe_RscMS" + str _index;


			private _object = uiNamespace getVariable [_video,objNull];
			_object setObjectTexture [_selection,""];

			uiNamespace setVariable [_video,nil];
			(uiNamespace getVariable _source) closeDisplay 1;
			
			if (alive _object) then {[_object,_index,_selection] call expEden_fnc_playVideoLoopVertical}
		}
	];
};
