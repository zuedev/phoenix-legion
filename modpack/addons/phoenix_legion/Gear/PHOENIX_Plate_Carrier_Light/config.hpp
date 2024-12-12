class CfgWeapons {
    class HitpointsProtectionInfo;
    class Abdomen;
    class Chest;
    class Diaphragm;

    class V_PlateCarrier1_blk;

    class PHOENIX_Plate_Carrier_Light_PARENTPROXY: V_PlateCarrier1_blk {
        scope = private;
        class ItemInfo;
    };

    class PHOENIX_Plate_Carrier_Light: PHOENIX_Plate_Carrier_Light_PARENTPROXY {
        scope = public;
        displayName = "PHOENIX Plate Carrier - Light";
        hiddenSelectionsTextures[] = {"\z\phoenix_legion_modpack\addons\phoenix_legion_modpack_phoenix_legion\Gear\PHOENIX_Plate_Carrier_Light\vests_blk_co_PHOENIX.paa"};
        picture = "\z\phoenix_legion_modpack\addons\phoenix_legion_modpack_phoenix_legion\Gear\PHOENIX_Plate_Carrier_Light\icon_v_platecarrier1_blk_ca_PHOENIX.paa";

        class ItemInfo: ItemInfo {
            containerClass = "PHOENIX_Plate_Carrier_Light_ContainerClass";
            mass = 20;

            class HitpointsProtectionInfo: HitpointsProtectionInfo {
                class Abdomen: Abdomen {
                    armor = 32;
                };
                class Chest: Chest {
                    armor = 32;
                };
                class Diaphragm: Diaphragm {
                    armor = 32;
                };
            };
        };
    };
};

class CfgVehicles {
    class Supply0;
    
    class PHOENIX_Plate_Carrier_Light_ContainerClass: Supply0 {
        maximumLoad = 280;
    };
};