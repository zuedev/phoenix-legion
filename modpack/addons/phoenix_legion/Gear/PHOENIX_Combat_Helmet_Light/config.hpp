class CfgWeapons {
    class H_HelmetB_black;

    class PHOENIX_Combat_Helmet_Light_PROXY: H_HelmetB_black {
        scope = private;
        class ItemInfo;
    };

    class PHOENIX_Combat_Helmet_Light: PHOENIX_Combat_Helmet_Light_PROXY {
        _generalMacro = "PHOENIX_Combat_Helmet_Light";
        scope = public;
        displayName = "PHOENIX Combat Helmet - Light";
        hiddenSelectionsTextures[] = {"\z\phoenix_legion_modpack\addons\phoenix_legion_modpack_phoenix_legion\Gear\PHOENIX_Combat_Helmet_Light\equip1_black_co_PHOENIX.paa"};
        picture = "\z\phoenix_legion_modpack\addons\phoenix_legion_modpack_phoenix_legion\Gear\PHOENIX_Combat_Helmet_Light\icon_H_HelmetB_black_ca_PHOENIX.paa";

        class ItemInfo: ItemInfo {
            mass = 0;
        };
    };
};