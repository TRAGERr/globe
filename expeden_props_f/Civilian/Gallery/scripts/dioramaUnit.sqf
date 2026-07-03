params["_unit"];

switch (typeOf _unit) do 
{

	case "GalleryDioramaUnit_01_IDAP_Doggo":
	{
		// (scaling issue)
		private _handle = _unit execVM "\a3\props_f_globe\Civilian\Gallery\scripts\dioramaUnit_init.sqf";

		// --- Waiting for BIS_fnc_initInspectable finish, change the texture next
		// All this is for choosing the right texture for the object
		waitUntil {scriptDone _handle};

		_unit setObjectTextureGlobal [0, "\a3\Missions_F_AoW\Data\Img\showcase_aow_diorama_screen_infographic_co.paa"];
	};

	case "GalleryDioramaUnit_01_IDAP_UAV":
	{
		private _handle = _unit execVM "\a3\props_f_globe\Civilian\Gallery\scripts\dioramaUnit_init.sqf";

		// --- Waiting for BIS_fnc_initInspectable finish, change the texture next
		// All this is for choosing the right texture for the object
		waitUntil {scriptDone _handle};

		_unit setObjectTextureGlobal [0, "\a3\Missions_F_AoW\Data\Img\showcase_aow_diorama_screen_infographic_v2_co.paa"];	
	};

};