class CfgPatches
{
	class A3_Functions_F_Globe
	{
		author="Trager";
		name="O&T Expansion Eden - Script Functions";
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
class CfgFunctions
{
	class A3_Modules
	{
		class GroupModifiers
		{
			class moduleGroupID
			{
				file="A3\Functions_F_Globe\Functions\Futura\fn_modulegroupid.sqf";
			};
		};
	};
	class expEden
	{
		tag="expEden";
		project="Globe";
		class Misc
		{
			file="\A3\Functions_F_Globe\Functions\Misc";
			class pylonPodSearchlightActions
			{
			};
			class playVideoLoop
			{
			};
			class showLawOfWar
			{
			};
			class exportEditorPreviews
			{
			};
			class moduleCreatePowerLine
			{
			};
			class galaxyRotation
			{
			};
			class radioNewsMusicActions
			{
			};
			class radioChatterEngC
			{
			};
			class radioChatterEngFCiv
			{
			};
			class radioChatterEngA
			{
			};
			class PCSetDamage
			{
			};
			class PCSetEnable
			{
			};
			class radioNewsMusicPlay
			{
			};
			class attributeFlagTextures
			{
			};
			class createFlagMarkerMine
			{
			};
			class respawnRallySFX
			{
			};
			class piano
			{
			};
			class memoryFragmentPP_01
			{
			};
			class moduleFlareCreate
			{
			};
			class laptopSimulationTreminatedAnimate
			{
			};
			class moduleSimpleObject
			{
			};
			class showAANArticle1_init
			{
			};
			class showAANArticle2_init
			{
			};
			class staticNoise
			{
			};
			class staticNoiseInit
			{
			};
			class destroyer01handledamage3den
			{
			};
			class radioNewsMusic
			{
			};
			class radioNewsMusicOn
			{
			};
			class radioNewsMusicInit
			{
			};
			class playVideoLoopOFP
			{
			};
			class playVideoLoopEXP
			{
			};
			class playVideoLoopEXP_placeholder
			{
			};
			class birdNest
			{
			};
			class chickenCoopPoultry
			{
			};
			class activateFlareTripMine
			{
			};
			class randomizeCargo
			{
			};
			class roadSignSpeedLimit80Destriction
			{
			};
			class PCSetInit
			{
			};
			class turretAttach
			{
			};
			class radioChatterChi
			{
			};
			class radioChatterEng
			{
			};
			class radioChatterEngF
			{
			};
			class createSoundSetSource
			{
			};
			class PCSetRebooting
			{
			};
			class markerAttachToObject
			{
			};
			class radioChatterFas
			{
			};
			class radioNewsMusicDamage
			{
			};
			class soundPlayGlobal
			{
				postInit=1;
			};
			class fighterRandomHullNumber
			{
			};
			class lampFlicker
			{
			};
			class droneDropMineAT
			{
			};
			class droneDropMineDispenser
			{
			};
			class switchSoundSetSource
			{
			};
			class createChemlightLit
			{
			};
			class playVideoLoopVertical
			{
			};
		};
		class VR
		{
			file="\A3\Functions_F_Globe\Functions\VR";
			class VRTargetLiveMoveAPC
			{
			};
			class VRTargetLiveMoveMBT
			{
			};
		};
		class Ambient
		{
			file="\A3\Functions_F_Globe\Functions\Ambient";
			class animalBehaviour
			{
			};
			class handleEagleSing
			{
			};
		};
		class Attributes
		{
			file="\A3\Functions_F_Globe\Functions\3DEN";
			class 3DENShowLawOfWarAttributeSave
			{
			};
			class 3DENShowLawOfWarAttributeLoad
			{
			};
			class 3DENCarAlarmInit
			{
			};
			class 3DENObjectBoxMarker
			{
			};
			class 3DENAttributeGlassStates
			{
			};
			class 3DENTurretAttach
			{
			};
			class 3DENRainParamsAttributeLoad
			{
			};
			class 3DENRainParamsAttributeSave
			{
			};
			class 3DENRainParamsButtonReset
			{
			};
			class 3DENRainParamsButtonSnow
			{
			};
			class 3DENRainParamsButtonSIGNAL
			{
			};
		};
		class Environment
		{
			class moduleRuinTerrainBuildings
			{
				file="\A3\Modules_F_Globe\Environment\RuinTerrainBuildings\initGlobe.sqf";
			};
		};
		class Effects
		{
			file="\A3\Functions_F_Globe\Functions\Effects";
			class effectFiredRPG7
			{
			};
			class effectHitFireExtinguisher
			{
			};
			class effectFiredSmokeLauncherConfetti
			{
			};
			class createMuzzleFlashLight
			{
			};
		};
		class Vehicles
		{
			file="\A3\Functions_F_Globe\Functions\Vehicles";
			class missileMalfunction
			{
			};
		};
		class Conversations
		{
			file="\A3\Functions_F_Globe\Functions\Conversations";
			class sentStatusMessage
			{
			};
		};
		class Weapons
		{
			file="\A3\Functions_F_Globe\Functions\Weapons";
			class caseDrops9
			{
			};
			class caseDrops556
			{
			};
			class caseDrops762
			{
			};
			class setProjectileAirburst
			{
			};
			class loiteringMunitionActionAdd
			{
			};
			class loiteringMunitionExplosion
			{
			};
			class loiteringMunitionLaunch
			{
			};
			class loiteringMunitionDive
			{
			};
			class loiteringMunitionLaunchPush
			{
			};
			class loiteringMunitionWaypoint
			{
			};
			class loiteringMunitionLaunchScript
			{
			};
		};
	};
	class BIS
	{
		tag="BIS";
		project="arma3";
		class EXP_m01
		{
			file="\A3\missions_f_exp\Campaign\Missions\EXP_m01.Tanoa\functions";
			class EXP_m01_radioMusic
			{
			};
			class EXP_m01_destroyElectronics
			{
			};
		};
		class EXP_m04
		{
			file="a3\missions_f_exp\Campaign\Missions\EXP_m04.Tanoa\functions\flares";
			class EXP_m04_flareCreate
			{
			};
			class EXP_m04_flareInit
			{
				preInit=1;
			};
			class EXP_m04_flareLight
			{
			};
			class EXP_m04_flareSound
			{
			};
		};
		class Effects
		{
			class effectFiredArtillery
			{
				file="a3\functions_f_globe\Functions\Futura\fn_effectfiredartillery.sqf";
			};
		};
	};
	class A3_Jets
	{
		class Ejection
		{
			class PlaneEjection
			{
				description="This O&T Expasnion Eden mod change vanilla function with fixes for MP, overite of vanilla class will deleted on Arma 3 dev fix. see FT ticket T174022";
				file="A3\Functions_F_Globe\Functions\Futura\fn_planeEjection.sqf";
			};
			class PlaneEjectionFX
			{
				description="This O&T Expasnion Eden mod change vanilla function with fixes for MP, overite of vanilla class will deleted on Arma 3 dev fix. see FT ticket T174022";
				file="A3\Functions_F_Globe\Functions\Futura\fn_planeEjectionFX.sqf";
			};
			class ejectionSeatRelease
			{
				description="This O&T Expasnion Eden mod change vanilla function with fixes for MP, overite of vanilla class will deleted on Arma 3 dev fix. see FT ticket T174022";
				file="A3\Functions_F_Globe\Functions\Futura\fn_ejectionseatrelease.sqf";
			};
		};
	};
	class A3
	{
		class Ambient
		{
			class animalBehaviour
			{
				description="Animal behaviour control. Called by Animals_F\Data\Scripts\main.fsm.";
				headerType=1;
				file="a3\functions_f_globe\Functions\Futura\fn_animalbehaviour.sqf";
			};
		};
	};
};
