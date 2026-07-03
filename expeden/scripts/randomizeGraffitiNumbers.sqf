if (!isServer) exitWith {};
params["_object"];

switch (true) do
{

	case (_object isKindOf 'Land_Graffiti_Numbers_1_F'):
	{
		private _textures = selectRandom 
		[
			"\A3\boat_f_destroyer\Destroyer_01\Data\Destroyer_01_N_00_co.paa",
			"\A3\boat_f_destroyer\Destroyer_01\Data\Destroyer_01_N_01_co.paa",
			"\A3\boat_f_destroyer\Destroyer_01\Data\Destroyer_01_N_02_co.paa",
			"\A3\boat_f_destroyer\Destroyer_01\Data\Destroyer_01_N_03_co.paa",
			"\A3\boat_f_destroyer\Destroyer_01\Data\Destroyer_01_N_04_co.paa",
			"\A3\boat_f_destroyer\Destroyer_01\Data\Destroyer_01_N_05_co.paa",
			"\A3\boat_f_destroyer\Destroyer_01\Data\Destroyer_01_N_06_co.paa",
			"\A3\boat_f_destroyer\Destroyer_01\Data\Destroyer_01_N_07_co.paa",
			"\A3\boat_f_destroyer\Destroyer_01\Data\Destroyer_01_N_08_co.paa",
			"\A3\boat_f_destroyer\Destroyer_01\Data\Destroyer_01_N_09_co.paa"
		];
		_object setObjectTextureGlobal [0,_textures]
	};

	case (_object isKindOf 'Land_Graffiti_Numbers_2_F'):
	{
		private _textures = selectRandom 
		[
			"\A3\air_f\Data\0_CA.paa",
			"\A3\air_f\Data\1_CA.paa",
			"\A3\air_f\Data\2_CA.paa",
			"\A3\air_f\Data\3_CA.paa",
			"\A3\air_f\Data\4_CA.paa",
			"\A3\air_f\Data\5_CA.paa",
			"\A3\air_f\Data\6_CA.paa",
			"\A3\air_f\Data\7_CA.paa",
			"\A3\air_f\Data\8_CA.paa",
			"\A3\air_f\Data\9_CA.paa"
		];
		_object setObjectTextureGlobal [0,_textures]
	};

	case (_object isKindOf 'Land_Graffiti_Numbers_3_F'):
	{
		private _textures = selectRandom 
		[
			"\A3\air_f_jets\UAV_05\Data\Numbers\uav05_number_00_ca.paa",
			"\A3\air_f_jets\UAV_05\Data\Numbers\uav05_number_01_ca.paa",
			"\A3\air_f_jets\UAV_05\Data\Numbers\uav05_number_02_ca.paa",
			"\A3\air_f_jets\UAV_05\Data\Numbers\uav05_number_03_ca.paa",
			"\A3\air_f_jets\UAV_05\Data\Numbers\uav05_number_04_ca.paa",
			"\A3\air_f_jets\UAV_05\Data\Numbers\uav05_number_05_ca.paa",
			"\A3\air_f_jets\UAV_05\Data\Numbers\uav05_number_06_ca.paa",
			"\A3\air_f_jets\UAV_05\Data\Numbers\uav05_number_07_ca.paa",
			"\A3\air_f_jets\UAV_05\Data\Numbers\uav05_number_08_ca.paa",
			"\A3\air_f_jets\UAV_05\Data\Numbers\uav05_number_09_ca.paa"
		];
		_object setObjectTextureGlobal [0,_textures]
	};

	case (_object isKindOf 'Land_Graffiti_Numbers_4_F'):
	{
		private _textures = selectRandom 
		[
			"\A3\air_f_jets\plane_fighter_04\data\numbers\fighter_04_number_00_ca.paa",
			"\A3\air_f_jets\plane_fighter_04\data\numbers\fighter_04_number_01_ca.paa",
			"\A3\air_f_jets\plane_fighter_04\data\numbers\fighter_04_number_02_ca.paa",
			"\A3\air_f_jets\plane_fighter_04\data\numbers\fighter_04_number_03_ca.paa",
			"\A3\air_f_jets\plane_fighter_04\data\numbers\fighter_04_number_04_ca.paa",
			"\A3\air_f_jets\plane_fighter_04\data\numbers\fighter_04_number_05_ca.paa",
			"\A3\air_f_jets\plane_fighter_04\data\numbers\fighter_04_number_06_ca.paa",
			"\A3\air_f_jets\plane_fighter_04\data\numbers\fighter_04_number_07_ca.paa",
			"\A3\air_f_jets\plane_fighter_04\data\numbers\fighter_04_number_08_ca.paa",
			"\A3\air_f_jets\plane_fighter_04\data\numbers\fighter_04_number_09_ca.paa"
		];
		_object setObjectTextureGlobal [0,_textures]
	};

	case (_object isKindOf 'Land_Graffiti_Numbers_5_F'):
	{
		private _textures = selectRandom 
		[
			"\A3\air_f_jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_00_co.paa",
			"\A3\air_f_jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_01_co.paa",
			"\A3\air_f_jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_02_co.paa",
			"\A3\air_f_jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_03_co.paa",
			"\A3\air_f_jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_04_co.paa",
			"\A3\air_f_jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_05_co.paa",
			"\A3\air_f_jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_06_co.paa",
			"\A3\air_f_jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_07_co.paa",
			"\A3\air_f_jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_08_co.paa",
			"\A3\air_f_jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_09_co.paa"
		];
		_object setObjectTextureGlobal [0,_textures]
	};

};