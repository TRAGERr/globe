params["_object"];

if (isNull _object || (!alive _object) || is3DEN || (!isServer)) exitWith {};

_object spawn
{

	while {(!isNull _this) && alive _this} do
	{
		playSound3D
		[
			selectRandom
			[
				"a3\sounds_f\sfx\special_sfx\sparkles_wreck_1.wss",
				"a3\sounds_f\sfx\special_sfx\sparkles_wreck_2.wss",
				"a3\sounds_f\sfx\special_sfx\sparkles_wreck_3.wss"
			],
			_this,
			false,
			getPosASL _this,
			(_this getVariable ['Globe_SoundVolume',0.6]),
			(_this getVariable ['Globe_SoundPitch',1]),
			(_this getVariable ['Globe_SoundDistance',50]),
			(_this getVariable ['Globe_SoundOffset',0]),
			false
		];

		sleep (random (_this getVariable ['Globe_SoundPause',[0.5,3,10]]));
	};

};