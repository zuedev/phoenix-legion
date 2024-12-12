class CfgVehicles {
    class B_Survivor_F;

    class PHOENIX_Infantry_Base: B_Survivor_F {
        scope = public;
        displayName = "Base";
        faction = "PHOENIX_Reserves";
        items[] = {};
        linkedItems[] += {
            "PHOENIX_Balaclava_With_Combat_Goggles"
        };
        uniformClass = "PHOENIX_Combat_Fatigues_Black_Splinter";

        engineer = 1;
        canDeactivateMines = 1;
        attendant = 1;
        uavHacker = 1;
    };
};