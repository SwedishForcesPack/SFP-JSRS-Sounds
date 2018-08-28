class CfgPatches {
    class sfp_jsrs_weapons_psg90 {
        name = "sfp_jsrs_weapons_psg90";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"sfp_psg90", "JSRS_SOUNDMOD_Weapons"};
        addonRootClass = "sfp_psg90";
        author = "Swedish Forces Pack";
        url = "https://www.anrop.se";
    };
};

class Mode_SemiAuto;
class Mode_FullAuto;

class CfgWeapons 
{
    class Rifle_Base_F;
    
    class sfp_psg90_base : Rifle_Base_F
    {
        class Single: Mode_SemiAuto
        {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_awm_shot_soundset","jsrs_awm_shell_soundset","jsrs_12x7mm_reflector_1"};
            };
            class SilencedSound
            {
                soundSetShot[] = {"jsrs_awm_shot_silenced_soundset","jsrs_awm_shell_soundset","jsrs_9x3mm_SD_reflector_1"};
            };
        };
    };
};
