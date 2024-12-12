class CfgWeapons {
    class U_I_E_CBRN_Suit_01_EAF_F;

    class PHOENIX_CBRN_Fatigues_PARENTPROXY: U_I_E_CBRN_Suit_01_EAF_F {
        scope = private;
        class ItemInfo;
    };

    class PHOENIX_CBRN_Fatigues: PHOENIX_CBRN_Fatigues_PARENTPROXY {
        scope = public;
        displayName = "PHOENIX CBRN Fatigues";
        hiddenSelectionsTextures[] = {"\z\phoenix_legion_modpack\addons\phoenix_legion_modpack_phoenix_legion\Gear\PHOENIX_CBRN_Fatigues\CBRN_Suit_01_EAF_CO_PHOENIX.paa"};
        picture = "\z\phoenix_legion_modpack\addons\phoenix_legion_modpack_phoenix_legion\Gear\PHOENIX_CBRN_Fatigues\icon_U_I_E_CBRN_Suit_01_EAF_F_ca_PHOENIX.paa";

        class ItemInfo: ItemInfo {
            mass = 0;
            uniformClass = "PHOENIX_CBRN_Fatigues_Soldier";
        };
    };
};

class CfgVehicles {
    class I_E_CBRN_Man_Oversuit_01_EAF_F;

    class PHOENIX_CBRN_Fatigues_Soldier: I_E_CBRN_Man_Oversuit_01_EAF_F {
        hiddenSelectionsTextures[] = {"\z\phoenix_legion_modpack\addons\phoenix_legion_modpack_phoenix_legion\Gear\PHOENIX_CBRN_Fatigues\CBRN_Suit_01_EAF_CO_PHOENIX.paa"};
        picture = "\z\phoenix_legion_modpack\addons\phoenix_legion_modpack_phoenix_legion\Gear\PHOENIX_CBRN_Fatigues\icon_U_I_E_CBRN_Suit_01_EAF_F_ca_PHOENIX.paa";
    };
};