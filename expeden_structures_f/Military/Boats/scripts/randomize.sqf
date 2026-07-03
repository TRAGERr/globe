if (!isServer) exitWith {};

private _object = param [0, objNull];

_object setObjectTextureGlobal [0, (format ["\A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_N_0%1_co.paa",ceil random 9])];
_object setObjectTextureGlobal [1, (format ["\A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_N_0%1_co.paa",ceil random 9])];
_object setObjectTextureGlobal [2, (format ["\A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_N_0%1_co.paa",ceil random 9])];

true