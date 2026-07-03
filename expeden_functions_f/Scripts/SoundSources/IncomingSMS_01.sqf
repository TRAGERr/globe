params["_object"];

if (isNull _object || (!alive _object) || is3DEN || (!isServer)) exitWith {};

_object spawn
{

	while {(!isNull _this) && alive _this} do
	{
		sleep (random (_this getVariable ['Globe_SoundPause', [5,6,10]]));

		playSound3D
		[
			switch (_this getVariable ['Globe_SoundType',1]) do 
			{

				case 0:
				{
					"a3\missions_f_oldman\data\sound\phone_sms\vibration\phone_sms_vibrate_01.wss"
				};

				case 1:
				{
					"a3\missions_f_oldman\data\sound\phone_sms\chime\phone_sms_chime_01.wss"
				};

				case 2:
				{
					"a3\missions_f_oldman\data\sound\phone_sms\chime\phone_sms_chime_02.wss"
				};

				case 3:
				{
					"a3\missions_f_oldman\data\sound\phone_sms\chime\phone_sms_chime_03.wss"
				};

				case 4:
				{
					"a3\missions_f_oldman\data\sound\phone_sms\chime\phone_sms_chime_04.wss"
				};

				case 5:
				{
					"a3\missions_f_oldman\data\sound\phone_sms\chime\phone_sms_chime_05.wss"
				};

				case 6:
				{
					"a3\missions_f_oldman\data\sound\phone_sms\chime\phone_sms_chime_06.wss"
				};

				case 7:
				{
					"a3\missions_f_oldman\data\sound\phone_sms\chime\phone_sms_chime_07.wss"
				};

				case 8:
				{
					"a3\missions_f_oldman\data\sound\phone_sms\chime\phone_sms_chime_08.wss"
				};

				case 9:
				{
					"a3\missions_f_oldman\data\sound\phone_sms\chime\phone_sms_chime_09.wss"
				};

				case 10:
				{
					selectRandom
					[
						"a3\missions_f_oldman\data\sound\phone_sms\chime\phone_sms_chime_01.wss",
						"a3\missions_f_oldman\data\sound\phone_sms\chime\phone_sms_chime_02.wss",
						"a3\missions_f_oldman\data\sound\phone_sms\chime\phone_sms_chime_03.wss",
						"a3\missions_f_oldman\data\sound\phone_sms\chime\phone_sms_chime_04.wss",
						"a3\missions_f_oldman\data\sound\phone_sms\chime\phone_sms_chime_05.wss",
						"a3\missions_f_oldman\data\sound\phone_sms\chime\phone_sms_chime_06.wss",
						"a3\missions_f_oldman\data\sound\phone_sms\chime\phone_sms_chime_07.wss",
						"a3\missions_f_oldman\data\sound\phone_sms\chime\phone_sms_chime_08.wss",
						"a3\missions_f_oldman\data\sound\phone_sms\chime\phone_sms_chime_09.wss",
						"a3\missions_f_oldman\data\sound\phone_sms\vibration\phone_sms_vibrate_01.wss"
					]
				};

				default
				{
					"a3\missions_f_oldman\data\sound\phone_sms\chime\phone_sms_chime_01.wss"
				};
			},
			_this,
			false,
			getPosASL _this,
			(_this getVariable ['Globe_SoundVolume',1]),
			(_this getVariable ['Globe_SoundPitch',1]),
			(_this getVariable ['Globe_SoundDistance',6]),
			(_this getVariable ['Globe_SoundOffset',0]),
			false
		];
		
		sleep (random (_this getVariable ['Globe_SoundPause', [5,30,60]]));
	};

};