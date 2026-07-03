
if (!isServer) exitWith {};

private _object = param [0, objNull];

private _bonusA = selectRandom 
[
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_bonusA1_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_bonusA2_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_bonusA3_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_bonusA4_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_bonusA5_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_bonusA6_ca.paa"
];
private _bonusB = selectRandom 
[
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_bonusB1_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_bonusB2_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_bonusB3_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_bonusB4_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_bonusB5_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_bonusB6_ca.paa"
];
private _bonusC = selectRandom 
[
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_bonusC1_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_bonusC2_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_bonusC3_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_bonusC4_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_bonusC5_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_bonusC6_ca.paa"
];
private _bonusD = selectRandom 
[
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_bonusD1_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_bonusD2_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_bonusD3_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_bonusD4_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_bonusD5_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_bonusD6_ca.paa"
];
private _bonusH = selectRandom 
[
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_bonusH1_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_bonusH2_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_bonusH3_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_bonusH4_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_bonusH5_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_bonusH6_ca.paa"
];
private _crawl = selectRandom 
[
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_crawl1_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_crawl2_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_crawl3_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_crawl4_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_crawl5_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_crawl6_ca.paa"
];
private _crouch = selectRandom 
[
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_crouch1_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_crouch2_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_crouch3_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_crouch4_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_crouch5_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_crouch6_ca.paa"
];
private _kneel = selectRandom 
[
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_kneel1_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_kneel2_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_kneel3_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_kneel4_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_kneel5_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_kneel6_ca.paa"
];
private _leanLeft = selectRandom 
[
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_lean_left1_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_lean_left2_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_lean_left3_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_lean_left4_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_lean_left5_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_lean_left6_ca.paa"
];
private _leanRight = selectRandom 
[
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_lean_right1_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_lean_right2_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_lean_right3_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_lean_right4_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_lean_right5_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_lean_right6_ca.paa"
];
private _moveLeft = selectRandom 
[
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_move_left1_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_move_left2_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_move_left3_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_move_left4_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_move_left5_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_move_left6_ca.paa"
];
private _moveRight = selectRandom 
[
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_move_right1_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_move_right2_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_move_right3_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_move_right4_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_move_right5_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_move_right6_ca.paa"
];
private _civTarget = selectRandom 
[
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_noshoot_target1_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_noshoot_target2_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_noshoot_target3_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_noshoot_target4_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_noshoot_target5_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_noshoot_target6_ca.paa"
];
private _penetrate = selectRandom 
[
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_penetrate1_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_penetrate2_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_penetrate3_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_penetrate4_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_penetrate5_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_penetrate6_ca.paa"
];
private _prone = selectRandom 
[
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_prone1_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_prone2_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_prone3_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_prone4_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_prone5_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_prone6_ca.paa"
];
private _rifle = selectRandom 
[
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_rifle1_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_rifle2_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_rifle3_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_rifle4_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_rifle5_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_rifle6_ca.paa"
];
private _sidearm = selectRandom 
[
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_sidearm1_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_sidearm2_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_sidearm3_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_sidearm4_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_sidearm5_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_sidearm6_ca.paa"
];
private _stand = selectRandom 
[
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_stand1_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_stand2_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_stand3_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_stand4_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_stand5_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_stand6_ca.paa"
];
private _targetCiv = selectRandom 
[
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_target_noshoot1_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_target_noshoot2_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_target_noshoot3_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_target_noshoot4_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_target_noshoot5_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_target_noshoot6_ca.paa"
];
private _targetRight = selectRandom 
[
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_target_right1_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_target_right2_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_target_right3_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_target_right4_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_target_right5_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_target_right6_ca.paa"
];
private _targetTarget = selectRandom 
[
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_target_target1_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_target_target2_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_target_target3_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_target_target4_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_target_target5_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_target_target6_ca.paa"
];
private _vault = selectRandom 
[
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_vault1_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_vault2_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_vault3_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_vault4_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_vault5_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_vault6_ca.paa"
];
private _watchout = selectRandom 
[
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_watch_out1_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_watch_out2_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_watch_out3_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_watch_out4_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_watch_out5_ca.paa",
	"\A3\Missions_F_Beta\Data\Img\Decals\decal_watch_out6_ca.paa"
];

switch (typeOf _object) do 
{

	case "Land_Graffiti_06_Title01_F": 
	{
		_object setObjectTextureGlobal [0, _bonusA];
	};

	case "Land_Graffiti_06_Title02_F": 
	{
		_object setObjectTextureGlobal [0, _bonusB];
	};

	case "Land_Graffiti_06_Title03_F": 
	{
		_object setObjectTextureGlobal [0, _bonusC];
	};

	case "Land_Graffiti_06_Title04_F": 
	{
		_object setObjectTextureGlobal [0, _bonusD];
	};

	case "Land_Graffiti_06_Title05_F": 
	{
		_object setObjectTextureGlobal [0, _bonusH];
	};

	case "Land_Graffiti_06_Crawling_F": 
	{
		_object setObjectTextureGlobal [0, _crawl];
	};

	case "Land_Graffiti_06_Crouch_F": 
	{
		_object setObjectTextureGlobal [0, _crouch];
	};

	case "Land_Graffiti_06_Kneel_F": 
	{
		_object setObjectTextureGlobal [0, _kneel];
	};

	case "Land_Graffiti_06_LeanL_F": 
	{
		_object setObjectTextureGlobal [0, _leanLeft];
	};

	case "Land_Graffiti_06_LeanR_F": 
	{
		_object setObjectTextureGlobal [0, _leanRight];
	};

	case "Land_Graffiti_06_MoveL_F": 
	{
		_object setObjectTextureGlobal [0, _moveLeft];
	};

	case "Land_Graffiti_06_MoveR_F": 
	{
		_object setObjectTextureGlobal [0, _moveRight];
	};

	case "Land_Graffiti_06_HostageEnemy_F": 
	{
		_object setObjectTextureGlobal [0, _civTarget];
	};

	case "Land_Graffiti_06_Penetrate_F": 
	{
		_object setObjectTextureGlobal [0, _penetrate];
	};

	case "Land_Graffiti_06_Prone_F": 
	{
		_object setObjectTextureGlobal [0, _prone];
	};

	case "Land_Graffiti_06_PrimaryWeapon_F": 
	{
		_object setObjectTextureGlobal [0, _rifle];
	};

	case "Land_Graffiti_06_Handgun_F": 
	{
		_object setObjectTextureGlobal [0, _sidearm];
	};

	case "Land_Graffiti_06_Stand_F": 
	{
		_object setObjectTextureGlobal [0, _stand];
	};

	case "Land_Graffiti_06_EnemyHostage_F": 
	{
		_object setObjectTextureGlobal [0, _targetCiv];
	};

	case "Land_Graffiti_06_EnemyR_F": 
	{
		_object setObjectTextureGlobal [0, _targetRight];
	};

	case "Land_Graffiti_06_EnemyEnemy_F": 
	{
		_object setObjectTextureGlobal [0, _targetTarget];
	};

	case "Land_Graffiti_06_Vault_F": 
	{
		_object setObjectTextureGlobal [0, _vault];
	};

	case "Land_Graffiti_06_Watchout_F": 
	{
		_object setObjectTextureGlobal [0, _watchout];
	};

};

true