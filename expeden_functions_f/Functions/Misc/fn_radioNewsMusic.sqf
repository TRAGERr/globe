/*
	Author: 
		Trager, O&T Expansion Eden

	Description:
		Plays track from CfgSounds with checks:
			- duration param defined, value is more than 10 sec
			- 'news' in class name are blacklisted
			- possible to force CfgSounds class in list via variable (missionNamespace setVariable ["Globe_radioTrackExtra", ["My_track1", "My_track3"]])
			- possible to force CfgSounds class in list via local variable _exceptions
		For Join in Progress guys will hear only next track
		No synchronization between objects that runs this fucntion. -it like plays CD drive tracks from
		Player will hear same soung from individual one object

	Parameter(s):
		0 (OBJECT): Object / Radio

	Returns:
		nothing
*/
params[["_radio", objNull, [objNull]]];
if (isNull _radio || (!alive _radio) || (!local _radio) || is3DEN) exitWith {};

if ((!canSuspend)) exitWith 
{
	_radio spawn expEden_fnc_radioNewsMusic
};

if (!(_radio getVariable ['expEden_FMRadioMusic_enable',false])) exitWith {false};

sleep 2;

private _exceptions = ["eaudecombat_radio", "OldLaptop_VideoSound"];
_exceptions = _exceptions + (missionNamespace getVariable ["Globe_radioTrackExtra", []]);
if (worldName == 'Tanoa') then
{
	_exceptions = _exceptions +
	[
		"News_BackOnline",
		"News_CSAT_convoy_attacked",
		"News_Infection01",
		"News_Jingle",
		"News_outbreak_Boise",
		"News_outbreak_Galili",
		"News_outbreak_Oumere",
		"News_outbreak_Savaka",
		"News_rebels_attack_Lugganville",
		"News_weapons_prohibited",
		"News_checkpoints",
		"News_aircraft",
		"News_arrest",
		"News_depot_fail",
		"News_depot_success",
		"News_depot_success_alone",
		"News_execution",
		"News_hostels",
		"News_house_destroyed",
		"News_idap",
		"News_malaria_boise_secured",
		"News_malaria_galili_secured",
		"News_malaria_luganville_secured",
		"News_malaria_savaka_secured",
		"News_power_plant",
		"News_radar_destroyed",
		"News_rescued",
		"News_sugar_company",
		"News_weapons"
	];
};
private _tracks = 	"(getText (_x >> 'name') != '') && ((getNumber (_x >> 'duration') > 10) && (!((toLower configName _x) find 'news' >= 0))        ||         {configName _x in _exceptions})" configClasses (configFile >> "CfgSounds");
private _track 		= configName (_tracks # floor random (count _tracks));

waitUntil {_track isNotEqualTo ""};

[_radio, _track] remoteExec ['expEden_fnc_radioNewsMusicPlay', 0];

true