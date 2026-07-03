params["_object"];

if (isNull _object || (!alive _object) || is3DEN || (!isServer)) exitWith {};

_object spawn
{

	while {(!isNull _this) && alive _this} do
	{
		playSound3D
		[
			switch (_this getVariable ['Globe_SoundType','englishFemale']) do
			{

				case "english":
				{
					"\a3\dubbing_f_gamma\faction_blufor\x01_B_SafetyRegs\faction_blufor_x01_b_safetyregs_EXB_1.ogg"
				};

				case "farsi":
				{
					"\a3\dubbing_f_gamma\faction_opfor\x01_O_SafetyRegs\faction_opfor_x01_o_safetyregs_EXO_1.ogg"
				};

				case "englishFemale":
				{
					selectRandom
					[
						"a3\dubbing_f_orange\faction_idap\012_dangerous_behavior\faction_idap_012_dangerous_behavior_EXPO_0.ogg",
						"a3\dubbing_f_orange\faction_idap\012_dangerous_behavior\faction_idap_012_dangerous_behavior_EXPO_1.ogg",
						"a3\dubbing_f_orange\faction_idap\012_dangerous_behavior\faction_idap_012_dangerous_behavior_EXPO_2.ogg"
					]
				};

				default
				{
					selectRandom
					[
						"a3\dubbing_f_orange\faction_idap\012_dangerous_behavior\faction_idap_012_dangerous_behavior_EXPO_0.ogg",
						"a3\dubbing_f_orange\faction_idap\012_dangerous_behavior\faction_idap_012_dangerous_behavior_EXPO_1.ogg",
						"a3\dubbing_f_orange\faction_idap\012_dangerous_behavior\faction_idap_012_dangerous_behavior_EXPO_2.ogg"
					]
				};
			},
			_this,
			false,
			getPosASL _this,
			(_this getVariable ['Globe_SoundVolume',1]),
			(_this getVariable ['Globe_SoundPitch',1]),
			(_this getVariable ['Globe_SoundDistance',500]),
			(_this getVariable ['Globe_SoundOffset',0]),
			false
		];

		sleep (_this getVariable ['Globe_SoundPause',90]);
	};

};