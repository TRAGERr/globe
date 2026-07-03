params["_nest"];

if !((dayTime > 6.5) && (dayTime < 18.125)) then 
{
		_soundSource = createSoundSource ["Bird_Nest_night_SFX", getPosASL _nest, [], 0];
	}
	else
	{
		_soundSource = createSoundSource ["Bird_Nest_day_SFX", getPosASL _nest, [], 0];
};
_soundSource attachTo [_nest, [-0.4, 0, 4.6]];

_nest setVariable ["Globe_soundSource",_soundSource,isServer];