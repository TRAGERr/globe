/*
	bin_fnc_deconShowerAnim
*/
params
[
	"_object",
	["_power",1.4],	// Power modifier of water stream
	["_count",3],
	["_sizeFactor",1]
];



private _particles	= [];

// Iterate through all memory points
for "_i" from 1 to _count do
{
	// Calculate position & direction of particle effects
	private _pos = _object selectionPosition format["shower_%1_pos",_i];
	private _dir = _object selectionPosition format["shower_%1_dir",_i];
	private _vector = ((_object modelToWorldVisual _pos) vectorFromTo (_object modelToWorld _dir)) vectorMultiply _power;

	// Create particle effect
	private _particle = "#particlesource" createVehicleLocal [0,0,0];
	_particle attachTo [_object,[0,0,0]];
	_particle setParticleCircle [0, [0, 0, 0]];
	_particle setParticleRandom [0, [0, 0, 0], [0, 0, 0], 53, 0.25, [0, 0, 0, 1], 0, 0];
	_particle setParticleParams [["\A3\data_f\Cl_water", 1, 0, 0], "", "Billboard", 1, 1.25, _pos, _vector, 0, 1.275*1.45, 1, 0, [0.1*_sizeFactor, 0.7*_sizeFactor,0.9*_sizeFactor], [[1, 1, 1, 0.02], [1, 1, 1, 0.001]], [1], 0, 0, "", "", _object];
	_particle setDropInterval 0.02;

	// Add particle to array
	_particles pushBack _particle;
};

// Unhide mist effect & animate valve
if(local _object)then
{
	_object animateSource ["Valve_Source",1];
	_object animateSource ["Hide_Mist_Source",0,true];
	_object setVariable ["BIN_Shower_Stop",false,true];
};

// Create sounds effect
private _sound = "DeconShower_01_sound_F" createVehicleLocal [0,0,0];
//private _sound = createSoundSource ["Sound_DeconShower_01_loop" , [0,0,1], [], 0];
_sound setPosASL (getPosASLVisual _object);

// Update objects list to delete
_object setVariable ["bin_deconShower_objects",[_sound] + _particles];