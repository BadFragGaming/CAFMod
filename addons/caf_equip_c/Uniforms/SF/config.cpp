class CfgPatches
{
	class caf_equip_sf
	{
		units[] = {};
		weapons[] = {"U_CANSOFCOM_CombatUniform_01_MCAM","U_CANSOFCOM_CombatUniform_02_MCAM","V_CANSOFCOM_PlateCarrier1_CBR","V_CANSOFCOM_PlateCarrier2_CBR","V_CANSOFCOM_PlateCarrier3_CBR"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F","A3_Weapons_F"};
	};
};

class cfgWeapons
{
	class InventoryItem_Base_F;
	class UniformItem: InventoryItem_Base_F
	{
		type = 801;
	};
	
	class VestItem;
	
	class U_B_CombatUniform_mcam;
	class U_CANSOFCOM_CombatUniform_01_MCAM: U_B_CombatUniform_mcam
	{
		scope = 2;
		displayName = "Fatigues (MCAM)";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "JTF_Soldier_01";
			containerClass = "Supply20";
			uniformType = "Default";
			mass = 80;
		};
	};
	
	class U_CANSOFCOM_CombatUniform_02_MCAM: U_B_CombatUniform_mcam
	{
		scope = 2;
		displayName = "Fatigues Rolled (MCAM)";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "JTF_Soldier_02";
			containerClass = "Supply20";
			uniformType = "Default";
			mass = 80;
		};
	};
	
	class V_PlateCarrier1_rgr;
	class V_CANSOFCOM_PlateCarrier1_CBR: V_PlateCarrier1_rgr
	{
		scope = 2;
		displayName = "CANSOFCOM Vest 01 - CBR";
		//picture = "\caf_gear\data\inv\vest_TW.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cansofcom_vests_cbr_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
			containerClass = "Supply100";
			hiddenSelections[] = {"camo"};
			mass = 50;
			armor = "5*0.5";
			passThrough = 0.7;
		};
	};
	
	class V_CANSOFCOM_PlateCarrier2_CBR: V_PlateCarrier1_rgr
	{
		scope = 2;
		displayName = "CANSOFCOM Vest 02 - CBR";
		//picture = "\caf_gear\data\inv\vest_TW.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cansofcom_vests_cbr_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
			containerClass = "Supply140";
			hiddenSelections[] = {"camo"};
			mass = 50;
			armor = "5*0.6";
			passThrough = 0.75;
		};
	};
	
	class V_CANSOFCOM_PlateCarrier3_CBR: V_PlateCarrier1_rgr
	{
		scope = 2;
		displayName = "CANSOFCOM Vest 03 - CBR";
		//picture = "\caf_gear\data\inv\vest_TW.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cansofcom_vests_cbr_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
			containerClass = "Supply150";
			hiddenSelections[] = {"camo"};
			mass = 60;
			armor = "5*0.6";
			passThrough = 0.75;
		};
	};
};

class CfgVehicles 
{
	class B_Soldier_F;class JTF_Soldier_01 : B_Soldier_f 
	{
		_generalMacro = "JTF_Soldier_01";
		scope = 1;
		faction = "CANSOFCOM";
		author = "CAF MOD TEAM";
		displayName = "JTF_ASSAULTER_01";
		vehicleClass = "JTF2";
		uniformAccessories[] = {};
		uniformClass = "U_CANSOFCOM_CombatUniform_01_MCAM";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cansofcom_clothing_MCAM_co.paa"};
		hiddenSelectionsMaterials[] = {""};
		weapons[] = {"Throw", "Put", "Binocular"};
		respawnWeapons[] = {"Throw", "Put", "Binocular"};
		Items[] = {};
		RespawnItems[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"V_CANSOFCOM_PlateCarrier1_CBR", "H_HelmetB_light", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_CANSOFCOM_PlateCarrier1_CBR","H_HelmetB_light", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	
	};
	
	class B_Soldier_03_f;
	class JTF_Soldier_02 : B_Soldier_03_f  
	{
	
		_generalMacro = "JTF_Soldier_02";
		scope = 1;
		faction = "CANSOFCOM";
		author = "CAF MOD TEAM";
		displayName = "JTF_Assaulter_02";
		vehicleClass = "JTF2";
		uniformAccessories[] = {};
		uniformClass = "U_CANSOFCOM_CombatUniform_02_MCAM";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cansofcom_clothing_MCAM_co.paa"};
		hiddenSelectionsMaterials[] = {""};
		weapons[] = {"Throw", "Put", "Binocular"};
		respawnWeapons[] = {"Throw", "Put", "Binocular"};
		Items[] = {};
		RespawnItems[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"V_CANSOFCOM_PlateCarrier2_CBR", "H_HelmetB_light", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_CANSOFCOM_PlateCarrier2_CBR", "H_HelmetB_light", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	
	};
};