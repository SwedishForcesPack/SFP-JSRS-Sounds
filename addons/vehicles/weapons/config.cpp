class CfgPatches {
    class sfp_jsrs_vehicles_weapons {
        name = "sfp_jsrs_vehicles_weapons";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"sfp_weapons", "jsrs_soundmod_complete_edition"};
        addonRootClass = "sfp_weapons";
        author = "Swedish Forces Pack";
        url = "https://www.anrop.se";
    };
};

class Mode_SemiAuto;

class CfgWeapons 
{
    class LMG_coax;
    class sfp_ksp39_machinegun : LMG_coax
    {
        class BaseSoundModeType 
        {
            soundSetShot[] = {"jsrs_m240_shot_soundset", "jsrs_mg_chain_clipper_soundset"};
        };
        class StandardSound: BaseSoundModeType 
        {
            soundSetShot[] = {"jsrs_m240_shot_soundset", "jsrs_mg_chain_clipper_soundset"};
        };
        
    };
    class sfp_ksp58c : sfp_ksp39_machinegun
    {
        class BaseSoundModeType 
        {
            soundSetShot[] = {"jsrs_m240_shot_soundset", "jsrs_mg_chain_clipper_soundset"};
        };
     
        class StandardSound: BaseSoundModeType 
        {
            soundSetShot[] = {"jsrs_m240_shot_soundset", "jsrs_mg_chain_clipper_soundset"};
        };
    };
    class sfp_ksp58c_2 : sfp_ksp39_machinegun
    {
        class BaseSoundModeType 
        {
            soundSetShot[] = {"jsrs_m240_shot_soundset", "jsrs_mg_chain_clipper_soundset"};
        };
     
        class StandardSound: BaseSoundModeType 
        {
            soundSetShot[] = {"jsrs_m240_shot_soundset", "jsrs_mg_chain_clipper_soundset"};
        };
    };
    class sfp_ksp58c_3 : sfp_ksp39_machinegun
    {
        class BaseSoundModeType 
        {
            soundSetShot[] = {"jsrs_m240_shot_soundset", "jsrs_mg_chain_clipper_soundset"};
        };
     
        class StandardSound: BaseSoundModeType 
        {
            soundSetShot[] = {"jsrs_m240_shot_soundset", "jsrs_mg_chain_clipper_soundset"};
        };
    };

    class CannonCore;
    class cannon_120mm;
    class sfp_cannon_base : cannon_120mm
    {
        class player;
    };
    class sfp_120mm_cannon : sfp_cannon_base
    {
        class player: player
        {
            class StandardSound
            {
                soundSetShot[] = {"jsrs_cannon120_shot_soundset"};
            };
        };
    };

    class sfp_akan_base;
    class sfp_bofors_l70 : sfp_akan_base
    {
        class AP : CannonCore
        {
            class Single : Mode_SemiAuto
            {
                class BaseSoundModeType;
                class StandardSound : BaseSoundModeType 
                {
                    soundSetShot[] = {"jsrs_autocannon_3_shot_soundset", "jsrs_autocannon_casing"};
                };
            };
        };
        class HE : CannonCore
        {
            class Single : Mode_SemiAuto
            {
                class BaseSoundModeType;
                class StandardSound : BaseSoundModeType 
                {
                    soundSetShot[] = {"jsrs_autocannon_3_shot_soundset", "jsrs_autocannon_casing"};
                };
            };
        };
    };
    class sfp_bofors_l70_AA : sfp_bofors_l70
    {
        class Auto : Mode_SemiAuto
        {
            class BaseSoundModeType;
            class StandardSound : BaseSoundModeType 
            {
                soundSetShot[] = {"jsrs_autocannon_3_shot_soundset", "jsrs_autocannon_casing"};
            };
        };
    };
};
