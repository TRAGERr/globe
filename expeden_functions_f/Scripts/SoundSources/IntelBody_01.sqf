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
				"\a3\missions_f_oldman\data\sound\intel_body\1sec\intel_body_1sec_01.wss",
				"\a3\missions_f_oldman\data\sound\intel_body\1sec\intel_body_1sec_02.wss",
				"\a3\missions_f_oldman\data\sound\intel_body\1sec\intel_body_1sec_03.wss",
				"\a3\missions_f_oldman\data\sound\intel_body\2sec\intel_body_2sec_01.wss",
				"\a3\missions_f_oldman\data\sound\intel_body\2sec\intel_body_2sec_02.wss",
				"\a3\missions_f_oldman\data\sound\intel_body\2sec\intel_body_2sec_03.wss"
			],
			_this,
			false,
			getPosASL _this,
			(_this getVariable ['Globe_SoundVolume',0.5]),
			(_this getVariable ['Globe_SoundPitch',1]),
			(_this getVariable ['Globe_SoundDistance',35]),
			(_this getVariable ['Globe_SoundOffset',0]),
			false
		];

		sleep (random (_this getVariable ['Globe_SoundPause',[0.5,2,4]]));
	};

};