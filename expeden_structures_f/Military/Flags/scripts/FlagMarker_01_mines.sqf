params["_object"];

if (isNull _object) exitWith {};
if (!isServer) exitWith {};

_object setObjectTextureGlobal [0,"#(rgb,512,512,3)text(1,1,""RobotoCondensedBold"",1,""#c30d0dff"",""#eaeaeaff"",""M"")"];