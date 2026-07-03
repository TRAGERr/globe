/*
	bis_fnc_attributeFlagTextures
*/


params["_control"];
_lbadd = _control lbadd "Empty";
_control lbsetdata [_lbadd,''];
_control lbsetpicture [_lbadd,''];
_control lbsettooltip [_lbadd,''];
_control lbsetpictureright [_lbadd,''];

{
	private _config = _x;
	if (gettext (_config >> 'displayname') != '' && getnumber (_config >> 'scope') == 2 && (configName _config isKindOf "FlagCarrier")) then {

		private _flagTexture = getText (_config >> "EventHandlers" >> "init");
		if(_flagTexture == "")then{continue;systemChat "empty"};
		_flagTexture = ((_flagTexture splitString " ") # 4) regexReplace ["'", ""];;

		_lbadd = _control lbadd gettext (_config >> 'displayname');
		_control lbsetdata [_lbadd,_flagTexture];
		_control lbsetpicture [_lbadd,_flagTexture];
		_control lbsettooltip [_lbadd,(_control lbtext _lbadd) + '\n' + (_control lbdata _lbadd)];
		_dlcLogo = if (configsourcemod _config == '') then {''} else {modParams [configsourcemod  _config,['logo']] param [0,'']};
		if (_dlcLogo != '') then {_control lbsetpictureright [_lbadd,_dlcLogo];};
	};
} foreach configproperties [configfile >> 'CfgVehicles','isclass _x'];
lbsort _control;