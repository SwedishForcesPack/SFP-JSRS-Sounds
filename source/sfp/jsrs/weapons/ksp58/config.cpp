class CfgPatches {
    class sfp_jsrs_weapons_ksp58 {
        name = "sfp_jsrs_weapons_ksp58";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"sfp_ksp58", "JSRS_SOUNDMOD_Weapons"};
        addonRootClass = "sfp_ksp58";
        author = "Swedish Forces Pack";
        url = "https://www.anrop.se";
    };
};

class Mode_FullAuto;

class CfgWeapons 
{
    class Rifle_Long_Base_F;
    
    class sfp_ksp58: Rifle_Long_Base_F
    {
        class manual: Mode_FullAuto
        {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_m240_shot_soundset","jsrs_mg_chain_clipper_soundset","jsrs_9x3mm_reflector_1"};
            };
            class SilencedSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_m240_shot_soundset","jsrs_mg_chain_clipper_soundset","jsrs_6x5mm_SD_reflector_1"};
            };
        };
    };
};
