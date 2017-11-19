class CfgPatches {
    class sfp_jsrs_weapons_g36c {
        name = "sfp_jsrs_weapons_g36c";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"sfp_g36c", "JSRS_SOUNDMOD_Weapons"};
        addonRootClass = "sfp_g36c";
        author = "Swedish Forces Pack";
        url = "https://www.anrop.se";
    };
};

class Mode_SemiAuto;
class Mode_FullAuto;

class CfgWeapons 
{
    class Rifle_Base_F;
    
    class sfp_g36c_base: Rifle_Base_F 
    {
        class Single: Mode_SemiAuto
        {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_5x56mm_reflector_2"};
            };
            class SilencedSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_g36_shot_silenced_soundset","jsrs_g36_shell_soundset","jsrs_5x56mm_SD_reflector_2"};
            };
        };
        class FullAuto: Mode_FullAuto
        {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_5x56mm_reflector_2"};
            };
            class SilencedSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_g36_shot_silenced_soundset","jsrs_g36_shell_soundset","jsrs_5x56mm_SD_reflector_2"};
            };
        };
    };
};
