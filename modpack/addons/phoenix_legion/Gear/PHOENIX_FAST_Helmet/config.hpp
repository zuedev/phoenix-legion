class CfgWeapons {
    class H_HelmetB_light_black;

    class PHOENIX_FAST_Helmet_PROXY: H_HelmetB_light_black {
        scope = private;
        class ItemInfo;
    };

    class PHOENIX_FAST_Helmet: PHOENIX_FAST_Helmet_PROXY {
        _generalMacro = "PHOENIX_FAST_Helmet";
        scope = public;
        displayName = "PHOENIX FAST Helmet";
        hiddenSelectionsTextures[] = {"\z\phoenix_legion_modpack\addons\phoenix_legion_modpack_phoenix_legion\Gear\PHOENIX_FAST_Helmet\equip1_black_co_PHOENIX.paa"};
        picture = "\z\phoenix_legion_modpack\addons\phoenix_legion_modpack_phoenix_legion\Gear\PHOENIX_FAST_Helmet\icon_H_HelmetB_light_black_ca_PHOENIX.paa";

        class ItemInfo: ItemInfo {
            mass = 0;
        };
    };
};