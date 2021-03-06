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
};
