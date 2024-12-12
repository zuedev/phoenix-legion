class CfgPatches {
    class phoenix_legion_acre_patch {
        addonRootClass = "phoenix_legion_modpack_phoenix_legion";
        
        requiredAddons[] = {
            "phoenix_legion_modpack_phoenix_legion",
            "acre_main"
        };
        units[] = {
            "PHOENIX_Infantry_Unarmed"
        };
        
        skipWhenMissingDependencies = 1;
    };
};

#include "\z\phoenix_legion_modpack\addons\phoenix_legion_modpack_core\macros.hpp"

class CfgVehicles {
    class PHOENIX_Infantry_Base;

    class PHOENIX_Infantry_Unarmed: PHOENIX_Infantry_Base {
        items[] += {
            "ACRE_PRC343"
        };
    };
};