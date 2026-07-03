params ["_unit"];

private _pos			= getPosWorld _unit;
private _currentZ		= _pos select 2;
private _stance			= stance _unit;
private _heightOffset	= 0.921485;
private _delay			= 0.43;

switch (_stance) do 
{
	case "STAND": 
	{
		_heightOffset	= 1.398;
		_delay			= 0.53;
	};
	case "CROUCH": 
	{
		_heightOffset	= 0.921485;
		_delay			= 0.43;
	};
	case "PRONE": 
	{
		_heightOffset	= 0.258945;
		_delay			= 0.23;
	};
	default 
	{
		_heightOffset	= 0.921485;
		_delay			= 0.43;
	};
};
_pos set [2, _currentZ - _heightOffset];

sleep (_delay + random 0.05);

switch true do 
{

	case ('grass' in (toLower (surfaceType getPosWorld _unit))):
	{
		playSound3D 
		[
			selectRandom
			[
				"\a3\sounds_f\weapons\shells\5_56\shellcase_556_grass_01.wss",
				"\a3\sounds_f\weapons\shells\5_56\shellcase_556_grass_02.wss",
				"\a3\sounds_f\weapons\shells\5_56\shellcase_556_grass_03.wss",
				"\a3\sounds_f\weapons\shells\5_56\shellcase_556_grass_04.wss",
				"\a3\sounds_f\weapons\shells\5_56\grass_556_01.wss",
				"\a3\sounds_f\weapons\shells\5_56\grass_556_02.wss",
				"\a3\sounds_f\weapons\shells\5_56\grass_556_03.wss",
				"\a3\sounds_f\weapons\shells\5_56\grass_556_04.wss",
				"\a3\sounds_f\weapons\shells\5_56\grass_556_05.wss",
				"\a3\sounds_f\weapons\shells\5_56\grass_556_06.wss",
				"\a3\sounds_f\weapons\shells\5_56\grass_556_07.wss",
				"\a3\sounds_f\weapons\shells\5_56\grass_556_08.wss"
			],
			_unit,
			false,
			_pos,
			1,
			1,
			15,
			0,
			true
		];
	};

	case ('asphalt' in (toLower (surfaceType getPosWorld _unit))):
	{
		playSound3D 
		[
			selectRandom
			[
				"\a3\sounds_f\weapons\shells\5_56\asphlat_556_01.wss",
				"\a3\sounds_f\weapons\shells\5_56\asphlat_556_02.wss",
				"\a3\sounds_f\weapons\shells\5_56\asphlat_556_03.wss",
				"\a3\sounds_f\weapons\shells\5_56\asphlat_556_04.wss",
				"\a3\sounds_f\weapons\shells\5_56\asphlat_556_05.wss"
			],
			_unit,
			false,
			_pos,
			1,
			1,
			15,
			0,
			true
		];
	};

	case ('dirt' in (toLower (surfaceType getPosWorld _unit))):
	{
		playSound3D 
		[
			selectRandom
			[
				"\a3\sounds_f\weapons\shells\5_56\dirt_556_01.wss",
				"\a3\sounds_f\weapons\shells\5_56\dirt_556_02.wss",
				"\a3\sounds_f\weapons\shells\5_56\dirt_556_03.wss",
				"\a3\sounds_f\weapons\shells\5_56\dirt_556_04.wss",
				"\a3\sounds_f\weapons\shells\5_56\dirt_556_05.wss",
				"\a3\sounds_f\weapons\shells\5_56\dirt_556_06.wss",
				"\a3\sounds_f\weapons\shells\5_56\dirt_556_07.wss",
				"\a3\sounds_f\weapons\shells\5_56\dirt_556_08.wss",
				"\a3\sounds_f\weapons\shells\5_56\dirt_556_09.wss",
				"\a3\sounds_f\weapons\shells\5_56\dirt_556_10.wss",
				"\a3\sounds_f\weapons\shells\5_56\dirt_556_11.wss",
				"\a3\sounds_f\weapons\shells\5_56\dirt_556_12.wss",
				"\a3\sounds_f\weapons\shells\5_56\dirt_556_13.wss",
				"\a3\sounds_f\weapons\shells\5_56\dirt_556_14.wss",
				"\a3\sounds_f\weapons\shells\5_56\dirt_556_15.wss",
				"\a3\sounds_f\weapons\shells\5_56\dirt_556_16.wss",
				"\a3\sounds_f\weapons\shells\5_56\dirt_556_17.wss",
				"\a3\sounds_f\weapons\shells\5_56\dirt_556_18.wss",
				"\a3\sounds_f\weapons\shells\5_56\dirt_556_19.wss",
				"\a3\sounds_f\weapons\shells\5_56\dirt_556_20.wss",
				"\a3\sounds_f\weapons\shells\5_56\shellcase_556_dirt_01.wss",
				"\a3\sounds_f\weapons\shells\5_56\shellcase_556_dirt_02.wss",
				"\a3\sounds_f\weapons\shells\5_56\shellcase_556_dirt_03.wss",
				"\a3\sounds_f\weapons\shells\5_56\shellcase_556_dirt_04.wss"
			],
			_unit,
			false,
			_pos,
			1.2,
			1,
			15,
			0,
			true
		];
	};

	case ('metal' in (toLower (surfaceType getPosWorld _unit))):
	{
		playSound3D 
		[
			selectRandom
			[
				"\a3\sounds_f\weapons\shells\5_56\metal_556_01.wss",
				"\a3\sounds_f\weapons\shells\5_56\metal_556_02.wss",
				"\a3\sounds_f\weapons\shells\5_56\metal_556_03.wss",
				"\a3\sounds_f\weapons\shells\5_56\metal_556_04.wss",
				"\a3\sounds_f\weapons\shells\5_56\metal_556_05.wss",
				"\a3\sounds_f\weapons\shells\5_56\metal_556_06.wss",
				"\a3\sounds_f\weapons\shells\5_56\metal_556_07.wss",
				"\a3\sounds_f\weapons\shells\5_56\metal_556_08.wss"
			],
			_unit,
			false,
			_pos,
			1.3,
			1,
			15,
			0,
			true
		];
	};

	default
	{
		playSound3D 
		[
			selectRandom
			[
				"\a3\sounds_f\weapons\shells\5_56\asphalt_556_01.wss",
				"\a3\sounds_f\weapons\shells\5_56\asphalt_556_02.wss",
				"\a3\sounds_f\weapons\shells\5_56\asphalt_556_03.wss",
				"\a3\sounds_f\weapons\shells\5_56\asphalt_556_04.wss",
				"\a3\sounds_f\weapons\shells\5_56\asphalt_556_05.wss",
				"\a3\sounds_f\weapons\shells\5_56\asphalt_556_06.wss",
				"\a3\sounds_f\weapons\shells\5_56\asphalt_556_07.wss",
				"\a3\sounds_f\weapons\shells\5_56\asphalt_556_08.wss",
				"\a3\sounds_f\weapons\shells\5_56\asphalt_556_09.wss",
				"\a3\sounds_f\weapons\shells\5_56\asphalt_556_10.wss",
				"\a3\sounds_f\weapons\shells\5_56\asphalt_556_11.wss",
				"\a3\sounds_f\weapons\shells\5_56\asphalt_556_12.wss",
				"\a3\sounds_f\weapons\shells\5_56\asphalt_556_13.wss",
				"\a3\sounds_f\weapons\shells\5_56\asphalt_556_14.wss",
				"\a3\sounds_f\weapons\shells\5_56\asphalt_556_15.wss",
				"\a3\sounds_f\weapons\shells\5_56\asphalt_556_16.wss",
				"\a3\sounds_f\weapons\shells\5_56\asphalt_556_17.wss",
				"\a3\sounds_f\weapons\shells\5_56\asphalt_556_18.wss",
				"\a3\sounds_f\weapons\shells\5_56\asphalt_556_19.wss",
				"\a3\sounds_f\weapons\shells\5_56\asphalt_556_20.wss",
				"\a3\sounds_f\weapons\shells\5_56\asphalt_556_21.wss",
				"\a3\sounds_f\weapons\shells\5_56\asphalt_556_22.wss",
				"\a3\sounds_f\weapons\shells\5_56\asphalt_556_23.wss",
				"\a3\sounds_f\weapons\shells\5_56\asphalt_556_24.wss",
				"\a3\sounds_f\weapons\shells\5_56\asphalt_556_25.wss",
				"\a3\sounds_f\weapons\shells\5_56\asphalt_556_26.wss",
				"\a3\sounds_f\weapons\shells\5_56\asphalt_556_27.wss",
				"\a3\sounds_f\weapons\shells\5_56\asphalt_556_28.wss"
			],
			_unit,
			false,
			_pos,
			1,
			1,
			15,
			0,
			true
		];
	};

};