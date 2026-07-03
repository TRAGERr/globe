class CfgPatches
{
	class Cargoposes_Globe
	{
		author="Trager";
		name="O&T Expansion Eden - Crew Animation";
		url="https://steamcommunity.com/workshop/filedetails/?id=1923321700";
		requiredAddons[]=
		{
			"A3_expEden"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgMovesBasic
{
	class ManActions
	{
		passenger_hemmt_casual="passenger_hemmt_casual_settlein";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class CutSceneAnimationBaseZoZo;
		class HubSpectator_stand;
		class HubTemplate_Briefing;
		class Crew;
		class passenger_hemmt_casual_settlein: Crew
		{
			file="\a3\Anims_F_Enoch\data\anim\sdr\cts\Intro2\Acts_HEMTT_briefing.rtm";
			speed=-30;
			connectTo[]=
			{
				"passenger_hemmt_casual",
				1
			};
			interpolateTo[]=
			{
				"KIA_passenger_generic01",
				1
			};
			variantsAI[]=
			{
				"passenger_hemmt_casual",
				1
			};
			variantsPlayer[]=
			{
				"passenger_hemmt_casual",
				1
			};
			variantAfter[]={1.5,1.5,1.5};
			useIdles=0;
			leftHandIKCurve[]={0};
			rightHandIKCurve[]={0};
		};
		class passenger_hemmt_casual: Crew
		{
			file="\a3\Anims_F_Enoch\data\anim\sdr\cts\Intro2\Acts_HEMTT_Casual_Loop.rtm";
			speed=-30;
			interpolateTo[]=
			{
				"KIA_passenger_generic01",
				1
			};
		};
		class HubBriefing_ext: HubTemplate_Briefing
		{
			looped=1;
		};
		class HubBriefing_ext_Contact: CutSceneAnimationBaseZoZo
		{
			delete looped;
		};
		class HubSpectator_stand_Contact: HubSpectator_stand
		{
			delete looped;
		};
	};
};
