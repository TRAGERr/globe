scriptName "a3\expEden\scripts\fn_laptopSimulationTreminatedAnimate.sqf";

/*
 *
 *	Author: 
 *		Devs 2nd mission of Prolog campaign
 *
 *	Description:
 *		From: "a3\missions_f_bootcamp\Campaign\Missions\BOOT_m02.Altis\intro.sqf"
 *
 */
if (!isServer) exitWith {};

params["_object"];

while {alive _object} do 
{

	_object setObjectTextureGlobal [0,"A3\Missions_F_Bootcamp\data\img\laptop\Electronics_screens_laptop_simulationterminated1_CO.paa"];
	
	sleep 0.5;

	_object setObjectTextureGlobal [0,"A3\Missions_F_Bootcamp\data\img\laptop\Electronics_screens_laptop_simulationterminated2_CO.paa"];
	
	sleep 0.5;
	
};