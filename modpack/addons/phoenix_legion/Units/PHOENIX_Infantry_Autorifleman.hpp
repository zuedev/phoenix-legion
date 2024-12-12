class CfgVehicles {
    class PHOENIX_Infantry_Unarmed;

    class PHOENIX_Infantry_Autorifleman: PHOENIX_Infantry_Unarmed {
        displayName = "Autorifleman";
        magazines[] = {
            "200Rnd_556x45_Box_Tracer_Red_F"
        };
        weapons[] += {"PHOENIX_Infantry_Autorifleman_PHOENIX_LIM"};
        backpack = "PHOENIX_Infantry_Autorifleman_Backpack";
    };

    class B_ViperHarness_blk_F;

    class PHOENIX_Infantry_Autorifleman_Backpack: B_ViperHarness_blk_F {
        scope = protected;

        class TransportMagazines {
            class _xx_200Rnd_556x45_Box_Tracer_Red_F {
                magazine = "200Rnd_556x45_Box_Tracer_Red_F";
                count = 5;
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
    class PHOENIX_LIM;
    
    class PHOENIX_Infantry_Autorifleman_PHOENIX_LIM: PHOENIX_LIM {
        scope = protected;

        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "optic_MRCO";
            };
            class LinkedItemsAcc {
                slot = "PointerSlot";
                item = "acc_pointer_IR";
            };
        };
    };
};