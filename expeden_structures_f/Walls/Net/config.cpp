class CfgPatches
{
	class Structures_Globe_Walls_Net
	{
		addonRootClass="A3_Structures_F_Globe";
		requiredAddons[]=
		{
			"Structures_Globe_Walls"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Land_NetFence_03_m_3m_corner_Segment",
			"Land_NetFence_03_m_3m_d_Segment",
			"Land_NetFence_03_m_3m_hole_Segment",
			"Land_NetFence_03_m_3m_Segment",
			"Land_NetFence_03_m_9m_Segment",
			"Land_Slums02_4m_Segment",
			"Land_New_WiredFence_5m_Segment",
			"Land_New_WiredFence_10m_Segment",
			"Land_New_WiredFence_10m_Dam_Segment"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Wall_F;
	class Land_NetFence_03_m_3m_corner_F;
	class Land_NetFence_03_m_3m_d_F;
	class Land_NetFence_03_m_3m_hole_F;
	class Land_NetFence_03_m_3m_F;
	class Land_NetFence_03_m_9m_F;
	class Land_Slums02_4m;
	class Land_New_WiredFence_5m_F;
	class Land_New_WiredFence_10m_F;
	class Land_New_WiredFence_10m_Dam_F;
	class Land_Slums02_4m_Segment: Land_Slums02_4m
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_Slums02_4m_Segment.jpg";
		_generalMacro="Land_Slums02_4m_Segment";
		displayName="$STR_Globe_CfgVehicles_Land_Slums02_4m_Segment0";
		model="\A3\Structures_F\Walls\Slums02_4m_Proxy.p3d";
		destrType="DestructNo";
	};
	class Land_New_WiredFence_5m_Segment: Land_New_WiredFence_5m_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_New_WiredFence_5m_Segment.jpg";
		_generalMacro="Land_New_WiredFence_5m_Segment";
		displayName="$STR_Globe_CfgVehicles_Land_New_WiredFence_5m_Segment0";
		model="\A3\Structures_F\Walls\New_WiredFence_5m_Proxy.p3d";
		destrType="DestructNo";
	};
	class Land_New_WiredFence_10m_Segment: Land_New_WiredFence_10m_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_New_WiredFence_10m_Segment.jpg";
		_generalMacro="Land_New_WiredFence_10m_Segment";
		displayName="$STR_Globe_CfgVehicles_Land_New_WiredFence_10m_Segment0";
		model="\A3\Structures_F\Walls\New_WiredFence_10m_Proxy.p3d";
		destrType="DestructNo";
	};
	class Land_New_WiredFence_10m_Dam_Segment: Land_New_WiredFence_10m_Dam_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_New_WiredFence_10m_Dam_Segment.jpg";
		_generalMacro="Land_New_WiredFence_10m_Dam_Segment";
		displayName="$STR_Globe_CfgVehicles_Land_New_WiredFence_10m_Dam_Segment0";
		model="\A3\Structures_F\Walls\New_WiredFence_10m_Dam_Proxy.p3d";
		destrType="DestructNo";
	};
	class Land_NetFence_03_m_3m_corner_Segment: Land_NetFence_03_m_3m_corner_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_NetFence_03_m_3m_corner_Segment.jpg";
		_generalMacro="Land_NetFence_03_m_3m_corner_Segment";
		displayName="$STR_Globe_CfgVehicles_Land_NetFence_03_m_3m_corner_Segment0";
		model="\A3\Structures_F_Enoch\Walls\Net\NetFence_03_m_3m_corner_Proxy_F.p3d";
		destrType="DestructNo";
	};
	class Land_NetFence_03_m_3m_d_Segment: Land_NetFence_03_m_3m_d_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_NetFence_03_m_3m_d_Segment.jpg";
		_generalMacro="Land_NetFence_03_m_3m_d_Segment";
		displayName="$STR_Globe_CfgVehicles_Land_NetFence_03_m_3m_d_Segment0";
		model="\A3\Structures_F_Enoch\Walls\Net\netfence_03_m_3m_d_proxy_f.p3d";
		destrType="DestructNo";
	};
	class Land_NetFence_03_m_3m_hole_Segment: Land_NetFence_03_m_3m_hole_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_NetFence_03_m_3m_hole_Segment.jpg";
		_generalMacro="Land_NetFence_03_m_3m_hole_Segment";
		displayName="$STR_Globe_CfgVehicles_Land_NetFence_03_m_3m_hole_Segment0";
		model="\A3\Structures_F_Enoch\Walls\Net\NetFence_03_m_3m_hole_Proxy_F.p3d";
		destrType="DestructNo";
	};
	class Land_NetFence_03_m_3m_Segment: Land_NetFence_03_m_3m_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_NetFence_03_m_3m_Segment.jpg";
		_generalMacro="Land_NetFence_03_m_3m_Segment";
		displayName="$STR_Globe_CfgVehicles_Land_NetFence_03_m_3m_Segment0";
		model="\A3\Structures_F_Enoch\Walls\Net\netfence_03_m_3m_proxy_f.p3d";
		destrType="DestructNo";
	};
	class Land_NetFence_03_m_9m_Segment: Land_NetFence_03_m_9m_F
	{
		editorPreview="\A3\EditorPreviews_F_expEden\Data\CfgVehicles\Land_NetFence_03_m_9m_Segment.jpg";
		_generalMacro="Land_NetFence_03_m_9m_Segment";
		displayName="$STR_Globe_CfgVehicles_Land_NetFence_03_m_9m_Segment0";
		model="\A3\Structures_F_Enoch\Walls\Net\NetFence_03_m_9m_Proxy_F.p3d";
		destrType="DestructNo";
	};
	class Land_NetFence_01_m_4m_noLC_F: Wall_F
	{
		editorPreview="\A3\EditorPreviews_F_Exp\Data\CfgVehicles\Land_NetFence_01_m_4m_F.jpg";
		scope=2;
		scopeCurator=0;
		displayName="$STR_Globe_CfgVehicles_Land_NetFence_01_m_4m_noLC_F0";
	};
	class Land_NetFence_01_m_8m_noLC_F: Wall_F
	{
		editorPreview="\A3\EditorPreviews_F_Exp\Data\CfgVehicles\Land_NetFence_01_m_8m_F.jpg";
		scope=2;
		scopeCurator=0;
		displayName="$STR_Globe_CfgVehicles_Land_NetFence_01_m_8m_noLC_F0";
	};
	class Land_NetFence_01_m_d_noLC_F: Wall_F
	{
		editorPreview="\A3\EditorPreviews_F_Exp\Data\CfgVehicles\Land_NetFence_01_m_d_F.jpg";
		scope=2;
		scopeCurator=0;
		displayName="$STR_Globe_CfgVehicles_Land_NetFence_01_m_d_noLC_F0";
	};
};
