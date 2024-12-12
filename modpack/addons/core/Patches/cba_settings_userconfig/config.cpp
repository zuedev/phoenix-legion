class CfgPatches {
    class cba_settings_userconfig {
        addonRootClass = "phoenix_legion_modpack_core";
        
        requiredAddons[] = {
            "cba_settings",
        };
        
        skipWhenMissingDependencies = 1;
    };
};

#include "\z\phoenix_legion_modpack\addons\phoenix_legion_modpack_core\macros.hpp"