class CfgVehicles {
    class PHOENIX_Infantry_Base;

    class PHOENIX_Infantry_Unarmed: PHOENIX_Infantry_Base {
        displayName = "Unarmed";
        items[] += {
            "FirstAidKit"
        };
        linkedItems[] += {
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "ItemGPS",
            "PHOENIX_Combat_Helmet_Medium",
            "PHOENIX_Plate_Carrier_Medium"
        };
    };
};