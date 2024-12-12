class CfgVehicles {
    class PHOENIX_Infantry_Unarmed;

    class PHOENIX_Infantry_Marksman: PHOENIX_Infantry_Unarmed {
        displayName = "Marksman";
        magazines[] = {
            "30Rnd_65x39_caseless_green_mag_Tracer",
            "10Rnd_50BW_Mag_F"
        };
        weapons[] += {"PHOENIX_Infantry_Marksman_PHOENIX_ARX"};
        backpack = "PHOENIX_Infantry_Marksman_Backpack";
    };

    class B_ViperHarness_blk_F;

    class PHOENIX_Infantry_Marksman_Backpack: B_ViperHarness_blk_F {
        scope = protected;

        class TransportMagazines {
            class _xx_30Rnd_65x39_caseless_green_mag_Tracer {
                magazine = "30Rnd_65x39_caseless_green_mag_Tracer";
                count = 8;
            };
            class _xx_10Rnd_50BW_Mag_F {
                magazine = "10Rnd_50BW_Mag_F";
                count = 4;
            };
            class _xx_HandGrenade {
                magazine = "HandGrenade";
                count = 2;
            };
            class _xx_SmokeShell {
                magazine = "SmokeShell";
                count = 2;
            };
        };
    };
};

class CfgWeapons {
    class PHOENIX_ARX;

    class PHOENIX_Infantry_Marksman_PHOENIX_ARX: PHOENIX_ARX {
        scope = protected;

        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "optic_DMS";
            };
            class LinkedItemsAcc {
                slot = "PointerSlot";
                item = "acc_pointer_IR";
            };
        };
    };
};