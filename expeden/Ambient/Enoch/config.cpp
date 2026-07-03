class CfgSoundShaders
{
	class Sea_Enoch_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\Environment\ambient\Sea\sea",
				1
			}
		};
		volume="0.1*(altitudeSea factor [60,15]) * (waterdepth factor[0,1])";
	};
	class Coast_Enoch_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\Environment\ambient\Sea\coast",
				1
			}
		};
		volume="0.1*coast * (altitudeSea factor [120,20]) * (windy + 1)";
	};
};
