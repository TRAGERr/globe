if (!isServer) exitWith {};

private _object = param [0, objNull];

private _ctrg = selectRandom 
[
	"\A3\missions_f_oldman\Data\img\Screens\MillerNtbScreen01_co.paa",
	"\A3\missions_f_oldman\Data\img\Screens\MillerNtbScreen02_co.paa",
	"\A3\missions_f_exp\data\Img\lobby\ui_campaign_lobby_background_co.paa",
	"\A3\missions_f_exp\data\Img\lobby\ui_campaign_lobby_background2_co.paa",
	"\A3\missions_f_exp\data\Img\lobby\ui_campaign_lobby_restricted_ca.paa",
	"\A3\missions_f_exp\data\Img\exp_m01_monitor_ca.paa"
];

_object setObjectTextureGlobal [1, _ctrg];

true