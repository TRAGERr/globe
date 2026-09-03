class CfgPatches
{
	class Structures_Globe_Civilian_Constructions
	{
		addonRootClass="A3_Structures_F_Globe";
		requiredAddons[]=
		{
			"A3_Structures_F_Globe_Civilian"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Land_GasTank_01_blue_G_full",
			"Land_GasTank_01_khaki_G_full",
			"Land_GasTank_01_yellow_G_full",
			"Land_SteelTank_01_blue_G",
			"Land_SteelTank_01_khaki_G",
			"Land_SteelTank_01_yellow_G",
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class GasTank_base_F;
	class GasTank_01_base_F;
	class Lamps_base_F;
	class Land_PortableLight_single_F: Lamps_base_F
	{
		class Attributes;
	};
	class Land_PortableLight_double_F: Land_PortableLight_single_F
	{
		class Attributes;
	};
	class Land_PortableLightDefunct_single: Land_PortableLight_single_F
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=0;
			animate[]=
			{
				
				{
					"light_1_pitch_rot",
					0
				},
				
				{
					"light_1_jaw_rot",
					0.13
				}
			};
			hide[]=
			{
				"light_1_hide"
			};
			verticalOffset=1.084;
			verticalOffsetWorld=0;
			init="''";
		};
		_generalMacro="Land_PortableLightDefunct_single";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_PortableLightDefunct_single";
		hiddenSelections[]=
		{
			"light_1_hide"
		};
		class Attributes: Attributes
		{
			class Light_1_jaw_source
			{
				property="Light_1_jaw_source";
				control="Slider";
				displayName="$STR_a3_c_cfgvehicles_land_portablelight_02_single_base_f_attributes_light_1_pitch_source0";
				defaultValue=0.13;
				expression="_this animateSource ['%s',_value,true]";
			};
			class Light_1_pitch_source
			{
				property="Light_1_pitch_source";
				control="SliderPortableLightPitch";
				displayName="$STR_a3_c_cfgvehicles_land_portablelight_02_single_base_f_attributes_light_1_yaw_source0";
				tooltip="";
				expression="_this animateSource ['%s',_value,true]";
				defaultValue=0;
			};
		};
		class Reflectors
		{
		};
	};
	class Land_PortableLightDefunct_double: Land_PortableLight_double_F
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=0;
			animate[]=
			{
				
				{
					"light_1_pitch_rot",
					0
				},
				
				{
					"light_1_jaw_rot",
					0.13
				}
			};
			hide[]=
			{
				"light_1_hide",
				"light_2_hide"
			};
			verticalOffset=1.084;
			verticalOffsetWorld=0;
			init="''";
		};
		_generalMacro="Land_PortableLightDefunct_double";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_PortableLightDefunct_double";
		hiddenSelections[]=
		{
			"light_1_hide",
			"light_2_hide"
		};
		class Attributes: Attributes
		{
			class Light_1_jaw_source
			{
				displayName="$STR_a3_c_cfgvehicles_land_portablelight_02_single_base_f_attributes_light_1_pitch_source0";
				property="Light_1_jaw_source";
				control="Slider";
				defaultValue=0.13;
				expression="_this animateSource ['%s',_value,true]";
			};
			class Light_1_pitch_source
			{
				property="Light_1_pitch_source";
				control="SliderPortableLightPitch";
				displayName="$STR_a3_c_cfgvehicles_land_portablelight_02_single_base_f_attributes_light_1_yaw_source0";
				tooltip="";
				expression="_this animateSource ['%s',_value,true]";
				defaultValue=0;
			};
		};
		class Reflectors
		{
		};
	};
	class GasTank_01_full_base_G: GasTank_01_base_F
	{
		author="O&T Expansion Eden";
		_generalMacro="GasTank_01_full_base_G";
		scope=0;
		scopeCurator=0;
		vehicleClass="Tents";
		class AnimationSources
		{
			class Sign_source
			{
				source="user";
				initPhase=0;
				animPeriod=0.001;
			};
		};
		armor=123;
		disableInventory=1;
		destrType="DestructBuilding";
		class DestructionEffects
		{
			class ClusterLight
			{
				simulation="light";
				type="ClusterLight";
				position="";
				intensity="0.001*1000";
				interval=1;
				lifeTime="0.25*2";
			};
			class ClusterFire
			{
				simulation="particles";
				type="ClusterFire";
				position="";
				interval=1;
				intensity=0.01;
				lifeTime=0.01;
			};
			class Explo
			{
				simulation="particles";
				type="MineExplosionParticles";
				position="";
				lifeTime=0.0099999998;
				interval=0.6;
				intensity=0.001;
			};
			class Sound: Explo
			{
				simulation="sound";
				type="ERA_Explosion";
				lifeTime=4;
				interval=1;
			};
			class ClusterSmokeLingering
			{
				simulation="particles";
				type="ClusterSmokeLingering";
				position="";
				intensity=0.1;
				interval=0.2;
				lifeTime=0.01;
			};
			class ClusterSmoke
			{
				simulation="particles";
				type="ClusterSmoke";
				position="";
				intensity=0.1;
				interval=0.2;
				lifeTime=0.01;
			};
		};
		class EventHandlers
		{
			class Globe_gasTankEH
			{
				killed="_this call expEden_fnc_gasTankExploded;";
			};
		};
	};
	class Land_GasTank_01_blue_G_full: GasTank_01_full_base_G
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"sign_hide",
					0
				}
			};
			hide[]={};
			verticalOffset=0.33899999;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Land_GasTank_01_blue_F.jpg";
		_generalMacro="Land_GasTank_01_blue_G_full";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_GasTank_01_blue_G_full0";
		model="\A3\Structures_F_Heli\Civ\Constructions\GasTank_01_blue_F.p3d";
	};
	class Land_GasTank_01_khaki_G_full: GasTank_01_full_base_G
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"sign_hide",
					0
				}
			};
			hide[]={};
			verticalOffset=0.33899999;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Land_GasTank_01_khaki_F.jpg";
		_generalMacro="Land_GasTank_01_khaki_G_full";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_GasTank_01_khaki_G_full0";
		model="\A3\Structures_F_Heli\Civ\Constructions\GasTank_01_khaki_F.p3d";
	};
	class Land_GasTank_01_yellow_G_full: GasTank_01_full_base_G
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"sign_hide",
					0
				}
			};
			hide[]={};
			verticalOffset=0.33899999;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Land_GasTank_01_yellow_F.jpg";
		_generalMacro="Land_GasTank_01_yellow_G_full";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_GasTank_01_yellow_G_full0";
		model="\A3\Structures_F_Heli\Civ\Constructions\GasTank_01_yellow_F.p3d";
	};
	class SteelTank_01_base_G: GasTank_base_F
	{
		author="O&T Expansion Eden";
		_generalMacro="SteelTank_01_base_G";
		scope=0;
		scopeCurator=0;
		vehicleClass="Tents";
		class AnimationSources
		{
			class Sign_source
			{
				source="user";
				initPhase=1;
				animPeriod=0.001;
			};
		};
	};
	class Land_SteelTank_01_blue_G: SteelTank_01_base_G
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"sign_hide",
					1
				}
			};
			hide[]={};
			verticalOffset=0.33899999;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_SteelTank_01_blue_G.jpg";
		_generalMacro="Land_SteelTank_01_blue_G";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_SteelTank_01_blue_G0";
		model="\A3\Structures_F_Heli\Civ\Constructions\GasTank_01_blue_F.p3d";
	};
	class Land_SteelTank_01_khaki_G: SteelTank_01_base_G
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"sign_hide",
					1
				}
			};
			hide[]={};
			verticalOffset=0.33899999;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_SteelTank_01_khaki_G.jpg";
		_generalMacro="Land_SteelTank_01_khaki_G";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_SteelTank_01_khaki_G0";
		model="\A3\Structures_F_Heli\Civ\Constructions\GasTank_01_khaki_F.p3d";
	};
	class Land_SteelTank_01_yellow_G: SteelTank_01_base_G
	{
		author="O&T Expansion Eden";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"sign_hide",
					1
				}
			};
			hide[]={};
			verticalOffset=0.33899999;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_SteelTank_01_yellow_G.jpg";
		_generalMacro="Land_SteelTank_01_yellow_G";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_SteelTank_01_yellow_G0";
		model="\A3\Structures_F_Heli\Civ\Constructions\GasTank_01_yellow_F.p3d";
	};
};
