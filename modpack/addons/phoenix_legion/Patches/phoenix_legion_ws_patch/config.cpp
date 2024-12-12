class CfgPatches {
    class phoenix_legion_ws_patch {
        addonRootClass = "phoenix_legion_modpack_phoenix_legion";
        
        requiredAddons[] = {
            "phoenix_legion_modpack_phoenix_legion",
            "Air_F_lxWS_Heli_Light_02"
        };
        units[] = {
            "PHOENIX_Orca_UP"
        };
        
        skipWhenMissingDependencies = 1;
    };
};

#include "\z\phoenix_legion_modpack\addons\phoenix_legion_modpack_core\macros.hpp"
#include "Vehicles/_index.hpp"