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
				"a3\missions_f_tank\data\sounds\enginefail01.wss",
				"a3\missions_f_tank\data\sounds\enginefail02.wss",
				"a3\missions_f_tank\data\sounds\enginefail03.wss",
				"a3\missions_f_tank\data\sounds\enginefail04.wss"
			],
			_this,
			false,
			getPosASL _this,
			(_this getVariable ['Globe_SoundVolume',1.2]),
			(_this getVariable ['Globe_SoundPitch',1]),
			(_this getVariable ['Globe_SoundDistance',150]),
			(_this getVariable ['Globe_SoundOffset',0]),
			false
		];

		sleep (random (_this getVariable ['Globe_SoundPause',[4,8,12]]));
	};

};