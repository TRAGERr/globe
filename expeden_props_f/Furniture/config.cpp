class CfgPatches
{
	class A3_Props_F_Globe_Furniture
	{
		addonRootClass="A3_Props_F_Globe";
		requiredAddons[]=
		{
			"A3_Props_F_Globe"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Land_Glass_01_G",
			"Land_Glass_01_G_destroyed",
			"Land_Glass_01_dark_v1_G",
			"Land_Glass_01_dark_v1_G_destroyed",
			"Land_Glass_01_dark_v2_G",
			"Land_Glass_01_dark_v2_G_destroyed",
			"Land_Glass_02_G",
			"Land_Glass_02_G_destroyed",
			"Land_MosquitoNet_01_G",
			"Land_MosquitoNet_01_G_big",
			"Land_Blinds_1x2m_G_tan",
			"Land_Blinds_1x2m_G_white",
			"Curtain_01"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class House_F;
	class Furniture_Residental_base_F;
	class NonStrategic;
	class Furniture_base_F;
	class Land_OfficeTable_01_F: Furniture_base_F
	{
		class Attributes
		{
			class Drawer_1_key_source
			{
				displayName="$STR_Globe_Land_OfficeTable_01_F_Attributes_Drawer_1_key_source0";
				property="drawer_1_key_rot";
				control="Slider";
				defaultValue=0;
				validate="number";
				expression="_this animateSource ['%s',_value/5,true]";
			};
			class Drawer_1_source
			{
				displayName="$STR_A3_c_cfgvehicles_land_portablecabinet_01_medical_base_f_attributes_drawer_1_move_source0";
				property="Drawer_1_move";
				control="Slider";
				defaultValue=0;
				validate="number";
				expression="_this animateSource ['%s',_value,true]";
			};
			class Drawer_2_source: Drawer_1_source
			{
				displayName="$STR_A3_c_cfgvehicles_land_portablecabinet_01_medical_base_f_attributes_drawer_2_move_source0";
				property="Drawer_2_move";
			};
			class RandomDrawers
			{
				property="RandomDrawers";
				displayName="$STR_Globe_Land_PortableCabinet_01_bookcase_base_F_Attributes_RandomDrawers";
				tooltip="$STR_Globe_Land_PortableCabinet_01_bookcase_base_F_Attributes_RandomDrawers_Tooltip";
				control="Checkbox";
				defaultValue=0;
				expression="if (_value isEqualTo true) then {_this call compile preprocessFileLineNumbers '\A3\Props_F_Globe\Furniture\scripts\randomize_drawers.sqf'}";
			};
		};
	};
	class Curtain_01_base: NonStrategic
	{
		author="O&T Expansion Eden";
		model="\a3\Props_F_Globe\Furniture\Curtain_01_G.p3d";
		icon="iconObject_1x1";
		editorCategory="EdCat_Furniture";
		editorSubcategory="EdSubcat_Residential_City";
		vehicleClass="Furniture";
		destrType="DestructNo";
		cost=100;
		accuracy=0.2;
		class DestructionEffects
		{
		};
		hiddenSelections[]=
		{
			"camo"
		};
	};
	class Curtain_01: Curtain_01_base
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.011;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Curtain_01.jpg";
		_generalMacro="Curtain_01";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Curtain_010";
		hiddenSelectionsTextures[]=
		{
			"\A3\Missions_F_Orange\Data\IMG\Orange_Compositions\C6+C7\C6_Curtain_01_CA.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\data_f\default_alpha.rvmat"
		};
	};
	class Land_Blinds_1x2m_G_tan: Furniture_Residental_base_F
	{
		author="O&T Expansion Eden";
		mapSize=1.66;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.456;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Blinds_1x2m_G_tan.jpg";
		_generalMacro="Land_Blinds_1x2m_G_tan";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_Blinds_1x2m_G_tan0";
		model="\a3\props_f_globe\Furniture\blinds_1x2m_g_tan.p3d";
		icon="iconObject_2x5";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\structures_f_exp\data\accessories\shop_6_accessories_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\structures_f_globe\decals\data\shop_6_accessories.rvmat"
		};
	};
	class Land_Blinds_1x2m_G_white: Furniture_Residental_base_F
	{
		author="O&T Expansion Eden";
		mapSize=1.66;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.456;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Blinds_1x2m_G_white.jpg";
		_generalMacro="Land_Blinds_1x2m_G_white";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_Blinds_1x2m_G_white0";
		model="\a3\props_f_globe\Furniture\blinds_1x2m_g_white.p3d";
		icon="iconObject_2x5";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\structures_f_exp\data\accessories\shop_6_accessories_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\structures_f_globe\decals\data\shop_6_accessories.rvmat"
		};
	};
	class Glasses_base_G: House_F
	{
		author="O&T Expansion Eden";
		mapSize=1.23;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.99900001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="";
		_generalMacro="Glasses_base_G";
		scope=1;
		scopeCurator=0;
		displayName="";
		model="\A3\Weapons_F\empty.p3d";
		icon="iconObject_1x2";
		editorCategory="EdCat_Furniture";
		editorSubcategory="EdSubcat_Residential_City";
		vehicleClass="Furniture";
		numberOfWindows=0;
		armor=1.2;
		armorStructural=1;
		explosionShielding=0.1;
		minTotalDamageThreshold=0.01;
		impactDamageMultiplier=2.0;
		selectionDamage="glass_hide_undamaged";
		destrType="DestructBuilding";
		replaceDamaged="";
		class DestructionEffects
		{
			class Ruin
			{
				simulation="ruin";
				type="\A3\Weapons_F\empty.p3d";
				position="";
				intensity=1;
				interval=1;
				lifeTime=1;
			};
			class DestroyPhase
			{
				simulation="destroy";
				type="InstantDestruction_01_G";
				position="";
				intensity=1;
				interval=1;
				lifeTime=1;
			};
			class BrokenGlass1
			{
				simulation="particles";
				type="BrokenGlass1N_1250_2200";
				position="";
				intensity=0.15000001;
				interval=1;
				lifeTime=0.050000001;
			};
			class BrokenGlass2
			{
				simulation="particles";
				type="BrokenGlass2N_1250_2200";
				position="";
				intensity=0.15000001;
				interval=1;
				lifeTime=0.050000001;
			};
			class BrokenGlass3
			{
				simulation="particles";
				type="BrokenGlass3N_1250_2200";
				position="";
				intensity=0.15000001;
				interval=1;
				lifeTime=0.050000001;
			};
			class BrokenGlass4
			{
				simulation="particles";
				type="BrokenGlass4N_1250_2200";
				position="";
				intensity=0.15000001;
				interval=1;
				lifeTime=0.050000001;
			};
			class BrokenGlass5
			{
				simulation="particles";
				type="BrokenGlass5N_1250_2200";
				position="";
				intensity=0.15000001;
				interval=1;
				lifeTime=0.050000001;
			};
			class BrokenGlass6
			{
				simulation="particles";
				type="BrokenGlass6N_1250_2200";
				position="";
				intensity=0.15000001;
				interval=1;
				lifeTime=0.050000001;
			};
			class BrokenGlass7
			{
				simulation="particles";
				type="BrokenGlass7N_1250_2200";
				position="";
				intensity=0.15000001;
				interval=1;
				lifeTime=0.050000001;
			};
			class BrokenGlass1S
			{
				simulation="particles";
				type="BrokenGlass1S_1250_2200";
				position="";
				intensity=0.15000001;
				interval=1;
				lifeTime=0.050000001;
			};
			class BrokenGlass2S
			{
				simulation="particles";
				type="BrokenGlass2S_1250_2200";
				position="";
				intensity=0.15000001;
				interval=1;
				lifeTime=0.050000001;
			};
			class BrokenGlass3S
			{
				simulation="particles";
				type="BrokenGlass3S_1250_2200";
				position="";
				intensity=0.15000001;
				interval=1;
				lifeTime=0.050000001;
			};
			class BrokenGlass4S
			{
				simulation="particles";
				type="BrokenGlass4S_1250_2200";
				position="";
				intensity=0.15000001;
				interval=1;
				lifeTime=0.050000001;
			};
			class BrokenGlass5S
			{
				simulation="particles";
				type="BrokenGlass5S_1250_2200";
				position="";
				intensity=0.15000001;
				interval=1;
				lifeTime=0.050000001;
			};
			class BrokenGlass6S
			{
				simulation="particles";
				type="BrokenGlass6S_1250_2200";
				position="";
				intensity=0.15000001;
				interval=1;
				lifeTime=0.050000001;
			};
			class BrokenGlass7S
			{
				simulation="particles";
				type="BrokenGlass7S_1250_2200";
				position="";
				intensity=0.15000001;
				interval=1;
				lifeTime=0.050000001;
			};
		};
		class HitPoints
		{
			class Glass_hitpoint
			{
				armor=0.001;
				material=-1;
				name="glass";
				visual="glass_hide_undamaged";
				passThrough=1;
				radius=0.4;
				convexComponent="glass_hide_undamaged";
				minimalHit=0.05;
				class DestructionEffects
				{
				};
			};
		};
		class AnimationSources
		{
			class Glass_source
			{
				source="Hit";
				hitpoint="glass_hitpoint";
				raw=1;
			};
		};
	};
	class Glasses_base_G_destroyed: NonStrategic
	{
		author="O&T Expansion Eden";
		mapSize=0.46;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.755;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="";
		_generalMacro="Glasses_base_G_destroyed";
		scope=1;
		scopeCurator=0;
		displayName="";
		model="\A3\Weapons_F\empty.p3d";
		icon="iconObject_1x2";
		editorCategory="EdCat_Furniture";
		editorSubcategory="EdSubcat_Residential_City";
		vehicleClass="Furniture";
		destrType="DestructNo";
		cost=100;
		armor=0;
	};
	class Land_Glass_01_G: Glasses_base_G
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Glass_01_G.jpg";
		_generalMacro="Land_Glass_01_G";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_Glass_01_G0";
		model="\a3\props_f_globe\furniture\glass_01_g.p3d";
		icon="iconObject_1x2";
		replaceDamaged="Land_Glass_01_G_destroyed";
		class DestructionEffects: DestructionEffects
		{
			class Ruin: Ruin
			{
				type="\a3\props_f_globe\furniture\glass_01_g_destroyed.p3d";
			};
		};
	};
	class Land_Glass_01_G_destroyed: Glasses_base_G_destroyed
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Glass_01_G_destroyed.jpg";
		_generalMacro="Land_Glass_01_G_destroyed";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_Glass_01_G_destroyed0";
		model="\a3\props_f_globe\furniture\glass_01_g_destroyed.p3d";
		icon="iconObject_1x2";
	};
	class Land_Glass_01_dark_v1_G: Glasses_base_G
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Glass_01_dark_v1_G.jpg";
		_generalMacro="Land_Glass_01_dark_v1_G";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_Glass_01_dark_v1_G";
		model="\a3\props_f_globe\furniture\glass_01_dark_v1_g.p3d";
		icon="iconObject_1x2";
		replaceDamaged="Land_Glass_01_dark_v1_G_destroyed";
		class DestructionEffects: DestructionEffects
		{
			class Ruin: Ruin
			{
				type="\a3\props_f_globe\furniture\glass_01_g_destroyed.p3d";
			};
		};
	};
	class Land_Glass_01_dark_v1_G_destroyed: Glasses_base_G_destroyed
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Glass_01_dark_v1_G_destroyed.jpg";
		_generalMacro="Land_Glass_01_dark_v1_G_destroyed";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_Glass_01_dark_v1_G_destroyed0";
		model="\a3\props_f_globe\furniture\glass_01_dark_v1_g_destroyed.p3d";
		icon="iconObject_1x2";
	};
	class Land_Glass_01_dark_v2_G: Glasses_base_G
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Glass_01_dark_v2_G.jpg";
		_generalMacro="Land_Glass_01_dark_v2_G";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_Glass_01_dark_v2_G0";
		model="\a3\props_f_globe\furniture\glass_01_dark_v2_g.p3d";
		icon="iconObject_1x2";
		replaceDamaged="Land_Glass_01_dark_v2_G_destroyed";
		class DestructionEffects: DestructionEffects
		{
			class Ruin: Ruin
			{
				type="\a3\props_f_globe\furniture\glass_01_g_destroyed.p3d";
			};
		};
	};
	class Land_Glass_01_dark_v2_G_destroyed: Glasses_base_G_destroyed
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Glass_01_dark_v2_G_destroyed.jpg";
		_generalMacro="Land_Glass_01_dark_v2_G_destroyed";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_Glass_01_dark_v2_G_destroyed0";
		model="\a3\props_f_globe\furniture\glass_01_dark_v2_g_destroyed.p3d";
		icon="iconObject_1x2";
	};
	class Land_Glass_02_G: Glasses_base_G
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Glass_02_G.jpg";
		_generalMacro="Land_Glass_02_G";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_Glass_02_G0";
		model="\a3\props_f_globe\furniture\glass_02_g.p3d";
		icon="iconObject_1x2";
		replaceDamaged="Land_Glass_02_G_destroyed";
		class DestructionEffects: DestructionEffects
		{
			class Ruin: Ruin
			{
				type="\a3\props_f_globe\furniture\glass_02_g_destroyed.p3d";
			};
		};
	};
	class Land_Glass_02_G_destroyed: Glasses_base_G_destroyed
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Glass_02_G_destroyed.jpg";
		_generalMacro="Land_Glass_02_G_destroyed";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_Glass_02_G_destroyed0";
		model="\a3\props_f_globe\furniture\glass_02_g_destroyed.p3d";
		icon="iconObject_1x2";
	};
	class Land_MosquitoNet_01_G: Furniture_Residental_base_F
	{
		author="O&T Expansion Eden";
		mapSize=1.66;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.456;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_MosquitoNet_01_G.jpg";
		_generalMacro="Land_MosquitoNet_01_G";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_MosquitoNet_01_G0";
		model="\a3\props_f_globe\Furniture\mosquitonet_01_g.p3d";
		icon="iconObject_1x2";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\structures_f_exp\data\glass\house_glass_01_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\structures_f_exp\data\glass\house_glass_01.rvmat"
		};
	};
	class Land_MosquitoNet_01_G_big: Land_MosquitoNet_01_G
	{
		author="O&T Expansion Eden";
		mapSize=1.66;
		_generalMacro="Land_MosquitoNet_01_G_big";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_MosquitoNet_01_G_big0";
		model="\a3\props_f_globe\Furniture\mosquitonet_01_g_big.p3d";
		icon="iconObject_2x5";
	};
};
