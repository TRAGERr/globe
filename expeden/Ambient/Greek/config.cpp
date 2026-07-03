class CfgSoundShaders
{
	class Meadows_Low_SoundShader
	{
		volume="1.2 * (windy factor[0.1,0.5]) * (1-(0.5*forest))*(1-(0.5*houses))*(1-sea)* (altitudeGround factor [75,0])";
	};
	class Meadows_High_SoundShader
	{
		volume="1.2 * (windy factor[0.5,0.8]) * (1-(0.5*forest))*(1-(0.5*houses))*(1-sea) * (altitudeGround factor [75,0])";
	};
	class Wind_Low_SoundShader
	{
		volume="(windy factor[0.9,0.3]) * ((altitudeGround * (1 - sea) + altitudeSea * sea) factor [20, 80]) + 0.5 * (altitudeSea factor [200,300]) * (windy > 0.01) * (altitudeGround factor [80, 20])";
	};
	class Wind_High_SoundShader
	{
		volume="(windy factor[0.3,0.9]) * ((altitudeGround * (1 - sea) + altitudeSea * sea) factor [20, 80]) + (altitudeGround factor [80, 20]) * (windy factor[0.4, 1])* 0.3";
	};
	class Forest_Low_SoundShader
	{
		volume="0.7 * forest * (windy factor[2,0.5]) * (altitudeGround factor [80,20])";
	};
	class Forest_High_SoundShader
	{
		volume="0.7 * forest * (windy factor[0.1,1]) * (altitudeGround factor [80,20])";
	};
	class Forest_Rattles_SoundShader
	{
		volume="0.35 * (windy factor[0.2,0.8]) * (altitudeGround factor [80,20])";
	};
	class Greek_Crickets_Day_SoundShader
	{
		volume="(1-snow)*1.1*(forest + 1)*(1-0.5*houses)*(1-sea)*(windy factor[3,0.2])*(rain factor[0.7,0.4])*(1-night)*(altitudeGround factor [80,0])";
	};
	class Greek_Crickets_Night_SoundShader
	{
		volume="(1-snow)*1.1*(forest + 1) * (1-0.5*houses)*(1-sea)*(windy factor[3,0.2])*(rain factor[0.7,0.4])*night*(altitudeGround factor [80,0])";
	};
	class Birds_Forest_Day_SoundShader
	{
		volume="(1-snow)*1.1*(shooting factor [0.6,1]) * (windy factor[3,0.2]) * (rain factor[0.7,0.5]) * (1-night) * (altitudeGround factor [80,0])";
	};
	class Birds_Meadows_Day_SoundShader
	{
		volume="(1-snow)*1.1*(1-forest) * (shooting factor [0.6,1]) * (windy factor[3,0.2]) * (rain factor[0.7,0.5]) * (1-night) * (altitudeGround factor [80,0])";
	};
	class Stratis_RainMeadows_Low_SoundShader
	{
		volume="(rain factor [0, 0.2]) * (rain factor [0.8, 0.6]) * (altitudeGround factor [50,0]) * (1 - 0.1*forest) + ((rain factor [0, 0.2]) * (rain factor [0.8, 0.6]) * sea)";
	};
	class Stratis_RainMeadows_Medium_SoundShader
	{
		volume="(altitudeGround factor [70,0]) * (1 - 0.1*forest) * (rain factor [0, 0.2]) * (rain factor [0.8, 0.6])";
	};
	class Stratis_RainMeadows_High_SoundShader
	{
		volume="(altitudeGround factor [90,0]) * (1 - 0.1*forest) * (rain factor [0.4, 0.6])";
	};
	class Stratis_RainHouses_SoundShader
	{
		volume="(altitudeGround factor [90,0]) * houses * (rain factor [0.2, 1])";
	};
};
