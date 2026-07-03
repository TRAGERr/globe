params["_radio"];

if (_radio getVariable 'expEden_FMRadioMusic_enable') then 
{
	_radio spawn expEden_fnc_radioNewsMusic
};

if (_radio getVariable 'expEden_FMRadioDamage_enable') then 
{
	_radio spawn BIS_fnc_EXP_m01_destroyElectronics
};