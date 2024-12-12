class CfgWeapons {
    class V_PlateCarrierSpec_blk;

    class PHOENIX_Plate_Carrier_Heavy_PROXY: V_PlateCarrierSpec_blk {
        scope = private;
        class ItemInfo;
    };

    class PHOENIX_Plate_Carrier_Heavy: PHOENIX_Plate_Carrier_Heavy_PROXY {
        scope = public;
        displayName = "PHOENIX Plate Carrier - Heavy";
        hiddenSelectionsTextures[] = {"\z\phoenix_legion_modpack\addons\phoenix_legion_modpack_phoenix_legion\Gear\PHOENIX_Plate_Carrier_Heavy\carrier_gl_rig_blk_co_PHOENIX.paa"};
        picture = "\z\phoenix_legion_modpack\addons\phoenix_legion_modpack_phoenix_legion\Gear\PHOENIX_Plate_Carrier_Heavy\icon_carrier_spec_rig_blk_PHOENIX.paa";
    };
};