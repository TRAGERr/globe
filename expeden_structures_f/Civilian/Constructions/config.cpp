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
		units[]={};
		weapons[]={};
	};
};
class CfgVehicles
{
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
};
