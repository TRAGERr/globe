if (!isServer) exitWith {};
params["_object"];

if (is3DEN) then 
{

		if (_object getVariable 'expEden_IPPhoneCall_enable' isEqualTo true) then 
		{
			// play sound only 1 time if Eden
			_object say3D ["Sfx_RuggedPhone_Ringing_01",20,1,false,0]
		}

	}
	else
	{

		while {alive _object && _object getVariable 'expEden_IPPhoneCall_enable' isEqualTo true} do 
		{
			[_object, ["Sfx_RuggedPhone_Ringing_01",20,1,false,0]] remoteExec ["say3D"];
			sleep 4;
		}

};