params ["_object"];
if (isNull _object) exitWith {};

if (isServer) then 
{
    _object setObjectTextureGlobal [0, "A3\missions_f_orange\Data\Img\Orange_Compositions\A1\Whiteboard_CampSplendid_PostWar_CO.paa"];
    _object setObjectMaterialGlobal [0, "a3\props_f_globe\Civilian\InfoBoards\Data\mapboard_camo_bulletholes.rvmat"];
};