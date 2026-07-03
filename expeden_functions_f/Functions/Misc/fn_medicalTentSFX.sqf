params["_object"];

/*
    playSound3D
    [
        filename,
        soundSource,
        isInside,
        soundPosition,
        volume,
        soundPitch,
        distance,
        offset,
        local
    ];

    "a3\sounds_f_orange\missionsfx\pastambiences\idaphospitaltent\orange_idaphospitaltent_cardiac_01.wss"
    "a3\sounds_f_orange\missionsfx\pastambiences\idaphospitaltent\orange_idaphospitaltent_cardiac_02.wss"
    "a3\sounds_f_orange\missionsfx\pastambiences\idaphospitaltent\orange_idaphospitaltent_cardiac_03.wss"
    "a3\sounds_f_orange\missionsfx\pastambiences\idaphospitaltent\orange_idaphospitaltent_cough_01.wss"
    "a3\sounds_f_orange\missionsfx\pastambiences\idaphospitaltent\orange_idaphospitaltent_cough_02.wss"
    "a3\sounds_f_orange\missionsfx\pastambiences\idaphospitaltent\orange_idaphospitaltent_cough_03.wss"
    "a3\sounds_f_orange\missionsfx\pastambiences\idaphospitaltent\orange_idaphospitaltent_cough_04.wss"
    "a3\sounds_f_orange\missionsfx\pastambiences\idaphospitaltent\orange_idaphospitaltent_cough_05.wss"
    "a3\sounds_f_orange\missionsfx\pastambiences\idaphospitaltent\orange_idaphospitaltent_cough_06.wss"
    "a3\sounds_f_orange\missionsfx\pastambiences\idaphospitaltent\orange_idaphospitaltent_cough_07.wss"
    "a3\sounds_f_orange\missionsfx\pastambiences\idaphospitaltent\orange_idaphospitaltent_ekg_01_loop.wss"
    "a3\sounds_f_orange\missionsfx\pastambiences\idaphospitaltent\orange_idaphospitaltent_ekg_02_loop.wss"
    "a3\sounds_f_orange\missionsfx\pastambiences\idaphospitaltent\orange_idaphospitaltent_equipment_01.wss"
    "a3\sounds_f_orange\missionsfx\pastambiences\idaphospitaltent\orange_idaphospitaltent_equipment_02.wss"
    "a3\sounds_f_orange\missionsfx\pastambiences\idaphospitaltent\orange_idaphospitaltent_equipment_03.wss"
    "a3\sounds_f_orange\missionsfx\pastambiences\idaphospitaltent\orange_idaphospitaltent_heartbeat_01_loop.wss"
    "a3\sounds_f_orange\missionsfx\pastambiences\idaphospitaltent\orange_idaphospitaltent_lifesupport_01.wss"
    "a3\sounds_f_orange\missionsfx\pastambiences\idaphospitaltent\orange_idaphospitaltent_pain_01.wss"
    "a3\sounds_f_orange\missionsfx\pastambiences\idaphospitaltent\orange_idaphospitaltent_pain_02.wss"
    "a3\sounds_f_orange\missionsfx\pastambiences\idaphospitaltent\orange_idaphospitaltent_pain_03.wss"
    "a3\sounds_f_orange\missionsfx\pastambiences\idaphospitaltent\orange_idaphospitaltent_pain_04.wss"
    "a3\sounds_f_orange\missionsfx\pastambiences\idaphospitaltent\orange_idaphospitaltent_pain_05.wss"
    "a3\sounds_f_orange\missionsfx\pastambiences\idaphospitaltent\orange_idaphospitaltent_pain_06.wss"
    "a3\sounds_f_orange\missionsfx\pastambiences\idaphospitaltent\orange_idaphospitaltent_ventilator_01_loop.wss"
*/

_object spawn
{
    playSound3D
    [
        format ["a3\sounds_f_orange\missionsfx\pastambiences\idaphospitaltent\orange_idaphospitaltent_cardiac_0%1.wss", ceil random 3],
        soundSource,
        isInside,
        soundPosition,
        volume,
        soundPitch,
        distance,
        offset,
        local
    ];
}
