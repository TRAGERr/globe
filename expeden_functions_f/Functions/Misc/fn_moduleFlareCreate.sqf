scriptName "a3\expEden\scripts\fn_moduleFlareCreate.sqf";
/*
 *
 *	Author: 
 *		- "Protocol APEX" dev. team - functions
 *		- Module function by Trager
 *
 *	Description:
 *		Used: "a3\missions_f_exp\campaign\missions\exp_m04.tanoa\functions\flares"
 *
 */
_logic = _this param [0,objnull,[objnull]];
_activated = _this param [2,true,[true]];

if ({local _x} count (objectCurators _logic) > 0) then {
	//--- Reveal the circle to curators
	_logic hideObject false;
	_logic setPosATL position _logic;
};

if !(isServer) exitWith {};

if (_activated) then {
	private _posMin = (_logic getVariable ["minimumPosition","200"]) call BIS_fnc_parseNumberSafe;
	private _posMax = (_logic getVariable ["maximumPosition","300"]) call BIS_fnc_parseNumberSafe;

	if (_posMin > _posMax) exitWith {FALSE;["'%1' must be < '%2'",_posMin,_posMax] call BIS_fnc_error};

	private _flareColorRED = (_logic getVariable "colorRED");
	private _flareColorRANDOM = (_logic getVariable "colorRANDOM");
	private _is3D = (_logic getVariable "soundIs3D");
	private _t = (_logic getVariable ["randomTime","120"]) call BIS_fnc_parseNumberSafe;

	 while {!isNull _logic} do {
		private _pos = [position _logic, random _posMin, random _posMax] call BIS_fnc_relPos;
		_pos set [2, (150 + random 100)];
		if (_flareColorRED) then {
			private _flare = [
				"RED",
				_pos,
				(20 + random 10),
				(
					 if (_is3D) then {
						TRUE
					} else {
						FALSE
					} 
				)
			] spawn BIS_fnc_EXP_m04_flareCreate;
		} else {
			private _flare = [
				"WHITE",
				_pos,
				(20 + random 10),
				(
					 if (_is3D) then {
						TRUE
					} else {
						FALSE
					} 
				)
			] spawn BIS_fnc_EXP_m04_flareCreate;
		};
		if (!(_flareColorRED) && _flareColorRANDOM) then {
			if (_flareColorRED && _flareColorRANDOM) exitWith {FALSE;["If uou use '%1', - '%2' MUST be DISABLE","RED color", "RANDOM color"] call BIS_fnc_error};
			private _flareColor = selectRandom ["RED","WHITE"];
			private _flare = [
				_flareColor,
				_pos,
				(20 + random 10),
				(
					if (_is3D) then {
						TRUE
					} else {
						FALSE
					} 
				)
			] spawn BIS_fnc_EXP_m04_flareCreate;
		};
		if (_t < 60) exitWith {FALSE;["'%1' must be > 60",_t] call BIS_fnc_error};
		sleep (60 + random _t);
	};
};


// _logic = param [0,objNull,[objNull]];
// _activated = param [2,true,[true]];

// if (_activated) then {

// 	_bombYield = _logic getVariable ["Yield",-1];
// 	hint format ["Bomb yield is: %1", _bombYield ];
// };

// true

// private _flare = ["WHITE", _pos, (15 + random 10), true]