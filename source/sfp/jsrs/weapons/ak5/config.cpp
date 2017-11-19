class CfgPatches {
    class sfp_jsrs_weapons_ak5 {
        name = "sfp_jsrs_weapons_ak5";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"sfp_ak5", "JSRS_SOUNDMOD_Weapons"};
        addonRootClass = "sfp_ak5";
        author = "Swedish Forces Pack";
        url = "https://www.anrop.se";
    };
};

class Mode_SemiAuto;
class Mode_FullAuto;

class CfgWeapons 
{
    class Rifle_Base_F;
    
    class sfp_ak5_base : Rifle_Base_F 
    {
        class Single: Mode_SemiAuto
        {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_m4_shot_soundset","jsrs_m4_shell_soundset","jsrs_5x56mm_reflector_1"};
            };
            class SilencedSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_m4_shot_silenced_soundset","jsrs_m4_shell_soundset","jsrs_5x56mm_SD_reflector_1"};
            };
        };
        class FullAuto: Mode_FullAuto
        {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_m4_shot_soundset","jsrs_m4_shell_soundset","jsrs_5x56mm_reflector_1"};
            };
            class SilencedSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_m4_shot_silenced_soundset","jsrs_m4_shell_soundset","jsrs_5x56mm_SD_reflector_1"};
            };
        };
    };
};
