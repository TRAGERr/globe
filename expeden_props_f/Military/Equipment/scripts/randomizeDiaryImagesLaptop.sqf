if (!isServer) exitWith {};

private _object = param [0, objNull];
private _type = typeOf _object;

private _imagesAltis = 
[
	"\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Abdera_ca.paa",
	"\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Aggelochori_ca.paa",
	"\A3\ui_f_curator\Data\CfgDiaryImages\Altis\AgiaTriada_ca.paa",
	"\A3\ui_f_curator\Data\CfgDiaryImages\Altis\AgiosDionysios_ca.paa",
	"\A3\ui_f_curator\Data\CfgDiaryImages\Altis\AgiosKonstantinos_ca.paa",
	"\A3\ui_f_curator\Data\CfgDiaryImages\Altis\AgiosPetros_ca.paa",
	"\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Alikampos_ca.paa",
	"\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Anthrakia_ca.paa",
	"\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Athira_ca.paa",
	"\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Chalkeia_ca.paa",
	"\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Charkia_ca.paa",
	"\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Delfinaki_ca.paa",
	"\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Dorida_ca.paa",
	"\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Ekali_ca.paa",
	"\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Feres_ca.paa",
	"\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Frini_ca.paa",
	"\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Gravia_ca.paa",
	"\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Ifestiona_ca.paa",
	"\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Ioannina_ca.paa",
	"\A3\ui_f_curator\Data\CfgDiaryImages\Altis\AgiosPetros_ca.paa",
	"\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Kalithea_ca.paa",
	"\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Kalochori_ca.paa",
	"\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Katalaki_ca.paa",
	"\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Kavala_ca.paa",
	"\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Kore_ca.paa",
	"\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Koroni_ca.paa",
	"\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Lakka_ca.paa",
	"\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Molos_ca.paa",
	"\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Negades_ca.paa",
	"\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Neochori_ca.paa",
	"\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Neri_ca.paa",
	"\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Nifi_ca.paa",
	"\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Oreokastro_ca.paa",
	"\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Orino_ca.paa",
	"\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Panagia_ca.paa",
	"\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Panochori_ca.paa",
	"\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Paros_ca.paa",
	"\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Poliakko_ca.paa",
	"\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Pyrgos_ca.paa",
	"\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Rodopoli_ca.paa",
	"\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Selakano_ca.paa",
	"\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Sofia_ca.paa",
	"\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Stavros_ca.paa",
	"\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Syrta_ca.paa",
	"\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Telos_ca.paa",
	"\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Therisa_ca.paa",
	"\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Topolia_ca.paa",
	"\A3\ui_f_curator\Data\CfgDiaryImages\Altis\Zaros_ca.paa"
];

private _imagesStratis = 
[
	"\A3\ui_f_curator\Data\CfgDiaryImages\Stratis\AgiaMarina_ca.paa",
	"\A3\ui_f_curator\Data\CfgDiaryImages\Stratis\AirStationMike26_ca.paa",
	"\A3\ui_f_curator\Data\CfgDiaryImages\Stratis\CampMaxwell_ca.paa",
	"\A3\ui_f_curator\Data\CfgDiaryImages\Stratis\CampRogain_ca.paa",
	"\A3\ui_f_curator\Data\CfgDiaryImages\Stratis\CampTempest_ca.paa",
	"\A3\ui_f_curator\Data\CfgDiaryImages\Stratis\Girna_ca.paa",
	"\A3\ui_f_curator\Data\CfgDiaryImages\Stratis\KaminoFiringRange_ca.paa",
	"\A3\ui_f_curator\Data\CfgDiaryImages\Stratis\stratisAirBase_ca.paa"
];

switch (_type) do
{
	case ("Laptop_03_G_DiaryImagesAltis_random"):
	{
		_object setObjectTextureGlobal [1, selectRandom _imagesAltis];
	};

	case ("Laptop_03_G_DiaryImagesStratis_random"):
	{
		_object setObjectTextureGlobal [1, selectRandom _imagesStratis];
	};

	case ("Laptop_03_G_DiaryImagesAltisStratis_random"):
	{
		_object setObjectTextureGlobal [1, selectRandom (_imagesAltis + _imagesStratis)];
	};
};