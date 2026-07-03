if (!isServer) exitWith {};
params["_canister"];

_canister setObjectTextureGlobal
[
	0,
	selectRandom
	[
		"a3\Props_F_Orange\Humanitarian\Supplies\Data\canisterfuel_red_co.paa",
		"a3\Props_F_Orange\Humanitarian\Supplies\Data\canisterfuel_Blue_co.paa",
		"a3\Props_F_Orange\Humanitarian\Supplies\Data\canisterfuel_White_co.paa",
		"a3\structures_f\items\vessels\data\canisterfuel_co.paa"
	]
];