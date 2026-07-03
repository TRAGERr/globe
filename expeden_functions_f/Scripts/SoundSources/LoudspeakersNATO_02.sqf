params["_object"];

if (isNull _object || (!alive _object) || is3DEN || (!isServer)) exitWith {};

_object spawn
{

	while {(!isNull _this) && alive _this} do
	{
		sleep 1;
		private _sound = playSound3D
		[
			"a3\dubbing_f_tank\ta_tanks_m03\030_am_blackfoot_message\ta_tanks_m03_030_am_blackfoot_message_ARPILOT_0.ogg",
			_this,
			false,
			getPosASL _this,
			(_this getVariable ['Globe_SoundVolume',1]),
			(_this getVariable ['Globe_SoundPitch',1]),
			(_this getVariable ['Globe_SoundDistance',600]),
			(_this getVariable ['Globe_SoundOffset',0]),
			false
		];
		waitUntil {soundParams _sound isEqualTo []};
		sleep (random 2);

		private _sound = playSound3D
		[
			"a3\dubbing_f_tank\ta_tanks_m03\030_am_blackfoot_message\ta_tanks_m03_030_am_blackfoot_message_ARPILOT_1.ogg",
			_this,
			false,
			getPosASL _this,
			(_this getVariable ['Globe_SoundVolume',1]),
			(_this getVariable ['Globe_SoundPitch',1]),
			(_this getVariable ['Globe_SoundDistance',600]),
			(_this getVariable ['Globe_SoundOffset',0]),
			false
		];
		waitUntil {soundParams _sound isEqualTo []};
		sleep (random 2);

		private _sound = playSound3D
		[
			"a3\dubbing_f_tank\ta_tanks_m03\030_am_blackfoot_message\ta_tanks_m03_030_am_blackfoot_message_ARPILOT_2.ogg",
			_this,
			false,
			getPosASL _this,
			(_this getVariable ['Globe_SoundVolume',1]),
			(_this getVariable ['Globe_SoundPitch',1]),
			(_this getVariable ['Globe_SoundDistance',600]),
			(_this getVariable ['Globe_SoundOffset',0]),
			false
		];

		sleep (random ((_this getVariable ['Globe_SoundPause',[15,60,90]])))
	};

};