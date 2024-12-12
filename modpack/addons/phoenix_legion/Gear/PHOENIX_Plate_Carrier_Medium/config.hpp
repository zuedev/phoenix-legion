class CfgWeapons {
    class V_PlateCarrier2_blk;

    class PHOENIX_Plate_Carrier_Medium_PROXY: V_PlateCarrier2_blk {
        scope = private;
        class ItemInfo;
    };

    class PHOENIX_Plate_Carrier_Medium: PHOENIX_Plate_Carrier_Medium_PROXY {
        scope = public;
        displayName = "PHOENIX Plate Carrier - Medium";
        hiddenSelectionsTextures[] = {"\z\phoenix_legion_modpack\addons\phoenix_legion_modpack_phoenix_legion\Gear\PHOENIX_Plate_Carrier_Medium\vests_blk_co_PHOENIX.paa"};
        picture = "\z\phoenix_legion_modpack\addons\phoenix_legion_modpack_phoenix_legion\Gear\PHOENIX_Plate_Carrier_Medium\icon_V_plate_carrier_2_blk_CA_PHOENIX.paa";
    };
};