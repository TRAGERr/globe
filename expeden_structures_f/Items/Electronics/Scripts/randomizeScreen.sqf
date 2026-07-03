if (!isServer) exitWith {};
params["_object"];

private _textures = selectRandom 
[
	"\a3\missions_f_oldman\data\img\screens\csatntbdesktop_co.paa",
	"\A3\Missions_F_Beta\data\img\monitors\tablet_fd14_3_co.paa",
	"\A3\Data_F_Exp\Images\FeatureEden_co.paa",
	"\A3\Data_F_Exp_B\Data\FM_Learn_EdenEditor_ca.paa",
	"\A3\Data_F_Bootcamp\Data\FM_Learn_Bootcamp2_ca.paa",
	"\A3\Data_F_Bootcamp\Data\FM_Learn_Bootcamp3_ca.paa",
	"\a3\missions_f_orange\data\img\faction_idap\tv_field_manual_co.paa",
	"\A3\Data_F_Bootcamp\Data\FM_Learn_Bootcamp4_ca.paa",
	"\A3\Data_F_Bootcamp\Data\FM_Learn_Bootcamp5_ca.paa",
	"\A3\Data_F_Exp\Images\FeatureEquipment_co.paa",
	"\A3\Data_F_Bootcamp\Data\FM_Learn_Bootcamp6_ca.paa",
	"\A3\Data_F_Exp\Images\FeatureDifficulty_ca.paa",
	"\A3\Data_F_Exp\Images\FeatureFonts_co.paa",
	"\A3\Data_F_Exp\Images\FeatureGroups_co.paa",
	"\A3\Data_F_Exp\Images\FeatureLauncher_co.paa",
	"\A3\Data_F_Exp_A\Data\FM_Learn_Nexus5_ca.paa",
	"\A3\Data_F_Exp_B\Data\FM_Learn_LauncherServerBrowser_ca.paa",
	"\A3\Data_F_Exp\Images\FeatureQuickplay_co.paa",
	"\A3\Data_F_Exp\Images\FeatureRespawn_co.paa",
	"\A3\Data_F_Exp\Images\FeatureSpectator_co.paa",
	"\A3\Data_F_Exp_A\Data\FM_Learn_Nexus2_ca.paa",
	"\A3\Data_F_Exp_B\Data\FM_Learn_CombatAudio_ca.paa"
];
_object setObjectTextureGlobal [0, _textures];

true