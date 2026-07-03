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
				"\a3\sounds_f\weapons\shells\7_62\shellcase_762_grass_01.wss",
				"\a3\sounds_f\weapons\shells\7_62\shellcase_762_grass_02.wss",
				"\a3\sounds_f\weapons\shells\7_62\shellcase_762_grass_03.wss",
				"\a3\sounds_f\weapons\shells\7_62\shellcase_762_grass_04.wss",
				"\a3\sounds_f\weapons\shells\7_62\grass_762_01.wss",
				"\a3\sounds_f\weapons\shells\7_62\grass_762_02.wss",
				"\a3\sounds_f\weapons\shells\7_62\grass_762_03.wss",
				"\a3\sounds_f\weapons\shells\7_62\grass_762_04.wss",
				"\a3\sounds_f\weapons\shells\7_62\grass_762_05.wss",
				"\a3\sounds_f\weapons\shells\7_62\grass_762_06.wss",
				"\a3\sounds_f\weapons\shells\7_62\grass_762_07.wss",
				"\a3\sounds_f\weapons\shells\7_62\grass_762_08.wss"
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
				"\a3\sounds_f\weapons\shells\7_62\asphalt_762_01.wss",
				"\a3\sounds_f\weapons\shells\7_62\asphalt_762_02.wss",
				"\a3\sounds_f\weapons\shells\7_62\asphalt_762_03.wss",
				"\a3\sounds_f\weapons\shells\7_62\asphalt_762_04.wss",
				"\a3\sounds_f\weapons\shells\7_62\asphalt_762_05.wss",
				"\a3\sounds_f\weapons\shells\7_62\asphalt_762_06.wss",
				"\a3\sounds_f\weapons\shells\7_62\asphalt_762_07.wss",
				"\a3\sounds_f\weapons\shells\7_62\asphalt_762_08.wss",
				"\a3\sounds_f\weapons\shells\7_62\asphalt_762_09.wss",
				"\a3\sounds_f\weapons\shells\7_62\asphalt_762_10.wss",
				"\a3\sounds_f\weapons\shells\7_62\asphalt_762_11.wss",
				"\a3\sounds_f\weapons\shells\7_62\asphalt_762_12.wss",
				"\a3\sounds_f\weapons\shells\7_62\asphalt_762_13.wss",
				"\a3\sounds_f\weapons\shells\7_62\asphalt_762_14.wss",
				"\a3\sounds_f\weapons\shells\7_62\asphalt_762_15.wss",
				"\a3\sounds_f\weapons\shells\7_62\asphalt_762_16.wss",
				"\a3\sounds_f\weapons\shells\7_62\asphalt_762_17.wss",
				"\a3\sounds_f\weapons\shells\7_62\asphalt_762_18.wss",
				"\a3\sounds_f\weapons\shells\7_62\asphalt_762_19.wss",
				"\a3\sounds_f\weapons\shells\7_62\asphalt_762_20.wss",
				"\a3\sounds_f\weapons\shells\7_62\asphalt_762_21.wss",
				"\a3\sounds_f\weapons\shells\7_62\asphalt_762_22.wss",
				"\a3\sounds_f\weapons\shells\7_62\asphalt_762_23.wss",
				"\a3\sounds_f\weapons\shells\7_62\asphalt_762_24.wss",
				"\a3\sounds_f\weapons\shells\7_62\asphalt_762_25.wss",
				"\a3\sounds_f\weapons\shells\7_62\asphalt_762_26.wss",
				"\a3\sounds_f\weapons\shells\7_62\asphalt_762_27.wss",
				"\a3\sounds_f\weapons\shells\7_62\asphalt_762_28.wss"
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
				"\a3\sounds_f\weapons\shells\7_62\dirt_762_01.wss",
				"\a3\sounds_f\weapons\shells\7_62\dirt_762_02.wss",
				"\a3\sounds_f\weapons\shells\7_62\dirt_762_03.wss",
				"\a3\sounds_f\weapons\shells\7_62\dirt_762_04.wss",
				"\a3\sounds_f\weapons\shells\7_62\dirt_762_05.wss",
				"\a3\sounds_f\weapons\shells\7_62\dirt_762_06.wss",
				"\a3\sounds_f\weapons\shells\7_62\dirt_762_07.wss",
				"\a3\sounds_f\weapons\shells\7_62\dirt_762_08.wss",
				"\a3\sounds_f\weapons\shells\7_62\dirt_762_09.wss",
				"\a3\sounds_f\weapons\shells\7_62\dirt_762_10.wss",
				"\a3\sounds_f\weapons\shells\7_62\dirt_762_11.wss",
				"\a3\sounds_f\weapons\shells\7_62\shellcase_762_dirt_01.wss",
				"\a3\sounds_f\weapons\shells\7_62\shellcase_762_dirt_02.wss",
				"\a3\sounds_f\weapons\shells\7_62\shellcase_762_dirt_03.wss",
				"\a3\sounds_f\weapons\shells\7_62\shellcase_762_dirt_04.wss"
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
				"\a3\sounds_f\weapons\shells\7_62\metal_762_01.wss",
				"\a3\sounds_f\weapons\shells\7_62\metal_762_02.wss",
				"\a3\sounds_f\weapons\shells\7_62\metal_762_03.wss",
				"\a3\sounds_f\weapons\shells\7_62\metal_762_04.wss"
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
				"\a3\sounds_f\weapons\shells\7_62\asphalt_762_01.wss",
				"\a3\sounds_f\weapons\shells\7_62\asphalt_762_02.wss",
				"\a3\sounds_f\weapons\shells\7_62\asphalt_762_03.wss",
				"\a3\sounds_f\weapons\shells\7_62\asphalt_762_04.wss",
				"\a3\sounds_f\weapons\shells\7_62\asphalt_762_05.wss",
				"\a3\sounds_f\weapons\shells\7_62\asphalt_762_06.wss",
				"\a3\sounds_f\weapons\shells\7_62\asphalt_762_07.wss",
				"\a3\sounds_f\weapons\shells\7_62\asphalt_762_08.wss",
				"\a3\sounds_f\weapons\shells\7_62\asphalt_762_09.wss",
				"\a3\sounds_f\weapons\shells\7_62\asphalt_762_10.wss",
				"\a3\sounds_f\weapons\shells\7_62\asphalt_762_11.wss",
				"\a3\sounds_f\weapons\shells\7_62\asphalt_762_12.wss",
				"\a3\sounds_f\weapons\shells\7_62\asphalt_762_13.wss",
				"\a3\sounds_f\weapons\shells\7_62\asphalt_762_14.wss",
				"\a3\sounds_f\weapons\shells\7_62\asphalt_762_15.wss",
				"\a3\sounds_f\weapons\shells\7_62\asphalt_762_16.wss",
				"\a3\sounds_f\weapons\shells\7_62\asphalt_762_17.wss",
				"\a3\sounds_f\weapons\shells\7_62\asphalt_762_18.wss",
				"\a3\sounds_f\weapons\shells\7_62\asphalt_762_19.wss",
				"\a3\sounds_f\weapons\shells\7_62\asphalt_762_20.wss",
				"\a3\sounds_f\weapons\shells\7_62\asphalt_762_21.wss",
				"\a3\sounds_f\weapons\shells\7_62\asphalt_762_22.wss",
				"\a3\sounds_f\weapons\shells\7_62\asphalt_762_23.wss",
				"\a3\sounds_f\weapons\shells\7_62\asphalt_762_24.wss",
				"\a3\sounds_f\weapons\shells\7_62\asphalt_762_25.wss",
				"\a3\sounds_f\weapons\shells\7_62\asphalt_762_26.wss",
				"\a3\sounds_f\weapons\shells\7_62\asphalt_762_27.wss",
				"\a3\sounds_f\weapons\shells\7_62\asphalt_762_28.wss"
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