/* params["_radio"];

if (_radio getVariable 'expEden_FMRadioMusic_enable') then 
{
	_radio spawn expEden_fnc_radioNewsMusic
};

if (_radio getVariable 'expEden_FMRadioDamage_enable') then 
{
	_radio spawn
	{
		if (isDedicated) exitWith {};
		waitUntil {time > 0};
		_this addEventHandler 
		[
			"HitPart",
			{
				(_this # 0) params ["_target"];

				if (isServer) then
				{
					private _sparksEffect 	= createVehicle		["#particlesource", 		getPosATL _target, [], 0, "NONE"];
					private _sparksSound 	= createSoundSource ["Sound_SparklesWreck1", 	getPosATL _target, [], 0];
					private _smokeEffect 	= createVehicle 	["#particlesource", 		getPosATL _target, [], 0, "NONE"];
					private _smokeSound 	= createSoundSource ["Sound_SmokeWreck1", 		getPosATL _target, [], 0];

					{
						_x attachTo [_target, [0,0,0]]
					} forEach [_sparksEffect, _sparksSound, _smokeEffect, _smokeSound];

					_sparksEffect setParticleClass "AvionicsSparks";
					_smokeEffect setParticleClass "AvionicsSmoke";

					sleep 0.25;

					deleteVehicle _sparksEffect;
					_target setVariable ["Globe_radioDestroyed",true,true];

					sleep 1.25;

					deleteVehicle _sparksSound;
				};
			}
		];
	};
}; */