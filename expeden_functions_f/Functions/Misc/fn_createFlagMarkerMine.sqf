params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];
if (isNull _projectile) exitWith {};

if (isServer) then 
{
	private _flag = createVehicle ["FlagMarker_01_G_mines", [0,0,0], [], 0, "CAN_COLLIDE"];
	_flag attachTo [_projectile, [0.23, 0.05, 0.175]];
	_projectile setVariable ['Globe_mineFlag', _flag, true];

	private _actionSphere = createVehicle ["Sign_Sphere100cm_Geometry_F", [0,0,0], [], 0, "CAN_COLLIDE"];
	_actionSphere attachTo [_projectile, [0.23, 0.05, 0.175]];
	_actionSphere setObjectTextureGlobal [0, "#(argb,8,8,3)color(0,0,0,0,ca)"];
	_projectile setVariable ['Globe_mineAction', _actionSphere, true];

	[
		_actionSphere,
		[
			localize "STR_Globe_CfgWeapons_LandmineMarker_01_G3",
			{
				params ["_target", "_caller", "_actionId", "_arguments"];
				_caller action ["Deactivate", _caller, (_arguments # 0)];
				_target remoteExecCall ["deleteVehicle", 2];
				_target removeAction _actionId;
			},
			[_projectile],
			9.1000004,
			true,
			true,
			"",
			"(!(_this getUnitTrait 'ExplosiveSpecialist')) || ((_this getUnitTrait 'ExplosiveSpecialist') && (!((items _this) findIf {getNumber (configFile >> 'CfgWeapons' >> _x >> 'ItemInfo' >> 'type') == 620} != -1)))", 
			6.5,
			false,
			"",
			""
		]
	] remoteExec ["addAction",0,_actionSphere];
	_actionSphere setUserActionText [0, localize "STR_Globe_CfgWeapons_LandmineMarker_01_G3", "<img image='\A3\ui_f\data\igui\cfg\actions\ico_OFF_ca.paa' size='1.8' shadow=2 />", "<img image='\A3\ui_f\data\igui\cfg\actions\ico_OFF_ca.paa' size='1.8' shadow=2 />"];
};

_projectile addEventHandler 
[
	"Deleted",
	{
		params ["_projectile"];
		deleteVehicle (_projectile getVariable 'Globe_mineFlag');
	}
];

_projectile addEventHandler 
[
	"MineActivated",
	{
		params ["_projectile", "_isActive"];
		deleteVehicle (_projectile getVariable 'Globe_mineFlag')
	}
];