params["_object"];

if (is3DEN) then
{

	// play sound only 1 time if Eden
	_object say3D ["powerGenerator01",80,1];

}
else
{

	if (isServer) then
	{
		private _soundSource = createSoundSource ["Sound_PowerGenerator_01_SFX", getPosATL _object, [], 0];
		_soundSource attachTo [_object, [0,0,0]];
		_object setVariable ['Globe_soundSource', _soundSource, true]
	};

};