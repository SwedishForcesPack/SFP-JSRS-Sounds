class CfgPatches {
    class sfp_jsrs_weapons_mp5 {
        name = "sfp_jsrs_weapons_mp5";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"sfp_mp5", "JSRS_SOUNDMOD_Weapons"};
        addonRootClass = "sfp_mp5";
        author = "Swedish Forces Pack";
        url = "https://www.anrop.se";
    };
};

class Mode_SemiAuto;
class Mode_FullAuto;

class CfgWeapons 
{
    class Rifle_Base_F;
    
    class sfp_mp5_base : Rifle_Base_F
    {
        class Single: Mode_SemiAuto
        {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_protc_shot_soundset","jsrs_protc_shell_soundset","jsrs_9mm_reflector_3"};
            };
            class SilencedSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_protc_shot_silenced_soundset","jsrs_protc_shell_soundset","jsrs_9mm_SD_reflector_3"};
            };
        };
        class FullAuto: Mode_FullAuto
        {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_protc_shot_soundset","jsrs_protc_shell_soundset","jsrs_9mm_reflector_3"};
            };
            class SilencedSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_protc_shot_silenced_soundset","jsrs_protc_shell_soundset","jsrs_9mm_SD_reflector_3"};
            };
        };
    };
};
