class CfgPatches
{
	class A3_Structures_F_Globe_Civilian_Graffiti
	{
		addonRootClass="A3_Structures_F_Globe";
		requiredAddons[]=
		{
			"A3_Structures_F_Globe_Civilian"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Land_Graffiti_LogoNoriBrecLobster_G",
			"Land_Graffiti_WarningPatchBY_02_v1_G",
			"Land_Graffiti_WarningPatchBY_02_v2_G",
			"Land_Graffiti_DDay_01_G",
			"Land_Graffiti_LogoResearchCSAT_02_1m_G",
			"Land_Graffiti_LogoResearchCSAT_02_5m_G",
			"Land_Graffiti_PaintSplashes_01_G",
			"Land_Graffiti_PaintSplashes_02_G",
			"Land_Graffiti_PaintSplashes_03_G",
			"Land_Graffiti_PaintSplashes_04_G",
			"Land_Graffiti_PaintSplashes_05_G",
			"Land_Graffiti_PaintSplashes_06_G",
			"Land_Graffiti_PaintSplashes_07_G",
			"Land_Graffiti_WarningPatchBY_03_G",
			"Land_Graffiti_WarningPatchBY_03_G",
			"Land_Graffiti_Hopscotch_01_G",
			"Land_Graffiti_Hopscotch_01_G_LC",
			"Land_Graffiti_Cat_01_G",
			"Land_Graffiti_Cat_01_G_damaged",
			"Land_Graffiti_FaradayCage_01_G",
			"Land_Graffiti_UFO_01_beam_G",
			"Land_Graffiti_UFO_01_saucer_G",
			"Land_Graffiti_BluePearl_01_G",
			"Land_Graffiti_BluePearl_02_G",
			"Land_Graffiti_WarningHHA_01_G",
			"Land_Graffiti_WarningHHA_02_G",
			"Land_Graffiti_TCT_G",
			"Land_Graffiti_Daltgreen_01_G",
			"Land_Graffiti_Vrana_big_01_G",
			"Land_Graffiti_WarningPatchBY_G",
			"Land_MaroulaStatueDrawing_01_G",
			"Land_Graffiti_Shenlong_01_G",
			"Graffiti_Galaxy_01_G",
			"Graffiti_HygieiaBowl_01",
			"Graffiti_RedCrystal_01",
			"Graffiti_misc_01",
			"DestroyerGlass_1m_01_F",
			"DestroyerGlass_1x2m_01_F",
			"GalleryInterior_plan_01",
			"GalleryInterior_room_Kornelis",
			"GalleryInterior_room_Verbeek",
			"GalleryInterior_room_Valic",
			"Graffiti_01_v2",
			"Graffiti_01_v3",
			"Graffiti_04_v2",
			"Graffiti_02_v2",
			"Graffiti_02_v3",
			"Lightning_01_1x2m",
			"Lightning_02_1x2m",
			"EauDeCombat_01_Arma_1m",
			"EauDeCombat_01_Arma_10m",
			"Graffiti_Multi_02_1m",
			"Graffiti_Multi_02_10m",
			"Graffiti_Multi_01_1m",
			"Graffiti_Multi_01_10m",
			"Graffiti_Freedom_02",
			"Graffiti_Freedom_01",
			"Graffiti_Antistate_01",
			"Graffiti_Antiwar_02",
			"Graffiti_Antiwar_01",
			"GalleryPlan_01",
			"ReligiousInscriptions_01_F",
			"ReligiousInscriptions_01_random_F",
			"Land_Shoot_House_Wall_dynamicTextures_F",
			"Land_Shoot_House_Panels_dynamicTextures_F",
			"Land_Graffiti_06_Title01_F",
			"Land_Graffiti_06_Title02_F",
			"Land_Graffiti_06_Title03_F",
			"Land_Graffiti_06_Title04_F",
			"Land_Graffiti_06_Title05_F",
			"Land_Graffiti_06_aliensFakenews_F",
			"Land_Graffiti_06_Binary_F",
			"Land_Graffiti_06_Crawling_F",
			"Land_Graffiti_06_Crouch_F",
			"Land_Graffiti_06_Crowe_F",
			"Land_Graffiti_06_Kneel_F",
			"Land_Graffiti_06_LeanL_F",
			"Land_Graffiti_06_LeanR_F",
			"Land_Graffiti_06_MoveL_F",
			"Land_Graffiti_06_MoveR_F",
			"Land_Graffiti_06_HostageEnemy_F",
			"Land_Graffiti_06_Penetrate_F",
			"Land_Graffiti_06_PhalanxHVT_F",
			"Land_Graffiti_06_Prone_F",
			"Land_Graffiti_06_PrimaryWeapon_F",
			"Land_Graffiti_06_Santiago_F",
			"Land_Graffiti_06_Handgun_F",
			"Land_Graffiti_06_Stand_F",
			"Land_Graffiti_06_EnemyHostage_F",
			"Land_Graffiti_06_EnemyR_F",
			"Land_Graffiti_06_EnemyEnemy_F",
			"Land_Graffiti_06_Vault_F",
			"Land_Graffiti_06_Watchout_F",
			"Land_Graffiti_06_random_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Land_Graffiti_RedCrystal_01_G;
	class S5_drawing_big;
	class Graffiti_base_F;
	class UserTexture_1x2_F;
	class UserTexture1m_F;
	class UserTexture10m_F;
	class Land_Shoot_House_Panels_F;
	class Land_Graffiti_06_Title01_F: Land_Shoot_House_Panels_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Graffiti_06_Title01_F.jpg";
		_generalMacro="Land_Graffiti_06_Title01_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_Globe_CfgVehicles_Land_Graffiti_06_Title01_F0";
		editorCategory="EdCat_Signs";
		editorSubcategory="EdSubcat_Graffiti";
		vehicleClass="Signs";
		destrType="DestructNo";
		icon="iconObject_10x1";
		posterSize=2;
		cost=100;
		class AnimationSources
		{
			class Top_Hide
			{
				source="user";
				animPeriod=1e-006;
				initPhase=1;
			};
			class Top_Poles_Hide: Top_Hide
			{
				initPhase=1;
			};
			class Stand_Hide: Top_Hide
			{
				initPhase=1;
			};
			class Stand_Poles_Hide: Top_Hide
			{
				initPhase=1;
			};
			class Crouch_Hide: Top_Hide
			{
				initPhase=1;
			};
			class Crouch_Poles_Hide: Top_Hide
			{
				initPhase=1;
			};
			class Prone_Hide: Top_Hide
			{
				initPhase=1;
			};
			class Prone_Poles_Hide: Top_Hide
			{
				initPhase=1;
			};
		};
		hiddenSelections[]=
		{
			"decal1",
			"",
			"",
			""
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_beta\data\img\decals\decal_bonusA1_ca.paa",
			"#(argb,8,8,3)color(0,0,0,0,ca)",
			"#(argb,8,8,3)color(0,0,0,0,ca)",
			"#(argb,8,8,3)color(0,0,0,0,ca)"
		};
		class Attributes
		{
		};
		class EventHandlers
		{
			init="(_this # 0) call compile preprocessFileLineNumbers '\A3\Structures_F_Globe\Civilian\Graffiti\scripts\randomize.sqf'";
		};
	};
	class Land_Graffiti_06_Title02_F: Land_Graffiti_06_Title01_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Graffiti_06_Title02_F.jpg";
		_generalMacro="Land_Graffiti_06_Title02_F";
		displayName="$STR_A3_Globe_CfgVehicles_Land_Graffiti_06_Title02_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_beta\data\img\decals\decal_bonusB1_ca.paa"
		};
	};
	class Land_Graffiti_06_Title03_F: Land_Graffiti_06_Title01_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Graffiti_06_Title03_F.jpg";
		_generalMacro="Land_Graffiti_06_Title03_F";
		displayName="$STR_A3_Globe_CfgVehicles_Land_Graffiti_06_Title03_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_beta\data\img\decals\decal_bonusC1_ca.paa"
		};
	};
	class Land_Graffiti_06_Title04_F: Land_Graffiti_06_Title01_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Graffiti_06_Title04_F.jpg";
		_generalMacro="Land_Graffiti_06_Title04_F";
		displayName="$STR_A3_Globe_CfgVehicles_Land_Graffiti_06_Title04_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_beta\data\img\decals\decal_bonusD1_ca.paa"
		};
	};
	class Land_Graffiti_06_Title05_F: Land_Graffiti_06_Title01_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Graffiti_06_Title05_F.jpg";
		_generalMacro="Land_Graffiti_06_Title05_F";
		displayName="$STR_A3_Globe_CfgVehicles_Land_Graffiti_06_Title05_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_beta\data\img\decals\decal_bonusH1_ca.paa"
		};
	};
	class Land_Graffiti_06_aliensFakenews_F: Land_Graffiti_06_Title01_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Graffiti_06_aliensFakenews_F.jpg";
		_generalMacro="Land_Graffiti_06_Title05_F";
		displayName="$STR_A3_Globe_Land_Graffiti_06_aliensFakenews_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_beta\data\img\decals\decal_aliens_ca.paa"
		};
		class EventHandlers
		{
			init="";
		};
	};
	class Land_Graffiti_06_Binary_F: Land_Graffiti_06_Title01_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Graffiti_06_Binary_F.jpg";
		_generalMacro="Land_Graffiti_06_Binary_F";
		displayName="$STR_A3_cfgVehicles_land_target_dueling_01_f0";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_beta\data\img\decals\decal_binary_ca.paa"
		};
		class EventHandlers
		{
			init="";
		};
	};
	class Land_Graffiti_06_Crawling_F: Land_Graffiti_06_Title01_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Graffiti_06_Crawling_F.jpg";
		_generalMacro="Land_Graffiti_06_Crawling_F";
		displayName="$STR_A3_Globe_Land_Graffiti_06_Crawling_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_beta\data\img\decals\decal_crawl1_ca.paa"
		};
		class EventHandlers
		{
			init="(_this # 0) call compile preprocessFileLineNumbers '\A3\Structures_F_Globe\Civilian\Graffiti\scripts\randomize.sqf'";
		};
	};
	class Land_Graffiti_06_Crouch_F: Land_Graffiti_06_Title01_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Graffiti_06_Crouch_F.jpg";
		_generalMacro="Land_Graffiti_06_Crouch_F";
		displayName="$STR_A3_Globe_Land_Graffiti_06_Crouch_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_beta\data\img\decals\decal_crouch1_ca.paa"
		};
		class EventHandlers
		{
			init="(_this # 0) call compile preprocessFileLineNumbers '\A3\Structures_F_Globe\Civilian\Graffiti\scripts\randomize.sqf'";
		};
	};
	class Land_Graffiti_06_Crowe_F: Land_Graffiti_06_Title01_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Graffiti_06_Crowe_F.jpg";
		_generalMacro="Land_Graffiti_06_Crowe_F";
		displayName="$STR_A3_Globe_Land_Graffiti_06_Crowe_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_beta\data\img\decals\decal_crowe_ca.paa"
		};
		class EventHandlers
		{
			init="";
		};
	};
	class Land_Graffiti_06_Kneel_F: Land_Graffiti_06_Title01_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Graffiti_06_Kneel_F.jpg";
		_generalMacro="Land_Graffiti_06_Kneel_F";
		displayName="$STR_A3_Globe_Land_Graffiti_06_Kneel_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_beta\data\img\decals\decal_kneel1_ca.paa"
		};
		class EventHandlers
		{
			init="(_this # 0) call compile preprocessFileLineNumbers '\A3\Structures_F_Globe\Civilian\Graffiti\scripts\randomize.sqf'";
		};
	};
	class Land_Graffiti_06_LeanL_F: Land_Graffiti_06_Title01_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Graffiti_06_LeanL_F.jpg";
		_generalMacro="Land_Graffiti_06_LeanL_F";
		displayName="$STR_A3_Globe_Land_Graffiti_06_LeanL_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_beta\data\img\decals\decal_lean_left1_ca.paa"
		};
		class EventHandlers
		{
			init="(_this # 0) call compile preprocessFileLineNumbers '\A3\Structures_F_Globe\Civilian\Graffiti\scripts\randomize.sqf'";
		};
	};
	class Land_Graffiti_06_LeanR_F: Land_Graffiti_06_Title01_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Graffiti_06_LeanR_F.jpg";
		_generalMacro="Land_Graffiti_06_LeanR_F";
		displayName="$STR_A3_Globe_Land_Graffiti_06_LeanR_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_beta\data\img\decals\decal_lean_Right1_ca.paa"
		};
		class EventHandlers
		{
			init="(_this # 0) call compile preprocessFileLineNumbers '\A3\Structures_F_Globe\Civilian\Graffiti\scripts\randomize.sqf'";
		};
	};
	class Land_Graffiti_06_MoveL_F: Land_Graffiti_06_Title01_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Graffiti_06_MoveL_F.jpg";
		_generalMacro="Land_Graffiti_06_MoveL_F";
		displayName="$STR_A3_Globe_Land_Graffiti_06_MoveL_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_beta\data\img\decals\decal_move_left1_ca.paa"
		};
		class EventHandlers
		{
			init="(_this # 0) call compile preprocessFileLineNumbers '\A3\Structures_F_Globe\Civilian\Graffiti\scripts\randomize.sqf'";
		};
	};
	class Land_Graffiti_06_MoveR_F: Land_Graffiti_06_Title01_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Graffiti_06_MoveR_F.jpg";
		_generalMacro="Land_Graffiti_06_MoveR_F";
		displayName="$STR_A3_Globe_Land_Graffiti_06_MoveR_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_beta\data\img\decals\decal_move_right1_ca.paa"
		};
		class EventHandlers
		{
			init="(_this # 0) call compile preprocessFileLineNumbers '\A3\Structures_F_Globe\Civilian\Graffiti\scripts\randomize.sqf'";
		};
	};
	class Land_Graffiti_06_HostageEnemy_F: Land_Graffiti_06_Title01_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Graffiti_06_HostageEnemy_F.jpg";
		_generalMacro="Land_Graffiti_06_HostageEnemy_F";
		displayName="$STR_A3_Globe_Land_Graffiti_06_HostageEnemy_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_beta\data\img\decals\decal_noshoot_target1_ca.paa"
		};
		class EventHandlers
		{
			init="(_this # 0) call compile preprocessFileLineNumbers '\A3\Structures_F_Globe\Civilian\Graffiti\scripts\randomize.sqf'";
		};
	};
	class Land_Graffiti_06_Penetrate_F: Land_Graffiti_06_Title01_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Graffiti_06_Penetrate_F.jpg";
		_generalMacro="Land_Graffiti_06_Penetrate_F";
		displayName="$STR_A3_Globe_Land_Graffiti_06_Penetrate_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_beta\data\img\decals\decal_penetrate1_ca.paa"
		};
		class EventHandlers
		{
			init="(_this # 0) call compile preprocessFileLineNumbers '\A3\Structures_F_Globe\Civilian\Graffiti\scripts\randomize.sqf'";
		};
	};
	class Land_Graffiti_06_PhalanxHVT_F: Land_Graffiti_06_Title01_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Graffiti_06_PhalanxHVT_F.jpg";
		_generalMacro="Land_Graffiti_06_PhalanxHVT_F";
		displayName="$STR_A3_Globe_Land_Graffiti_06_PhalanxHVT_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_beta\data\img\decals\decal_phalanx_ca.paa"
		};
		class EventHandlers
		{
			init="";
		};
	};
	class Land_Graffiti_06_Prone_F: Land_Graffiti_06_Title01_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Graffiti_06_Prone_F.jpg";
		_generalMacro="Land_Graffiti_06_Prone_F";
		displayName="$STR_A3_Globe_CfgVehicles_Land_Graffiti_06_Prone_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_beta\data\img\decals\decal_prone1_ca.paa"
		};
		class EventHandlers
		{
			init="(_this # 0) call compile preprocessFileLineNumbers '\A3\Structures_F_Globe\Civilian\Graffiti\scripts\randomize.sqf'";
		};
	};
	class Land_Graffiti_06_PrimaryWeapon_F: Land_Graffiti_06_Title01_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Graffiti_06_PrimaryWeapon_F.jpg";
		_generalMacro="Land_Graffiti_06_PrimaryWeapon_F";
		displayName="$STR_A3_Globe_Land_Graffiti_06_PrimaryWeapon_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_beta\data\img\decals\decal_rifle1_ca.paa"
		};
		class EventHandlers
		{
			init="(_this # 0) call compile preprocessFileLineNumbers '\A3\Structures_F_Globe\Civilian\Graffiti\scripts\randomize.sqf'";
		};
	};
	class Land_Graffiti_06_Santiago_F: Land_Graffiti_06_Title01_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Graffiti_06_Santiago_F.jpg";
		_generalMacro="Land_Graffiti_06_Santiago_F";
		displayName="$STR_A3_Globe_Land_Graffiti_06_Santiago_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_beta\data\img\decals\decal_santiago_ca.paa"
		};
		class EventHandlers
		{
			init="";
		};
	};
	class Land_Graffiti_06_Handgun_F: Land_Graffiti_06_Title01_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Graffiti_06_Handgun_F.jpg";
		_generalMacro="Land_Graffiti_06_Handgun_F";
		displayName="$STR_A3_Globe_Land_Graffiti_06_Handgun_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_beta\data\img\decals\decal_sidearm1_ca.paa"
		};
		class EventHandlers
		{
			init="(_this # 0) call compile preprocessFileLineNumbers '\A3\Structures_F_Globe\Civilian\Graffiti\scripts\randomize.sqf'";
		};
	};
	class Land_Graffiti_06_Stand_F: Land_Graffiti_06_Title01_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Graffiti_06_Stand_F.jpg";
		_generalMacro="Land_Graffiti_06_Stand_F";
		displayName="$STR_A3_Globe_Land_Graffiti_06_Stand_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_beta\data\img\decals\decal_stand1_ca.paa"
		};
		class EventHandlers
		{
			init="(_this # 0) call compile preprocessFileLineNumbers '\A3\Structures_F_Globe\Civilian\Graffiti\scripts\randomize.sqf'";
		};
	};
	class Land_Graffiti_06_EnemyHostage_F: Land_Graffiti_06_Title01_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Graffiti_06_EnemyHostage_F.jpg";
		_generalMacro="Land_Graffiti_06_EnemyHostage_F";
		displayName="$STR_A3_Globe_Land_Graffiti_06_EnemyHostage_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_beta\data\img\decals\decal_target_noshoot1_ca.paa"
		};
		class EventHandlers
		{
			init="(_this # 0) call compile preprocessFileLineNumbers '\A3\Structures_F_Globe\Civilian\Graffiti\scripts\randomize.sqf'";
		};
	};
	class Land_Graffiti_06_EnemyR_F: Land_Graffiti_06_Title01_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Graffiti_06_EnemyR_F.jpg";
		_generalMacro="Land_Graffiti_06_EnemyR_F";
		displayName="$STR_A3_Globe_Land_Graffiti_06_EnemyR_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_beta\data\img\decals\decal_target_right1_ca.paa"
		};
		class EventHandlers
		{
			init="(_this # 0) call compile preprocessFileLineNumbers '\A3\Structures_F_Globe\Civilian\Graffiti\scripts\randomize.sqf'";
		};
	};
	class Land_Graffiti_06_EnemyEnemy_F: Land_Graffiti_06_Title01_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Graffiti_06_EnemyEnemy_F.jpg";
		_generalMacro="Land_Graffiti_06_EnemyEnemy_F";
		displayName="$STR_A3_Globe_Land_Graffiti_06_EnemyEnemy_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_beta\data\img\decals\decal_target_target1_ca.paa"
		};
		class EventHandlers
		{
			init="(_this # 0) call compile preprocessFileLineNumbers '\A3\Structures_F_Globe\Civilian\Graffiti\scripts\randomize.sqf'";
		};
	};
	class Land_Graffiti_06_Vault_F: Land_Graffiti_06_Title01_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Graffiti_06_Vault_F.jpg";
		_generalMacro="Land_Graffiti_06_Vault_F";
		displayName="$STR_A3_Globe_Land_Graffiti_06_Vault_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_beta\data\img\decals\decal_vault1_ca.paa"
		};
		class EventHandlers
		{
			init="(_this # 0) call compile preprocessFileLineNumbers '\A3\Structures_F_Globe\Civilian\Graffiti\scripts\randomize.sqf'";
		};
	};
	class Land_Graffiti_06_Watchout_F: Land_Graffiti_06_Title01_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Graffiti_06_Watchout_F.jpg";
		_generalMacro="Land_Graffiti_06_Watchout_F";
		displayName="$STR_A3_Globe_Land_Graffiti_06_Watchout_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_beta\data\img\decals\decal_watch_out1_ca.paa"
		};
		class EventHandlers
		{
			init="(_this # 0) call compile preprocessFileLineNumbers '\A3\Structures_F_Globe\Civilian\Graffiti\scripts\randomize.sqf'";
		};
	};
	class Land_Graffiti_06_random_F: Land_Graffiti_06_Title01_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Graffiti_06_random_F.jpg";
		_generalMacro="Land_Graffiti_06_random_F";
		displayName="$STR_A3_Globe_Land_Graffiti_06_random_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_beta\data\img\decals\decal_watch_out1_ca.paa"
		};
		class EventHandlers
		{
			init="(_this # 0) call compile preprocessFileLineNumbers '\A3\Structures_F_Globe\Civilian\Graffiti\scripts\randomize__Land_Graffiti_06_random_F.sqf'";
		};
	};
	class ReligiousInscriptions_01_F: UserTexture_1x2_F
	{
		author="O&T Expansion Eden";
		editorCategory="EdCat_Signs";
		editorSubcategory="EdSubcat_Graffiti";
		vehicleClass="Structures_Cultural";
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\ReligiousInscriptions_01_F.jpg";
		_generalMacro="ReligiousInscriptions_01_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_Globe_CfgVehicles_ReligiousInscriptions_01_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\structures_f_enoch\cultural\Calvary_03\Data\Calvary_03_decal_01_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\structures_f_enoch\cultural\Calvary_03\Data\Calvary_03_decal.rvmat"
		};
		class Attributes
		{
			class SwitchTexture
			{
				property="SwitchTexture";
				displayName="$STR_expEden_Land_Calvary_03_decals_select_F";
				control="Combo";
				expression="_this setObjectTextureGlobal [0, _value]";
				defaultValue="'\A3\structures_f_enoch\cultural\Calvary_03\Data\Calvary_03_decal_01_ca.paa'";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="$STR_expEden_Land_Calvary_03_decals_select_01_F";
						value="\A3\structures_f_enoch\cultural\Calvary_03\Data\Calvary_03_decal_01_ca.paa";
						picture="\A3\structures_f_enoch\cultural\Calvary_03\Data\Calvary_03_decal_01_ca.paa";
					};
					class 2
					{
						name="$STR_expEden_Land_Calvary_03_decals_select_04_F";
						value="\A3\structures_f_enoch\cultural\Calvary_03\Data\Calvary_03_decal_04_ca.paa";
						picture="\A3\structures_f_enoch\cultural\Calvary_03\Data\Calvary_03_decal_04_ca.paa";
					};
					class 3
					{
						name="$STR_expEden_Land_Calvary_03_decals_select_02_F";
						value="\A3\structures_f_enoch\cultural\Calvary_03\Data\Calvary_03_decal_02_ca.paa";
						picture="\A3\structures_f_enoch\cultural\Calvary_03\Data\Calvary_03_decal_02_ca.paa";
					};
					class 4
					{
						name="$STR_expEden_Land_Calvary_03_decals_select_03_F";
						value="\A3\structures_f_enoch\cultural\Calvary_03\Data\Calvary_03_decal_03_ca.paa";
						picture="\A3\structures_f_enoch\cultural\Calvary_03\Data\Calvary_03_decal_03_ca.paa";
					};
					class 5
					{
						name="$STR_expEden_Land_Calvary_03_decals_select_05_F";
						value="\A3\structures_f_enoch\cultural\Calvary_03\Data\Calvary_03_decal_ca.paa";
						picture="\A3\structures_f_enoch\cultural\Calvary_03\Data\Calvary_03_decal_ca.paa";
					};
				};
			};
		};
	};
	class ReligiousInscriptions_01_random_F: ReligiousInscriptions_01_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\ReligiousInscriptions_01_random_F.jpg";
		_generalMacro="ReligiousInscriptions_01_random_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_Globe_CfgVehicles_ReligiousInscriptions_01_random_F0";
		class Attributes
		{
			class ObjectTextureCustom0
			{
				displayName="$STR_3den_object_attribute_objecttexturecustom0_displayname";
				tooltip="$STR_3den_object_attribute_objecttexturecustom_tooltip";
				property="ObjectTextureCustom0";
				control="Edit";
				expression="_this setObjectTextureGlobal [0,_value]";
				defaultValue="(getObjectTextures _this) param [0,'',['']]";
			};
		};
		class EventHandlers
		{
			init="(_this # 0) call compile preprocessFileLineNumbers '\A3\Structures_F_Globe\Civilian\Graffiti\scripts\randomize__ReligiousInscriptions_01_random.sqf'";
		};
	};
	class DestroyerGlass_1m_01_F: UserTexture1m_F
	{
		author="O&T Expansion Eden";
		editorCategory="EdCat_Signs";
		editorSubcategory="EdSubcat_Graffiti";
		vehicleClass="Signs";
		editorPreview="\a3\boat_f_destroyer\Destroyer_01\Data\Destroyer_01_Window_01_ca.paa";
		_generalMacro="DestroyerGlass_1m_01_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_Globe_CfgVehicles_DestroyerGlass_1m_01_F0";
		hiddenSelectionsTextures[]=
		{
			"\a3\boat_f_destroyer\Destroyer_01\Data\Destroyer_01_Window_01_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\boat_f_destroyer\Destroyer_01\Data\Destroyer_01_Window_01.rvmat"
		};
		class Attributes
		{
			class SwitchMaterial
			{
				property="SwitchMaterial";
				displayName="$STR_3DEN_OBJECT_ATTRIBUTE_OBJECTMATERIALCUSTOM0_DISPLAYNAME";
				control="Combo";
				expression="_this setObjectMaterialGlobal [0, _value]";
				defaultValue="'\a3\boat_f_destroyer\Destroyer_01\Data\Destroyer_01_Window_01.rvmat'";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="$STR_A3_Globe_CfgVehicles_DestroyerGlass_1m_01_F_Attributes_SwitchTexture_values0";
						value="\a3\boat_f_destroyer\Destroyer_01\Data\Destroyer_01_Window_01.rvmat";
					};
					class 2
					{
						name="$STR_A3_Globe_CfgVehicles_DestroyerGlass_1m_01_F_Attributes_SwitchTexture_values1";
						value="\a3\boat_f_destroyer\Destroyer_01\Data\Destroyer_01_Window_01_damage_01.rvmat";
					};
				};
			};
		};
	};
	class DestroyerGlass_1x2m_01_F: UserTexture_1x2_F
	{
		author="O&T Expansion Eden";
		editorCategory="EdCat_Signs";
		editorSubcategory="EdSubcat_Graffiti";
		vehicleClass="Signs";
		editorPreview="\a3\boat_f_destroyer\Destroyer_01\Data\Destroyer_01_Window_01_ca.paa";
		_generalMacro="DestroyerGlass_1x2m_01_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_Globe_CfgVehicles_DestroyerGlass_1x2m_01_F0";
		hiddenSelectionsTextures[]=
		{
			"\a3\boat_f_destroyer\Destroyer_01\Data\Destroyer_01_Window_01_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\boat_f_destroyer\Destroyer_01\Data\Destroyer_01_Window_01.rvmat"
		};
		class Attributes
		{
			class SwitchMaterial
			{
				property="SwitchMaterial";
				displayName="$STR_A3_Globe_CfgVehicles_DestroyerGlass_1m_01_F_Attributes_SwitchMaterial_displayName0";
				control="Combo";
				expression="_this setObjectMaterialGlobal [0, _value]";
				defaultValue="'\a3\boat_f_destroyer\Destroyer_01\Data\Destroyer_01_Window_01.rvmat'";
				typeName="STRING";
				class values
				{
					class 1
					{
						name="$STR_A3_Globe_CfgVehicles_DestroyerGlass_1m_01_F_Attributes_SwitchTexture_values0";
						value="\a3\boat_f_destroyer\Destroyer_01\Data\Destroyer_01_Window_01.rvmat";
					};
					class 2
					{
						name="$STR_A3_Globe_CfgVehicles_DestroyerGlass_1m_01_F_Attributes_SwitchTexture_values1";
						value="\a3\boat_f_destroyer\Destroyer_01\Data\Destroyer_01_Window_01_damage_01.rvmat";
					};
				};
			};
		};
	};
	class GalleryInterior_plan_01: UserTexture1m_F
	{
		author="O&T Expansion Eden";
		editorCategory="EdCat_Things";
		editorSubcategory="EdSubcat_Posters";
		vehicleClass="Signs";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\GalleryInterior_plan_01.jpg";
		_generalMacro="GalleryInterior_plan_01";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_GalleryInterior_plan_01";
		hiddenSelectionsTextures[]=
		{
			"\a3\missions_f_aow\data\Img\Map\Gallery_Plan_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\data_f\default_alpha.rvmat"
		};
	};
	class GalleryInterior_room_Kornelis: UserTexture1m_F
	{
		author="O&T Expansion Eden";
		editorSubcategory="EdSubcat_Graffiti";
		vehicleClass="Signs";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\GalleryInterior_room_Kornelis.jpg";
		_generalMacro="GalleryInterior_room_Kornelis";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_GalleryInterior_room_Kornelis";
		hiddenSelectionsTextures[]=
		{
			"\a3\missions_f_aow\data\Img\Textures\Rooms\RoomName_01_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\data_f\default_alpha.rvmat"
		};
	};
	class GalleryInterior_room_Verbeek: UserTexture1m_F
	{
		author="O&T Expansion Eden";
		editorSubcategory="EdSubcat_Graffiti";
		vehicleClass="Signs";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\GalleryInterior_room_Verbeek.jpg";
		_generalMacro="GalleryInterior_room_Verbeek";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_GalleryInterior_room_Verbeek";
		hiddenSelectionsTextures[]=
		{
			"\a3\missions_f_aow\data\Img\Textures\Rooms\RoomName_02_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\data_f\default_alpha.rvmat"
		};
	};
	class GalleryInterior_room_Valic: UserTexture1m_F
	{
		author="O&T Expansion Eden";
		editorSubcategory="EdSubcat_Graffiti";
		vehicleClass="Signs";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\GalleryInterior_room_Valic.jpg";
		_generalMacro="GalleryInterior_room_Valic";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_GalleryInterior_room_Valic";
		hiddenSelectionsTextures[]=
		{
			"\a3\missions_f_aow\data\Img\Textures\Rooms\RoomName_03_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\data_f\default_alpha.rvmat"
		};
	};
	class Graffiti_01_v2: Graffiti_base_F
	{
		author="O&T Expansion Eden";
		mapSize=1.66;
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Graffiti_01_v2.jpg";
		_generalMacro="Graffiti_01_v2";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_Graffiti_AntiWar_01";
		model="\A3\Structures_F_Globe\Civilian\Graffiti\Graffiti_01_v2.p3d";
		icon="iconObject_10x1";
		posterSize=2;
		hiddenSelections[]=
		{
			"camo_1"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F_EPB\Civ\Graffiti\Data\Tags_CA.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\data_f\default_alpha.rvmat"
		};
	};
	class Graffiti_01_v3: Graffiti_base_F
	{
		author="O&T Expansion Eden";
		mapSize=1.66;
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Graffiti_01_v3.jpg";
		_generalMacro="Graffiti_01_v3";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_Graffiti_AntiWar_02";
		model="\A3\Structures_F_Globe\Civilian\Graffiti\Graffiti_01_v3.p3d";
		icon="iconObject_10x1";
		posterSize=2;
		hiddenSelections[]=
		{
			"camo_1"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F_EPB\Civ\Graffiti\Data\Tags_CA.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\data_f\default_alpha.rvmat"
		};
	};
	class Graffiti_04_v2: Graffiti_base_F
	{
		author="O&T Expansion Eden";
		mapSize=1.66;
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Graffiti_04_v2.jpg";
		_generalMacro="Graffiti_04_v2";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_Graffiti_Antistate_01";
		model="\A3\Structures_F_Globe\Civilian\Graffiti\Graffiti_04_v2.p3d";
		icon="iconObject_10x1";
		posterSize=2;
		hiddenSelections[]=
		{
			"camo_1"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F_EPB\Civ\Graffiti\Data\Tags_CA.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\data_f\default_alpha.rvmat"
		};
	};
	class Graffiti_02_v2: Graffiti_base_F
	{
		author="O&T Expansion Eden";
		mapSize=1.66;
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Graffiti_02_v2.jpg";
		_generalMacro="Graffiti_02_v2";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_Graffiti_Freedom_01";
		model="\A3\Structures_F_Globe\Civilian\Graffiti\Graffiti_02_v2.p3d";
		icon="iconObject_10x1";
		posterSize=2;
		hiddenSelections[]=
		{
			"camo_1"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F_EPB\Civ\Graffiti\Data\Tags_CA.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\data_f\default_alpha.rvmat"
		};
	};
	class Graffiti_02_v3: Graffiti_base_F
	{
		author="O&T Expansion Eden";
		mapSize=1.66;
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Graffiti_02_v3.jpg";
		_generalMacro="Graffiti_02_v3";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_Graffiti_Freedom_02";
		model="\A3\Structures_F_Globe\Civilian\Graffiti\Graffiti_02_v3.p3d";
		icon="iconObject_10x1";
		posterSize=2;
		hiddenSelections[]=
		{
			"camo_1"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F_EPB\Civ\Graffiti\Data\Tags_CA.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\data_f\default_alpha.rvmat"
		};
	};
	class Graffiti_Multi_01_1m: UserTexture1m_F
	{
		author="O&T Expansion Eden";
		mapSize=1;
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Graffiti_Multi_01_1m.jpg";
		_generalMacro="Graffiti_Multi_01_1m";
		displayName="$STR_Globe_Graffiti_Multi_01_1m";
		icon="iconObject_1x1";
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F_EPB\Civ\Graffiti\Data\Graffiti_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\data_f\default_alpha.rvmat"
		};
		keepHorizontalPlacement=0;
		scope=2;
		scopeCurator=2;
		vehicleClass="Signs";
		editorCategory="EdCat_Signs";
		editorSubcategory="EdSubcat_Graffiti";
		destrType="DestructNo";
	};
	class Graffiti_Multi_01_10m: UserTexture10m_F
	{
		author="O&T Expansion Eden";
		mapSize=10;
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Graffiti_Multi_01_10m.jpg";
		_generalMacro="Graffiti_Multi_01_10m";
		displayName="$STR_Globe_Graffiti_Multi_01_10m";
		icon="iconObject_1x1";
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F_EPB\Civ\Graffiti\Data\Graffiti_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\data_f\default_alpha.rvmat"
		};
		keepHorizontalPlacement=0;
		scope=2;
		scopeCurator=2;
		vehicleClass="Signs";
		editorCategory="EdCat_Signs";
		editorSubcategory="EdSubcat_Graffiti";
		destrType="DestructNo";
	};
	class Graffiti_Multi_02_1m: UserTexture1m_F
	{
		author="O&T Expansion Eden";
		mapSize=1;
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Graffiti_Multi_02_1m.jpg";
		_generalMacro="Graffiti_Multi_02_1m";
		displayName="$STR_Globe_Graffiti_Multi_02_1m";
		icon="iconObject_1x1";
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F_EPB\Civ\Graffiti\Data\Tags_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\data_f\default_alpha.rvmat"
		};
		keepHorizontalPlacement=0;
		scope=2;
		scopeCurator=2;
		vehicleClass="Signs";
		editorCategory="EdCat_Signs";
		editorSubcategory="EdSubcat_Graffiti";
		destrType="DestructNo";
	};
	class Graffiti_Multi_02_10m: UserTexture10m_F
	{
		author="O&T Expansion Eden";
		mapSize=10;
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Graffiti_Multi_02_10m.jpg";
		_generalMacro="Graffiti_Multi_02_10m";
		displayName="$STR_Globe_Graffiti_Multi_02_10m";
		icon="iconObject_1x1";
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F_EPB\Civ\Graffiti\Data\Tags_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\data_f\default_alpha.rvmat"
		};
		keepHorizontalPlacement=0;
		scope=2;
		scopeCurator=2;
		vehicleClass="Signs";
		editorCategory="EdCat_Signs";
		editorSubcategory="EdSubcat_Graffiti";
		destrType="DestructNo";
	};
	class EauDeCombat_01_Arma_1m: UserTexture1m_F
	{
		author="O&T Expansion Eden";
		mapSize=1;
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\EauDeCombat_01_Arma_1m.jpg";
		_generalMacro="EauDeCombat_01_Arma_1m";
		displayName="$STR_Globe_EauDeCombat_01_Arma_1m";
		icon="iconObject_1x1";
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F_EPA\Items\Vessels\data\EauDeCombat_01_logo_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\data_f\default_alpha.rvmat"
		};
		keepHorizontalPlacement=0;
		scope=2;
		scopeCurator=2;
		vehicleClass="Signs";
		DLC="AoW";
		editorCategory="EdCat_Signs";
		editorSubcategory="EdSubcat_Graffiti";
		destrType="DestructNo";
	};
	class EauDeCombat_01_Arma_10m: UserTexture10m_F
	{
		author="O&T Expansion Eden";
		mapSize=10;
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\EauDeCombat_01_Arma_10m.jpg";
		_generalMacro="EauDeCombat_01_Arma_10m";
		displayName="$STR_Globe_EauDeCombat_01_Arma_10m";
		icon="iconObject_1x1";
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F_EPA\Items\Vessels\data\EauDeCombat_01_logo_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\data_f\default_alpha.rvmat"
		};
		keepHorizontalPlacement=0;
		scope=2;
		scopeCurator=2;
		vehicleClass="Signs";
		DLC="AoW";
		editorCategory="EdCat_Signs";
		editorSubcategory="EdSubcat_Graffiti";
		destrType="DestructNo";
	};
	class Lightning_01_1x2m: UserTexture_1x2_F
	{
		author="O&T Expansion Eden";
		editorCategory="EdCat_Signs";
		editorSubcategory="EdSubcat_Graffiti";
		vehicleClass="Signs";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Lightning_01_1x2m.jpg";
		_generalMacro="Lightning_01_1x2m";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_cfgvehicles_lightning1_f";
		hiddenSelectionsTextures[]=
		{
			"\a3\data_f\blesk_a_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\data_f\default_alpha.rvmat"
		};
		class Attributes
		{
		};
	};
	class Lightning_02_1x2m: Lightning_01_1x2m
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Lightning_02_1x2m.jpg";
		_generalMacro="Lightning_02_1x2m";
		displayName="$STR_A3_cfgvehicles_lightning2_f";
		hiddenSelectionsTextures[]=
		{
			"\a3\data_f\blesk_b_ca.paa"
		};
	};
	class Graffiti_misc_01: Graffiti_base_F
	{
		author="O&T Expansion Eden";
		mapSize=1.66;
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Graffiti_misc_01.jpg";
		_generalMacro="Graffiti_misc_01";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicle_Graffiti_misc_01";
		model="\A3\Structures_F_Globe\Civilian\Graffiti\Graffiti_misc_01.p3d";
		icon="iconObject_1x1";
		posterSize=2;
		hiddenSelections[]=
		{
			"camo_1"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\structures_f_argo\data\alpha\alpha_supermarket_decals_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\data_f\default_alpha.rvmat"
		};
	};
	class Graffiti_misc_02: Graffiti_base_F
	{
		author="O&T Expansion Eden";
		mapSize=1.66;
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Graffiti_misc_02.jpg";
		_generalMacro="Graffiti_misc_02";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicle_Graffiti_misc_02";
		model="\A3\Structures_F_Globe\Civilian\Graffiti\Graffiti_misc_02.p3d";
		icon="iconObject_1x1";
		posterSize=2;
		hiddenSelections[]=
		{
			"camo_1"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\structures_f_argo\data\alpha\alpha_supermarket_decals_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\data_f\default_alpha.rvmat"
		};
	};
	class Graffiti_RedCrystal_01: Land_Graffiti_RedCrystal_01_G
	{
		scope=1;
		scopeCurator=0;
	};
	class Steam_01_1m: UserTexture1m_F
	{
		author="O&T Expansion Eden";
		mapSize=1;
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Steam_01_1m.jpg";
		_generalMacro="Steam_01_1m";
		displayName="Steam";
		icon="iconObject_1x1";
		hiddenSelectionsTextures[]=
		{
			"a3\ui_f\data\logos\steam_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\data_f\default_alpha.rvmat"
		};
		keepHorizontalPlacement=0;
		scope=2;
		scopeCurator=2;
		vehicleClass="Signs";
		editorCategory="EdCat_Signs";
		editorSubcategory="EdSubcat_Graffiti";
		destrType="DestructNo";
	};
	class LogoBI_01_white: Steam_01_1m
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\LogoBI_01_white.jpg";
		_generalMacro="LogoBI_01_white";
		displayName="$STR_Globe_CfgVehicle_LogoBI_01_white0";
		hiddenSelectionsTextures[]=
		{
			"a3\ui_f\data\logos\bi_white_ca.paa"
		};
	};
	class LogoBI_01_black: Steam_01_1m
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\LogoBI_01_black.jpg";
		_generalMacro="LogoBI_01_black";
		displayName="$STR_Globe_CfgVehicle_LogoBI_01_black0";
		hiddenSelectionsTextures[]=
		{
			"a3\ui_f\data\logos\bi_black_ca.paa"
		};
	};
	class Graffiti_HygieiaBowl_01: UserTexture1m_F
	{
		author="O&T Expansion Eden";
		mapSize=0.30000001;
		editorPreview="\A3\Characters_F_Orange\Uniforms\Data\C_Paramedic_01_logo_co.paa";
		_generalMacro="Graffiti_HygieiaBowl_01";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgUnitInsignia_Patch_HygieiaBowl_010";
		icon="iconObject_1x1";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Orange\Uniforms\Data\C_Paramedic_01_logo_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\data_f\default_alpha.rvmat"
		};
		vehicleClass="Signs";
		editorCategory="EdCat_Signs";
		editorSubcategory="EdSubcat_Graffiti";
		destrType="DestructNo";
	};
	class Land_GraffitiCircularSaw: Graffiti_base_F
	{
		author="O&T Expansion Eden";
		mapSize=1.01;
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_GraffitiCircularSaw.jpg";
		_generalMacro="Land_GraffitiCircularSaw";
		scope=1;
		scopeCurator=0;
		displayName="Land_GraffitiCircularSaw";
		model="\A3\Structures_F_Globe\Civilian\Graffiti\CircularSaw_01.p3d";
		icon="iconObject_10x1";
	};
	class Land_GraffitiMaroulaStatueDrawing: Graffiti_base_F
	{
		author="O&T Expansion Eden";
		mapSize=1.01;
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_GraffitiMaroulaStatueDrawing.jpg";
		_generalMacro="Land_GraffitiMaroulaStatueDrawing";
		scope=1;
		scopeCurator=0;
		displayName="Land_GraffitiMaroulaStatueDrawing";
		model="\A3\Structures_F_Globe\Civilian\Graffiti\MaroulaStatueDrawing.p3d";
		icon="iconObject_10x1";
	};
	class Graffiti_Galaxy_01_G: UserTexture1m_F
	{
		author="O&T Expansion Eden";
		mapSize=0.30000001;
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Graffiti_Galaxy_01_G.jpg";
		_generalMacro="Graffiti_Galaxy_01_G";
		scope=1;
		scopeCurator=0;
		displayName="$STR_Globe_CfgVehicles_Graffiti_Galaxy_01_G0";
		icon="iconObject_1x1";
		hiddenSelectionsTextures[]=
		{
			"\a3\structures_f_exp\industrial\sugarcanefactory_01\data\scf_chimney_g_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\structures_f_exp\industrial\sugarcanefactory_01\data\scf_chimney_g.rvmat"
		};
		vehicleClass="Signs";
		editorCategory="EdCat_Signs";
		editorSubcategory="EdSubcat_Graffiti";
		destrType="DestructNo";
	};
	class Land_Graffiti_Shenlong_01_G: Graffiti_base_F
	{
		author="O&T Expansion Eden";
		mapSize=1.66;
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Graffiti_Shenlong_01_G.jpg";
		_generalMacro="Land_Graffiti_Shenlong_01_G";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_Graffiti_Shenlong_01_G0";
		model="\a3\structures_f_globe\Civilian\Graffiti\graffiti_shenlong_01_g.p3d";
		icon="iconObject_10x1";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\armor_f_decade\mbt_02\data\mbt_02_signs_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\data_f\default_alpha.rvmat"
		};
	};
	class Land_MaroulaStatueDrawing_01_G: S5_drawing_big
	{
		author="O&T Expansion Eden";
		mapSize=1.66;
		_generalMacro="Land_MaroulaStatueDrawing_01_G";
		scope=2;
		scopeCurator=2;
		model="\a3\structures_f_globe\Civilian\Graffiti\maroulastatuedrawing_01_g.p3d";
		icon="iconObject_1x3";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\data_f\default.rvmat"
		};
	};
	class Land_Graffiti_Cat_01_G: Graffiti_base_F
	{
		author="O&T Expansion Eden";
		mapSize=1.66;
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\C4_cat.jpg";
		_generalMacro="Land_Graffiti_Cat_01_G";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_Graffiti_Cat_01_G0";
		model="\a3\structures_f_globe\Civilian\Graffiti\graffiti_cat_01_g.p3d";
		icon="iconObject_1x1";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\C4\C4_cat_CA.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\data_f\default_alpha.rvmat"
		};
	};
	class Land_Graffiti_Cat_01_G_damaged: Graffiti_base_F
	{
		author="O&T Expansion Eden";
		mapSize=1.66;
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\C4_cat_damaged.jpg";
		_generalMacro="Land_Graffiti_Cat_01_G_damaged";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_Graffiti_Cat_01_G_damaged0";
		model="\a3\structures_f_globe\Civilian\Graffiti\graffiti_cat_01_g_damaged.p3d";
		icon="iconObject_1x1";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\missions_f_orange\data\img\orange_compositions\c4\C4_cat_damaged_CA.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\data_f\default_alpha.rvmat"
		};
	};
	class Land_Graffiti_FaradayCage_01_G: Graffiti_base_F
	{
		author="O&T Expansion Eden";
		mapSize=1.66;
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Land_cargo20_emp_sign_F.jpg";
		_generalMacro="Land_Graffiti_FaradayCage_01_G";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_Graffiti_FaradayCage_01_G0";
		model="\a3\structures_f_globe\Civilian\Graffiti\graffiti_faradaycage_01_g.p3d";
		icon="iconObject_1x1";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\structures_f_enoch\industrial\cargo\data\cargo20_emp_sign.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\structures_f_enoch\industrial\cargo\data\cargo20_emp_sign.rvmat"
		};
	};
	class Land_Graffiti_UFO_01_beam_G: Graffiti_base_F
	{
		author="O&T Expansion Eden";
		mapSize=1.66;
		editorPreview="\A3\EditorPreviews_f_expEden\Data\CfgVehicles\Land_Graffiti_ufoBeam_F.jpg";
		_generalMacro="Land_Graffiti_UFO_01_beam_G";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_Graffiti_UFO_01_beam_G0";
		model="\a3\structures_f_globe\Civilian\Graffiti\graffiti_ufo_01_beam_g.p3d";
		icon="iconObject_1x3";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_beta\data\img\decals\decal_ufo_beam_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\data_f\default_alpha.rvmat"
		};
	};
	class Land_Graffiti_UFO_01_saucer_G: Graffiti_base_F
	{
		author="O&T Expansion Eden";
		mapSize=1.66;
		editorPreview="\A3\EditorPreviews_f_expEden\Data\CfgVehicles\Land_Graffiti_ufo_F.jpg";
		_generalMacro="Land_Graffiti_UFO_01_saucer_G";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_Graffiti_UFO_01_saucer_G0";
		model="\a3\structures_f_globe\Civilian\Graffiti\graffiti_ufo_01_saucer_g.p3d";
		icon="iconObject_elipse_H";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_beta\data\img\decals\decal_ufo_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\data_f\default_alpha.rvmat"
		};
	};
	class Land_Graffiti_BluePearl_01_G: Graffiti_base_F
	{
		author="O&T Expansion Eden";
		mapSize=1.66;
		editorPreview="\A3\EditorPreviews_f_expEden\Data\CfgVehicles\Land_Graffiti_BluePearl_01_G.jpg";
		_generalMacro="Land_Graffiti_BluePearl_01_G";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_Graffiti_BluePearl_01_G0";
		model="\a3\structures_f_globe\Civilian\Graffiti\graffiti_bluepearl_01_g.p3d";
		icon="iconObject_4x1";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\structures_f_exp\industrial\port\data\gantrycrane_alpha_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\structures_f_exp\industrial\port\data\gantrycrane_alpha.rvmat"
		};
	};
	class Land_Graffiti_BluePearl_02_G: Graffiti_base_F
	{
		author="O&T Expansion Eden";
		mapSize=1.66;
		editorPreview="\A3\EditorPreviews_f_expEden\Data\CfgVehicles\Land_Graffiti_BluePearl_02_G.jpg";
		_generalMacro="Land_Graffiti_BluePearl_02_G";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_Graffiti_BluePearl_02_G0";
		model="\a3\structures_f_globe\Civilian\Graffiti\graffiti_bluepearl_02_g.p3d";
		icon="iconObject_3x1";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\structures_f_exp\industrial\port\data\gantrycrane_alpha_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\structures_f_exp\industrial\port\data\gantrycrane_alpha.rvmat"
		};
	};
	class Land_Graffiti_WarningHHA_01_G: Graffiti_base_F
	{
		author="O&T Expansion Eden";
		mapSize=1.66;
		editorPreview="\A3\EditorPreviews_f_expEden\Data\CfgVehicles\Land_Graffiti_WarningHHA_01_G.jpg";
		_generalMacro="Land_Graffiti_WarningHHA_01_G";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_Graffiti_WarningHHA_01_G0";
		model="\a3\structures_f_globe\Civilian\Graffiti\graffiti_warninghha_01_g.p3d";
		icon="iconObject_3x1";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\structures_f_exp\industrial\port\data\cranecont_alpha_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\structures_f_exp\industrial\port\data\cranecont_alpha.rvmat"
		};
	};
	class Land_Graffiti_WarningHHA_02_G: Graffiti_base_F
	{
		author="O&T Expansion Eden";
		mapSize=1.66;
		editorPreview="\A3\EditorPreviews_f_expEden\Data\CfgVehicles\Land_Graffiti_WarningHHA_02_G.jpg";
		_generalMacro="Land_Graffiti_WarningHHA_02_G";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_Graffiti_WarningHHA_02_G0";
		model="\a3\structures_f_globe\Civilian\Graffiti\graffiti_warninghha_02_g.p3d";
		icon="iconObject_3x1";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\structures_f_exp\industrial\port\data\gantrycrane_alpha_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\structures_f_exp\industrial\port\data\gantrycrane_alpha.rvmat"
		};
	};
	class Land_Graffiti_TCT_G: Graffiti_base_F
	{
		author="O&T Expansion Eden";
		mapSize=1.66;
		editorPreview="\A3\EditorPreviews_f_expEden\Data\CfgVehicles\Land_Graffiti_TCT_G.jpg";
		_generalMacro="Land_Graffiti_TCT_G";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_Graffiti_TCT_G0";
		model="\a3\structures_f_globe\Civilian\Graffiti\graffiti_tct_g.p3d";
		icon="iconObject_7x1";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\structures_f_exp\industrial\port\data\cranecont_alpha_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\structures_f_exp\industrial\port\data\cranecont_alpha.rvmat"
		};
	};
	class Land_Graffiti_Daltgreen_01_G: Graffiti_base_F
	{
		author="O&T Expansion Eden";
		mapSize=1.66;
		editorPreview="\A3\EditorPreviews_f_expEden\Data\CfgVehicles\Land_Graffiti_Daltgreen_01_G.jpg";
		_generalMacro="Land_Graffiti_Daltgreen_01_G";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_Graffiti_Daltgreen_01_G0";
		model="\a3\structures_f_globe\Civilian\Graffiti\graffiti_daltgreen_01_g.p3d";
		icon="iconObject_1x1";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\structures_f_exp\industrial\port\data\cranecont_alpha_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\structures_f_exp\industrial\port\data\cranecont_alpha.rvmat"
		};
	};
	class Land_Graffiti_Vrana_big_01_G: Graffiti_base_F
	{
		author="O&T Expansion Eden";
		mapSize=1.66;
		editorPreview="\A3\EditorPreviews_f_expEden\Data\CfgVehicles\Land_Graffiti_Vrana_big_01_G.jpg";
		_generalMacro="Land_Graffiti_Vrana_big_01_G";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_Graffiti_Vrana_big_01_G0";
		model="\a3\structures_f_globe\Civilian\Graffiti\graffiti_vrana_big_01_g.p3d";
		icon="iconObject_5x2";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\structures_f_exp\industrial\port\data\cranecont_alpha_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\structures_f_exp\industrial\port\data\cranecont_alpha.rvmat"
		};
	};
	class Land_Graffiti_WarningPatchBY_G: Graffiti_base_F
	{
		author="O&T Expansion Eden";
		mapSize=1.66;
		editorPreview="\A3\EditorPreviews_f_expEden\Data\CfgVehicles\Land_Graffiti_WarningPatchBY_G.jpg";
		_generalMacro="Land_Graffiti_WarningPatchBY_G";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_Graffiti_WarningPatchBY_G0";
		model="\a3\structures_f_globe\Civilian\Graffiti\graffiti_warningpatchby_01_g.p3d";
		icon="iconObject_5x2";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\structures_f_exp\industrial\port\data\gantrycrane_alpha_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\structures_f_exp\industrial\port\data\gantrycrane_alpha.rvmat"
		};
	};
	class Land_Graffiti_Hopscotch_01_G: Graffiti_base_F
	{
		author="O&T Expansion Eden";
		mapSize=1.66;
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\C4_hopscotch.jpg";
		_generalMacro="Land_Graffiti_Hopscotch_01_G";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_Graffiti_Hopscotch_01_G0";
		model="\a3\structures_f_globe\Civilian\Graffiti\graffiti_hopscotch_01_g.p3d";
		icon="iconObject_2x5";
	};
	class Land_Graffiti_Hopscotch_01_G_LC: Graffiti_base_F
	{
		author="O&T Expansion Eden";
		mapSize=1.66;
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\C4_hopscotch.jpg";
		_generalMacro="Land_Graffiti_Hopscotch_01_G_LC";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_Graffiti_Hopscotch_01_G_LC0";
		model="\a3\structures_f_globe\Civilian\Graffiti\graffiti_hopscotch_01_g_lc.p3d";
		icon="iconObject_2x5";
	};
	class Land_Graffiti_LogoNoriBrecLobster_G: Graffiti_base_F
	{
		author="O&T Expansion Eden";
		mapSize=1.66;
		editorPreview="\A3\EditorPreviews_f_expEden\Data\CfgVehicles\Land_Graffiti_LogoNoriBrecLobster_G.jpg";
		_generalMacro="Land_Graffiti_LogoNoriBrecLobster_G";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_Graffiti_LogoNoriBrecLobster_G0";
		model="\a3\structures_f_globe\Civilian\Graffiti\graffiti_logonoribreclobster_g.p3d";
		icon="iconObject_2x5";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\props_f_exp\naval\boats\data\boat_03_abandoned_logo_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\data_f\default_alpha.rvmat"
		};
	};
	class Land_Graffiti_WarningPatchBY_02_v1_G: Graffiti_base_F
	{
		author="O&T Expansion Eden";
		mapSize=1.66;
		editorPreview="\A3\EditorPreviews_f_expEden\Data\CfgVehicles\Land_Graffiti_WarningPatchBY_02_v1_G.jpg";
		_generalMacro="Land_Graffiti_WarningPatchBY_02_v1_G";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_Graffiti_WarningPatchBY_02_v1_G0";
		model="\a3\structures_f_globe\Civilian\Graffiti\graffiti_warningpatchby_02_v1_g.p3d";
		icon="iconObject_1x5";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\structures_f_exp\data\accessories\multistorybuilding_01_accessories_co.paa"
		};
		hiddenSelectionsMaterials[]={};
	};
	class Land_Graffiti_WarningPatchBY_02_v2_G: Graffiti_base_F
	{
		author="O&T Expansion Eden";
		mapSize=1.66;
		editorPreview="\A3\EditorPreviews_f_expEden\Data\CfgVehicles\Land_Graffiti_WarningPatchBY_02_v2_G.jpg";
		_generalMacro="Land_Graffiti_WarningPatchBY_02_v2_G";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_Graffiti_WarningPatchBY_02_v2_G0";
		model="\a3\structures_f_globe\Civilian\Graffiti\graffiti_warningpatchby_02_v2_g.p3d";
		icon="iconObject_1x5";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\structures_f_exp\data\accessories\multistorybuilding_01_accessories_co.paa"
		};
		hiddenSelectionsMaterials[]={};
	};
	class Land_Graffiti_DDay_01_G: Graffiti_base_F
	{
		author="O&T Expansion Eden";
		mapSize=1.66;
		editorPreview="\A3\EditorPreviews_f_expEden\Data\CfgVehicles\Land_Graffiti_DDay_01_G.jpg";
		_generalMacro="Land_Graffiti_DDay_01_G";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_Graffiti_DDay_01_G0";
		model="\a3\structures_f_globe\Civilian\Graffiti\graffiti_dday_01_g.p3d";
		icon="iconObject_1x5";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\structures_f_aow\civilian\gallery_01\data\gallery_sign_01_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\structures_f_aow\civilian\gallery_01\data\gallery_sign.rvmat"
		};
	};
	class Land_Graffiti_LogoResearchCSAT_02_1m_G: Graffiti_base_F
	{
		author="O&T Expansion Eden";
		mapSize=1.66;
		editorPreview="\A3\EditorPreviews_f_expEden\Data\CfgVehicles\Land_Graffiti_LogoResearchCSAT_02_1m_G.jpg";
		_generalMacro="Land_Graffiti_LogoResearchCSAT_02_1m_G";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Graffiti_LogoResearchCSAT_02_1m_G0";
		model="\a3\structures_f_globe\Civilian\Graffiti\graffiti_logoresearchcsat_02_1m_g.p3d";
		icon="iconObject_1x1";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\structures_f\research\data\research_alpha_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\data_f\default_alpha.rvmat"
		};
	};
	class Land_Graffiti_LogoResearchCSAT_02_5m_G: Graffiti_base_F
	{
		author="O&T Expansion Eden";
		mapSize=1.66;
		editorPreview="\A3\EditorPreviews_f_expEden\Data\CfgVehicles\Land_Graffiti_LogoResearchCSAT_02_5m_G.jpg";
		_generalMacro="Land_Graffiti_LogoResearchCSAT_02_5m_G";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Graffiti_LogoResearchCSAT_02_5m_G0";
		model="\a3\structures_f_globe\Civilian\Graffiti\graffiti_logoresearchcsat_02_5m_g.p3d";
		icon="iconObject_1x1";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\structures_f\research\data\research_alpha_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\data_f\default_alpha.rvmat"
		};
	};
	class Land_Graffiti_PaintSplashes_01_G: Graffiti_base_F
	{
		author="O&T Expansion Eden";
		mapSize=1.66;
		editorPreview="\A3\EditorPreviews_f_expEden\Data\CfgVehicles\Land_Graffiti_PaintSplashes_01_G.jpg";
		_generalMacro="Land_Graffiti_PaintSplashes_01_G";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_Graffiti_PaintSplashes_01_G0";
		model="\a3\structures_f_globe\Civilian\Graffiti\graffiti_paintsplashes_01_g.p3d";
		icon="iconObject_1x1";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\structures_f\civ\constructions\data\scaffolding_alpha_faces_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\structures_f\civ\constructions\data\scaffolding_alpha_faces.rvmat"
		};
	};
	class Land_Graffiti_PaintSplashes_02_G: Land_Graffiti_PaintSplashes_01_G
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_f_expEden\Data\CfgVehicles\Land_Graffiti_PaintSplashes_02_G.jpg";
		_generalMacro="Land_Graffiti_PaintSplashes_02_G";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_Graffiti_PaintSplashes_02_G0";
		model="\a3\structures_f_globe\Civilian\Graffiti\graffiti_paintsplashes_02_g.p3d";
		icon="iconObject_1x2";
	};
	class Land_Graffiti_PaintSplashes_03_G: Land_Graffiti_PaintSplashes_01_G
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_f_expEden\Data\CfgVehicles\Land_Graffiti_PaintSplashes_03_G.jpg";
		_generalMacro="Land_Graffiti_PaintSplashes_03_G";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_Graffiti_PaintSplashes_03_G0";
		model="\a3\structures_f_globe\Civilian\Graffiti\graffiti_paintsplashes_03_g.p3d";
		icon="iconObject_2x1";
	};
	class Land_Graffiti_PaintSplashes_04_G: Land_Graffiti_PaintSplashes_01_G
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_f_expEden\Data\CfgVehicles\Land_Graffiti_PaintSplashes_04_G.jpg";
		_generalMacro="Land_Graffiti_PaintSplashes_04_G";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_Graffiti_PaintSplashes_04_G0";
		model="\a3\structures_f_globe\Civilian\Graffiti\graffiti_paintsplashes_04_g.p3d";
		icon="iconObject_3x1";
	};
	class Land_Graffiti_PaintSplashes_05_G: Land_Graffiti_PaintSplashes_01_G
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_f_expEden\Data\CfgVehicles\Land_Graffiti_PaintSplashes_05_G.jpg";
		_generalMacro="Land_Graffiti_PaintSplashes_05_G";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_Graffiti_PaintSplashes_05_G0";
		model="\a3\structures_f_globe\Civilian\Graffiti\graffiti_paintsplashes_05_g.p3d";
		icon="iconObject_1x1";
	};
	class Land_Graffiti_PaintSplashes_06_G: Land_Graffiti_PaintSplashes_01_G
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_f_expEden\Data\CfgVehicles\Land_Graffiti_PaintSplashes_06_G.jpg";
		_generalMacro="Land_Graffiti_PaintSplashes_06_G";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_Graffiti_PaintSplashes_06_G0";
		model="\a3\structures_f_globe\Civilian\Graffiti\graffiti_paintsplashes_06_g.p3d";
		icon="iconObject_2x1";
	};
	class Land_Graffiti_PaintSplashes_07_G: Land_Graffiti_PaintSplashes_01_G
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_f_expEden\Data\CfgVehicles\Land_Graffiti_PaintSplashes_07_G.jpg";
		_generalMacro="Land_Graffiti_PaintSplashes_07_G";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_Graffiti_PaintSplashes_07_G0";
		model="\a3\structures_f_globe\Civilian\Graffiti\graffiti_paintsplashes_07_g.p3d";
		icon="iconObject_2x1";
	};
	class Land_Graffiti_WarningPatchBY_03_G: Graffiti_base_F
	{
		author="O&T Expansion Eden";
		mapSize=1.66;
		editorPreview="\A3\EditorPreviews_f_expEden\Data\CfgVehicles\Land_Graffiti_WarningPatchBY_03_G.jpg";
		_generalMacro="Land_Graffiti_WarningPatchBY_03_G";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_Graffiti_WarningPatchBY_03_G0";
		model="\a3\structures_f_globe\Civilian\Graffiti\graffiti_warningpatchby_03_g.p3d";
		icon="iconObject_3x1";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\structures_f\research\data\research_alpha_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\data_f\default_alpha.rvmat"
		};
	};
	class Land_Graffiti_WarningPatchBY_03_G_LC: Land_Graffiti_WarningPatchBY_03_G
	{
		author="O&T Expansion Eden";
		_generalMacro="Land_Graffiti_WarningPatchBY_03_G_LC";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_Graffiti_WarningPatchBY_03_G_LC0";
		model="\a3\structures_f_globe\Civilian\Graffiti\graffiti_warningpatchby_03_g_lc.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		hiddenSelectionsMaterials[]={};
	};
};
