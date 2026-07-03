/*
	Author:
		Trager, O&T Expansion Eden

	Description:
		Server-side loop that synchronizes a marker's position with a target object.
		The loop runs until the object is destroyed, deleted, or the tracking variable "Globe_atchdMrk" is cleared (set to an empty string).

	Parameters:
		0: OBJECT - The entity to be followed by the marker.
		1: STRING - Variable name of the existing marker.
		2: NUMBER (Optional) - Update delay in seconds. Default: 0.5.

	Returns:
		n

	Examples:

		Execution via Eden Editor attribute or module:
		    [_this, "myMarkerName"] spawn expEden_fnc_markerAttachToObject;

		Execution with custom 2-second delay for optimization:
		    [TargetUnit, "Marker_TargetUnit", 2] spawn expEden_fnc_markerAttachToObject;

		How to stop tracking externally:
		    TargetUnit setVariable ["Globe_atchdMrk", "", true];
*/

params ['_object','_marker',['_delay',0.5]];
if ((!isServer) || is3DEN) exitWith {};

_object setVariable ["Globe_atchdMrk", _marker, true];
_marker setMarkerPos (getPosWorld _object);
waitUntil {time > 0};
while {true} do
{
    _marker setMarkerPos (getPosWorld _object);

    //--→ if object died(destroyed) marker will stay at death position (upd: plus if Globe_atchdMrk and it's markerType is '')
    if ((!alive _object) || isNull _object || ((_object getVariable ["Globe_atchdMrk",'']) isEqualTo '') || (markerType (_object getVariable "Globe_atchdMrk") isEqualTo '')) exitWith 
    {
        _marker setMarkerPos (getPosWorld _object);
    };

    sleep _delay;
};
