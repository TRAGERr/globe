params["_object"];

if (isNull _object || (!alive _object) || is3DEN || (!isServer)) exitWith {};

_object spawn
{

	while {(!isNull _this) && alive _this} do
	{
		sleep (random [5,10,60]);

		playSound3D
		[
			selectRandom
			[
				"a3\dubbing_f_epc\c_in1\20_broadcast\c_in1_20_broadcast_spe_0.ogg",
				"a3\dubbing_f_epc\c_in1\20_broadcast\c_in1_20_broadcast_spe_1.ogg",
				"a3\dubbing_f_epc\c_in1\21_broadcast\c_in1_21_broadcast_spe_0.ogg",
				"a3\dubbing_f_epc\c_in1\21_broadcast\c_in1_21_broadcast_spe_1.ogg",
				"a3\dubbing_f_epc\c_in1\22_broadcast\c_in1_22_broadcast_spe_0.ogg",
				"a3\dubbing_f_epc\c_in1\22_broadcast\c_in1_22_broadcast_spe_1.ogg",
				"a3\dubbing_f_epc\c_in1\23_broadcast\c_in1_23_broadcast_spe_0.ogg"
			],
			_this,
			false,
			getPosASL _this,
			(_this getVariable ['Globe_SoundVolume',1]),
			(_this getVariable ['Globe_SoundPitch',1]),
			(_this getVariable ['Globe_SoundDistance',600]),
			(_this getVariable ['Globe_SoundOffset',0]),
			false
		];

		sleep (random ((_this getVariable ['Globe_SoundPause',[15,30,60]])))
	};

};