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
        bullet1[] = {"\jsrs_soundmod\jsrs_soundmod_snd_weapons\sounds\shells\medium\metal_1.ogg", 2.0099, 1, 10};
        bullet2[] = {"\jsrs_soundmod\jsrs_soundmod_snd_weapons\sounds\shells\medium\metal_2.ogg", 2.0099, 1, 10};
        bullet3[] = {"\jsrs_soundmod\jsrs_soundmod_snd_weapons\sounds\shells\medium\metal_3.ogg", 2.0099, 1, 10};
        bullet4[] = {"\jsrs_soundmod\jsrs_soundmod_snd_weapons\sounds\shells\medium\metal_4.ogg", 2.0099, 1, 10};
        bullet5[] = {"\jsrs_soundmod\jsrs_soundmod_snd_weapons\sounds\shells\medium\dirt_1.ogg", 2.0099, 1, 10};
        bullet6[] = {"\jsrs_soundmod\jsrs_soundmod_snd_weapons\sounds\shells\medium\dirt_2.ogg", 2.0099, 1, 10};
        bullet7[] = {"\jsrs_soundmod\jsrs_soundmod_snd_weapons\sounds\shells\medium\dirt_3.ogg", 2.0099, 1, 10};
        bullet8[] = {"\jsrs_soundmod\jsrs_soundmod_snd_weapons\sounds\shells\medium\dirt_4.ogg", 2.0099, 1, 10};
        bullet9[] = {"\jsrs_soundmod\jsrs_soundmod_snd_weapons\sounds\shells\medium\grass_1.ogg", 2.0099, 1, 10};
        bullet10[] = {"\jsrs_soundmod\jsrs_soundmod_snd_weapons\sounds\shells\medium\grass_2.ogg", 2.0099, 1, 10};
        bullet11[] = {"\jsrs_soundmod\jsrs_soundmod_snd_weapons\sounds\shells\medium\grass_3.ogg", 2.0099, 1, 10};
        bullet12[] = {"\jsrs_soundmod\jsrs_soundmod_snd_weapons\sounds\shells\medium\grass_4.ogg", 2.0099, 1, 10};
        soundbullet[] = {"bullet1", 0.08, "bullet2", 0.084, "bullet3", 0.084, "bullet4", 0.084, "bullet5", 0.093, "bullet6", 0.093, "bullet7", 0.074, "bullet8", 0.074, "bullet9", 0.084, "bullet10", 0.085, "bullet11", 0.083, "bullet12", 0.083};
        
        class Single: Mode_SemiAuto
        {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_rifle_shake_soundset", "jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_5x56mm_reflector_2", "jsrs_556mm_echo_soundset"};
            };
            class SilencedSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_rifle_shake_soundset", "jsrs_g36_shot_silenced_soundset","jsrs_g36_shell_soundset","jsrs_5x56mm_SD_reflector_2"};
            };
        };
        class FullAuto: Mode_FullAuto
        {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_rifle_shake_soundset", "jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_5x56mm_reflector_2", "jsrs_556mm_echo_soundset"};
            };
            class SilencedSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_rifle_shake_soundset", "jsrs_g36_shot_silenced_soundset","jsrs_g36_shell_soundset","jsrs_5x56mm_SD_reflector_2"};
            };
        };
    };
};
