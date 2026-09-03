class CfgPatches
{
	class A3_expEden_Animals_F
	{
		author="Trager";
		name="O&T Expansion Eden - Animals";
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
class CBA_Extended_EventHandlers_base;
class CfgVehicles
{
	class Animal;
	class Animal_Base_F: Animal
	{
		class EventHandlers
		{
			class Globe_animalBehaviourMP
			{
				postInit="[(_this # 0)] call Globe_fnc_animalBehaviour";
			};
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
			{
			};
		};
		SLX_XEH_DISABLED=0;
	};
};