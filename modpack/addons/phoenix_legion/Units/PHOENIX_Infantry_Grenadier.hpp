class CfgVehicles {
    class PHOENIX_Infantry_Unarmed;

    class PHOENIX_Infantry_Grenadier: PHOENIX_Infantry_Unarmed {
        displayName = "Grenadier";
        magazines[] = {
            "30Rnd_556x45_Stanag_Tracer_Red"
        };
        weapons[] += {"PHOENIX_Infantry_Grenadier_PHOENIX_SPAR_GL"};
        backpack = "PHOENIX_Infantry_Grenadier_Backpack";
    };

    class B_ViperHarness_blk_F;

    class PHOENIX_Infantry_Grenadier_Backpack: B_ViperHarness_blk_F {
        scope = protected;

        class TransportMagazines {
            class _xx_30Rnd_556x45_Stanag_Tracer_Red {
                magazine = "30Rnd_556x45_Stanag_Tracer_Red";
                count = 10;
            };
            class _xx_1Rnd_HE_Grenade_shell {
                magazine = "1Rnd_HE_Grenade_shell";
                count = 6;
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
    class PHOENIX_SPAR_GL;
    
    class PHOENIX_Infantry_Grenadier_PHOENIX_SPAR_GL: PHOENIX_SPAR_GL {
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