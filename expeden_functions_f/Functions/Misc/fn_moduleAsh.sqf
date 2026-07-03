#define RGB06	0.6,0.6,0.6
#define RGB03	0.3,0.3,0.3

"colorcorrections" ppeffectenable true;
"colorcorrections" ppeffectadjust [0.8,1,0,[0,0,0,0],[1,1,1,0.8],[0.2,0.2,0.2,1]];
"colorcorrections" ppeffectcommit 0;

_smoke = createvehicle ["#particlesource", position player,[],0,"can_collide"];
_smoke attachto [player,[0,0,0]];
_smoke setparticleparams 
[
	["\A3\data_f\ParticleEffects\Universal\Universal",16,12,13,0],
	"",
	"Billboard",
	1,
	7,
	[0,0,2],
	[-0.2,0,0],
	1,
	1.275,
	1,
	0,
	[5],
	[[RGB06,0.0],[RGB06,0.4],[RGB06,0.2],[RGB06,0.1],[RGB06,0.0]],
	[1000],
	1,
	0,
	"",
	"",
	player,
	0,
	false,
	0,
	[]
];

_smoke setparticlerandom [
	0,
	[15,15,2],
	[0.2,0,0.2],
	3,
	0,
	[0.07,0.07,0.07,0],
	0.2,
	0.05,
	1,
	0
];

_smoke setDropInterval 0.05;

_dust = createvehicle ["#particlesource",position player,[],0,"can_collide"];
_dust attachto [player,[0,0,0]];
_dust setparticleparams [
	["\A3\data_f\ParticleEffects\Universal\Universal",16,12,13,0],
	"",
	"Billboard",
	1,
	7,
	[0,0,1],
	[-0.2,0,-0.1],
	1,
	1.275,
	1,
	0,
	[0.02],
	[[RGB03,0.0],[RGB03,0.8],[RGB03,0.8],[RGB03,0.8],[RGB03,0.0]],
	[1000.1],
	1,
	0,
	"",
	"",
	player,
	0,
	false,
	0,
	[]
];

_dust setparticlerandom [
	0,
	[5,5,1],
	[-0.2,0,0.1],
	3,
	0.01,
	[0.05,0.05,0.05,0.05],
	0,
	0,
	1,
	0
];

_dust setDropInterval 0.05;