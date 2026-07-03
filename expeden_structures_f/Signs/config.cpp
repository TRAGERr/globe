class CfgPatches
{
	class Structures_Globe_Signs
	{
		addonRootClass="A3_Structures_F_Globe";
		requiredAddons[]=
		{
			"A3_Structures_F_Globe"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Sign_Direction_IDAP_LoW",
			"Sign_Direction_Czech",
			"Sign_Direction_IDAP_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Sign_Direction_F;
	class SignAd_Sponsor_F;
	class Land_SignInfo_01_Shelter_F: SignAd_Sponsor_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_SignInfo_01_Shelter_F.jpg";
		_generalMacro="Land_SignInfo_01_Shelter_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Land_SignInfo_01_Shelter_F0";
	};
	class Sign_Direction_IDAP_F: Sign_Direction_F
	{
		author="O&T Expansion Eden";
		editorCategory="EdCat_Signs";
		editorSubcategory="EdSubcat_Advertisements";
		editorPreview="";
		_generalMacro="Sign_Direction_IDAP_F";
		scope=1;
		scopeCurator=0;
		displayName="$STR_EXPEDEN_Sign_Direction_IDAP_F";
		hiddenSelectionsTextures[]=
		{
			"\A3\missions_f_orange\data\img\Faction_IDAP\direction_sign_area_activity_CA.paa",
			"\A3\missions_f_orange\data\img\Faction_IDAP\direction_sign_area_aid_CA.paa",
			"\A3\missions_f_orange\data\img\Faction_IDAP\direction_sign_area_air_CA.paa",
			"\A3\missions_f_orange\data\img\Faction_IDAP\direction_sign_area_autonomous_CA.paa",
			"\A3\missions_f_orange\data\img\Faction_IDAP\direction_sign_area_exit_CA.paa",
			"\A3\missions_f_orange\data\img\Faction_IDAP\direction_sign_area_expo_CA.paa",
			"\A3\missions_f_orange\data\img\Faction_IDAP\direction_sign_area_idap_CA.paa",
			"\A3\missions_f_orange\data\img\Faction_IDAP\direction_sign_area_ihl_CA.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\data_f\default_alpha.rvmat",
			"\A3\data_f\default_alpha.rvmat",
			"\A3\data_f\default_alpha.rvmat",
			"\A3\data_f\default_alpha.rvmat",
			"\A3\data_f\default_alpha.rvmat",
			"\A3\data_f\default_alpha.rvmat",
			"\A3\data_f\default_alpha.rvmat",
			"\A3\data_f\default_alpha.rvmat"
		};
		class Attributes
		{
			class SwitchTexture_camo1
			{
				property="SwitchTexture_camo1";
				displayName="$STR_3den_object_attribute_objecttexturecustom0_displayname";
				tooltip="$STR_3den_object_attribute_objecttexturecustom_tooltip";
				control="Combo";
				expression="_this setObjectTextureGlobal [0, _value]";
				defaultValue="'\A3\missions_f_orange\Data\Img\Faction_IDAP\direction_sign_area_activity_CA.paa'";
				typeName="STRING";
				class values
				{
					class 0
					{
						name="$STR_3den_display3den_menubar_default_text";
						value="#(argb,8,8,3)color(0,0,0,0)";
						picture="";
					};
					class 1
					{
						name="$STR_A3_orange_faction_idap_activity_title";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\direction_sign_area_activity_CA.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\direction_sign_area_activity_CA.paa";
					};
					class 2
					{
						name="$STR_A3_orange_faction_idap_aid_title";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\direction_sign_area_aid_CA.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\direction_sign_area_aid_CA.paa";
					};
					class 3
					{
						name="$STR_A3_showcase_faction_opfor_air_title";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\direction_sign_area_air_CA.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\direction_sign_area_air_CA.paa";
					};
					class 4
					{
						name="$STR_A3_showcase_faction_opfor_autonomous_title";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\direction_sign_area_autonomous_CA.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\direction_sign_area_autonomous_CA.paa";
					};
					class 5
					{
						name="$STR_editor_menu_file_exit";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\direction_sign_area_exit_CA.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\direction_sign_area_exit_CA.paa";
					};
					class 6
					{
						name="$STR_A3_showcase_faction_opfor_expo_title";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\direction_sign_area_expo_CA.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\direction_sign_area_expo_CA.paa";
					};
					class 7
					{
						name="IDAP";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\direction_sign_area_idap_CA.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\direction_sign_area_idap_CA.paa";
					};
					class 8
					{
						name="$STR_A3_orange_faction_idap_ihl_title";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\direction_sign_area_ihl_CA.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\direction_sign_area_ihl_CA.paa";
					};
					class 9
					{
						name="LAND";
						value="\A3\missions_f_orange\Data\Img\Faction_IDAP\direction_sign_area_land_CA.paa";
						picture="\A3\missions_f_orange\Data\Img\Faction_IDAP\direction_sign_area_land_CA.paa";
					};
				};
			};
			class SwitchTexture_camo2: SwitchTexture_camo1
			{
				property="SwitchTexture_camo2";
				displayName="$STR_3den_object_attribute_objecttexturecustom1_displayname";
				defaultValue="'\A3\missions_f_orange\Data\Img\Faction_IDAP\direction_sign_area_aid_CA.paa'";
				expression="_this setObjectTextureGlobal [1, _value]";
			};
			class SwitchTexture_camo3: SwitchTexture_camo1
			{
				property="SwitchTexture_camo3";
				displayName="$STR_3den_object_attribute_objecttexturecustom2_displayname";
				defaultValue="'\A3\missions_f_orange\Data\Img\Faction_IDAP\direction_sign_area_air_CA.paa'";
				expression="_this setObjectTextureGlobal [2, _value]";
			};
			class SwitchTexture_camo4: SwitchTexture_camo1
			{
				property="SwitchTexture_camo4";
				displayName="$STR_3den_object_attribute_objecttexturecustom3_displayname";
				defaultValue="'\A3\missions_f_orange\Data\Img\Faction_IDAP\direction_sign_area_autonomous_CA.paa'";
				expression="_this setObjectTextureGlobal [3, _value]";
			};
			class SwitchTexture_camo5: SwitchTexture_camo1
			{
				property="SwitchTexture_camo5";
				displayName="$STR_3den_object_attribute_objecttexturecustom4_displayname";
				defaultValue="'\A3\missions_f_orange\Data\Img\Faction_IDAP\direction_sign_area_exit_CA.paa'";
				expression="_this setObjectTextureGlobal [4, _value]";
			};
			class SwitchTexture_camo6: SwitchTexture_camo1
			{
				property="SwitchTexture_camo6";
				displayName="$STR_3den_object_attribute_objecttexturecustom5_displayname";
				defaultValue="'\A3\missions_f_orange\Data\Img\Faction_IDAP\direction_sign_area_expo_CA.paa'";
				expression="_this setObjectTextureGlobal [5, _value]";
			};
			class SwitchTexture_camo7: SwitchTexture_camo1
			{
				property="SwitchTexture_camo7";
				displayName="$STR_3den_object_attribute_objecttexturecustom6_displayname";
				defaultValue="'\A3\missions_f_orange\Data\Img\Faction_IDAP\direction_sign_area_idap_CA.paa'";
				expression="_this setObjectTextureGlobal [6, _value]";
			};
			class SwitchTexture_camo8: SwitchTexture_camo1
			{
				property="SwitchTexture_camo8";
				displayName="$STR_3den_object_attribute_objecttexturecustom7_displayname";
				defaultValue="'\A3\missions_f_orange\Data\Img\Faction_IDAP\direction_sign_area_ihl_CA.paa'";
				expression="_this setObjectTextureGlobal [7, _value]";
			};
			class Arrow01_Rotate
			{
				displayName="Rotate Arrow #1";
				property="Arrow01_Rotate";
				control="SliderSignDirection";
				defaultValue=0;
				expression="_this animateSource ['%s',_value,true]";
			};
			class Arrow02_Rotate: Arrow01_Rotate
			{
				displayName="Rotate Arrow #2";
				property="Arrow02_Rotate";
			};
			class Arrow03_Rotate: Arrow01_Rotate
			{
				displayName="Rotate Arrow #3";
				property="Arrow03_Rotate";
			};
			class Arrow04_Rotate: Arrow01_Rotate
			{
				displayName="Rotate Arrow #4";
				property="Arrow04_Rotate";
			};
			class Arrow05_Rotate: Arrow01_Rotate
			{
				displayName="Rotate Arrow #5";
				property="Arrow05_Rotate";
			};
			class Arrow06_Rotate: Arrow01_Rotate
			{
				displayName="Rotate Arrow #6";
				property="Arrow06_Rotate";
			};
			class Arrow07_Rotate: Arrow01_Rotate
			{
				displayName="Rotate Arrow #7";
				property="Arrow07_Rotate";
			};
			class Arrow08_Rotate: Arrow01_Rotate
			{
				displayName="Rotate Arrow #8";
				property="Arrow08_Rotate";
			};
			class Arrow01_Fide
			{
				displayName="Hide Arrow #1";
				property="Arrow01_Fide";
				control="CheckboxNumber";
				defaultValue=0;
				expression="_this animateSource ['%s',_value,true]";
			};
			class Arrow02_Fide: Arrow01_Fide
			{
				displayName="Hide Arrow #2";
				property="Arrow02_Fide";
			};
			class Arrow03_Fide: Arrow01_Fide
			{
				displayName="Hide Arrow #3";
				property="Arrow03_Fide";
			};
			class Arrow04_Fide: Arrow01_Fide
			{
				displayName="Hide Arrow #4";
				property="Arrow04_Fide";
			};
			class Arrow05_Fide: Arrow01_Fide
			{
				displayName="Hide Arrow #5";
				property="Arrow05_Fide";
			};
			class Arrow06_Fide: Arrow01_Fide
			{
				displayName="Hide Arrow #6";
				property="Arrow06_Fide";
			};
			class Arrow07_Fide: Arrow01_Fide
			{
				displayName="Hide Arrow #7";
				property="Arrow07_Fide";
			};
			class Arrow08_Fide: Arrow01_Fide
			{
				displayName="Hide Arrow #8";
				property="Arrow08_Fide";
			};
		};
	};
	class Sign_Direction_IDAP_LoW: Sign_Direction_IDAP_F
	{
		author="O&T Expansion Eden";
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Sign_Direction_IDAP_LoW.jpg";
		_generalMacro="Sign_Direction_IDAP_LoW";
		scope=2;
		scopeCurator=2;
		reversed=1;
	};
	class Sign_Direction_Czech: Sign_Direction_F
	{
		author="O&T Expansion Eden";
		editorCategory="EdCat_Signs";
		editorSubcategory="EdSubcat_Advertisements";
		editorPreview="\A3\EditorPreviews_f_expEden\data\cfgVehicles\Sign_Direction_Czech.jpg";
		_generalMacro="Sign_Direction_Czech";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Globe_CfgVehicles_Sign_Direction_Czech0";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		reversed=1;
		class Attributes
		{
			class Arrow01_Rotate
			{
				displayName="Rotate Arrow #1";
				property="Arrow01_Rotate";
				control="SliderSignDirection";
				defaultValue=0;
				expression="_this animateSource ['%s',_value,true]";
			};
			class Arrow02_Rotate: Arrow01_Rotate
			{
				displayName="Rotate Arrow #2";
				property="Arrow02_Rotate";
			};
			class Arrow03_Rotate: Arrow01_Rotate
			{
				displayName="Rotate Arrow #3";
				property="Arrow03_Rotate";
			};
			class Arrow04_Rotate: Arrow01_Rotate
			{
				displayName="Rotate Arrow #4";
				property="Arrow04_Rotate";
			};
			class Arrow05_Rotate: Arrow01_Rotate
			{
				displayName="Rotate Arrow #5";
				property="Arrow05_Rotate";
			};
			class Arrow06_Rotate: Arrow01_Rotate
			{
				displayName="Rotate Arrow #6";
				property="Arrow06_Rotate";
			};
			class Arrow07_Rotate: Arrow01_Rotate
			{
				displayName="Rotate Arrow #7";
				property="Arrow07_Rotate";
			};
			class Arrow08_Rotate: Arrow01_Rotate
			{
				displayName="Rotate Arrow #8";
				property="Arrow08_Rotate";
			};
			class Arrow01_Fide
			{
				displayName="Hide Arrow #1";
				property="Arrow01_Fide";
				control="CheckboxNumber";
				defaultValue=0;
				expression="_this animateSource ['%s',_value,true]";
			};
			class Arrow02_Fide: Arrow01_Fide
			{
				displayName="Hide Arrow #2";
				property="Arrow02_Fide";
			};
			class Arrow03_Fide: Arrow01_Fide
			{
				displayName="Hide Arrow #3";
				property="Arrow03_Fide";
			};
			class Arrow04_Fide: Arrow01_Fide
			{
				displayName="Hide Arrow #4";
				property="Arrow04_Fide";
			};
			class Arrow05_Fide: Arrow01_Fide
			{
				displayName="Hide Arrow #5";
				property="Arrow05_Fide";
			};
			class Arrow06_Fide: Arrow01_Fide
			{
				displayName="Hide Arrow #6";
				property="Arrow06_Fide";
			};
			class Arrow07_Fide: Arrow01_Fide
			{
				displayName="Hide Arrow #7";
				property="Arrow07_Fide";
			};
			class Arrow08_Fide: Arrow01_Fide
			{
				displayName="Hide Arrow #8";
				property="Arrow08_Fide";
			};
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
			class ObjectTextureCustom2
			{
				displayName="$STR_3den_object_attribute_objecttexturecustom2_displayname";
				tooltip="$STR_3den_object_attribute_objecttexturecustom_tooltip";
				property="ObjectTextureCustom2";
				control="Edit";
				expression="_this setObjectTextureGlobal [2,_value]";
				defaultValue="(getObjectTextures _this) param [2,'',['']]";
			};
			class ObjectTextureCustom3
			{
				displayName="$STR_3den_object_attribute_objecttexturecustom3_displayname";
				tooltip="$STR_3den_object_attribute_objecttexturecustom_tooltip";
				property="ObjectTextureCustom3";
				control="Edit";
				expression="_this setObjectTextureGlobal [3,_value]";
				defaultValue="(getObjectTextures _this) param [3,'',['']]";
			};
			class ObjectTextureCustom4
			{
				displayName="$STR_3den_object_attribute_objecttexturecustom4_displayname";
				tooltip="$STR_3den_object_attribute_objecttexturecustom_tooltip";
				property="ObjectTextureCustom4";
				control="Edit";
				expression="_this setObjectTextureGlobal [4,_value]";
				defaultValue="(getObjectTextures _this) param [4,'',['']]";
			};
			class ObjectTextureCustom5
			{
				displayName="$STR_3den_object_attribute_objecttexturecustom5_displayname";
				tooltip="$STR_3den_object_attribute_objecttexturecustom_tooltip";
				property="ObjectTextureCustom5";
				control="Edit";
				expression="_this setObjectTextureGlobal [5,_value]";
				defaultValue="(getObjectTextures _this) param [5,'',['']]";
			};
			class ObjectTextureCustom6
			{
				displayName="$STR_3den_object_attribute_objecttexturecustom6_displayname";
				tooltip="$STR_3den_object_attribute_objecttexturecustom_tooltip";
				property="ObjectTextureCustom6";
				control="Edit";
				expression="_this setObjectTextureGlobal [6,_value]";
				defaultValue="(getObjectTextures _this) param [6,'',['']]";
			};
			class ObjectTextureCustom7
			{
				displayName="$STR_3den_object_attribute_objecttexturecustom7_displayname";
				tooltip="$STR_3den_object_attribute_objecttexturecustom_tooltip";
				property="ObjectTextureCustom7";
				control="Edit";
				expression="_this setObjectTextureGlobal [7,_value]";
				defaultValue="(getObjectTextures _this) param [7,'',['']]";
			};
			class ObjectTextureCustom8
			{
				displayName="$STR_3den_object_attribute_objecttexturecustom8_displayname";
				tooltip="$STR_3den_object_attribute_objecttexturecustom_tooltip";
				property="ObjectTextureCustom8";
				control="Edit";
				expression="_this setObjectTextureGlobal [8,_value]";
				defaultValue="(getObjectTextures _this) param [8,'',['']]";
			};
		};
	};
};
