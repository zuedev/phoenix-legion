class CfgWeapons {
    class H_PASGT_neckprot_blue_press_F;

    class PHOENIX_Combat_Helmet_Medium_Neckshield_PROXY: H_PASGT_neckprot_blue_press_F {
        scope = private;
        class ItemInfo;
    };

    class PHOENIX_Combat_Helmet_Medium_Neckshield: PHOENIX_Combat_Helmet_Medium_Neckshield_PROXY {
        _generalMacro = "PHOENIX_Combat_Helmet_Medium_Neckshield";
        scope = public;
        displayName = "PHOENIX Combat Helmet - Medium + Neckshield";
        hiddenSelectionsTextures[] = {"\z\phoenix_legion_modpack\addons\phoenix_legion_modpack_phoenix_legion\Gear\PHOENIX_Combat_Helmet_Medium_Neckshield\H_PASGT_blue_press_CO_PHOENIX.paa"};
        picture = "\z\phoenix_legion_modpack\addons\phoenix_legion_modpack_phoenix_legion\Gear\PHOENIX_Combat_Helmet_Medium_Neckshield\icon_H_PASGT_neckprot_blue_press_CA_PHOENIX.paa";
    };
};