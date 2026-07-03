if (!isServer) exitWith {};

private _object = param [0, objNull];

private _nato = selectRandom 
[
	"\a3\data_f\flags\flag_nato_co.paa",
	"\A3\missions_f_exp\data\Img\lobby\ui_campaign_lobby_background_co.paa",
	"\A3\missions_f_exp\data\Img\lobby\ui_campaign_lobby_background2_co.paa",
	"\A3\missions_f_exp\data\Img\lobby\ui_campaign_lobby_restricted_ca.paa"
];

_object setObjectTextureGlobal [0, _nato];

true