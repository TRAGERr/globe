
params 
[
	["_player", objNull, [objNull]],
	["_mode", "", [""]]
];

if (isClass (configfile >> "CfgPatches" >> "ace_main")) exitWith {};
if (isNull _player || !alive _player) exitWith {};

private _voice 		= toLower speaker _player;
private _cfgVoice 	= configfile >> "CfgVoice" >> _voice;
if (!isClass _cfgVoice) exitWith {};

private _path1 = (getArray (_cfgVoice >> "directories")) param [0, ""];
private _path2 = "";

//--→ other bin structure in enoch radio dub
if !(_voice in ["male01pol","male02pol","male03pol","male01rus","male02rus","male03rus"]) then 
{
	_path2 = (getText (_cfgVoice >> "protocol") + "\");
};

private _soundName 	= "";
private _randomMax 	= 1;
private _distance	= 1;
private _sleep 		= 1;

switch _mode do 
{

	case "SentCheering": 
	{ 
		_soundName 	= "CheeringE";
		_randomMax 	= 5;
		_distance	= 70;
		_sleep 		= 1;
	};

	case "SentCombatGeneric":
	{
		if (selectRandom [false,true]) then
		{
			_soundName 	= "CombatGenericE";
			_randomMax 	= 4;
			_distance	= 60;
			_sleep 		= 1.2;
		}
		else
		{
			_soundName 	= "ScreamingE";
			_randomMax 	= 4;
			_distance	= 65;
			_sleep 		= 0.8;
		}
	};

	case "SentEndangered":
	{
		_soundName 	= "EndangeredE";
		_randomMax 	= 3;
		_distance	= 80;
		_sleep 		= 1.2;
	};

	default
	{
	};

};

private _path = _path1 + _path2 + "Combat\200_CombatShouts\" + format ["%1_%2.ogg", _soundName, ceil random _randomMax];

if (hasInterface && player == _player) then
{
	playSoundUI [_path, 1, 1, true];

	private _targets = (call BIS_fnc_listPlayers) - [_player];
	[
		[
			_path,
			_player,
			false,
			getPosASL _player,
			1,
			1,
			_distance,
			0,
			true
		]
	] remoteExec ["playSound3D", _targets];
};

[_player, true] remoteExecCall ["setRandomLip", 0];
[_player, _sleep] spawn
{
	sleep (_this # 1);
	[(_this # 0), false] remoteExecCall ["setRandomLip", 0];
};