class CfgPatches {
    class phoenix_legion_ace3_patch {
        addonRootClass = "phoenix_legion_modpack_phoenix_legion";
        
        requiredAddons[] = {
            "phoenix_legion_modpack_phoenix_legion",
            "ace_main",
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
            x10("ACE_elasticBandage"),
            x10("ACE_quikclot"),
            x2("ACE_morphine"),
            "ACE_epinephrine",
            "ACE_splint",
            "ACE_bloodIV_500",
            x2("ACE_tourniquet"),
            "ACE_EarPlugs",
            "ACE_EntrenchingTool",
            "ACE_Flashlight_MX991",
            "ACE_MapTools",
            "ACE_IR_Strobe_Item",
            "ACE_CableTie",
            "ACE_Banana"
        };
    };
};