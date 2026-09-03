
private _mode = param [0,"",[""]];
private _this = param [1,[]];

/*
	_showData
		param 1 - west 
		param 2 - east
		param 3 - indeps
		param 4 - civs
*/
_showData = missionNamespace getVariable ["Globe_ShowLoW", [false,false,false,false]];
_hint = [];
switch _mode do
{

	case "entityKilled":
	{
		_obj			= param [0,objnull,[objnull]];
		_shooter		= param [1,objnull,[objnull]];
		_shooterReal	= param [2,objnull,[objnull]];
		_objSide		= side group _obj;

		if (_shooter != player && _shooterReal != player) exitwith {};
		if (!([side player] call expEden_fnc_showLawOfWarCondition)) exitWith {};

		if !(isnull group _obj) then 
		{

			//--- Art. 51 - Civilian Population
			if (_objSide == civilian && {primaryweapon _obj == "" && secondaryweapon _obj == "" && handgunweapon _obj == ""}) exitwith 
			{
				_hint = ["GenevaConvention_G","Article51","Hint"];
			};

			//--- Art. 41 - Safeguard of an enemy hors de combat
			//--→ 		Apan 			ApanPknlMsprSnonWnonDfl
			if 
			(
				(
					(lifeState _obj == "INCAPACITATED")
					|| (captive _obj)
					|| ((toLower (animationState _obj)) in ['amovpercmstpssurwnondnon', 'ace_amovpercmstpssurwnondnon', 'ace_amovpercmstpscapwnondnon', 'acts_executionvictim_loop', 'apan', 'acts_aidlpsitmstpssurwnondnon', 'acts_civilinjured'])
				)
				&& {!([_objSide,side group _shooter] call bis_fnc_areFriendly)}
				&& currentWeapon _obj != ""
			) exitwith
			{
				_hint = ["GenevaConvention_G","Article41","Hint"];
			};

			//--- Art. 42 - Occupants of Aircraft
			if (vehicle _obj iskindof "ParachuteBase" && {_obj getvariable ["isPilot",false] || {gettext (configfile >> "CfgVehicles" >> typeof _obj >> "textSingular") == "pilot"}}) exitwith 
			{
				_hint = ["GenevaConvention_G","Article42","Hint"];
			};
		}
		else
		{
			private _cfgObj = configfile >> "CfgVehicles" >> typeof _obj;
			private _editorSubcategory = tolower gettext (_cfgObj >> "editorSubcategory");

			//--- Art. 53 - Cultural Objects
			if ((_editorSubcategory in ["edsubcat_historical","edsubcat_religious"])||(tolower getText (_cfgObj >> "vehicleClass") isEqualTo 'structures_cultural')) exitwith 
			{
				_hint = ["GenevaConvention_G","Article53","Hint"];
			};

			//--- Art. 52 - Civilian Objects
			// if (_editorSubcategory in ["edsubcat_residential_city","edsubcat_residential_village","edsubcat_services"]) exitwith 
			// {
			// 	_hint = ["GenevaConvention_G","Article52","Hint"];
			// };
			if (_editorSubcategory in ["edsubcat_residential_city","edsubcat_residential_village","edsubcat_services"]) exitwith 
			{
				private _bBox = boundingBoxReal _obj;
				private _p1 = _bBox select 0;
				private _p2 = _bBox select 1;
				private _radius = (_p1 distance _p2) * 0.5;

				private _unitsNear = (getPosATL _obj) nearEntities ["Man", _radius];
				private _hasEnemiesInside = false;
				{
					if (alive _x && (insideBuilding _x == 1) && ([side group _shooter, side group _x] call BIS_fnc_sideIsEnemy)) exitWith //→ no crime if in building enemy + civs
					{
						_hasEnemiesInside = true;
					};
				} forEach _unitsNear;
				if (_hasEnemiesInside) exitWith {};

				_hint = ["GenevaConvention_G", "Article52", "hint"];
			};

			/*
			if ((getNumber (_cfgObj >> "attendant") == 1) && (getNumber (_cfgObj >> "transportAmmo") == 0)) exitwith 
			{
				private _hasDangerWeapon = false;

				private _allTurrets = allTurrets _obj;
				_allTurrets pushBackUnique [-1];
				{
					private _turretPath = _x;
					private _turretWeapons = _obj weaponsTurret _turretPath;

					{
						private _weapon = _x;
						private _magazines = getArray (configFile >> "CfgWeapons" >> _weapon >> "magazines");

						{
							private _mag = _x;
							private _ammoType = getText (configFile >> "CfgMagazines" >> _mag >> "ammo");
							
							if (_ammoType != "") then
							{
								private _hitDamage = getNumber (configFile >> "CfgAmmo" >> _ammoType >> "hit");
								if (_hitDamage > 0) exitWith
								{
									_hasDangerWeapon = true;
								};
							};
						} forEach _magazines;

						if (_hasDangerWeapon) exitWith {};
					} forEach _turretWeapons;

					if (_hasDangerWeapon) exitWith {};
				} forEach _allTurrets;
	
				if (_hasDangerWeapon) then 
				{
					_hint = ["GenevaConvention_G", "Article38", "Hint"];
				} 
				else 
				{
					_hint = ["GenevaConvention_G", "Article35", "Hint"];
				};
			};
			*/
		};
	};

	case "firedCluster": 
	{
		private _shooter	= param [0,objnull,[objnull]];
		private _ammo		= param [4,'',['']];
		private _magazine	= param [5,'',['']];

		if !('cluster' in (toLower _magazine)) 	exitWith {};
		if !('cluster' in (toLower _ammo)) 		exitWith {};
		if (_shooter != player) exitwith {};
		if (!([side player] call expEden_fnc_showLawOfWarCondition)) exitWith {};
	
		_hint = ["ClusterConvention_G","Article1","Hint"];
	};

	case "firedMine":
	{
		private _shooter	= param [0,objnull,[objnull]];
		private _ammo		= param [4,'',['']];

		if (getNumber (configfile >> "CfgAmmo" >> _ammo >> "hit") <= 0)	exitwith {};
		if (_shooter != player) exitwith {};
		if (!([side player] call expEden_fnc_showLawOfWarCondition)) exitWith {};

		_hint = ["OttawaTreaty_G","Article3","Hint"];
	};

	case "postInit": 
	{
		addMissionEventHandler ["entityKilled",{["entityKilled",_this] call expEden_fnc_showLawOfWar}];
	};
};

if (count _hint > 0) then 
{
	[_hint,10,"",10,"",true,true,false,false] call BIS_fnc_advHint;
};