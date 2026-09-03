class CfgPatches
{
	class A3_Ui_F_Globe
	{
		author="Trager";
		name="O&T Expansion Eden - User Interface";
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
class RscMapControl;
class RscButton;
class RscActivePicture;
class RscSubmenu;
class RscStructuredText;
class RscPicture;
class RscUnitInfo;
class RscText;
class RscControlsGroup;
class VScrollbar;
class HScrollbar;
class Controls;
class CfgMarkers
{
	class hd_dot;
	class mil_objective;
	class b_unknown;
	class loc_Tree;
	class empty;
	class Flag;
	class loc_UXO: loc_Tree
	{
		size=18;
		name="$STR_A3_Orange_CfgHints_UXO_displayName";
		icon="\A3\ui_f_orange\Data\CfgVehicleIcons\iconExplosiveUXO_ca.paa";
		texture="\A3\ui_f_orange\Data\CfgVehicleIcons\iconExplosiveUXO_ca.paa";
		color[]={1,1,1,1};
	};
	class loc_AirDrop: loc_Tree
	{
		size=24;
		name="$STR_A3_Globe_CfgMarkers_loc_Parachute0";
		icon="\A3\ui_f_orange\Data\CfgTaskTypes\airdrop_ca.paa";
		texture="\A3\ui_f_orange\Data\CfgTaskTypes\airdrop_ca.paa";
		color[]={1,1,1,1};
	};
	class loc_AAF: loc_Tree
	{
		size=24;
		name="$STR_A3_Showcase_Showcase_Faction_INDEPENDENT_Mission_Name";
		icon="\A3\ui_f_orange\Data\CfgOrange\Missions\orange_minedispenser_ca.paa";
		texture="\A3\ui_f_orange\Data\CfgOrange\Missions\orange_minedispenser_ca.paa";
		color[]={1,1,1,1};
	};
	class loc_CSAT: loc_Tree
	{
		size=24;
		font="Caveat";
		name="$STR_A3_Showcase_Showcase_Faction_OPFOR_Mission_Name";
		icon="\A3\ui_f_orange\Data\CfgOrange\Missions\orange_cluster_ca.paa";
		texture="\A3\ui_f_orange\Data\CfgOrange\Missions\orange_cluster_ca.paa";
		color[]={1,1,1,1};
	};
	class loc_Civilian: loc_Tree
	{
		size=24;
		name="$STR_A3_texturesources_civ0";
		icon="\A3\ui_f_orange\Data\CfgOrange\Missions\orange_escape_ca.paa";
		texture="\A3\ui_f_orange\Data\CfgOrange\Missions\orange_escape_ca.paa";
		color[]={1,1,1,1};
	};
	class loc_FIA: loc_Tree
	{
		size=24;
		name="$STR_A3_cfgfactionclasses_ind_g_f0";
		icon="\A3\ui_f_orange\Data\CfgOrange\Missions\orange_leaflets_ca.paa";
		texture="\A3\ui_f_orange\Data\CfgOrange\Missions\orange_leaflets_ca.paa";
		color[]={1,1,1,1};
	};
	class loc_NATO: loc_Tree
	{
		size=24;
		name="$STR_A3_cfgfactionclasses_blu_f0";
		icon="\A3\ui_f_orange\Data\CfgOrange\Missions\orange_airdrop_ca.paa";
		texture="\A3\ui_f_orange\Data\CfgOrange\Missions\orange_airdrop_ca.paa";
		color[]={1,1,1,1};
	};
	class loc_IDAP: loc_Tree
	{
		size=24;
		name="$STR_A3_cfgfactionclasses_civ_idap_f0";
		icon="\A3\ui_f_orange\Data\CfgOrange\Missions\orange_hub_ca.paa";
		texture="\A3\ui_f_orange\Data\CfgOrange\Missions\orange_hub_ca.paa";
		color[]={1,1,1,1};
	};
	class MemoryFragment: Flag
	{
		scope=2;
		name="$STR_A3_Globe_CfgMarkers_MemoryFragment0";
		texture="\A3\ui_f_orange\data\cfgmarkers\memoryFragment_ca.paa";
	};
	class hd_arrow_1: Flag
	{
		scope=2;
		scopeCurator=2;
		name="$STR_expEden_CfgMarkers_arrow_1";
		icon="\A3\Missions_F_Orange\Data\Img\Orange_Leaflets\arrow_1_ca.paa";
		texture="\A3\Missions_F_Orange\Data\Img\Orange_Leaflets\arrow_1_ca.paa";
		shadow=0;
		markerClass="draw";
		color[]={0,0,0,1};
		showEditorMarkerColor=0;
	};
	class hd_arrow_2: Flag
	{
		name="$STR_expEden_CfgMarkers_arrow_2";
		icon="\A3\Missions_F_Orange\Data\Img\Orange_Leaflets\arrow_2_ca.paa";
		texture="\A3\Missions_F_Orange\Data\Img\Orange_Leaflets\arrow_2_ca.paa";
		color[]={0,0,0,1};
		markerClass="draw";
		shadow=0;
		scope=2;
		scopeCurator=2;
		showEditorMarkerColor=0;
	};
	class hd_barricade: Flag
	{
		name="$STR_expEden_CfgMarkers_barricade";
		icon="\A3\Missions_F_Orange\Data\Img\Orange_Leaflets\barricade_ca.paa";
		texture="\A3\Missions_F_Orange\Data\Img\Orange_Leaflets\barricade_ca.paa";
		color[]={0,0,0,1};
		markerClass="draw";
		shadow=0;
		scope=2;
		scopeCurator=2;
		showEditorMarkerColor=0;
	};
	class hd_minefield: Flag
	{
		name="$STR_expEden_CfgMarkers_minefield";
		icon="\A3\Missions_F_Orange\Data\Img\Orange_Leaflets\minefield_ca.paa";
		texture="\A3\Missions_F_Orange\Data\Img\Orange_Leaflets\minefield_ca.paa";
		color[]={0,0,0,1};
		markerClass="draw";
		shadow=0;
		scope=2;
		scopeCurator=2;
		showEditorMarkerColor=0;
	};
	class hd_Contact_arrow1: Flag
	{
		scope=2;
		name="$STR_expEden_CfgMarkers_contact_arrow1";
		icon="\A3\UI_F_Enoch\Data\CfgMarkers\arrow1_ca.paa";
		texture="\A3\UI_F_Enoch\Data\CfgMarkers\arrow1_ca.paa";
		shadow=0;
		markerClass="draw";
		color[]={0,0,0,1};
	};
	class hd_Contact_arrow2: Flag
	{
		scope=2;
		name="$STR_expEden_CfgMarkers_contact_arrow2";
		icon="\A3\UI_F_Enoch\Data\CfgMarkers\arrow2_ca.paa";
		texture="\A3\UI_F_Enoch\Data\CfgMarkers\arrow2_ca.paa";
		shadow=0;
		markerClass="draw";
		color[]={0,0,0,1};
	};
	class hd_Contact_arrow3: Flag
	{
		scope=2;
		name="$STR_expEden_CfgMarkers_contact_arrow3";
		icon="\A3\UI_F_Enoch\Data\CfgMarkers\arrow3_ca.paa";
		texture="\A3\UI_F_Enoch\Data\CfgMarkers\arrow3_ca.paa";
		shadow=0;
		markerClass="draw";
		color[]={0,0,0,1};
	};
	class hd_Contact_arrowLeft: Flag
	{
		scope=2;
		name="$STR_expEden_CfgMarkers_Contact_arrowLeft";
		icon="\A3\UI_F_Enoch\Data\CfgMarkers\arrowLeft_ca.paa";
		texture="\A3\UI_F_Enoch\Data\CfgMarkers\arrowLeft_ca.paa";
		shadow=0;
		markerClass="draw";
		color[]={0,0,0,1};
	};
	class hd_Contact_arrowRight: Flag
	{
		scope=2;
		name="$STR_expEden_CfgMarkers_Contact_arrowRight";
		icon="\A3\UI_F_Enoch\Data\CfgMarkers\arrowRight_ca.paa";
		texture="\A3\UI_F_Enoch\Data\CfgMarkers\arrowRight_ca.paa";
		shadow=0;
		markerClass="draw";
		color[]={0,0,0,1};
	};
	class hd_Contact_arrowSmall1: Flag
	{
		scope=2;
		name="$STR_expEden_CfgMarkers_Contact_arrowSmall1";
		icon="\A3\UI_F_Enoch\Data\CfgMarkers\arrowSmall1_ca.paa";
		texture="\A3\UI_F_Enoch\Data\CfgMarkers\arrowSmall1_ca.paa";
		shadow=0;
		markerClass="draw";
		color[]={0,0,0,1};
	};
	class hd_Contact_arrowSmall2: Flag
	{
		scope=2;
		name="$STR_expEden_CfgMarkers_Contact_arrowSmall2";
		icon="\A3\UI_F_Enoch\Data\CfgMarkers\arrowSmall2_ca.paa";
		texture="\A3\UI_F_Enoch\Data\CfgMarkers\arrowSmall2_ca.paa";
		shadow=0;
		markerClass="draw";
		color[]={0,0,0,1};
	};
	class hd_Contact_art1: Flag
	{
		scope=2;
		name="$STR_expEden_CfgMarkers_Contact_art1";
		icon="\A3\UI_F_Enoch\Data\CfgMarkers\art1_ca.paa";
		texture="\A3\UI_F_Enoch\Data\CfgMarkers\art1_ca.paa";
		shadow=0;
		markerClass="draw";
		color[]={0,0,0,1};
		type="iconFixed";
		x=5100;
		y="worldsize + 265";
		w=1200;
		h=300;
	};
	class hd_Contact_art2: Flag
	{
		scope=2;
		name="$STR_expEden_CfgMarkers_Contact_art2";
		texture="\A3\UI_F_Enoch\Data\CfgMarkers\art2_ca.paa";
		icon="\A3\UI_F_Enoch\Data\CfgMarkers\art2_ca.paa";
		shadow=0;
		markerClass="draw";
		color[]={0,0,0,1};
	};
	class hd_Contact_circle1: Flag
	{
		scope=2;
		name="$STR_expEden_CfgMarkers_Contact_circle1";
		icon="\A3\UI_F_Enoch\Data\CfgMarkers\circle1_ca.paa";
		texture="\A3\UI_F_Enoch\Data\CfgMarkers\circle1_ca.paa";
		shadow=0;
		markerClass="draw";
		color[]={0,0,0,1};
	};
	class hd_Contact_circle2: Flag
	{
		scope=2;
		name="$STR_expEden_CfgMarkers_Contact_circle2";
		icon="\A3\UI_F_Enoch\Data\CfgMarkers\circle2_ca.paa";
		texture="\A3\UI_F_Enoch\Data\CfgMarkers\circle2_ca.paa";
		shadow=0;
		markerClass="draw";
		color[]={0,0,0,1};
	};
	class hd_Contact_circle3: Flag
	{
		scope=2;
		name="$STR_expEden_CfgMarkers_Contact_circle3";
		icon="\A3\UI_F_Enoch\Data\CfgMarkers\circle3_ca.paa";
		texture="\A3\UI_F_Enoch\Data\CfgMarkers\circle3_ca.paa";
		shadow=0;
		markerClass="draw";
		color[]={0,0,0,1};
	};
	class hd_Contact_circle4: Flag
	{
		scope=2;
		name="$STR_expEden_CfgMarkers_Contact_circle4";
		icon="\A3\UI_F_Enoch\Data\CfgMarkers\circle4_ca.paa";
		texture="\A3\UI_F_Enoch\Data\CfgMarkers\circle4_ca.paa";
		shadow=0;
		markerClass="draw";
		color[]={0,0,0,1};
	};
	class hd_Contact_dashedLine1: Flag
	{
		scope=2;
		name="$STR_expEden_CfgMarkers_Contact_dashedLine1";
		icon="\A3\UI_F_Enoch\Data\CfgMarkers\dashedLine1_ca.paa";
		texture="\A3\UI_F_Enoch\Data\CfgMarkers\dashedLine1_ca.paa";
		shadow=0;
		markerClass="draw";
		color[]={0,0,0,1};
	};
	class hd_Contact_dashedLine2: Flag
	{
		scope=2;
		name="$STR_expEden_CfgMarkers_Contact_dashedLine2";
		icon="\A3\UI_F_Enoch\Data\CfgMarkers\dashedLine2_ca.paa";
		texture="\A3\UI_F_Enoch\Data\CfgMarkers\dashedLine2_ca.paa";
		shadow=0;
		markerClass="draw";
		color[]={0,0,0,1};
	};
	class hd_Contact_dashedLine3: Flag
	{
		scope=2;
		name="$STR_expEden_CfgMarkers_Contact_dashedLine3";
		icon="\A3\UI_F_Enoch\Data\CfgMarkers\dashedLine3_ca.paa";
		texture="\A3\UI_F_Enoch\Data\CfgMarkers\dashedLine3_ca.paa";
		shadow=0;
		markerClass="draw";
		color[]={0,0,0,1};
	};
	class hd_Contact_defenseLine: Flag
	{
		scope=2;
		name="$STR_expEden_CfgMarkers_Contact_defenseLine";
		icon="\A3\UI_F_Enoch\Data\CfgMarkers\defenseLine_ca.paa";
		texture="\A3\UI_F_Enoch\Data\CfgMarkers\defenseLine_ca.paa";
		shadow=0;
		markerClass="draw";
		color[]={0,0,0,1};
	};
	class hd_Contact_defenseLineOver: Flag
	{
		scope=2;
		name="$STR_expEden_CfgMarkers_Contact_defenseLineOver";
		icon="\A3\UI_F_Enoch\Data\CfgMarkers\defenseLineOver_ca.paa";
		texture="\A3\UI_F_Enoch\Data\CfgMarkers\defenseLineOver_ca.paa";
		shadow=0;
		markerClass="draw";
		color[]={0,0,0,1};
	};
	class hd_Contact_dot1: Flag
	{
		scope=2;
		name="$STR_expEden_CfgMarkers_Contact_dot1";
		icon="\A3\UI_F_Enoch\Data\CfgMarkers\dot1_ca.paa";
		texture="\A3\UI_F_Enoch\Data\CfgMarkers\dot1_ca.paa";
		shadow=0;
		markerClass="draw";
		color[]={0,0,0,1};
	};
	class hd_Contact_dot2: Flag
	{
		scope=2;
		name="$STR_expEden_CfgMarkers_Contact_dot2";
		icon="\A3\UI_F_Enoch\Data\CfgMarkers\dot2_ca.paa";
		texture="\A3\UI_F_Enoch\Data\CfgMarkers\dot2_ca.paa";
		shadow=0;
		markerClass="draw";
		color[]={0,0,0,1};
	};
	class hd_Contact_dot3: Flag
	{
		scope=2;
		name="$STR_expEden_CfgMarkers_Contact_dot3";
		icon="\A3\UI_F_Enoch\Data\CfgMarkers\dot3_ca.paa";
		texture="\A3\UI_F_Enoch\Data\CfgMarkers\dot3_ca.paa";
		shadow=0;
		markerClass="draw";
		color[]={0,0,0,1};
	};
	class hd_Contact_dot4: Flag
	{
		scope=2;
		name="$STR_expEden_CfgMarkers_Contact_dot4";
		icon="\A3\UI_F_Enoch\Data\CfgMarkers\dot4_ca.paa";
		texture="\A3\UI_F_Enoch\Data\CfgMarkers\dot4_ca.paa";
		shadow=0;
		markerClass="draw";
		color[]={0,0,0,1};
	};
	class hd_Contact_dot5: Flag
	{
		scope=2;
		name="$STR_expEden_CfgMarkers_Contact_dot5";
		icon="\A3\UI_F_Enoch\Data\CfgMarkers\dot5_ca.paa";
		texture="\A3\UI_F_Enoch\Data\CfgMarkers\dot5_ca.paa";
		shadow=0;
		markerClass="draw";
		color[]={0,0,0,1};
	};
	class hd_Contact_pencilCircle1: Flag
	{
		scope=2;
		name="$STR_expEden_CfgMarkers_Contact_pencilCircle1";
		icon="\A3\UI_F_Enoch\Data\CfgMarkers\pencilCircle1_ca.paa";
		texture="\A3\UI_F_Enoch\Data\CfgMarkers\pencilCircle1_ca.paa";
		shadow=0;
		markerClass="draw";
		color[]={0,0,1,1};
		showEditorMarkerColor=0;
	};
	class hd_Contact_pencilCircle2: Flag
	{
		scope=2;
		name="$STR_expEden_CfgMarkers_Contact_pencilCircle2";
		icon="\A3\UI_F_Enoch\Data\CfgMarkers\pencilCircle2_ca.paa";
		texture="\A3\UI_F_Enoch\Data\CfgMarkers\pencilCircle2_ca.paa";
		shadow=0;
		markerClass="draw";
		color[]={0,0,1,1};
		showEditorMarkerColor=0;
	};
	class hd_Contact_pencilCircle3: Flag
	{
		scope=2;
		name="$STR_expEden_CfgMarkers_Contact_pencilCircle3";
		icon="\A3\UI_F_Enoch\Data\CfgMarkers\pencilCircle3_ca.paa";
		texture="\A3\UI_F_Enoch\Data\CfgMarkers\pencilCircle3_ca.paa";
		shadow=0;
		markerClass="draw";
		color[]={0,0,1,1};
		showEditorMarkerColor=0;
	};
	class hd_Contact_pencilDoodle1: Flag
	{
		scope=2;
		name="$STR_expEden_CfgMarkers_Contact_pencilDoodle1";
		icon="\A3\UI_F_Enoch\Data\CfgMarkers\pencilDoodle1_ca.paa";
		texture="\A3\UI_F_Enoch\Data\CfgMarkers\pencilDoodle1_ca.paa";
		shadow=0;
		markerClass="draw";
		color[]={0,0,1,1};
		showEditorMarkerColor=0;
	};
	class hd_Contact_pencilDoodle2: Flag
	{
		scope=2;
		name="$STR_expEden_CfgMarkers_Contact_pencilDoodle2";
		icon="\A3\UI_F_Enoch\Data\CfgMarkers\pencilDoodle2_ca.paa";
		texture="\A3\UI_F_Enoch\Data\CfgMarkers\pencilDoodle2_ca.paa";
		shadow=0;
		markerClass="draw";
		color[]={0,0,1,1};
		showEditorMarkerColor=0;
	};
	class hd_Contact_pencilDoodle3: Flag
	{
		scope=2;
		name="$STR_expEden_CfgMarkers_Contact_pencilDoodle3";
		icon="\A3\UI_F_Enoch\Data\CfgMarkers\pencilDoodle3_ca.paa";
		texture="\A3\UI_F_Enoch\Data\CfgMarkers\pencilDoodle3_ca.paa";
		shadow=0;
		markerClass="draw";
		color[]={0,0,1,1};
		showEditorMarkerColor=0;
	};
	class hd_Contact_pencilDot1: Flag
	{
		scope=2;
		name="$STR_expEden_CfgMarkers_Contact_pencilDot1";
		icon="\A3\UI_F_Enoch\Data\CfgMarkers\pencilDot1_ca.paa";
		texture="\A3\UI_F_Enoch\Data\CfgMarkers\pencilDot1_ca.paa";
		shadow=0;
		markerClass="draw";
		color[]={0,0,1,1};
		showEditorMarkerColor=0;
	};
	class hd_Contact_pencilDot2: Flag
	{
		scope=2;
		name="$STR_expEden_CfgMarkers_Contact_pencilDot2";
		icon="\A3\UI_F_Enoch\Data\CfgMarkers\pencilDot2_ca.paa";
		texture="\A3\UI_F_Enoch\Data\CfgMarkers\pencilDot2_ca.paa";
		shadow=0;
		markerClass="draw";
		color[]={0,0,1,1};
		showEditorMarkerColor=0;
	};
	class hd_Contact_pencilDot3: Flag
	{
		scope=2;
		name="$STR_expEden_CfgMarkers_Contact_pencilDot3";
		icon="\A3\UI_F_Enoch\Data\CfgMarkers\pencilDot3_ca.paa";
		texture="\A3\UI_F_Enoch\Data\CfgMarkers\pencilDot3_ca.paa";
		shadow=0;
		markerClass="draw";
		color[]={0,0,1,1};
		showEditorMarkerColor=0;
	};
	class hd_Contact_pencilTask1: Flag
	{
		scope=2;
		name="$STR_expEden_CfgMarkers_Contact_pencilTask1";
		icon="\A3\UI_F_Enoch\Data\CfgMarkers\pencilTask1_ca.paa";
		texture="\A3\UI_F_Enoch\Data\CfgMarkers\pencilTask1_ca.paa";
		shadow=0;
		markerClass="draw";
		color[]={0,0,1,1};
		showEditorMarkerColor=0;
	};
	class hd_Contact_pencilTask2: Flag
	{
		scope=2;
		name="$STR_expEden_CfgMarkers_Contact_pencilTask2";
		icon="\A3\UI_F_Enoch\Data\CfgMarkers\pencilTask2_ca.paa";
		texture="\A3\UI_F_Enoch\Data\CfgMarkers\pencilTask2_ca.paa";
		shadow=0;
		markerClass="draw";
		color[]={0,0,1,1};
		showEditorMarkerColor=0;
	};
	class hd_Contact_pencilTask3: Flag
	{
		scope=2;
		name="$STR_expEden_CfgMarkers_Contact_pencilTask3";
		icon="\A3\UI_F_Enoch\Data\CfgMarkers\pencilTask3_ca.paa";
		texture="\A3\UI_F_Enoch\Data\CfgMarkers\pencilTask3_ca.paa";
		shadow=0;
		markerClass="draw";
		color[]={0,0,1,1};
		showEditorMarkerColor=0;
	};
	class loc_LetterA: empty
	{
		name="$STR_expEden_loc_LetterA";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\letters\a_ca.paa";
		color[]={0,0,0,1};
		size=18;
		shadow=0;
		scope=2;
		markerClass="Locations";
		showEditorMarkerColor=0;
	};
	class loc_Frame: loc_LetterA
	{
		name="$STR_expEden_loc_Frame";
		icon="\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\icon_ca.paa";
		size=25;
	};
	class loc_LetterB: loc_LetterA
	{
		name="$STR_expEden_loc_LetterB";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\letters\b_ca.paa";
	};
	class loc_LetterC: loc_LetterA
	{
		name="$STR_expEden_loc_LetterC";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\letters\c_ca.paa";
	};
	class loc_LetterD: loc_LetterA
	{
		name="$STR_expEden_loc_LetterD";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\letters\d_ca.paa";
	};
	class loc_LetterE: loc_LetterA
	{
		name="$STR_expEden_loc_LetterE";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\letters\e_ca.paa";
	};
	class loc_LetterF: loc_LetterA
	{
		name="$STR_expEden_loc_LetterF";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\letters\f_ca.paa";
	};
	class loc_LetterG: loc_LetterA
	{
		name="$STR_expEden_loc_LetterG";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\letters\g_ca.paa";
	};
	class loc_LetterH: loc_LetterA
	{
		name="$STR_expEden_loc_LetterH";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\letters\h_ca.paa";
	};
	class loc_LetterI: loc_LetterA
	{
		name="$STR_expEden_loc_LetterI";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\letters\i_ca.paa";
	};
	class loc_LetterJ: loc_LetterA
	{
		name="$STR_expEden_loc_LetterJ";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\letters\j_ca.paa";
	};
	class loc_LetterK: loc_LetterA
	{
		name="$STR_expEden_loc_LetterK";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\letters\k_ca.paa";
	};
	class loc_LetterL: loc_LetterA
	{
		name="$STR_expEden_loc_LetterL";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\letters\l_ca.paa";
	};
	class loc_LetterM: loc_LetterA
	{
		name="$STR_expEden_loc_LetterM";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\letters\m_ca.paa";
	};
	class loc_LetterN: loc_LetterA
	{
		name="$STR_expEden_loc_LetterN";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\letters\n_ca.paa";
	};
	class loc_LetterO: loc_LetterA
	{
		name="$STR_expEden_loc_LetterO";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\letters\o_ca.paa";
	};
	class loc_LetterP: loc_LetterA
	{
		name="$STR_expEden_loc_LetterP";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\letters\p_ca.paa";
	};
	class loc_LetterQ: loc_LetterA
	{
		name="$STR_expEden_loc_LetterQ";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\letters\q_ca.paa";
	};
	class loc_LetterR: loc_LetterA
	{
		name="$STR_expEden_loc_LetterR";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\letters\r_ca.paa";
	};
	class loc_LetterS: loc_LetterA
	{
		name="$STR_expEden_loc_LetterS";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\letters\s_ca.paa";
	};
	class loc_LetterT: loc_LetterA
	{
		name="$STR_expEden_loc_LetterT";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\letters\t_ca.paa";
	};
	class loc_LetterU: loc_LetterA
	{
		name="$STR_expEden_loc_LetterU";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\letters\u_ca.paa";
	};
	class loc_LetterV: loc_LetterA
	{
		name="$STR_expEden_loc_LetterV";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\letters\v_ca.paa";
	};
	class loc_LetterW: loc_LetterA
	{
		name="$STR_expEden_loc_LetterW";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\letters\w_ca.paa";
	};
	class loc_LetterX: loc_LetterA
	{
		name="$STR_expEden_loc_LetterX";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\letters\x_ca.paa";
	};
	class loc_LetterY: loc_LetterA
	{
		name="$STR_expEden_loc_LetterY";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\letters\y_ca.paa";
	};
	class loc_LetterZ: loc_LetterA
	{
		name="$STR_expEden_loc_LetterZ";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\letters\z_ca.paa";
	};
	class loc_Attack: loc_LetterA
	{
		name="$STR_STATE_ACTION";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\types\attack_ca.paa";
	};
	class loc_Box: loc_LetterA
	{
		name="$STR_A3_CFGEDITORCATEGORIES_EDCAT_THINGS0";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\types\box_ca.paa";
	};
	class loc_Rifle: loc_LetterA
	{
		name="$STR_expEden_loc_Rifle";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\types\rifle_ca.paa";
	};
	class loc_Truck: loc_LetterA
	{
		name="$STR_DN_TRUCK";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\types\truck_ca.paa";
	};
	class loc_refuel: loc_LetterA
	{
		name="$STR_REFUEL";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\types\refuel_ca.paa";
	};
	class loc_repair: loc_LetterA
	{
		name="$STR_REPAIR";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\types\repair_ca.paa";
	};
	class loc_rearm: loc_LetterA
	{
		name="$STR_A3_RELOAD1";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\types\rearm_ca.paa";
	};
	class loc_interact: loc_LetterA
	{
		name="$STR_RSCMENU.HPPRSCGROUPROOTMENU_ITEMS_EMPTY1";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\types\interact_ca.paa";
	};
	class loc_boat: loc_LetterA
	{
		name="$STR_DN_SHIP";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\types\Boat_ca.paa";
	};
	class loc_car: loc_LetterA
	{
		name="$STR_expEden_loc_car";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\types\car_ca.paa";
	};
	class loc_help: loc_LetterA
	{
		name="$STR_3DEN_DISPLAY3DEN_MENUBAR_HELP_TEXT";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\types\help_ca.paa";
	};
	class loc_search: loc_LetterA
	{
		name="$STR_3DEN_DISPLAY3DEN_MENUBAR_SEARCH_TEXT";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\types\search_ca.paa";
	};
	class loc_radio: loc_LetterA
	{
		name="$STR_expEden_loc_radio";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\types\Radio_ca.paa";
	};
	class loc_heal: loc_LetterA
	{
		name="$STR_A3_CFGEDITORSUBCATEGORIES_EDSUBCAT_MEDICINE0";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\types\Heal_ca.paa";
	};
	class loc_heli: loc_LetterA
	{
		name="$STR_DN_HELICOPTER";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\types\Heli_ca.paa";
	};
	class loc_plane: loc_LetterA
	{
		name="$STR_DN_AIRPLANE";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\types\Plane_ca.paa";
	};
	class loc_talk: loc_LetterA
	{
		name="$STR_a3_smartmarkers_smartmarker_b_talk_f_sections_markertext0";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\types\Talk_ca.paa";
	};
	class loc_container: loc_LetterA
	{
		name="$STR_expEden_loc_container";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\types\Container_ca.paa";
	};
	class loc_download: loc_LetterA
	{
		name="$STR_A3_ENDGAME_MISC_DOWNLOAD";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\types\Download_ca.paa";
	};
	class loc_use: loc_LetterA
	{
		name="$STR_RSCMENU.HPPRSCGROUPROOTMENU_ITEMS_EMPTY1";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\types\Use_ca.paa";
	};
	class loc_mine: loc_LetterA
	{
		name="$STR_DN_MINE";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\types\mine_ca.paa";
	};
	class loc_meet: loc_LetterA
	{
		name="$STR_A3_CAMPAIGN_B_M05_MARKER04";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\types\meet_ca.paa";
	};
	class loc_destroy: loc_LetterA
	{
		name="$STR_CFG_MARKERS_DESTROY";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\types\destroy_ca.paa";
	};
	class loc_defend: loc_LetterA
	{
		name="$STR_A3_WL_MENU_DEFENCES";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\types\defend_ca.paa";
	};
	class loc_save: loc_LetterA
	{
		name="$STR_3DEN_PREFERENCES_ATTRIBUTECATEGORY_SAVING_DISPLAYNAME";
		icon="\A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_saveas_ca.paa";
	};
	class loc_move: loc_LetterA
	{
		name="$STR_3DEN_Waypoint_textSingular";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\types\move_ca.paa";
	};
	class loc_Pick: loc_LetterA
	{
		name="$STR_GEAR_TAKE";
		icon="\A3\Ui_f\data\IGUI\Cfg\Actions\take_ca.paa";
	};
	class loc_Ambush: loc_LetterA
	{
		size=17;
		name="$STR_CFG_MARKERS_AMBUSH";
		icon="\A3\Ui_f\data\Map\Markers\Military\ambush_ca.paa";
	};
	class loc_sdv: loc_LetterA
	{
		size=17;
		name="$STR_expEden_loc_sdv";
		icon="\A3\ui_f\data\gui\cfg\hints\SDV_ca.paa";
	};
	class loc_Parachute: loc_Tree
	{
		name="$STR_B_Soldier_PG_F0";
		icon="\A3\Air_F_Beta\Parachute_01\Data\UI\Map_Parachute_01_CA.paa";
		size=20;
		color[]={0,0,0,1};
		showEditorMarkerColor=0;
	};
	class loc_Hill: loc_Tree
	{
		name="$STR_NAME_HILL";
		icon="\A3\ui_f\data\map\locationtypes\hill_ca.paa";
		size=0;
		color[]={0,0,0,1};
		showEditorMarkerColor=0;
	};
	class loc_ViewPoint: loc_Tree
	{
		name="$STR_NAME_VIEWPOINT";
		icon="\A3\ui_f\data\map\locationtypes\viewpoint_ca.paa";
		size=16;
		color[]={0.77999997,0,0.050000001,1};
		showEditorMarkerColor=1;
	};
	class loc_vest: loc_LetterA
	{
		name="$STR_a3_requiredgear_listitem_vest";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\types\armor_ca.paa";
	};
	class loc_backpack: loc_LetterA
	{
		name="$STR_a3_requiredgear_listitem_backpack";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\types\backpack_ca.paa";
	};
	class loc_danger: loc_LetterA
	{
		name="$STR_a3_smartmarkers_smartmarker_u_mosquitos_f_sections_markertext0";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\types\danger_ca.paa";
	};
	class loc_mission: loc_LetterA
	{
		name="$STR_section_mission";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\types\default_ca.paa";
	};
	class loc_documents: loc_LetterA
	{
		name="$STR_a3_cfgvehicles_intel_file1_f";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\types\documents_ca.paa";
	};
	class loc_target: loc_LetterA
	{
		name="$STR_a3_cfgvehicles_moduleai_f_arguments_target_0";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\types\kill_ca.paa";
	};
	class loc_LZ: loc_LetterA
	{
		name="$STR_a3_exp_m05_respawn_1";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\types\land_ca.paa";
	};
	class loc_listen: loc_LetterA
	{
		name="$STR_Globe_CfgMarkers_loc_listen0";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\types\listen_ca.paa";
	};
	class loc_map: loc_LetterA
	{
		name="$STR_a3_rscdisplayarsenal_tab_map";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\types\map_ca.paa";
	};
	class loc_move1: loc_LetterA
	{
		name="$STR_Globe_CfgMarkers_loc_move10";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\types\move1_ca.paa";
	};
	class loc_move2: loc_LetterA
	{
		name="$STR_Globe_CfgMarkers_loc_move20";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\types\move2_ca.paa";
	};
	class loc_move3: loc_LetterA
	{
		name="$STR_Globe_CfgMarkers_loc_move30";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\types\move3_ca.paa";
	};
	class loc_move4: loc_LetterA
	{
		name="$STR_Globe_CfgMarkers_loc_move40";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\types\move4_ca.paa";
	};
	class loc_move5: loc_LetterA
	{
		name="$STR_Globe_CfgMarkers_loc_move50";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\types\move5_ca.paa";
	};
	class loc_compass: loc_LetterA
	{
		name="$STR_a3_cfgvehicles_land_compass_f0";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\types\navigate_ca.paa";
	};
	class loc_sprint: loc_LetterA
	{
		name="$STR_a3_basicspeed1";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\types\run_ca.paa";
	};
	class loc_binoculars: loc_LetterA
	{
		name="$STR_a3_rscdisplayarsenal_tab_binoculars";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\types\scout_ca.paa";
	};
	class loc_takeOff: loc_LetterA
	{
		name="$STR_a3_showcase_jets_bis_tsktakeoff_title";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\types\takeoff_ca.paa";
	};
	class loc_talk1: loc_LetterA
	{
		name="$STR_Globe_CfgMarkers_loc_talk10";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\types\talk1_ca.paa";
	};
	class loc_talk2: loc_LetterA
	{
		name="$STR_Globe_CfgMarkers_loc_talk20";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\types\talk2_ca.paa";
	};
	class loc_talk3: loc_LetterA
	{
		name="$STR_Globe_CfgMarkers_loc_talk30";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\types\talk3_ca.paa";
	};
	class loc_talk4: loc_LetterA
	{
		name="$STR_Globe_CfgMarkers_loc_talk40";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\types\talk4_ca.paa";
	};
	class loc_talk5: loc_LetterA
	{
		name="$STR_Globe_CfgMarkers_loc_talk50";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\types\talk5_ca.paa";
	};
	class loc_unknown: loc_LetterA
	{
		name="$STR_cfg_markers_unknown";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\types\unknown_ca.paa";
	};
	class loc_upload: loc_LetterA
	{
		name="$STR_a3_smartmarkers_smartmarker_t_upload_f_sections_markertext0";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\types\upload_ca.paa";
	};
	class loc_wait: loc_LetterA
	{
		name="$STR_wait";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\types\wait_ca.paa";
	};
	class loc_walk: loc_LetterA
	{
		name="$STR_a3_basicwalk1";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\types\walk_ca.paa";
	};
	class loc_whiteboard: loc_LetterA
	{
		name="$STR_Globe_CfgMarkers_loc_whiteboard0";
		icon="\A3\ui_f\data\igui\cfg\simpletasks\types\whiteboard_ca.paa";
	};
	class loc_GroundSupport: loc_Tree
	{
		name="$STR_a3_cfgfactionclasses_ordnance";
		icon="\a3\Modules_F_Curator\Data\portraitCASGunMissile_ca.paa";
		texture="\a3\Modules_F_Curator\Data\portraitCASGunMissile_ca.paa";
		size=24;
		color[]={0,0,0,1};
		showEditorMarkerColor=0;
	};
	class waypoint
	{
		markerClass="Waypoints";
	};
	class mil_compassStar: mil_objective
	{
		name="$STR_a3_cfgvehicles_land_compass_f0";
		icon="\a3\ui_f\objects\data\compass_base_star_ca.paa";
		texture="\a3\ui_f\objects\data\compass_base_star_ca.paa";
		size=24;
		color[]={1,1,1,1};
		class AttributeValues
		{
			size2[]={7.5,7.5};
		};
	};
	class loc_Buoy: loc_Tree
	{
		name="$STR_A3_CfgVehicles_Land_BuoyBig_F0";
		icon="\A3\Structures_F\Naval\Buoys\data\UI\map_buoy_ca.paa";
		texture="\A3\Structures_F\Naval\Buoys\data\UI\map_buoy_ca.paa";
		size=24;
		color[]={0,0,0,1};
		showEditorMarkerColor=0;
	};
	class loc_hesco5: loc_Tree
	{
		name="$STR_a3_cfgvehicles_land_hbarrier_5_f0";
		icon="\a3\structures_f\mil\fortification\data\ui\map_hbarrier_5_f_ca.paa";
		texture="\a3\structures_f\mil\fortification\data\ui\map_hbarrier_5_f_ca.paa";
		size=18;
		color[]=
		{
			"ColorHBarrier",
			1
		};
		showEditorMarkerColor=1;
		class AttributeValues
		{
			baseColor="ColorHBarrier";
		};
	};
	class loc_hesco3: loc_hesco5
	{
		name="$STR_a3_cfgvehicles_land_hbarrier_3_f0";
		icon="\a3\structures_f\mil\fortification\data\ui\map_hbarrier_3_f_ca.paa";
		texture="\a3\structures_f\mil\fortification\data\ui\map_hbarrier_3_f_ca.paa";
	};
	class loc_hesco1: loc_hesco5
	{
		name="$STR_a3_cfgvehicles_land_hbarrier_1_f0";
		icon="\a3\structures_f\mil\fortification\data\ui\map_hbarrier_1_f_ca.paa";
		texture="\a3\structures_f\mil\fortification\data\ui\map_hbarrier_1_f_ca.paa";
	};
	class loc_Camonet: loc_Tree
	{
		name="$STR_Globe_CfgMarkers_loc_Camonet0";
		icon="\a3\structures_f\mil\shelters\data\ui\map_camonet_ca.paa";
		texture="\a3\structures_f\mil\shelters\data\ui\map_camonet_ca.paa";
		size=20;
		color[]={0,0,0,1};
		showEditorMarkerColor=0;
	};
	class loc_CamonetBig: loc_Camonet
	{
		name="$STR_Globe_CfgMarkers_loc_CamonetBig0";
		icon="\a3\structures_f\mil\shelters\data\ui\map_camonet_big_ca.paa";
		texture="\a3\structures_f\mil\shelters\data\ui\map_camonet_big_ca.paa";
	};
	class loc_CncBarrier: loc_Tree
	{
		name="$STR_a3_cfgvehicles_land_cncbarrier_f0";
		icon="\a3\structures_f\walls\data\ui\map_cncbarrier_f_ca.paa";
		texture="\a3\structures_f\walls\data\ui\map_cncbarrier_f_ca.paa";
		size=18;
		color[]=
		{
			"ColorGrey",
			1
		};
		showEditorMarkerColor=0;
		class AttributeValues
		{
			baseColor="ColorGrey";
		};
	};
	class loc_CncBarrierStripes: loc_CncBarrier
	{
		name="$STR_a3_cfgvehicles_land_cncbarrier_stripes_f0";
		icon="\a3\structures_f\walls\data\ui\map_cncbarrier_stripes_f_ca.paa";
		texture="\a3\structures_f\walls\data\ui\map_cncbarrier_stripes_f_ca.paa";
	};
	class loc_healHygieia: loc_LetterA
	{
		name="$STR_Globe_CfgMarkers_loc_healHygieia0";
		icon="a3\characters_f_orange\uniforms\data\c_paramedic_01_logo_co.paa";
		color[]=
		{
			"ColorBlue",
			1
		};
		class AttributeValues
		{
			size2[]={2,2};
			baseColor="ColorBlue";
		};
	};
	class hd_priority: hd_dot
	{
		name="$STR_a3_modules_moduleomintel_f_attributes_priority0";
		icon="\a3\air_f\heli_light_01\data\heli_light_01_dot_ca.paa";
	};
	class loc_WeatherDayClear: loc_LetterA
	{
		name="$STR_Globe_CfgMarkers_loc_WeatherDayClear0";
		icon="\a3\missions_f_oldman\data\img\weathermanager\weather_day_0_ca.paa";
		color[]=
		{
			"ColorBlack",
			1
		};
		showEditorMarkerColor=1;
		class AttributeValues
		{
			size2[]={2,2};
			baseColor="ColorBlack";
		};
	};
	class loc_WeatherDayCloudyLow: loc_WeatherDayClear
	{
		name="$STR_Globe_CfgMarkers_loc_WeatherDayCloudyLow0";
		icon="\a3\missions_f_oldman\data\img\weathermanager\weather_day_1_ca.paa";
	};
	class loc_WeatherDayCloudyMedium: loc_WeatherDayClear
	{
		name="$STR_Globe_CfgMarkers_loc_WeatherDayCloudyMedium0";
		icon="\a3\missions_f_oldman\data\img\weathermanager\weather_day_2_ca.paa";
	};
	class loc_WeatherDayCloudyHeavy: loc_WeatherDayClear
	{
		name="$STR_Globe_CfgMarkers_loc_WeatherDayCloudyHeavy0";
		icon="\a3\missions_f_oldman\data\img\weathermanager\weather_day_3_ca.paa";
	};
	class loc_WeatherDayCloudyStormy: loc_WeatherDayClear
	{
		name="$STR_Globe_CfgMarkers_loc_WeatherDayCloudyStormy0";
		icon="\a3\missions_f_oldman\data\img\weathermanager\weather_day_4_ca.paa";
	};
	class loc_WeatherNightClear: loc_WeatherDayClear
	{
		name="$STR_Globe_CfgMarkers_loc_WeatherNightClear0";
		icon="\a3\missions_f_oldman\data\img\weathermanager\weather_Night_0_ca.paa";
	};
	class loc_WeatherNightCloudyLow: loc_WeatherDayClear
	{
		name="$STR_Globe_CfgMarkers_loc_WeatherNightCloudyLow0";
		icon="\a3\missions_f_oldman\data\img\weathermanager\weather_Night_1_ca.paa";
	};
	class loc_WeatherNightCloudyMedium: loc_WeatherDayClear
	{
		name="$STR_Globe_CfgMarkers_loc_WeatherNightCloudyMedium0";
		icon="\a3\missions_f_oldman\data\img\weathermanager\weather_Night_2_ca.paa";
	};
	class loc_WeatherNightCloudyHeavy: loc_WeatherDayClear
	{
		name="$STR_Globe_CfgMarkers_loc_WeatherNightCloudyHeavy0";
		icon="\a3\missions_f_oldman\data\img\weathermanager\weather_Night_3_ca.paa";
	};
	class loc_WeatherNightCloudyStormy: loc_WeatherDayClear
	{
		name="$STR_Globe_CfgMarkers_loc_WeatherNightCloudyStormy0";
		icon="\a3\missions_f_oldman\data\img\weathermanager\weather_Night_4_ca.paa";
	};
	class loc_WeatherRain: loc_WeatherDayClear
	{
		name="$STR_Globe_CfgMarkers_loc_WeatherRain0";
		icon="\a3\missions_f_oldman\data\img\weathermanager\weather_rain_ca.paa";
	};
	class loc_RailwayStation: loc_LetterA
	{
		name="$STR_Globe_CfgMarkers_loc_RailwayStation0";
		icon="\a3\weapons_f_mod\SMGs\SMG_03\data\ring_sign_ca.paa";
		class AttributeValues
		{
			size2[]={2.5,2.5};
		};
	};
	class loc_ArtyGunPos: loc_LetterA
	{
		name="$STR_Globe_CfgMarkers_loc_ArtyGunPos0";
		icon="\a3\weapons_f_enoch\Reticle\data\Science_Cam_Cross_ca.paa";
		class AttributeValues
		{
			size2[]={1.5,1.5};
		};
	};
	class loc_VegetationBroadleaf: loc_Tree
	{
		size=18;
		name="$STR_NAME_VEGB";
		icon="\A3\ui_f\data\map\locationtypes\vegetationbroadleaf_ca.paa";
		texture="\A3\ui_f\data\map\locationtypes\vegetationbroadleaf_ca.paa";
		color[]=
		{
			"ColorVegetation",
			1
		};
		showEditorMarkerColor=1;
		class AttributeValues
		{
			baseColor="ColorVegetation";
		};
	};
	class loc_VegetationFir: loc_VegetationBroadleaf
	{
		name="$STR_NAME_VEGF";
		icon="\A3\ui_f\data\map\locationtypes\vegetationfir_ca.paa";
		texture="\A3\ui_f\data\map\locationtypes\vegetationfir_ca.paa";
	};
	class loc_VegetationPalm: loc_VegetationBroadleaf
	{
		name="$STR_NAME_VEGP";
		icon="\A3\ui_f\data\map\locationtypes\VegetationPalm_ca.paa";
		texture="\A3\ui_f\data\map\locationtypes\VegetationPalm_ca.paa";
	};
	class loc_VegetationVineyard: loc_VegetationBroadleaf
	{
		size=16;
		name="$STR_NAME_VEGV";
		icon="\A3\ui_f\data\map\locationtypes\VegetationVineyard_ca.paa";
		texture="\A3\ui_f\data\map\locationtypes\VegetationVineyard_ca.paa";
	};
	class BehaviorAware
	{
		color[]={1,1,1,1};
		name="$STR_3DEN_Attributes_Behaviour_Aware_text";
		icon="\a3\ui_f_curator\data\rsccommon\rscattributebehaviour\aware_ca.paa";
		texture="\a3\ui_f_curator\data\rsccommon\rscattributebehaviour\aware_ca.paa";
		size=16;
		scope=2;
		shadow=0;
		markerClass="System";
		showEditorMarkerColor=1;
		class AttributeValues
		{
			size2[]={1.5,1.5};
		};
	};
	class BehaviorCombat: BehaviorAware
	{
		name="$STR_3DEN_Attributes_Behaviour_combat_text";
		icon="\a3\ui_f_curator\data\rsccommon\rscattributebehaviour\combat_ca.paa";
		texture="\a3\ui_f_curator\data\rsccommon\rscattributebehaviour\combat_ca.paa";
	};
	class BehaviorSafe: BehaviorAware
	{
		name="$STR_3DEN_Attributes_Behaviour_safe_text";
		icon="\a3\ui_f_curator\data\rsccommon\rscattributebehaviour\safe_ca.paa";
		texture="\a3\ui_f_curator\data\rsccommon\rscattributebehaviour\safe_ca.paa";
	};
	class BehaviorStealth: BehaviorAware
	{
		name="$STR_3DEN_Attributes_Behaviour_stealth_text";
		icon="\a3\ui_f_curator\data\rsccommon\rscattributebehaviour\stealth_ca.paa";
		texture="\a3\ui_f_curator\data\rsccommon\rscattributebehaviour\stealth_ca.paa";
	};
	class pushups
	{
		name="$STR_Globe_CfgMarkers_pushups0";
		icon="\a3\ui_f_curator\data\rsccommon\rscattributepunishmentanimation\pushups.paa";
		color[]={0,0,0,1};
		shadow=0;
		scope=2;
		size=19;
		markerClass="System";
	};
	class pushupslegs
	{
		name="$STR_Globe_CfgMarkers_pushupslegs0";
		icon="\a3\ui_f_curator\data\rsccommon\rscattributepunishmentanimation\pushupslegs.paa";
		color[]={0,0,0,1};
		shadow=0;
		scope=2;
		size=19;
		markerClass="System";
	};
	class waypointspeedmodelimited
	{
		name="$STR_Globe_CfgMarkers_waypointspeedmode0";
		icon="\a3\ui_f_curator\data\rsccommon\rscattributespeedmode\limited_ca.paa";
		color[]={0,0,0,1};
		shadow=0;
		scope=2;
		size=19;
		markerClass="System";
	};
	class waypointspeedmodenormal
	{
		name="$STR_Globe_CfgMarkers_waypointspeedmode1";
		icon="\a3\ui_f_curator\data\rsccommon\rscattributespeedmode\normal_ca.paa";
		color[]={0,0,0,1};
		shadow=0;
		scope=2;
		size=19;
		markerClass="System";
	};
	class waypointspeedmodefull
	{
		name="$STR_Globe_CfgMarkers_waypointspeedmode2";
		icon="\a3\ui_f_curator\data\rsccommon\rscattributespeedmode\full_ca.paa";
		color[]={0,0,0,1};
		shadow=0;
		scope=2;
		size=19;
		markerClass="System";
	};
	class loc_LaserTarget: loc_Tree
	{
		size=18;
		name="$STR_DN_laserTarget";
		icon="\a3\ui_f_curator\data\cfgcurator\laser_ca.paa";
		texture="\a3\ui_f_curator\data\cfgcurator\laser_ca.paa";
		color[]=
		{
			"ColorRed",
			1
		};
		showEditorMarkerColor=1;
		class AttributeValues
		{
			baseColor="ColorRed";
		};
	};
};
class CfgMarkerColors
{
	class Default;
	class ColorHBarrier: Default
	{
		name="$STR_Globe_CfgMarkerColors_Color0";
		color[]={0.30588236,0.28627452,0.26274511,1};
		scope=2;
	};
	class ColorHungar: Default
	{
		name="$STR_a3_cfgvehicles_land_hangar_f0";
		color[]={0.31764707,0.3019608,0.23529412,1};
		scope=2;
	};
	class ColorCargo: Default
	{
		name="$STR_a3_cfgvehicles_cargo10_base_f0";
		color[]={0.26666668,0.26666668,0.26274511,1};
		scope=2;
	};
	class ColorHighway: Default
	{
		name="$STR_Globe_CfgMarkerColors_Color1";
		color[]={1,0.60000002,0.40000001,1};
		scope=2;
	};
	class ColorMainCity: Default
	{
		name="$STR_Globe_CfgMarkerColors_Color2";
		color[]={1,1,1,1};
		scope=2;
	};
	class ColorDirtRural: Default
	{
		name="$STR_Globe_CfgMarkerColors_Color3";
		color[]={0.8392157,0.76078433,0.65098041,1};
		scope=2;
	};
	class ColorSlumBlue: Default
	{
		name="$STR_A3_CfgVehicles_Land_Cargo_Addon02_V1_F0";
		color[]={0.18039216,0.30980393,0.45490196,1};
		scope=2;
	};
	class ColorSlumBlack: Default
	{
		name="$STR_A3_CfgVehicles_Land_Cargo_Addon02_V2_F0";
		color[]={0.1882353,0.20784314,0.23529412,1};
		scope=2;
	};
	class ColorHedge: Default
	{
		name="$STR_Globe_CfgMarkerColors_Color4";
		color[]={0.26666668,0.40000001,0.12156863,1};
		scope=2;
	};
	class ColorTankRust: Default
	{
		name="$STR_a3_cfgvehicles_land_tank_rust_f0";
		color[]=
		{
			"61/255",
			"48/255",
			"34/255",
			1
		};
		scope=2;
	};
	class ColorWoodenPlankPine: Default
	{
		name="$STR_a3_cfgvehicles_land_woodenplanks_01_pine_f0";
		color[]=
		{
			"117/255",
			"100/255",
			"79/255",
			1
		};
		scope=2;
	};
	class ColorWoodenPlankKauri: Default
	{
		name="$STR_a3_land_woodenplanks_01_f0";
		color[]=
		{
			"117/255",
			"100/255",
			"79/255",
			1
		};
		scope=2;
	};
	class ColorWallCityOrIndustrial: Default
	{
		name="$STR_Globe_CfgMarkerColors_Color5";
		color[]=
		{
			"79/255",
			"77/255",
			"74/255",
			1
		};
		scope=2;
	};
	class ColorWallVillage: Default
	{
		name="$STR_Globe_CfgMarkerColors_Color6";
		color[]=
		{
			"91/255",
			"85/255",
			"82/255",
			1
		};
		scope=2;
	};
	class ColorShed: Default
	{
		name="$STR_a3_cfgvehicles_land_shed_08_grey_f0";
		color[]=
		{
			"96/255",
			"91/255",
			"85/255",
			1
		};
		scope=2;
	};
	class ColorShedTanoa: Default
	{
		name="$STR_a3_cfgvehicles_land_shed_08_brown_f0";
		color[]=
		{
			"71/255",
			"70/255",
			"68/255",
			1
		};
		scope=2;
	};
	class ColorNoAlpha
	{
		name="$STR_a3_missions_f_gamma_cfgidentities_rc_b_alpha_lead0";
		color[]={0,0,0,0};
		scope=2;
	};
	class ColorVegetation: Default
	{
		name="$STR_a3_to_hideterrainobjects8";
		color[]={0.25,0.40000001,0.2,1};
		scope=2;
	};
};
class RscInGameUI
{
	class RscUnitInfo;
	class RscOptics_LaserDesignatorGPS_01
	{
		idd=300;
		controls[]=
		{
			"CA_IGUI_elements_group"
		};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			idc=170;
			class VScrollbar: VScrollbar
			{
				width=0;
			};
			class HScrollbar: HScrollbar
			{
				height=0;
			};
			x="0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y="0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w="53.5 * 		(0.01875 * SafezoneH)";
			h="40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_OpticsZoom: RscText
				{
					idc=180;
					style=1;
					colorText[]={0.70599997,0.074500002,0.0196,1};
					sizeEx="0.038*SafezoneH";
					shadow=0;
					font="EtelkaMonospacePro";
					text="4.5";
					x="43.85 * 		(0.01875 * SafezoneH)";
					y="19.6 * 		(0.025 * SafezoneH)";
					w="4.5 * 		(0.01875 * SafezoneH)";
					h="1.1 * 		(0.025 * SafezoneH)";
				};
				class CA_Distance: RscText
				{
					idc=198;
					style=0;
					sizeEx="0.038*SafezoneH";
					colorText[]={0.70599997,0.074500002,0.0196,1};
					shadow=0;
					font="EtelkaMonospacePro";
					text="2456";
					x="24.5 * 		(0.01875 * SafezoneH)";
					y="3 * 		(0.025 * SafezoneH)";
					w="4 * 		(0.01875 * SafezoneH)";
					h="1.5 * 		(0.025 * SafezoneH)";
				};
				class CA_Elev: RscText
				{
					idc=175;
					style=1;
					sizeEx="0.038*SafezoneH";
					colorText[]={0.70599997,0.074500002,0.0196,1};
					shadow=0;
					font="EtelkaMonospacePro";
					text="80.5";
					x="32.7 * 		(0.01875 * SafezoneH)";
					y="3 * 		(0.025 * SafezoneH)";
					w="5 * 		(0.01875 * SafezoneH)";
					h="1.5 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					idc=179;
					style=0;
					sizeEx="0.038*SafezoneH";
					colorText[]={0.70599997,0.074500002,0.0196,1};
					shadow=0;
					font="EtelkaMonospacePro";
					text="VIS";
					x="6.5 * 		(0.01875 * SafezoneH)";
					y="19.6 * 		(0.025 * SafezoneH)";
					w="4 * 		(0.01875 * SafezoneH)";
					h="1.1 * 		(0.025 * SafezoneH)";
				};
				class CA_Laser: RscText
				{
					idc=158;
					style="0x30 + 0x800";
					sizeEx="0.038*SafezoneH";
					colorText[]={0.70599997,0.074500002,0.0196,1};
					shadow=0;
					font="EtelkaMonospacePro";
					text="\A3\ui_f\data\igui\rscingameui\rscoptics\laser_designator_iconLaserOn.paa";
					x="29.2 * 		(0.01875 * SafezoneH)";
					y="3 * 		(0.025 * SafezoneH)";
					w="3.5 * 		(0.01875 * SafezoneH)";
					h="1.5 * 		(0.025 * SafezoneH)";
				};
				class CA_Heading: RscText
				{
					idc=156;
					style=0;
					sizeEx="0.038*SafezoneH";
					colorText[]={0.70599997,0.074500002,0.0196,1};
					shadow=0;
					text="023";
					x="16.1 * 		(0.01875 * SafezoneH)";
					y="3 * 		(0.025 * SafezoneH)";
					w="3.5 * 		(0.01875 * SafezoneH)";
					h="1.6 * 		(0.025 * SafezoneH)";
				};
				class CA_GridTitle: RscText
				{
					idc=-1;
					style=2;
					sizeEx="0.038*SafezoneH";
					colorText[]={0,0,0,1};
					shadow=0;
					font="RobotoCondensedLight";
					text="GRID";
					x="14 * 		(0.01875 * SafezoneH)";
					y="34 * 		(0.025 * SafezoneH)";
					w="6 * 		(0.01875 * SafezoneH)";
					h="1.5 * 		(0.025 * SafezoneH)";
				};
				class CA_GridTGTTitle: RscText
				{
					idc=-1;
					style=2; 
					sizeEx="0.038*SafezoneH";
					colorText[]={0,0,0,1};
					shadow=0;
					font="RobotoCondensedLight";
					text="TGT GRID";
					x="22 * 		(0.01875 * SafezoneH)";
					y="34 * 		(0.025 * SafezoneH)";
					w="9.5 * 		(0.01875 * SafezoneH)";
					h="1.5 * 		(0.025 * SafezoneH)";
				};
				class CA_TimeTitle: RscText
				{
					idc=-1;
					style=2; 
					sizeEx="0.038*SafezoneH";
					colorText[]={0,0,0,1};
					shadow=0;
					font="RobotoCondensedLight";
					text="HHMMss";
					x="33.5 * 		(0.01875 * SafezoneH)";
					y="34 * 		(0.025 * SafezoneH)";
					w="6 * 		(0.01875 * SafezoneH)";
					h="1.5 * 		(0.025 * SafezoneH)";
				};
				class CA_ModeRNG: RscText
				{
					idc=-1;
					style=0;
					sizeEx="0.038*SafezoneH";
					colorText[]={0.70599997,0.074500002,0.0196,1};
					shadow=0;
					font="EtelkaMonospacePro";
					text="RNG [JTAC]";
					x="6.5 * 		(0.01875 * SafezoneH)";
					y="21 * 		(0.025 * SafezoneH)";
					w="11 * 		(0.01875 * SafezoneH)";
					h="1.5 * 		(0.025 * SafezoneH)";
				};
				class CA_Grid: RscText
				{
					idc=171;
					style=2;
					sizeEx="0.038*SafezoneH";
					colorText[]={0.70599997,0.074500002,0.0196,1};
					shadow=0;
					font="EtelkaMonospacePro";
					text="GRID";
					x="14 * 		(0.01875 * SafezoneH)";
					y="35.5 * 		(0.025 * SafezoneH)";
					w="6 * 		(0.01875 * SafezoneH)";
					h="1.5 * 		(0.025 * SafezoneH)";
				};
				class CA_GridTGT: RscText
				{
					idc=172;
					style=2;
					sizeEx="0.038*SafezoneH";
					colorText[]={0.70599997,0.074500002,0.0196,1};
					shadow=0;
					font="EtelkaMonospacePro";
					text="123456";
					x="22 * 		(0.01875 * SafezoneH)";
					y="35.5 * 		(0.025 * SafezoneH)";
					w="9.5 * 		(0.01875 * SafezoneH)";
					h="1.5 * 		(0.025 * SafezoneH)";
				};
				class CA_Time: RscText
				{
					idc=190;
					style=2; 
					sizeEx="0.038*SafezoneH";
					colorText[]={0.70599997,0.074500002,0.0196,1};
					shadow=0;
					font="EtelkaMonospacePro";
					text="HHMMss";
					x="33.5 * 		(0.01875 * SafezoneH)";
					y="35.5 * 		(0.025 * SafezoneH)";
					w="6 * 		(0.01875 * SafezoneH)";
					h="1.5 * 		(0.025 * SafezoneH)";
				};
			};
		};
	};
	class RscOptics_LaserDesignatorGPS_02
	{
		idd=300;
		controls[]=
		{
			"CA_IGUI_elements_group"
		};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			idc=170;
			class VScrollbar: VScrollbar
			{
				width=0;
			};
			class HScrollbar: HScrollbar
			{
				height=0;
			};
			x="0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y="0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w="53.5 * 		(0.01875 * SafezoneH)";
			h="40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_OpticsZoomText: RscText
				{
					colorText[]={0.70599997,0.074500002,0.0196,1};
					sizeEx="0.038*SafezoneH";
					shadow=0;
					font="EtelkaMonospacePro";
					idc=1007;
					text="ZOOM";
					x="5.5 * 		(0.01875 * SafezoneH)";
					y="14.5 * 		(0.025 * SafezoneH)";
					w="6 * 		(0.01875 * SafezoneH)";
					h="1.5 * 		(0.025 * SafezoneH)";
				};
				class CA_OpticsZoom: RscText
				{
					idc=180;
					style=0;
					colorText[]={0.70599997,0.074500002,0.0196,1};
					sizeEx="0.038*SafezoneH";
					shadow=0;
					font="EtelkaMonospacePro";
					text="4.5";
					x="5.5 * 		(0.01875 * SafezoneH)";
					y="16.15 * 		(0.025 * SafezoneH)";
					w="6 * 		(0.01875 * SafezoneH)";
					h="1.5 * 		(0.025 * SafezoneH)";
				};
				class CA_DistanceText: RscText
				{
					colorText[]={0.70599997,0.074500002,0.0196,1};
					sizeEx="0.038*SafezoneH";
					shadow=0;
					font="EtelkaMonospacePro";
					idc=1010;
					text="RNG";
					x="21.1 * 		(0.01875 * SafezoneH)";
					y="29.35 * 		(0.025 * SafezoneH)";
					w="4.5 * 		(0.01875 * SafezoneH)";
					h="1.5 * 		(0.025 * SafezoneH)";
				};
				class CA_Distance: RscText
				{
					idc=198;
					style=0;
					sizeEx="0.038*SafezoneH";
					colorText[]={0.70599997,0.074500002,0.0196,1};
					shadow=0;
					font="EtelkaMonospacePro";
					text="2456";
					x="24.7 * 		(0.01875 * SafezoneH)";
					y="29.35 * 		(0.025 * SafezoneH)";
					w="4 * 		(0.01875 * SafezoneH)";
					h="1.5 * 		(0.025 * SafezoneH)";
				};
				class CA_DistanceTextM: RscText
				{
					colorText[]={0.70599997,0.074500002,0.0196,1};
					sizeEx="0.038*SafezoneH";
					shadow=0;
					font="EtelkaMonospacePro";
					idc=1011;
					text="M";
					x="29.2 * 		(0.01875 * SafezoneH)";
					y="29.35 * 		(0.025 * SafezoneH)";
					w="2 * 		(0.01875 * SafezoneH)";
					h="1.5 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionModeText: RscText
				{
					colorText[]={0.70599997,0.074500002,0.0196,1};
					sizeEx="0.038*SafezoneH";
					shadow=0;
					font="EtelkaMonospacePro";
					idc=1008;
					text="MODE";
					x="5.5 * 		(0.01875 * SafezoneH)";
					y="20.9 * 		(0.025 * SafezoneH)";
					w="6 * 		(0.01875 * SafezoneH)";
					h="1.5 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					idc=179;
					style=0;
					sizeEx="0.038*SafezoneH";
					colorText[]={0.70599997,0.074500002,0.0196,1};
					shadow=0;
					font="EtelkaMonospacePro";
					text="VIS";
					x="5.0 * 		(0.01875 * SafezoneH)";
					y="22.5 * 		(0.025 * SafezoneH)";
					w="6 * 		(0.01875 * SafezoneH)";
					h="1.5 * 		(0.025 * SafezoneH)";
				};
				class CA_HeadingText: RscText
				{
					colorText[]={0.70599997,0.074500002,0.0196,1};
					sizeEx="0.038*SafezoneH";
					shadow=0;
					font="EtelkaMonospacePro";
					idc=1009;
					text="AZT";
					x="43.4 * 		(0.01875 * SafezoneH)";
					y="14.5 * 		(0.025 * SafezoneH)";
					w="6 * 		(0.01875 * SafezoneH)";
					h="1.5 * 		(0.025 * SafezoneH)";
				};
				class CA_Heading: RscText
				{
					idc=156;
					style=0;
					sizeEx="0.038*SafezoneH";
					colorText[]={0.70599997,0.074500002,0.0196,1};
					shadow=0;
					font="EtelkaMonospacePro";
					text="023";
					x="43.4 * 		(0.01875 * SafezoneH)";
					y="16.15 * 		(0.025 * SafezoneH)";
					w="6 * 		(0.01875 * SafezoneH)";
					h="1.5 * 		(0.025 * SafezoneH)";
				};
				class TextElev: RscText
				{
					sizeEx="0.038*SafezoneH";
					colorText[]={0.70599997,0.074500002,0.0196,1};
					shadow=0;
					font="EtelkaMonospacePro";
					idc=1005;
					text="ELE";
					x="43.4 * 		(0.01875 * SafezoneH)";
					y="20.9 * 		(0.025 * SafezoneH)";
					w="6 * 		(0.01875 * SafezoneH)";
					h="1.5 * 		(0.025 * SafezoneH)";
				};
				class CA_Elev: RscText
				{
					idc=175;
					sizeEx="0.038*SafezoneH";
					colorText[]={0.70599997,0.074500002,0.0196,1};
					shadow=0;
					font="EtelkaMonospacePro";
					text="80.5";
					x="42.8 * 		(0.01875 * SafezoneH)";
					y="22.5 * 		(0.025 * SafezoneH)";
					w="6 * 		(0.01875 * SafezoneH)";
					h="1.5 * 		(0.025 * SafezoneH)";
				};
				class CA_Laser: RscText
				{
					idc=158;
					style="0x30 + 0x800";
					sizeEx="0.038*SafezoneH";
					colorText[]={0.70599997,0.074500002,0.0196,1};
					shadow=0;
					font="EtelkaMonospacePro";
					text="\A3\ui_f\data\igui\rscingameui\rscoptics\laser_designator_iconLaserOn.paa";
					x="24.8 * 		(0.01875 * SafezoneH)";
					y="10 * 		(0.025 * SafezoneH)";
					w="3.5 * 		(0.01875 * SafezoneH)";
					h="1.5 * 		(0.025 * SafezoneH)";
				};
				class CA_GPSMode: RscText
				{
					idc=0;
					style=0;
					sizeEx="0.038*SafezoneH";
					colorText[]={0.70599997,0.074500002,0.0196,1};
					shadow=0;
					font="EtelkaMonospacePro";
					text="GPS";
					x="7.5 * 		(0.01875 * SafezoneH)";
					y="22.5 * 		(0.025 * SafezoneH)";
					w="6 * 		(0.01875 * SafezoneH)";
					h="1.5 * 		(0.025 * SafezoneH)";
				};
				class CA_GPSModeTGTGrid: RscText
				{
					idc=172;
					style=0;
					colorText[]={0.70599997,0.074500002,0.0196,1};
					sizeEx="0.027*SafezoneH";
					shadow=0;
					font="EtelkaMonospacePro";
					text="1234";
					x="24.8 * 		(0.01875 * SafezoneH)";
					y="8 * 		(0.025 * SafezoneH)";
					w="3.5 * 		(0.01875 * SafezoneH)";
					h="1.5 * 		(0.025 * SafezoneH)";
				};
				class CA_GPSModeGrid: RscText
				{
					idc=171;
					style=0;
					colorText[]={0.70599997,0.074500002,0.0196,1};
					sizeEx="0.038*SafezoneW";
					shadow=0;
					font="EtelkaMonospacePro";
					text="4321";
					x="5.5 * 		(0.01875 * SafezoneH)";
					y="24.5 * 		(0.025 * SafezoneH)";
					w="6 * 		(0.01875 * SafezoneH)";
					h="1.5 * 		(0.025 * SafezoneH)";
				};
			};
		};
	};
	class RscOpticsRangeFinderRPG32A1: RscUnitInfo
	{
		idd=300;
		controls[]=
		{
			"CA_IGUI_elements_group"
		};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			idc=170;
			class VScrollbar: VScrollbar
			{
				width=0;
			};
			class HScrollbar: HScrollbar
			{
				height=0;
			};
			x="0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y="0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w="53.5 * 		(0.01875 * SafezoneH)";
			h="40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_Distance: RscText
				{
					idc=198;
					style=2;
					sizeEx="0.038*SafezoneH";
					colorText[]={0.70599997,0.074500002,0.0196,1};
					shadow=0;
					font="PuristaBold";
					x="16.6 * 		(0.01875 * SafezoneH)";
					y="19	 *(0.025 * SafezoneH)";
					w="4 * 		(0.01875 * SafezoneH)";
					h="1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_DistanceFinder: RscText
				{
					idc=0;
					style=0;
					sizeEx="0.038*SafezoneH";
					colorText[]={0.0058749998,0.0042500002,0.0017,1};
					shadow=0;
					font="PuristaBold";
					text="ДАЛЬНОМЕР";
					x="17.5 * 		(0.01875 * SafezoneH)";
					y="20.12	 *(0.025 * SafezoneH)";
					w="4 * 		(0.01875 * SafezoneH)";
					h="1.2 * 		(0.025 * SafezoneH)";
				};
			};
		};
	};
	class RscOptics_LaserDesignatorCTRG
	{
		idd=300;
		controls[]=
		{
			"CA_IGUI_elements_group"
		};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			idc=170;
			class VScrollbar: VScrollbar
			{
				width=0;
			};
			class HScrollbar: HScrollbar
			{
				height=0;
			};
			x="0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y="0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w="53.5 * 		(0.01875 * SafezoneH)";
			h="40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_Laser: RscText
				{
					idc=0;
					style=0;
					sizeEx="0.038*SafezoneH";
					shadow=0;
					font="EtelkaMonospacePro";
					text="LASER";
					x="29 * 		(0.01875 * SafezoneH)";
					y="3 * 		(0.025 * SafezoneH)";
					w="4 * 		(0.01875 * SafezoneH)";
					h="1.5 * 		(0.025 * SafezoneH)";
					colorBackground[]={0,0,0,1};
				};
				class CA_LaserText: RscText
				{
					idc=158;
					style=0;
					sizeEx="0.038*SafezoneH";
					shadow=0;
					font="EtelkaMonospacePro";
					text="ON";
					x="33 * 		(0.01875 * SafezoneH)";
					y="3 * 		(0.025 * SafezoneH)";
					w="4 * 		(0.01875 * SafezoneH)";
					h="1.5 * 		(0.025 * SafezoneH)";
					colorBackground[]={0,0,0,1};
				};
				class CA_OpticsZoom: RscText
				{
					idc=0;
					style=0;
					sizeEx="0.038*SafezoneH";
					shadow=0;
					font="EtelkaMonospacePro";
					text="ZOOM";
					x="21 * 		(0.01875 * SafezoneH)";
					y="3 * 		(0.025 * SafezoneH)";
					w="4 * 		(0.01875 * SafezoneH)";
					h="1.5 * 		(0.025 * SafezoneH)";
					colorBackground[]={0,0,0,1};
				};
				class CA_OpticsZoomText: RscText
				{
					idc=180;
					style=1;
					sizeEx="0.038*SafezoneH";
					shadow=0;
					font="EtelkaMonospacePro";
					text="4.5";
					x="24 * 		(0.01875 * SafezoneH)";
					y="3 * 		(0.025 * SafezoneH)";
					w="4 * 		(0.01875 * SafezoneH)";
					h="1.5 * 		(0.025 * SafezoneH)";
					colorBackground[]={0,0,0,1};
				};
				class CA_Distance: RscText
				{
					idc=0;
					style=0;
					sizeEx="0.038*SafezoneH";
					shadow=0;
					font="EtelkaMonospacePro";
					text="DIST";
					x="14.7 * 		(0.01875 * SafezoneH)";
					y="36 * 		(0.025 * SafezoneH)";
					w="5 * 		(0.01875 * SafezoneH)";
					h="1.5 * 		(0.025 * SafezoneH)";
					colorBackground[]={0,0,0,1};
				};
				class CA_DistanceText: RscText
				{
					idc=198;
					style=0;
					sizeEx="0.038*SafezoneH";
					shadow=0;
					font="EtelkaMonospacePro";
					text="2456";
					x="19 * 		(0.01875 * SafezoneH)";
					y="36 * 		(0.025 * SafezoneH)";
					w="5 * 		(0.01875 * SafezoneH)";
					h="1.5 * 		(0.025 * SafezoneH)";
					colorBackground[]={0,0,0,1};
				};
				class CA_Elev: RscText
				{
					idc=0;
					style=0;
					sizeEx="0.038*SafezoneH";
					shadow=0;
					font="EtelkaMonospacePro";
					text="ELEV";
					x="38 * 		(0.01875 * SafezoneH)";
					y="3 * 		(0.025 * SafezoneH)";
					w="5 * 		(0.01875 * SafezoneH)";
					h="1.5 * 		(0.025 * SafezoneH)";
					colorBackground[]={0,0,0,1};
				};
				class CA_ElevText: RscText
				{
					idc=175;
					style=1;
					sizeEx="0.038*SafezoneH";
					shadow=0;
					font="EtelkaMonospacePro";
					text="80.5";
					x="43 * 		(0.01875 * SafezoneH)";
					y="3 * 		(0.025 * SafezoneH)";
					w="5 * 		(0.01875 * SafezoneH)";
					h="1.5 * 		(0.025 * SafezoneH)";
					colorBackground[]={0,0,0,1};
				};
				class CA_VisionMode: RscText
				{
					idc=0;
					style=0;
					sizeEx="0.038*SafezoneH";
					shadow=0;
					font="EtelkaMonospacePro";
					text="MODE";
					x="6.5 * 		(0.01875 * SafezoneH)";
					y="36 * 		(0.025 * SafezoneH)";
					w="5 * 		(0.01875 * SafezoneH)";
					h="1.5 * 		(0.025 * SafezoneH)";
					colorBackground[]={0,0,0,1};
				};
				class CA_VisionModeText: RscText
				{
					idc=179;
					style=0;
					sizeEx="0.038*SafezoneH";
					shadow=0;
					font="EtelkaMonospacePro";
					text="VIS";
					x="9.7 * 		(0.01875 * SafezoneH)";
					y="36 * 		(0.025 * SafezoneH)";
					w="5 * 		(0.01875 * SafezoneH)";
					h="1.5 * 		(0.025 * SafezoneH)";
					colorBackground[]={0,0,0,1};
				};
				class CA_Heading: RscText
				{
					idc=1009;
					style=0;
					sizeEx="0.038*SafezoneH";
					shadow=0;
					font="EtelkaMonospacePro";
					text="AZT";
					x="24 * 		(0.01875 * SafezoneH)";
					y="36 * 		(0.025 * SafezoneH)";
					w="4 * 		(0.01875 * SafezoneH)";
					h="1.5 * 		(0.025 * SafezoneH)";
					colorBackground[]={0,0,0,1};
				};
				class CA_HeadingText: RscText
				{
					idc=156;
					style=0;
					sizeEx="0.038*SafezoneH";
					shadow=0;
					font="EtelkaMonospacePro";
					text="023";
					x="26.5 * 		(0.01875 * SafezoneH)";
					y="36 * 		(0.025 * SafezoneH)";
					w="5 * 		(0.01875 * SafezoneH)";
					h="1.5 * 		(0.025 * SafezoneH)";
					colorBackground[]={0,0,0,1};
				};
				class CA_TGT: RscText
				{
					idc=0;
					style=0;
					sizeEx="0.038*SafezoneH";
					shadow=0;
					font="EtelkaMonospacePro";
					text="TGT";
					x="38 * 		(0.01875 * SafezoneH)";
					y="36 * 		(0.025 * SafezoneH)";
					w="5 * 		(0.01875 * SafezoneH)";
					h="1.5 * 		(0.025 * SafezoneH)";
					colorBackground[]={0,0,0,1};
				};
				class CA_TGT_text: RscText
				{
					idc=172;
					style=1;
					sizeEx="0.038*SafezoneH";
					shadow=0;
					font="EtelkaMonospacePro";
					text="XXXX";
					x="40.5 * 		(0.01875 * SafezoneH)";
					y="36 * 		(0.025 * SafezoneH)";
					w="5 * 		(0.01875 * SafezoneH)";
					h="1.5 * 		(0.025 * SafezoneH)";
					colorBackground[]={0,0,0,1};
				};
				class CA_GRID: RscText
				{
					idc=0;
					style=0;
					sizeEx="0.038*SafezoneH";
					shadow=0;
					font="EtelkaMonospacePro";
					text="GRID";
					x="12.4 * 		(0.01875 * SafezoneH)";
					y="3 * 		(0.025 * SafezoneH)";
					w="5 * 		(0.01875 * SafezoneH)";
					h="1.5 * 		(0.025 * SafezoneH)";
					colorBackground[]={0,0,0,1};
				};
				class CA_GRID_text: RscText
				{
					idc=171;
					style=1;
					sizeEx="0.038*SafezoneH";
					shadow=0;
					font="EtelkaMonospacePro";
					text="XXXX   ";
					x="15.5 * 		(0.01875 * SafezoneH)";
					y="3 * 		(0.025 * SafezoneH)";
					w="5 * 		(0.01875 * SafezoneH)";
					h="1.5 * 		(0.025 * SafezoneH)";
					colorBackground[]={0,0,0,1};
				};
			};
		};
	};
	class RscOptics_tws_sniper_G: RscUnitInfo
	{
		idd=300;
		controls[]=
		{
			"CA_IGUI_elements_group",
			"CA_WFOV_mode_group",
			"CA_NFOV_mode_group"
		};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			idc=170;
			class VScrollbar: VScrollbar
			{
				width=0;
			};
			class HScrollbar: HScrollbar
			{
				height=0;
			};
			x="0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y="0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w="53.5 * 		(0.01875 * SafezoneH)";
			h="40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_Distance: RscText
				{
					idc=198;
					style=0;
					sizeEx="0.036*SafezoneH";
					shadow=0;
					font="EtelkaMonospacePro";
					text="- - - -";
					x="24.9 * 		(0.01875 * SafezoneH)";
					y="33.2 * 		(0.025 * SafezoneH)";
					w="3.6 * 		(0.01875 * SafezoneH)";
					h="1.3 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					idc=152;
					style=0;
					sizeEx="0.028*SafezoneH";
					shadow=0;
					font="EtelkaMonospacePro";
					text="FLIR";
					x="8.8 * 		(0.01875 * SafezoneH)";
					y="18.7 * 		(0.025 * SafezoneH)";
					w="3.5 * 		(0.01875 * SafezoneH)";
					h="1 * 		(0.025 * SafezoneH)";
				};
				class CA_FlirMode: RscText
				{
					idc=153;
					style=0;
					sizeEx="0.028*SafezoneH";
					shadow=0;
					font="EtelkaMonospacePro";
					text="BHOT";
					x="11.8 * 		(0.01875 * SafezoneH)";
					y="18.7 * 		(0.025 * SafezoneH)";
					w="4.5 * 		(0.01875 * SafezoneH)";
					h="1 * 		(0.025 * SafezoneH)";
				};
			};
		};
		class CA_NFOV_mode_group: RscControlsGroup
		{
			idc=162;
			class VScrollbar: VScrollbar
			{
				width=0;
			};
			class HScrollbar: HScrollbar
			{
				height=0;
			};
			x="0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y="0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w="53.5 * 		(0.01875 * SafezoneH)";
			h="40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_FOVModeNFOV: RscText
				{
					style=1;
					sizeEx="0.028*SafezoneH";
					shadow=0;
					font="EtelkaMonospacePro";
					idc=1002;
					text="NFOV";
					x="41.7 * 		(0.01875 * SafezoneH)";
					y="18.7 * 		(0.025 * SafezoneH)";
					w="3 * 		(0.01875 * SafezoneH)";
					h="1 * 		(0.025 * SafezoneH)";
				};
			};
		};
		class CA_WFOV_mode_group: RscControlsGroup
		{
			idc=163;
			class VScrollbar: VScrollbar
			{
				width=0;
			};
			class HScrollbar: HScrollbar
			{
				height=0;
			};
			x="0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y="0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w="53.5 * 		(0.01875 * SafezoneH)";
			h="40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_FOVModeWFOV: RscText
				{
					style=1;
					sizeEx="0.028*SafezoneH";
					shadow=0;
					font="EtelkaMonospacePro";
					idc=1001;
					text="WFOV";
					x="41.7 * 		(0.01875 * SafezoneH)";
					y="18.7 * 		(0.025 * SafezoneH)";
					w="3 * 		(0.01875 * SafezoneH)";
					h="1 * 		(0.025 * SafezoneH)";
				};
				class CA_BracketNFOV: RscText
				{
					style="0x30 + 0x800";
					sizeEx="0.028*SafezoneH";
					shadow=0;
					font="EtelkaMonospacePro";
					idc=1005;
					text="A3\weapons_f\acc\Data\reticle_tws_bracket_ca.paa";
					x="17.75 * 		(0.01875 * SafezoneH)";
					y="11 * 		(0.025 * SafezoneH)";
					w="18 * 		(0.01875 * SafezoneH)";
					h="18 * 		(0.025 * SafezoneH)";
				};
			};
		};
	};
};
class CfgUnitInsignia
{
	class Patch_Globe_01
	{
		author="O&T Expansion Eden";
		displayName="$STR_expEden_Desk_Globe";
		texture="\A3\UI_F_Globe\Data\CfgUnitInsignia\globe_ca.paa";
		material="\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
	class Patch_HygieiaBowl_01
	{
		author="O&T Expansion Eden";
		displayName="$STR_Globe_CfgUnitInsignia_Patch_HygieiaBowl_010";
		texture="\A3\Characters_F_Orange\Uniforms\Data\C_Paramedic_01_logo_co.paa";
		material="\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
};
class CfgMarkerClasses
{
	class Waypoints
	{
		displayName="$STR_3DEN_Waypoint_textPlural";
	};
};
class CfgVehicleIcons
{
	iconObject_triangle="\A3\UI_F_Globe\Data\Map\VehicleIcons\iconObject_triangle_ca.paa";
	iconObject_diamond="\A3\UI_F_Globe\Data\Map\VehicleIcons\iconObject_diamond_ca.paa";
};
class RscTitles
{
	class RscMS_globe0
	{
		idd=-1;
		movingEnable=1;
		duration=9.9999998e+010;
		fadein=0;
		fadeout=0;
		onload="uinamespace setvariable ['Globe_RscMS0',_this select 0];";
		class controls
		{
			class Picture_0: RscPicture
			{
				idc=65100;
				text="";
				x="safezoneX";
				y="safezoneY";
				w="safezoneW";
				h="safezoneH";
				autoplay=1;
				loops=1;
			};
			class Picture_1: Picture_0
			{
				idc=65101;
			};
			class Picture_2: Picture_0
			{
				idc=65102;
			};
			class Picture_3: Picture_0
			{
				idc=65103;
			};
			class Picture_4: Picture_0
			{
				idc=65104;
			};
			class Picture_5: Picture_0
			{
				idc=65105;
			};
			class Picture_6: Picture_0
			{
				idc=65106;
			};
			class Picture_7: Picture_0
			{
				idc=65107;
			};
			class Picture_8: Picture_0
			{
				idc=65108;
			};
			class Picture_9: Picture_0
			{
				idc=65109;
			};
			class Picture_10: Picture_0
			{
				idc=65110;
			};
			class Picture_11: Picture_0
			{
				idc=65111;
			};
			class Picture_12: Picture_0
			{
				idc=65112;
			};
			class Picture_13: Picture_0
			{
				idc=65113;
			};
			class Picture_14: Picture_0
			{
				idc=65114;
			};
			class Picture_15: Picture_0
			{
				idc=65115;
			};
			class Picture_16: Picture_0
			{
				idc=65116;
			};
			class Picture_17: Picture_0
			{
				idc=65117;
			};
			class Picture_18: Picture_0
			{
				idc=65118;
			};
			class Picture_19: Picture_0
			{
				idc=65119;
			};
			class Picture_20: Picture_0
			{
				idc=65120;
			};
			class Picture_21: Picture_0
			{
				idc=65121;
			};
			class Picture_22: Picture_0
			{
				idc=65122;
			};
			class Picture_23: Picture_0
			{
				idc=65123;
			};
			class Picture_24: Picture_0
			{
				idc=65124;
			};
			class Picture_25: Picture_0
			{
				idc=65125;
			};
			class Picture_26: Picture_0
			{
				idc=65126;
			};
			class Picture_27: Picture_0
			{
				idc=65127;
			};
			class Picture_28: Picture_0
			{
				idc=65128;
			};
			class Picture_29: Picture_0
			{
				idc=65129;
			};
			class Picture_30: Picture_0
			{
				idc=65130;
			};
			class Picture_31: Picture_0
			{
				idc=65131;
			};
			class Picture_32: Picture_0
			{
				idc=65132;
			};
			class Picture_33: Picture_0
			{
				idc=65133;
			};
			class Picture_34: Picture_0
			{
				idc=65134;
			};
			class Picture_35: Picture_0
			{
				idc=65135;
			};
			class Picture_36: Picture_0
			{
				idc=65136;
			};
			class Picture_37: Picture_0
			{
				idc=65137;
			};
			class Picture_38: Picture_0
			{
				idc=65138;
			};
			class Picture_39: Picture_0
			{
				idc=65139;
			};
			class Picture_40: Picture_0
			{
				idc=65140;
			};
			class Picture_41: Picture_0
			{
				idc=65141;
			};
			class Picture_42: Picture_0
			{
				idc=65142;
			};
			class Picture_43: Picture_0
			{
				idc=65143;
			};
			class Picture_44: Picture_0
			{
				idc=65144;
			};
			class Picture_45: Picture_0
			{
				idc=65145;
			};
			class Picture_46: Picture_0
			{
				idc=65146;
			};
			class Picture_47: Picture_0
			{
				idc=65147;
			};
			class Picture_48: Picture_0
			{
				idc=65148;
			};
			class Picture_49: Picture_0
			{
				idc=65149;
			};
			class Picture_50: Picture_0
			{
				idc=65150;
			};
			class PictureShadow_0: Picture_0
			{
				idc=65200;
				shadow=2;
			};
			class PictureShadow_1: PictureShadow_0
			{
				idc=65201;
			};
			class PictureShadow_2: PictureShadow_0
			{
				idc=65202;
			};
			class PictureShadow_3: PictureShadow_0
			{
				idc=65203;
			};
			class PictureShadow_4: PictureShadow_0
			{
				idc=65204;
			};
			class PictureShadow_5: PictureShadow_0
			{
				idc=65205;
			};
			class PictureShadow_6: PictureShadow_0
			{
				idc=65206;
			};
			class PictureShadow_7: PictureShadow_0
			{
				idc=65207;
			};
			class PictureShadow_8: PictureShadow_0
			{
				idc=65208;
			};
			class PictureShadow_9: PictureShadow_0
			{
				idc=65209;
			};
			class Text_0: RscStructuredText
			{
				idc=65300;
				text="";
				x="safezoneX";
				y="safezoneY";
				w="safezoneW";
				h="safezoneH";
			};
			class Text_1: Text_0
			{
				idc=65301;
			};
			class Text_2: Text_0
			{
				idc=65302;
			};
			class Text_3: Text_0
			{
				idc=65303;
			};
			class Text_4: Text_0
			{
				idc=65304;
			};
			class Text_5: Text_0
			{
				idc=65305;
			};
			class Text_6: Text_0
			{
				idc=65306;
			};
			class Text_7: Text_0
			{
				idc=65307;
			};
			class Text_8: Text_0
			{
				idc=65308;
			};
			class Text_9: Text_0
			{
				idc=65309;
			};
		};
	};
	class RscMS_globe1: RscMS_globe0
	{
		onload="uinamespace setvariable ['Globe_RscMS1',_this select 0];";
		class controls: controls
		{
			class Picture_0: Picture_0
			{
				idc=95100;
			};
			class Picture_1: Picture_0
			{
				idc=95101;
			};
			class Picture_2: Picture_0
			{
				idc=95102;
			};
			class Picture_3: Picture_0
			{
				idc=95103;
			};
			class Picture_4: Picture_0
			{
				idc=95104;
			};
			class Picture_5: Picture_0
			{
				idc=95105;
			};
			class Picture_6: Picture_0
			{
				idc=95106;
			};
			class Picture_7: Picture_0
			{
				idc=95107;
			};
			class Picture_8: Picture_0
			{
				idc=95108;
			};
			class Picture_9: Picture_0
			{
				idc=95109;
			};
			class Picture_10: Picture_0
			{
				idc=95110;
			};
			class Picture_11: Picture_0
			{
				idc=95111;
			};
			class Picture_12: Picture_0
			{
				idc=95112;
			};
			class Picture_13: Picture_0
			{
				idc=95113;
			};
			class Picture_14: Picture_0
			{
				idc=95114;
			};
			class Picture_15: Picture_0
			{
				idc=95115;
			};
			class Picture_16: Picture_0
			{
				idc=95116;
			};
			class Picture_17: Picture_0
			{
				idc=95117;
			};
			class Picture_18: Picture_0
			{
				idc=95118;
			};
			class Picture_19: Picture_0
			{
				idc=95119;
			};
			class Picture_20: Picture_0
			{
				idc=95120;
			};
			class Picture_21: Picture_0
			{
				idc=95121;
			};
			class Picture_22: Picture_0
			{
				idc=95122;
			};
			class Picture_23: Picture_0
			{
				idc=95123;
			};
			class Picture_24: Picture_0
			{
				idc=95124;
			};
			class Picture_25: Picture_0
			{
				idc=95125;
			};
			class Picture_26: Picture_0
			{
				idc=95126;
			};
			class Picture_27: Picture_0
			{
				idc=95127;
			};
			class Picture_28: Picture_0
			{
				idc=95128;
			};
			class Picture_29: Picture_0
			{
				idc=95129;
			};
			class Picture_30: Picture_0
			{
				idc=95130;
			};
			class Picture_31: Picture_0
			{
				idc=95131;
			};
			class Picture_32: Picture_0
			{
				idc=95132;
			};
			class Picture_33: Picture_0
			{
				idc=95133;
			};
			class Picture_34: Picture_0
			{
				idc=95134;
			};
			class Picture_35: Picture_0
			{
				idc=95135;
			};
			class Picture_36: Picture_0
			{
				idc=95136;
			};
			class Picture_37: Picture_0
			{
				idc=95137;
			};
			class Picture_38: Picture_0
			{
				idc=95138;
			};
			class Picture_39: Picture_0
			{
				idc=95139;
			};
			class Picture_40: Picture_0
			{
				idc=95140;
			};
			class Picture_41: Picture_0
			{
				idc=95141;
			};
			class Picture_42: Picture_0
			{
				idc=95142;
			};
			class Picture_43: Picture_0
			{
				idc=95143;
			};
			class Picture_44: Picture_0
			{
				idc=95144;
			};
			class Picture_45: Picture_0
			{
				idc=95145;
			};
			class Picture_46: Picture_0
			{
				idc=95146;
			};
			class Picture_47: Picture_0
			{
				idc=95147;
			};
			class Picture_48: Picture_0
			{
				idc=95148;
			};
			class Picture_49: Picture_0
			{
				idc=95149;
			};
			class Picture_50: Picture_0
			{
				idc=95150;
			};
			class PictureShadow_0: Picture_0
			{
				idc=95200;
			};
			class PictureShadow_1: PictureShadow_0
			{
				idc=95201;
			};
			class PictureShadow_2: PictureShadow_0
			{
				idc=95202;
			};
			class PictureShadow_3: PictureShadow_0
			{
				idc=95203;
			};
			class PictureShadow_4: PictureShadow_0
			{
				idc=95204;
			};
			class PictureShadow_5: PictureShadow_0
			{
				idc=95205;
			};
			class PictureShadow_6: PictureShadow_0
			{
				idc=95206;
			};
			class PictureShadow_7: PictureShadow_0
			{
				idc=95207;
			};
			class PictureShadow_8: PictureShadow_0
			{
				idc=95208;
			};
			class PictureShadow_9: PictureShadow_0
			{
				idc=95209;
			};
			class Text_0: Text_0
			{
				idc=95300;
			};
			class Text_1: Text_0
			{
				idc=95301;
			};
			class Text_2: Text_0
			{
				idc=95302;
			};
			class Text_3: Text_0
			{
				idc=95303;
			};
			class Text_4: Text_0
			{
				idc=95304;
			};
			class Text_5: Text_0
			{
				idc=95305;
			};
			class Text_6: Text_0
			{
				idc=95306;
			};
			class Text_7: Text_0
			{
				idc=95307;
			};
			class Text_8: Text_0
			{
				idc=95308;
			};
			class Text_9: Text_0
			{
				idc=95309;
			};
		};
	};
	class RscMS_globe2: RscMS_globe0
	{
		onload="uinamespace setvariable ['Globe_RscMS2',_this select 0];";
		class controls: controls
		{
			class Picture_0: Picture_0
			{
				idc=125100;
			};
			class Picture_1: Picture_0
			{
				idc=125101;
			};
			class Picture_2: Picture_0
			{
				idc=125102;
			};
			class Picture_3: Picture_0
			{
				idc=125103;
			};
			class Picture_4: Picture_0
			{
				idc=125104;
			};
			class Picture_5: Picture_0
			{
				idc=125105;
			};
			class Picture_6: Picture_0
			{
				idc=125106;
			};
			class Picture_7: Picture_0
			{
				idc=125107;
			};
			class Picture_8: Picture_0
			{
				idc=125108;
			};
			class Picture_9: Picture_0
			{
				idc=125109;
			};
			class Picture_10: Picture_0
			{
				idc=125110;
			};
			class Picture_11: Picture_0
			{
				idc=125111;
			};
			class Picture_12: Picture_0
			{
				idc=125112;
			};
			class Picture_13: Picture_0
			{
				idc=125113;
			};
			class Picture_14: Picture_0
			{
				idc=125114;
			};
			class Picture_15: Picture_0
			{
				idc=125115;
			};
			class Picture_16: Picture_0
			{
				idc=125116;
			};
			class Picture_17: Picture_0
			{
				idc=125117;
			};
			class Picture_18: Picture_0
			{
				idc=125118;
			};
			class Picture_19: Picture_0
			{
				idc=125119;
			};
			class Picture_20: Picture_0
			{
				idc=125120;
			};
			class Picture_21: Picture_0
			{
				idc=125121;
			};
			class Picture_22: Picture_0
			{
				idc=125122;
			};
			class Picture_23: Picture_0
			{
				idc=125123;
			};
			class Picture_24: Picture_0
			{
				idc=125124;
			};
			class Picture_25: Picture_0
			{
				idc=125125;
			};
			class Picture_26: Picture_0
			{
				idc=125126;
			};
			class Picture_27: Picture_0
			{
				idc=125127;
			};
			class Picture_28: Picture_0
			{
				idc=125128;
			};
			class Picture_29: Picture_0
			{
				idc=125129;
			};
			class Picture_30: Picture_0
			{
				idc=125130;
			};
			class Picture_31: Picture_0
			{
				idc=125131;
			};
			class Picture_32: Picture_0
			{
				idc=125132;
			};
			class Picture_33: Picture_0
			{
				idc=125133;
			};
			class Picture_34: Picture_0
			{
				idc=125134;
			};
			class Picture_35: Picture_0
			{
				idc=125135;
			};
			class Picture_36: Picture_0
			{
				idc=125136;
			};
			class Picture_37: Picture_0
			{
				idc=125137;
			};
			class Picture_38: Picture_0
			{
				idc=125138;
			};
			class Picture_39: Picture_0
			{
				idc=125139;
			};
			class Picture_40: Picture_0
			{
				idc=125140;
			};
			class Picture_41: Picture_0
			{
				idc=125141;
			};
			class Picture_42: Picture_0
			{
				idc=125142;
			};
			class Picture_43: Picture_0
			{
				idc=125143;
			};
			class Picture_44: Picture_0
			{
				idc=125144;
			};
			class Picture_45: Picture_0
			{
				idc=125145;
			};
			class Picture_46: Picture_0
			{
				idc=125146;
			};
			class Picture_47: Picture_0
			{
				idc=125147;
			};
			class Picture_48: Picture_0
			{
				idc=125148;
			};
			class Picture_49: Picture_0
			{
				idc=125149;
			};
			class Picture_50: Picture_0
			{
				idc=125150;
			};
			class PictureShadow_0: Picture_0
			{
				idc=125200;
			};
			class PictureShadow_1: PictureShadow_0
			{
				idc=125201;
			};
			class PictureShadow_2: PictureShadow_0
			{
				idc=125202;
			};
			class PictureShadow_3: PictureShadow_0
			{
				idc=125203;
			};
			class PictureShadow_4: PictureShadow_0
			{
				idc=125204;
			};
			class PictureShadow_5: PictureShadow_0
			{
				idc=125205;
			};
			class PictureShadow_6: PictureShadow_0
			{
				idc=125206;
			};
			class PictureShadow_7: PictureShadow_0
			{
				idc=125207;
			};
			class PictureShadow_8: PictureShadow_0
			{
				idc=125208;
			};
			class PictureShadow_9: PictureShadow_0
			{
				idc=125209;
			};
			class Text_0: Text_0
			{
				idc=125300;
			};
			class Text_1: Text_0
			{
				idc=125301;
			};
			class Text_2: Text_0
			{
				idc=125302;
			};
			class Text_3: Text_0
			{
				idc=125303;
			};
			class Text_4: Text_0
			{
				idc=125304;
			};
			class Text_5: Text_0
			{
				idc=125305;
			};
			class Text_6: Text_0
			{
				idc=125306;
			};
			class Text_7: Text_0
			{
				idc=125307;
			};
			class Text_8: Text_0
			{
				idc=125308;
			};
			class Text_9: Text_0
			{
				idc=125309;
			};
		};
	};
	class RscMS_globe3: RscMS_globe0
	{
		onload="uinamespace setvariable ['Globe_RscMS3',_this select 0];";
		class controls: controls
		{
			class Picture_0: Picture_0
			{
				idc=203100;
			};
			class Picture_1: Picture_0
			{
				idc=203101;
			};
			class Picture_2: Picture_0
			{
				idc=203102;
			};
			class Picture_3: Picture_0
			{
				idc=203103;
			};
			class Picture_4: Picture_0
			{
				idc=203104;
			};
			class Picture_5: Picture_0
			{
				idc=203105;
			};
			class Picture_6: Picture_0
			{
				idc=203106;
			};
			class Picture_7: Picture_0
			{
				idc=203107;
			};
			class Picture_8: Picture_0
			{
				idc=203108;
			};
			class Picture_9: Picture_0
			{
				idc=203109;
			};
			class Picture_10: Picture_0
			{
				idc=203110;
			};
			class Picture_11: Picture_0
			{
				idc=203111;
			};
			class Picture_12: Picture_0
			{
				idc=203112;
			};
			class Picture_13: Picture_0
			{
				idc=203113;
			};
			class Picture_14: Picture_0
			{
				idc=203114;
			};
			class Picture_15: Picture_0
			{
				idc=203115;
			};
			class Picture_16: Picture_0
			{
				idc=203116;
			};
			class Picture_17: Picture_0
			{
				idc=203117;
			};
			class Picture_18: Picture_0
			{
				idc=203118;
			};
			class Picture_19: Picture_0
			{
				idc=203119;
			};
			class Picture_20: Picture_0
			{
				idc=203120;
			};
			class Picture_21: Picture_0
			{
				idc=203121;
			};
			class Picture_22: Picture_0
			{
				idc=203122;
			};
			class Picture_23: Picture_0
			{
				idc=203123;
			};
			class Picture_24: Picture_0
			{
				idc=203124;
			};
			class Picture_25: Picture_0
			{
				idc=203203;
			};
			class Picture_26: Picture_0
			{
				idc=203126;
			};
			class Picture_27: Picture_0
			{
				idc=203127;
			};
			class Picture_28: Picture_0
			{
				idc=203128;
			};
			class Picture_29: Picture_0
			{
				idc=203129;
			};
			class Picture_30: Picture_0
			{
				idc=203130;
			};
			class Picture_31: Picture_0
			{
				idc=203131;
			};
			class Picture_32: Picture_0
			{
				idc=203132;
			};
			class Picture_33: Picture_0
			{
				idc=203133;
			};
			class Picture_34: Picture_0
			{
				idc=203134;
			};
			class Picture_35: Picture_0
			{
				idc=203135;
			};
			class Picture_36: Picture_0
			{
				idc=203136;
			};
			class Picture_37: Picture_0
			{
				idc=203137;
			};
			class Picture_38: Picture_0
			{
				idc=203138;
			};
			class Picture_39: Picture_0
			{
				idc=203139;
			};
			class Picture_40: Picture_0
			{
				idc=203140;
			};
			class Picture_41: Picture_0
			{
				idc=203141;
			};
			class Picture_42: Picture_0
			{
				idc=203142;
			};
			class Picture_43: Picture_0
			{
				idc=203143;
			};
			class Picture_44: Picture_0
			{
				idc=203144;
			};
			class Picture_45: Picture_0
			{
				idc=203145;
			};
			class Picture_46: Picture_0
			{
				idc=203146;
			};
			class Picture_47: Picture_0
			{
				idc=203147;
			};
			class Picture_48: Picture_0
			{
				idc=203148;
			};
			class Picture_49: Picture_0
			{
				idc=203149;
			};
			class Picture_50: Picture_0
			{
				idc=203150;
			};
			class PictureShadow_0: Picture_0
			{
				idc=203200;
			};
			class PictureShadow_1: PictureShadow_0
			{
				idc=203201;
			};
			class PictureShadow_2: PictureShadow_0
			{
				idc=203202;
			};
			class PictureShadow_3: PictureShadow_0
			{
				idc=203203;
			};
			class PictureShadow_4: PictureShadow_0
			{
				idc=203204;
			};
			class PictureShadow_5: PictureShadow_0
			{
				idc=203205;
			};
			class PictureShadow_6: PictureShadow_0
			{
				idc=203206;
			};
			class PictureShadow_7: PictureShadow_0
			{
				idc=203207;
			};
			class PictureShadow_8: PictureShadow_0
			{
				idc=203208;
			};
			class PictureShadow_9: PictureShadow_0
			{
				idc=203209;
			};
			class Text_0: Text_0
			{
				idc=203300;
			};
			class Text_1: Text_0
			{
				idc=203301;
			};
			class Text_2: Text_0
			{
				idc=203302;
			};
			class Text_3: Text_0
			{
				idc=203303;
			};
			class Text_4: Text_0
			{
				idc=203304;
			};
			class Text_5: Text_0
			{
				idc=203305;
			};
			class Text_6: Text_0
			{
				idc=203306;
			};
			class Text_7: Text_0
			{
				idc=203307;
			};
			class Text_8: Text_0
			{
				idc=203308;
			};
			class Text_9: Text_0
			{
				idc=203309;
			};
		};
	};
	class RscMS_globe4: RscMS_globe0
	{
		onload="uinamespace setvariable ['Globe_RscMS4',_this select 0];";
		class controls: controls
		{
			class Picture_0: Picture_0
			{
				idc=204100;
			};
			class Picture_1: Picture_0
			{
				idc=204101;
			};
			class Picture_2: Picture_0
			{
				idc=204102;
			};
			class Picture_3: Picture_0
			{
				idc=204103;
			};
			class Picture_4: Picture_0
			{
				idc=204104;
			};
			class Picture_5: Picture_0
			{
				idc=204105;
			};
			class Picture_6: Picture_0
			{
				idc=204106;
			};
			class Picture_7: Picture_0
			{
				idc=204107;
			};
			class Picture_8: Picture_0
			{
				idc=204108;
			};
			class Picture_9: Picture_0
			{
				idc=204109;
			};
			class Picture_10: Picture_0
			{
				idc=204110;
			};
			class Picture_11: Picture_0
			{
				idc=204111;
			};
			class Picture_12: Picture_0
			{
				idc=204112;
			};
			class Picture_13: Picture_0
			{
				idc=204113;
			};
			class Picture_14: Picture_0
			{
				idc=204114;
			};
			class Picture_15: Picture_0
			{
				idc=204115;
			};
			class Picture_16: Picture_0
			{
				idc=204116;
			};
			class Picture_17: Picture_0
			{
				idc=204117;
			};
			class Picture_18: Picture_0
			{
				idc=204118;
			};
			class Picture_19: Picture_0
			{
				idc=204119;
			};
			class Picture_20: Picture_0
			{
				idc=204120;
			};
			class Picture_21: Picture_0
			{
				idc=204121;
			};
			class Picture_22: Picture_0
			{
				idc=204122;
			};
			class Picture_23: Picture_0
			{
				idc=204123;
			};
			class Picture_24: Picture_0
			{
				idc=204124;
			};
			class Picture_25: Picture_0
			{
				idc=204200;
			};
			class Picture_26: Picture_0
			{
				idc=204126;
			};
			class Picture_27: Picture_0
			{
				idc=204127;
			};
			class Picture_28: Picture_0
			{
				idc=204128;
			};
			class Picture_29: Picture_0
			{
				idc=204129;
			};
			class Picture_30: Picture_0
			{
				idc=204130;
			};
			class Picture_31: Picture_0
			{
				idc=204131;
			};
			class Picture_32: Picture_0
			{
				idc=204132;
			};
			class Picture_33: Picture_0
			{
				idc=204133;
			};
			class Picture_34: Picture_0
			{
				idc=204134;
			};
			class Picture_35: Picture_0
			{
				idc=204135;
			};
			class Picture_36: Picture_0
			{
				idc=204136;
			};
			class Picture_37: Picture_0
			{
				idc=204137;
			};
			class Picture_38: Picture_0
			{
				idc=204138;
			};
			class Picture_39: Picture_0
			{
				idc=204139;
			};
			class Picture_40: Picture_0
			{
				idc=204140;
			};
			class Picture_41: Picture_0
			{
				idc=204141;
			};
			class Picture_42: Picture_0
			{
				idc=204142;
			};
			class Picture_43: Picture_0
			{
				idc=204143;
			};
			class Picture_44: Picture_0
			{
				idc=204144;
			};
			class Picture_45: Picture_0
			{
				idc=204145;
			};
			class Picture_46: Picture_0
			{
				idc=204146;
			};
			class Picture_47: Picture_0
			{
				idc=204147;
			};
			class Picture_48: Picture_0
			{
				idc=204148;
			};
			class Picture_49: Picture_0
			{
				idc=204149;
			};
			class Picture_50: Picture_0
			{
				idc=204150;
			};
			class PictureShadow_0: Picture_0
			{
				idc=204200;
			};
			class PictureShadow_1: PictureShadow_0
			{
				idc=204201;
			};
			class PictureShadow_2: PictureShadow_0
			{
				idc=204202;
			};
			class PictureShadow_3: PictureShadow_0
			{
				idc=204203;
			};
			class PictureShadow_4: PictureShadow_0
			{
				idc=204204;
			};
			class PictureShadow_5: PictureShadow_0
			{
				idc=204205;
			};
			class PictureShadow_6: PictureShadow_0
			{
				idc=204206;
			};
			class PictureShadow_7: PictureShadow_0
			{
				idc=204207;
			};
			class PictureShadow_8: PictureShadow_0
			{
				idc=204208;
			};
			class PictureShadow_9: PictureShadow_0
			{
				idc=204209;
			};
			class Text_0: Text_0
			{
				idc=204300;
			};
			class Text_1: Text_0
			{
				idc=204301;
			};
			class Text_2: Text_0
			{
				idc=204302;
			};
			class Text_3: Text_0
			{
				idc=204303;
			};
			class Text_4: Text_0
			{
				idc=204304;
			};
			class Text_5: Text_0
			{
				idc=204305;
			};
			class Text_6: Text_0
			{
				idc=204306;
			};
			class Text_7: Text_0
			{
				idc=204307;
			};
			class Text_8: Text_0
			{
				idc=204308;
			};
			class Text_9: Text_0
			{
				idc=204309;
			};
		};
	};
	class RscMS_globe5: RscMS_globe0
	{
		onload="uinamespace setvariable ['Globe_RscMS5',_this select 0];";
		class controls: controls
		{
			class Picture_0: Picture_0
			{
				idc=205100;
			};
			class Picture_1: Picture_0
			{
				idc=205101;
			};
			class Picture_2: Picture_0
			{
				idc=205102;
			};
			class Picture_3: Picture_0
			{
				idc=205103;
			};
			class Picture_4: Picture_0
			{
				idc=205104;
			};
			class Picture_5: Picture_0
			{
				idc=205105;
			};
			class Picture_6: Picture_0
			{
				idc=205106;
			};
			class Picture_7: Picture_0
			{
				idc=205107;
			};
			class Picture_8: Picture_0
			{
				idc=205108;
			};
			class Picture_9: Picture_0
			{
				idc=205109;
			};
			class Picture_10: Picture_0
			{
				idc=205110;
			};
			class Picture_11: Picture_0
			{
				idc=205111;
			};
			class Picture_12: Picture_0
			{
				idc=205112;
			};
			class Picture_13: Picture_0
			{
				idc=205113;
			};
			class Picture_14: Picture_0
			{
				idc=205114;
			};
			class Picture_15: Picture_0
			{
				idc=205115;
			};
			class Picture_16: Picture_0
			{
				idc=205116;
			};
			class Picture_17: Picture_0
			{
				idc=205117;
			};
			class Picture_18: Picture_0
			{
				idc=205118;
			};
			class Picture_19: Picture_0
			{
				idc=205119;
			};
			class Picture_20: Picture_0
			{
				idc=205120;
			};
			class Picture_21: Picture_0
			{
				idc=205121;
			};
			class Picture_22: Picture_0
			{
				idc=205122;
			};
			class Picture_23: Picture_0
			{
				idc=205123;
			};
			class Picture_24: Picture_0
			{
				idc=205124;
			};
			class Picture_25: Picture_0
			{
				idc=205200;
			};
			class Picture_26: Picture_0
			{
				idc=205126;
			};
			class Picture_27: Picture_0
			{
				idc=205127;
			};
			class Picture_28: Picture_0
			{
				idc=205128;
			};
			class Picture_29: Picture_0
			{
				idc=205129;
			};
			class Picture_30: Picture_0
			{
				idc=205130;
			};
			class Picture_31: Picture_0
			{
				idc=205131;
			};
			class Picture_32: Picture_0
			{
				idc=205132;
			};
			class Picture_33: Picture_0
			{
				idc=205133;
			};
			class Picture_34: Picture_0
			{
				idc=205134;
			};
			class Picture_35: Picture_0
			{
				idc=205135;
			};
			class Picture_36: Picture_0
			{
				idc=205136;
			};
			class Picture_37: Picture_0
			{
				idc=205137;
			};
			class Picture_38: Picture_0
			{
				idc=205138;
			};
			class Picture_39: Picture_0
			{
				idc=205139;
			};
			class Picture_40: Picture_0
			{
				idc=205140;
			};
			class Picture_41: Picture_0
			{
				idc=205141;
			};
			class Picture_42: Picture_0
			{
				idc=205142;
			};
			class Picture_43: Picture_0
			{
				idc=205143;
			};
			class Picture_44: Picture_0
			{
				idc=205144;
			};
			class Picture_45: Picture_0
			{
				idc=205145;
			};
			class Picture_46: Picture_0
			{
				idc=205146;
			};
			class Picture_47: Picture_0
			{
				idc=205147;
			};
			class Picture_48: Picture_0
			{
				idc=205148;
			};
			class Picture_49: Picture_0
			{
				idc=205149;
			};
			class Picture_50: Picture_0
			{
				idc=205150;
			};
			class PictureShadow_0: Picture_0
			{
				idc=205200;
			};
			class PictureShadow_1: PictureShadow_0
			{
				idc=205201;
			};
			class PictureShadow_2: PictureShadow_0
			{
				idc=205202;
			};
			class PictureShadow_3: PictureShadow_0
			{
				idc=205203;
			};
			class PictureShadow_4: PictureShadow_0
			{
				idc=205204;
			};
			class PictureShadow_5: PictureShadow_0
			{
				idc=205205;
			};
			class PictureShadow_6: PictureShadow_0
			{
				idc=205206;
			};
			class PictureShadow_7: PictureShadow_0
			{
				idc=205207;
			};
			class PictureShadow_8: PictureShadow_0
			{
				idc=205208;
			};
			class PictureShadow_9: PictureShadow_0
			{
				idc=205209;
			};
			class Text_0: Text_0
			{
				idc=205300;
			};
			class Text_1: Text_0
			{
				idc=205301;
			};
			class Text_2: Text_0
			{
				idc=205302;
			};
			class Text_3: Text_0
			{
				idc=205303;
			};
			class Text_4: Text_0
			{
				idc=205304;
			};
			class Text_5: Text_0
			{
				idc=205305;
			};
			class Text_6: Text_0
			{
				idc=205306;
			};
			class Text_7: Text_0
			{
				idc=205307;
			};
			class Text_8: Text_0
			{
				idc=205308;
			};
			class Text_9: Text_0
			{
				idc=205309;
			};
		};
	};
	class RscMS_globe6: RscMS_globe0
	{
		onload="uinamespace setvariable ['Globe_RscMS6',_this select 0];";
		class controls: controls
		{
			class Picture_0: Picture_0
			{
				idc=206100;
			};
			class Picture_1: Picture_0
			{
				idc=206101;
			};
			class Picture_2: Picture_0
			{
				idc=206102;
			};
			class Picture_3: Picture_0
			{
				idc=206103;
			};
			class Picture_4: Picture_0
			{
				idc=206104;
			};
			class Picture_5: Picture_0
			{
				idc=206105;
			};
			class Picture_6: Picture_0
			{
				idc=206106;
			};
			class Picture_7: Picture_0
			{
				idc=206107;
			};
			class Picture_8: Picture_0
			{
				idc=206108;
			};
			class Picture_9: Picture_0
			{
				idc=206109;
			};
			class Picture_10: Picture_0
			{
				idc=206110;
			};
			class Picture_11: Picture_0
			{
				idc=206111;
			};
			class Picture_12: Picture_0
			{
				idc=206112;
			};
			class Picture_13: Picture_0
			{
				idc=206113;
			};
			class Picture_14: Picture_0
			{
				idc=206114;
			};
			class Picture_15: Picture_0
			{
				idc=206115;
			};
			class Picture_16: Picture_0
			{
				idc=206116;
			};
			class Picture_17: Picture_0
			{
				idc=206117;
			};
			class Picture_18: Picture_0
			{
				idc=206118;
			};
			class Picture_19: Picture_0
			{
				idc=206119;
			};
			class Picture_20: Picture_0
			{
				idc=206120;
			};
			class Picture_21: Picture_0
			{
				idc=206121;
			};
			class Picture_22: Picture_0
			{
				idc=206122;
			};
			class Picture_23: Picture_0
			{
				idc=206123;
			};
			class Picture_24: Picture_0
			{
				idc=206124;
			};
			class Picture_25: Picture_0
			{
				idc=206200;
			};
			class Picture_26: Picture_0
			{
				idc=206126;
			};
			class Picture_27: Picture_0
			{
				idc=206127;
			};
			class Picture_28: Picture_0
			{
				idc=206128;
			};
			class Picture_29: Picture_0
			{
				idc=206129;
			};
			class Picture_30: Picture_0
			{
				idc=206130;
			};
			class Picture_31: Picture_0
			{
				idc=206131;
			};
			class Picture_32: Picture_0
			{
				idc=206132;
			};
			class Picture_33: Picture_0
			{
				idc=206133;
			};
			class Picture_34: Picture_0
			{
				idc=206134;
			};
			class Picture_35: Picture_0
			{
				idc=206135;
			};
			class Picture_36: Picture_0
			{
				idc=206136;
			};
			class Picture_37: Picture_0
			{
				idc=206137;
			};
			class Picture_38: Picture_0
			{
				idc=206138;
			};
			class Picture_39: Picture_0
			{
				idc=206139;
			};
			class Picture_40: Picture_0
			{
				idc=206140;
			};
			class Picture_41: Picture_0
			{
				idc=206141;
			};
			class Picture_42: Picture_0
			{
				idc=206142;
			};
			class Picture_43: Picture_0
			{
				idc=206143;
			};
			class Picture_44: Picture_0
			{
				idc=206144;
			};
			class Picture_45: Picture_0
			{
				idc=206145;
			};
			class Picture_46: Picture_0
			{
				idc=206146;
			};
			class Picture_47: Picture_0
			{
				idc=206147;
			};
			class Picture_48: Picture_0
			{
				idc=206148;
			};
			class Picture_49: Picture_0
			{
				idc=206149;
			};
			class Picture_50: Picture_0
			{
				idc=206150;
			};
			class PictureShadow_0: Picture_0
			{
				idc=206200;
			};
			class PictureShadow_1: PictureShadow_0
			{
				idc=206201;
			};
			class PictureShadow_2: PictureShadow_0
			{
				idc=206202;
			};
			class PictureShadow_3: PictureShadow_0
			{
				idc=206203;
			};
			class PictureShadow_4: PictureShadow_0
			{
				idc=206204;
			};
			class PictureShadow_5: PictureShadow_0
			{
				idc=206205;
			};
			class PictureShadow_6: PictureShadow_0
			{
				idc=206206;
			};
			class PictureShadow_7: PictureShadow_0
			{
				idc=206207;
			};
			class PictureShadow_8: PictureShadow_0
			{
				idc=206208;
			};
			class PictureShadow_9: PictureShadow_0
			{
				idc=206209;
			};
			class Text_0: Text_0
			{
				idc=206300;
			};
			class Text_1: Text_0
			{
				idc=206301;
			};
			class Text_2: Text_0
			{
				idc=206302;
			};
			class Text_3: Text_0
			{
				idc=206303;
			};
			class Text_4: Text_0
			{
				idc=206304;
			};
			class Text_5: Text_0
			{
				idc=206305;
			};
			class Text_6: Text_0
			{
				idc=206306;
			};
			class Text_7: Text_0
			{
				idc=206307;
			};
			class Text_8: Text_0
			{
				idc=206308;
			};
			class Text_9: Text_0
			{
				idc=206309;
			};
		};
	};
	class RscMS_globe7: RscMS_globe0
	{
		onload="uinamespace setvariable ['Globe_RscMS7',_this select 0];";
		class controls: controls
		{
			class Picture_0: Picture_0
			{
				idc=207100;
			};
			class Picture_1: Picture_0
			{
				idc=207101;
			};
			class Picture_2: Picture_0
			{
				idc=207102;
			};
			class Picture_3: Picture_0
			{
				idc=207103;
			};
			class Picture_4: Picture_0
			{
				idc=207104;
			};
			class Picture_5: Picture_0
			{
				idc=207105;
			};
			class Picture_6: Picture_0
			{
				idc=207106;
			};
			class Picture_7: Picture_0
			{
				idc=207107;
			};
			class Picture_8: Picture_0
			{
				idc=207108;
			};
			class Picture_9: Picture_0
			{
				idc=207109;
			};
			class Picture_10: Picture_0
			{
				idc=207110;
			};
			class Picture_11: Picture_0
			{
				idc=207111;
			};
			class Picture_12: Picture_0
			{
				idc=207112;
			};
			class Picture_13: Picture_0
			{
				idc=207113;
			};
			class Picture_14: Picture_0
			{
				idc=207114;
			};
			class Picture_15: Picture_0
			{
				idc=207115;
			};
			class Picture_16: Picture_0
			{
				idc=207116;
			};
			class Picture_17: Picture_0
			{
				idc=207117;
			};
			class Picture_18: Picture_0
			{
				idc=207118;
			};
			class Picture_19: Picture_0
			{
				idc=207119;
			};
			class Picture_20: Picture_0
			{
				idc=207120;
			};
			class Picture_21: Picture_0
			{
				idc=207121;
			};
			class Picture_22: Picture_0
			{
				idc=207122;
			};
			class Picture_23: Picture_0
			{
				idc=207123;
			};
			class Picture_24: Picture_0
			{
				idc=207124;
			};
			class Picture_25: Picture_0
			{
				idc=207200;
			};
			class Picture_26: Picture_0
			{
				idc=207126;
			};
			class Picture_27: Picture_0
			{
				idc=207127;
			};
			class Picture_28: Picture_0
			{
				idc=207128;
			};
			class Picture_29: Picture_0
			{
				idc=207129;
			};
			class Picture_30: Picture_0
			{
				idc=207130;
			};
			class Picture_31: Picture_0
			{
				idc=207131;
			};
			class Picture_32: Picture_0
			{
				idc=207132;
			};
			class Picture_33: Picture_0
			{
				idc=207133;
			};
			class Picture_34: Picture_0
			{
				idc=207134;
			};
			class Picture_35: Picture_0
			{
				idc=207135;
			};
			class Picture_36: Picture_0
			{
				idc=207136;
			};
			class Picture_37: Picture_0
			{
				idc=207137;
			};
			class Picture_38: Picture_0
			{
				idc=207138;
			};
			class Picture_39: Picture_0
			{
				idc=207139;
			};
			class Picture_40: Picture_0
			{
				idc=207140;
			};
			class Picture_41: Picture_0
			{
				idc=207141;
			};
			class Picture_42: Picture_0
			{
				idc=207142;
			};
			class Picture_43: Picture_0
			{
				idc=207143;
			};
			class Picture_44: Picture_0
			{
				idc=207144;
			};
			class Picture_45: Picture_0
			{
				idc=207145;
			};
			class Picture_46: Picture_0
			{
				idc=207146;
			};
			class Picture_47: Picture_0
			{
				idc=207147;
			};
			class Picture_48: Picture_0
			{
				idc=207148;
			};
			class Picture_49: Picture_0
			{
				idc=207149;
			};
			class Picture_50: Picture_0
			{
				idc=207150;
			};
			class PictureShadow_0: Picture_0
			{
				idc=207200;
			};
			class PictureShadow_1: PictureShadow_0
			{
				idc=207201;
			};
			class PictureShadow_2: PictureShadow_0
			{
				idc=207202;
			};
			class PictureShadow_3: PictureShadow_0
			{
				idc=207203;
			};
			class PictureShadow_4: PictureShadow_0
			{
				idc=207204;
			};
			class PictureShadow_5: PictureShadow_0
			{
				idc=207205;
			};
			class PictureShadow_6: PictureShadow_0
			{
				idc=207206;
			};
			class PictureShadow_7: PictureShadow_0
			{
				idc=207207;
			};
			class PictureShadow_8: PictureShadow_0
			{
				idc=207208;
			};
			class PictureShadow_9: PictureShadow_0
			{
				idc=207209;
			};
			class Text_0: Text_0
			{
				idc=207300;
			};
			class Text_1: Text_0
			{
				idc=207301;
			};
			class Text_2: Text_0
			{
				idc=207302;
			};
			class Text_3: Text_0
			{
				idc=207303;
			};
			class Text_4: Text_0
			{
				idc=207304;
			};
			class Text_5: Text_0
			{
				idc=207305;
			};
			class Text_6: Text_0
			{
				idc=207306;
			};
			class Text_7: Text_0
			{
				idc=207307;
			};
			class Text_8: Text_0
			{
				idc=207308;
			};
			class Text_9: Text_0
			{
				idc=207309;
			};
		};
	};
	class RscMS_globe8: RscMS_globe0
	{
		onload="uinamespace setvariable ['Globe_RscMS8',_this select 0];";
		class controls: controls
		{
			class Picture_0: Picture_0
			{
				idc=208100;
			};
			class Picture_1: Picture_0
			{
				idc=208101;
			};
			class Picture_2: Picture_0
			{
				idc=208102;
			};
			class Picture_3: Picture_0
			{
				idc=208103;
			};
			class Picture_4: Picture_0
			{
				idc=208104;
			};
			class Picture_5: Picture_0
			{
				idc=208105;
			};
			class Picture_6: Picture_0
			{
				idc=208106;
			};
			class Picture_7: Picture_0
			{
				idc=208107;
			};
			class Picture_8: Picture_0
			{
				idc=208108;
			};
			class Picture_9: Picture_0
			{
				idc=208109;
			};
			class Picture_10: Picture_0
			{
				idc=208110;
			};
			class Picture_11: Picture_0
			{
				idc=208111;
			};
			class Picture_12: Picture_0
			{
				idc=208112;
			};
			class Picture_13: Picture_0
			{
				idc=208113;
			};
			class Picture_14: Picture_0
			{
				idc=208114;
			};
			class Picture_15: Picture_0
			{
				idc=208115;
			};
			class Picture_16: Picture_0
			{
				idc=208116;
			};
			class Picture_17: Picture_0
			{
				idc=208117;
			};
			class Picture_18: Picture_0
			{
				idc=208118;
			};
			class Picture_19: Picture_0
			{
				idc=208119;
			};
			class Picture_20: Picture_0
			{
				idc=208120;
			};
			class Picture_21: Picture_0
			{
				idc=208121;
			};
			class Picture_22: Picture_0
			{
				idc=208122;
			};
			class Picture_23: Picture_0
			{
				idc=208123;
			};
			class Picture_24: Picture_0
			{
				idc=208124;
			};
			class Picture_25: Picture_0
			{
				idc=208200;
			};
			class Picture_26: Picture_0
			{
				idc=208126;
			};
			class Picture_27: Picture_0
			{
				idc=208127;
			};
			class Picture_28: Picture_0
			{
				idc=208128;
			};
			class Picture_29: Picture_0
			{
				idc=208129;
			};
			class Picture_30: Picture_0
			{
				idc=208130;
			};
			class Picture_31: Picture_0
			{
				idc=208131;
			};
			class Picture_32: Picture_0
			{
				idc=208132;
			};
			class Picture_33: Picture_0
			{
				idc=208133;
			};
			class Picture_34: Picture_0
			{
				idc=208134;
			};
			class Picture_35: Picture_0
			{
				idc=208135;
			};
			class Picture_36: Picture_0
			{
				idc=208136;
			};
			class Picture_37: Picture_0
			{
				idc=208137;
			};
			class Picture_38: Picture_0
			{
				idc=208138;
			};
			class Picture_39: Picture_0
			{
				idc=208139;
			};
			class Picture_40: Picture_0
			{
				idc=208140;
			};
			class Picture_41: Picture_0
			{
				idc=208141;
			};
			class Picture_42: Picture_0
			{
				idc=208142;
			};
			class Picture_43: Picture_0
			{
				idc=208143;
			};
			class Picture_44: Picture_0
			{
				idc=208144;
			};
			class Picture_45: Picture_0
			{
				idc=208145;
			};
			class Picture_46: Picture_0
			{
				idc=208146;
			};
			class Picture_47: Picture_0
			{
				idc=208147;
			};
			class Picture_48: Picture_0
			{
				idc=208148;
			};
			class Picture_49: Picture_0
			{
				idc=208149;
			};
			class Picture_50: Picture_0
			{
				idc=208150;
			};
			class PictureShadow_0: Picture_0
			{
				idc=208200;
			};
			class PictureShadow_1: PictureShadow_0
			{
				idc=208201;
			};
			class PictureShadow_2: PictureShadow_0
			{
				idc=208202;
			};
			class PictureShadow_3: PictureShadow_0
			{
				idc=208203;
			};
			class PictureShadow_4: PictureShadow_0
			{
				idc=208204;
			};
			class PictureShadow_5: PictureShadow_0
			{
				idc=208205;
			};
			class PictureShadow_6: PictureShadow_0
			{
				idc=208206;
			};
			class PictureShadow_7: PictureShadow_0
			{
				idc=208207;
			};
			class PictureShadow_8: PictureShadow_0
			{
				idc=208208;
			};
			class PictureShadow_9: PictureShadow_0
			{
				idc=208209;
			};
			class Text_0: Text_0
			{
				idc=208300;
			};
			class Text_1: Text_0
			{
				idc=208301;
			};
			class Text_2: Text_0
			{
				idc=208302;
			};
			class Text_3: Text_0
			{
				idc=208303;
			};
			class Text_4: Text_0
			{
				idc=208304;
			};
			class Text_5: Text_0
			{
				idc=208305;
			};
			class Text_6: Text_0
			{
				idc=208306;
			};
			class Text_7: Text_0
			{
				idc=208307;
			};
			class Text_8: Text_0
			{
				idc=208308;
			};
			class Text_9: Text_0
			{
				idc=208309;
			};
		};
	};
	class RscMS_globe10: RscMS_globe0
	{
		onload="uinamespace setvariable ['Globe_RscMS10',_this select 0];";
		class controls: controls
		{
			class Picture_0: Picture_0
			{
				idc=210100;
			};
			class Picture_1: Picture_0
			{
				idc=210101;
			};
			class Picture_2: Picture_0
			{
				idc=210102;
			};
			class Picture_3: Picture_0
			{
				idc=210103;
			};
			class Picture_4: Picture_0
			{
				idc=210104;
			};
			class Picture_5: Picture_0
			{
				idc=210105;
			};
			class Picture_6: Picture_0
			{
				idc=210106;
			};
			class Picture_7: Picture_0
			{
				idc=210107;
			};
			class Picture_8: Picture_0
			{
				idc=210108;
			};
			class Picture_9: Picture_0
			{
				idc=210109;
			};
			class Picture_10: Picture_0
			{
				idc=210110;
			};
			class Picture_11: Picture_0
			{
				idc=210111;
			};
			class Picture_12: Picture_0
			{
				idc=210112;
			};
			class Picture_13: Picture_0
			{
				idc=210113;
			};
			class Picture_14: Picture_0
			{
				idc=210114;
			};
			class Picture_15: Picture_0
			{
				idc=210115;
			};
			class Picture_16: Picture_0
			{
				idc=210116;
			};
			class Picture_17: Picture_0
			{
				idc=210117;
			};
			class Picture_18: Picture_0
			{
				idc=210118;
			};
			class Picture_19: Picture_0
			{
				idc=210119;
			};
			class Picture_20: Picture_0
			{
				idc=210120;
			};
			class Picture_21: Picture_0
			{
				idc=210121;
			};
			class Picture_22: Picture_0
			{
				idc=210122;
			};
			class Picture_23: Picture_0
			{
				idc=210123;
			};
			class Picture_24: Picture_0
			{
				idc=210124;
			};
			class Picture_25: Picture_0
			{
				idc=210200;
			};
			class Picture_26: Picture_0
			{
				idc=210126;
			};
			class Picture_27: Picture_0
			{
				idc=210127;
			};
			class Picture_28: Picture_0
			{
				idc=210128;
			};
			class Picture_29: Picture_0
			{
				idc=210129;
			};
			class Picture_30: Picture_0
			{
				idc=210130;
			};
			class Picture_31: Picture_0
			{
				idc=210131;
			};
			class Picture_32: Picture_0
			{
				idc=210132;
			};
			class Picture_33: Picture_0
			{
				idc=210133;
			};
			class Picture_34: Picture_0
			{
				idc=210134;
			};
			class Picture_35: Picture_0
			{
				idc=210135;
			};
			class Picture_36: Picture_0
			{
				idc=210136;
			};
			class Picture_37: Picture_0
			{
				idc=210137;
			};
			class Picture_38: Picture_0
			{
				idc=210138;
			};
			class Picture_39: Picture_0
			{
				idc=210139;
			};
			class Picture_40: Picture_0
			{
				idc=210140;
			};
			class Picture_41: Picture_0
			{
				idc=210141;
			};
			class Picture_42: Picture_0
			{
				idc=210142;
			};
			class Picture_43: Picture_0
			{
				idc=210143;
			};
			class Picture_44: Picture_0
			{
				idc=210144;
			};
			class Picture_45: Picture_0
			{
				idc=210145;
			};
			class Picture_46: Picture_0
			{
				idc=210146;
			};
			class Picture_47: Picture_0
			{
				idc=210147;
			};
			class Picture_48: Picture_0
			{
				idc=210148;
			};
			class Picture_49: Picture_0
			{
				idc=210149;
			};
			class Picture_50: Picture_0
			{
				idc=210150;
			};
			class PictureShadow_0: Picture_0
			{
				idc=210200;
			};
			class PictureShadow_1: PictureShadow_0
			{
				idc=210201;
			};
			class PictureShadow_2: PictureShadow_0
			{
				idc=210202;
			};
			class PictureShadow_3: PictureShadow_0
			{
				idc=210203;
			};
			class PictureShadow_4: PictureShadow_0
			{
				idc=210204;
			};
			class PictureShadow_5: PictureShadow_0
			{
				idc=210205;
			};
			class PictureShadow_6: PictureShadow_0
			{
				idc=210206;
			};
			class PictureShadow_7: PictureShadow_0
			{
				idc=210207;
			};
			class PictureShadow_8: PictureShadow_0
			{
				idc=210208;
			};
			class PictureShadow_9: PictureShadow_0
			{
				idc=210209;
			};
			class Text_0: Text_0
			{
				idc=210300;
			};
			class Text_1: Text_0
			{
				idc=210301;
			};
			class Text_2: Text_0
			{
				idc=210302;
			};
			class Text_3: Text_0
			{
				idc=210303;
			};
			class Text_4: Text_0
			{
				idc=210304;
			};
			class Text_5: Text_0
			{
				idc=210305;
			};
			class Text_6: Text_0
			{
				idc=210306;
			};
			class Text_7: Text_0
			{
				idc=210307;
			};
			class Text_8: Text_0
			{
				idc=210308;
			};
			class Text_9: Text_0
			{
				idc=210309;
			};
		};
	};
	class RscMS_globe11: RscMS_globe0
	{
		onload="uinamespace setvariable ['Globe_RscMS11',_this select 0];";
		class controls: controls
		{
			class Picture_0: Picture_0
			{
				idc=211100;
			};
			class Picture_1: Picture_0
			{
				idc=211101;
			};
			class Picture_2: Picture_0
			{
				idc=211102;
			};
			class Picture_3: Picture_0
			{
				idc=211103;
			};
			class Picture_4: Picture_0
			{
				idc=211104;
			};
			class Picture_5: Picture_0
			{
				idc=211105;
			};
			class Picture_6: Picture_0
			{
				idc=211106;
			};
			class Picture_7: Picture_0
			{
				idc=211107;
			};
			class Picture_8: Picture_0
			{
				idc=211108;
			};
			class Picture_9: Picture_0
			{
				idc=211109;
			};
			class Picture_10: Picture_0
			{
				idc=211110;
			};
			class Picture_11: Picture_0
			{
				idc=211111;
			};
			class Picture_12: Picture_0
			{
				idc=211112;
			};
			class Picture_13: Picture_0
			{
				idc=211113;
			};
			class Picture_14: Picture_0
			{
				idc=211114;
			};
			class Picture_15: Picture_0
			{
				idc=211115;
			};
			class Picture_16: Picture_0
			{
				idc=211116;
			};
			class Picture_17: Picture_0
			{
				idc=211117;
			};
			class Picture_18: Picture_0
			{
				idc=211118;
			};
			class Picture_19: Picture_0
			{
				idc=211119;
			};
			class Picture_20: Picture_0
			{
				idc=211120;
			};
			class Picture_21: Picture_0
			{
				idc=211121;
			};
			class Picture_22: Picture_0
			{
				idc=211122;
			};
			class Picture_23: Picture_0
			{
				idc=211123;
			};
			class Picture_24: Picture_0
			{
				idc=211124;
			};
			class Picture_25: Picture_0
			{
				idc=211200;
			};
			class Picture_26: Picture_0
			{
				idc=211126;
			};
			class Picture_27: Picture_0
			{
				idc=211127;
			};
			class Picture_28: Picture_0
			{
				idc=211128;
			};
			class Picture_29: Picture_0
			{
				idc=211129;
			};
			class Picture_30: Picture_0
			{
				idc=211130;
			};
			class Picture_31: Picture_0
			{
				idc=211131;
			};
			class Picture_32: Picture_0
			{
				idc=211132;
			};
			class Picture_33: Picture_0
			{
				idc=211133;
			};
			class Picture_34: Picture_0
			{
				idc=211134;
			};
			class Picture_35: Picture_0
			{
				idc=211135;
			};
			class Picture_36: Picture_0
			{
				idc=211136;
			};
			class Picture_37: Picture_0
			{
				idc=211137;
			};
			class Picture_38: Picture_0
			{
				idc=211138;
			};
			class Picture_39: Picture_0
			{
				idc=211139;
			};
			class Picture_40: Picture_0
			{
				idc=211140;
			};
			class Picture_41: Picture_0
			{
				idc=211141;
			};
			class Picture_42: Picture_0
			{
				idc=211142;
			};
			class Picture_43: Picture_0
			{
				idc=211143;
			};
			class Picture_44: Picture_0
			{
				idc=211144;
			};
			class Picture_45: Picture_0
			{
				idc=211145;
			};
			class Picture_46: Picture_0
			{
				idc=211146;
			};
			class Picture_47: Picture_0
			{
				idc=211147;
			};
			class Picture_48: Picture_0
			{
				idc=211148;
			};
			class Picture_49: Picture_0
			{
				idc=211149;
			};
			class Picture_50: Picture_0
			{
				idc=211150;
			};
			class PictureShadow_0: Picture_0
			{
				idc=211200;
			};
			class PictureShadow_1: PictureShadow_0
			{
				idc=211201;
			};
			class PictureShadow_2: PictureShadow_0
			{
				idc=211202;
			};
			class PictureShadow_3: PictureShadow_0
			{
				idc=211203;
			};
			class PictureShadow_4: PictureShadow_0
			{
				idc=211204;
			};
			class PictureShadow_5: PictureShadow_0
			{
				idc=211205;
			};
			class PictureShadow_6: PictureShadow_0
			{
				idc=211206;
			};
			class PictureShadow_7: PictureShadow_0
			{
				idc=211207;
			};
			class PictureShadow_8: PictureShadow_0
			{
				idc=211208;
			};
			class PictureShadow_9: PictureShadow_0
			{
				idc=211209;
			};
			class Text_0: Text_0
			{
				idc=211300;
			};
			class Text_1: Text_0
			{
				idc=211301;
			};
			class Text_2: Text_0
			{
				idc=211302;
			};
			class Text_3: Text_0
			{
				idc=211303;
			};
			class Text_4: Text_0
			{
				idc=211304;
			};
			class Text_5: Text_0
			{
				idc=211305;
			};
			class Text_6: Text_0
			{
				idc=211306;
			};
			class Text_7: Text_0
			{
				idc=211307;
			};
			class Text_8: Text_0
			{
				idc=211308;
			};
			class Text_9: Text_0
			{
				idc=211309;
			};
		};
	};
	class RscMS_globe12: RscMS_globe0
	{
		onload="uinamespace setvariable ['Globe_RscMS12',_this select 0];";
		class controls: controls
		{
			class Picture_0: Picture_0
			{
				idc=212100;
			};
			class Picture_1: Picture_0
			{
				idc=212101;
			};
			class Picture_2: Picture_0
			{
				idc=212102;
			};
			class Picture_3: Picture_0
			{
				idc=212103;
			};
			class Picture_4: Picture_0
			{
				idc=212104;
			};
			class Picture_5: Picture_0
			{
				idc=212105;
			};
			class Picture_6: Picture_0
			{
				idc=212106;
			};
			class Picture_7: Picture_0
			{
				idc=212107;
			};
			class Picture_8: Picture_0
			{
				idc=212108;
			};
			class Picture_9: Picture_0
			{
				idc=212109;
			};
			class Picture_10: Picture_0
			{
				idc=212110;
			};
			class Picture_11: Picture_0
			{
				idc=212111;
			};
			class Picture_12: Picture_0
			{
				idc=212112;
			};
			class Picture_13: Picture_0
			{
				idc=212113;
			};
			class Picture_14: Picture_0
			{
				idc=212114;
			};
			class Picture_15: Picture_0
			{
				idc=212115;
			};
			class Picture_16: Picture_0
			{
				idc=212116;
			};
			class Picture_17: Picture_0
			{
				idc=212117;
			};
			class Picture_18: Picture_0
			{
				idc=212118;
			};
			class Picture_19: Picture_0
			{
				idc=212119;
			};
			class Picture_20: Picture_0
			{
				idc=212120;
			};
			class Picture_21: Picture_0
			{
				idc=212121;
			};
			class Picture_22: Picture_0
			{
				idc=212122;
			};
			class Picture_23: Picture_0
			{
				idc=212123;
			};
			class Picture_24: Picture_0
			{
				idc=212124;
			};
			class Picture_25: Picture_0
			{
				idc=212200;
			};
			class Picture_26: Picture_0
			{
				idc=212126;
			};
			class Picture_27: Picture_0
			{
				idc=212127;
			};
			class Picture_28: Picture_0
			{
				idc=212128;
			};
			class Picture_29: Picture_0
			{
				idc=212129;
			};
			class Picture_30: Picture_0
			{
				idc=212130;
			};
			class Picture_31: Picture_0
			{
				idc=212131;
			};
			class Picture_32: Picture_0
			{
				idc=212132;
			};
			class Picture_33: Picture_0
			{
				idc=212133;
			};
			class Picture_34: Picture_0
			{
				idc=212134;
			};
			class Picture_35: Picture_0
			{
				idc=212135;
			};
			class Picture_36: Picture_0
			{
				idc=212136;
			};
			class Picture_37: Picture_0
			{
				idc=212137;
			};
			class Picture_38: Picture_0
			{
				idc=212138;
			};
			class Picture_39: Picture_0
			{
				idc=212139;
			};
			class Picture_40: Picture_0
			{
				idc=212140;
			};
			class Picture_41: Picture_0
			{
				idc=212141;
			};
			class Picture_42: Picture_0
			{
				idc=212142;
			};
			class Picture_43: Picture_0
			{
				idc=212143;
			};
			class Picture_44: Picture_0
			{
				idc=212144;
			};
			class Picture_45: Picture_0
			{
				idc=212145;
			};
			class Picture_46: Picture_0
			{
				idc=212146;
			};
			class Picture_47: Picture_0
			{
				idc=212147;
			};
			class Picture_48: Picture_0
			{
				idc=212148;
			};
			class Picture_49: Picture_0
			{
				idc=212149;
			};
			class Picture_50: Picture_0
			{
				idc=212150;
			};
			class PictureShadow_0: Picture_0
			{
				idc=212200;
			};
			class PictureShadow_1: PictureShadow_0
			{
				idc=212201;
			};
			class PictureShadow_2: PictureShadow_0
			{
				idc=212202;
			};
			class PictureShadow_3: PictureShadow_0
			{
				idc=212203;
			};
			class PictureShadow_4: PictureShadow_0
			{
				idc=212204;
			};
			class PictureShadow_5: PictureShadow_0
			{
				idc=212205;
			};
			class PictureShadow_6: PictureShadow_0
			{
				idc=212206;
			};
			class PictureShadow_7: PictureShadow_0
			{
				idc=212207;
			};
			class PictureShadow_8: PictureShadow_0
			{
				idc=212208;
			};
			class PictureShadow_9: PictureShadow_0
			{
				idc=212209;
			};
			class Text_0: Text_0
			{
				idc=212300;
			};
			class Text_1: Text_0
			{
				idc=212301;
			};
			class Text_2: Text_0
			{
				idc=212302;
			};
			class Text_3: Text_0
			{
				idc=212303;
			};
			class Text_4: Text_0
			{
				idc=212304;
			};
			class Text_5: Text_0
			{
				idc=212305;
			};
			class Text_6: Text_0
			{
				idc=212306;
			};
			class Text_7: Text_0
			{
				idc=212307;
			};
			class Text_8: Text_0
			{
				idc=212308;
			};
			class Text_9: Text_0
			{
				idc=212309;
			};
		};
	};
	class RscMS_globe13: RscMS_globe0
	{
		onload="uinamespace setvariable ['Globe_RscMS13',_this select 0];";
		class controls: controls
		{
			class Picture_0: Picture_0
			{
				idc=213100;
			};
			class Picture_1: Picture_0
			{
				idc=213101;
			};
			class Picture_2: Picture_0
			{
				idc=213102;
			};
			class Picture_3: Picture_0
			{
				idc=213103;
			};
			class Picture_4: Picture_0
			{
				idc=213104;
			};
			class Picture_5: Picture_0
			{
				idc=213105;
			};
			class Picture_6: Picture_0
			{
				idc=213106;
			};
			class Picture_7: Picture_0
			{
				idc=213107;
			};
			class Picture_8: Picture_0
			{
				idc=213108;
			};
			class Picture_9: Picture_0
			{
				idc=213109;
			};
			class Picture_10: Picture_0
			{
				idc=213110;
			};
			class Picture_11: Picture_0
			{
				idc=213111;
			};
			class Picture_12: Picture_0
			{
				idc=213112;
			};
			class Picture_13: Picture_0
			{
				idc=213113;
			};
			class Picture_14: Picture_0
			{
				idc=213114;
			};
			class Picture_15: Picture_0
			{
				idc=213115;
			};
			class Picture_16: Picture_0
			{
				idc=213116;
			};
			class Picture_17: Picture_0
			{
				idc=213117;
			};
			class Picture_18: Picture_0
			{
				idc=213118;
			};
			class Picture_19: Picture_0
			{
				idc=213119;
			};
			class Picture_20: Picture_0
			{
				idc=213120;
			};
			class Picture_21: Picture_0
			{
				idc=213121;
			};
			class Picture_22: Picture_0
			{
				idc=213122;
			};
			class Picture_23: Picture_0
			{
				idc=213123;
			};
			class Picture_24: Picture_0
			{
				idc=213124;
			};
			class Picture_25: Picture_0
			{
				idc=213200;
			};
			class Picture_26: Picture_0
			{
				idc=213126;
			};
			class Picture_27: Picture_0
			{
				idc=213127;
			};
			class Picture_28: Picture_0
			{
				idc=213128;
			};
			class Picture_29: Picture_0
			{
				idc=213129;
			};
			class Picture_30: Picture_0
			{
				idc=213130;
			};
			class Picture_31: Picture_0
			{
				idc=213131;
			};
			class Picture_32: Picture_0
			{
				idc=213132;
			};
			class Picture_33: Picture_0
			{
				idc=213133;
			};
			class Picture_34: Picture_0
			{
				idc=213134;
			};
			class Picture_35: Picture_0
			{
				idc=213135;
			};
			class Picture_36: Picture_0
			{
				idc=213136;
			};
			class Picture_37: Picture_0
			{
				idc=213137;
			};
			class Picture_38: Picture_0
			{
				idc=213138;
			};
			class Picture_39: Picture_0
			{
				idc=213139;
			};
			class Picture_40: Picture_0
			{
				idc=213140;
			};
			class Picture_41: Picture_0
			{
				idc=213141;
			};
			class Picture_42: Picture_0
			{
				idc=213142;
			};
			class Picture_43: Picture_0
			{
				idc=213143;
			};
			class Picture_44: Picture_0
			{
				idc=213144;
			};
			class Picture_45: Picture_0
			{
				idc=213145;
			};
			class Picture_46: Picture_0
			{
				idc=213146;
			};
			class Picture_47: Picture_0
			{
				idc=213147;
			};
			class Picture_48: Picture_0
			{
				idc=213148;
			};
			class Picture_49: Picture_0
			{
				idc=213149;
			};
			class Picture_50: Picture_0
			{
				idc=213150;
			};
			class PictureShadow_0: Picture_0
			{
				idc=213200;
			};
			class PictureShadow_1: PictureShadow_0
			{
				idc=213201;
			};
			class PictureShadow_2: PictureShadow_0
			{
				idc=213202;
			};
			class PictureShadow_3: PictureShadow_0
			{
				idc=213203;
			};
			class PictureShadow_4: PictureShadow_0
			{
				idc=213204;
			};
			class PictureShadow_5: PictureShadow_0
			{
				idc=213205;
			};
			class PictureShadow_6: PictureShadow_0
			{
				idc=213206;
			};
			class PictureShadow_7: PictureShadow_0
			{
				idc=213207;
			};
			class PictureShadow_8: PictureShadow_0
			{
				idc=213208;
			};
			class PictureShadow_9: PictureShadow_0
			{
				idc=213209;
			};
			class Text_0: Text_0
			{
				idc=213300;
			};
			class Text_1: Text_0
			{
				idc=213301;
			};
			class Text_2: Text_0
			{
				idc=213302;
			};
			class Text_3: Text_0
			{
				idc=213303;
			};
			class Text_4: Text_0
			{
				idc=213304;
			};
			class Text_5: Text_0
			{
				idc=213305;
			};
			class Text_6: Text_0
			{
				idc=213306;
			};
			class Text_7: Text_0
			{
				idc=213307;
			};
			class Text_8: Text_0
			{
				idc=213308;
			};
			class Text_9: Text_0
			{
				idc=213309;
			};
		};
	};
	class RscMS_globe14: RscMS_globe0
	{
		onload="uinamespace setvariable ['Globe_RscMS14',_this select 0];";
		class controls: controls
		{
			class Picture_0: Picture_0
			{
				idc=214100;
			};
			class Picture_1: Picture_0
			{
				idc=214101;
			};
			class Picture_2: Picture_0
			{
				idc=214102;
			};
			class Picture_3: Picture_0
			{
				idc=214103;
			};
			class Picture_4: Picture_0
			{
				idc=214104;
			};
			class Picture_5: Picture_0
			{
				idc=214105;
			};
			class Picture_6: Picture_0
			{
				idc=214106;
			};
			class Picture_7: Picture_0
			{
				idc=214107;
			};
			class Picture_8: Picture_0
			{
				idc=214108;
			};
			class Picture_9: Picture_0
			{
				idc=214109;
			};
			class Picture_10: Picture_0
			{
				idc=214110;
			};
			class Picture_11: Picture_0
			{
				idc=214111;
			};
			class Picture_12: Picture_0
			{
				idc=214112;
			};
			class Picture_13: Picture_0
			{
				idc=214113;
			};
			class Picture_14: Picture_0
			{
				idc=214114;
			};
			class Picture_15: Picture_0
			{
				idc=214115;
			};
			class Picture_16: Picture_0
			{
				idc=214116;
			};
			class Picture_17: Picture_0
			{
				idc=214117;
			};
			class Picture_18: Picture_0
			{
				idc=214118;
			};
			class Picture_19: Picture_0
			{
				idc=214119;
			};
			class Picture_20: Picture_0
			{
				idc=214120;
			};
			class Picture_21: Picture_0
			{
				idc=214121;
			};
			class Picture_22: Picture_0
			{
				idc=214122;
			};
			class Picture_23: Picture_0
			{
				idc=214123;
			};
			class Picture_24: Picture_0
			{
				idc=214124;
			};
			class Picture_25: Picture_0
			{
				idc=214200;
			};
			class Picture_26: Picture_0
			{
				idc=214126;
			};
			class Picture_27: Picture_0
			{
				idc=214127;
			};
			class Picture_28: Picture_0
			{
				idc=214128;
			};
			class Picture_29: Picture_0
			{
				idc=214129;
			};
			class Picture_30: Picture_0
			{
				idc=214130;
			};
			class Picture_31: Picture_0
			{
				idc=214131;
			};
			class Picture_32: Picture_0
			{
				idc=214132;
			};
			class Picture_33: Picture_0
			{
				idc=214133;
			};
			class Picture_34: Picture_0
			{
				idc=214134;
			};
			class Picture_35: Picture_0
			{
				idc=214135;
			};
			class Picture_36: Picture_0
			{
				idc=214136;
			};
			class Picture_37: Picture_0
			{
				idc=214137;
			};
			class Picture_38: Picture_0
			{
				idc=214138;
			};
			class Picture_39: Picture_0
			{
				idc=214139;
			};
			class Picture_40: Picture_0
			{
				idc=214140;
			};
			class Picture_41: Picture_0
			{
				idc=214141;
			};
			class Picture_42: Picture_0
			{
				idc=214142;
			};
			class Picture_43: Picture_0
			{
				idc=214143;
			};
			class Picture_44: Picture_0
			{
				idc=214144;
			};
			class Picture_45: Picture_0
			{
				idc=214145;
			};
			class Picture_46: Picture_0
			{
				idc=214146;
			};
			class Picture_47: Picture_0
			{
				idc=214147;
			};
			class Picture_48: Picture_0
			{
				idc=214148;
			};
			class Picture_49: Picture_0
			{
				idc=214149;
			};
			class Picture_50: Picture_0
			{
				idc=214150;
			};
			class PictureShadow_0: Picture_0
			{
				idc=214200;
			};
			class PictureShadow_1: PictureShadow_0
			{
				idc=214201;
			};
			class PictureShadow_2: PictureShadow_0
			{
				idc=214202;
			};
			class PictureShadow_3: PictureShadow_0
			{
				idc=214203;
			};
			class PictureShadow_4: PictureShadow_0
			{
				idc=214204;
			};
			class PictureShadow_5: PictureShadow_0
			{
				idc=214205;
			};
			class PictureShadow_6: PictureShadow_0
			{
				idc=214206;
			};
			class PictureShadow_7: PictureShadow_0
			{
				idc=214207;
			};
			class PictureShadow_8: PictureShadow_0
			{
				idc=214208;
			};
			class PictureShadow_9: PictureShadow_0
			{
				idc=214209;
			};
			class Text_0: Text_0
			{
				idc=214300;
			};
			class Text_1: Text_0
			{
				idc=214301;
			};
			class Text_2: Text_0
			{
				idc=214302;
			};
			class Text_3: Text_0
			{
				idc=214303;
			};
			class Text_4: Text_0
			{
				idc=214304;
			};
			class Text_5: Text_0
			{
				idc=214305;
			};
			class Text_6: Text_0
			{
				idc=214306;
			};
			class Text_7: Text_0
			{
				idc=214307;
			};
			class Text_8: Text_0
			{
				idc=214308;
			};
			class Text_9: Text_0
			{
				idc=214309;
			};
		};
	};
	class RscMS_globe15: RscMS_globe0
	{
		onload="uinamespace setvariable ['Globe_RscMS15',_this select 0];";
		class controls: controls
		{
			class Picture_0: Picture_0
			{
				idc=215100;
			};
			class Picture_1: Picture_0
			{
				idc=215101;
			};
			class Picture_2: Picture_0
			{
				idc=215102;
			};
			class Picture_3: Picture_0
			{
				idc=215103;
			};
			class Picture_4: Picture_0
			{
				idc=215104;
			};
			class Picture_5: Picture_0
			{
				idc=215105;
			};
			class Picture_6: Picture_0
			{
				idc=215106;
			};
			class Picture_7: Picture_0
			{
				idc=215107;
			};
			class Picture_8: Picture_0
			{
				idc=215108;
			};
			class Picture_9: Picture_0
			{
				idc=215109;
			};
			class Picture_10: Picture_0
			{
				idc=215110;
			};
			class Picture_11: Picture_0
			{
				idc=215111;
			};
			class Picture_12: Picture_0
			{
				idc=215112;
			};
			class Picture_13: Picture_0
			{
				idc=215113;
			};
			class Picture_14: Picture_0
			{
				idc=215114;
			};
			class Picture_15: Picture_0
			{
				idc=215115;
			};
			class Picture_16: Picture_0
			{
				idc=215116;
			};
			class Picture_17: Picture_0
			{
				idc=215117;
			};
			class Picture_18: Picture_0
			{
				idc=215118;
			};
			class Picture_19: Picture_0
			{
				idc=215119;
			};
			class Picture_20: Picture_0
			{
				idc=215120;
			};
			class Picture_21: Picture_0
			{
				idc=215121;
			};
			class Picture_22: Picture_0
			{
				idc=215122;
			};
			class Picture_23: Picture_0
			{
				idc=215123;
			};
			class Picture_24: Picture_0
			{
				idc=215124;
			};
			class Picture_25: Picture_0
			{
				idc=215200;
			};
			class Picture_26: Picture_0
			{
				idc=215126;
			};
			class Picture_27: Picture_0
			{
				idc=215127;
			};
			class Picture_28: Picture_0
			{
				idc=215128;
			};
			class Picture_29: Picture_0
			{
				idc=215129;
			};
			class Picture_30: Picture_0
			{
				idc=215130;
			};
			class Picture_31: Picture_0
			{
				idc=215131;
			};
			class Picture_32: Picture_0
			{
				idc=215132;
			};
			class Picture_33: Picture_0
			{
				idc=215133;
			};
			class Picture_34: Picture_0
			{
				idc=215134;
			};
			class Picture_35: Picture_0
			{
				idc=215135;
			};
			class Picture_36: Picture_0
			{
				idc=215136;
			};
			class Picture_37: Picture_0
			{
				idc=215137;
			};
			class Picture_38: Picture_0
			{
				idc=215138;
			};
			class Picture_39: Picture_0
			{
				idc=215139;
			};
			class Picture_40: Picture_0
			{
				idc=215140;
			};
			class Picture_41: Picture_0
			{
				idc=215141;
			};
			class Picture_42: Picture_0
			{
				idc=215142;
			};
			class Picture_43: Picture_0
			{
				idc=215143;
			};
			class Picture_44: Picture_0
			{
				idc=215144;
			};
			class Picture_45: Picture_0
			{
				idc=215145;
			};
			class Picture_46: Picture_0
			{
				idc=215146;
			};
			class Picture_47: Picture_0
			{
				idc=215147;
			};
			class Picture_48: Picture_0
			{
				idc=215148;
			};
			class Picture_49: Picture_0
			{
				idc=215149;
			};
			class Picture_50: Picture_0
			{
				idc=215150;
			};
			class PictureShadow_0: Picture_0
			{
				idc=215200;
			};
			class PictureShadow_1: PictureShadow_0
			{
				idc=215201;
			};
			class PictureShadow_2: PictureShadow_0
			{
				idc=215202;
			};
			class PictureShadow_3: PictureShadow_0
			{
				idc=215203;
			};
			class PictureShadow_4: PictureShadow_0
			{
				idc=215204;
			};
			class PictureShadow_5: PictureShadow_0
			{
				idc=215205;
			};
			class PictureShadow_6: PictureShadow_0
			{
				idc=215206;
			};
			class PictureShadow_7: PictureShadow_0
			{
				idc=215207;
			};
			class PictureShadow_8: PictureShadow_0
			{
				idc=215208;
			};
			class PictureShadow_9: PictureShadow_0
			{
				idc=215209;
			};
			class Text_0: Text_0
			{
				idc=215300;
			};
			class Text_1: Text_0
			{
				idc=215301;
			};
			class Text_2: Text_0
			{
				idc=215302;
			};
			class Text_3: Text_0
			{
				idc=215303;
			};
			class Text_4: Text_0
			{
				idc=215304;
			};
			class Text_5: Text_0
			{
				idc=215305;
			};
			class Text_6: Text_0
			{
				idc=215306;
			};
			class Text_7: Text_0
			{
				idc=215307;
			};
			class Text_8: Text_0
			{
				idc=215308;
			};
			class Text_9: Text_0
			{
				idc=215309;
			};
		};
	};
	class RscMS_globe16: RscMS_globe0
	{
		onload="uinamespace setvariable ['Globe_RscMS16',_this select 0];";
		class controls: controls
		{
			class Picture_0: Picture_0
			{
				idc=216100;
			};
			class Picture_1: Picture_0
			{
				idc=216101;
			};
			class Picture_2: Picture_0
			{
				idc=216102;
			};
			class Picture_3: Picture_0
			{
				idc=216103;
			};
			class Picture_4: Picture_0
			{
				idc=216104;
			};
			class Picture_5: Picture_0
			{
				idc=216105;
			};
			class Picture_6: Picture_0
			{
				idc=216106;
			};
			class Picture_7: Picture_0
			{
				idc=216107;
			};
			class Picture_8: Picture_0
			{
				idc=216108;
			};
			class Picture_9: Picture_0
			{
				idc=216109;
			};
			class Picture_10: Picture_0
			{
				idc=216110;
			};
			class Picture_11: Picture_0
			{
				idc=216111;
			};
			class Picture_12: Picture_0
			{
				idc=216112;
			};
			class Picture_13: Picture_0
			{
				idc=216113;
			};
			class Picture_14: Picture_0
			{
				idc=216114;
			};
			class Picture_15: Picture_0
			{
				idc=216115;
			};
			class Picture_16: Picture_0
			{
				idc=216116;
			};
			class Picture_17: Picture_0
			{
				idc=216117;
			};
			class Picture_18: Picture_0
			{
				idc=216118;
			};
			class Picture_19: Picture_0
			{
				idc=216119;
			};
			class Picture_20: Picture_0
			{
				idc=216120;
			};
			class Picture_21: Picture_0
			{
				idc=216121;
			};
			class Picture_22: Picture_0
			{
				idc=216122;
			};
			class Picture_23: Picture_0
			{
				idc=216123;
			};
			class Picture_24: Picture_0
			{
				idc=216124;
			};
			class Picture_25: Picture_0
			{
				idc=216200;
			};
			class Picture_26: Picture_0
			{
				idc=216126;
			};
			class Picture_27: Picture_0
			{
				idc=216127;
			};
			class Picture_28: Picture_0
			{
				idc=216128;
			};
			class Picture_29: Picture_0
			{
				idc=216129;
			};
			class Picture_30: Picture_0
			{
				idc=216130;
			};
			class Picture_31: Picture_0
			{
				idc=216131;
			};
			class Picture_32: Picture_0
			{
				idc=216132;
			};
			class Picture_33: Picture_0
			{
				idc=216133;
			};
			class Picture_34: Picture_0
			{
				idc=216134;
			};
			class Picture_35: Picture_0
			{
				idc=216135;
			};
			class Picture_36: Picture_0
			{
				idc=216136;
			};
			class Picture_37: Picture_0
			{
				idc=216137;
			};
			class Picture_38: Picture_0
			{
				idc=216138;
			};
			class Picture_39: Picture_0
			{
				idc=216139;
			};
			class Picture_40: Picture_0
			{
				idc=216140;
			};
			class Picture_41: Picture_0
			{
				idc=216141;
			};
			class Picture_42: Picture_0
			{
				idc=216142;
			};
			class Picture_43: Picture_0
			{
				idc=216143;
			};
			class Picture_44: Picture_0
			{
				idc=216144;
			};
			class Picture_45: Picture_0
			{
				idc=216145;
			};
			class Picture_46: Picture_0
			{
				idc=216146;
			};
			class Picture_47: Picture_0
			{
				idc=216147;
			};
			class Picture_48: Picture_0
			{
				idc=216148;
			};
			class Picture_49: Picture_0
			{
				idc=216149;
			};
			class Picture_50: Picture_0
			{
				idc=216150;
			};
			class PictureShadow_0: Picture_0
			{
				idc=216200;
			};
			class PictureShadow_1: PictureShadow_0
			{
				idc=216201;
			};
			class PictureShadow_2: PictureShadow_0
			{
				idc=216202;
			};
			class PictureShadow_3: PictureShadow_0
			{
				idc=216203;
			};
			class PictureShadow_4: PictureShadow_0
			{
				idc=216204;
			};
			class PictureShadow_5: PictureShadow_0
			{
				idc=216205;
			};
			class PictureShadow_6: PictureShadow_0
			{
				idc=216206;
			};
			class PictureShadow_7: PictureShadow_0
			{
				idc=216207;
			};
			class PictureShadow_8: PictureShadow_0
			{
				idc=216208;
			};
			class PictureShadow_9: PictureShadow_0
			{
				idc=216209;
			};
			class Text_0: Text_0
			{
				idc=216300;
			};
			class Text_1: Text_0
			{
				idc=216301;
			};
			class Text_2: Text_0
			{
				idc=216302;
			};
			class Text_3: Text_0
			{
				idc=216303;
			};
			class Text_4: Text_0
			{
				idc=216304;
			};
			class Text_5: Text_0
			{
				idc=216305;
			};
			class Text_6: Text_0
			{
				idc=216306;
			};
			class Text_7: Text_0
			{
				idc=216307;
			};
			class Text_8: Text_0
			{
				idc=216308;
			};
			class Text_9: Text_0
			{
				idc=216309;
			};
		};
	};
	class RscMS_globe17: RscMS_globe0
	{
		onload="uinamespace setvariable ['Globe_RscMS17',_this select 0];";
		class controls: controls
		{
			class Picture_0: Picture_0
			{
				idc=217100;
			};
			class Picture_1: Picture_0
			{
				idc=217101;
			};
			class Picture_2: Picture_0
			{
				idc=217102;
			};
			class Picture_3: Picture_0
			{
				idc=217103;
			};
			class Picture_4: Picture_0
			{
				idc=217104;
			};
			class Picture_5: Picture_0
			{
				idc=217105;
			};
			class Picture_6: Picture_0
			{
				idc=217106;
			};
			class Picture_7: Picture_0
			{
				idc=217107;
			};
			class Picture_8: Picture_0
			{
				idc=217108;
			};
			class Picture_9: Picture_0
			{
				idc=217109;
			};
			class Picture_10: Picture_0
			{
				idc=217110;
			};
			class Picture_11: Picture_0
			{
				idc=217111;
			};
			class Picture_12: Picture_0
			{
				idc=217112;
			};
			class Picture_13: Picture_0
			{
				idc=217113;
			};
			class Picture_14: Picture_0
			{
				idc=217114;
			};
			class Picture_15: Picture_0
			{
				idc=217115;
			};
			class Picture_16: Picture_0
			{
				idc=217116;
			};
			class Picture_17: Picture_0
			{
				idc=217117;
			};
			class Picture_18: Picture_0
			{
				idc=217118;
			};
			class Picture_19: Picture_0
			{
				idc=217119;
			};
			class Picture_20: Picture_0
			{
				idc=217120;
			};
			class Picture_21: Picture_0
			{
				idc=217121;
			};
			class Picture_22: Picture_0
			{
				idc=217122;
			};
			class Picture_23: Picture_0
			{
				idc=217123;
			};
			class Picture_24: Picture_0
			{
				idc=217124;
			};
			class Picture_25: Picture_0
			{
				idc=217200;
			};
			class Picture_26: Picture_0
			{
				idc=217126;
			};
			class Picture_27: Picture_0
			{
				idc=217127;
			};
			class Picture_28: Picture_0
			{
				idc=217128;
			};
			class Picture_29: Picture_0
			{
				idc=217129;
			};
			class Picture_30: Picture_0
			{
				idc=217130;
			};
			class Picture_31: Picture_0
			{
				idc=217131;
			};
			class Picture_32: Picture_0
			{
				idc=217132;
			};
			class Picture_33: Picture_0
			{
				idc=217133;
			};
			class Picture_34: Picture_0
			{
				idc=217134;
			};
			class Picture_35: Picture_0
			{
				idc=217135;
			};
			class Picture_36: Picture_0
			{
				idc=217136;
			};
			class Picture_37: Picture_0
			{
				idc=217137;
			};
			class Picture_38: Picture_0
			{
				idc=217138;
			};
			class Picture_39: Picture_0
			{
				idc=217139;
			};
			class Picture_40: Picture_0
			{
				idc=217140;
			};
			class Picture_41: Picture_0
			{
				idc=217141;
			};
			class Picture_42: Picture_0
			{
				idc=217142;
			};
			class Picture_43: Picture_0
			{
				idc=217143;
			};
			class Picture_44: Picture_0
			{
				idc=217144;
			};
			class Picture_45: Picture_0
			{
				idc=217145;
			};
			class Picture_46: Picture_0
			{
				idc=217146;
			};
			class Picture_47: Picture_0
			{
				idc=217147;
			};
			class Picture_48: Picture_0
			{
				idc=217148;
			};
			class Picture_49: Picture_0
			{
				idc=217149;
			};
			class Picture_50: Picture_0
			{
				idc=217150;
			};
			class PictureShadow_0: Picture_0
			{
				idc=217200;
			};
			class PictureShadow_1: PictureShadow_0
			{
				idc=217201;
			};
			class PictureShadow_2: PictureShadow_0
			{
				idc=217202;
			};
			class PictureShadow_3: PictureShadow_0
			{
				idc=217203;
			};
			class PictureShadow_4: PictureShadow_0
			{
				idc=217204;
			};
			class PictureShadow_5: PictureShadow_0
			{
				idc=217205;
			};
			class PictureShadow_6: PictureShadow_0
			{
				idc=217206;
			};
			class PictureShadow_7: PictureShadow_0
			{
				idc=217207;
			};
			class PictureShadow_8: PictureShadow_0
			{
				idc=217208;
			};
			class PictureShadow_9: PictureShadow_0
			{
				idc=217209;
			};
			class Text_0: Text_0
			{
				idc=217300;
			};
			class Text_1: Text_0
			{
				idc=217301;
			};
			class Text_2: Text_0
			{
				idc=217302;
			};
			class Text_3: Text_0
			{
				idc=217303;
			};
			class Text_4: Text_0
			{
				idc=217304;
			};
			class Text_5: Text_0
			{
				idc=217305;
			};
			class Text_6: Text_0
			{
				idc=217306;
			};
			class Text_7: Text_0
			{
				idc=217307;
			};
			class Text_8: Text_0
			{
				idc=217308;
			};
			class Text_9: Text_0
			{
				idc=217309;
			};
		};
	};
	class RscMS_globe18: RscMS_globe0
	{
		onload="uinamespace setvariable ['Globe_RscMS18',_this select 0];";
		class controls: controls
		{
			class Picture_0: Picture_0
			{
				idc=218100;
			};
			class Picture_1: Picture_0
			{
				idc=218101;
			};
			class Picture_2: Picture_0
			{
				idc=218102;
			};
			class Picture_3: Picture_0
			{
				idc=218103;
			};
			class Picture_4: Picture_0
			{
				idc=218104;
			};
			class Picture_5: Picture_0
			{
				idc=218105;
			};
			class Picture_6: Picture_0
			{
				idc=218106;
			};
			class Picture_7: Picture_0
			{
				idc=218107;
			};
			class Picture_8: Picture_0
			{
				idc=218108;
			};
			class Picture_9: Picture_0
			{
				idc=218109;
			};
			class Picture_10: Picture_0
			{
				idc=218110;
			};
			class Picture_11: Picture_0
			{
				idc=218111;
			};
			class Picture_12: Picture_0
			{
				idc=218112;
			};
			class Picture_13: Picture_0
			{
				idc=218113;
			};
			class Picture_14: Picture_0
			{
				idc=218114;
			};
			class Picture_15: Picture_0
			{
				idc=218115;
			};
			class Picture_16: Picture_0
			{
				idc=218116;
			};
			class Picture_17: Picture_0
			{
				idc=218117;
			};
			class Picture_18: Picture_0
			{
				idc=218118;
			};
			class Picture_19: Picture_0
			{
				idc=218119;
			};
			class Picture_20: Picture_0
			{
				idc=218120;
			};
			class Picture_21: Picture_0
			{
				idc=218121;
			};
			class Picture_22: Picture_0
			{
				idc=218122;
			};
			class Picture_23: Picture_0
			{
				idc=218123;
			};
			class Picture_24: Picture_0
			{
				idc=218124;
			};
			class Picture_25: Picture_0
			{
				idc=218200;
			};
			class Picture_26: Picture_0
			{
				idc=218126;
			};
			class Picture_27: Picture_0
			{
				idc=218127;
			};
			class Picture_28: Picture_0
			{
				idc=218128;
			};
			class Picture_29: Picture_0
			{
				idc=218129;
			};
			class Picture_30: Picture_0
			{
				idc=218130;
			};
			class Picture_31: Picture_0
			{
				idc=218131;
			};
			class Picture_32: Picture_0
			{
				idc=218132;
			};
			class Picture_33: Picture_0
			{
				idc=218133;
			};
			class Picture_34: Picture_0
			{
				idc=218134;
			};
			class Picture_35: Picture_0
			{
				idc=218135;
			};
			class Picture_36: Picture_0
			{
				idc=218136;
			};
			class Picture_37: Picture_0
			{
				idc=218137;
			};
			class Picture_38: Picture_0
			{
				idc=218138;
			};
			class Picture_39: Picture_0
			{
				idc=218139;
			};
			class Picture_40: Picture_0
			{
				idc=218140;
			};
			class Picture_41: Picture_0
			{
				idc=218141;
			};
			class Picture_42: Picture_0
			{
				idc=218142;
			};
			class Picture_43: Picture_0
			{
				idc=218143;
			};
			class Picture_44: Picture_0
			{
				idc=218144;
			};
			class Picture_45: Picture_0
			{
				idc=218145;
			};
			class Picture_46: Picture_0
			{
				idc=218146;
			};
			class Picture_47: Picture_0
			{
				idc=218147;
			};
			class Picture_48: Picture_0
			{
				idc=218148;
			};
			class Picture_49: Picture_0
			{
				idc=218149;
			};
			class Picture_50: Picture_0
			{
				idc=218150;
			};
			class PictureShadow_0: Picture_0
			{
				idc=218200;
			};
			class PictureShadow_1: PictureShadow_0
			{
				idc=218201;
			};
			class PictureShadow_2: PictureShadow_0
			{
				idc=218202;
			};
			class PictureShadow_3: PictureShadow_0
			{
				idc=218203;
			};
			class PictureShadow_4: PictureShadow_0
			{
				idc=218204;
			};
			class PictureShadow_5: PictureShadow_0
			{
				idc=218205;
			};
			class PictureShadow_6: PictureShadow_0
			{
				idc=218206;
			};
			class PictureShadow_7: PictureShadow_0
			{
				idc=218207;
			};
			class PictureShadow_8: PictureShadow_0
			{
				idc=218208;
			};
			class PictureShadow_9: PictureShadow_0
			{
				idc=218209;
			};
			class Text_0: Text_0
			{
				idc=218300;
			};
			class Text_1: Text_0
			{
				idc=218301;
			};
			class Text_2: Text_0
			{
				idc=218302;
			};
			class Text_3: Text_0
			{
				idc=218303;
			};
			class Text_4: Text_0
			{
				idc=218304;
			};
			class Text_5: Text_0
			{
				idc=218305;
			};
			class Text_6: Text_0
			{
				idc=218306;
			};
			class Text_7: Text_0
			{
				idc=218307;
			};
			class Text_8: Text_0
			{
				idc=218308;
			};
			class Text_9: Text_0
			{
				idc=218309;
			};
		};
	};
	class RscMS_globe19: RscMS_globe0
	{
		onload="uinamespace setvariable ['Globe_RscMS19',_this select 0];";
		class controls: controls
		{
			class Picture_0: Picture_0
			{
				idc=219100;
			};
			class Picture_1: Picture_0
			{
				idc=219101;
			};
			class Picture_2: Picture_0
			{
				idc=219102;
			};
			class Picture_3: Picture_0
			{
				idc=219103;
			};
			class Picture_4: Picture_0
			{
				idc=219104;
			};
			class Picture_5: Picture_0
			{
				idc=219105;
			};
			class Picture_6: Picture_0
			{
				idc=219106;
			};
			class Picture_7: Picture_0
			{
				idc=219107;
			};
			class Picture_8: Picture_0
			{
				idc=219108;
			};
			class Picture_9: Picture_0
			{
				idc=219109;
			};
			class Picture_10: Picture_0
			{
				idc=219110;
			};
			class Picture_11: Picture_0
			{
				idc=219111;
			};
			class Picture_12: Picture_0
			{
				idc=219112;
			};
			class Picture_13: Picture_0
			{
				idc=219113;
			};
			class Picture_14: Picture_0
			{
				idc=219114;
			};
			class Picture_15: Picture_0
			{
				idc=219115;
			};
			class Picture_16: Picture_0
			{
				idc=219116;
			};
			class Picture_17: Picture_0
			{
				idc=219117;
			};
			class Picture_18: Picture_0
			{
				idc=219118;
			};
			class Picture_19: Picture_0
			{
				idc=219119;
			};
			class Picture_20: Picture_0
			{
				idc=219120;
			};
			class Picture_21: Picture_0
			{
				idc=219121;
			};
			class Picture_22: Picture_0
			{
				idc=219122;
			};
			class Picture_23: Picture_0
			{
				idc=219123;
			};
			class Picture_24: Picture_0
			{
				idc=219124;
			};
			class Picture_25: Picture_0
			{
				idc=219200;
			};
			class Picture_26: Picture_0
			{
				idc=219126;
			};
			class Picture_27: Picture_0
			{
				idc=219127;
			};
			class Picture_28: Picture_0
			{
				idc=219128;
			};
			class Picture_29: Picture_0
			{
				idc=219129;
			};
			class Picture_30: Picture_0
			{
				idc=219130;
			};
			class Picture_31: Picture_0
			{
				idc=219131;
			};
			class Picture_32: Picture_0
			{
				idc=219132;
			};
			class Picture_33: Picture_0
			{
				idc=219133;
			};
			class Picture_34: Picture_0
			{
				idc=219134;
			};
			class Picture_35: Picture_0
			{
				idc=219135;
			};
			class Picture_36: Picture_0
			{
				idc=219136;
			};
			class Picture_37: Picture_0
			{
				idc=219137;
			};
			class Picture_38: Picture_0
			{
				idc=219138;
			};
			class Picture_39: Picture_0
			{
				idc=219139;
			};
			class Picture_40: Picture_0
			{
				idc=219140;
			};
			class Picture_41: Picture_0
			{
				idc=219141;
			};
			class Picture_42: Picture_0
			{
				idc=219142;
			};
			class Picture_43: Picture_0
			{
				idc=219143;
			};
			class Picture_44: Picture_0
			{
				idc=219144;
			};
			class Picture_45: Picture_0
			{
				idc=219145;
			};
			class Picture_46: Picture_0
			{
				idc=219146;
			};
			class Picture_47: Picture_0
			{
				idc=219147;
			};
			class Picture_48: Picture_0
			{
				idc=219148;
			};
			class Picture_49: Picture_0
			{
				idc=219149;
			};
			class Picture_50: Picture_0
			{
				idc=219150;
			};
			class PictureShadow_0: Picture_0
			{
				idc=219200;
			};
			class PictureShadow_1: PictureShadow_0
			{
				idc=219201;
			};
			class PictureShadow_2: PictureShadow_0
			{
				idc=219202;
			};
			class PictureShadow_3: PictureShadow_0
			{
				idc=219203;
			};
			class PictureShadow_4: PictureShadow_0
			{
				idc=219204;
			};
			class PictureShadow_5: PictureShadow_0
			{
				idc=219205;
			};
			class PictureShadow_6: PictureShadow_0
			{
				idc=219206;
			};
			class PictureShadow_7: PictureShadow_0
			{
				idc=219207;
			};
			class PictureShadow_8: PictureShadow_0
			{
				idc=219208;
			};
			class PictureShadow_9: PictureShadow_0
			{
				idc=219209;
			};
			class Text_0: Text_0
			{
				idc=219300;
			};
			class Text_1: Text_0
			{
				idc=219301;
			};
			class Text_2: Text_0
			{
				idc=219302;
			};
			class Text_3: Text_0
			{
				idc=219303;
			};
			class Text_4: Text_0
			{
				idc=219304;
			};
			class Text_5: Text_0
			{
				idc=219305;
			};
			class Text_6: Text_0
			{
				idc=219306;
			};
			class Text_7: Text_0
			{
				idc=219307;
			};
			class Text_8: Text_0
			{
				idc=219308;
			};
			class Text_9: Text_0
			{
				idc=219309;
			};
		};
	};
	class RscMS_globe20: RscMS_globe0
	{
		onload="uinamespace setvariable ['Globe_RscMS20',_this select 0];";
		class controls: controls
		{
			class Picture_0: Picture_0
			{
				idc=220100;
			};
			class Picture_1: Picture_0
			{
				idc=220101;
			};
			class Picture_2: Picture_0
			{
				idc=220102;
			};
			class Picture_3: Picture_0
			{
				idc=220103;
			};
			class Picture_4: Picture_0
			{
				idc=220104;
			};
			class Picture_5: Picture_0
			{
				idc=220105;
			};
			class Picture_6: Picture_0
			{
				idc=220106;
			};
			class Picture_7: Picture_0
			{
				idc=220107;
			};
			class Picture_8: Picture_0
			{
				idc=220108;
			};
			class Picture_9: Picture_0
			{
				idc=220109;
			};
			class Picture_10: Picture_0
			{
				idc=220110;
			};
			class Picture_11: Picture_0
			{
				idc=220111;
			};
			class Picture_12: Picture_0
			{
				idc=220112;
			};
			class Picture_13: Picture_0
			{
				idc=220113;
			};
			class Picture_14: Picture_0
			{
				idc=220114;
			};
			class Picture_15: Picture_0
			{
				idc=220115;
			};
			class Picture_16: Picture_0
			{
				idc=220116;
			};
			class Picture_17: Picture_0
			{
				idc=220117;
			};
			class Picture_18: Picture_0
			{
				idc=220118;
			};
			class Picture_19: Picture_0
			{
				idc=220119;
			};
			class Picture_20: Picture_0
			{
				idc=220120;
			};
			class Picture_21: Picture_0
			{
				idc=220121;
			};
			class Picture_22: Picture_0
			{
				idc=220122;
			};
			class Picture_23: Picture_0
			{
				idc=220123;
			};
			class Picture_24: Picture_0
			{
				idc=220124;
			};
			class Picture_25: Picture_0
			{
				idc=220200;
			};
			class Picture_26: Picture_0
			{
				idc=220126;
			};
			class Picture_27: Picture_0
			{
				idc=220127;
			};
			class Picture_28: Picture_0
			{
				idc=220128;
			};
			class Picture_29: Picture_0
			{
				idc=220129;
			};
			class Picture_30: Picture_0
			{
				idc=220130;
			};
			class Picture_31: Picture_0
			{
				idc=220131;
			};
			class Picture_32: Picture_0
			{
				idc=220132;
			};
			class Picture_33: Picture_0
			{
				idc=220133;
			};
			class Picture_34: Picture_0
			{
				idc=220134;
			};
			class Picture_35: Picture_0
			{
				idc=220135;
			};
			class Picture_36: Picture_0
			{
				idc=220136;
			};
			class Picture_37: Picture_0
			{
				idc=220137;
			};
			class Picture_38: Picture_0
			{
				idc=220138;
			};
			class Picture_39: Picture_0
			{
				idc=220139;
			};
			class Picture_40: Picture_0
			{
				idc=220140;
			};
			class Picture_41: Picture_0
			{
				idc=220141;
			};
			class Picture_42: Picture_0
			{
				idc=220142;
			};
			class Picture_43: Picture_0
			{
				idc=220143;
			};
			class Picture_44: Picture_0
			{
				idc=220144;
			};
			class Picture_45: Picture_0
			{
				idc=220145;
			};
			class Picture_46: Picture_0
			{
				idc=220146;
			};
			class Picture_47: Picture_0
			{
				idc=220147;
			};
			class Picture_48: Picture_0
			{
				idc=220148;
			};
			class Picture_49: Picture_0
			{
				idc=220149;
			};
			class Picture_50: Picture_0
			{
				idc=220150;
			};
			class PictureShadow_0: Picture_0
			{
				idc=220200;
			};
			class PictureShadow_1: PictureShadow_0
			{
				idc=220201;
			};
			class PictureShadow_2: PictureShadow_0
			{
				idc=220202;
			};
			class PictureShadow_3: PictureShadow_0
			{
				idc=220203;
			};
			class PictureShadow_4: PictureShadow_0
			{
				idc=220204;
			};
			class PictureShadow_5: PictureShadow_0
			{
				idc=220205;
			};
			class PictureShadow_6: PictureShadow_0
			{
				idc=220206;
			};
			class PictureShadow_7: PictureShadow_0
			{
				idc=220207;
			};
			class PictureShadow_8: PictureShadow_0
			{
				idc=220208;
			};
			class PictureShadow_9: PictureShadow_0
			{
				idc=220209;
			};
			class Text_0: Text_0
			{
				idc=220300;
			};
			class Text_1: Text_0
			{
				idc=220301;
			};
			class Text_2: Text_0
			{
				idc=220302;
			};
			class Text_3: Text_0
			{
				idc=220303;
			};
			class Text_4: Text_0
			{
				idc=220304;
			};
			class Text_5: Text_0
			{
				idc=220305;
			};
			class Text_6: Text_0
			{
				idc=220306;
			};
			class Text_7: Text_0
			{
				idc=220307;
			};
			class Text_8: Text_0
			{
				idc=220308;
			};
			class Text_9: Text_0
			{
				idc=220309;
			};
		};
	};
	class RscMS_globe21: RscMS_globe0
	{
		onload="uinamespace setvariable ['Globe_RscMS21',_this select 0];";
		class controls: controls
		{
			class Picture_0: Picture_0
			{
				idc=221100;
			};
			class Picture_1: Picture_0
			{
				idc=221101;
			};
			class Picture_2: Picture_0
			{
				idc=221102;
			};
			class Picture_3: Picture_0
			{
				idc=221103;
			};
			class Picture_4: Picture_0
			{
				idc=221104;
			};
			class Picture_5: Picture_0
			{
				idc=221105;
			};
			class Picture_6: Picture_0
			{
				idc=221106;
			};
			class Picture_7: Picture_0
			{
				idc=221107;
			};
			class Picture_8: Picture_0
			{
				idc=221108;
			};
			class Picture_9: Picture_0
			{
				idc=221109;
			};
			class Picture_10: Picture_0
			{
				idc=221110;
			};
			class Picture_11: Picture_0
			{
				idc=221111;
			};
			class Picture_12: Picture_0
			{
				idc=221112;
			};
			class Picture_13: Picture_0
			{
				idc=221113;
			};
			class Picture_14: Picture_0
			{
				idc=221114;
			};
			class Picture_15: Picture_0
			{
				idc=221115;
			};
			class Picture_16: Picture_0
			{
				idc=221116;
			};
			class Picture_17: Picture_0
			{
				idc=221117;
			};
			class Picture_18: Picture_0
			{
				idc=221118;
			};
			class Picture_19: Picture_0
			{
				idc=221119;
			};
			class Picture_20: Picture_0
			{
				idc=221120;
			};
			class Picture_21: Picture_0
			{
				idc=221121;
			};
			class Picture_22: Picture_0
			{
				idc=221122;
			};
			class Picture_23: Picture_0
			{
				idc=221123;
			};
			class Picture_24: Picture_0
			{
				idc=221124;
			};
			class Picture_25: Picture_0
			{
				idc=221200;
			};
			class Picture_26: Picture_0
			{
				idc=221126;
			};
			class Picture_27: Picture_0
			{
				idc=221127;
			};
			class Picture_28: Picture_0
			{
				idc=221128;
			};
			class Picture_29: Picture_0
			{
				idc=221129;
			};
			class Picture_30: Picture_0
			{
				idc=221130;
			};
			class Picture_31: Picture_0
			{
				idc=221131;
			};
			class Picture_32: Picture_0
			{
				idc=221132;
			};
			class Picture_33: Picture_0
			{
				idc=221133;
			};
			class Picture_34: Picture_0
			{
				idc=221134;
			};
			class Picture_35: Picture_0
			{
				idc=221135;
			};
			class Picture_36: Picture_0
			{
				idc=221136;
			};
			class Picture_37: Picture_0
			{
				idc=221137;
			};
			class Picture_38: Picture_0
			{
				idc=221138;
			};
			class Picture_39: Picture_0
			{
				idc=221139;
			};
			class Picture_40: Picture_0
			{
				idc=221140;
			};
			class Picture_41: Picture_0
			{
				idc=221141;
			};
			class Picture_42: Picture_0
			{
				idc=221142;
			};
			class Picture_43: Picture_0
			{
				idc=221143;
			};
			class Picture_44: Picture_0
			{
				idc=221144;
			};
			class Picture_45: Picture_0
			{
				idc=221145;
			};
			class Picture_46: Picture_0
			{
				idc=221146;
			};
			class Picture_47: Picture_0
			{
				idc=221147;
			};
			class Picture_48: Picture_0
			{
				idc=221148;
			};
			class Picture_49: Picture_0
			{
				idc=221149;
			};
			class Picture_50: Picture_0
			{
				idc=221150;
			};
			class PictureShadow_0: Picture_0
			{
				idc=221200;
			};
			class PictureShadow_1: PictureShadow_0
			{
				idc=221201;
			};
			class PictureShadow_2: PictureShadow_0
			{
				idc=221202;
			};
			class PictureShadow_3: PictureShadow_0
			{
				idc=221203;
			};
			class PictureShadow_4: PictureShadow_0
			{
				idc=221204;
			};
			class PictureShadow_5: PictureShadow_0
			{
				idc=221205;
			};
			class PictureShadow_6: PictureShadow_0
			{
				idc=221206;
			};
			class PictureShadow_7: PictureShadow_0
			{
				idc=221207;
			};
			class PictureShadow_8: PictureShadow_0
			{
				idc=221208;
			};
			class PictureShadow_9: PictureShadow_0
			{
				idc=221209;
			};
			class Text_0: Text_0
			{
				idc=221300;
			};
			class Text_1: Text_0
			{
				idc=221301;
			};
			class Text_2: Text_0
			{
				idc=221302;
			};
			class Text_3: Text_0
			{
				idc=221303;
			};
			class Text_4: Text_0
			{
				idc=221304;
			};
			class Text_5: Text_0
			{
				idc=221305;
			};
			class Text_6: Text_0
			{
				idc=221306;
			};
			class Text_7: Text_0
			{
				idc=221307;
			};
			class Text_8: Text_0
			{
				idc=221308;
			};
			class Text_9: Text_0
			{
				idc=221309;
			};
		};
	};
	class RscMS_globe22: RscMS_globe0
	{
		onload="uinamespace setvariable ['Globe_RscMS22',_this select 0];";
		class controls: controls
		{
			class Picture_0: Picture_0
			{
				idc=222100;
			};
			class Picture_1: Picture_0
			{
				idc=222101;
			};
			class Picture_2: Picture_0
			{
				idc=222102;
			};
			class Picture_3: Picture_0
			{
				idc=222103;
			};
			class Picture_4: Picture_0
			{
				idc=222104;
			};
			class Picture_5: Picture_0
			{
				idc=222105;
			};
			class Picture_6: Picture_0
			{
				idc=222106;
			};
			class Picture_7: Picture_0
			{
				idc=222107;
			};
			class Picture_8: Picture_0
			{
				idc=222108;
			};
			class Picture_9: Picture_0
			{
				idc=222109;
			};
			class Picture_10: Picture_0
			{
				idc=222110;
			};
			class Picture_11: Picture_0
			{
				idc=222111;
			};
			class Picture_12: Picture_0
			{
				idc=222112;
			};
			class Picture_13: Picture_0
			{
				idc=222113;
			};
			class Picture_14: Picture_0
			{
				idc=222114;
			};
			class Picture_15: Picture_0
			{
				idc=222115;
			};
			class Picture_16: Picture_0
			{
				idc=222116;
			};
			class Picture_17: Picture_0
			{
				idc=222117;
			};
			class Picture_18: Picture_0
			{
				idc=222118;
			};
			class Picture_19: Picture_0
			{
				idc=222119;
			};
			class Picture_20: Picture_0
			{
				idc=222120;
			};
			class Picture_21: Picture_0
			{
				idc=222121;
			};
			class Picture_22: Picture_0
			{
				idc=222122;
			};
			class Picture_23: Picture_0
			{
				idc=222123;
			};
			class Picture_24: Picture_0
			{
				idc=222124;
			};
			class Picture_25: Picture_0
			{
				idc=222200;
			};
			class Picture_26: Picture_0
			{
				idc=222126;
			};
			class Picture_27: Picture_0
			{
				idc=222127;
			};
			class Picture_28: Picture_0
			{
				idc=222128;
			};
			class Picture_29: Picture_0
			{
				idc=222129;
			};
			class Picture_30: Picture_0
			{
				idc=222130;
			};
			class Picture_31: Picture_0
			{
				idc=222131;
			};
			class Picture_32: Picture_0
			{
				idc=222132;
			};
			class Picture_33: Picture_0
			{
				idc=222133;
			};
			class Picture_34: Picture_0
			{
				idc=222134;
			};
			class Picture_35: Picture_0
			{
				idc=222135;
			};
			class Picture_36: Picture_0
			{
				idc=222136;
			};
			class Picture_37: Picture_0
			{
				idc=222137;
			};
			class Picture_38: Picture_0
			{
				idc=222138;
			};
			class Picture_39: Picture_0
			{
				idc=222139;
			};
			class Picture_40: Picture_0
			{
				idc=222140;
			};
			class Picture_41: Picture_0
			{
				idc=222141;
			};
			class Picture_42: Picture_0
			{
				idc=222142;
			};
			class Picture_43: Picture_0
			{
				idc=222143;
			};
			class Picture_44: Picture_0
			{
				idc=222144;
			};
			class Picture_45: Picture_0
			{
				idc=222145;
			};
			class Picture_46: Picture_0
			{
				idc=222146;
			};
			class Picture_47: Picture_0
			{
				idc=222147;
			};
			class Picture_48: Picture_0
			{
				idc=222148;
			};
			class Picture_49: Picture_0
			{
				idc=222149;
			};
			class Picture_50: Picture_0
			{
				idc=222150;
			};
			class PictureShadow_0: Picture_0
			{
				idc=222200;
			};
			class PictureShadow_1: PictureShadow_0
			{
				idc=222201;
			};
			class PictureShadow_2: PictureShadow_0
			{
				idc=222202;
			};
			class PictureShadow_3: PictureShadow_0
			{
				idc=222203;
			};
			class PictureShadow_4: PictureShadow_0
			{
				idc=222204;
			};
			class PictureShadow_5: PictureShadow_0
			{
				idc=222205;
			};
			class PictureShadow_6: PictureShadow_0
			{
				idc=222206;
			};
			class PictureShadow_7: PictureShadow_0
			{
				idc=222207;
			};
			class PictureShadow_8: PictureShadow_0
			{
				idc=222208;
			};
			class PictureShadow_9: PictureShadow_0
			{
				idc=222209;
			};
			class Text_0: Text_0
			{
				idc=222300;
			};
			class Text_1: Text_0
			{
				idc=222301;
			};
			class Text_2: Text_0
			{
				idc=222302;
			};
			class Text_3: Text_0
			{
				idc=222303;
			};
			class Text_4: Text_0
			{
				idc=222304;
			};
			class Text_5: Text_0
			{
				idc=222305;
			};
			class Text_6: Text_0
			{
				idc=222306;
			};
			class Text_7: Text_0
			{
				idc=222307;
			};
			class Text_8: Text_0
			{
				idc=222308;
			};
			class Text_9: Text_0
			{
				idc=222309;
			};
		};
	};
	class RscMS_globe23: RscMS_globe0
	{
		onload="uinamespace setvariable ['Globe_RscMS23',_this select 0];";
		class controls: controls
		{
			class Picture_0: Picture_0
			{
				idc=223100;
			};
			class Picture_1: Picture_0
			{
				idc=223101;
			};
			class Picture_2: Picture_0
			{
				idc=223102;
			};
			class Picture_3: Picture_0
			{
				idc=223103;
			};
			class Picture_4: Picture_0
			{
				idc=223104;
			};
			class Picture_5: Picture_0
			{
				idc=223105;
			};
			class Picture_6: Picture_0
			{
				idc=223106;
			};
			class Picture_7: Picture_0
			{
				idc=223107;
			};
			class Picture_8: Picture_0
			{
				idc=223108;
			};
			class Picture_9: Picture_0
			{
				idc=223109;
			};
			class Picture_10: Picture_0
			{
				idc=223110;
			};
			class Picture_11: Picture_0
			{
				idc=223111;
			};
			class Picture_12: Picture_0
			{
				idc=223112;
			};
			class Picture_13: Picture_0
			{
				idc=223113;
			};
			class Picture_14: Picture_0
			{
				idc=223114;
			};
			class Picture_15: Picture_0
			{
				idc=223115;
			};
			class Picture_16: Picture_0
			{
				idc=223116;
			};
			class Picture_17: Picture_0
			{
				idc=223117;
			};
			class Picture_18: Picture_0
			{
				idc=223118;
			};
			class Picture_19: Picture_0
			{
				idc=223119;
			};
			class Picture_20: Picture_0
			{
				idc=223120;
			};
			class Picture_21: Picture_0
			{
				idc=223121;
			};
			class Picture_22: Picture_0
			{
				idc=223122;
			};
			class Picture_23: Picture_0
			{
				idc=223123;
			};
			class Picture_24: Picture_0
			{
				idc=223124;
			};
			class Picture_25: Picture_0
			{
				idc=223200;
			};
			class Picture_26: Picture_0
			{
				idc=223126;
			};
			class Picture_27: Picture_0
			{
				idc=223127;
			};
			class Picture_28: Picture_0
			{
				idc=223128;
			};
			class Picture_29: Picture_0
			{
				idc=223129;
			};
			class Picture_30: Picture_0
			{
				idc=223130;
			};
			class Picture_31: Picture_0
			{
				idc=223131;
			};
			class Picture_32: Picture_0
			{
				idc=223132;
			};
			class Picture_33: Picture_0
			{
				idc=223133;
			};
			class Picture_34: Picture_0
			{
				idc=223134;
			};
			class Picture_35: Picture_0
			{
				idc=223135;
			};
			class Picture_36: Picture_0
			{
				idc=223136;
			};
			class Picture_37: Picture_0
			{
				idc=223137;
			};
			class Picture_38: Picture_0
			{
				idc=223138;
			};
			class Picture_39: Picture_0
			{
				idc=223139;
			};
			class Picture_40: Picture_0
			{
				idc=223140;
			};
			class Picture_41: Picture_0
			{
				idc=223141;
			};
			class Picture_42: Picture_0
			{
				idc=223142;
			};
			class Picture_43: Picture_0
			{
				idc=223143;
			};
			class Picture_44: Picture_0
			{
				idc=223144;
			};
			class Picture_45: Picture_0
			{
				idc=223145;
			};
			class Picture_46: Picture_0
			{
				idc=223146;
			};
			class Picture_47: Picture_0
			{
				idc=223147;
			};
			class Picture_48: Picture_0
			{
				idc=223148;
			};
			class Picture_49: Picture_0
			{
				idc=223149;
			};
			class Picture_50: Picture_0
			{
				idc=223150;
			};
			class PictureShadow_0: Picture_0
			{
				idc=223200;
			};
			class PictureShadow_1: PictureShadow_0
			{
				idc=223201;
			};
			class PictureShadow_2: PictureShadow_0
			{
				idc=223202;
			};
			class PictureShadow_3: PictureShadow_0
			{
				idc=223203;
			};
			class PictureShadow_4: PictureShadow_0
			{
				idc=223204;
			};
			class PictureShadow_5: PictureShadow_0
			{
				idc=223205;
			};
			class PictureShadow_6: PictureShadow_0
			{
				idc=223206;
			};
			class PictureShadow_7: PictureShadow_0
			{
				idc=223207;
			};
			class PictureShadow_8: PictureShadow_0
			{
				idc=223208;
			};
			class PictureShadow_9: PictureShadow_0
			{
				idc=223209;
			};
			class Text_0: Text_0
			{
				idc=223300;
			};
			class Text_1: Text_0
			{
				idc=223301;
			};
			class Text_2: Text_0
			{
				idc=223302;
			};
			class Text_3: Text_0
			{
				idc=223303;
			};
			class Text_4: Text_0
			{
				idc=223304;
			};
			class Text_5: Text_0
			{
				idc=223305;
			};
			class Text_6: Text_0
			{
				idc=223306;
			};
			class Text_7: Text_0
			{
				idc=223307;
			};
			class Text_8: Text_0
			{
				idc=223308;
			};
			class Text_9: Text_0
			{
				idc=223309;
			};
		};
	};
	class RscMS_globe24: RscMS_globe0
	{
		onload="uinamespace setvariable ['Globe_RscMS24',_this select 0];";
		class controls: controls
		{
			class Picture_0: Picture_0
			{
				idc=224100;
			};
			class Picture_1: Picture_0
			{
				idc=224101;
			};
			class Picture_2: Picture_0
			{
				idc=224102;
			};
			class Picture_3: Picture_0
			{
				idc=224103;
			};
			class Picture_4: Picture_0
			{
				idc=224104;
			};
			class Picture_5: Picture_0
			{
				idc=224105;
			};
			class Picture_6: Picture_0
			{
				idc=224106;
			};
			class Picture_7: Picture_0
			{
				idc=224107;
			};
			class Picture_8: Picture_0
			{
				idc=224108;
			};
			class Picture_9: Picture_0
			{
				idc=224109;
			};
			class Picture_10: Picture_0
			{
				idc=224110;
			};
			class Picture_11: Picture_0
			{
				idc=224111;
			};
			class Picture_12: Picture_0
			{
				idc=224112;
			};
			class Picture_13: Picture_0
			{
				idc=224113;
			};
			class Picture_14: Picture_0
			{
				idc=224114;
			};
			class Picture_15: Picture_0
			{
				idc=224115;
			};
			class Picture_16: Picture_0
			{
				idc=224116;
			};
			class Picture_17: Picture_0
			{
				idc=224117;
			};
			class Picture_18: Picture_0
			{
				idc=224118;
			};
			class Picture_19: Picture_0
			{
				idc=224119;
			};
			class Picture_20: Picture_0
			{
				idc=224120;
			};
			class Picture_21: Picture_0
			{
				idc=224121;
			};
			class Picture_22: Picture_0
			{
				idc=224122;
			};
			class Picture_23: Picture_0
			{
				idc=224123;
			};
			class Picture_24: Picture_0
			{
				idc=224124;
			};
			class Picture_25: Picture_0
			{
				idc=224200;
			};
			class Picture_26: Picture_0
			{
				idc=224126;
			};
			class Picture_27: Picture_0
			{
				idc=224127;
			};
			class Picture_28: Picture_0
			{
				idc=224128;
			};
			class Picture_29: Picture_0
			{
				idc=224129;
			};
			class Picture_30: Picture_0
			{
				idc=224130;
			};
			class Picture_31: Picture_0
			{
				idc=224131;
			};
			class Picture_32: Picture_0
			{
				idc=224132;
			};
			class Picture_33: Picture_0
			{
				idc=224133;
			};
			class Picture_34: Picture_0
			{
				idc=224134;
			};
			class Picture_35: Picture_0
			{
				idc=224135;
			};
			class Picture_36: Picture_0
			{
				idc=224136;
			};
			class Picture_37: Picture_0
			{
				idc=224137;
			};
			class Picture_38: Picture_0
			{
				idc=224138;
			};
			class Picture_39: Picture_0
			{
				idc=224139;
			};
			class Picture_40: Picture_0
			{
				idc=224140;
			};
			class Picture_41: Picture_0
			{
				idc=224141;
			};
			class Picture_42: Picture_0
			{
				idc=224142;
			};
			class Picture_43: Picture_0
			{
				idc=224143;
			};
			class Picture_44: Picture_0
			{
				idc=224144;
			};
			class Picture_45: Picture_0
			{
				idc=224145;
			};
			class Picture_46: Picture_0
			{
				idc=224146;
			};
			class Picture_47: Picture_0
			{
				idc=224147;
			};
			class Picture_48: Picture_0
			{
				idc=224148;
			};
			class Picture_49: Picture_0
			{
				idc=224149;
			};
			class Picture_50: Picture_0
			{
				idc=224150;
			};
			class PictureShadow_0: Picture_0
			{
				idc=224200;
			};
			class PictureShadow_1: PictureShadow_0
			{
				idc=224201;
			};
			class PictureShadow_2: PictureShadow_0
			{
				idc=224202;
			};
			class PictureShadow_3: PictureShadow_0
			{
				idc=224203;
			};
			class PictureShadow_4: PictureShadow_0
			{
				idc=224204;
			};
			class PictureShadow_5: PictureShadow_0
			{
				idc=224205;
			};
			class PictureShadow_6: PictureShadow_0
			{
				idc=224206;
			};
			class PictureShadow_7: PictureShadow_0
			{
				idc=224207;
			};
			class PictureShadow_8: PictureShadow_0
			{
				idc=224208;
			};
			class PictureShadow_9: PictureShadow_0
			{
				idc=224209;
			};
			class Text_0: Text_0
			{
				idc=224300;
			};
			class Text_1: Text_0
			{
				idc=224301;
			};
			class Text_2: Text_0
			{
				idc=224302;
			};
			class Text_3: Text_0
			{
				idc=224303;
			};
			class Text_4: Text_0
			{
				idc=224304;
			};
			class Text_5: Text_0
			{
				idc=224305;
			};
			class Text_6: Text_0
			{
				idc=224306;
			};
			class Text_7: Text_0
			{
				idc=224307;
			};
			class Text_8: Text_0
			{
				idc=224308;
			};
			class Text_9: Text_0
			{
				idc=224309;
			};
		};
	};
	class RscMS_globe25: RscMS_globe0
	{
		onload="uinamespace setvariable ['Globe_RscMS25',_this select 0];";
		class controls: controls
		{
			class Picture_0: Picture_0
			{
				idc=225100;
			};
			class Picture_1: Picture_0
			{
				idc=225101;
			};
			class Picture_2: Picture_0
			{
				idc=225102;
			};
			class Picture_3: Picture_0
			{
				idc=225103;
			};
			class Picture_4: Picture_0
			{
				idc=225104;
			};
			class Picture_5: Picture_0
			{
				idc=225105;
			};
			class Picture_6: Picture_0
			{
				idc=225106;
			};
			class Picture_7: Picture_0
			{
				idc=225107;
			};
			class Picture_8: Picture_0
			{
				idc=225108;
			};
			class Picture_9: Picture_0
			{
				idc=225109;
			};
			class Picture_10: Picture_0
			{
				idc=225110;
			};
			class Picture_11: Picture_0
			{
				idc=225111;
			};
			class Picture_12: Picture_0
			{
				idc=225112;
			};
			class Picture_13: Picture_0
			{
				idc=225113;
			};
			class Picture_14: Picture_0
			{
				idc=225114;
			};
			class Picture_15: Picture_0
			{
				idc=225115;
			};
			class Picture_16: Picture_0
			{
				idc=225116;
			};
			class Picture_17: Picture_0
			{
				idc=225117;
			};
			class Picture_18: Picture_0
			{
				idc=225118;
			};
			class Picture_19: Picture_0
			{
				idc=225119;
			};
			class Picture_20: Picture_0
			{
				idc=225120;
			};
			class Picture_21: Picture_0
			{
				idc=225121;
			};
			class Picture_22: Picture_0
			{
				idc=225122;
			};
			class Picture_23: Picture_0
			{
				idc=225123;
			};
			class Picture_24: Picture_0
			{
				idc=225124;
			};
			class Picture_25: Picture_0
			{
				idc=225200;
			};
			class Picture_26: Picture_0
			{
				idc=225126;
			};
			class Picture_27: Picture_0
			{
				idc=225127;
			};
			class Picture_28: Picture_0
			{
				idc=225128;
			};
			class Picture_29: Picture_0
			{
				idc=225129;
			};
			class Picture_30: Picture_0
			{
				idc=225130;
			};
			class Picture_31: Picture_0
			{
				idc=225131;
			};
			class Picture_32: Picture_0
			{
				idc=225132;
			};
			class Picture_33: Picture_0
			{
				idc=225133;
			};
			class Picture_34: Picture_0
			{
				idc=225134;
			};
			class Picture_35: Picture_0
			{
				idc=225135;
			};
			class Picture_36: Picture_0
			{
				idc=225136;
			};
			class Picture_37: Picture_0
			{
				idc=225137;
			};
			class Picture_38: Picture_0
			{
				idc=225138;
			};
			class Picture_39: Picture_0
			{
				idc=225139;
			};
			class Picture_40: Picture_0
			{
				idc=225140;
			};
			class Picture_41: Picture_0
			{
				idc=225141;
			};
			class Picture_42: Picture_0
			{
				idc=225142;
			};
			class Picture_43: Picture_0
			{
				idc=225143;
			};
			class Picture_44: Picture_0
			{
				idc=225144;
			};
			class Picture_45: Picture_0
			{
				idc=225145;
			};
			class Picture_46: Picture_0
			{
				idc=225146;
			};
			class Picture_47: Picture_0
			{
				idc=225147;
			};
			class Picture_48: Picture_0
			{
				idc=225148;
			};
			class Picture_49: Picture_0
			{
				idc=225149;
			};
			class Picture_50: Picture_0
			{
				idc=225150;
			};
			class PictureShadow_0: Picture_0
			{
				idc=225200;
			};
			class PictureShadow_1: PictureShadow_0
			{
				idc=225201;
			};
			class PictureShadow_2: PictureShadow_0
			{
				idc=225202;
			};
			class PictureShadow_3: PictureShadow_0
			{
				idc=225203;
			};
			class PictureShadow_4: PictureShadow_0
			{
				idc=225204;
			};
			class PictureShadow_5: PictureShadow_0
			{
				idc=225205;
			};
			class PictureShadow_6: PictureShadow_0
			{
				idc=225206;
			};
			class PictureShadow_7: PictureShadow_0
			{
				idc=225207;
			};
			class PictureShadow_8: PictureShadow_0
			{
				idc=225208;
			};
			class PictureShadow_9: PictureShadow_0
			{
				idc=225209;
			};
			class Text_0: Text_0
			{
				idc=225300;
			};
			class Text_1: Text_0
			{
				idc=225301;
			};
			class Text_2: Text_0
			{
				idc=225302;
			};
			class Text_3: Text_0
			{
				idc=225303;
			};
			class Text_4: Text_0
			{
				idc=225304;
			};
			class Text_5: Text_0
			{
				idc=225305;
			};
			class Text_6: Text_0
			{
				idc=225306;
			};
			class Text_7: Text_0
			{
				idc=225307;
			};
			class Text_8: Text_0
			{
				idc=225308;
			};
			class Text_9: Text_0
			{
				idc=225309;
			};
		};
	};
	class RscMS_globe26: RscMS_globe0
	{
		onload="uinamespace setvariable ['Globe_RscMS26',_this select 0];";
		class controls: controls
		{
			class Picture_0: Picture_0
			{
				idc=226100;
			};
			class Picture_1: Picture_0
			{
				idc=226101;
			};
			class Picture_2: Picture_0
			{
				idc=226102;
			};
			class Picture_3: Picture_0
			{
				idc=226103;
			};
			class Picture_4: Picture_0
			{
				idc=226104;
			};
			class Picture_5: Picture_0
			{
				idc=226105;
			};
			class Picture_6: Picture_0
			{
				idc=226106;
			};
			class Picture_7: Picture_0
			{
				idc=226107;
			};
			class Picture_8: Picture_0
			{
				idc=226108;
			};
			class Picture_9: Picture_0
			{
				idc=226109;
			};
			class Picture_10: Picture_0
			{
				idc=226110;
			};
			class Picture_11: Picture_0
			{
				idc=226111;
			};
			class Picture_12: Picture_0
			{
				idc=226112;
			};
			class Picture_13: Picture_0
			{
				idc=226113;
			};
			class Picture_14: Picture_0
			{
				idc=226114;
			};
			class Picture_15: Picture_0
			{
				idc=226115;
			};
			class Picture_16: Picture_0
			{
				idc=226116;
			};
			class Picture_17: Picture_0
			{
				idc=226117;
			};
			class Picture_18: Picture_0
			{
				idc=226118;
			};
			class Picture_19: Picture_0
			{
				idc=226119;
			};
			class Picture_20: Picture_0
			{
				idc=226120;
			};
			class Picture_21: Picture_0
			{
				idc=226121;
			};
			class Picture_22: Picture_0
			{
				idc=226122;
			};
			class Picture_23: Picture_0
			{
				idc=226123;
			};
			class Picture_24: Picture_0
			{
				idc=226124;
			};
			class Picture_25: Picture_0
			{
				idc=226200;
			};
			class Picture_26: Picture_0
			{
				idc=226126;
			};
			class Picture_27: Picture_0
			{
				idc=226127;
			};
			class Picture_28: Picture_0
			{
				idc=226128;
			};
			class Picture_29: Picture_0
			{
				idc=226129;
			};
			class Picture_30: Picture_0
			{
				idc=226130;
			};
			class Picture_31: Picture_0
			{
				idc=226131;
			};
			class Picture_32: Picture_0
			{
				idc=226132;
			};
			class Picture_33: Picture_0
			{
				idc=226133;
			};
			class Picture_34: Picture_0
			{
				idc=226134;
			};
			class Picture_35: Picture_0
			{
				idc=226135;
			};
			class Picture_36: Picture_0
			{
				idc=226136;
			};
			class Picture_37: Picture_0
			{
				idc=226137;
			};
			class Picture_38: Picture_0
			{
				idc=226138;
			};
			class Picture_39: Picture_0
			{
				idc=226139;
			};
			class Picture_40: Picture_0
			{
				idc=226140;
			};
			class Picture_41: Picture_0
			{
				idc=226141;
			};
			class Picture_42: Picture_0
			{
				idc=226142;
			};
			class Picture_43: Picture_0
			{
				idc=226143;
			};
			class Picture_44: Picture_0
			{
				idc=226144;
			};
			class Picture_45: Picture_0
			{
				idc=226145;
			};
			class Picture_46: Picture_0
			{
				idc=226146;
			};
			class Picture_47: Picture_0
			{
				idc=226147;
			};
			class Picture_48: Picture_0
			{
				idc=226148;
			};
			class Picture_49: Picture_0
			{
				idc=226149;
			};
			class Picture_50: Picture_0
			{
				idc=226150;
			};
			class PictureShadow_0: Picture_0
			{
				idc=226200;
			};
			class PictureShadow_1: PictureShadow_0
			{
				idc=226201;
			};
			class PictureShadow_2: PictureShadow_0
			{
				idc=226202;
			};
			class PictureShadow_3: PictureShadow_0
			{
				idc=226203;
			};
			class PictureShadow_4: PictureShadow_0
			{
				idc=226204;
			};
			class PictureShadow_5: PictureShadow_0
			{
				idc=226205;
			};
			class PictureShadow_6: PictureShadow_0
			{
				idc=226206;
			};
			class PictureShadow_7: PictureShadow_0
			{
				idc=226207;
			};
			class PictureShadow_8: PictureShadow_0
			{
				idc=226208;
			};
			class PictureShadow_9: PictureShadow_0
			{
				idc=226209;
			};
			class Text_0: Text_0
			{
				idc=226300;
			};
			class Text_1: Text_0
			{
				idc=226301;
			};
			class Text_2: Text_0
			{
				idc=226302;
			};
			class Text_3: Text_0
			{
				idc=226303;
			};
			class Text_4: Text_0
			{
				idc=226304;
			};
			class Text_5: Text_0
			{
				idc=226305;
			};
			class Text_6: Text_0
			{
				idc=226306;
			};
			class Text_7: Text_0
			{
				idc=226307;
			};
			class Text_8: Text_0
			{
				idc=226308;
			};
			class Text_9: Text_0
			{
				idc=226309;
			};
		};
	};
	class RscMS_globe27: RscMS_globe0
	{
		onload="uinamespace setvariable ['Globe_RscMS27',_this select 0];";
		class controls: controls
		{
			class Picture_0: Picture_0
			{
				idc=227100;
			};
			class Picture_1: Picture_0
			{
				idc=227101;
			};
			class Picture_2: Picture_0
			{
				idc=227102;
			};
			class Picture_3: Picture_0
			{
				idc=227103;
			};
			class Picture_4: Picture_0
			{
				idc=227104;
			};
			class Picture_5: Picture_0
			{
				idc=227105;
			};
			class Picture_6: Picture_0
			{
				idc=227106;
			};
			class Picture_7: Picture_0
			{
				idc=227107;
			};
			class Picture_8: Picture_0
			{
				idc=227108;
			};
			class Picture_9: Picture_0
			{
				idc=227109;
			};
			class Picture_10: Picture_0
			{
				idc=227110;
			};
			class Picture_11: Picture_0
			{
				idc=227111;
			};
			class Picture_12: Picture_0
			{
				idc=227112;
			};
			class Picture_13: Picture_0
			{
				idc=227113;
			};
			class Picture_14: Picture_0
			{
				idc=227114;
			};
			class Picture_15: Picture_0
			{
				idc=227115;
			};
			class Picture_16: Picture_0
			{
				idc=227116;
			};
			class Picture_17: Picture_0
			{
				idc=227117;
			};
			class Picture_18: Picture_0
			{
				idc=227118;
			};
			class Picture_19: Picture_0
			{
				idc=227119;
			};
			class Picture_20: Picture_0
			{
				idc=227120;
			};
			class Picture_21: Picture_0
			{
				idc=227121;
			};
			class Picture_22: Picture_0
			{
				idc=227122;
			};
			class Picture_23: Picture_0
			{
				idc=227123;
			};
			class Picture_24: Picture_0
			{
				idc=227124;
			};
			class Picture_25: Picture_0
			{
				idc=227200;
			};
			class Picture_26: Picture_0
			{
				idc=227126;
			};
			class Picture_27: Picture_0
			{
				idc=227127;
			};
			class Picture_28: Picture_0
			{
				idc=227128;
			};
			class Picture_29: Picture_0
			{
				idc=227129;
			};
			class Picture_30: Picture_0
			{
				idc=227130;
			};
			class Picture_31: Picture_0
			{
				idc=227131;
			};
			class Picture_32: Picture_0
			{
				idc=227132;
			};
			class Picture_33: Picture_0
			{
				idc=227133;
			};
			class Picture_34: Picture_0
			{
				idc=227134;
			};
			class Picture_35: Picture_0
			{
				idc=227135;
			};
			class Picture_36: Picture_0
			{
				idc=227136;
			};
			class Picture_37: Picture_0
			{
				idc=227137;
			};
			class Picture_38: Picture_0
			{
				idc=227138;
			};
			class Picture_39: Picture_0
			{
				idc=227139;
			};
			class Picture_40: Picture_0
			{
				idc=227140;
			};
			class Picture_41: Picture_0
			{
				idc=227141;
			};
			class Picture_42: Picture_0
			{
				idc=227142;
			};
			class Picture_43: Picture_0
			{
				idc=227143;
			};
			class Picture_44: Picture_0
			{
				idc=227144;
			};
			class Picture_45: Picture_0
			{
				idc=227145;
			};
			class Picture_46: Picture_0
			{
				idc=227146;
			};
			class Picture_47: Picture_0
			{
				idc=227147;
			};
			class Picture_48: Picture_0
			{
				idc=227148;
			};
			class Picture_49: Picture_0
			{
				idc=227149;
			};
			class Picture_50: Picture_0
			{
				idc=227150;
			};
			class PictureShadow_0: Picture_0
			{
				idc=227200;
			};
			class PictureShadow_1: PictureShadow_0
			{
				idc=227201;
			};
			class PictureShadow_2: PictureShadow_0
			{
				idc=227202;
			};
			class PictureShadow_3: PictureShadow_0
			{
				idc=227203;
			};
			class PictureShadow_4: PictureShadow_0
			{
				idc=227204;
			};
			class PictureShadow_5: PictureShadow_0
			{
				idc=227205;
			};
			class PictureShadow_6: PictureShadow_0
			{
				idc=227206;
			};
			class PictureShadow_7: PictureShadow_0
			{
				idc=227207;
			};
			class PictureShadow_8: PictureShadow_0
			{
				idc=227208;
			};
			class PictureShadow_9: PictureShadow_0
			{
				idc=227209;
			};
			class Text_0: Text_0
			{
				idc=227300;
			};
			class Text_1: Text_0
			{
				idc=227301;
			};
			class Text_2: Text_0
			{
				idc=227302;
			};
			class Text_3: Text_0
			{
				idc=227303;
			};
			class Text_4: Text_0
			{
				idc=227304;
			};
			class Text_5: Text_0
			{
				idc=227305;
			};
			class Text_6: Text_0
			{
				idc=227306;
			};
			class Text_7: Text_0
			{
				idc=227307;
			};
			class Text_8: Text_0
			{
				idc=227308;
			};
			class Text_9: Text_0
			{
				idc=227309;
			};
		};
	}; 
};
class CfgMarkerBrushes
{
	class Horizontal;
	class Vertical;
	class Grid;
	class FDiagonal;
	class BDiagonal;
	class DiagGrid;
	class Cross;
	class HorizontalBorder: Horizontal
	{
		name="$STR_Globe_CfgMarkerBrushes0";
		drawBorder=1;
	};
	class VerticalBorder: Vertical
	{
		name="$STR_Globe_CfgMarkerBrushes1";
		drawBorder=1;
	};
	class GridBorder: Grid
	{
		name="$STR_Globe_CfgMarkerBrushes2";
		drawBorder=1;
	};
	class FDiagonalBorder: FDiagonal
	{
		name="$STR_Globe_CfgMarkerBrushes3";
		drawBorder=1;
	};
	class BDiagonalBorder: BDiagonal
	{
		name="$STR_Globe_CfgMarkerBrushes4";
		drawBorder=1;
	};
	class DiagGridBorder: DiagGrid
	{
		name="$STR_Globe_CfgMarkerBrushes5";
		drawBorder=1;
	};
	class CrossBorder: Cross
	{
		name="$STR_Globe_CfgMarkerBrushes6";
		drawBorder=1;
	};
	class BrushNoData
	{
		name="NO DATA";
		texture="#(rgb,512,512,3)text(1,1,""EtelkaMonospacePro"",0.1,""#00000000"",""#80808080"",""NO DATA"")";
		drawBorder=0;
		scope=1;
	};
	class BrushSkull
	{
		name="$STR_A3_CfgVehicles_Land_humanSkull_F0";
		texture="\a3\ui_f_curator\data\cfgmarkers\kia_ca.paa";
		drawBorder=0;
		scope=1;
	};
};
class RscMenuStatus: RscSubmenu
{
	class Items
	{
		class SentCheering
		{
			title="$STR_Globe_RscMenuStatus_SentCheering0";
			shortcuts[]={};
			shortcutsAction="CommandingMenu3";
			command=-5;
			class Params
			{
				expression="[player,'SentCheering'] call expEden_fnc_sentStatusMessage";
			};
		};
		class SentCombatGeneric
		{
			title="$STR_Globe_RscMenuStatus_SentCombatGeneric0";
			shortcuts[]={};
			shortcutsAction="CommandingMenu3";
			command=-5;
			class Params
			{
				expression="[player,'SentCombatGeneric'] call expEden_fnc_sentStatusMessage";
			};
		};
		class SentEndangered
		{
			title="$STR_Globe_RscMenuStatus_SentEndangered0";
			shortcuts[]={};
			shortcutsAction="CommandingMenu3";
			command=-5;
			class Params
			{
				expression="[player,'SentEndangered'] call expEden_fnc_sentStatusMessage";
			};
		};
	};
};
class RscLoiteringMunitionUAVGridMenu
{
	idd=9000;
	movingEnable=1;
	class controls 
	{
		class Background: RscText
		{
			idc=-1;
			x="0.2 * safezoneW + safezoneX";
			y="0.15 * safezoneH + safezoneY";
			w="0.6 * safezoneW";
			h="0.7 * safezoneH";
			colorBackground[]={0, 0, 0, 0.7};
		};
		class Header: RscText 
		{
			idc=-1;
			style=2;
			text="$STR_Globe_RscLoiteringMunitionUAVGridMenu0";
			x="0.2 * safezoneW + safezoneX";
			y="0.15 * safezoneH + safezoneY";
			w="0.6 * safezoneW";
			h="0.04 * safezoneH";
			colorBackground[]=
			{
				"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])",
				"(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])",
				"(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])",
				0.8
			};
		};
		class MapTarget: RscMapControl
		{
			idc=1200;
			x="0.21 * safezoneW + safezoneX";
			y="0.2 * safezoneH + safezoneY";
			w="0.58 * safezoneW";
			h="0.55 * safezoneH";
		};
		class ConfirmBtn: RscButton
		{
			idc=1600;
			text="$STR_Globe_RscLoiteringMunitionUAVGridMenu1";
			tooltip="$STR_Globe_RscLoiteringMunitionUAVGridMenu2";
			x="0.468 * safezoneW + safezoneX";
			y="0.77 * safezoneH + safezoneY";
			w="0.2 * safezoneW";
			h="0.05 * safezoneH";
			action="[] call expEden_fnc_loiteringMunitionLaunch";
			colorBackground[]=
			{
				"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])",
				"(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])",
				"(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])",
				0.8
			};
		};
		class InfoBtn: RscActivePicture
		{
			idc=1601;
			text="a3\ui_f\data\gui\rsc\rscdisplaymain\infogeneric_ca.paa";
			x="0.405 * safezoneW + safezoneX";
			y="0.775 * safezoneH + safezoneY";
			h="0.04 * safezoneH";
			w="0.04 * safezoneH * 3/4";
			tooltip="$STR_a3_orange_faction_idap_action_fm";
			color[]={1,1,1,0.8};
			colorActive[]=
			{
				"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])",
				"(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])",
				"(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])",
				1
			};
			action="['VehicleList', 'UAV_LM_G', findDisplay 9000] call BIS_fnc_openFieldManual;";
		};
		class CA_GridTitle: RscText
		{
			idc=-1;
			style=0;
			sizeEx="0.025 * safezoneH";
			colorText[]={1, 1, 1, 0.4};
			shadow=0;
			font="RobotoCondensedLight";
			text="START GRID";
			x="0.21 * safezoneW + safezoneX";
			y="0.76 * safezoneH + safezoneY";
			w="0.18 * safezoneW";
			h="0.025 * safezoneH";
		};
		class CA_Grid: RscText
		{
			idc=171;
			style=0;
			sizeEx="0.032 * safezoneH";
			colorText[]={0.706, 0.075, 0.02, 1};
			shadow=0;
			font="EtelkaMonospacePro";
			text="------";
			x="0.21 * safezoneW + safezoneX";
			y="0.785 * safezoneH + safezoneY";
			w="0.18 * safezoneW";
			h="0.035 * safezoneH";
		};
		class CA_GridTGTTitle: RscText
		{
			idc=-1;
			style=0;
			sizeEx="0.025 * safezoneH";
			colorText[]={1, 1, 1, 0.4};
			shadow=0;
			font="RobotoCondensedLight";
			text="TGT GRID";
			x="0.31 * safezoneW + safezoneX";
			y="0.76 * safezoneH + safezoneY";
			w="0.18 * safezoneW";
			h="0.025 * safezoneH";
		};
		class CA_GridTGT: RscText
		{
			idc=172;
			style=0;
			sizeEx="0.032 * safezoneH";
			colorText[]={0.706, 0.075, 0.02, 1};
			shadow=0;
			font="EtelkaMonospacePro";
			text="------";
			x="0.31 * safezoneW + safezoneX";
			y="0.785 * safezoneH + safezoneY";
			w="0.18 * safezoneW";
			h="0.035 * safezoneH";
		};
		class CA_TimeTitle: RscText
		{
			idc=-1;
			style=1;
			sizeEx="0.025 * safezoneH";
			colorText[]={1, 1, 1, 0.4};
			shadow=0;
			font="RobotoCondensedLight";
			text="SYS TIME";
			x="0.61 * safezoneW + safezoneX";
			y="0.76 * safezoneH + safezoneY";
			w="0.18 * safezoneW";
			h="0.025 * safezoneH";
		};
		class CA_Time: RscText
		{
			idc=190;
			style=1;
			sizeEx="0.032 * safezoneH";
			colorText[]={0.706, 0.075, 0.02, 1};
			shadow=0;
			font="EtelkaMonospacePro";
			text="00:00:00";
			x="0.61 * safezoneW + safezoneX";
			y="0.785 * safezoneH + safezoneY";
			w="0.18 * safezoneW";
			h="0.035 * safezoneH";
		};
	};
};
class CfgPlayVideoLoop_G
{
	class argo
	{
		path="a3\data_f_argo\video\preview_argo.ogv";
	};
	class curator
	{
		path="a3\data_f_curator\video\preview_curator.ogv";
	};
	class expansion
	{
		path="a3\data_f_exp\video\preview_expansion.ogv";
	};
	class heli
	{
		path="a3\data_f_heli\video\preview_heli.ogv";
	};
	class jets
	{
		path="a3\data_f_jets\video\preview_jets.ogv";
	};
	class kart
	{
		path="a3\data_f_kart\video\preview_kart.ogv";
	};
	class mark
	{
		path="a3\data_f_mark\video\preview_mark.ogv";
	};
	class orange
	{
		path="a3\data_f_orange\video\preview_orange.ogv";
	};
	class tank
	{
		path="a3\data_f_tank\video\preview_tank.ogv";
	};
	class scene_altis
	{
		path="a3\map_altis_scenes_f\video\previewvideo.ogv";
	};
	class scene_malden
	{
		path="a3\map_malden_scenes_f\video\previewvideo.ogv";
	};
	class scene_stratis
	{
		path="a3\map_stratis_scenes_f\video\previewvideo.ogv";
	};
	class scene_tanoa
	{
		path="a3\map_tanoa_scenes_f\video\previewvideo.ogv";
	};
	class scene_vr
	{
		path="a3\map_vr_scenes_f\video\previewvideo.ogv";
	};
	class dlc_bundle1
	{
		path="a3\ui_f\video\preview_dlcbundle.ogv";
	};
	class dlc_bundle2
	{
		path="a3\ui_f\video\preview_dlcbundle2.ogv";
	};
	class spotlight3
	{
		path="a3\ui_f\video\spotlight3.ogv";
	};
	class spotlight_apex
	{
		path="a3\ui_f\video\spotlight_1_apex.ogv";
	};
	class spotlight_bootcamp
	{
		path="a3\ui_f\video\spotlight_1_bootcamp.ogv";
	};
	class spotlight_eastwind
	{
		path="a3\ui_f\video\spotlight_1_eastwind.ogv";
	};
	class spotlight_oldman
	{
		path="a3\ui_f\video\spotlight_1_old_man.ogv";
	};
	class spotlight2
	{
		path="a3\ui_f\video\spotlight_2.ogv";
	};
	class oldman_a
	{
		path="a3\ui_f_oldman\video\spotlight_a.ogv";
	};
	class oldman_fd14
	{
		path="a3\ui_f_oldman\video\spotlight_fd14.ogv";
	};
	class orange_a
	{
		path="a3\ui_f_orange\video\spotlight_a.ogv";
	};
	class orange_b
	{
		path="a3\ui_f_orange\video\spotlight_b.ogv";
	};
	class orange_c
	{
		path="a3\ui_f_orange\video\spotlight_c.ogv";
	};
	class tank_a
	{
		path="a3\ui_f_tank\video\spotlight_a.ogv";
	};
	class tank_b
	{
		path="a3\ui_f_tank\video\spotlight_b.ogv";
	};
};