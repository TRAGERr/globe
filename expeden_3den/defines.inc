#define TEXT_GLASS								(localize "STR_Globe_Window0")
#define TEXT_GLASS_DESTROY						(localize "STR_Globe_Window_destroyed0")
#define TEXT_GLASS_DAMAGE						(localize "STR_Globe_Window_damaged0")

#define DISTANCE_HIGHLIGHT						50

#define COLOR_HIGHLIGHT							[1,0,1,1]
#define COLOR_DISABLED							[0.8,0.8,0.8,0.8]

#define COLOR_GLASS_CLOSED						COLOR_DISABLED
#define COLOR_GLASS_OPENED						/* COLOR_HIGHLIGHT */COLOR_DISABLED
#define COLOR_GLASS_LOCKED						/* COLOR_HIGHLIGHT	 */	COLOR_DISABLED	//[1,0.2,0.2,1]

#define ICON3D_GLAS_CLOSED						"\A3\3DEN_Globe\Data\icon3d_textureWindow_fullXP32_ca.paa"	//---> todo: you icon
#define ICON3D_GLAS_LOCKED						"\A3\3DEN_Globe\Data\icon3d_textureWindow_halfXP32_ca.paa"	//---> todo: you icon
#define ICON3D_GLAS_OPENED						"\A3\3DEN_Globe\Data\icon3d_textureWindow_noXP32_ca.paa"	//---> todo: you icon

#define TEXTURE_GLASS							"\A3\3DEN_Globe\Data\textureWindow_fullXP_ca.paa"
#define TEXTURE_GLASS_DESTROYED					"\A3\3DEN_Globe\Data\textureWindow_noXP_ca.paa"
#define TEXTURE_GLASS_DAMAGED					"\A3\3DEN_Globe\Data\textureWindow_halfXP_ca.paa"

#define GLASS_INDEX_MIN							1
#define GLASS_INDEX_MAX							24
#define GLASS_ROWS								3
#define GLASS_COLUMNS							8
#define GLASS_FLAGS_EMPTY						[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]

#define GLASS_STATE_CLOSED						0		//ctrl
#define GLASS_STATE_LOCKED						1		//shift
#define GLASS_STATE_OPENED						2		//alt

#define SET_OBJVAR(object,variable,value)		(missionNamespace setVariable [str object + variable,value])
#define GET_OBJVAR(object,variable,defvalue)	(missionNamespace getVariable [str object + variable,defvalue])

#define SETUP_GLASS(building,id,state)\
building setHitPointDamage [format ["glass_%1_hitpoint", id + 1], [0,0.5,1] select state, false];

#define SETUP_GLASS_PREVIEW(building,id,state)\
building setHitPointDamage [format ["glass_%1_hitpoint", id + 1], [0,0.5,1] select state];

#define DOOR_INDEX_MIN 1
#define DOOR_INDEX_MAX 24
#define DOOR_COLUMNS 8
#define DOOR_ROWS 3

#define KNOCK_DISABLED 0
#define KNOCK_ENABLED 1

#define TEXTURE_KNOCK_ON "\A3\3DEN_Globe\Data\texturedoor_knock_ca.paa"
#define TEXTURE_KNOCK_OFF "\a3\modules_f\data\editterrainobject\texturedoor_closed_ca.paa"

#define TEXT_KNOCK_OFF (localize "STR_disable_Controller")
#define TEXT_KNOCK_ON (localize "STR_Enable_Controller")

#define COLOR_KNOCK_OFF [0.5, 0.5, 0.5, 0.6]
#define COLOR_KNOCK_ON [0.13, 0.77, 0.13, 1]