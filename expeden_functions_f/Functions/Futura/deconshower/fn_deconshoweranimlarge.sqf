/*
	bin_fnc_deconShowerAnimLarge
*/
params
[
	"_object",
	["_power",1.4],	// Power modifier of water stream
	["_count",3],
	["_sizeFactor",1],
	["_startAnim",false]
];

// Unhide mist effect
if(local _object)then
{
	_object animateSource ["Valve_Source",1];
	_object animateSource ["Hide_Mist_Source",0,true];
	_object setVariable ["BIN_Shower_Stop",false,true];
	if(_startAnim)then{[_object] spawn bin_fnc_deconShowerMove};
};

private _particles	= [];

// Iterate through all memory points
for "_i" from 1 to _count do
{
	// Calculate position & direction of particle effects
	private _pos = _object selectionPosition format["shower_%1_pos",_i];
	private _dir = _object selectionPosition format["shower_%1_dir",_i];
	_vector = ((_object modelToWorldVisual _pos) vectorFromTo (_object modelToWorld _dir)) vectorMultiply _power;

	// Create particle effect
	private _particle = "#particlesource" createVehicleLocal [0,0,0];
	_particle attachTo [_object,[0,0,0]];
	_particle setParticleCircle [0, [0, 0, 0]];
	_particle setParticleRandom [0, [0, 0, 0], [0, 0, 0], 53, 0.25, [0, 0, 0, 1], 0, 0];
	_particle setParticleParams [["\A3\data_f\Cl_water", 1, 0, 0], "", "Billboard", 1, 1.25, format["shower_%1_pos",_i], _vector, 0, 1.275*1.45, 1, 0, [0.1*_sizeFactor, 0.7*_sizeFactor,0.9*_sizeFactor], [[1, 1, 1, 0.02], [1, 1, 1, 0.001]], [1], 0, 0, "", "", _object];
	_particle setDropInterval 0.02;

	// Add particle to array
	_particles pushBack _particle;
};

// Create sound sources
private _sound_1 = "SoundSetSource_Sfx_DeconShower_Nozzle_01" createVehicle [0,0,0];
private _sound_2 = "SoundSetSource_Sfx_DeconShower_Center_01" createVehicle [0,0,0];
private _sound_3 = "SoundSetSource_Sfx_DeconShower_Nozzle_02" createVehicle [0,0,0];
private _sound_4 = "SoundSetSource_Sfx_DeconShower_Center_01" createVehicle [0,0,0];

{
	private _pos = _object selectionPosition format["shower_%1_pos",_foreachIndex + 1];
	private _dir = _object selectionPosition format["shower_%1_dir",_foreachIndex + 1];
	private _vector = ((_object modelToWorldVisual _pos) vectorFromTo (_object modelToWorld _dir));
	_x attachTo [_object,[0,0,0],"shower_1_pos"];
	_x setVectorDirAndUp
	[
		_vector,
		_vector vectorCrossProduct [-(_vector # 1), _vector # 0, 0]
	];
}foreach [_sound_1,_sound_2,_sound_3,_sound_4];


_sound_1 attachTo [_object,[0,0,0],"shower_1_pos"];
_sound_2 attachTo [_object,[0,0,0],"shower_2_pos"];
_sound_3 attachTo [_object,[0,0,0],"shower_3_pos"];
_sound_4 attachTo [_object,[0,0,0],"shower_4_pos"];

// Update objects list to delete
_object setVariable ["bin_deconShower_objects",[_sound_1,_sound_2,_sound_3,_sound_4] + _particles];

// Wait until object is destroyed or deleted
while{(alive _object) && !(_object getVariable ["BIN_Shower_Stop",false])}do
{
	for "_i" from 1 to _count do
	{
		// Calculate position & direction of particle effects
		private _pos = _object selectionPosition format["shower_%1_pos",_i];
		private _dir = _object selectionPosition format["shower_%1_dir",_i];
		_vector = ((_object modelToWorldVisual _pos) vectorFromTo (_object modelToWorld _dir)) vectorMultiply _power;

		// Skip loop & delete particle if memory point is no longer present (i.e. hidden)
		if(_pos isEqualTo [0,0,0])exitWith{deleteVehicle (_particles select (_i-1))};

		(_particles select (_i-1)) setParticleParams [["\A3\data_f\Cl_water", 1, 0, 0], "", "Billboard", 1, 1.25, _pos, _vector, 0, 1.275*1.45, 1, 0, [0.1*_sizeFactor, 0.7*_sizeFactor,0.9*_sizeFactor], [[1, 1, 1, 0.02], [1, 1, 1, 0.001]], [1], 0, 0, "", "", _object];
	};
	sleep 0.1;
};