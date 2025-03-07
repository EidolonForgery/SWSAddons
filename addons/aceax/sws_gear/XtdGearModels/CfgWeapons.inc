class CfgWeapons
{
    class SWS_Operative_Helmet : SWS_BaseGearModel
    {
        label = QNAME(Operative Helmets);
        options[] = {"Operative","Collar","Ghillie"};
        class Operative : OperativeOption { };
        class Collar : YesNoOption { label = "Vacuum Collar"; };
        class Ghillie : YesNoOption
        {
            class Yes { description = "Ghillie me."; };
            class No { description = "Ghillie is lame."; };
        };
    };

    class SWS_Color_Helmet : SWS_Operative_Helmet
    {
        label = QNAME(Generic Helmets);
        options[] = {"Color","Collar","Ghillie"};
        class Color : ColorOption {};
    };
    class SWS_Role_Helmet : SWS_Operative_Helmet
    {
        label = QNAME(Role Helmets);
        options[] = {"Role","Collar","Ghillie"};
        class Role
        {
            values[] = {"CLS"};
            class CLS
            {
                description = "A helmet specialized for a CLS or medic.";
            };
        };
    };

    class SWS_Operative_Armor : SWS_BaseGearModel
    {
        label = QNAME(Operative Armor);
        options[] = {"Operative", "Variant", "Ghillie"};
        class Operative : OperativeOption {};
        class Variant
        {
            values[] = {
                "Standard",
                "Demolitions",
                "Sniper",
                "Copilot",
                "Light",
                "Scout",
                "Rifleman",
                "Marksman",
                "Lead"
            };

            class Standard {};
            class Demolitions {};
            class Sniper {};
            class Copilot {};
            class Light {};
            class Scout {};
            class Rifleman {};
            class Marksman {};
            class Lead {};
        };
        class Ghillie : YesNoOption
        {
            class Yes { description = "Ghillie me."; };
            class No { description = "Ghillie is lame."; };
        };
    };

    class SWS_Color_Armor : SWS_Operative_Armor
    {
        label = QNAME(Generic Armor);
        options[] = {"Color","Variant","Ghillie"};
        class Color : ColorOption {};
    };

    class SWS_Role_Armor : SWS_Operative_Armor
    {
        label = QNAME(Role Armor);
        options[] = {"Role","Variant","Ghillie"};
        class Role
        {
            values[] = {"CLS"};
            class CLS
            {
                description = "Armor specialized for a CLS or medic.";
            };
        };
    };
};
