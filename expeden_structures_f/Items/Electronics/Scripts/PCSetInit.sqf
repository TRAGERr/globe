params["_object"];

if (_object getVariable 'expEden_PCSetScreenDmg_enable') then 
{
	_object spawn BIS_fnc_EXP_m01_destroyElectronics
};

if (_object getVariable 'expEden_PCSetCaseDmg_enable') then 
{
	_object spawn BIS_fnc_EXP_m01_destroyElectronics
};