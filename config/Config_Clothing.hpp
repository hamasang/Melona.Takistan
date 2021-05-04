/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        3: STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*/
class Clothing {
    class bruce {
        title = "STR_Shops_C_Bruce";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_C_Poloshirt_stripped", "", 125, "" },
            { "U_C_Poloshirt_redwhite", "", 150, "" },
            { "U_C_Poloshirt_salmon", "", 175, "" },
            { "U_C_Poloshirt_blue", "", 250, "" },
            { "U_C_Poloshirt_burgundy", "", 275, "" },
            { "U_C_Poloshirt_tricolour", "", 350, "" },
            { "U_C_Poor_2", "", 250, "" },
            { "U_IG_Guerilla2_2", "", 650, "" },
            { "U_IG_Guerilla3_1", "", 735, "" },
            { "U_OrestesBody", "", 1100, "" },
            { "U_IG_Guerilla2_3", "", 1200, "" },
            { "U_C_HunterBody_grn", "", 1500, "" },
            { "U_C_WorkerCoveralls", "", 2500, "" },
            { "U_NikosBody", "", 3000, "" },
            { "U_NikosAgedBody", $STR_C_Civ_Niko, 5000, "" },
            { "U_C_Man_casual_1_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_2_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_3_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_4_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_5_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_6_F", "", 5000, "" }, //Apex DLC
            { "U_C_man_sport_1_F", "", 5000, "" }, //Apex DLC
            { "U_C_man_sport_2_F", "", 5000, "" }, //Apex DLC
            { "U_C_man_sport_3_F", "", 5000, "" }, //Apex DLC
            { "CUP_U_B_BDUv2_roll_gloves_OD", "", 0, ""},
            { "CUP_U_B_BDUv2_roll2_dirty_M81", "", 0, ""},
            { "CUP_U_B_BDUv2_roll2_desert", "", 0, ""},
            { "CUP_U_B_BDUv2_roll_dirty_DDPM", "", 0, ""},
            { "CUP_U_B_BDUv2_DDPM", "", 0, ""},
            { "CUP_U_B_BDUv2_roll_gloves_DCU", "", 0, ""},
            { "CUP_U_B_BDUv2_DCU", "", 0, ""},
            { "CUP_U_B_BDUv2_roll_gloves_CEU", "", 0, ""},
            { "CUP_U_B_BDUv2_CEU", "", 0, ""},
            { "CUP_U_B_BDUv2_roll_gloves_Alpenflage", "", 0, ""},
            { "CUP_U_B_BDUv2_roll_Alpenflage", "", 0, ""},
            { "CUP_U_B_BAF_DPM_UBACSTSHIRT", "", 0, ""},
            { "CUP_U_B_BDUv2_dirty_Tigerstripe", "", 0, ""},
            { "CUP_U_B_BDUv2_dirty_Winter", "", 0, ""},
            { "U_B_CBRN_Suit_01_MTP_F", "", 0, ""},
            { "U_B_CBRN_Suit_01_Wdl_F", "", 0, ""},
            { "CUP_U_O_CHDKZ_Bardak", "", 0, ""},
            { "CUP_U_O_CHDKZ_Lopotev", "", 0, ""},
            { "CUP_U_C_Citizen_01", "", 0, ""},
            { "CUP_U_C_Citizen_04", "", 0, ""},
            { "CUP_O_TKI_Khet_Jeans_04", "", 0, ""},
            { "CUP_O_TKI_Khet_Partug_04", "", 0, ""},
            { "CUP_U_C_Labcoat_02", "", 0, ""},
            { "CUP_U_O_RUS_Gorka_Green", "", 0, ""},
            { "CUP_U_O_RUS_Gorka_Partizan_A", "", 0, ""},
            { "CUP_U_C_Mechanic_02", "", 0, ""},
            { "CUP_U_C_Pilot_01", "", 0, ""},
            { "CUP_I_B_PMC_Unit_3", "", 0, ""},
            { "CUP_I_B_PMC_Unit_2", "", 0, ""},
            { "CUP_U_C_Profiteer_01", "", 0, ""},
            { "CUP_U_C_Profiteer_04", "", 0, ""},
            { "CUP_U_C_racketeer_01", "", 0, ""},
            { "CUP_U_C_racketeer_03", "", 0, ""},
            { "CUP_U_C_racketeer_04", "", 0, ""},
            { "CUP_U_C_Suit_01", "", 0, ""},
            { "CUP_U_C_Suit_03", "", 0, ""},
            { "CUP_U_O_RUS_M88_MSV_rolled_up", "", 0, ""},
            { "CUP_U_C_Functionary_jacket_02", "", 0, ""},
            { "CUP_U_C_Functionary_jacket_01", "", 0, ""},
            { "CUP_U_C_Functionary_jacket_03", "", 0, ""},
            { "CUP_U_C_Woodlander_01", "", 0, ""},
            { "CUP_U_C_Woodlander_03", "", 0, ""},
            { "CUP_U_C_Woodlander_04", "", 0, ""},
            { "U_C_FormalSuit_01_blue_F", "", 0, ""},
            { "U_C_FormalSuit_01_khaki_F", "", 0, ""},
            { "U_C_FormalSuit_01_black_F", "", 0, ""}
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Bandanna_camo", "", 120, "" },
            { "H_Bandanna_surfer", "", 130, "" },
            { "H_Bandanna_khk", "", 145, "" },
            { "H_Cap_blu", "", 150, "" },
            { "H_Cap_grn", "", 150, "" },
            { "H_Cap_grn_BI", "", 150, "" },
            { "H_Cap_oli", "", 150, "" },
            { "H_Cap_red", "", 150, "" },
            { "H_Cap_tan", "", 150, "" },
            { "H_Helmet_Skate", "", 150, "" }, //Apex DLC
            { "H_Bandanna_gry", "", 150, "" },
            { "H_Bandanna_sgg", "", 160, "" },
            { "H_Bandanna_cbr", "", 165, "" },
            { "H_StrawHat", "", 225, "" },
            { "H_Hat_tan", "", 265, "" },
            { "H_Hat_brown", "", 276, "" },
            { "H_Hat_grey", "", 280, "" },
            { "H_BandMask_blk", $STR_C_Civ_BandMask, 300, "" },
            { "H_Hat_blue", "", 310, "" },
            { "H_Hat_checker", "", 340, "" },
            { "H_Booniehat_tan", "", 425, "" },
            { "H_Booniehat_grn", "", 425, "" },
            { "CUP_H_RUS_TSH_4_Brown", "", 0, ""},
            { "CUP_H_TK_TankerHelmet", "", 0, ""},
            { "CUP_H_C_Ushanka_03", "", 0, ""},
            { "CUP_H_C_Ushanka_02", "", 0, ""},
            { "CUP_H_RUS_ZSH_Shield_Up", "", 0, ""},
            { "CUP_H_TKI_Pakol_1_01", "", 0, ""},
            { "CUP_H_TKI_Pakol_2_04", "", 0, ""},
            { "CUP_H_TKI_Pakol_2_05", "", 0, ""},
            { "CUP_H_TKI_Pakol_2_02", "", 0, ""},
            { "CUP_H_TK_Lungee", "", 0, ""},
            { "CUP_H_TKI_Lungee_05", "", 0, ""},
            { "CUP_H_TKI_Lungee_Open_01", "", 0, ""},
            { "CUP_H_TKI_Lungee_Open_04", "", 0, ""},
            { "CUP_H_TKI_Lungee_Open_05", "", 0, ""},
            { "CUP_H_TKI_Lungee_Open_06", "", 0, ""},
            { "H_ShemagOpen_khk", "", 0, ""},
            { "H_ShemagOpen_tan", "", 0, ""},
            { "H_Shemag_olive", "", 0, ""},
            { "H_Booniehat_mgrn", "", 0, ""},
            { "H_Bandanna_khk", "", 0, ""},
            { "CUP_H_PMC_Cap_Tan", "", 0, ""}
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Black", "", 20, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Shades_Green", "", 20, "" },
            { "G_Shades_Red", "", 20, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Greenblack", "", 25, "" },
            { "G_Sport_Red", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Squares", "", 50, "" },
            { "G_Aviator", "", 100, "" },
            { "G_Combat", "", 125, "" },
            { "G_Lady_Mirror", "", 150, "" },
            { "G_Lady_Dark", "", 150, "" },
            { "G_Lady_Blue", "", 150, "" },
            { "G_AirPurifyingRespirator_02_sand_F", "", 0, ""},
            { "G_AirPurifyingRespirator_02_olive_F", "", 0, ""},
            { "CUP_RUS_Balaclava_tan", "", 0, ""},
            { "CUP_Beard_Black", "", 0, ""},
            { "CUP_Beard_Blonde", "", 0, ""},
            { "CUP_Beard_Brown", "", 0, ""},
            { "CUP_G_ESS_BLK", "", 0, ""},
            { "CUP_G_ESS_RGR_Facewrap_Ranger", "", 0, ""},
            { "CUP_G_ESS_BLK_Scarf_Blk", "", 0, ""},
            { "CUP_G_ESS_BLK_Scarf_Grn", "", 0, ""},
            { "CUP_G_ESS_BLK_Scarf_Red", "", 0, ""},
            { "CUP_G_ESS_KHK_Scarf_Tan", "", 0, ""},
            { "CUP_G_ESS_BLK_Scarf_Face_Red", "", 0, ""},
            { "CUP_G_ESS_KHK_Scarf_Face_Tan", "", 0, ""},
            { "CUP_G_ESS_BLK_Scarf_Grn_Beard_Blonde", "", 0, ""},
            { "CUP_G_ESS_BLK_Scarf_Red_Beard_Blonde", "", 0, ""},
            { "CUP_G_ESS_KHK_Scarf_Tan_Beard", "", 0, ""},
            { "CUP_G_TK_RoundGlasses", "", 0, ""},
            { "CUP_G_TK_RoundGlasses_blk", "", 0, ""},
            { "CUP_G_TK_RoundGlasses_gold", "", 0, ""},
            { "CUP_PMC_G_thug", "", 0, ""},
            { "G_Blindfold_01_black_F", "", 0, ""},
            { "G_Blindfold_01_white_F", "", 0, ""},
            { "G_Aviator", "", 0, ""},
            { "G_Squares_Tinted", "", 0, ""},
            { "G_Respirator_white_F", "", 0, ""}
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Tac_brn", "", 0, ""},
            { "V_Press_F", "", 0, ""},
            { "V_Pocketed_coyote_F", "", 0, ""},
            { "V_Pocketed_black_F", "", 0, ""},
            { "V_BandollierB_cbr", "", 0, ""}
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_OutdoorPack_blk", "", 500, "" },
            { "B_AssaultPack_khk", "", 2000, "" },
            { "B_AssaultPack_dgtl", "", 2000, "" },
            { "B_AssaultPack_rgr", "", 2000, "" },
            { "B_AssaultPack_sgg", "", 2000, "" },
            { "B_AssaultPack_blk", "", 2000, "" },
            { "B_AssaultPack_cbr", "", 2000, "" },
            { "B_AssaultPack_mcamo", "", 2000, "" },
            { "B_AssaultPack_tna_f", "", 2000, "" }, //Apex DLC
            { "B_TacticalPack_oli", "", 2500, "" },
            { "B_Kitbag_mcamo", "", 3500, "" },
            { "B_Kitbag_sgg", "", 3500, "" },
            { "B_Kitbag_cbr", "", 3500, "" },
            { "B_FieldPack_blk", "", 5000, "" },
            { "B_FieldPack_ocamo", "", 5000, "" },
            { "B_FieldPack_oucamo", "", 5000, "" },
            { "B_FieldPack_ghex_f", "", 5000, "" }, //Apex DLC
            { "B_Bergen_sgg", "", 6500, "" },
            { "B_Bergen_mcamo", "", 6500, "" },
            { "B_Bergen_rgr", "", 6500, "" },
            { "B_Bergen_blk", "", 6500, "" },
            { "B_Carryall_ocamo", "", 7500, "" },
            { "B_Carryall_oucamo", "", 7500, "" },
            { "B_Carryall_mcamo", "", 7500, "" },
            { "B_Carryall_oli", "", 7500, "" },
            { "B_Carryall_khk", "", 7500, "" },
            { "B_Carryall_cbr", "", 7500, "" },
            { "B_Carryall_ghex_f", "", 7500, "" }, //Apex DLC
            { "B_Bergen_dgtl_f", "", 9500, "" }, //Apex DLC
            { "B_Bergen_tna_f", "", 9500, "" }, //Apex DLC
            { "CUP_B_AlicePack_Khaki", "", 50000, ""},
            { "CUP_B_AlicePack_Bedroll", "", 50000, ""},
            { "CUP_B_GER_Pack_Flecktarn", "", 50000, ""},
            { "CUP_B_RUS_", "", 50000, ""},
            { "CUP_B_USPack_Coyote", "", 50000, ""},
            { "B_Messenger_Coyote_F", "", 50000, ""},
            { "B_Messenger_Black_F", "", 50000, ""},
            { "B_Carryall_cbr", "", 50000, ""},
            { "B_Carryall_khk", "", 50000, ""},
            { "B_Bergen_hex_F", "", 50000, ""},
            { "B_Bergen_mcamo_F", "", 50000, ""},
            { "B_Bergen_dgtl_F", "", 50000, ""}
        };
    };

    class cop {
        title = "STR_Shops_C_Police";
        conditions = "";
        side = "cop";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_Rangemaster", $STR_C_Cop_uniforms, 25, "" },
            { "U_B_CombatUniform_mcam_tshirt", "", 350, "call life_coplevel >= 1" },
            { "U_B_CombatUniform_mcam_worn", "", 550, "call life_coplevel >= 2" },
            { "U_B_survival_uniform", "", 1250, "call life_coplevel >= 1" },
            { "U_O_Parade_01_CSAT_decorated_F","",0,"call life_coplevel >= 1"},
            { "CUP_U_CRYE_TAN_Full","",0,"call life_coplevel >= 2"},
            { "CUP_U_CRYE_TAN_Roll","",0,"call life_coplevel >= 2"},
            { "CUP_U_CRYE_TAN_US_Full","",0,"call life_coplevel >= 2"},
            { "CUP_U_B_BAF_DDPM_UBACSROLLED_Gloves","",0,"call life_coplevel >= 2"},
            { "CUP_U_B_BDUv2_roll2_gloves_DDPM","",0,"call life_coplevel >= 3"},
            { "U_B_GhillieSuit","",0,"call life_coplevel >= 3"},
            { "U_B_FullGhillie_ard","",0,"call life_coplevel >= 4"},
            { "CUP_U_B_BDUv2_gloves_desert","",0,"call life_coplevel >= 4"}
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Cap_police", "", 25, "" },
            { "H_Booniehat_mcamo", "", 120, "call life_coplevel >= 1" },
            { "H_HelmetB_plain_mcamo", "", 75, "call life_coplevel >= 1" },
            { "H_HelmetB_Enh_tna_F", "", 80, "call life_coplevel >= 1" }, //Apex DLC
            { "H_Beret_blk_POLICE", "", 50, "call life_coplevel >= 2" },
            { "H_MilCap_mcamo", "", 100, "call life_coplevel >= 2" },
            { "H_MilCap_gen_F", "", 1200, "call life_coplevel >= 2" }, //Apex DLC
            { "H_MilCap_tna_F", "", 1200, "call life_coplevel >= 2" }, //Apex DLC
            { "H_MilCap_oucamo", "", 1200, "call life_coplevel >= 2" },
            { "H_ParadeDressCap_01_CSAT_F","",0,"call life_coplevel >= 1"},
            { "CUP_H_CDF_H_PASGT_UN","",0,"call life_coplevel >= 1"},
            { "CUP_H_RUS_Beret_VDV","",0,"call life_coplevel >= 2"},
            { "CUP_H_RUS_6B27_cover_BeigeDigital","",0,"call life_coplevel >= 2"},
            { "CUP_H_RUS_6B47_v2_BeigeDigital","",0,"call life_coplevel >= 2"},
            { "CUP_H_USArmy_HelmetACH_ESS_Headset_OCP","",0,"call life_coplevel >= 2"},
            { "CUP_H_USArmy_ECH_ESS_Headset_MARPAT_des","",0,"call life_coplevel >= 2"},
            { "CUP_H_LWHv2_desert_ess_comms","",0,"call life_coplevel >= 2"}
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Squares", "", 10, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Sport_Blackred", "", 20, "" },
            { "G_Sport_Checkered", "", 20, "" },
            { "G_Sport_Blackyellow", "", 20, "" },
            { "G_Sport_BlackWhite", "", 20, "" },
            { "G_Shades_Black", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Combat", "", 55, "" },
            { "G_Aviator", "", 100, "" },
            { "G_Lady_Mirror", "", 150, "" },
            { "G_Lady_Dark", "", 150, "" },
            { "G_Lady_Blue", "", 150, "" },
            { "G_AirPurifyingRespirator_02_sand_F","",0,"call life_coplevel >= 1"},
            { "CUP_RUS_Balaclava_tan","",0,"call life_coplevel >= 1"},
            { "CUP_G_ESS_KHK_Scarf_Face_Tan_GPS","",0,"call life_coplevel >= 1"},
            { "CUP_G_PMC_Facewrap_Tan_Glasses_Dark_Headset","",0,"call life_coplevel >= 1"},
            { "CUP_G_Beard_Shades_Blonde","",0,"call life_coplevel >= 1"},
            { "CUP_PMC_Facewrap_Skull","",0,"call life_coplevel >= 1"}
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Rangemaster_belt", "", 800, "" },
            { "V_TacVest_blk_POLICE", "", 1000, "call life_coplevel >= 1" },
            { "V_TacVest_gen_F", "", 1000, "call life_coplevel >= 1" }, //Apex DLC
            { "V_PlateCarrier2_rgr", "", 1500, "call life_coplevel >= 2" },
            { "CUP_V_I_RACS_Carrier_Vest","",0,"call life_coplevel >= 2"},
            { "CUP_V_B_BAF_DDPM_Osprey_Mk3_Crewman","",0,"call life_coplevel >= 2"},
            { "CUP_V_B_BAF_DDPM_Osprey_Mk3_Grenadier","",0,"call life_coplevel >= 2"},
            { "CUP_V_B_IOTV_OEFCP_Empty_USArmy","",0,"call life_coplevel >= 3"},
            { "CUP_V_RUS_6B45_2_BeigeDigital","",0,"call life_coplevel >= 4"}
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_FieldPack_cbr", "", 500, "" },
            { "B_AssaultPack_cbr", "", 700, "" },
            { "B_Kitbag_cbr", "", 800, "" },
            { "B_Bergen_sgg", "", 2500, "" },
            { "B_Carryall_cbr", "", 3500, "" },
            { "CUP_B_Motherlode_Radio_MTP","",0,"call life_coplevel >= 1"},
            { "CUP_B_Predator_Radio_MTP","",0,"call life_coplevel >= 1"},
            { "CUP_B_AlicePack_Bedroll","",0,"call life_coplevel >= 1"},
            { "CUP_O_RUS_Patrol_bag_BeigeDigital_Shovel","",0,"call life_coplevel >= 1"}
        };
    };

    class dive {
        title = "STR_Shops_C_Diving";
        conditions = "license_civ_dive";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_B_Wetsuit", "", 2000, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Diving", "", 500, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_RebreatherB", "", 5000, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        conditions = "license_civ_gun";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Rangemaster_belt", "", 4900, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class gang_clothing {
        title = "STR_Shops_C_Gang";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Rangemaster_belt", "", 1900, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        conditions = "";
        side = "med";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_Rangemaster", $STR_C_EMS_uniforms, 50, "" },
            { "U_C_Paramedic_01_F","",50,""}
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Cap_blu", "", 10, "" },
            { "CUP_H_RUS_6B47_v2_Desert", "", 10, ""}
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Blue", "", 10, "" },
            { "G_Respirator_white_F", "", 10, ""}
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "CUP_V_PMC_IOTV_Black_Empty", "", 0, ""}
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_FieldPack_oli", $STR_C_EMS_backpacks, 3000, "" },
            { "CUP_B_GER_Medic_Desert", "", 0, ""}
        };
    };

    class reb {
        title = "STR_Shops_C_Rebel";
        conditions = "license_civ_rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_IG_Guerilla1_1", "", 5000, "" },
            { "U_I_G_Story_Protagonist_F", "", 7500, "" },
            { "U_I_G_resistanceLeader_F", "", 11500, "" },
            { "U_IG_leader", "", 15340, "" },
            { "U_O_PilotCoveralls", "", 15610, "" },
            { "U_O_SpecopsUniform_ocamo", "", 17500, "" },
            { "U_O_GhillieSuit", "", 50000, "" },
            { "U_B_T_Soldier_F", "", 50000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_1_F", "", 50000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_2_F", "", 51000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_3_F", "", 50032, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_4_F", "", 50020, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_5_F", "", 50020, "" }, //Apex DLC
            { "U_I_C_Soldier_Camo_F", "", 52000, "" } //Apex DLC
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Bandanna_camo", "", 650, "" },
            { "H_ShemagOpen_khk", "", 800, "" },
            { "H_ShemagOpen_tan", "", 850, "" },
            { "H_Shemag_olive", "", 850, "" },
            { "H_HelmetO_ocamo", "", 2500, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Black", "", 20, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Squares", "", 50, "" },
            { "G_Combat", "", 125, "" },
            { "G_Balaclava_blk", "", 150, "" },
            { "G_Balaclava_combat", "", 150, "" },
            { "G_Balaclava_lowprofile", "", 150, "" },
            { "G_Balaclava_oli", "", 150, "" },
            { "G_Bandanna_aviator", "", 150, "" },
            { "G_Bandanna_beast", "", 150, "" },
            { "G_Bandanna_blk", "", 150, "" },
            { "G_Bandanna_khk", "", 150, "" },
            { "G_Bandanna_oli", "", 150, "" },
            { "G_Bandanna_shades", "", 150, "" },
            { "G_Bandanna_sport", "", 150, "" },
            { "G_Bandanna_tan", "", 150, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_BandollierB_cbr", "", 4500, "" },
            { "V_HarnessO_brn", "", 7500, "" },
            { "V_TacVest_khk", "", 12500, "" },
            { "V_TacChestrig_grn_F", "", 17500, "" } //Apex DLC
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_OutdoorPack_blk", "", 500, "" },
            { "B_AssaultPack_khk", "", 2000, "" },
            { "B_AssaultPack_dgtl", "", 2000, "" },
            { "B_AssaultPack_rgr", "", 2000, "" },
            { "B_AssaultPack_sgg", "", 2000, "" },
            { "B_AssaultPack_blk", "", 2000, "" },
            { "B_AssaultPack_cbr", "", 2000, "" },
            { "B_AssaultPack_mcamo", "", 2000, "" },
            { "B_TacticalPack_oli", "", 2500, "" },
            { "B_Kitbag_mcamo", "", 3500, "" },
            { "B_Kitbag_sgg", "", 3500, "" },
            { "B_Kitbag_cbr", "", 3500, "" },
            { "B_FieldPack_blk", "", 5000, "" },
            { "B_FieldPack_ocamo", "", 5000, "" },
            { "B_FieldPack_oucamo", "", 5000, "" },
            { "B_Bergen_sgg", "", 6500, "" },
            { "B_Bergen_mcamo", "", 6500, "" },
            { "B_Bergen_rgr", "", 6500, "" },
            { "B_Bergen_blk", "", 6500, "" },
            { "B_Carryall_ocamo", "", 7500, "" },
            { "B_Carryall_oucamo", "", 7500, "" },
            { "B_Carryall_mcamo", "", 7500, "" },
            { "B_Carryall_oli", "", 7500, "" },
            { "B_Carryall_khk", "", 7500, "" },
            { "B_Carryall_cbr", "", 7500, "" }
        };
    };

    class kart {
        title = "STR_Shops_C_Kart";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_C_Driver_1_black", "", 1500, "" },
            { "U_C_Driver_1_blue", "", 1500, "" },
            { "U_C_Driver_1_red", "", 1500, "" },
            { "U_C_Driver_1_orange", "", 1500, "" },
            { "U_C_Driver_1_green", "", 1500, "" },
            { "U_C_Driver_1_white", "", 1500, "" },
            { "U_C_Driver_1_yellow", "", 1500, "" },
            { "U_C_Driver_2", "", 3500, "" },
            { "U_C_Driver_1", "", 3600, "" },
            { "U_C_Driver_3", "", 3700, "" },
            { "U_C_Driver_4", "", 3700, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_RacingHelmet_1_black_F", "", 1000, "" },
            { "H_RacingHelmet_1_red_F", "", 1000, "" },
            { "H_RacingHelmet_1_white_F", "", 1000, "" },
            { "H_RacingHelmet_1_blue_F", "", 1000, "" },
            { "H_RacingHelmet_1_yellow_F", "", 1000, "" },
            { "H_RacingHelmet_1_green_F", "", 1000, "" },
            { "H_RacingHelmet_1_F", "", 2500, "" },
            { "H_RacingHelmet_2_F", "", 2500, "" },
            { "H_RacingHelmet_3_F", "", 2500, "" },
            { "H_RacingHelmet_4_F", "", 2500, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };
};
