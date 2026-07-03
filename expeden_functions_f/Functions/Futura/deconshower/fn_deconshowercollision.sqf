/*
	bin_fnc_deconShowerCollision
*/
params
[
	"_object"
];

//[_object,5.4,4,2] spawn bin_fnc_deconShowerAnimLarge;
//[_object] spawn bin_fnc_deconShowerMove;

if(!local _object)exitWith{};

// EPE event handlers are not working in init field
_object addEventHandler ["EpeContactStart",
{
	params["_object","","","","_force"];

	// Activate only if hit force is stronger than 150
	if(_force > 150)then
	{
		if((_object animationSourcePhase "Sprinkler_4_hide") isEqualTo 1)exitWith{};

		// Object animation
		_object animateSource ["Sprinkler_4_hide",1,true];

		//systemChat format["EPE Contact Start: %1 Time %2",_this,time];

		// Particle effects
		private _particleArray = [];

		// Middile part (sprinkler)
		private _particle_center = "#particlesource" createVehicleLocal [0,0,0];
		_particle_center attachTo [_object,[0,0,0]];
		_particle_center setParticleParams [["\a3\Props_F_Enoch\Military\Decontamination\scripts\DeconShower_02_hose_damage2_F.p3d", 16, 12, 0], "", "SpaceObject", 1, 14.95, "shower_4_pos", [0, 0, 0], 0, 6.975, 1, 0.2, [1, 1, 1], [[1, 1, 1, 0.05], [1, 1, 1, 0]], [1], 0, 0, "", "", _object,60,true,0.1];
		_particle_center setDropInterval 10;

		// Add to particle array
		_particleArray pushBack _particle_center;

		// Parts of hose
		for "_i" from 1 to 10 do
		{
			private _particle = "#particlesource" createVehicleLocal [0,0,0];
			_particle attachTo [_object,[0,0,0]];
			_particle setParticleRandom [0, [0, 0, -0.6], [0, 0, 0], 0, 0.0, [0, 0, 0, 1], 0, 0];
			_particle setParticleParams [["\a3\Props_F_Enoch\Military\Decontamination\scripts\DeconShower_02_hose_damage1_F.p3d", 16, 12, 0], "", "SpaceObject", 1, 0.95, format['FX_Hose_%1',_i], [0, 0, 0], 0, 6.975, 1, 0.2, [1, 1, 1], [[1, 1, 1, 0.05], [1, 1, 1, 0]], [1], 0, 0, "", "", _object];
			_particle setDropInterval 10;

			// Add to particle array
			_particleArray pushBack _particle;
		};

		// Delete particle sources after small delay
		_particleArray spawn
		{
			sleep 0.01;
			{deleteVehicle _x}foreach _this;
		};

	};
}];