class CfgPatches {
    class sfp_jsrs_weapons_ak4 {
        name = "sfp_jsrs_weapons_ak4";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"sfp_ak4", "JSRS_SOUNDMOD_Weapons"};
        addonRootClass = "sfp_ak4";
        author = "Swedish Forces Pack";
        url = "https://www.anrop.se";
    };
};

class Mode_SemiAuto;
class Mode_FullAuto;

class CfgWeapons 
{
    class Rifle_Base_F;
    
    class sfp_ak4_base : Rifle_Base_F 
    {
        class Single: Mode_SemiAuto
        {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_G3_shot_soundset","jsrs_G3_shell_soundset","jsrs_7x62mm_reflector_1"};
            };
            class SilencedSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_G3_shot_silenced_soundset","jsrs_G3_shell_soundset","jsrs_7x62mm_SD_reflector_1"};
            };
        };
        class FullAuto: Mode_FullAuto
        {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_G3_shot_soundset","jsrs_G3_shell_soundset","jsrs_7x62mm_reflector_1"};
            };
            class SilencedSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_G3_shot_silenced_soundset","jsrs_G3_shell_soundset","jsrs_7x62mm_SD_reflector_1"};
            };
        };
    };
};
