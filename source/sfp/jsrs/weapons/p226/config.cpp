class CfgPatches {
    class sfp_jsrs_weapons_p226 {
        name = "sfp_jsrs_weapons_p226";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"sfp_p226", "JSRS_SOUNDMOD_Weapons"};
        addonRootClass = "sfp_p226";
        author = "Swedish Forces Pack";
        url = "https://www.anrop.se";
    };
};

class Mode_SemiAuto;

class CfgWeapons 
{
    class Pistol_Base_F;
    
    class sfp_p226: Pistol_Base_F
    {
        class Single: Mode_SemiAuto
        {
            class Single: Mode_SemiAuto
            {
                class BaseSoundModeType;
                class StandardSound: BaseSoundModeType
                {
                    soundSetShot[] = {"jsrs_P226_shot_soundset","jsrs_P226_shell_soundset","jsrs_9mm_reflector_1"};
                };
                class SilencedSound: BaseSoundModeType
                {
                    soundSetShot[] = {"jsrs_P226_shot_silenced_soundset","jsrs_P226_shell_soundset","jsrs_frame_caliber_9mm_silenced"};
                };
            };
        };
    };
};
