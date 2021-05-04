/*
*    FORMAT:
*        STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*
*    ARRAY FORMAT:
*        0: STRING (Classname): Item Classname
*        1: STRING (Nickname): Nickname that will appear purely in the shop dialog
*        2: SCALAR (Buy price)
*        3: SCALAR (Sell price): To disable selling, this should be -1
*        4: STRING (Conditions): Same as above conditions string
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        conditions = "license_civ_gun";
        items[] = {
            { "hgun_Rook40_F", "", 6500, 3250, "" },
            { "hgun_Pistol_01_F", "", 7000, 3500, "" }, //Apex DLC
            { "hgun_Pistol_heavy_02_F", "", 9850, 4925, "" },
            { "hgun_ACPC2_F", "", 11500, 5750, "" },
            { "SMG_05_F", "", 18000, 9000, "" }, //Apex DLC
            { "hgun_PDW2000_F", "", 20000, 10000, "" },
            { "CUP_hgun_M17_Coyote", "", 100000,0,""},
            { "CUP_hgun_Colt1911", "", 120000,0,""},
            { "CUP_hgun_Makarov", "", 120000,0,""},
            { "CUP_hgun_Glock17", "", 120000,0,""},
            { "sgun_HunterShotgun_01_F", "", 150000,0,""},
            { "CUP_hgun_Glock17_blk", "", 160000,0,""},
            { "CUP_srifle_Remington700", "", 170000,0,""},
            { "CUP_srifle_LeeEnfield", "", 180000,0,""},
            { "CUP_smg_M3A1_blk", "", 190000,0,""},
            { "CUP_hgun_TEC9", "", 200000,0,""},
            { "CUP_hgun_Mac10", "", 300000,0,""}
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 125, 60, "" },
            { "6Rnd_45ACP_Cylinder", "", 150, 75, "" },
            { "9Rnd_45ACP_Mag", "", 200, 100, "" },
            { "30Rnd_9x21_Mag", "", 250, 125, "" },
            { "30Rnd_9x21_Mag_SMG_02", "", 250, 125, "" }, //Apex DLC
            { "10Rnd_9x21_Mag", "", 250, 125, "" }, //Apex DLC
            { "CUP_17Rnd_9x19_glock17", "", 250,0,""},
            { "CUP_21Rnd_9x19_M17_Coyote", "", 250,0,""},
            { "CUP_7Rnd_45ACP_1911", "", 250,0,""},
            { "CUP_8Rnd_9x18_Makarov_M", "", 250,0,""},
            { "CUP_32Rnd_9x19_TEC9", "", 250,0,""},
            { "CUP_30Rnd_45ACP_MAC10_M", "", 250,0,""},
            { "2Rnd_12Gauge_Pellets", "", 250,0,""},
            { "CUP_6Rnd_762x51_R700", "", 250,0,""},
            { "CUP_10x_303_M", "", 250,0,""},
            { "CUP_30Rnd_45ACP_M3A1_BLK_M", "", 250,0,""}
        };
        accs[] = {
            { "acc_flashlight_pistol", "", 1000, 500, "" },//Pistol Flashlight
            { "optic_ACO_grn_smg", "", 2500, 1250, "" },
            { "CUP_optic_no23mk2", "", 5000,0,""},
            { "CUP_optic_Remington", "", 5000,0,""},
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = {
            { "arifle_TRG20_F", "", 50000, 12500, "" },
            { "arifle_Katiba_F", "", 50000, 15000, "" },
            { "srifle_DMR_01_F", "", 50000, 25000, "" },
            { "arifle_SDAR_F", "", 150000, 10000, "" },
            { "arifle_AK12_F", "", 200000, 11000, "" }, //Apex DLC
            { "arifle_AKS_F", "", 220000, 11000, "" }, //Apex DLC
            { "arifle_AKM_F", "", 220000, 11000, "" }, //Apex DLC
            { "CUP_arifle_AK74M_top_rail_desert", "", 220000, 11000, "" }, 
            { "CUP_arifle_AS_VAL_VFG_top_rail", "", 230000, 16500, "" }, 
            { "CUP_srifle_G22_des", "", 300000, 15000, "" }
			{ "CUP_srifle_L129A1_HG", "", 310000, 15000, "" }
			{ "CUP_srifle_M110", "", 230000, 15000, "" }
			{ "CUP_arifle_M4A1_SOMMOD_Grip_tan", "", 145000, 15000, "" }
			{ "CUP_arifle_DSA_SA58_OSW_VFG_Sand", "", 179000, 15000, "" }
			{ "CUP_arifle_mk18_black", "", 188000, 15000, "" }
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "", 300, 150, "" },
            { "30Rnd_762x39_Mag_F", "", 300, 150, "" }, //Apex DLC
            { "30Rnd_545x39_Mag_F", "", 300, 150, "" }, //Apex DLC
            { "30Rnd_65x39_caseless_green", "", 275, 140, "" },
            { "10Rnd_762x54_Mag", "", 500, 250, "" },
            { "20Rnd_556x45_UW_mag", "", 125, 60, "" },
            { "CUP_30Rnd_545x39_AK74M_desert_M", "", 125, 60, "" }
			{ "CUP_20Rnd_9x39_SP5_VSS_M", "", 125, 60, "" }
			{ "CUP_5Rnd_762x67_G22", "", 125, 60, "" }
			{ "CUP_20Rnd_762x51_L129_M", "", 125, 60, "" }
			{ "CUP_20Rnd_762x51_B_M110", "", 125, 60, "" }
			{ "CUP_30Rnd_556x45_Stanag", "", 125, 60, "" }
			{ "CUP_20Rnd_762x51_FNFAL_Desert_M", "", 125, 60, "" }
        };
        accs[] = {
            { "optic_ACO_grn", "", 3500, 1750, "" },
            { "optic_Holosight", "", 3600, 1800, "" },
            { "optic_Hamr", "", 7500, 3750, "" },
            { "acc_flashlight", "", 1000, 500, "" }
			{ "CUP_optic_AC11704_Tan", "", 12500, 500, "" }
			{ "CUP_optic_G33_HWS_TAN", "", 13500, 500, "" }
			{ "CUP_optic_ACOG_TA01NSN_RMR_Tan", "", 100000, 500, "" }
			{ "CUP_optic_VortexRazor_UH1_Tan", "", 9000, 500, "" }
			{ "optic_AMS_snd", "", 175000, 500, "" }
			{ "CUP_muzzle_mfsup_Flashhider_556x45_Tan", "", 1000, 500, "" }
			{ "CUP_acc_ANPEQ_15_Flashlight_Black_L", "", 1000, 500, "" }
			{ "CUP_acc_ANPEQ_15_Flashlight_Tan_L", "", 1000, 500, "" }
			{ "CUP_muzzle_snds_FAMAS_Arid", "", 15000, 500, "" }
			{ "CUP_muzzle_snds_FAMAS", "", 15000, 500, "" }
			{ "CUP_muzzle_snds_M16_desert", "", 20000, 500, "" }
			{ "CUP_muzzle_snds_M110", "", 20000, 500, "" }
			{ "muzzle_snds_B_snd_F", "", 20000, 500, "" }
			{ "CUP_optic_G33_HWS_BLK", "", 20000, 500, "" }
			{ "bipod_02_F_hex", "", 3000, 500, "" }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        conditions = "";
        items[] = {
            { "hgun_Rook40_F", "", 1500, 750, "" },
            { "hgun_Pistol_heavy_02_F", "", 2500, 1250, "" },
            { "hgun_ACPC2_F", "", 4500, 2250, "" },
            { "hgun_PDW2000_F", "", 9500, 4750, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 125, 60, "" },
            { "6Rnd_45ACP_Cylinder", "", 150, 75, "" },
            { "9Rnd_45ACP_Mag", "", 200, 100, "" },
            { "30Rnd_9x21_Mag", "", 250, 125, "" }
        };
        accs[] = {
            { "acc_flashlight_pistol", "", 500, 250, "" },//Pistol Flashlight
            { "optic_ACO_grn_smg", "", 950, 475, "" }
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        conditions = "";
        items[] = {
            { "Binocular", "", 150, 0, "" },
            { "ItemGPS", "", 100, 50, "" },
            { "ItemMap", "", 50, 25, "" },
            { "ItemCompass", "", 50, 25, "" },
            { "ItemWatch", "", 50, 25, "" },
            { "FirstAidKit", "", 150, 75, "" },
            { "NVGoggles", "", 2000, 1000, "" },
            { "Chemlight_red", "", 300, 150, "" },
            { "Chemlight_yellow", "", 300, 150, "" },
            { "Chemlight_green", "", 300, 150, "" },
            { "Chemlight_blue", "", 300, 150, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        conditions = "";
        items[] = {
            { "Binocular", "", 750, 0, "" },
            { "ItemGPS", "", 500, 50, "" },
            { "ItemMap", "", 250, 25, "" },
            { "ItemCompass", "", 250, 25, "" },
            { "ItemWatch", "", 250, 25, "" },
            { "FirstAidKit", "", 750, 75, "" },
            { "NVGoggles", "", 10000, 1000, "" },
            { "Chemlight_red", "", 1500, 150, "" },
            { "Chemlight_yellow", "", 1500, 150, "" },
            { "Chemlight_green", "", 1500, 150, "" },
            { "Chemlight_blue", "", 1500, 150, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "Altis Cop Shop";
        side = "cop";
        conditions = "";
        items[] = {
            { "Binocular", "", 150, 0, "" },
            { "ItemGPS", "", 100, 50, "" },
            { "FirstAidKit", "", 150, 75, "" },
            { "NVGoggles", "", 2000, 1000, "" },
            { "HandGrenade_Stone", $STR_W_items_Flashbang, 1700, 850, "" },
            { "hgun_P07_snds_F", $STR_W_items_StunPistol, 2000, 1000, "" },
            { "arifle_SDAR_F", $STR_W_items_TaserRifle, 20000, 10000, "" },
            { "hgun_P07_F", "", 7500, 3750, "" },
            { "hgun_P07_khk_F", "", 7500, 3750, "" }, //Apex DLC
            { "hgun_Pistol_heavy_01_F", "", 9500, 4750, "call life_coplevel >= 1" },
            { "SMG_02_ACO_F", "", 30000, 15000, "call life_coplevel >= 2" },
            { "arifle_MX_F", "", 35000, 17500, "call life_coplevel >= 2" },
            { "hgun_ACPC2_F", "", 17500, 8750, "call life_coplevel >= 3" },
            { "arifle_MXC_F", "", 30000, 15000, "call life_coplevel >= 3" },
            { "srifle_DMR_07_blk_F", "", 32000, 16000, "call life_coplevel >= 3" } //Apex DLC Sniper
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 125, 60, "" },
            { "20Rnd_556x45_UW_mag", $STR_W_mags_TaserRifle, 125, 60, "" },
            { "11Rnd_45ACP_Mag", "", 130, 65, "call life_coplevel >= 1" },
            { "30Rnd_65x39_caseless_mag", "", 130, 65, "call life_coplevel >= 2" },
            { "30Rnd_9x21_Mag", "", 250, 125, "call life_coplevel >= 2" },
            { "9Rnd_45ACP_Mag", "", 200, 100, "call life_coplevel >= 3" },
            { "20Rnd_650x39_Cased_Mag_F", "", 200, 100, "call life_coplevel >= 3" } //Apex DLC
        };
        accs[] = {
            { "muzzle_snds_L", "", 650, 325, "" },
            { "optic_MRD", "", 2750, 1375, "call life_coplevel >= 1" },
            { "acc_flashlight_pistol", "", 250, 125, "call life_coplevel >= 1" },//Pistol Flashlight
            { "acc_flashlight", "", 750, 375, "call life_coplevel >= 2" },
            { "optic_Holosight", "", 1200, 600, "call life_coplevel >= 2" },
            { "optic_Arco", "", 2500, 1250, "call life_coplevel >= 2" },
            { "muzzle_snds_H", "", 2750, 1375, "call life_coplevel >= 2" }
        };
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        conditions = "";
        items[] = {
            { "ItemGPS", "", 100, 50, "" },
            { "Binocular", "", 150, 0, "" },
            { "FirstAidKit", "", 150, 75, "" },
            { "NVGoggles", "", 1200, 600, "" },
            { "CUP_hgun_Browning_HP", "", 1000, 500, ""},
            { "CUP_13Rnd_9x19_Browning_HP", "", 1000, 500, ""},
            { "CUP_NVG_GPNVG_tan", "", 1000, 500, ""},
            { "", "", 1000, 500, ""},
            { "", "", 1000, 500, ""},
            { "", "", 1000, 500, ""}
        };
        mags[] = {
            { "CUP_13Rnd_9x19_Browning_HP", "", 1000, 500, ""}
        };
        accs[] = {};
    };
};
