class CfgWeapons {
    class U_I_E_CBRN_Suit_01_EAF_F;

    class PHOENIX_Track_Suit_PARENTPROXY: U_I_E_CBRN_Suit_01_EAF_F {
        scope = private;
        class ItemInfo;
    };

    class PHOENIX_Track_Suit: PHOENIX_Track_Suit_PARENTPROXY {
        scope = public;
        displayName = "PHOENIX Track Suit";
        hiddenSelectionsTextures[] = {"\z\phoenix_legion_modpack\addons\phoenix_legion_modpack_phoenix_legion\Gear\PHOENIX_Track_Suit\Gorka_01_Khaki_CO_PHOENIX.paa"};
        picture = "\z\phoenix_legion_modpack\addons\phoenix_legion_modpack_phoenix_legion\Gear\PHOENIX_Track_Suit\icon_U_O_R_Gorka_01_F_ca_PHOENIX.paa";

        class ItemInfo: ItemInfo {
            mass = 0;
            uniformClass = "PHOENIX_Track_Suit_Soldier";
        };
    };
};

class CfgVehicles {
    class O_R_Gorka_F;

    class PHOENIX_Track_Suit_Soldier: O_R_Gorka_F {
        hiddenSelectionsTextures[] = {"\z\phoenix_legion_modpack\addons\phoenix_legion_modpack_phoenix_legion\Gear\PHOENIX_Track_Suit\Gorka_01_Khaki_CO_PHOENIX.paa"};
        picture = "\z\phoenix_legion_modpack\addons\phoenix_legion_modpack_phoenix_legion\Gear\PHOENIX_Track_Suit\icon_U_O_R_Gorka_01_F_ca_PHOENIX.paa";
    };
};