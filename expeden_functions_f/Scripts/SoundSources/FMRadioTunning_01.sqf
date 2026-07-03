params["_object"];

if (isNull _object || (!alive _object) || is3DEN || (!isServer)) exitWith {};

_object spawn
{

	while {(!isNull _this) && alive _this} do
	{
		private _sound = playSound3D
		[
			selectRandom
			[
				"a3\missions_f_oldman\data\sound\carradio_tunning\carradio_tunning_01.wss",
				"a3\missions_f_oldman\data\sound\carradio_tunning\carradio_tunning_02.wss",
				"a3\missions_f_oldman\data\sound\carradio_tunning\carradio_tunning_03.wss",
				"a3\missions_f_oldman\data\sound\carradio_tunning\carradio_tunning_04.wss",
				"a3\missions_f_oldman\data\sound\carradio_tunning\carradio_tunning_05.wss",
				"a3\missions_f_oldman\data\sound\carradio_tunning\carradio_tunning_06.wss"
			],
			_this,
			false,
			getPosASL _this,
			(_this getVariable ['Globe_SoundVolume',1]),
			(_this getVariable ['Globe_SoundPitch',1]),
			(_this getVariable ['Globe_SoundDistance',15]),
			(_this getVariable ['Globe_SoundOffset',0]),
			false
		];
		waitUntil {soundParams _sound isEqualTo []};
	};

};