ambient[]={0.69999999,0.69999999,0.69999999,1};
diffuse[]={0.69999999,0.69999999,0.69999999,1};
forcedDiffuse[]={0,0,0,0};
emmisive[]={0,0,0,1};
specular[]={0.25,0.25,0.25,1};
specularPower=75;
PixelShaderID="NormalMapDetailSpecularMap";
VertexShaderID="NormalMap";
class Stage1
{
	texture="a3\structures_f_enoch\data\roads\mud_gravel_nohq.paa";
	uvSource="tex";
	class uvTransform
	{
		aside[]={1,0,0};
		up[]={0,1,0};
		dir[]={0,0,0};
		pos[]={0,0,0};
	};
};
class Stage2
{
	texture="#(argb,8,8,3)color(0.5,0.5,0.5,0.5,DT)";
	uvSource="tex";
	class uvTransform
	{
		aside[]={14,0,0};
		up[]={0,14,0};
		dir[]={0,0,0};
		pos[]={0,0,0};
	};
};
class Stage3
{
	texture="a3\structures_f_enoch\data\roads\mud_gravel_sm.paa";
	uvSource="tex";
	class uvTransform
	{
		aside[]={1,0,0};
		up[]={0,1,0};
		dir[]={0,0,0};
		pos[]={0,0,0};
	};
};
