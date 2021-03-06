class USMC_SN {
    class Rifleman {
        headGear = "MNP_Helmet_USMC_arctic";
        goggles = "G_Balaclava_blk";
        uniform = "MNP_CombatUniform_USMC_arctic";
        vest = "V_PlateCarrier1_blk";
        backpack = "MNP_B_WB_KB";
    };

    class Leader : Rifleman {
        uniform = "MNP_CombatUniform_USMC_arctic_B";
        vest = "V_PlateCarrier1_blk";
        goggles = "G_Bandanna_blk";
    };

    class Officer : Leader {
    goggles = "";
    };

    class Crew : Rifleman {
        headGear = "H_HelmetCrew_I";
        uniform = "MNP_CombatUniform_USMC_arctic_B";
        vest = "V_BandollierB_blk";
        backpack = "MNP_B_WB_AP";
    };

    class CO : Officer {
    };

    class XO : CO {
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        backpack = "MNP_B_RUW_CA";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        uniform = "MNP_CombatUniform_USMC_arctic_B";
    };

    class AAR : Rifleman {
        backpack = "MNP_B_RUW_CA";
    };

    class RAT : Rifleman {
    };

    class MMGG : AR {
        backpack = "MNP_B_RUW_CA";
    };

    class MMGAG : AAR {
    };

    class HMGG : AR {
    };

    class HMGAG : AAR {
    };

    class HMGAC : AAR {
    };

    class MATG : RAT {
        backpack = "MNP_B_RUW_CA";
    };

    class MATAG : AAR {
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
        backpack = "MNP_B_RUW_CA";
        uniform = "MNP_CombatUniform_USMC_arctic_B";
    };

    class HATAG : AAR {
    };

    class HATAC : HATAG {
    };

    class MTRG : AR {
    };

    class MRTAG : AAR {
    };

    class MTRAC : AAR {
    };

    class ENG : Rifleman {
        uniform = "MNP_CombatUniform_USMC_arctic_B";
        vest = "V_PlateCarrier1_blk";
        backpack = "MNP_B_RUW_CA";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "H_Watchcap_blk";
        goggles = "G_Bandanna_blk";
        uniform = "MNP_CombatUniform_USMC_arctic_B";
        vest = "V_BandollierB_blk";
        backpack = "MNP_B_WB_AP";
    };

    class SP : SN {
    };

    class VC : Crew {
    };

    class VG : Crew {
    };

    class VD : Crew {
    };

    class P : Crew {
        headGear = "H_PilotHelmetHeli_O";
        uniform = "U_B_HeliPilotCoveralls";
        vest = "V_TacVest_oli";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };
};