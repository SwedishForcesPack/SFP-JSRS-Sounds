class CfgPatches {
    class sfp_jsrs_weapons_ksp90 {
        name = "sfp_jsrs_weapons_ksp90";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"sfp_ksp90w", "JSRS_SOUNDMOD_Weapons"};
        addonRootClass = "sfp_ksp90w";
        author = "Swedish Forces Pack";
        url = "https://www.anrop.se";
    };
};

class Mode_FullAuto;

class CfgWeapons 
{
    class Rifle_Long_Base_F;
    
    class sfp_ksp90b: Rifle_Long_Base_F
    {
        class manual: Mode_FullAuto
        {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_m249_shot_soundset","jsrs_m249_shell_soundset","jsrs_5x56mm_reflector_3"};
            };
            class SilencedSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_m249_shot_silenced_soundset","jsrs_m249_shell_soundset","jsrs_6x5mm_SD_reflector_1"};
            };
        };
    };
};
