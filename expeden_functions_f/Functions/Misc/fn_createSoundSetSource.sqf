params
[
	"_object",
	["_mode", "mode1"]
];

if (!isServer) exitWith 
{
	_object remoteExecCall ['expEden_fnc_createSoundSetSource',2]
};

deleteVehicle (_object getVariable 'Globe_soundSource');

switch (true) do 
{

	case (_object isKindOf "Land_PowerLine_01_pole_transformer_F"):
	{
		private _soundSource = createVehicle ['SoundSetSource_Sfx_Transformer04kV_01_G', [0,0,0], [], 0, "CAN_COLLIDE"];
		_soundSource attachTo [_object, [0,-1.35,4]];
		_object setVariable ['Globe_soundSource', _soundSource, true];

	};

	case (_object isKindOf "Land_PowLines_Transformer_F"):
	{
		private _soundSource = createVehicle ['SoundSetSource_Sfx_Transformer6kV_01_G', [0,0,0], [], 0, "CAN_COLLIDE"];
		_soundSource attachTo [_object, [0,-0.65,-0.65]];
		_object setVariable ['Globe_soundSource', _soundSource, true];

		true
	};

	case (_object isKindOf "Land_spp_Transformer_F"):
	{
		private _soundSource = createVehicle ['SoundSetSource_Sfx_Transformer6kV_01_G', [0,0,0], [], 0, "CAN_COLLIDE"];
		_soundSource attachTo [_object, [0,-0,0]];
		_object setVariable ['Globe_soundSource', _soundSource, true];

		true
	};

	case (_object isKindOf "Land_dp_transformer_F"):
	{
		private _soundSource = createVehicle ['SoundSetSource_Sfx_Transformer110kV_01_G', [0,0,0], [], 0, "CAN_COLLIDE"];
		_soundSource attachTo [_object, [0,-0.6,0]];
		_object setVariable ['Globe_soundSource', _soundSource, true];

		true
	};

	case (_object isKindOf "AirConditioner_01_on"):
	{
		switch _mode do 
		{
			case "mode3":
			{
				false
			};
			case "mode2":
			{
				private _soundSource = createVehicle ['SoundSetSource_Sfx_AirCondition', [0,0,0], [], 0, "CAN_COLLIDE"];
				_soundSource attachTo [_object, [0,-0.6,0]];
				_object setVariable ['Globe_soundSource', _soundSource, true];

				true
			};
			case "mode1":
			{
				private _soundSource = createVehicle ['SoundSetSource_Sfx_DataTerminal_01', [0,0,0], [], 0, "CAN_COLLIDE"];
				_soundSource attachTo [_object, [0,-0.6,0]];
				_object setVariable ['Globe_soundSource', _soundSource, true];

				true
			};
			default
			{
				false
			};
		};
	};

	case (_object isKindOf "Land_IPPhone_01_base_F"):
	{
		private _soundSource = createVehicle ['SoundSetSource_Sfx_phoneIP', [0,0,0], [], 0, "CAN_COLLIDE"];
		_soundSource attachTo [_object, [0,-0.6,0]];
		_object setVariable ['Globe_soundSource', _soundSource, true];

		true
	};

	case (_object isKindOf "Portable_generator_enabled"):
	{
		private _soundSource = createVehicle ['SoundSetSource_Sfx_generator1', [0,0,0], [], 0, "CAN_COLLIDE"];
		_soundSource attachTo [_object, [0,-0.6,0]];
		_object setVariable ['Globe_soundSource', _soundSource, true];

		true
	};

	case (_object isKindOf "Land_PowerGenerator_on"):
	{
		private _soundSource = createVehicle ['SoundSetSource_Sfx_generator2', [0,0,0], [], 0, "CAN_COLLIDE"];
		_soundSource attachTo [_object, [0,-0.6,0]];
		_object setVariable ['Globe_soundSource', _soundSource, true];

		true
	};

	case (_object isKindOf "FMradio_sportGame"):
	{
		private _soundSource = createVehicle ['SoundSetSource_Sfx_RadioSportGame_01', [0,0,0], [], 0, "CAN_COLLIDE"];
		_soundSource attachTo [_object, [0,-0.6,0]];
		_object setVariable ['Globe_soundSource', _soundSource, true];

		true
	};

	case (_object isKindOf "PortableLongRangeRadioMilitary_EmptyAir" || _object isKindOf "PortableLongRangeRadio_EmptyAir"):
	{
		private _soundSource = createVehicle ['SoundSetSource_Sfx_EmptyAir', [0,0,0], [], 0, "CAN_COLLIDE"];
		_soundSource attachTo [_object, [0,-0.25,0]];
		_object setVariable ['Globe_soundSource', _soundSource, true];

		true
	};


	default 
	{
		private _soundSource = createVehicle ['SoundSetSource_Sfx_RadioSportGame_01', [0,0,0], [], 0, "CAN_COLLIDE"];
		_soundSource attachTo [_object, [0,-0.6,0]];
		_object setVariable ['Globe_soundSource', _soundSource, true];

		true
	};

};