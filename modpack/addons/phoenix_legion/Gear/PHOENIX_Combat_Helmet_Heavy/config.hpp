class CfgWeapons {
    class HitpointsProtectionInfo;
    class Head;
    class Face;

    class H_HelmetB_TI_tna_F;

    class H_HelmetB_TI_tna_F_PROXY: H_HelmetB_TI_tna_F {
        scope = private;
        class ItemInfo;
    };

    class PHOENIX_Combat_Helmet_Heavy: H_HelmetB_TI_tna_F_PROXY {
        _generalMacro = "PHOENIX_Combat_Helmet_Heavy";
        scope = public;
        displayName = "PHOENIX Combat Helmet - Heavy";
        hiddenSelectionsTextures[] = {"\z\phoenix_legion_modpack\addons\phoenix_legion_modpack_phoenix_legion\Gear\PHOENIX_Combat_Helmet_Heavy\h_helmetb_ti_tna_f_co_PHOENIX.paa"};
        picture = "\z\phoenix_legion_modpack\addons\phoenix_legion_modpack_phoenix_legion\Gear\PHOENIX_Combat_Helmet_Heavy\icon_h_helmetb_ti_tna_f_ca_PHOENIX.paa";

        ace_hearing_protection = 1;
        ace_hearing_lowerVolume = 0;

        class ItemInfo: ItemInfo {
            mass = 15;
            modelSides[] = {3,2,1,0};

            class HitpointsProtectionInfo: HitpointsProtectionInfo {
                class Head: Head {
                    armor = 12;
                    passThrough = 0.05;
                };
                class Face: Face {
                    armor = 8;
                    passThrough = 0.05;
                };
            };
        };
    };
};