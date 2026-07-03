switch (typeOf _this) do 
{

	// Civilians
	case "Leaflet_05_civilian_F": 
	{
		['init', [_this,'Civ']] remoteExec ['bis_fnc_initLeaflet'];
	};

	case "Leaflet_05_Old_civilian_F": 
	{
		['init', [_this,'Civ']] remoteExec ['bis_fnc_initLeaflet'];
	};

	case "Leaflet_05_New_civilian_F": 
	{
		['init', [_this,'Civ']] remoteExec ['bis_fnc_initLeaflet'];
	};



	// CSAT
	case "Leaflet_05_CSAT_F": 
	{
		['init', [_this,'east']] remoteExec ['bis_fnc_initLeaflet'];
	};

	case "Leaflet_05_Old_CSAT_F": 
	{
		['init', [_this,'east']] remoteExec ['bis_fnc_initLeaflet'];
	};

	case "Leaflet_05_New_CSAT_F": 
	{
		['init', [_this,'east']] remoteExec ['bis_fnc_initLeaflet'];
	};



	// FIA
	case "Leaflet_05_FIA_F": 
	{
		['init', [_this,'Guer']] remoteExec ['bis_fnc_initLeaflet'];
	};

	case "Leaflet_05_Old_FIA_F": 
	{
		['init', [_this,'Guer']] remoteExec ['bis_fnc_initLeaflet'];
	};

	case "Leaflet_05_New_FIA_F": 
	{
		['init', [_this,'Guer']] remoteExec ['bis_fnc_initLeaflet'];
	};



	// NATO
	case "Leaflet_05_NATO_F": 
	{
		['init', [_this,'west']] remoteExec ['bis_fnc_initLeaflet'];
	};

	case "Leaflet_05_Old_NATO_F": 
	{
		['init', [_this,'west']] remoteExec ['bis_fnc_initLeaflet'];
	};

	case "Leaflet_05_New_NATO_F": 
	{
		['init', [_this,'west']] remoteExec ['bis_fnc_initLeaflet'];
	};

};