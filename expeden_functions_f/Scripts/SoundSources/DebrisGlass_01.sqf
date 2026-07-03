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
				"\a3\sounds_f_exp\environment\sfx\small_debris\glass_debris_01.wss",
				"\a3\sounds_f_exp\environment\sfx\small_debris\glass_debris_02.wss",
				"\a3\sounds_f_exp\environment\sfx\small_debris\glass_debris_03.wss"
			],
			_this,
			false,
			getPosASL _this,
			(_this getVariable ['Globe_SoundVolume',0.9]),
			(_this getVariable ['Globe_SoundPitch',1]),
			(_this getVariable ['Globe_SoundDistance',20]),
			(_this getVariable ['Globe_SoundOffset',0]),
			false
		];

		sleep (random (_this getVariable ['Globe_SoundPause',[4,12,20]]));
	};

};