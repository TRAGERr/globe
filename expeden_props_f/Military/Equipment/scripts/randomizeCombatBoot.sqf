if (!isServer) exitWith {};
private _combatBoot = param [0, objNull];

_combatBoot animateSource ["Hide_Helmet", 1, true];
_combatBoot animateSource ["Hide_Weapon", 1, true];
_combatBoot animateSource ["Hide_Sandbags", 1, true];

private _handler = [_combatBoot] spawn
{
	params["_combatBoot"];
	_combatBoot animateSource ["Hide_Base_Generic", 1, true];
	_combatBoot animateSource ["Hide_Base_NATO", 1, true];
	_combatBoot animateSource ["Hide_Base_CSAT", 1, true];
	_combatBoot animateSource ["Hide_Base_AAF", 1, true];
	_combatBoot animateSource ["Hide_Base_LDF", 1, true];
};

[_handler,_combatBoot] spawn
{
	params["_handler","_combatBoot"];

	waitUntil {scriptDone _handler};
	switch (ceil random 4) do
	{
		case 1:
		{
			_combatBoot animateSource ["Hide_Base_NATO", 0, true];
			_combatBoot setObjectTextureGlobal
			[
				0,
				selectRandom
				[
					"a3\Characters_F_Enoch\Uniforms\Data\clothing_mcam_wdl_co.paa",
					"a3\characters_f\blufor\data\clothing1_co.paa"
				]
			];
		};
		case 2:
		{
			_combatBoot animateSource ["Hide_Base_CSAT", 0, true];
			_combatBoot setObjectTextureGlobal [0,"a3\characters_f\opfor\data\clothing_co.paa"];
		};
		case 3:
		{
			_combatBoot animateSource ["Hide_Base_AAF", 0, true];
			_combatBoot setObjectTextureGlobal [0,"a3\characters_f_beta\indep\data\ia_soldier_01_clothing_co.paa"];
		};
		case 4:
		{
			_combatBoot animateSource ["Hide_Base_LDF", 0, true];
			_combatBoot setObjectTextureGlobal [0,"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_pants_co.paa"];
		};
	};
};