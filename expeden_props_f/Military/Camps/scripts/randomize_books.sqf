if (!isServer) exitWith {false};

private _object = param [0, objNull];

{
    _object setObjectTextureGlobal [_x, selectRandom ["","a3\props_f_enoch\military\camps\data\portablecabinet_01_books_co.paa"]]
}
forEach [1,2,3,4,5,6,7,8,9];

true