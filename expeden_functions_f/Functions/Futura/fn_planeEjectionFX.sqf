/*
	Author: Bravo Zero One development
	- John_Spartan

	Description:
	- This function is designed as part of set of functions to implement semi-authenthic ejection system on fixed wing aircrfat that have such functionality enabled/configured.
	- Function created to add FX (sound/particles) for ejection feature.


		READ ME			READ ME			READ ME		READ ME			READ ME			READ ME		READ ME			READ ME			READ ME
		---> 	This function has been modified by the O&T Expansion Eden mod to fix:
					1) missing audio when ejecting (a gap in locality);
					2) the parameters of this sound were overwritten with the default say3D command and not the ones that were intended;
					3) The function is executed on the client and using createVehicleLocal prevents other players from seeing the visual FX
				Changes made by this mod will be removed from the mod immediately after fixing it in the game data, see https://feedback.bistudio.com/T174022
		READ ME			READ ME			READ ME		READ ME			READ ME			READ ME		READ ME			READ ME			READ ME


	Exucution:
	- Call from within the main ejection fnc (on demand).

		Example:
		[_plane, _ejectionSeat] spawn BIS_fnc_planeEjectionFX;

	Requirments:
	- Compatible ejector seat must have a hide animation for rocket motor flash and position for FX to be attached. (TO DO PARAMETARIZE)
		Inehector seats model.cfg
		class Animations
		{

			class Rocket_Flash_hide
			{
				type = "hide";
				source = "user";
				selection = "rocket_flash";
				sourceAddress = "mirror";
				minValue = -1.5;
				maxValue = 0;
				hideValue = 0.99;


			};
		};

	Parameter(s):
		_this select 0: mode (Scalar)
		0: plane/object
		1: ejector seat/object


	Returns: nothing
	Result: Set of particle FX and sound FX will be aplied to ejection feature.
*/

private _plane = param [0,objNull];
private _ejectionSeat = param [1,objNull];
if (isNull _plane || isNull _ejectionSeat) exitWith {};

private _configPath = configFile >> "CfgVehicles" >> (typeOf _plane) >> "EjectionSystem";
private _ejectionSoundInt = getText (_configPath >> "EjectionSoundInt");
private _ejectionSoundExt = getText (_configPath >> "EjectionSoundExt");

[
	[_plane, _ejectionSoundInt, _ejectionSoundExt], 
	{
		params["_plane", "_ejectionSoundInt", "_ejectionSoundExt"];
		if (hasInterface) then
		{
			if (player in (crew _plane)) then
			{
				playSound _ejectionSoundInt
			}
			else
			{
				_plane say3D [_ejectionSoundExt, 1400, 1, 0, 0, true];
			};
		};
	}
] remoteExec ["spawn", 0];

_ejectionSeat animate ["Rocket_Flash_hide",1];

[
	[_plane, _ejectionSeat],
	{
		params ["_p", "_s"];
		if (isNull _p || isNull _s) exitWith {};

		private _light = "#lightpoint" createVehicleLocal (getPos _s);
		_light setLightBrightness 0.3;
		_light setLightAmbient[0.8, 0.6, 0.2];
		_light setLightColor[1, 0.5, 0.2];
		// _light lightAttachObject [_s, [0,0,0]];
		_light attachTo [_s];

		private _smokeTrail = "#particlesource" createVehicleLocal (getPos _s);
		_smokeTrail setParticleClass "FX_EjectorSeatSmoke";
		_smokeTrail attachTo [_s, [0,0,0], "FX_pos"];

		private _smokePlane = "#particlesource" createVehicleLocal (getPos _p);
		_smokePlane setParticleClass "FX_EjectorSeatSmoke";
		_smokePlane attachTo [_p, [0,0,0], "pos_eject"];

		[_light, _smokePlane, _smokeTrail, _s] spawn 
		{
			params ["_l", "_sp", "_st", "_seat"];
			sleep 0.05;
			deleteVehicle [_l, _sp];
			sleep 0.2;
			if (!isNull _seat) then {_seat animate ["Rocket_Flash_hide", 0]};
			sleep 0.3;
			deleteVehicle _st;
		};
	}
] remoteExec ["spawn", [0, -2] select isDedicated];