params["_object"];

if (_object getVariable 'expEden_PCSetScreenDmg_enable' && typeOf _object isEqualTo 'Land_PCSet_01_screen_F') then 
{
	_object spawn BIS_fnc_EXP_m01_destroyElectronics
};

if (_object getVariable 'expEden_PCSetCaseDmg_enable' && typeOf _object isEqualTo 'Land_PCSet_01_case_F') then 
{
	_object spawn BIS_fnc_EXP_m01_destroyElectronics
};

true