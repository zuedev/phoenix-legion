class CfgWeapons {
    class H_PASGT_basic_blue_press_F;

    class PHOENIX_Combat_Helmet_Medium_PROXY: H_PASGT_basic_blue_press_F {
        scope = private;
        class ItemInfo;
    };

    class PHOENIX_Combat_Helmet_Medium: PHOENIX_Combat_Helmet_Medium_PROXY {
        _generalMacro = "PHOENIX_Combat_Helmet_Medium";
        scope = public;
        displayName = "PHOENIX Combat Helmet - Medium";
        hiddenSelectionsTextures[] = {"\z\phoenix_legion_modpack\addons\phoenix_legion_modpack_phoenix_legion\Gear\PHOENIX_Combat_Helmet_Medium\H_PASGT_blue_press_CO_PHOENIX.paa"};
        picture = "\z\phoenix_legion_modpack\addons\phoenix_legion_modpack_phoenix_legion\Gear\PHOENIX_Combat_Helmet_Medium\icon_H_PASGT_basic_blue_press_CA_PHOENIX.paa";
    };
};