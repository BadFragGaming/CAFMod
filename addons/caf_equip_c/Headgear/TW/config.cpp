class CfgPatches
{
	class caf_equip_h_tw
	{
		units[] = {};
		weapons[] = {"H_CAF_CREWHELMET",
		"H_CAF_Boonie_TW",
		"H_CAF_Boonie_hs_TW",
		
		"H_CAF_CG634_TW",
		"H_CAF_CG634_TW_G_U",
		"H_CAF_CG634_TW_G_D",

		"H_CAF_CG634_NET_TW",
		"H_CAF_CG634_NET_TW_G_U",
		"H_CAF_CG634_NET_TW_G_D",
		
		"H_CAF_CG634_SCRIM_TW",
		"H_CAF_CG634_SCRIM_TW_G_U",
		"H_CAF_CG634_SCRIM_TW_G_D"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F","A3_Weapons_F"};
	};
};

class cfgWeapons
{
	class H_Beret_Colonel;
	class HeadgearItem;
	class H_HelmetCrew_I;
	class H_Beret_NCM: H_Beret_Colonel
	{
		scope =2;
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Beret_Colonel";
		displayName = "CEF Beret (NCM)";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_Beret_Colonel_ca.paa";
		hiddenSelectionsTextures[] = {"caf_equip_t\tex\H_Beret_CAF_NCM_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\Characters_F_EPC\BLUFOR\Data\headgear_beret02_colonel.rvmat"};
	};
	/*class H_Beret_Officer: H_Beret_NCM
	{
		scope =2;
		displayName = "CEF Beret (NCO)";
		hiddenSelectionsTextures[] = {"caf_equip_t\tex\H_Beret_CAF_NCM_co.paa"};
	};*/
	class H_Beret_Air: H_Beret_NCM
	{
		scope =2;
		displayName = "CEF Beret (Air)";
		hiddenSelectionsTextures[] = {"caf_equip_t\tex\H_Beret_CAF_NCM_co.paa"};
	};
	class H_CAF_CREWHELMET : H_HelmetCrew_I 
	{
		displayName = "Crewman Helmet";
	};
	
	class H_Booniehat_khk;
	class H_Booniehat_khk_hs;
	
	class H_CAF_Boonie_TW : H_Booniehat_khk {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Boonie Hat";
		picture = "\caf_equip_t\inv\boonie_tw_ca.paa";
		model = "\A3\Characters_F\Common\booniehat";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\booniehat_tw_co.paa"};
		
		class ItemInfo : HeadgearItem {
			mass = 0;
			allowedSlots[] = {801, 901, 701, 605};
			uniformModel = "\A3\Characters_F\Common\booniehat";
			modelSides[] = {6};
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"camo"};
		};
	};
	
	class H_CAF_Boonie_hs_TW : H_Booniehat_khk_hs {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Boonie Hat (HS)";
		picture = "\caf_equip_t\inv\boonie_tw_ca.paa";
		model = "A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\booniehat_tw_co.paa"};
		class ItemInfo : HeadgearItem {
			mass = 0;
			allowedSlots[] = {801, 901, 701, 605};
			uniformModel = "A3\Characters_F_EPB\Common\booniehat_hs.p3d";
			modelSides[] = {6};
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"camo"};
		};
	};
	
	class H_HelmetB;
	class H_CAF_CG634_TW_BASE: H_HelmetB
	{
		scope = 0;
		weaponPoolAvailable = 1;
		displayName = "CG634";
		picture = "\caf_equip_t\inv\INV_CG634_TW_G_U_CA.paa";
		model = "\caf_equip\CG634.p3d";
		hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_tw_co.paa","\caf_equip_t\tex\tex2_co.paa","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformModel = "\caf_equip\CG634.p3d";
			modelSides[] = {3,1};
			armor = "10";
			passThrough = 0.5;
			hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
			hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_tw_co.paa","\caf_equip_t\tex\tex2_co.paa","","",""};

			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 10;
					passThrough = 0.5;
				};
			};
		};
	};
	
	class H_CAF_CG634_TW: H_CAF_CG634_TW_BASE
	{
		scope = 2;
		weaponPoolAvailable = 1;
		picture = "\caf_equip_t\inv\INV_CG634_TW_CA.paa";
		model = "\caf_equip\CG634.p3d";
		hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_tw_co.paa","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformModel = "\caf_equip\CG634.p3d";
			modelSides[] = {3,1};
			armor = "10";
			passThrough = 0.5;
			hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
			hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_tw_co.paa","","","",""};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 10;
					passThrough = 0.5;
				};
			};
		};
	};
	
	class H_CAF_CG634_TW_G_U: H_CAF_CG634_TW_BASE
	{
		scope = 2;
		weaponPoolAvailable = 1;
		picture = "\caf_equip_t\inv\INV_CG634_TW_G_U_CA.paa";
		model = "\caf_equip\CG634.p3d";
		hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_tw_co.paa","\caf_equip_t\tex\tex2_co.paa","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformModel = "\caf_equip\CG634.p3d";
			modelSides[] = {3,1};
			armor = "10";
			passThrough = 0.5;
			hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
			hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_tw_co.paa","\caf_equip_t\tex\tex2_co.paa","","",""};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 10;
					passThrough = 0.5;
				};
			};
		};
	};
	
	class H_CAF_CG634_TW_G_D: H_CAF_CG634_TW_BASE
	{
		scope = 2;
		weaponPoolAvailable = 1;
		picture = "\caf_equip_t\inv\INV_CG634_TW_G_D_CA.paa";
		model = "\caf_equip\CG634.p3d";
		hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_tw_co.paa","","\caf_equip_t\tex\tex2_co.paa","\caf_equip_t\tex\tex3_co.paa","#(argb,8,8,3)color(0,0,0,0.3,ca)"};
		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformModel = "\caf_equip\CG634.p3d";
			modelSides[] = {3,1};
			armor = "10";
			passThrough = 0.5;
			hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
			hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_tw_co.paa","","\caf_equip_t\tex\tex2_co.paa","\caf_equip_t\tex\tex3_co.paa","#(argb,8,8,3)color(0,0,0,0.3,ca)"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 10;
					passThrough = 0.5;
				};
			};
		};
	};
	
	
	class H_CAF_CG634_NET_TW_BASE: H_HelmetB
	{
		scope = 0;
		weaponPoolAvailable = 1;
		displayName = "CG634 NET";
		picture = "\caf_equip_t\inv\INV_CG634_NET_TW_G_U_CA.paa";
		model = "\caf_equip\CG634_NET.p3d";
		hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
			hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_net_tw_co.paa","\caf_equip_t\tex\tex2_co.paa","\caf_equip_t\tex\tex2_co.paa","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformModel = "\caf_equip\CG634_NET.p3d";
			modelSides[] = {3,1};
			armor = "10";
			passThrough = 0.5;
			hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
			hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_net_tw_co.paa","\caf_equip_t\tex\tex2_co.paa","\caf_equip_t\tex\tex2_co.paa","\caf_equip_t\tex\tex3_co.paa","#(argb,8,8,3)color(0,0,0,0.3,ca)"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 10;
					passThrough = 0.5;
				};
			};
		};
	};
	
	class H_CAF_CG634_NET_TW: H_CAF_CG634_NET_TW_BASE
	{
		scope = 2;
		weaponPoolAvailable = 1;
		picture = "\caf_equip_t\inv\INV_CG634_NET_TW_CA.paa";
		hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_net_tw_co.paa","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformModel = "\caf_equip\CG634_NET.p3d";
			modelSides[] = {3,1};
			armor = "10";
			passThrough = 0.5;
			hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
			hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_net_tw_co.paa","","","",""};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 10;
					passThrough = 0.5;
				};
			};
		};
	};
	
	class H_CAF_CG634_NET_TW_G_U: H_CAF_CG634_NET_TW_BASE
	{
		scope = 2;
		weaponPoolAvailable = 1;
		picture = "\caf_equip_t\inv\INV_CG634_NET_TW_G_U_CA.paa";
		hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_net_tw_co.paa","\caf_equip_t\tex\tex2_co.paa","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformModel = "\caf_equip\CG634_NET.p3d";
			modelSides[] = {3,1};
			armor = "10";
			passThrough = 0.5;
			hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
			hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_net_tw_co.paa","\caf_equip_t\tex\tex2_co.paa","","",""};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 10;
					passThrough = 0.5;
				};
			};
		};
	};
	
	class H_CAF_CG634_NET_TW_G_D: H_CAF_CG634_NET_TW_BASE
	{
		scope = 2;
		weaponPoolAvailable = 1;
		picture = "\caf_equip_t\inv\INV_CG634_NET_TW_G_D_CA.paa";
		hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_net_tw_co.paa","","\caf_equip_t\tex\tex2_co.paa","\caf_equip_t\tex\tex3_co.paa","#(argb,8,8,3)color(0,0,0,0.3,ca)"};
		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformModel = "\caf_equip\CG634_NET.p3d";
			modelSides[] = {3,1};
			armor = "10";
			passThrough = 0.5;
			hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
			hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_net_tw_co.paa","","\caf_equip_t\tex\tex2_co.paa","\caf_equip_t\tex\tex3_co.paa","#(argb,8,8,3)color(0,0,0,0.3,ca)"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 10;
					passThrough = 0.5;
				};
			};
		};
	};
	
	
	class H_CAF_CG634_SCRIM_TW_BASE: H_HelmetB
	{
		scope = 0;
		weaponPoolAvailable = 1;
		displayName = "CG634 SCRIM";
		picture = "\caf_equip_t\inv\INV_CG634_SCRIM_TW_G_U_CA.paa";
		model = "\caf_equip\CG634_SCRIM.p3d";
		hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
			hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_net_tw_co.paa","\caf_equip_t\tex\tex2_co.paa","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformModel = "\caf_equip\CG634_SCRIM.p3d";
			modelSides[] = {3,1};
			armor = "10";
			passThrough = 0.5;
			hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
			hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_net_tw_co.paa","\caf_equip_t\tex\tex2_co.paa","","",""};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 10;
					passThrough = 0.5;
				};
			};
		};
	};
	
	class H_CAF_CG634_SCRIM_TW: H_CAF_CG634_SCRIM_TW_BASE
	{
		scope = 2;
		weaponPoolAvailable = 1;
		picture = "\caf_equip_t\inv\INV_CG634_SCRIM_TW_CA.paa";
		hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_net_tw_co.paa","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformModel = "\caf_equip\CG634_SCRIM.p3d";
			modelSides[] = {3,1};
			armor = "10";
			passThrough = 0.5;
			hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
			hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_net_tw_co.paa","","","",""};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 10;
					passThrough = 0.5;
				};
			};
		};
	};
	
	class H_CAF_CG634_SCRIM_TW_G_U: H_CAF_CG634_SCRIM_TW_BASE
	{
		scope = 2;
		weaponPoolAvailable = 1;
		picture = "\caf_equip_t\inv\INV_CG634_SCRIM_TW_G_U_CA.paa";
		hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_net_tw_co.paa","\caf_equip_t\tex\tex2_co.paa","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformModel = "\caf_equip\CG634_SCRIM.p3d";
			modelSides[] = {3,1};
			armor = "10";
			passThrough = 0.5;
			hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
			hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_net_tw_co.paa","\caf_equip_t\tex\tex2_co.paa","","",""};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 10;
					passThrough = 0.5;
				};
			};
		};
	};
	
	class H_CAF_CG634_SCRIM_TW_G_D: H_CAF_CG634_SCRIM_TW_BASE
	{
		scope = 2;
		weaponPoolAvailable = 1;
		picture = "\caf_equip_t\inv\INV_CG634_SCRIM_TW_G_D_CA.paa";
		hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_net_tw_co.paa","","\caf_equip_t\tex\tex2_co.paa","\caf_equip_t\tex\tex3_co.paa","#(argb,8,8,3)color(0,0,0,0.3,ca)"};
		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformModel = "\caf_equip\CG634_SCRIM.p3d";
			modelSides[] = {3,1};
			armor = "10";
			passThrough = 0.5;
			hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
			hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_net_tw_co.paa","","\caf_equip_t\tex\tex2_co.paa","\caf_equip_t\tex\tex3_co.paa","#(argb,8,8,3)color(0,0,0,0.3,ca)"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 10;
					passThrough = 0.5;
				};
			};
		};
	};
};

