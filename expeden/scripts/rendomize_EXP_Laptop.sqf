if (!isServer) exitWith {false};

private _object = param [0, objNull];

private _textures = selectRandom 
[
	"\a3\missions_f_exp\data\Img\lobby\ui_campaign_lobby_background_co.paa",
	"\a3\missions_f_exp\data\Img\lobby\ui_campaign_lobby_background2_co.paa",
	"\a3\missions_f_exp\data\Img\lobby\ui_campaign_lobby_restricted_ca.paa"
];

_object setObjectTextureGlobal [1, _textures];

true