if (!isServer) exitWith {false};

private _object = param [0, objNull];

private _orangeChilds = selectRandom 
[
	"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_01_CO.paa",
	"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_01_dirty_CO.paa",
	"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_02_CO.paa",
	"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_03_CO.paa",
	"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_04_CO.paa",
	"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_05_CO.paa",
	"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_06_CO.paa",
	"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_D_01_CO.paa",
	"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_J_01_CO.paa",
	"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_J_02_CO.paa",
	"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_J_03_CO.paa",
	"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_JC_01_CO.paa",
	"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_JC_02_CO.paa",
	"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_01_CO.paa",
	"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_02_CO.paa",
	"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_03_CO.paa",
	"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_04_CO.paa",
	"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_05_CO.paa",
	"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_06_CO.paa",
	"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_07_CO.paa",
	"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_08_CO.paa",
	"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_09_CO.paa",
	"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_K_10_CO.paa",
	"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_Kor_01_CO.paa",
	"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_P_01_CO.paa",
	"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_P_02_CO.paa",
	"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_P_03_CO.paa",
	"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_P_04_CO.paa",
	"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_05_CO.paa",
	"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_06_CO.paa",
	"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_07_CO.paa",
	"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_08_CO.paa",
	"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_09_CO.paa",
	"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_10_CO.paa",
	"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_S_11_CO.paa",
	"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_T_01_CO.paa",
	"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_T_02_CO.paa",
	"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_T_03_CO.paa",
	"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_T_04_CO.paa"
];

_object setObjectTextureGlobal [0, _orangeChilds];

true