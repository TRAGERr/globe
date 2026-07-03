class CfgSoundShaders
{
	class ForestMorning_SoundShader
	{
		volume="(altitudeGround factor [100,30]) * (daytime factor [0.25, 0.33]) * (daytime factor [0.54, 0.46])";
	};
	class ForestAfternoon_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Exp\Environment\ambient\forest\forest_afternoon",
				1
			}
		};
		volume="(altitudeGround factor [100,30]) * (daytime factor [0.46, 0.54]) * (daytime factor [0.83, 0.75])";
	};
	class ForestNight_SoundShader
	{
		volume="(altitudeGround factor [100,30]) * ((daytime factor [0.75, 0.83]) + (daytime factor [0.33, 0.25]))";
	};
	class HousesDay_SoundShader
	{
		volume="(altitudeGround factor [100,30]) * (houses + (meadow factor [0,0.3])/2) * (1-night)";
	};
	class HousesNight_SoundShader
	{
		volume="(altitudeGround factor [100,30]) * (houses + (meadow factor [0,0.3])/2) * night";
	};
	class MeadowsDay_SoundShader
	{
		volume="(altitudeGround factor [80,20]) * (1-night) * (windy factor [0.6, 0.4]) * (1 - forest) * (1 - waterDepth) * (1 - houses)";
	};
	class MeadowsNight_SoundShader
	{
		volume="(altitudeGround factor [80,20]) * night * (1 - forest) * (1 - waterDepth) * (1 - houses)";
	};
	class WindForest_Low_SoundShader
	{
		volume="(altitudeGround factor [80,20]) * (windy factor [0, 0.3]) * (windy factor [0.6, 0.4]) * (windy/0.4)";
	};
	class WindForest_High_SoundShader
	{
		volume="(altitudeGround factor [80,20]) * (windy factor [0.3, 0.6]) * (windy/0.5)";
	};
	class WindMeadows_Low_SoundShader
	{
		volume="(altitudeGround factor [80,20]) * (windy factor [0, 0.3]) * (windy factor [0.7, 0.5]) * (windy/0.2) * (forest/2 + meadow + houses/2 + coast)";
	};
	class WindMeadows_High_SoundShader
	{
		volume="(altitudeGround factor [80,20]) * (windy factor [0.3, 0.9]) * (windy/0.2) * (forest/2 + meadow + houses/2 + coast)";
	};
	class WindHouses_Low_SoundShader
	{
		volume="(altitudeGround factor [80,20]) * (windy factor [0, 0.3]) * (windy factor [0.7, 0.5]) * (windy) * houses";
	};
	class WindHouses_High_SoundShader
	{
		volume="(altitudeGround factor [80,20]) * (windy factor [0.3, 0.9])* (windy) * houses";
	};
	class RainForest_Low_SoundShader
	{
		volume="(altitudeGround factor [80,20]) * (rain factor [0, 0.3])";
	};
	class RainForest_Medium_SoundShader
	{
		volume="(altitudeGround factor [80,25]) * (rain factor [0.2, 0.4]) * (rain factor [0.8, 0.6])";
	};
	class RainForest_High_SoundShader
	{
		volume="(altitudeGround factor [100,30]) * (rain factor [0.6, 0.8])";
	};
	class RainMeadows_Low_SoundShader
	{
		volume="(altitudeGround factor [50,15]) * (1 - (forest min trees)) * (rain factor [0.4, 0.3]) * rain/0.3";
	};
	class RainMeadows_Medium_SoundShader
	{
		volume="(altitudeGround factor [70,20]) * (1 - (forest min trees)) * (rain factor [0, 0.2]) * (rain factor [0.8, 0.6]) * rain / 0.7";
	};
	class RainMeadows_High_SoundShader
	{
		volume="(altitudeGround factor [90,25]) * (1 - (forest min trees)) * (rain factor [0.4, 0.6]) * rain";
	};
	class RainHouses_High_SoundShader
	{
		volume="(altitudeGround factor [90,25]) * houses * (rain factor [0.2, 1]) * rain / 2";
	};
	class Wind_Generic_Low_SoundShader
	{
		volume="(windy factor[0.9,0.3]) * ((altitudeGround * (1 - sea) + altitudeSea * sea) factor [20, 80]) + 0.5 * (altitudeSea factor [200,300]) * (windy > 0.01) * (altitudeGround factor [80, 20]) * (1-forest) * (1-meadow)";
	};
	class Wind_Generic_High_SoundShader
	{
		volume="(windy factor[0.3,0.9]) * ((altitudeGround * (1 - sea) + altitudeSea * sea) factor [20, 80]) + (altitudeGround factor [80, 20]) * (windy factor[0.4, 1]) * (1 - forest) * (1-meadow) * 0.3";
	};
	class Sea_SoundShader
	{
		volume="(altitudeSea factor [60,15]) * (waterdepth factor[0,1])";
	};
	class Coast_SoundShader
	{
		volume="(altitudeSea factor [120,20]) * (windy + 1)";
	};
};
