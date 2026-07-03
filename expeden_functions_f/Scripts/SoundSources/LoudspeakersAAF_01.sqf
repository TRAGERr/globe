params["_object"];

if (isNull _object || (!alive _object) || is3DEN || (!isServer)) exitWith {};

_object spawn
{

	while {(!isNull _this) && alive _this} do
	{
		sleep 5;

		playSound3D
		[
			"\a3\dubbing_f_tank\ta_tanks_m01\003_sfx_announcement_01\ta_tanks_m01_003_sfx_announcement_01_ARHQ_0.ogg",
			_this,
			false,
			getPosASL _this,
			(_this getVariable ['Globe_SoundVolume',1]),
			(_this getVariable ['Globe_SoundPitch',1]),
			(_this getVariable ['Globe_SoundDistance',600]),
			(_this getVariable ['Globe_SoundOffset',0]),
			false
		];

		sleep (random [5,20,25]);

		playSound3D
		[
			"\a3\dubbing_f_tank\ta_tanks_m01\003_sfx_announcement_01\ta_tanks_m01_003_sfx_announcement_01_ARHQ_1.ogg",
			_this,
			false,
			getPosASL _this,
			(_this getVariable ['Globe_SoundVolume',1]),
			(_this getVariable ['Globe_SoundPitch',1]),
			(_this getVariable ['Globe_SoundDistance',600]),
			(_this getVariable ['Globe_SoundOffset',0]),
			false
		];

		sleep (random [60,90,120]);
	};

};