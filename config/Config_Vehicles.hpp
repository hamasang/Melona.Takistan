class CarShops {
    /*
    *    ARRAY FORMAT:
    *        0: STRING (Classname)
    *        1: STRING (Condition)
    *    FORMAT:
    *        STRING (Conditions) - Must return boolean :
    *            String can contain any amount of conditions, aslong as the entire
    *            string returns a boolean. This allows you to check any levels, licenses etc,
    *            in any combination. For example:
    *                "call life_coplevel && license_civ_someLicense"
    *            This will also let you call any other function.
    *
    *   BLUFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_WEST
    *   OPFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EAST
    *   Independent Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_GUER
    *   Civilian Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_CIV
    */
    class civ_car {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "B_Quadbike_01_F", "" },
            { "C_Hatchback_01_F", "" },
            { "C_Offroad_01_F", "" },
            { "C_SUV_01_F", "" },
            { "C_Hatchback_01_sport_F", "" },
            { "C_Van_01_transport_F", "" },
            { "C_Offroad_02_unarmed_F", "" }, //Apex DLC
            { "CUP_C_Volha_Gray_TKCIV", ""},
            { "CUP_C_Volha_Blue_TKCIV", ""},
            { "CUP_C_Volha_Limo_TKCIV", ""},
            { "CUP_O_Volha_SLA", ""},
            { "CUP_C_Volha_CR_CIV", ""},
            { "CUP_C_Skoda_CR_CIV", ""},
            { "CUP_C_Skoda_White_CIV", ""},
            { "CUP_C_Skoda_Red_CIV", ""},
            { "CUP_C_Skoda_Blue_CIV", ""},
            { "CUP_C_Skoda_Green_CIV", ""},
            { "CUP_C_Lada_CIV", ""},
            { "CUP_C_Lada_White_CIV", ""},
            { "CUP_C_Lada_Red_CIV", ""},
            { "CUP_C_Lada_TK_CIV", ""},
            { "CUP_C_Lada_GreenTK_CIV", ""},
            { "CUP_C_Lada_TK2_CIV", ""},
            { "CUP_LADA_LM_CIV", ""},
            { "CUP_C_Octavia_CIV", ""},
            { "CUP_C_Golf4_Sport_CR_Civ", ""},
            { "CUP_C_Golf4_Sport_random_Civ", ""},
            { "CUP_C_Golf4_whiteblood_Civ", ""},
            { "CUP_C_Golf4_camo_Civ", ""},
            { "CUP_C_Golf4_camodigital_Civ", ""},
            { "CUP_C_Golf4_camodark_Civ", ""},
            { "CUP_C_Golf4_reptile_Civ", ""},
            { "CUP_C_Golf4_kitty_Civ", ""},
            { "CUP_C_Golf4_crowe_Civ", ""},
            { "CUP_C_Datsun", ""},
            { "CUP_C_SUV_TK", ""},
            { "CUP_C_SUV_CIV", ""},
            { "CUP_C_LR_Transport_CTK", ""},
            { "CUP_B_LR_Transport_CZ_W", ""},
            { "CUP_B_LR_Transport_CZ_D", ""},
            { "CUP_I_LR_Transport_AAF", ""},
            { "CUP_I_LR_Transport_RACS", ""},
            { "CUP_O_LR_Transport_TKA", ""},
            { "CUP_O_LR_Transport_TKM", ""},
            { "CUP_I_Hilux_unarmed_TK", ""},
            { "CUP_O_Hilux_unarmed_TK_INS", ""},
            { "CUP_O_Hilux_unarmed_CHDKZ", ""},
            { "CUP_O_Hilux_unarmed_OPF_G_F", ""},
            { "CUP_I_Hilux_unarmed_IND_G_F", ""},
            { "CUP_B_Hilux_unarmed_BLU_G_F", ""},
            { "CUP_I_Hilux_unarmed_NAPA", ""},
            { "CUP_O_Hilux_unarmed_CR_CIV", ""},
            { "CUP_O_Hilux_unarmed_CR_CIV_Red", ""},
            { "CUP_O_Hilux_unarmed_CR_CIV_Tan", ""},
            { "CUP_O_Hilux_unarmed_CR_CIV_White", ""},
            { "CUP_O_Hilux_unarmed_TK_CIV", ""},
            { "CUP_O_Hilux_unarmed_TK_CIV_Red", ""},
            { "CUP_O_Hilux_unarmed_TK_CIV_Tan", ""},
            { "CUP_O_Hilux_unarmed_TK_CIV_White", ""},
            { "CUP_C_S1203_CIV", ""},
            { "CUP_C_S1203_Militia_CIV", ""},
            { "CUP_C_S1203_CIV_CR", ""},
            { "I_E_Offroad_01_covered_F", ""},
            { "C_Offroad_01_covered_F", ""},
            { "C_Offroad_01_comms_F", ""},
            { "C_Van_02_vehicle_F", ""},
            { "I_G_Van_02_vehicle_F", ""},
            { "B_G_Van_02_vehicle_F", ""},
            { "O_G_Van_02_vehicle_F", ""},
            { "I_C_Van_02_vehicle_F", ""},
            { "I_E_Van_02_vehicle_F", ""},
            { "AlessioMustang", ""},
            { "AlessioGTB", ""},
            { "FY_MercedesGClassHumman", ""},
            { "AlessioM8", ""}
        };
    };

    class kart_shop {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "C_Kart_01_Blu_F", "" },
            { "C_Kart_01_Fuel_F", "" },
            { "C_Kart_01_Red_F", "" },
            { "C_Kart_01_Vrana_F", "" }
        };
    };

    class civ_truck {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "C_Van_01_box_F", "" },
            { "I_Truck_02_transport_F", "" },
            { "I_Truck_02_covered_F", "" },
            { "B_Truck_01_transport_F", "" },
            { "O_Truck_03_transport_F", "" },
            { "O_Truck_03_covered_F", "" },
            { "B_Truck_01_box_F", "" },
            { "O_Truck_03_device_F", "" },
            { "C_Van_01_fuel_F", "" },
            { "I_Truck_02_fuel_F", "" },
            { "B_Truck_01_fuel_F", "" }
        };
    };

    class civ_air {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "C_Heli_Light_01_civil_F", "" },
            { "B_Heli_Light_01_F", "" },
            { "O_Heli_Light_02_unarmed_F", "" },
            { "C_Plane_Civil_01_F", "" },
            { "I_C_Heli_Light_01_civil_F", "" },
            { "CUP_B_MI6A_CDF", "" },
            { "CUP_O_MI6A_CHDKZ", "" },
            { "CUP_O_MI6A_TKA", "" },
            { "CUP_O_MI6A_SLA", "" },
            { "CUP_I_MI6A_UN", "" },
            { "CUP_O_MI6A_RU", "" },
            { "CUP_O_MI6A_CSAT_T", "" },
            { "CUP_C_MI6A_RU", "" },
            { "CUP_C_Mi17_Civilian_RU", "" },
            { "CUP_B_SA330_Puma_HC2_BAF", "" },
            { "CUP_I_SA330_Puma_HC2_RACS", "" },
            { "CUP_I_Wildcat_Unarmed_Green_AAF", "" },
            { "CUP_I_Wildcat_Unarmed_Digital_AAF", "" },
            { "CUP_I_Wildcat_Green_AAF", "" },
            { "CUP_I_Wildcat_Digital_AAF", "" },
            { "B_Heli_Transport_03_unarmed_F", "" },
            { "CUP_C_AN2_AEROSCHROT_TK_CIV", "" },
            { "CUP_C_AN2_CIV", "" },
            { "CUP_C_AN2_AIRTAK_TK_CIV", "" },
            { "CUP_O_AN2_TK", "" },
            { "CUP_C_C47_CIV", "" },
            { "CUP_O_C47_SLA", "" },
            { "CUP_B_C47_USA", "" },
            { "CUP_C_Cessna_172_CIV", "" },
            { "CUP_C_Cessna_172_CIV_BLUE", "" },
            { "CUP_C_Cessna_172_CIV_GREEN", "" },
            { "C_Plane_Civil_01_F", "" },
            { "C_Plane_Civil_01_racing_F", "" },
            { "I_C_Plane_Civil_01_F", "" },
            { "CUP_I_Plane_ION", "" },
            { "CUP_C_Plane_Orbit", "" },
            { "CUP_C_B737_CIV", "" },
            { "CUP_B_P8Poseidon_USN", "" },
            { "CUP_B_P8Poseidon_RAAF", "" },
            { "CUP_C_A300_CIV", "" }
        };
    };

     class civ_ship {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "C_Rubberboat", "" },
            { "C_Boat_Civil_01_F", "" },
            { "C_Boat_Transport_02_F", "" }, //Apex DLC
            { "C_Scooter_Transport_01_F", "" },
            { "CUP_O_PBX_RU", "" },
            { "CUP_O_PBX_SLA", "" },
            { "CUP_C_PBX_CIV", "" },
            { "CUP_B_Zodiac_USMC", "" },
            { "CUP_C_Zodiac_CIV", "" },
            { "I_C_Boat_Transport_02_F", "" },
            { "CUP_B_Seafox_USMC", "" },
            { "CUP_B_Seafox_USV_USMC", "" },
            { "CUP_C_Fishing_Boat_Chernarus", "" },
            { "CUP_B_MK10_GB", "" },
            { "B_SDV_01_F", "" },
            { "O_SDV_01_F", "" },
            { "I_SDV_01_F", "" }
        };
    };

    class reb_car {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "B_Quadbike_01_F", "" },
            { "B_G_Offroad_01_F", "" },
            { "O_MRAP_02_F", "" },
            { "B_Heli_Light_01_stripped_F", "" },
            { "O_T_LSV_02_unarmed_F", "" },
            {"CUP_O_Datsun_PK",""},
            {"CUP_O_Datsun_PK_Random",""},
            {"CUP_I_Datsun_PK",""},
            {"CUP_I_Datsun_PK_Random",""},
            {"CUP_I_Datsun_PK_TK",""},
            {"CUP_I_Datsun_PK_TK_Random",""},
            {"CUP_B_M151_M2_HIL",""},
            {"CUP_I_M151_M2_SYND",""},
            {"I_C_Offroad_02_LMG_F",""},
            {"CUP_I_4WD_LMG_ION",""}, {"I_G_Offroad_01_armed_F",""}, {"B_G_Offroad_01_armed_F",""}, {"O_G_Offroad_01_armed_F",""}, {"CUP_B_LR_MG_CZ_W",""}, {"CUP_I_LR_MG_AAF",""}, {"CUP_I_LR_MG_RACS",""}, {"CUP_O_LR_MG_TKA",""}, {"CUP_O_LR_MG_TKM",""}, {"CUP_I_Hilux_DSHKM_TK",""}, {"CUP_O_Hilux_DSHKM_TK_INS",""}, {"CUP_O_Hilux_DSHKM_CHDKZ",""}, {"CUP_O_Hilux_DSHKM_OPF_G_F",""}, {"CUP_I_Hilux_DSHKM_IND_G_F",""}, {"CUP_B_Hilux_DSHKM_BLU_G_F",""}, {"CUP_I_Hilux_DSHKM_NAPA",""}, {"CUP_I_SUV_Armored_ION",""}, {"CUP_I_BTR40_MG_TKG",""}, {"CUP_O_BTR40_MG_TKM",""}, {"CUP_O_BTR40_MG_TKA",""}, {"CUP_I_Hilux_armored_M2_TK",""}, {"CUP_O_Hilux_armored_M2_TK_INS",""}, {"CUP_O_Hilux_armored_M2_OPF_G_F",""}, {"CUP_I_Hilux_armored_M2_IND_G_F",""}, {"CUP_B_Hilux_armored_M2_BLU_G_F",""}, {"CUP_B_T810_Armed_CZ_WDL",""}, {"CUP_B_T810_Armed_CZ_DES",""}, {"CUP_B_BRDM2_CDF",""}, {"CUP_O_BRDM2_CHDKZ",""}, {"CUP_I_BRDM2_NAPA",""}, {"CUP_O_BRDM2_SLA",""}, {"CUP_O_BRDM2_CSAT",""}, {"CUP_O_BRDM2_CSAT_T",""}, {"CUP_O_BRDM2_RUS",""}, {"CUP_O_BRDM2_TKA",""}, {"CUP_I_BRDM2_TK_Gue",""}, {"CUP_I_BRDM2_UN",""}, {"CUP_B_BRDM2_CZ",""}, {"CUP_B_BRDM2_CZ_Des",""}, {"CUP_B_Dingo_GL_CZ_Wdl",""}, {"CUP_B_Dingo_GL_CZ_Des",""}, {"CUP_B_Dingo_GL_GER_Wdl",""}, {"CUP_B_Dingo_GL_GER_Des",""}, {"CUP_B_BTR60_CDF",""}, {"CUP_O_BTR60_TK",""}, {"CUP_O_BTR60_SLA",""}, {"CUP_O_BTR60_CSAT",""}, {"CUP_O_BTR60_RU",""}, {"CUP_O_BTR60_Green_RU",""}, {"CUP_O_BTR60_CHDKZ",""}, {"CUP_O_GAZ_Vodnik_BPPU_RU",""}, {"CUP_B_BTR80_CDF",""}, {"CUP_O_BTR80_GREEN_RU",""}, {"CUP_O_BTR80_CAMO_RU",""}, {"CUP_O_BTR80_WINTER_RU",""}, {"CUP_O_BTR80_DESERT_RU",""}, {"CUP_O_BTR80_CHDKZ",""}, {"CUP_O_BTR80_CSAT",""}, {"CUP_O_BTR80_CSAT_T",""}, {"CUP_O_BMP_HQ_TKA",""}, {"CUP_B_BMP_HQ_CDF",""}, {"CUP_O_BMP_HQ_RU",""}, {"CUP_O_BMP_HQ_CHDKZ",""}, {"CUP_I_BMP_HQ_UN",""}, {"CUP_O_BMP_HQ_sla",""}, {"CUP_O_BMP_HQ_CSAT",""}, {"CUP_O_BMP_HQ_CSAT_T",""}, {"CUP_I_BMP_HQ_NAPA",""}, {"CUP_B_BMP_HQ_CZ",""}, {"CUP_B_BMP_HQ_CZ_Des",""}, {"CUP_O_BMP_HQ_TKA",""}, {"CUP_O_MTLB_pk_TKA",""}, {"CUP_O_MTLB_pk_TK_MILITIA",""}, {"CUP_O_MTLB_pk_ChDKZ",""}, {"CUP_O_MTLB_pk_SLA",""}, {"CUP_O_MTLB_pk_Green_RU",""}, {"CUP_O_MTLB_pk_WDL_RU",""}, {"CUP_B_MTLB_pk_CDF",""}, {"CUP_B_MTLB_pk_Winter_CDF",""}, {"CUP_O_BMP2_ZU_TKA",""}, {"CUP_O_BMP2_ZU_CSAT",""}, {"CUP_O_BMP2_ZU_CSAT_T",""}, {"CUP_I_T34_NAPA",""}, {"CUP_O_T34_TKA",""}, {"CUP_I_T34_TK_GUE",""}, {"CUP_B_M60A3_USMC",""}, {"CUP_B_M60A3_TTS_USMC",""}, {"CUP_I_M60A3_RACS",""}, {"CUP_I_M60A3_TTS_RACS",""}, {"CUP_O_T55_TK",""}, {"CUP_I_T55_TK_GUE",""}, {"CUP_I_T55_NAPA",""}, {"CUP_O_T55_CHDKZ",""}, {"CUP_O_T55_SLA",""}, {"CUP_O_T55_CSAT",""}, {"CUP_O_T55_CSAT_T",""}, {"CUP_B_Challenger2_Woodland_BAF",""}, {"CUP_B_Challenger2_2CW_BAF",""}, {"CUP_B_Challenger2_Desert_BAF",""}, {"CUP_B_Challenger2_2CD_BAF",""}, {"CUP_B_Challenger2_Snow_BAF",""}, {"CUP_B_Challenger2_2CS_BAF",""}, {"CUP_B_Challenger2_Green_CTRG",""}, {"CUP_B_Challenger2_Sand_CTRG",""}, {"CUP_B_Challenger2_NATO",""}, {"CUP_B_T72_CDF",""}, {"CUP_I_T72_RACS",""}, {"CUP_I_T72_NAPA",""}, {"CUP_O_T72_SLA",""}, {"CUP_O_T72_CSAT",""}, {"CUP_O_T72_CSAT_T",""}, {"CUP_O_T72_TKA",""}, {"CUP_O_T72_RU",""}, {"CUP_O_T72_CHDKZ",""}, {"CUP_O_T90_RU",""}
        };
    };

    class med_shop {
        side = "med";
        conditions = "";
        vehicles[] = {
            { "C_Offroad_01_F", "" },
            { "I_Truck_02_medical_F", "" },
            { "O_Truck_03_medical_F", "" },
            { "B_Truck_01_medical_F", "" },
            { "CUP_B_HMMWV_Ambulance_USMC", ""},
            { "CUP_B_LR_Ambulance_CZ_W", ""},
            { "CUP_C_S1203_Ambulance_CIV", ""},
            { "C_Van_02_medevac_F", ""},
            { "B_AFV_Wheeled_01_up_cannon_F", ""},
            { "CUP_B_M113_Med_USA", ""}
        };
    };

    class med_air_hs {
        side = "med";
        conditions = "";
        vehicles[] = {
            { "B_Heli_Light_01_F", "" },
            { "O_Heli_Light_02_unarmed_F", "" },
            { "CUP_B_UH60M_Unarmed_US" ,""},
            { "CUP_MH60S_Unarmed_USN" ,""}
        };
    };

    class cop_car {
        side = "cop";
        conditions = "";
        vehicles[] = {
            { "C_Offroad_01_F", "" },
            { "C_SUV_01_F", "" },
            { "C_Hatchback_01_sport_F", "call life_coplevel >= 1" },
            { "B_MRAP_01_F", "call life_coplevel >= 2" },
            { "B_MRAP_01_hmg_F", "call life_coplevel >= 3" },
            { "CUP_B_M1152_USA", "call life_coplevel >= 2" },{ "CUP_B_M1152_WDL_USA", "call life_coplevel >= 2" },{ "CUP_B_M1152_USMC", "call life_coplevel >= 2" },{ "CUP_B_M1152_DSRT_USMC", "call life_coplevel >= 2" },{ "CUP_B_M1152_NATO_T", "call life_coplevel >= 2" },{ "CUP_B_M1151_USA", "call life_coplevel >= 2" },{ "CUP_B_M1151_WDL_USA", "call life_coplevel >= 2" },{ "CUP_B_M1151_USMC", "call life_coplevel >= 2" },{ "CUP_B_M1151_DSRT_USMC", "call life_coplevel >= 2" },{ "CUP_B_M1151_NATO_T", "call life_coplevel >= 2" },{ "CUP_B_HMMWV_Transport_USA", "call life_coplevel >= 2" },{ "CUP_B_HMMWV_Transport_NATO_T", "call life_coplevel >= 2" },{ "CUP_B_M1151_Deploy_USA", "call life_coplevel >= 2" },{ "CUP_B_M1151_Deploy_WDL_USA", "call life_coplevel >= 2" },{ "CUP_B_M1151_Deploy_USMC", "call life_coplevel >= 2" },{ "CUP_B_M1151_Deploy_DSRT_USMC", "call life_coplevel >= 2" },{ "CUP_B_M1151_Deploy_NATO_T", "call life_coplevel >= 2" },{ "CUP_B_M1165_GMV_USA ", "call life_coplevel >= 2" },{ "CUP_B_M1165_GMV_WDL_USA", "call life_coplevel >= 2" },{ "CUP_B_M1165_GMV_USMC", "call life_coplevel >= 2" },{ "CUP_B_M1165_GMV_DSRT_USMC", "call life_coplevel >= 2" },{ "CUP_B_M1165_GMV_NATO_T", "call life_coplevel >= 2" },{ "CUP_B_M1151_Mk19_USA", "call life_coplevel >= 3" },{ "CUP_B_M1151_Mk19_WDL_USA", "call life_coplevel >= 3" },{ "CUP_B_M1151_Mk19_USMC", "call life_coplevel >= 3" },{ "CUP_B_M1151_Mk19_DSRT_USMC", "call life_coplevel >= 3" },{ "CUP_B_M1151_Mk19_NATO_T", "call life_coplevel >= 3" },{ "CUP_B_M1126_ICV_M2_Desert", "call life_coplevel >= 3" },{ "CUP_B_M1126_ICV_M2_Woodland", "call life_coplevel >= 3" },{ "CUP_B_M1167_USA", "call life_coplevel >= 3" },{ "CUP_B_M1167_WDL_USA", "call life_coplevel >= 3" },{ "CUP_B_M1167_USMC", "call life_coplevel >= 3" },{ "CUP_B_M1167_DSRT_USMC", "call life_coplevel >= 3" },{ "CUP_B_M1167_NATO_T", "call life_coplevel >= 3" },{ "CUP_B_M1128_MGS_Desert", "call life_coplevel >= 4" },{ "CUP_B_M1128_MGS_Woodland", "call life_coplevel >= 4" },{ "CUP_B_RG31E_M2_USMC", "call life_coplevel >= 4" },{ "CUP_B_RG31E_M2_OD_USMC", "call life_coplevel >= 4" },{ "CUP_B_RG31E_M2_USA", "call life_coplevel >= 4" },{ "CUP_B_RG31E_M2_OD_USA", "call life_coplevel >= 4" },{ "CUP_I_RG31E_M2_ION", "call life_coplevel >= 4" },{ "CUP_I_RG31E_M2_W_ION", "call life_coplevel >= 4" },{ "CUP_B_Ridgback_GMG_GB_D", "call life_coplevel >= 4" },{ "CUP_B_Ridgback_GMG_GB_W", "call life_coplevel >= 4" },{ "CUP_B_Wolfhound_HMG_GB_D", "call life_coplevel >= 4" },{ "CUP_B_Wolfhound_HMG_GB_W", "call life_coplevel >= 4" },{ "CUP_B_FV510_GB_D_SLAT", "call life_coplevel >= 5" },{ "CUP_B_FV510_GB_W_SLAT", "call life_coplevel >= 5" },{ "CUP_B_M1A1_Woodland_US_Army", "call life_coplevel >= 5" },{ "CUP_B_M1A1_DES_US_Army", "call life_coplevel >= 5" },{ "CUP_B_M1A1_Woodland_USMC", "call life_coplevel >= 5" },{ "CUP_B_M1A1_DES_USMC", "call life_coplevel >= 5" },{ "CUP_B_M1A1_NATO_T", "call life_coplevel >= 5" },{ "CUP_B_M2A3Bradley_USA_D", "call life_coplevel >= 5" },{ "CUP_B_M2A3Bradley_USA_W", "call life_coplevel >= 5" },{ "CUP_B_M2A3Bradley_NATO_T", "call life_coplevel >= 5" },{ "CUP_B_Leopard2A6_GER", "call life_coplevel >= 5" },{ "CUP_B_Leopard2A6DST_GER", "call life_coplevel >= 5" },{ "CUP_B_Leopard2A6_HIL", "call life_coplevel >= 5" }
        };
    };

    class cop_air {
        side = "cop";
        conditions = "call life_coplevel >= 2";
        vehicles[] = {
            { "B_Heli_Light_01_F", "" },
            { "B_Heli_Transport_01_F", "call life_coplevel >= 4" },
            {"CUP_B_AH6X_USA", "call life_coplevel >= 2" },{"CUP_O_PBX_RU", "call life_coplevel >= 2" },{"CUP_O_PBX_SLA", "call life_coplevel >= 2" },{"CUP_C_PBX_CIV", "call life_coplevel >= 2" },{"CUP_B_MH6M_USA", "call life_coplevel >= 2" },{"CUP_B_MH6M_OBS_USA", "call life_coplevel >= 2" },{"CUP_I_MH6M_ION", "call life_coplevel >= 2" },{"CUP_I_MH6M_ION_OBS", "call life_coplevel >= 2" },{"CUP_B_UH1Y_UNA_USMC", "call life_coplevel >= 2" },{"O_Heli_Light_02_dynamicLoadout_F", "call life_coplevel >= 2" },{"CUP_MH60S_Unarmed_USN", "call life_coplevel >= 3" },{"CUP_B_AH6M_USA", "call life_coplevel >= 3" },{"CUP_B_CH47F_VIV_USA", "call life_coplevel >= 3" },{"CUP_B_AH1Z_Dynamic_USMC", "call life_coplevel >= 4" },{"CUP_B_AH64D_DL_USA", "call life_coplevel >= 4" },{"CUP_B_F35B_USMC", "call life_coplevel >= 5" },{"CUP_B_F35B_Stealth_USMC", "call life_coplevel >= 5" },{"CUP_B_F35B_BAF", "call life_coplevel >= 5" },{"CUP_B_F35B_Stealth_BAF", "call life_coplevel >= 5" },{"CUP_B_A10_DYN_USA", "call life_coplevel >= 5" },{"CUP_B_AV8B_DYN_USMC", "call life_coplevel >= 5" }
        };
    };

    class cop_ship {
        side = "cop";
        conditions = "";
        vehicles[] = {
            { "B_Boat_Transport_01_F", "" },
            { "C_Boat_Civil_01_police_F", "" },
            { "C_Boat_Transport_02_F", "" }, //Apex DLC
            { "B_Boat_Armed_01_minigun_F", "call life_coplevel >= 3" },
            { "B_SDV_01_F", "" }
        };
    };
};

class LifeCfgVehicles {
    /*
    *    Vehicle Configs (Contains textures and other stuff)
    *
    *    "price" is the price before any multipliers set in Master_Config are applied.
    *
    *    Default Multiplier Values & Calculations:
    *       Civilian [Purchase, Sell]: [1.0, 0.5]
    *       Cop [Purchase, Sell]: [0.5, 0.5]
    *       Medic [Purchase, Sell]: [0.75, 0.5]
    *       ChopShop: Payout = price * 0.25
    *       GarageSell: Payout = price * [0.5, 0.5, 0.5, -1]
    *       Cop Impound: Payout = price * 0.1
    *       Pull Vehicle from Garage: Cost = price * [1, 0.5, 0.75, -1] * [0.5, 0.5, 0.5, -1]
    *           -- Pull Vehicle & GarageSell Array Explanation = [civ,cop,medic,east]
    *
    *       1: STRING (Condition)
    *    Textures config follows { Texture Name, side, {texture(s)path}, Condition}
    *    Texture(s)path follows this format:
    *    INDEX 0: Texture Layer 0
    *    INDEX 1: Texture Layer 1
    *    INDEX 2: Texture Layer 2
    *    etc etc etc
    *
    */

    class Default {
        vItemSpace = -1;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class AlessioMustang {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2200000;
        textures[] = {};
    };

    class AlessioGTB {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 6880000;
        textures[] = {};
    };

    class AlessioM8 {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 3000000;
        textures[] = {};
    };

    class FY_MercedesGClassHumman {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2600000;
        textures[] = {};
    };

    class CUP_B_HMMWV_Ambulance_USMC {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };

    class CUP_B_LR_Ambulance_CZ_W {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };

    class CUP_C_S1203_Ambulance_CIV {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };

    class C_Van_02_medevac_F {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };

    class O_APC_Tracked_02_AA_F {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };
    class CUP_B_UH60M_Unarmed_US {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };
    class CUP_MH60S_Unarmed_USN {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };

    class B_AFV_Wheeled_01_up_cannon_F {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };

    class CUP_B_M113_Med_USA {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };

    class CUP_B_M1152_USA {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };
    class CUP_B_M1152_WDL_USA {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };
    class CUP_B_M1152_USMC {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };
    class CUP_B_M1152_DSRT_USMC {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };
    class CUP_B_M1152_NATO_T {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };
    class CUP_B_M1151_USA {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };
    class CUP_B_M1151_WDL_USA {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };
    class CUP_B_M1151_USMC {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };
    class CUP_B_M1151_DSRT_USMC {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };
    class CUP_B_M1151_NATO_T {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };
    class CUP_B_HMMWV_Transport_USA {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };
    class CUP_B_HMMWV_Transport_NATO_T {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };
    class CUP_B_M1151_Deploy_USA {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };
    class CUP_B_M1151_Deploy_WDL_USA {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };
    class CUP_B_M1151_Deploy_USMC {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };
    class CUP_B_M1151_Deploy_DSRT_USMC {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };
    class CUP_B_M1151_Deploy_NATO_T {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };
    class CUP_B_M1165_GMV_USA {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };
    class CUP_B_M1165_GMV_WDL_USA {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };
    class CUP_B_M1165_GMV_USMC {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };
    class CUP_B_M1165_GMV_DSRT_USMC {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };
    class CUP_B_M1165_GMV_NATO_T {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };
    class CUP_B_M1151_Mk19_USA {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };
    class CUP_B_M1151_Mk19_WDL_USA {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };
    class CUP_B_M1151_Mk19_USMC {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };
    class CUP_B_M1151_Mk19_DSRT_USMC {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };
    class CUP_B_M1151_Mk19_NATO_T {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };
    class CUP_B_M1126_ICV_M2_Desert {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };
    class CUP_B_M1126_ICV_M2_Woodland {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };
    class CUP_B_M1167_USA {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };
    class CUP_B_M1167_WDL_USA {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };
    class CUP_B_M1167_USMC {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };
    class CUP_B_M1167_DSRT_USMC {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };
    class CUP_B_M1167_NATO_T {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };
    class CUP_B_M1128_MGS_Desert {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };
    class CUP_B_M1128_MGS_Woodland {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };
    class CUP_B_RG31E_M2_USMC {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };
    class CUP_B_RG31E_M2_OD_USMC {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };
    class CUP_B_RG31E_M2_USA {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };
    class CUP_B_RG31E_M2_OD_USA {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };
    class CUP_I_RG31E_M2_ION {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };
    class CUP_I_RG31E_M2_W_ION {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };
    class CUP_B_Ridgback_GMG_GB_D {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };
    class CUP_B_Ridgback_GMG_GB_W {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };
    class CUP_B_Wolfhound_HMG_GB_D {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };
    class CUP_B_Wolfhound_HMG_GB_W {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };
    class CUP_B_FV510_GB_D_SLAT {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };
    class CUP_B_FV510_GB_W_SLAT {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };
    class CUP_B_M1A1_Woodland_US_Army {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };
    class CUP_B_M1A1_DES_US_Army {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };
    class CUP_B_M1A1_Woodland_USMC {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };
    class CUP_B_M1A1_DES_USMC {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };
    class CUP_B_M1A1_NATO_T {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };
    class CUP_B_M2A3Bradley_USA_D {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };
    class CUP_B_M2A3Bradley_USA_W {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };
    class CUP_B_M2A3Bradley_NATO_T {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };
    class CUP_B_Leopard2A6_GER {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };
    class CUP_B_Leopard2A6DST_GER {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };
    class CUP_B_Leopard2A6_HIL {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };

    // Apex DLC
    class C_Boat_Transport_02_F {
        vItemSpace = 35;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 150000;
        textures[] = {
            { "Civilian", "civ", {
                "\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_civilian_CO.paa"
            }, "" },
            { "Black", "cop", {
                "\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_CO.paa"
            }, "" }
        };
    };

    // Apex DLC
    class C_Offroad_02_unarmed_F {
        vItemSpace = 65;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 12500;
        textures[] = {
            { "Black", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa"
            }, "" },
            { "Blue", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa"
            }, "" },
            { "Green", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa"
            }, "" },
            { "Orange", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_orange_co.paa"
            }, "" },
            { "Red", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa"
            }, "" },
            { "White", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa"
            }, "" }
        };
    };

    // Apex DLC
    class C_Plane_Civil_01_F {
        vItemSpace = 10;
        conditions = "license_civ_pilot || {!(playerSide isEqualTo civilian)}";
        price = 800000;
        textures[] = {
            { "Racing (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, "" },
            { "Racing", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" },
            { "Red Line (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, "" },
            { "Red Line", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" },
            { "Tribal (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, "" },
            { "Tribal", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" },
            { "Blue Wave (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, "" },
            { "Blue Wave", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" }
        };
    };

    // Apex DLC
    class C_Scooter_Transport_01_F {
        vItemSpace = 30;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 2500;
        textures[] = {
            { "Black", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Black_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Black_CO.paa"
            }, "" },
            { "Blue", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Blue_co.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Blue_co.paa"
            }, "" },
            { "Grey", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Grey_co.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Grey_co.paa"
            }, "" },
            { "Green", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Lime_co.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Lime_co.paa"
            }, "" },
            { "Red", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Red_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"
            }, "" },
            { "White", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"
            }, "" },
            { "Yellow", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Yellow_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Yellow_CO.paa"
            }, "" }
        };
    };

    // Apex DLC
    class O_T_LSV_02_unarmed_F {
        vItemSpace = 100;
        conditions = "";
        price = 100000;
        textures[] = {
            { "Arid", "civ", {
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_arid_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_arid_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_arid_CO.paa"
            }, "" },
            { "Black", "civ", {
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_black_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"
            }, "" },
            { "Green Hex", "civ", {
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_ghex_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_ghex_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa"
            }, "" }
        };
    };


    class CUP_B_AH6X_USA {
        vItemSpace = 50;
        conditions = "";
        price = 500;
        textures[] = {};
    };
    class CUP_O_PBX_RU {
        vItemSpace = 50;
        conditions = "";
        price = 500;
        textures[] = {};
    };
    class CUP_B_MH6M_USA {
        vItemSpace = 50;
        conditions = "";
        price = 500;
        textures[] = {};
    };
    class CUP_B_MH6M_OBS_USA {
        vItemSpace = 50;
        conditions = "";
        price = 500;
        textures[] = {};
    };
    class CUP_I_MH6M_ION {
        vItemSpace = 50;
        conditions = "";
        price = 500;
        textures[] = {};
    };
    class CUP_I_MH6M_ION_OBS {
        vItemSpace = 50;
        conditions = "";
        price = 500;
        textures[] = {};
    };
    class CUP_B_UH1Y_UNA_USMC {
        vItemSpace = 50;
        conditions = "";
        price = 500;
        textures[] = {};
    };
    class O_Heli_Light_02_dynamicLoadout_F {
        vItemSpace = 50;
        conditions = "";
        price = 500;
        textures[] = {};
    };
    class CUP_B_AH6M_USA {
        vItemSpace = 50;
        conditions = "";
        price = 500;
        textures[] = {};
    };
    class CUP_B_CH47F_VIV_USA {
        vItemSpace = 50;
        conditions = "";
        price = 500;
        textures[] = {};
    };
    class CUP_B_AH1Z_Dynamic_USMC {
        vItemSpace = 50;
        conditions = "";
        price = 2000000;
        textures[] = {};
    };
    class CUP_B_AH64D_DL_USA {
        vItemSpace = 50;
        conditions = "";
        price = 3000000;
        textures[] = {};
    };
    class CUP_B_F35B_USMC {
        vItemSpace = 50;
        conditions = "";
        price = 500;
        textures[] = {};
    };
    class CUP_B_F35B_Stealth_USMC {
        vItemSpace = 50;
        conditions = "";
        price = 500;
        textures[] = {};
    };
    class CUP_B_F35B_BAF {
        vItemSpace = 50;
        conditions = "";
        price = 500;
        textures[] = {};
    };
    class CUP_B_F35B_Stealth_BAF {
        vItemSpace = 50;
        conditions = "";
        price = 500;
        textures[] = {};
    };
    class CUP_B_A10_DYN_USA {
        vItemSpace = 50;
        conditions = "";
        price = 500;
        textures[] = {};
    };
    class CUP_B_AV8B_DYN_USMC {
        vItemSpace = 50;
        conditions = "";
        price = 500;
        textures[] = {};
    };

    //Start
    class CUP_O_Datsun_PK {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 200000;
        textures[] = {};
    };
    class CUP_O_Datsun_PK_Random {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 200000;
        textures[] = {};
    };
    class CUP_I_Datsun_PK {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 200000;
        textures[] = {};
    };
    class CUP_I_Datsun_PK_Random {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 200000;
        textures[] = {};
    };
    class CUP_I_Datsun_PK_TK {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 200000;
        textures[] = {};
    };
    class CUP_I_Datsun_PK_TK_Random {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 200000;
        textures[] = {};
    };
    class CUP_B_M151_M2_HIL {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 250000;
        textures[] = {};
    };
    class CUP_I_M151_M2_SYND {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 250000;
        textures[] = {};
    };
    class I_C_Offroad_02_LMG_F {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 300000;
        textures[] = {};
    };
    class CUP_I_4WD_LMG_ION {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 300000;
        textures[] = {};
    };
    class I_G_Offroad_01_armed_F {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 400000;
        textures[] = {};
    };
    class B_G_Offroad_01_armed_F {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 400000;
        textures[] = {};
    };
    class O_G_Offroad_01_armed_F {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 400000;
        textures[] = {};
    };
    class CUP_B_LR_MG_CZ_W {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 600000;
        textures[] = {};
    };
    class CUP_I_LR_MG_AAF {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 600000;
        textures[] = {};
    };
    class CUP_I_LR_MG_RACS {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 600000;
        textures[] = {};
    };
    class CUP_O_LR_MG_TKA {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 600000;
        textures[] = {};
    };
    class CUP_O_LR_MG_TKM {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 600000;
        textures[] = {};
    };
    class CUP_I_Hilux_DSHKM_TK {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 600000;
        textures[] = {};
    };
    class CUP_O_Hilux_DSHKM_TK_INS {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 600000;
        textures[] = {};
    };
    class CUP_O_Hilux_DSHKM_CHDKZ {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 600000;
        textures[] = {};
    };
    class CUP_O_Hilux_DSHKM_OPF_G_F {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 600000;
        textures[] = {};
    };
    class CUP_I_Hilux_DSHKM_IND_G_F {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 600000;
        textures[] = {};
    };
    class CUP_B_Hilux_DSHKM_BLU_G_F {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 600000;
        textures[] = {};
    };
    class CUP_I_Hilux_DSHKM_NAPA {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 600000;
        textures[] = {};
    };
    class CUP_I_SUV_Armored_ION {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 1000000;
        textures[] = {};
    };
    class CUP_I_BTR40_MG_TKG {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 1500000;
        textures[] = {};
    };
    class CUP_O_BTR40_MG_TKM {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 1500000;
        textures[] = {};
    };
    class CUP_O_BTR40_MG_TKA {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 1500000;
        textures[] = {};
    };
    class CUP_I_Hilux_armored_M2_TK {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2000000;
        textures[] = {};
    };
    class CUP_O_Hilux_armored_M2_TK_INS {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2000000;
        textures[] = {};
    };
    class CUP_O_Hilux_armored_M2_OPF_G_F {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2000000;
        textures[] = {};
    };
    class CUP_I_Hilux_armored_M2_IND_G_F {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2000000;
        textures[] = {};
    };
    class CUP_B_Hilux_armored_M2_BLU_G_F {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2000000;
        textures[] = {};
    };
    class CUP_B_T810_Armed_CZ_WDL {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 3000000;
        textures[] = {};
    };
    class CUP_B_T810_Armed_CZ_DES {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 3000000;
        textures[] = {};
    };
    class CUP_B_BRDM2_CDF {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 4500000;
        textures[] = {};
    };
    class CUP_O_BRDM2_CHDKZ {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 4500000;
        textures[] = {};
    };
    class CUP_I_BRDM2_NAPA {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 4500000;
        textures[] = {};
    };
    class CUP_O_BRDM2_SLA {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 4500000;
        textures[] = {};
    };
    class CUP_O_BRDM2_CSAT {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 4500000;
        textures[] = {};
    };
    class CUP_O_BRDM2_CSAT_T {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 4500000;
        textures[] = {};
    };
    class CUP_O_BRDM2_RUS {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 4500000;
        textures[] = {};
    };
    class CUP_O_BRDM2_TKA {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 4500000;
        textures[] = {};
    };
    class CUP_I_BRDM2_TK_Gue {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 4500000;
        textures[] = {};
    };
    class CUP_I_BRDM2_UN {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 4500000;
        textures[] = {};
    };
    class CUP_B_BRDM2_CZ {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 4500000;
        textures[] = {};
    };
    class CUP_B_BRDM2_CZ_Des {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 4500000;
        textures[] = {};
    };
    class CUP_B_Dingo_GL_CZ_Wdl {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 6000000;
        textures[] = {};
    };
    class CUP_B_Dingo_GL_CZ_Des {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 6000000;
        textures[] = {};
    };
    class CUP_B_Dingo_GL_GER_Wdl {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 6000000;
        textures[] = {};
    };
    class CUP_B_Dingo_GL_GER_Des {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 6000000;
        textures[] = {};
    };
    class CUP_B_BTR60_CDF {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 6000000;
        textures[] = {};
    };
    class CUP_O_BTR60_TK {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 6000000;
        textures[] = {};
    };
    class CUP_O_BTR60_SLA {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 6000000;
        textures[] = {};
    };
    class CUP_O_BTR60_CSAT {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 6000000;
        textures[] = {};
    };
    class CUP_O_BTR60_RU {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 6000000;
        textures[] = {};
    };
    class CUP_O_BTR60_Green_RU {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 6000000;
        textures[] = {};
    };
    class CUP_O_BTR60_CHDKZ {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 6000000;
        textures[] = {};
    };
    class CUP_O_GAZ_Vodnik_BPPU_RU {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 7000000;
        textures[] = {};
    };
    class CUP_B_BTR80_CDF {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 7500000;
        textures[] = {};
    };
    class CUP_O_BTR80_GREEN_RU {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 7500000;
        textures[] = {};
    };
    class CUP_O_BTR80_CAMO_RU {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 7500000;
        textures[] = {};
    };
    class CUP_O_BTR80_WINTER_RU {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 7500000;
        textures[] = {};
    };
    class CUP_O_BTR80_DESERT_RU {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 7500000;
        textures[] = {};
    };
    class CUP_O_BTR80_CHDKZ {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 7500000;
        textures[] = {};
    };
    class CUP_O_BTR80_CSAT {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 7500000;
        textures[] = {};
    };
    class CUP_O_BTR80_CSAT_T {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 7500000;
        textures[] = {};
    };
    class CUP_O_BMP_HQ_TKA {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 9000000;
        textures[] = {};
    };
    class CUP_B_BMP_HQ_CDF {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 9000000;
        textures[] = {};
    };
    class CUP_O_BMP_HQ_RU {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 9000000;
        textures[] = {};
    };
    class CUP_O_BMP_HQ_CHDKZ {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 9000000;
        textures[] = {};
    };
    class CUP_I_BMP_HQ_UN {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 9000000;
        textures[] = {};
    };
    class CUP_O_BMP_HQ_sla {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 9000000;
        textures[] = {};
    };
    class CUP_O_BMP_HQ_CSAT {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 9000000;
        textures[] = {};
    };
    class CUP_O_BMP_HQ_CSAT_T {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 9000000;
        textures[] = {};
    };
    class CUP_I_BMP_HQ_NAPA {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 9000000;
        textures[] = {};
    };
    class CUP_B_BMP_HQ_CZ {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 9000000;
        textures[] = {};
    };
    class CUP_B_BMP_HQ_CZ_Des {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 9000000;
        textures[] = {};
    };
    class CUP_O_MTLB_pk_TKA {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 16000000;
        textures[] = {};
    };
    class CUP_O_MTLB_pk_TK_MILITIA {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 16000000;
        textures[] = {};
    };
    class CUP_O_MTLB_pk_ChDKZ {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 16000000;
        textures[] = {};
    };
    class CUP_O_MTLB_pk_SLA {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 16000000;
        textures[] = {};
    };
    class CUP_O_MTLB_pk_Green_RU {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 16000000;
        textures[] = {};
    };
    class CUP_O_MTLB_pk_WDL_RU {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 16000000;
        textures[] = {};
    };
    class CUP_B_MTLB_pk_CDF {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 16000000;
        textures[] = {};
    };
    class CUP_B_MTLB_pk_Winter_CDF {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 16000000;
        textures[] = {};
    };
    class CUP_O_BMP2_ZU_TKA {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 20000000;
        textures[] = {};
    };
    class CUP_O_BMP2_ZU_CSAT {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 20000000;
        textures[] = {};
    };
    class CUP_O_BMP2_ZU_CSAT_T {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 20000000;
        textures[] = {};
    };
    class CUP_I_T34_NAPA {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 30000000;
        textures[] = {};
    };
    class CUP_O_T34_TKA {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 30000000;
        textures[] = {};
    };
    class CUP_I_T34_TK_GUE {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 30000000;
        textures[] = {};
    };
    class CUP_B_M60A3_USMC {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 40000000;
        textures[] = {};
    };
    class CUP_B_M60A3_TTS_USMC {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 40000000;
        textures[] = {};
    };
    class CUP_I_M60A3_RACS {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 40000000;
        textures[] = {};
    };
    class CUP_I_M60A3_TTS_RACS {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 40000000;
        textures[] = {};
    };
    class CUP_O_T55_TK {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 45000000;
        textures[] = {};
    };
    class CUP_I_T55_TK_GUE {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 45000000;
        textures[] = {};
    };
    class CUP_I_T55_NAPA {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 45000000;
        textures[] = {};
    };
    class CUP_O_T55_CHDKZ {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 45000000;
        textures[] = {};
    };
    class CUP_O_T55_SLA {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 45000000;
        textures[] = {};
    };
    class CUP_O_T55_CSAT {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 45000000;
        textures[] = {};
    };
    class CUP_O_T55_CSAT_T {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 45000000;
        textures[] = {};
    };
    class CUP_B_Challenger2_Woodland_BAF {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 60000000;
        textures[] = {};
    };
    class CUP_B_Challenger2_2CW_BAF {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 60000000;
        textures[] = {};
    };
    class CUP_B_Challenger2_Desert_BAF {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 60000000;
        textures[] = {};
    };
    class CUP_B_Challenger2_2CD_BAF {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 60000000;
        textures[] = {};
    };
    class CUP_B_Challenger2_Snow_BAF {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 60000000;
        textures[] = {};
    };
    class CUP_B_Challenger2_2CS_BAF {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 60000000;
        textures[] = {};
    };
    class CUP_B_Challenger2_Green_CTRG {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 60000000;
        textures[] = {};
    };
    class CUP_B_Challenger2_Sand_CTRG {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 60000000;
        textures[] = {};
    };
    class CUP_B_Challenger2_NATO {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 60000000;
        textures[] = {};
    };
    class CUP_B_T72_CDF {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 80000000;
        textures[] = {};
    };
    class CUP_I_T72_RACS {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 80000000;
        textures[] = {};
    };
    class CUP_I_T72_NAPA {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 80000000;
        textures[] = {};
    };
    class CUP_O_T72_SLA {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 80000000;
        textures[] = {};
    };
    class CUP_O_T72_CSAT {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 80000000;
        textures[] = {};
    };
    class CUP_O_T72_CSAT_T {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 80000000;
        textures[] = {};
    };
    class CUP_O_T72_TKA {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 80000000;
        textures[] = {};
    };
    class CUP_O_T72_RU {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 80000000;
        textures[] = {};
    };
    class CUP_O_T72_CHDKZ {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 80000000;
        textures[] = {};
    };
    class CUP_O_T90_RU {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 100000000;
        textures[] = {};
    };
    //End
    
    class CUP_O_PBX_SLA {
        vItemSpace = 30;
        conditions = "";
        price = 90000;
        textures[] = {};
    };
    
    class CUP_C_PBX_CIV {
        vItemSpace = 30;
        conditions = "";
        price = 90000;
        textures[] = {};
    };
    
    class CUP_B_Zodiac_USMC {
        vItemSpace = 30;
        conditions = "";
        price = 130000;
        textures[] = {};
    };
    
    class CUP_C_Zodiac_CIV {
        vItemSpace = 30;
        conditions = "";
        price = 130000;
        textures[] = {};
    };
    
    class I_C_Boat_Transport_02_F {
        vItemSpace = 35;
        conditions = "";
        price = 150000;
        textures[] = {};
    };
    
    class CUP_B_Seafox_USMC {
        vItemSpace = 30;
        conditions = "";
        price = 200000;
        textures[] = {};
    };
    
    class CUP_B_Seafox_USV_USMC {
        vItemSpace = 30;
        conditions = "";
        price = 200000;
        textures[] = {};
    };
    
    class CUP_C_Fishing_Boat_Chernarus {
        vItemSpace = 45;
        conditions = "";
        price = 450000;
        textures[] = {};
    };
    
    class CUP_B_MK10_GB {
        vItemSpace = 60;
        conditions = "";
        price = 600000;
        textures[] = {};
    };
    
    class B_SDV_01_F {
        vItemSpace = 80;
        conditions = "license_civ_boat || {license_cop_cg} || {(playerSide isEqualTo independent)}";
        price = 1000000;
        textures[] = {};
    };
    
    class O_SDV_01_F {
        vItemSpace = 80;
        conditions = "";
        price = 1000000;
        textures[] = {};
    };
        
    class I_SDV_01_F {
        vItemSpace = 80;
        conditions = "";
        price = 1000000;
        textures[] = {};
    };

    class I_C_Heli_Light_01_civil_F {
        vItemSpace = 30;
        conditions = "";
        price = 1200000;
        textures[] = {};
    };
    class CUP_B_MI6A_CDF {
        vItemSpace = 50;
        conditions = "";
        price = 1500000;
        textures[] = {};
    };
    class CUP_O_MI6A_CHDKZ {
        vItemSpace = 50;
        conditions = "";
        price = 1500000;
        textures[] = {};
    };
    class CUP_O_MI6A_TKA {
        vItemSpace = 50;
        conditions = "";
        price = 1500000;
        textures[] = {};
    };
    class CUP_O_MI6A_SLA {
        vItemSpace = 50;
        conditions = "";
        price = 1500000;
        textures[] = {};
    };
    class CUP_I_MI6A_UN {
        vItemSpace = 50;
        conditions = "";
        price = 1500000;
        textures[] = {};
    };
    class CUP_O_MI6A_RU {
        vItemSpace = 50;
        conditions = "";
        price = 1500000;
        textures[] = {};
    };
    class CUP_O_MI6A_CSAT_T {
        vItemSpace = 50;
        conditions = "";
        price = 1500000;
        textures[] = {};
    };
    class CUP_C_MI6A_RU {
        vItemSpace = 50;
        conditions = "";
        price = 1500000;
        textures[] = {};
    };
    class CUP_C_Mi17_Civilian_RU {
        vItemSpace = 50;
        conditions = "";
        price = 1700000;
        textures[] = {};
    };
    class CUP_B_SA330_Puma_HC2_BAF {
        vItemSpace = 60;
        conditions = "";
        price = 2300000;
        textures[] = {};
    };
    class CUP_I_SA330_Puma_HC2_RACS {
        vItemSpace = 60;
        conditions = "";
        price = 2300000;
        textures[] = {};
    };
    class CUP_I_Wildcat_Unarmed_Green_AAF {
        vItemSpace = 60;
        conditions = "";
        price = 2400000;
        textures[] = {};
    };
    class CUP_I_Wildcat_Unarmed_Digital_AAF  {
        vItemSpace = 60;
        conditions = "";
        price = 2400000;
        textures[] = {};
    };

    class CUP_I_Wildcat_Green_AAF {
        vItemSpace = 60;
        conditions = "";
        price = 24000000;
        textures[] = {};
    };

    class CUP_I_Wildcat_Digital_AAF {
        vItemSpace = 60;
        conditions = "";
        price = 24000000;
        textures[] = {};
    };

    class B_Heli_Transport_03_unarmed_F {
        vItemSpace = 100;
        conditions = "";
        price = 6000000;
        textures[] = {};
    };

    class CUP_C_AN2_AEROSCHROT_TK_CIV {
        vItemSpace = 10;
        conditions = "";
        price = 500000;
        textures[] = {};
    };

    class CUP_C_AN2_CIV {
        vItemSpace = 10;
        conditions = "";
        price = 500000;
        textures[] = {};
    };

    class CUP_C_AN2_AIRTAK_TK_CIV {
        vItemSpace = 10;
        conditions = "";
        price = 500000;
        textures[] = {};
    };

    class CUP_O_AN2_TK {
        vItemSpace = 10;
        conditions = "";
        price = 500000;
        textures[] = {};
    };

    class CUP_C_C47_CIV {
        vItemSpace = 10;
        conditions = "";
        price = 600000;
        textures[] = {};
    };

    class CUP_O_C47_SLA {
        vItemSpace = 10;
        conditions = "";
        price = 600000;
        textures[] = {};
    };

    class CUP_B_C47_USA {
        vItemSpace = 10;
        conditions = "";
        price = 600000;
        textures[] = {};
    };

    class CUP_C_Cessna_172_CIV {
        vItemSpace = 10;
        conditions = "";
        price = 750000;
        textures[] = {};
    };

    class CUP_C_Cessna_172_CIV_BLUE {
        vItemSpace = 10;
        conditions = "";
        price = 750000;
        textures[] = {};
    };

    class CUP_C_Cessna_172_CIV_GREEN {
        vItemSpace = 10;
        conditions = "";
        price = 750000;
        textures[] = {};
    };

    class C_Plane_Civil_01_racing_F {
        vItemSpace = 10;
        conditions = "";
        price = 800000;
        textures[] = {};
    };

    class I_C_Plane_Civil_01_F {
        vItemSpace = 10;
        conditions = "";
        price = 800000;
        textures[] = {};
    };

    class CUP_I_Plane_ION {
        vItemSpace = 10;
        conditions = "";
        price = 800000;
        textures[] = {};
    };

    class CUP_C_Plane_Orbit {
        vItemSpace = 10;
        conditions = "";
        price = 800000;
        textures[] = {};
    };

    class CUP_C_B737_CIV {
        vItemSpace = 10;
        conditions = "";
        price = 3000000;
        textures[] = {};
    };

    class CUP_B_P8Poseidon_USN {
        vItemSpace = 10;
        conditions = "";
        price = 3000000;
        textures[] = {};
    };

    class CUP_B_P8Poseidon_RAAF {
        vItemSpace = 10;
        conditions = "";
        price = 3000000;
        textures[] = {};
    };

    class CUP_C_A300_CIV {
        vItemSpace = 10;
        conditions = "";
        price = 4000000;
        textures[] = {};
    };

    class CUP_C_Volha_Gray_TKCIV {
        vItemSpace = 30;
        conditions = "";
        price = 30000;
        textures[] = {};
    };

    class CUP_C_Volha_Blue_TKCIV {
        vItemSpace = 30;
        conditions = "";
        price = 30000;
        textures[] = {};
    };

    class CUP_C_Volha_Limo_TKCIV {
        vItemSpace = 30;
        conditions = "";
        price = 30000;
        textures[] = {};
    };

    class CUP_O_Volha_SLA {
        vItemSpace = 30;
        conditions = "";
        price = 30000;
        textures[] = {};
    };

    class CUP_C_Volha_CR_CIV {
        vItemSpace = 30;
        conditions = "";
        price = 30000;
        textures[] = {};
    };

    class CUP_C_Skoda_CR_CIV {
        vItemSpace = 30;
        conditions = "";
        price = 50000;
        textures[] = {};
    };

    class CUP_C_Skoda_White_CIV {
        vItemSpace = 30;
        conditions = "";
        price = 50000;
        textures[] = {};
    };

    class CUP_C_Skoda_Red_CIV {
        vItemSpace = 30;
        conditions = "";
        price = 50000;
        textures[] = {};
    };

    class CUP_C_Skoda_Blue_CIV {
        vItemSpace = 30;
        conditions = "";
        price = 50000;
        textures[] = {};
    };

    class CUP_C_Skoda_Green_CIV {
        vItemSpace = 30;
        conditions = "";
        price = 50000;
        textures[] = {};
    };

    class CUP_C_Lada_CIV {
        vItemSpace = 30;
        conditions = "";
        price = 50000;
        textures[] = {};
    };

    class CUP_C_Lada_White_CIV {
        vItemSpace = 30;
        conditions = "";
        price = 50000;
        textures[] = {};
    };

    class CUP_C_Lada_Red_CIV {
        vItemSpace = 30;
        conditions = "";
        price = 50000;
        textures[] = {};
    };

    class CUP_C_Lada_TK_CIV {
        vItemSpace = 30;
        conditions = "";
        price = 50000;
        textures[] = {};
    };

    class CUP_C_Lada_GreenTK_CIV {
        vItemSpace = 30;
        conditions = "";
        price = 50000;
        textures[] = {};
    };

    class CUP_C_Lada_TK2_CIV {
        vItemSpace = 30;
        conditions = "";
        price = 50000;
        textures[] = {};
    };

    class CUP_LADA_LM_CIV {
        vItemSpace = 30;
        conditions = "";
        price = 50000;
        textures[] = {};
    };

    class CUP_C_Octavia_CIV {
        vItemSpace = 35;
        conditions = "";
        price = 80000;
        textures[] = {};
    };

    class CUP_C_Golf4_Sport_CR_Civ {
        vItemSpace = 40;
        conditions = "";
        price = 190000;
        textures[] = {};
    };

    class CUP_C_Golf4_Sport_random_Civ {
        vItemSpace = 40;
        conditions = "";
        price = 190000;
        textures[] = {};
    };

    class CUP_C_Golf4_whiteblood_Civ {
        vItemSpace = 40;
        conditions = "";
        price = 150000;
        textures[] = {};
    };

    class CUP_C_Golf4_camo_Civ {
        vItemSpace = 40;
        conditions = "";
        price = 150000;
        textures[] = {};
    };

    class CUP_C_Golf4_camodigital_Civ {
        vItemSpace = 40;
        conditions = "";
        price = 150000;
        textures[] = {};
    };

    class CUP_C_Golf4_camodark_Civ {
        vItemSpace = 40;
        conditions = "";
        price = 150000;
        textures[] = {};
    };

    class CUP_C_Golf4_reptile_Civ {
        vItemSpace = 40;
        conditions = "";
        price = 150000;
        textures[] = {};
    };

    class CUP_C_Golf4_kitty_Civ {
        vItemSpace = 40;
        conditions = "";
        price = 150000;
        textures[] = {};
    };

    class CUP_C_Golf4_crowe_Civ {
        vItemSpace = 40;
        conditions = "";
        price = 150000;
        textures[] = {};
    };

    class CUP_C_Datsun {
        vItemSpace = 45;
        conditions = "";
        price = 160000;
        textures[] = {};
    };

    class CUP_C_SUV_TK {
        vItemSpace = 50;
        conditions = "";
        price = 250000;
        textures[] = {};
    };

    class CUP_C_SUV_CIV {
        vItemSpace = 50;
        conditions = "";
        price = 250000;
        textures[] = {};
    };

    class CUP_O_SUV_TKA {
        vItemSpace = 50;
        conditions = "";
        price = 250000;
        textures[] = {};
    };

    class CUP_I_SUV_UNO {
        vItemSpace = 50;
        conditions = "";
        price = 250000;
        textures[] = {};
    };

    class CUP_I_SUV_ION {
        vItemSpace = 50;
        conditions = "";
        price = 250000;
        textures[] = {};
    };

    class CUP_C_LR_Transport_CTK {
        vItemSpace = 55;
        conditions = "";
        price = 200000;
        textures[] = {};
    };

    class CUP_B_LR_Transport_CZ_W {
        vItemSpace = 55;
        conditions = "";
        price = 200000;
        textures[] = {};
    };

    class CUP_B_LR_Transport_CZ_D {
        vItemSpace = 55;
        conditions = "";
        price = 200000;
        textures[] = {};
    };

    class CUP_I_LR_Transport_AAF {
        vItemSpace = 55;
        conditions = "";
        price = 200000;
        textures[] = {};
    };

    class CUP_I_LR_Transport_RACS {
        vItemSpace = 55;
        conditions = "";
        price = 200000;
        textures[] = {};
    };

    class CUP_O_LR_Transport_TKA {
        vItemSpace = 55;
        conditions = "";
        price = 200000;
        textures[] = {};
    };

    class CUP_O_LR_Transport_TKM {
        vItemSpace = 55;
        conditions = "";
        price = 200000;
        textures[] = {};
    };

    class CUP_I_Hilux_unarmed_TK {
        vItemSpace = 70;
        conditions = "";
        price = 250000;
        textures[] = {};
    };

    class CUP_O_Hilux_unarmed_TK_INS {
        vItemSpace = 70;
        conditions = "";
        price = 250000;
        textures[] = {};
    };

    class CUP_O_Hilux_unarmed_CHDKZ {
        vItemSpace = 70;
        conditions = "";
        price = 250000;
        textures[] = {};
    };

    class CUP_O_Hilux_unarmed_OPF_G_F {
        vItemSpace = 70;
        conditions = "";
        price = 250000;
        textures[] = {};
    };

    class CUP_I_Hilux_unarmed_IND_G_F {
        vItemSpace = 70;
        conditions = "";
        price = 250000;
        textures[] = {};
    };

    class CUP_B_Hilux_unarmed_BLU_G_F {
        vItemSpace = 70;
        conditions = "";
        price = 250000;
        textures[] = {};
    };

    class CUP_I_Hilux_unarmed_NAPA {
        vItemSpace = 70;
        conditions = "";
        price = 250000;
        textures[] = {};
    };

    class CUP_O_Hilux_unarmed_CR_CIV {
        vItemSpace = 70;
        conditions = "";
        price = 250000;
        textures[] = {};
    };

    class CUP_O_Hilux_unarmed_CR_CIV_Red {
        vItemSpace = 70;
        conditions = "";
        price = 250000;
        textures[] = {};
    };

    class CUP_O_Hilux_unarmed_CR_CIV_Tan {
        vItemSpace = 70;
        conditions = "";
        price = 250000;
        textures[] = {};
    };

    class CUP_O_Hilux_unarmed_CR_CIV_White {
        vItemSpace = 70;
        conditions = "";
        price = 250000;
        textures[] = {};
    };

    class CUP_O_Hilux_unarmed_TK_CIV {
        vItemSpace = 70;
        conditions = "";
        price = 250000;
        textures[] = {};
    };

    class CUP_O_Hilux_unarmed_TK_CIV_Red {
        vItemSpace = 70;
        conditions = "";
        price = 250000;
        textures[] = {};
    };

    class CUP_O_Hilux_unarmed_TK_CIV_Tan {
        vItemSpace = 70;
        conditions = "";
        price = 250000;
        textures[] = {};
    };

    class  {
        vItemSpace = 70;
        conditions = "";
        price = 250000;
        textures[] = {};
    };

    class CUP_O_Hilux_unarmed_TK_CIV_White {
        vItemSpace = 40;
        conditions = "";
        price = 150000;
        textures[] = {};
    };

    class CUP_C_S1203_CIV {
        vItemSpace = 90;
        conditions = "";
        price = 400000;
        textures[] = {};
    };

    class CUP_C_S1203_Militia_CIV {
        vItemSpace = 90;
        conditions = "";
        price = 400000;
        textures[] = {};
    };

    class CUP_C_S1203_CIV_CR {
        vItemSpace = 90;
        conditions = "";
        price = 400000;
        textures[] = {};
    };

    class I_E_Offroad_01_covered_F {
        vItemSpace = 100;
        conditions = "";
        price = 500000;
        textures[] = {};
    };

    class C_Offroad_01_covered_F {
        vItemSpace = 100;
        conditions = "";
        price = 500000;
        textures[] = {};
    };

    class C_Offroad_01_comms_F {
        vItemSpace = 100;
        conditions = "";
        price = 500000;
        textures[] = {};
    };

    class C_Van_02_vehicle_F {
        vItemSpace = 120;
        conditions = "";
        price = 650000;
        textures[] = {};
    };

    class I_G_Van_02_vehicle_F {
        vItemSpace = 120;
        conditions = "";
        price = 650000;
        textures[] = {};
    };

    class B_G_Van_02_vehicle_F {
        vItemSpace = 120;
        conditions = "";
        price = 650000;
        textures[] = {};
    };

    class O_G_Van_02_vehicle_F {
        vItemSpace = 120;
        conditions = "";
        price = 650000;
        textures[] = {};
    };

    class I_C_Van_02_vehicle_F {
        vItemSpace = 120;
        conditions = "";
        price = 650000;
        textures[] = {};
    };

    class I_E_Van_02_vehicle_F {
        vItemSpace = 120;
        conditions = "";
        price = 650000;
        textures[] = {};
    };

    class I_Truck_02_medical_F {
        vItemSpace = 150;
        conditions = "";
        price = 25000;
        textures[] = {};
    };

    class O_Truck_03_medical_F {
        vItemSpace = 200;
        conditions = "";
        price = 45000;
        textures[] = {};
    };

    class B_Truck_01_medical_F {
        vItemSpace = 250;
        conditions = "";
        price = 60000;
        textures[] = {};
    };

    class C_Rubberboat {
        vItemSpace = 45;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 5000;
        textures[] = { };
    };

    class B_Heli_Transport_01_F {
        vItemSpace = 200;
        conditions = "license_cop_cAir || {!(playerSide isEqualTo west)}";
        price = 200000;
        textures[] = {};
    };

    class B_MRAP_01_hmg_F {
        vItemSpace = 100;
        conditions = "";
        price = 750000;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
        };
    };

    class B_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        conditions = "license_cop_cg || {!(playerSide isEqualTo west)}";
        price = 75000;
        textures[] = { };
    };

    class B_Boat_Transport_01_F {
        vItemSpace = 45;
        conditions = "license_cop_cg || {!(playerSide isEqualTo west)}";
        price = 3000;
        textures[] = { };
    };

    class O_Truck_03_transport_F {
        vItemSpace = 285;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 2000000;
        textures[] = { };
    };

    class O_Truck_03_device_F {
        vItemSpace = 350;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 4500000;
        textures[] = { };
    };

    class Land_CargoBox_V1_F {
        vItemSpace = 5000;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class Box_IND_Grenades_F {
        vItemSpace = 350;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class B_supplyCrate_F {
        vItemSpace = 700;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class B_G_Offroad_01_F {
        vItemSpace = 65;
        conditions = "";
        price = 12500;
        textures[] = { };
    };

    class C_Boat_Civil_01_F {
        vItemSpace = 85;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 10000;
        textures[] = { };
    };

    class C_Boat_Civil_01_police_F {
        vItemSpace = 85;
        conditions = "license_cop_cg || {!(playerSide isEqualTo west)}";
        price = 20000;
        textures[] = { };
    };

    class B_Truck_01_box_F {
        vItemSpace = 450;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 3500000;
        textures[] = { };
    };

    class B_Truck_01_transport_F {
        vItemSpace = 325;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 2750000;
        textures[] = { };
    };

    class O_MRAP_02_F {
        vItemSpace = 60;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 150000;
        textures[] = { };
    };

    class C_Offroad_01_F {
        vItemSpace = 65;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 12500;
        textures[] = {
            { "Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            }, "" },
            { "Yellow", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            }, "" },
            { "White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            }, "" },
            { "Blue", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            }, "" },
            { "Dark Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            }, "" },
            { "Blue / White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            }, "" },
            { "Taxi", "civ", {
                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            }, "" },
            { "Police", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            }, "" }
        };
    };

    class C_Kart_01_Blu_F {
        vItemSpace = 20;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 15000;
        textures[] = {};
    };
/*
To edit another information in this classes you can use this exemple.
class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{
    vItemSpace = 40;
    price = ;
};

will modify the virtual space and the price of the vehicle, but other information such as license and textures will pick up the vehicle declare at : Vehicle {};
*/
    class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{}; // Get all information of C_Kart_01_Blu_F
    class C_Kart_01_Red_F : C_Kart_01_Blu_F{};
    class C_Kart_01_Vrana_F : C_Kart_01_Blu_F{};

    class C_Hatchback_01_sport_F {
        vItemSpace = 45;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 40000;
        textures[] = {
            { "Red", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            }, "" },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            }, "" },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            }, "" },
            { "Black / White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            }, "" },
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            }, "" },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
            }, "" },
            { "Police", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            }, "" }
        };
    };

    class B_Quadbike_01_F {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2500;
        textures[] = {
            { "Brown", "cop", {
                "\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa"
            }, "" },
            { "Digi Desert", "reb", {
                "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
            }, "" },
            { "Black", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
            }, "" },
            { "Blue", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
            }, "" },
            { "Red", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
            }, "" },
            { "White", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
            }, "" },
            { "Digi Green", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
            }, "" },
            { "Hunter Camo", "civ", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            }, "" },
            { "Rebel Camo", "reb", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            }, "" }
        };
    };

    class I_Truck_02_covered_F {
        vItemSpace = 250;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 1000000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            }, "" },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
        };
    };

    class I_Truck_02_transport_F {
        vItemSpace = 200;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 750000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            }, "" },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
        };
    };

    class O_Truck_03_covered_F {
        vItemSpace = 300;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 2500000;
        textures[] = {};
    };

    class C_Hatchback_01_F {
        vItemSpace = 40;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 9500;
        textures[] = {
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            }, "" },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            }, "" },
            { "Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            }, "" },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            }, "" },
            { "Yellow", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            }, "" },
            { "White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            }, "" },
            { "Grey", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            }, "" },
            { "Black", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            }, "" }
        };
    };

    class C_SUV_01_F {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 30000;
        textures[] = {
            { "Dark Red", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            }, "" },
            { "Silver", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            }, "" },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            }, "" },
            { "Police", "cop", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_02_co.paa"
            }, "" }
        };
    };

    class C_Van_01_transport_F {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 45000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            }, "" },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            }, "" }
        };
    };

    class C_Van_01_box_F {
        vItemSpace = 150;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 600000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            }, "" },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            }, "" }
        };
    };

    class B_MRAP_01_F {
        vItemSpace = 65;
        conditions = "";
        price = 30000;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
        };
    };

     class B_Heli_Light_01_stripped_F {
        vItemSpace = 90;
        conditions = "";
        price = 275000;
        textures[] = {
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            }, "" }
        };
    };

    class B_Heli_Light_01_F {
        vItemSpace = 30;
        conditions = "license_civ_pilot || {license_cop_cAir} || {license_med_mAir}";
        price = 1200000;
        textures[] = {
            { "Police", "cop", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"
            }, "" },
            { "Sheriff", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"
            }, "" },
            { "Civ Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            }, "" },
            { "Civ Red", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            }, "" },
            { "Blueline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            }, "" },
            { "Elliptical", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            }, "" },
            { "Furious", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            }, "" },
            { "Jeans Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            }, "" },
            { "Speedy Redline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            }, "" },
            { "Sunset", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            }, "" },
            { "Vrana", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            }, "" },
            { "Waves Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            }, "" },
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            }, "" },
            { "Digi Green", "reb", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            }, "" },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            }, "" }
        };
    };

    class C_Heli_Light_01_civil_F : B_Heli_Light_01_F {
        vItemSpace = 35;
        price = 800000;
    };

    class O_Heli_Light_02_unarmed_F {
        vItemSpace = 30;
        conditions = "license_civ_pilot || {license_med_mAir} || {(playerSide isEqualTo west)}";
        price = 750000;
        textures[] = {
            { "Black", "cop", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            }, "" },
            { "White / Blue", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
            }, "" },
            { "Digi Green", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            }, "" },
            { "Desert Digi", "reb", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa"
            }, "" },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            }, "" }
        };
    };

    class C_Van_01_fuel_F {
        vItemSpace = 20;
        vFuelSpace = 19500;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 120000;
        textures[] = {
            { "White", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_co.paa"
            }, "" },
            { "Red", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_red_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_red_co.paa"
            }, "" }
        };
    };

    class I_Truck_02_fuel_F {
        vItemSpace = 40;
        vFuelSpace = 42000;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 200000;
        textures[] = {
            { "White", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_fuel_co.paa"
            }, "" }
        };
    };

    class B_Truck_01_fuel_F {
        vItemSpace = 50;
        vFuelSpace = 50000;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 250000;
        textures[] = {};
    };
};
