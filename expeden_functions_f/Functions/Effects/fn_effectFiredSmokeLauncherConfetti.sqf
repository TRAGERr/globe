private _v = _this # 0;
_shells = [];

private _cfg = configFile >> "CfgVehicles" >> typeOf _v;
private _num = getNumber (_cfg >> "smokeLauncherGrenadeCount");

if (_num > 0) then 
{
	private _vel 		= getNumber (_cfg >> "smokeLauncherVelocity");
	private _useTDir 	= getNumber (_cfg >> "smokeLauncherOnTurret");
	private _angle 		= getNumber (_cfg >> "smokeLauncherAngle");

	private _dir = direction _v;
	if (_useTDir isEqualTo 1) then 
	{
		private _weapons = weapons _v;
		if (count _weapons > 0) then 
		{
			private _weaponDir = _v weaponDirection (_weapons select 0);
			_dir = ((_weaponDir select 0) atan2 (_weaponDir select 1)) % 360;
		};
	};

	private _deltaDir 	= _angle / _num;
	private _arc 		= _deltaDir * (_num - 1);
	private _initDist 	= (((boundingBox _v) select 1) select 2) - (((boundingBox _v) select 0) select 2);
	private _posV 		= getPosASL _v;
	private _Vdir 		= 30;
	private _vH 		= _vel * cos _Vdir;
	private _vV 		= _vel * sin _Vdir;

	for "_i" from 0 to (_num - 1) do 
	{

		private _Hdir = ((_i * _deltaDir) + _dir) - _arc/2;
		private _Gvel = [_vH * sin _Hdir, _vH * cos _Hdir, _vV];
		private _pH = _initDist * cos _Vdir;
		private _pV = _initDist * sin _Vdir;

		private _confettig = "SmokeLauncherConfettiAmmoSlug" createVehicleLocal [0,0,0];
		_confettig setPosASL 
		[
			(_pH * sin _Hdir) + (_posV select 0), 
			(_pH * cos _Hdir) + (_posV select 1), 
			_pV + (_posV select 2)
		];
		_confettig setVelocity _Gvel;

		_confettig spawn
		{
			sleep 0.57;

			_this spawn
			{
				sleep (random 0.3);
	
				private _cloudClasses = 
				[
					"ConfettiCloudRed", "ConfettiCloudBlue", "ConfettiCloudGreen", "ConfettiCloudOrange",
					"ConfettiCloudPurple", "ConfettiCloudYellow", "ConfettiCloudPink", "ConfettiCloudCyan"
				];
				private _cloudSource = "#particlesource" createVehicleLocal (getPosATL _this);
				_cloudSource setParticleClass (selectRandom _cloudClasses);

				if (selectRandom [true,false]) then
				{
					playSound3D
					[
						format ['\a3\sounds_f_orange\arsenal\explosives\trainingmine\trainingmine_report_0%1.wss', selectRandom [1,2]],
						objNull,
						false,
						getPosASL _this,
						(random [4.0,4.5,5.0]),
						(random [0.9,1,1.1]),
						200,
						0,
						true
					];
				}
				else
				{
					playSound3D
					[
						format ['\a3\sounds_f_orange\arsenal\explosives\trainingmine\trainingmine_whistle_0%1.wss', ceil random 6],
						objNull,
						false,
						getPosASL _this,
						(random [4.0,4.5,5.0]),
						(random [0.9,1,1.1]),
						100,
						0,
						true
					];
				};

				sleep 0.4;
				deleteVehicle _cloudSource;
			};
		
			_this spawn
			{
				sleep (random 0.3);

				private _confettiClasses = 
				[
					"ConfettiPart04Red", "ConfettiPart01Blue", "ConfettiPart01", "ConfettiPart01Gray",
					"ConfettiPart01Green", "ConfettiPart01Orange", "ConfettiPart01Purple", "ConfettiPart01Red",
					"ConfettiPart02Blue", "ConfettiPart02", "ConfettiPart02Gray", "ConfettiPart02Green",
					"ConfettiPart02Orange", "ConfettiPart02Purple", "ConfettiPart02Red", "ConfettiPart03Blue",
					"ConfettiPart03", "ConfettiPart03Gray", "ConfettiPart03Green", "ConfettiPart03Orange",
					"ConfettiPart03Purple", "ConfettiPart03Red", "ConfettiPart04Blue", "ConfettiPart04",
					"ConfettiPart04Gray", "ConfettiPart04Green", "ConfettiPart04Orange", "ConfettiPart04Purple"
				];
				private _confettiSource = "#particlesource" createVehicleLocal (getPosATL _this);
				_confettiSource setParticleClass (selectRandom _confettiClasses);

				sleep 0.4;
				_confettiSource setDropInterval 0;

				sleep 2.6;
				deleteVehicle _confettiSource;
			};
		};
	};
};