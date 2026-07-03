class CfgPatches
{
	class Props_Globe_Objectives
	{
		addonRootClass="A3_Props_F_Globe";
		requiredAddons[]=
		{
			"A3_Props_F_Globe"
		};
		requiredVersion=0.1;
		units[]=
		{
			"RuggedTerminal_01_communications_G"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Objectives_base_F;
	class RuggedTerminal_off_Base_G: Objectives_base_F
	{
		editorSubcategory="EdSubcat_Electronics";
		hiddenSelections[]=
		{
			"Camo_Display",
			"Camo_ProgressBar",
			"Camo_1",
			"Camo_2",
			"Camo_3",
			"Camo_4"
		};
		hiddenSelectionsTextures[]=
		{
			"a3\props_f_decade\objectives\data\computerscreen_flame_ca.paa",
			"#(argb,8,8,3)color(1,0.5,0.25,0.99,CA)",
			"a3\props_f_decade\objectives\data\linkterminal_box_01_co.paa",
			"a3\props_f_decade\objectives\data\linkterminal_box_02_co.paa",
			"a3\props_f_decade\objectives\data\linkterminal_01_ntb_ant_co.paa",
			"a3\props_f_decade\objectives\data\linknode_01_main_f_acessories_co.paa"
		};
		class AnimationSources
		{
			class Terminal_source
			{
				source="user";
				initPhase=0;
				animPeriod=0.07;
			};
			class Terminal_source_sound
			{
				source="user";
				initPhase=0;
				animPeriod=0.07;
				sound="LinkTerminal_01_node_1_F_Sound";
				soundposition="Sound_node1";
			};
			class Progress_source
			{
				source="user";
				initPhase=0;
				animPeriod=0.1;
			};
		};
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
			class ObjectTextureCustom1
			{
				displayName="$STR_3den_object_attribute_objecttexturecustom1_displayname";
				tooltip="$STR_3den_object_attribute_objecttexturecustom_tooltip";
				property="ObjectTextureCustom1";
				control="Edit";
				expression="_this setObjectTextureGlobal [1,_value]";
				defaultValue="(getObjectTextures _this) param [1,'',['']]";
			};
			class OpenTerminal
			{
				displayName="$STR_A3_CfgVehicles_RuggedTerminal_Base_F_Attributes_OpenTerminal0";
				property="OpenTerminal";
				control="CheckboxNumber";
				defaultValue=0;
				expression="[_this,['Terminal_source','Terminal_source_sound'],_value*100,true] call bis_fnc_LinkTerminal_Animations";
			};
			class Progress_source
			{
				displayName="$STR_A3_CfgVehicles_RuggedTerminal_Base_F_Attributes_Progress_source0";
				property="ProgressBar";
				control="Slider";
				defaultValue=0;
				expression="_this animateSource ['%s',_value*100,true]";
			};
		};
	};
	class RuggedTerminal_01_communications_G: RuggedTerminal_off_Base_G
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_F_Decade\Data\CfgVehicles\RuggedTerminal_01_communications_F.jpg";
		_generalMacro="RuggedTerminal_01_communications_G";
		scope=0;
		scopeCurator=0;
		displayName="$STR_Globe_CfgVehicles_RuggedTerminal_01_communications_G0";
		model="\a3\Props_F_Decade\Objectives\RuggedTerminal_01_communications_F.p3d";
		icon="iconObject_5x4";
		class Attributes
		{
			class case_lock_l
			{
				displayName="$STR_Globe_CfgVehicles_RuggedTerminal_01_communications_G1";					/* открыть левый замок кейса */
				property="case_lock_l";
				control="Slider_0_3";
				defaultValue=0;
				expression="_this animate ['case_lock_l_rotation',_value,true]";
			};
			class case_lock_r
			{
				displayName="$STR_Globe_CfgVehicles_RuggedTerminal_01_communications_G2";					/* открыть правый замок кейса */
				property="case_lock_r";
				control="Slider_2_4";
				defaultValue=2;
				expression="_this animate ['case_lock_r_rotation',_value,true]";
			};
			class case
			{
				displayName="$STR_Globe_CfgVehicles_RuggedTerminal_01_communications_G3";					/* открыть крышку кейса */
				property="case";
				control="Slider_4_20";
				defaultValue=4;
				expression="_this animate ['case_lid_rotation',_value,true]";
			};
			class laptop1
			{
				displayName="$STR_Globe_CfgVehicles_RuggedTerminal_01_communications_G4";					/* открыть ноутбук в кейсе */
				property="laptop1";
				control="Slider_10_30";
				defaultValue=10;
				expression="_this animate ['laptop1_lid_rotation',_value,true]";
			};
			class laptop1DisplayOff
			{
				displayName="$STR_Globe_CfgVehicles_RuggedTerminal_01_communications_G5";					/* выкл. ноутбук в кейсе */
				property="laptop1Display";
				control="Checkbox";
				defaultValue=20;
				expression="_this animate ['display_off_1_hide',[20,19] select (_value max 0 min 1),true]";
			};
			class laptop1Antenna
			{
				displayName="$STR_Globe_CfgVehicles_RuggedTerminal_01_communications_G6";					/* развернуть антенну кейса */
				property="laptop1Antenna";
				control="Slider_25_32";
				defaultValue=25;
				expression="_this animate ['antenna_rotation',_value,true]";
			};
			class laptop1AntennaTranslation
			{
				displayName="$STR_Globe_CfgVehicles_RuggedTerminal_01_communications_G7";					/* вытянуть антенну кейса */
				property="laptop1AntennaTranslation";
				control="Slider_32_40";
				defaultValue=32;
				expression="_this animate ['antenna_translation',_value,true]";
			};
			class laptop2
			{
				displayName="$STR_Globe_CfgVehicles_RuggedTerminal_01_communications_G8";					/* открыть ноутбук */
				property="laptop2";
				control="Slider_20_40";
				defaultValue=20;
				expression="_this animate ['antenna_translation',_value,true]";
			};
			class laptop2DisplayOff
			{
				displayName="$STR_Globe_CfgVehicles_RuggedTerminal_01_communications_G9";					/* выкл. ноутбук в кейсе */
				property="laptop1Display";
				control="Checkbox";
				defaultValue=29;
				expression="_this animate ['display_off_2_hide',[29,30] select (_value max 0 min 1),true]";
			};
			class ObjectTextureCustom1
			{
				displayName="$STR_Globe_CfgVehicles_RuggedTerminal_01_communications_G10";					/* цвет шкал прогресса */
				tooltip="$STR_3den_object_attribute_objecttexturecustom_tooltip";
				property="ObjectTextureCustom1";
				control="Edit";
				expression="_this setObjectTextureGlobal [1,_value]";
				defaultValue="(getObjectTextures _this) param [1,'',['']]";
			};
			class progress_1_translation
			{
				displayName="$STR_Globe_CfgVehicles_RuggedTerminal_01_communications_G11";					/* шкала прогресса л. ноутбука */
				property="progress_1_translation";
				control="Slider";
				defaultValue=0;
				expression="_this animate ['%s',_value*100,true]";
			};
			class progress_2_translation: progress_1_translation
			{
				displayName="$STR_Globe_CfgVehicles_RuggedTerminal_01_communications_G12";					/* шкала прогресса п. ноутбука */
				property="progress_2_translation";
				expression="_this animate ['%s',_value*100,true]";
			};
			class laptop1Display_prepStop
			{
				property="laptop1Display_prepStop";
				displayName="$STR_Globe_CfgVehicles_RuggedTerminal_01_communications_G15";					/* режим работы */
				control="Combo";
				expression="switch (_value) do { case 'none': { _this animate ['progress_stopping_1_unhide',0,true]; _this animate ['progress_preparing_1_unhide',0,true]; _this animate ['progress_downloading_1_unhide',0,true]; }; case 'preparing': { _this animate ['progress_stopping_1_unhide',0,true]; _this animate ['progress_preparing_1_unhide',1,true]; _this animate ['progress_downloading_1_unhide',0,true]; }; case 'stopping': { _this animate ['progress_stopping_1_unhide',1,true]; _this animate ['progress_preparing_1_unhide',0,true]; _this animate ['progress_downloading_1_unhide',0,true]; }; case 'downloading': { _this animate ['progress_stopping_1_unhide',0,true]; _this animate ['progress_preparing_1_unhide',0,true]; _this animate ['progress_downloading_1_unhide',1,true]; }; };";
				defaultValue="[0.0, 0.0, 0.0]";
				typeName="ARRAY";
				class values
				{
					class 0
					{
						value="none";
						name="$STR_A3_OPTIONS_DEFAULT";
					};
					class 1
					{
						value="preparing";
						name="$STR_a3_cfgvehicles_ruggedterminal_01_f_attributes_preparing_source0";
					};
					class 2
					{
						value="stopping";
						name="$STR_a3_cfgvehicles_ruggedterminal_01_f_attributes_stopping_source0";
					};
					class 3
					{
						value="downloading";
						name="$STR_a3_cfgvehicles_ruggedterminal_01_f_attributes_stopping_source0";
					};
				};
			};
			class laptop1Display_prepStop_progress
			{
				displayName="$STR_Globe_CfgVehicles_RuggedTerminal_01_communications_G16";
				property="laptop1Display_prepStop_progress";
				control="Slider";
				defaultValue=0;
				expression="_this animate ['progress_preparing_1_translation',_value*100,true]";
			};





			class laptop2Display_prepStop
			{
				property="laptop2Display_prepStop";
				displayName="$STR_Globe_CfgVehicles_RuggedTerminal_01_communications_G17";					/* режим работы */
				control="Combo";
				expression="switch (_value) do { case 'none': { _this animate ['progress_stopping_2_unhide',0,true]; _this animate ['progress_preparing_2_unhide',0,true]; _this animate ['progress_downloading_2_unhide',0,true]; }; case 'preparing': { _this animate ['progress_stopping_2_unhide',0,true]; _this animate ['progress_preparing_2_unhide',1,true]; _this animate ['progress_downloading_2_unhide',0,true]; }; case 'stopping': { _this animate ['progress_stopping_2_unhide',1,true]; _this animate ['progress_preparing_2_unhide',0,true]; _this animate ['progress_downloading_2_unhide',0,true]; }; case 'downloading': { _this animate ['progress_stopping_2_unhide',0,true]; _this animate ['progress_preparing_2_unhide',0,true]; _this animate ['progress_downloading_2_unhide',1,true]; }; };";
				defaultValue="[0.0, 0.0, 0.0]";
				typeName="ARRAY";
				class values
				{
					class 0
					{
						value="none";
						name="$STR_A3_OPTIONS_DEFAULT";
					};
					class 1
					{
						value="preparing";
						name="$STR_a3_cfgvehicles_ruggedterminal_01_f_attributes_preparing_source0";
					};
					class 2
					{
						value="stopping";
						name="$STR_a3_cfgvehicles_ruggedterminal_01_f_attributes_stopping_source0";
					};
					class 3
					{
						value="downloading";
						name="$STR_a3_cfgvehicles_ruggedterminal_01_f_attributes_stopping_source0";
					};
				};
			};
			class laptop2Display_prepStop_progress
			{
				displayName="$STR_Globe_CfgVehicles_RuggedTerminal_01_communications_G16";
				property="laptop2Display_prepStop_progress";
				control="Slider";
				defaultValue=0;
				expression="_this animate ['progress_preparing_2_translation',_value*100,true]";
			};
		};
	};
};
