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
				"\a3\sounds_f\weapons\shells\9mm\grass_9mm_01.wss",
				"\a3\sounds_f\weapons\shells\9mm\grass_9mm_02.wss",
				"\a3\sounds_f\weapons\shells\9mm\grass_9mm_03.wss",
				"\a3\sounds_f\weapons\shells\9mm\grass_9mm_04.wss",
				"\a3\sounds_f\weapons\shells\9mm\grass_9mm_05.wss",
				"\a3\sounds_f\weapons\shells\9mm\grass_9mm_06.wss",
				"\a3\sounds_f\weapons\shells\9mm\grass_9mm_07.wss",
				"\a3\sounds_f\weapons\shells\9mm\grass_9mm_08.wss"
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
				"\a3\sounds_f\weapons\shells\9mm\asphalt_9mm_01.wss",
				"\a3\sounds_f\weapons\shells\9mm\asphalt_9mm_02.wss",
				"\a3\sounds_f\weapons\shells\9mm\asphalt_9mm_03.wss",
				"\a3\sounds_f\weapons\shells\9mm\asphalt_9mm_04.wss",
				"\a3\sounds_f\weapons\shells\9mm\asphalt_9mm_05.wss",
				"\a3\sounds_f\weapons\shells\9mm\asphalt_9mm_06.wss",
				"\a3\sounds_f\weapons\shells\9mm\asphalt_9mm_07.wss",
				"\a3\sounds_f\weapons\shells\9mm\asphalt_9mm_08.wss",
				"\a3\sounds_f\weapons\shells\9mm\asphalt_9mm_09.wss",
				"\a3\sounds_f\weapons\shells\9mm\asphalt_9mm_10.wss",
				"\a3\sounds_f\weapons\shells\9mm\asphalt_9mm_11.wss",
				"\a3\sounds_f\weapons\shells\9mm\asphalt_9mm_12.wss",
				"\a3\sounds_f\weapons\shells\9mm\asphalt_9mm_13.wss",
				"\a3\sounds_f\weapons\shells\9mm\asphalt_9mm_14.wss",
				"\a3\sounds_f\weapons\shells\9mm\asphalt_9mm_15.wss",
				"\a3\sounds_f\weapons\shells\9mm\asphalt_9mm_16.wss",
				"\a3\sounds_f\weapons\shells\9mm\asphalt_9mm_17.wss",
				"\a3\sounds_f\weapons\shells\9mm\asphalt_9mm_18.wss",
				"\a3\sounds_f\weapons\shells\9mm\asphalt_9mm_19.wss",
				"\a3\sounds_f\weapons\shells\9mm\asphalt_9mm_20.wss",
				"\a3\sounds_f\weapons\shells\9mm\asphalt_9mm_21.wss",
				"\a3\sounds_f\weapons\shells\9mm\asphalt_9mm_22.wss",
				"\a3\sounds_f\weapons\shells\9mm\asphalt_9mm_23.wss",
				"\a3\sounds_f\weapons\shells\9mm\asphalt_9mm_24.wss",
				"\a3\sounds_f\weapons\shells\9mm\asphalt_9mm_25.wss",
				"\a3\sounds_f\weapons\shells\9mm\asphalt_9mm_26.wss"
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
				"\a3\sounds_f\weapons\shells\9mm\dirt_9mm_01.wss",
				"\a3\sounds_f\weapons\shells\9mm\dirt_9mm_02.wss",
				"\a3\sounds_f\weapons\shells\9mm\dirt_9mm_03.wss",
				"\a3\sounds_f\weapons\shells\9mm\dirt_9mm_04.wss",
				"\a3\sounds_f\weapons\shells\9mm\dirt_9mm_05.wss",
				"\a3\sounds_f\weapons\shells\9mm\dirt_9mm_06.wss",
				"\a3\sounds_f\weapons\shells\9mm\dirt_9mm_07.wss",
				"\a3\sounds_f\weapons\shells\9mm\dirt_9mm_08.wss",
				"\a3\sounds_f\weapons\shells\9mm\dirt_9mm_09.wss",
				"\a3\sounds_f\weapons\shells\9mm\dirt_9mm_10.wss",
				"\a3\sounds_f\weapons\shells\9mm\dirt_9mm_11.wss",
				"\a3\sounds_f\weapons\shells\9mm\dirt_9mm_12.wss",
				"\a3\sounds_f\weapons\shells\9mm\dirt_9mm_13.wss",
				"\a3\sounds_f\weapons\shells\9mm\dirt_9mm_14.wss",
				"\a3\sounds_f\weapons\shells\9mm\dirt_9mm_15.wss",
				"\a3\sounds_f\weapons\shells\9mm\dirt_9mm_16.wss",
				"\a3\sounds_f\weapons\shells\9mm\dirt_9mm_17.wss",
				"\a3\sounds_f\weapons\shells\9mm\dirt_9mm_18.wss",
				"\a3\sounds_f\weapons\shells\9mm\dirt_9mm_19.wss",
				"\a3\sounds_f\weapons\shells\9mm\dirt_9mm_20.wss",
				"\a3\sounds_f\weapons\shells\9mm\dirt_9mm_21.wss",
				"\a3\sounds_f\weapons\shells\9mm\dirt_9mm_22.wss",
				"\a3\sounds_f\weapons\shells\9mm\dirt_9mm_23.wss",
				"\a3\sounds_f\weapons\shells\9mm\dirt_9mm_24.wss"
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
				"\a3\sounds_f\weapons\shells\9mm\metal_9mm_01.wss",
				"\a3\sounds_f\weapons\shells\9mm\metal_9mm_02.wss",
				"\a3\sounds_f\weapons\shells\9mm\metal_9mm_03.wss",
				"\a3\sounds_f\weapons\shells\9mm\metal_9mm_04.wss",
				"\a3\sounds_f\weapons\shells\9mm\metal_9mm_05.wss",
				"\a3\sounds_f\weapons\shells\9mm\metal_9mm_06.wss",
				"\a3\sounds_f\weapons\shells\9mm\metal_9mm_07.wss",
				"\a3\sounds_f\weapons\shells\9mm\metal_9mm_08.wss",
				"\a3\sounds_f\weapons\shells\9mm\metal_9mm_09.wss",
				"\a3\sounds_f\weapons\shells\9mm\metal_9mm_10.wss",
				"\a3\sounds_f\weapons\shells\9mm\metal_9mm_11.wss"
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
				"\a3\sounds_f\weapons\shells\9mm\asphalt_9mm_01.wss",
				"\a3\sounds_f\weapons\shells\9mm\asphalt_9mm_02.wss",
				"\a3\sounds_f\weapons\shells\9mm\asphalt_9mm_03.wss",
				"\a3\sounds_f\weapons\shells\9mm\asphalt_9mm_04.wss",
				"\a3\sounds_f\weapons\shells\9mm\asphalt_9mm_05.wss",
				"\a3\sounds_f\weapons\shells\9mm\asphalt_9mm_06.wss",
				"\a3\sounds_f\weapons\shells\9mm\asphalt_9mm_07.wss",
				"\a3\sounds_f\weapons\shells\9mm\asphalt_9mm_08.wss",
				"\a3\sounds_f\weapons\shells\9mm\asphalt_9mm_09.wss",
				"\a3\sounds_f\weapons\shells\9mm\asphalt_9mm_10.wss",
				"\a3\sounds_f\weapons\shells\9mm\asphalt_9mm_11.wss",
				"\a3\sounds_f\weapons\shells\9mm\asphalt_9mm_12.wss",
				"\a3\sounds_f\weapons\shells\9mm\asphalt_9mm_13.wss",
				"\a3\sounds_f\weapons\shells\9mm\asphalt_9mm_14.wss",
				"\a3\sounds_f\weapons\shells\9mm\asphalt_9mm_15.wss",
				"\a3\sounds_f\weapons\shells\9mm\asphalt_9mm_16.wss",
				"\a3\sounds_f\weapons\shells\9mm\asphalt_9mm_17.wss",
				"\a3\sounds_f\weapons\shells\9mm\asphalt_9mm_18.wss",
				"\a3\sounds_f\weapons\shells\9mm\asphalt_9mm_19.wss",
				"\a3\sounds_f\weapons\shells\9mm\asphalt_9mm_20.wss",
				"\a3\sounds_f\weapons\shells\9mm\asphalt_9mm_21.wss",
				"\a3\sounds_f\weapons\shells\9mm\asphalt_9mm_22.wss",
				"\a3\sounds_f\weapons\shells\9mm\asphalt_9mm_23.wss",
				"\a3\sounds_f\weapons\shells\9mm\asphalt_9mm_24.wss",
				"\a3\sounds_f\weapons\shells\9mm\asphalt_9mm_25.wss",
				"\a3\sounds_f\weapons\shells\9mm\asphalt_9mm_26.wss"
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