if (!isServer) exitWith {false};

private _object = param [0, objNull];

private _photo = selectRandom 
[
	"\a3\structures_f_enoch\cultural\OrthodoxChurches\Data\church_05r_scrap_co.paa",
	"\a3\structures_f_enoch\cultural\OrthodoxChurches\Data\env_win_co.paa",
	"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_09_CO.paa",
	"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_08_CO.paa",
	"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_07_CO.paa",
	"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_06_CO.paa",
	"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_05_CO.paa",
	"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_03_CO.paa",
	"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_02_CO.paa",
	"\a3\missions_f_orange\data\img\orange_compositions\s4+s5\s4_photowall_01_co.paa",
	"\a3\missions_f_oldman\Data\img\Paintings\oldman_painting_v1_co.paa",
	"\a3\missions_f_oldman\Data\img\Paintings\oldman_painting_v2_co.paa",
	"\a3\missions_f_oldman\Data\img\Paintings\oldman_painting_v3_co.paa",
	"\a3\missions_f_oldman\Data\img\Paintings\oldman_painting_v4_co.paa",
	"\a3\missions_f_oldman\Data\img\Paintings\oldman_painting_v5_co.paa",
	"\a3\data_f\env_land_optic_co.paa",
	"\a3\data_f\env_underwater_co.paa",
	"\a3\data_f\env_interier_cargo_ca.paa",
	"\a3\data_f\env_interier02_car_ca.paa",
	"\a3\data_f\env_interior_tank_01_co.paa",
	"\a3\missions_f_tacops\data\img\Intros\C01\TO_C01_5_5_skybox.paa",
	"\a3\data_f_enoch\Images\Livonia_ca.paa",
	"\a3\data_f_enoch\Images\TinFoilHat_ca.paa",
	"\a3\data_f_enoch\Images\EnochZGM_ca.paa",
	"\a3\data_f_enoch\Images\enoch_overviewPicture_co.paa",
	"\a3\data_f_enoch\Images\enoch_fm_overview_co.paa",
	"\a3\data_f_exp\Images\apex_contentBrowserPicture_co.paa",
	"\a3\data_f_exp\Images\FeatureAudio_co.paa",
	"\a3\data_f_exp\Images\FeatureTanoaTerrain_co.paa",
	"\a3\data_f_exp\Images\FeatureVehicleInVehicle_co.paa",
	"\a3\data_f_argo\images\AssetMaldenBillboards_co.paa",
	"\a3\data_f_argo\images\AssetMaldenStructures_co.paa",
	"\a3\data_f_argo\images\AssetMaldenTerrain_co.paa",
	"\a3\missions_f_tacops\data\img\logoYouTube_ca.paa",
	"\a3\map_malden\data\ui_Malden_ca.paa",
	"\a3\missions_f_patrol\data\img\mp_zgm_m15_overview_ca.paa",
	"\a3\props_f_orange\items\decorative\data\photos_camo_co.paa",
	"\a3\missions_f_orange\data\img\orange_hub\photoframe_ca.paa",
	"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_photo_CO.paa",
	"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S7+S8\S8_Camping_01_CO.paa",
	"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S4+S5\S5_drawings_04_CO.paa",
	"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\S1+S2+S3+S6\S3_Chef_01_CO.paa",
	"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\Shared\Photoframe_random_01_CO.paa",
	"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\Shared\Photoframe_random_02_CO.paa",
	"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\Shared\Photoframe_random_03_CO.paa",
	"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\Shared\Photoframe_random_04_CO.paa",
	"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\Shared\Photoframe_random_05_CO.paa",
	"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\Shared\Photoframe_random_06_CO.paa",
	"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\Shared\Photoframe_random_07_CO.paa",
	"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\Shared\Photoframe_random_08_CO.paa"
];

_object setObjectTextureGlobal [0, _photo];

true