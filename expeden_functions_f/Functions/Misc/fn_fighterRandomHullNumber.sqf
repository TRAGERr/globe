params["_object"];
if (isNull _object || !(isServer)) exitWith {false};

switch true do 
{
    case (_object isKindOf "Plane_Fighter_01_Base_F"): 
    {

        [7,8,9] findIf 
        {
            _object setObjectTextureGlobal [_x,  format ["A3\Air_F_Jets\Plane_Fighter_01\Data\Numbers\Fighter_01_0%1_ca.paa", selectRandom [0,1,2,3,4,5,6,7,8,9]]   ];
            _object setObjectMaterialGlobal [_x, "a3\air_f_jets\plane_fighter_01\data\numbers\fighter_01_numbers.rvmat"];
        };
        true

    };
    case (_object isKindOf "Plane_Fighter_02_Base_F"): 
    {

        [3,4,5] findIf
        {
            _object setObjectTextureGlobal [_x,  format ["A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_0%1_co.paa", selectRandom [0,1,2,3,4,5,6,7,8,9]]   ];
            _object setObjectMaterialGlobal [_x, "a3\air_f_jets\plane_fighter_02\data\numbers\fighter_02_numbers.rvmat"];
        };
        true

    };
    case (_object isKindOf "Plane_Fighter_04_Base_F"): 
    {

        [3,4,5] findIf
        {
            _object setObjectTextureGlobal [_x,  format ["A3\Air_F_Jets\Plane_Fighter_04\Data\Numbers\Fighter_04_number_0%1_ca.paa", selectRandom [0,1,2,3,4,5,6,7,8,9]]   ];
            _object setObjectMaterialGlobal [_x, "a3\air_f_jets\plane_fighter_04\data\numbers\fighter_04_numbers.rvmat"];
        };
        true

    };
    default 
    {
        false
    };
};