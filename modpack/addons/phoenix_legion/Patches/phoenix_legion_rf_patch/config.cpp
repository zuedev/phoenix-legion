class CfgPatches {
    class phoenix_legion_rf_patch {
        addonRootClass = "phoenix_legion_modpack_phoenix_legion";
        
        requiredAddons[] = {
            "RF_Air_heli_medium_ec",
            "RF_Vehicles_Pickup_01",
            "phoenix_legion_modpack_phoenix_legion"
        };
        units[] = {
            "PHOENIX_Cougar_Gunship",
            "PHOENIX_Moose_Pickup_AAT_Black",
            "PHOENIX_Moose_Pickup_AAT_Black_Armoured",
            "PHOENIX_Moose_Pickup_Black",
            "PHOENIX_Moose_Pickup_Black_Armoured",
            "PHOENIX_Moose_Pickup_Black_Splinter",
            "PHOENIX_Moose_Pickup_Black_Splinter_Armoured",
            "PHOENIX_Moose_Pickup_Comms_Black",
            "PHOENIX_Moose_Pickup_Comms_Black_Armoured",
            "PHOENIX_Moose_Pickup_HMG_Black",
            "PHOENIX_Moose_Pickup_HMG_Black_Armoured",
            "PHOENIX_Moose_Pickup_MMG_Black",
            "PHOENIX_Moose_Pickup_MMG_Black_Armoured",
            "PHOENIX_Moose_Pickup_MRL_Black",
            "PHOENIX_Moose_Pickup_MRL_Black_Armoured"
        };
        
        skipWhenMissingDependencies = 1;
    };
};

#include "\z\phoenix_legion_modpack\addons\phoenix_legion_modpack_core\macros.hpp"
#include "Vehicles/_index.hpp"