class CfgWeapons {
    class LMG_03_F;

    class PHOENIX_LIM: LMG_03_F {
        displayName = "Phoenix Legion LIM";
        baseWeapon = "PHOENIX_LIM";
        _generalMacro = "PHOENIX_LIM";
    };

    class PHOENIX_LIM_AUTORELOAD: PHOENIX_LIM {
        displayName = "Phoenix Legion LIM (Auto Reload)";
        baseWeapon = "PHOENIX_LIM_AUTORELOAD";
        _generalMacro = "PHOENIX_LIM_AUTORELOAD";

        // auto reload feature
        autoReload = 1;
        reloadAction= "";
        reloadMagazineSound[] = {};
        magazineReloadTime = 0;
    };
};