
if (!isServer) exitWith {false};

private _object = param [0, objNull];

private _materails = selectRandom 
[
	"\A3\structures_f_bootcamp\VR\Helpers\Data\VR_3DSelector_01_incomplete.rvmat",
	"\A3\structures_f_bootcamp\VR\Helpers\Data\VR_3DSelector_01_incomplete_emissive.rvmat",
	"\A3\structures_f_bootcamp\VR\Helpers\Data\VR_Area_emissive.rvmat",
	"\A3\structures_f_bootcamp\VR\Helpers\Data\VR_Billboard_01_emissive.rvmat",
	"\A3\structures_f_bootcamp\VR\Helpers\Data\VR_GroundIcon_01_emissive.rvmat",
	"\A3\structures_f_bootcamp\VR\Helpers\Data\VR_3DSelector_01_complete.rvmat",
	"\A3\structures_f_bootcamp\VR\Helpers\Data\VR_3DSelector_01_complete_emissive.rvmat",
	"\A3\structures_f_bootcamp\VR\Helpers\Data\VR_3DSelector_01_default.rvmat",
	"\A3\structures_f_bootcamp\VR\Helpers\Data\VR_3DSelector_01_default_emissive.rvmat",
	"\A3\structures_f_bootcamp\VR\Helpers\Data\VR_3DSelector_01_exit.rvmat",
	"\A3\structures_f_bootcamp\VR\Helpers\Data\VR_3DSelector_01_exit_emissive.rvmat"
];

_object setObjectMaterialGlobal [0, _materails];

true