
params ["_trigger"];

while {triggerActivated _trigger} do
{
	{
		if (alive _x && _x isKindOf "Man") then
		{
			private _speed = vectorMagnitude (velocity _x);
			if (_speed > 0.15) then {
			
				private _currentDamage = damage _x;
				private _damageInflicted = 0.025 * (_speed max 1); 
				_x setDamage (_currentDamage + _damageInflicted);
				_x setFatigue 0;
				if (selectRandom [true,false]) then
				{
					_x playActionNow "Stop"
				};
				private _soundID = playSound3D ["a3\sounds_f_exp\environment\sfx\metal_fence_rattling.wss", _x, false, getPosASL _x, 1.5, random [0.95,1,1.05], 50, 2.5, true, false];
				_soundID spawn {sleep 1.75; stopSound _this};
			};
		};
	} forEach (list _trigger);

	sleep 0.4;
};
