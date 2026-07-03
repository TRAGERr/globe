if (!isServer) exitWith {};

private _object = param [0, objNull];

private _portrait = selectRandom 
[
	"\a3\props_f_aow\civilian\gallery\data\galleryframe_01_large_portrait_picture_f_co.paa",
	"\A3\missions_f_aow\data\Img\Artwork\Portrait\showcase_aow_picture_08_co.paa",
	"\A3\missions_f_aow\data\Img\Artwork\Portrait\showcase_aow_picture_54_co.paa",
	"\A3\missions_f_aow\data\Img\Artwork\Portrait\showcase_aow_picture_55_co.paa"
];

_object setObjectTextureGlobal [0, _portrait];

true