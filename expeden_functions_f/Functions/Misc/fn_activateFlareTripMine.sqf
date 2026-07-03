params["_object","","","_pos","","","_ammo"];

private _future = time + 2.1;
waitUntil {time >= _future};

private _sparks = "Particle_TrainingMineEffect_F" createVehicle _pos;
private _flare = createVehicle ["F_TripWireMine_Red", [0,0,0], [], 0, "CAN_COLLIDE"];
private _posATL = (_pos vectorAdd [0.03,+0.1,-(_pos # 2)]);
_flare setPosATL (_posATL vectorAdd [0,0,0.4]);
_flare setVelocity [(random [-11,0,11]),(random [-11,0,11]), 50];

private _flareFallSound = createSoundSource ["Sound_FlareTripMine_Wire_SFX", (getPosATL _flare), [], 0];
_flareFallSound attachTo [_flare];

[_flare, _flareFallSound] spawn
{
	waitUntil {isNull (_this # 0)};
	deleteVehicle (_this # 1)
};

[(_this # 1), _pos,_sparks] spawn
{
	private _sound = playSound3D
	[
		"a3\sounds_f_orange\vehicles\air\uav_06\uav_6_deminedrone_bomb_whistle.wss",
		(_this # 0),
		false,
		(_this # 1),
		0.70000001,
		1,
		400,
		0,
		false
	];

	sleep 7.0;

	playSound3D
	[
		format ["a3\sounds_f_orange\arsenal\explosives\trainingmine\trainingmine_whistle_0%1.wss", ceil random 6],
		(_this # 0),
		false,
		(_this # 1),
		5,
		1,
		200,
		0,
		false
	];

	sleep 0.5;
	deleteVehicle (_this # 2);
};