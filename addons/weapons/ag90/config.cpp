class CfgPatches {
    class sfp_jsrs_weapons_ag90 {
        name = "sfp_jsrs_weapons_ag90";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"sfp_ag90", "jsrs_soundmod_complete_edition"};
        addonRootClass = "sfp_ag90";
        author = "Swedish Forces Pack";
        url = "https://www.anrop.se";
    };
};

class CfgWeapons 
{
    class GM6_base_F;
    class srifle_GM6_F : GM6_base_F
    {
        class Single;
    };
    class sfp_ag90_base : srifle_GM6_F
    {
        drysound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\dry\m320r_dry.ogg", 1.5, 1, 15};
        reloadmagazinesound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\reload\m320r_reload.ogg", 2, 1, 35};
        bullet1[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\big\metal_1.ogg", 2.0099, 1, 10};
        bullet2[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\big\metal_2.ogg", 2.0099, 1, 10};
        bullet3[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\big\metal_3.ogg", 2.0099, 1, 10};
        bullet4[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\big\metal_4.ogg", 2.0099, 1, 10};
        bullet5[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\big\dirt_1.ogg", 2.0099, 1, 10};
        bullet6[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\big\dirt_2.ogg", 2.0099, 1, 10};
        bullet7[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\big\dirt_3.ogg", 2.0099, 1, 10};
        bullet8[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\big\dirt_4.ogg", 2.0099, 1, 10};
        bullet9[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\big\grass_1.ogg", 2.0099, 1, 10};
        bullet10[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\big\grass_2.ogg", 2.0099, 1, 10};
        bullet11[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\big\grass_3.ogg", 2.0099, 1, 10};
        bullet12[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\big\grass_4.ogg", 2.0099, 1, 10};
        soundbullet[] = {"bullet1", 0.08, "bullet2", 0.084, "bullet3", 0.084, "bullet4", 0.084, "bullet5", 0.093, "bullet6", 0.093, "bullet7", 0.074, "bullet8", 0.074, "bullet9", 0.084, "bullet10", 0.085, "bullet11", 0.083, "bullet12", 0.083};

        class Single: Single
        {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_m107_shot_soundset", "jsrs_12x7mm_reverb_soundset"};
            };
            class SilencedSound
            {
                soundSetShot[] = {"jsrs_m107_shot_silenced_soundset", "jsrs_12x7mm_sd_reverb_soundset"};
            };
        };
    };
};
