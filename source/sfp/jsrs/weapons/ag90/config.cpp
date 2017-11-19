class CfgPatches {
    class sfp_jsrs_weapons_ag90 {
        name = "sfp_jsrs_weapons_ag90";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"sfp_ag90", "JSRS_SOUNDMOD_Weapons"};
        addonRootClass = "sfp_ag90";
        author = "Swedish Forces Pack";
        url = "https://www.anrop.se";
    };
};

class Mode_SemiAuto;
class Mode_FullAuto;

class CfgWeapons 
{
    class srifle_GM6_F;
    
    class sfp_ag90_base : srifle_GM6_F
    {
        class Single: Mode_SemiAuto
        {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_m107_shot_soundset","jsrs_m107_shell_soundset","jsrs_12x7mm_reflector_3"};
            };
            class SilencedSound
            {
                soundSetShot[] = {"jsrs_m107_shot_silenced_soundset","jsrs_m107_shell_soundset","jsrs_9x3mm_SD_reflector_1"};
            };
        };
    };
};
