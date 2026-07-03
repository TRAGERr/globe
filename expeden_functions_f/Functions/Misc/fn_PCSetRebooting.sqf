params[["_screen",objNull,[objNull]]];
if (isNull _screen) exitWith {};
if (!isServer) exitWith {};

waitUntil {time > 0};
while {true} do
{
	if (alive _screen && !(isNull _screen)) exitWith {};

	private _future22 = time + random 10;
	waitUntil {time >= _future22};
	_screen setObjectTextureGlobal [0,"\A3\missions_f_oldman\Data\img\Screens\CSATNtbReboot25_co.paa"];

	private _future56 = time + random 300;
	waitUntil {time >= _future56};
	_screen setObjectTextureGlobal [0,"\A3\missions_f_oldman\Data\img\Screens\CSATNtbReboot50_co.paa"];

	private _future78 = time + random 300;
	waitUntil {time >= _future78};
	_screen setObjectTextureGlobal [0,"\A3\missions_f_oldman\Data\img\Screens\CSATNtbReboot75_co.paa"];
	
	private _futureLoop = time + random 300;
	waitUntil {time >= _futureLoop};

	_screen setObjectTextureGlobal [0,""];
};