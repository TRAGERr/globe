if (!isServer) exitWith {};

private _object = param [0, objNull];

private _square = selectRandom 
[
	"\a3\Missions_F_AoW\Data\Img\Artwork\Masters\lost_masterwork_04_co.paa",
	"\a3\props_f_aow\civilian\gallery\data\galleryframe_02_square_picture_co.paa",
	"\A3\Missions_F_AoW\Data\Img\Artwork\Square\showcase_aow_picture_29_co.paa",
	"\A3\Missions_F_AoW\Data\Img\Artwork\Square\showcase_aow_picture_43_co.paa",
	"\A3\Missions_F_AoW\Data\Img\Artwork\Square\showcase_aow_picture_48_co.paa",
	"\A3\Missions_F_AoW\Data\Img\Artwork\Square\showcase_aow_picture_51_co.paa",
	"\A3\Missions_F_AoW\Data\Img\Artwork\Square\showcase_aow_picture_119_co.paa"
];

_object setObjectTextureGlobal [0, _square];

true