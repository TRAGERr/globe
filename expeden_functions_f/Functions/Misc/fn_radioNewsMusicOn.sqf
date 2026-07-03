/*
	Author: 
		Trager

	Description:
		Takes all sound classes from CfgSounds, separates from short sounds (SFX, conversations) by duration more than 10 sec, plays on object, after sound stop the next sound graps to play again
		All FM Radio object can stop playing if Globe_broadcastOnAir variable is true, use for this: missionNamespace setVariable ["Globe_broadcastOnAir",true]

	Parameter(s):
		0 (OBJECT): Object / Radio

	Returns:
		n

*/
params[["_radio",objNull,[objNull]]];
if (isNull _radio) exitWith {};

while {!(missionNamespace getVariable ["Globe_broadcastOnAir",false]) && !(_radio getVariable ["Globe_radioDestroyed",false])} do 
{
	private _tracks 		= "(getText (_x >> 'name') != '') && (getNumber (_x >> 'duration') > 10)" configClasses (configFile >> "CfgSounds");
	private _track 			= _tracks # floor random (count _tracks);
	private _soundSource 	= _radio say3D [(configName _track),80,1,0,0,true];


	waitUntil 
	{
		if (selectRandom [true,false]) then
		{
			isNull _soundSource
			&&
			{
				private _sound = playSound3D 
				[
					format ["a3\missions_f_oldman\data\sound\carradio_tunning\carradio_tunning_0%1.wss", ceil random 6],
					_radio,
					false,
					getPosASL _radio,
					1.34,
					1,
					25,
					0,
					true
				];
				soundParams _sound isEqualTo []
			}
		}
		else
		{
			isNull _soundSource
		}
	};
};