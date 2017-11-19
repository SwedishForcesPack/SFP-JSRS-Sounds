class CfgPatches {
    class sfp_jsrs_weapons_p88 {
        name = "sfp_jsrs_weapons_p88";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"sfp_pistols", "JSRS_SOUNDMOD_Weapons"};
        addonRootClass = "sfp_pistols";
        author = "Swedish Forces Pack";
        url = "https://www.anrop.se";
    };
};

class Mode_SemiAuto;

class CfgWeapons 
{
    class Pistol_Base_F;
    
    class sfp_p88: Pistol_Base_F
    {
        class Single: Mode_SemiAuto
        {
            class Single: Mode_SemiAuto
            {
                class BaseSoundModeType;
                class StandardSound: BaseSoundModeType
                {
                    soundSetShot[] = {"jsrs_glock_shot_soundset","jsrs_glock_shell_soundset","jsrs_9mm_reflector_4"};
                };
                class SilencedSound: BaseSoundModeType
                {
                    soundSetShot[] = {"jsrs_glock_shot_silenced_soundset","jsrs_glock_shell_soundset","jsrs_9mm_SD_reflector_1"};
                };
            };
        };
    };
};
