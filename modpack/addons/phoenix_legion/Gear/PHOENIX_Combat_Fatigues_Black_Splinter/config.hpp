class CfgWeapons {
    class U_B_CTRG_Soldier_urb_1_F;

    class PHOENIX_Combat_Fatigues_Black_Splinter_PARENTPROXY: U_B_CTRG_Soldier_urb_1_F {
        scope = private;
        class ItemInfo;
    };

    class PHOENIX_Combat_Fatigues_Black_Splinter: PHOENIX_Combat_Fatigues_Black_Splinter_PARENTPROXY {
        scope = public;
        displayName = "PHOENIX Combat Fatigues (Black Splinter)";
        hiddenSelectionsTextures[] = {"\z\phoenix_legion_modpack\addons\phoenix_legion_modpack_phoenix_legion\Gear\PHOENIX_Combat_Fatigues_Black_Splinter\clothing1_mtp_urban_co_PHOENIX.paa"};
        picture = "\z\phoenix_legion_modpack\addons\phoenix_legion_modpack_phoenix_legion\Gear\PHOENIX_Combat_Fatigues_Black_Splinter\icon_U_B_CTRG_Soldier_urb_1_F_ca_PHOENIX.paa";

        class ItemInfo: ItemInfo {
            containerClass = "Supply80";
            mass = 0;
            uniformClass = "PHOENIX_Combat_Fatigues_Black_Splinter_Soldier";
        };
    };
};

class CfgVehicles {
    class B_CTRG_Soldier_urb_1_F;

    class PHOENIX_Combat_Fatigues_Black_Splinter_Soldier: B_CTRG_Soldier_urb_1_F {
        hiddenSelectionsTextures[] = {"\z\phoenix_legion_modpack\addons\phoenix_legion_modpack_phoenix_legion\Gear\PHOENIX_Combat_Fatigues_Black_Splinter\clothing1_mtp_urban_co_PHOENIX.paa"};
        picture = "\z\phoenix_legion_modpack\addons\phoenix_legion_modpack_phoenix_legion\Gear\PHOENIX_Combat_Fatigues_Black_Splinter\icon_U_B_CTRG_Soldier_urb_1_F_ca_PHOENIX.paa";
    };
};