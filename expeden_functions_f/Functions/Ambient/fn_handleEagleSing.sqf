while {true} do 
{
    if (isNull _this || (!alive _this)) exitWith {};

    private _sound = "SoundSetSource_Sfx_Eagle" createVehicle (getPosATL _this);
    _sound attachTo [_this, [0,0,0]];

    sleep (random [5,9,25]);
};
