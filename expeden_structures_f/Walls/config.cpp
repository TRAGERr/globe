class CfgPatches
{
	class Structures_Globe_Walls
	{
		addonRootClass="A3_Structures_F_Globe";
		requiredAddons[]=
		{
			"A3_Structures_F_Globe"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Wall_F;
	class WallCity_01_gate_base_F: Wall_F
	{
		class Attributes
		{
			class gateRandomDoorState_door1_WallCity_01
			{
				displayName="$STR_Globe_Attributes_gateRandomDoorState_door1_displayName";
				tooltip="$STR_Globe_Attributes_gateRandomDoorState_tooltip";
				property="gateRandomDoorState_door1_WallCity_01";
				control="Checkbox";
				defaultValue="false";
				expression="if (_value isEqualTo true) then {_this animate ['Door_1_rot', random 1, true]}";
			};
			class gateRandomDoorState_door2_WallCity_01: gateRandomDoorState_door1_WallCity_01
			{
				displayName="$STR_Globe_Attributes_gateRandomDoorState_door2_displayName";
				property="gateRandomDoorState_door2_WallCity_01";
				expression="if (_value isEqualTo true) then {_this animate ['Door_2_rot', random 1, true]}";
			};
		};
	};
	class Land_PipeFence_03_m_gate_l_F: Wall_F
	{
		class Attributes
		{
			class gateRandomDoorState_door_PipeFence_03
			{
				displayName="$STR_Globe_Attributes_gateRandomDoorState_door1_displayName";
				tooltip="$STR_Globe_Attributes_gateRandomDoorState_tooltip";
				property="gateRandomDoorState_door_PipeFence_03";
				control="Checkbox";
				defaultValue="false";
				expression="if (_value isEqualTo true) then {_this animate ['Door_1_rot', random 1, true]}";
			};
		};
	};
	class Land_PipeFence_04_m_gate_l_F: Wall_F
	{
		class Attributes
		{
			class gateRandomDoorState_door_PipeFence_04
			{
				displayName="$STR_Globe_Attributes_gateRandomDoorState_door1_displayName";
				tooltip="$STR_Globe_Attributes_gateRandomDoorState_tooltip";
				property="gateRandomDoorState_door_PipeFence_04";
				control="Checkbox";
				defaultValue="false";
				expression="if (_value isEqualTo true) then {_this animate ['Door_1_rot', random 1, true]}";
			};
		};
	};
	class Land_PipeFence_05_m_gate_l_F: Wall_F
	{
		class Attributes
		{
			class gateRandomDoorState_door_PipeFence_05
			{
				displayName="$STR_Globe_Attributes_gateRandomDoorState_door1_displayName";
				tooltip="$STR_Globe_Attributes_gateRandomDoorState_tooltip";
				property="gateRandomDoorState_door_PipeFence_05";
				control="Checkbox";
				defaultValue="false";
				expression="if (_value isEqualTo true) then {_this animate ['Door_1_rot', random 1, true]}";
			};
		};
	};
	class Land_PipeFence_06_m_gate_l_F: Wall_F
	{
		class Attributes
		{
			class gateRandomDoorState_door_PipeFence_06
			{
				displayName="$STR_Globe_Attributes_gateRandomDoorState_door1_displayName";
				tooltip="$STR_Globe_Attributes_gateRandomDoorState_tooltip";
				property="gateRandomDoorState_door_PipeFence_06";
				control="Checkbox";
				defaultValue="false";
				expression="if (_value isEqualTo true) then {_this animate ['Door_1_rot', random 1, true]}";
			};
		};
	};
	class Land_PipeFence_01_m_gate_v1_F: Wall_F
	{
		class Attributes
		{
			class gateRandomDoorState_door_PipeFence_01_v1
			{
				displayName="$STR_Globe_Attributes_gateRandomDoorState_door1_displayName";
				tooltip="$STR_Globe_Attributes_gateRandomDoorState_tooltip";
				property="gateRandomDoorState_door_PipeFence_01_v1";
				control="Checkbox";
				defaultValue="false";
				expression="if (_value isEqualTo true) then {_this animate ['Door_1_rot', random 1, true]}";
			};
		};
	};
	class Land_PipeFence_01_m_gate_v2_F: Wall_F
	{
		class Attributes
		{
			class gateRandomDoorState_door1_PipeFence_01_v2
			{
				displayName="$STR_Globe_Attributes_gateRandomDoorState_door1_displayName";
				tooltip="$STR_Globe_Attributes_gateRandomDoorState_tooltip";
				property="gateRandomDoorState_door1_PipeFence_01_v2";
				control="Checkbox";
				defaultValue="false";
				expression="if (_value isEqualTo true) then {_this animate ['Door_1_rot', random 1, true]}";
			};
			class gateRandomDoorState_door2_PipeFence_01_v2: gateRandomDoorState_door1_PipeFence_01_v2
			{
				displayName="$STR_Globe_Attributes_gateRandomDoorState_door2_displayName";
				property="gateRandomDoorState_door2_PipeFence_01_v2";
				expression="if (_value isEqualTo true) then {_this animate ['Door_2_rot', random 1, true]}";
			};
		};
	};
	class Land_ConcreteWall_01_m_gate_F: Wall_F
	{
		class Attributes
		{
			class gateRandomDoorState_door_ConcreteWall_01_m
			{
				displayName="$STR_Globe_Attributes_gateRandomDoorState_door1_displayName";
				tooltip="$STR_Globe_Attributes_gateRandomDoorState_tooltip";
				property="gateRandomDoorState_door_ConcreteWall_01_m";
				control="Checkbox";
				defaultValue="false";
				expression="if (_value isEqualTo true) then {_this animate ['door_1_move', random 1, true]}";
			};
		};
	};
	class Land_WoodenWall_03_s_gate_F: Wall_F
	{
		class Attributes
		{
			class gateRandomDoorState_door_WoodenWall_03
			{
				displayName="$STR_Globe_Attributes_gateRandomDoorState_door1_displayName";
				tooltip="$STR_Globe_Attributes_gateRandomDoorState_tooltip";
				property="gateRandomDoorState_door_WoodenWall_03";
				control="Checkbox";
				defaultValue="false";
				expression="if (_value isEqualTo true) then {_this animate ['Door_1_rot', random 1, true]}";
			};
		};
	};
	class Land_WoodenWall_04_s_gate_F: Wall_F
	{
		class Attributes
		{
			class gateRandomDoorState_door_WoodenWall_04
			{
				displayName="$STR_Globe_Attributes_gateRandomDoorState_door1_displayName";
				tooltip="$STR_Globe_Attributes_gateRandomDoorState_tooltip";
				property="gateRandomDoorState_door_WoodenWall_04";
				control="Checkbox";
				defaultValue="false";
				expression="if (_value isEqualTo true) then {_this animate ['Door_1_rot', random 1, true]}";
			};
		};
	};
	class Land_Stone_Gate_F: Wall_F
	{
		class Attributes
		{
			class gateRandomDoorState_door1_Stone
			{
				displayName="$STR_Globe_Attributes_gateRandomDoorState_door1_displayName";
				tooltip="$STR_Globe_Attributes_gateRandomDoorState_tooltip";
				property="gateRandomDoorState_door1_Stone";
				control="Checkbox";
				defaultValue="false";
				expression="if (_value isEqualTo true) then {_this animate ['Door_1_rot', random 1, true]}";
			};
			class gateRandomDoorState_door2_Stone: gateRandomDoorState_door1_Stone
			{
				displayName="$STR_Globe_Attributes_gateRandomDoorState_door2_displayName";
				property="gateRandomDoorState_door2_Stone";
				expression="if (_value isEqualTo true) then {_this animate ['Door_2_rot', random 1, true]}";
			};
		};
	};
	class Land_WoodenWall_02_s_gate_F: Wall_F
	{
		class Attributes
		{
			class gateRandomDoorState_door_WoodenWall_02
			{
				displayName="$STR_Globe_Attributes_gateRandomDoorState_door1_displayName";
				tooltip="$STR_Globe_Attributes_gateRandomDoorState_tooltip";
				property="gateRandomDoorState_door_WoodenWall_02";
				control="Checkbox";
				defaultValue="false";
				expression="if (_value isEqualTo true) then {_this animate ['Door_1_rot', random 1, true]}";
			};
		};
	};
	class Land_TinWall_01_m_gate_v1_F: Wall_F
	{
		class Attributes
		{
			class gateRandomDoorState_door1_TinWall_01_v1
			{
				displayName="$STR_Globe_Attributes_gateRandomDoorState_door1_displayName";
				tooltip="$STR_Globe_Attributes_gateRandomDoorState_tooltip";
				property="gateRandomDoorState_door1_TinWall_01_v1";
				control="Checkbox";
				defaultValue="false";
				expression="if (_value isEqualTo true) then {_this animate ['Door_1_rot', random 1, true]}";
			};
			class gateRandomDoorState_door2_TinWall_01_v1: gateRandomDoorState_door1_TinWall_01_v1
			{
				displayName="$STR_Globe_Attributes_gateRandomDoorState_door2_displayName";
				property="gateRandomDoorState_door2_TinWall_01_v1";
				expression="if (_value isEqualTo true) then {_this animate ['Door_2_rot', random 1, true]}";
			};
		};
	};
	class Land_TinWall_01_m_gate_v2_F: Wall_F
	{
		class Attributes
		{
			class gateRandomDoorState_door1_TinWall_01_v2
			{
				displayName="$STR_Globe_Attributes_gateRandomDoorState_door1_displayName";
				tooltip="$STR_Globe_Attributes_gateRandomDoorState_tooltip";
				property="gateRandomDoorState_door1_TinWall_01_v2";
				control="Checkbox";
				defaultValue="false";
				expression="if (_value isEqualTo true) then {_this animate ['Door_1_rot', random 1, true]}";
			};
			class gateRandomDoorState_door2_TinWall_01_v2: gateRandomDoorState_door1_TinWall_01_v2
			{
				displayName="$STR_Globe_Attributes_gateRandomDoorState_door2_displayName";
				property="gateRandomDoorState_door2_TinWall_01_v2";
				expression="if (_value isEqualTo true) then {_this animate ['Door_2_rot', random 1, true]}";
			};
		};
	};
	class Land_GameProofFence_01_l_gate_F: Wall_F
	{
		class Attributes
		{
			class gateRandomDoorState_door_GameProofFence_01
			{
				displayName="$STR_Globe_Attributes_gateRandomDoorState_door1_displayName";
				tooltip="$STR_Globe_Attributes_gateRandomDoorState_tooltip";
				property="gateRandomDoorState_door_GameProofFence_01";
				control="Checkbox";
				defaultValue="false";
				expression="if (_value isEqualTo true) then {_this animate ['Door_1_rot', random 1, true]}";
			};
		};
	};
	class Land_WiredFence_01_gate_F: Wall_F
	{
		class Attributes
		{
			class gateRandomDoorState_door_WiredFence_01
			{
				displayName="$STR_Globe_Attributes_gateRandomDoorState_door1_displayName";
				tooltip="$STR_Globe_Attributes_gateRandomDoorState_tooltip";
				property="gateRandomDoorState_door_WiredFence_01";
				control="Checkbox";
				defaultValue="false";
				expression="if (_value isEqualTo true) then {_this animate ['Door_1_rot', random 1, true]}";
			};
		};
	};
	class Land_City_Gate_F: Wall_F
	{
		class Attributes
		{
			class gateRandomDoorState_door1_City
			{
				displayName="$STR_Globe_Attributes_gateRandomDoorState_door1_displayName";
				tooltip="$STR_Globe_Attributes_gateRandomDoorState_tooltip";
				property="gateRandomDoorState_door1_City";
				control="Checkbox";
				defaultValue="false";
				expression="if (_value isEqualTo true) then {_this animate ['Door_1_rot', random 1, true]}";
			};
			class gateRandomDoorState_door2_City: gateRandomDoorState_door1_City
			{
				displayName="$STR_Globe_Attributes_gateRandomDoorState_door2_displayName";
				property="gateRandomDoorState_door2_City";
				expression="if (_value isEqualTo true) then {_this animate ['Door_2_rot', random 1, true]}";
			};
		};
	};
	class Land_ConcreteWall_01_l_gate_F: Wall_F
	{
		class Attributes
		{
			class gateRandomDoorState_door_ConcreteWall_01_l
			{
				displayName="$STR_Globe_Attributes_gateRandomDoorState_door1_displayName";
				tooltip="$STR_Globe_Attributes_gateRandomDoorState_tooltip";
				property="gateRandomDoorState_door_ConcreteWall_01_l";
				control="Checkbox";
				defaultValue="false";
				expression="if (_value isEqualTo true) then {_this animate ['door_1_move', random 1, true]}";
			};
		};
	};
	class Land_NetFence_02_m_gate_v1_F: Wall_F
	{
		class Attributes
		{
			class gateRandomDoorState_door_NetFence_02
			{
				displayName="$STR_Globe_Attributes_gateRandomDoorState_door1_displayName";
				tooltip="$STR_Globe_Attributes_gateRandomDoorState_tooltip";
				property="gateRandomDoorState_door_NetFence_02";
				control="Checkbox";
				defaultValue="false";
				expression="if (_value isEqualTo true) then {_this animate ['door_1_rot', random 1, true]}";
			};
		};
	};
	class Land_BackAlley_01_l_gate_F: Wall_F
	{
		class Attributes
		{
			class gateRandomDoorState_door_BackAlley_01
			{
				displayName="$STR_Globe_Attributes_gateRandomDoorState_door1_displayName";
				tooltip="$STR_Globe_Attributes_gateRandomDoorState_tooltip";
				property="gateRandomDoorState_door_BackAlley_01";
				control="Checkbox";
				defaultValue="false";
				expression="if (_value isEqualTo true) then {_this animate ['door_1_rot', random 1, true]}";
			};
		};
	};
	class Land_NetFence_02_m_gate_v2_F: Wall_F
	{
		class Attributes
		{
			class gateRandomDoorState_door1_NetFence_02
			{
				displayName="$STR_Globe_Attributes_gateRandomDoorState_door1_displayName";
				tooltip="$STR_Globe_Attributes_gateRandomDoorState_tooltip";
				property="gateRandomDoorState_door1_NetFence_02";
				control="Checkbox";
				defaultValue="false";
				expression="if (_value isEqualTo true) then {_this animate ['Door_1_rot', random 1, true]}";
			};
			class gateRandomDoorState_door2_NetFence_02: gateRandomDoorState_door1_NetFence_02
			{
				displayName="$STR_Globe_Attributes_gateRandomDoorState_door2_displayName";
				property="gateRandomDoorState_door2_NetFence_02";
				expression="if (_value isEqualTo true) then {_this animate ['Door_2_rot', random 1, true]}";
			};
		};
	};
	class Land_NetFence_01_m_gate_F: Wall_F
	{
		class Attributes
		{
			class gateRandomDoorState_door1_NetFence_01
			{
				displayName="$STR_Globe_Attributes_gateRandomDoorState_door1_displayName";
				tooltip="$STR_Globe_Attributes_gateRandomDoorState_tooltip";
				property="gateRandomDoorState_door1_NetFence_01";
				control="Checkbox";
				defaultValue="false";
				expression="if (_value isEqualTo true) then {_this animate ['Door_1_rot', random 1, true]}";
			};
			class gateRandomDoorState_door2_NetFence_01: gateRandomDoorState_door1_NetFence_01
			{
				displayName="$STR_Globe_Attributes_gateRandomDoorState_door2_displayName";
				property="gateRandomDoorState_door2_NetFence_01";
				expression="if (_value isEqualTo true) then {_this animate ['Door_2_rot', random 1, true]}";
			};
		};
	};
	class Land_Pipe_fence_4mNoLC_F: Wall_F
	{
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Land_Pipe_fence_4m_F.jpg";
		scope=2;
		scopeCurator=0;
		displayName="$STR_Globe_CfgVehicles_Land_Pipe_fence_4mNoLC_F0";
	};
	class Land_SportGround_fence_noLC_F: Wall_F
	{
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Land_SportGround_fence_F.jpg";
		scope=2;
		scopeCurator=0;
		displayName="$STR_Globe_CfgVehicles_Land_NetFence_01_m_4m_noLC_F0";
	};
};
