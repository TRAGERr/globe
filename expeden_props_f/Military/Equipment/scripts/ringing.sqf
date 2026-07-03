[] spawn 
{

	while {alive}

	_this say3D "Sfx_RuggedPhone_Ringing_01"; 
	
	sleep 4; 
	
	_this say3D "Sfx_RuggedPhone_Ringing_01";
	
	sleep 4; 
	
	_this say3D "Sfx_RuggedPhone_Ringing_01";

	[_this,"Sfx_RuggedPhone_Ringing_01"] remoteExec ["say3D"]
	
};