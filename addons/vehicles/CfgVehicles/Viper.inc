class SWS_V_MBT_M700_Viper_Base : I_MBT_03_cannon_F
{
    ITEM_META(0);
    displayName = QNAME(M700 Viper - Base);
    faction = "SWS_UNSC";
    side = 1;
    crew = "OPTRE_UNSC_Marine_Soldier_Crewman";
    typicalCargo[] = { "OPTRE_UNSC_ODST_Soldier" };
    editorPreview = QPATHTOF(data\viper\editor_preview.jpg);

    armor = 900;

    reportRemoteTargets = 1;
    reportOwnPosition = 1;
    receiveRemoteTargets = 1;

    textureList[] = {
        "SWS_Basic", 1,
        "SWS_Flecktarn", 1,
        "SWS_Flat", 0.5,
        "SWS_Cobra", 0,
        "SWS_Sticker", 0,
        "Indep_01", 0,
        "Indep_02", 0,
        "Indep_03", 0
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\viper\body_sws_co.paa),
        QPATHTOF(data\viper\turret_co.paa),
        QPATHTOF(data\viper\turret_mg_co.paa),
        GREEN_NET_TEXTURE
    };

    class Components: Components
    {
        class SensorsManagerComponent
        {
            class Components
            {
                class LaserSensorComponent: SensorTemplateLaser
                {
                    animDirection = "mainTurret";
                };
                class DataLinkSensorComponent: SensorTemplateDataLink
                {
                    class AirTarget : SWS_SensorTargetTemplate {};
                    class GroundTarget : SWS_SensorTargetTemplate {};
                };
                class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
                {
                    class AirTarget : SWS_SensorTargetTemplate {};
                    class GroundTarget : SWS_SensorTargetTemplate {};
                };
            };
        };
    };

    class Turrets: Turrets
    {
        class MainTurret: MainTurret
        {
            weapons[] = {
                "SWS_cannon_120mm_viper",
                "LMG_coax"
            };
            magazines[] =
            {
                "20Rnd_120mm_APFSDS_shells_Tracer_Yellow",
                "12Rnd_120mm_HE_shells_Tracer_Yellow",
                "SWS_Magazine_8rd_Viper_ATGM",
                MACRO_X10("200Rnd_762x51_Belt_Yellow")
            };
            class Components
            {
                class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftCommander
                {
                    class Components: Components
                    {
                        class SensorDisplay : SWS_SensorDisplayTemplate {};
                    };
                };
                class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightCommander
                {
                    defaultDisplay = "SensorDisplay";
                    class Components: Components
                    {
                        class SensorDisplay : SWS_SensorDisplayTemplate {};
                    };
                };
            };
            class Turrets: Turrets
            {
                class CommanderOptics: CommanderOptics
                {
                    weapons[] = {
                        "SWS_HMG_127_Viper",
                        "SmokeLauncher"
                    };
                    magazines[] = {
                        "200Rnd_127x99_mag_Tracer_Yellow",
                        "200Rnd_127x99_mag_Tracer_Yellow",
                        "200Rnd_127x99_mag_Tracer_Yellow",
                        MACRO_X5("SmokeLauncherMag")
                    };
                    class HitPoints: HitPoints
                    {
                        class HitComTurret: HitComTurret
                        {
                            armor = 0.5;
                        };
                        class HitComGun: HitComGun
                        {
                            armor = 0.5;
                        };
                    };
                    class Components
                    {
                        class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftCommander
                        {
                            class Components: Components
                            {
                                class SensorDisplay : SWS_SensorDisplayTemplate {};
                            };
                        };
                        class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightCommander
                        {
                            defaultDisplay = "SensorDisplay";
                            class Components: Components
                            {
                                class SensorDisplay : SWS_SensorDisplayTemplate {};
                            };
                        };
                    };
                };
            };
        };
    };

    class TextureSources : TextureSources
    {
        class SWS_Basic
        {
            displayName = QNAME(SWS);
            author = QUOTE(AUTHOR);
            textures[] = {
                QPATHTOF(data\viper\body_sws_co.paa),
                QPATHTOF(data\viper\turret_co.paa),
                QPATHTOF(data\viper\turret_mg_co.paa),
                GREEN_NET_TEXTURE
            };
            factions[] = {"SWS_UNSC"};
        };
        class SWS_Flat
        {
            displayName = QNAME(SWS (Flat));
            author = QUOTE(AUTHOR);
            textures[] = {
                QPATHTOF(data\viper\body_flat_co.paa),
                QPATHTOF(data\viper\turret_co.paa),
                QPATHTOF(data\viper\turret_mg_co.paa),
                GREEN_NET_TEXTURE
            };
            factions[] = {"SWS_UNSC"};
        };
        class SWS_Flecktarn
        {
            displayName = QNAME(SWS (Flecktarn Camo));
            author = QUOTE(AUTHOR);
            textures[] = {
                QPATHTOF(data\viper\body_flecktarn_co.paa),
                QPATHTOF(data\viper\turret_flecktarn_co.paa),
                QPATHTOF(data\viper\turret_mg_flecktarn_co.paa),
                CSAT_NET_TEXTURE
            };
            factions[] = {"SWS_UNSC"};
        };
        class SWS_Cobra
        {
            // TODO: Create an in-game change texture system to avoid this being the selected texture if Cobra isn't the team in it.
            displayName = QNAME(SWS (Cobra Team));
            author = QUOTE(AUTHOR);
            textures[] = {
                QPATHTOF(data\viper\body_sws_co.paa),
                QPATHTOF(data\viper\turret_cobra_co.paa),
                QPATHTOF(data\viper\turret_mg_co.paa),
                GREEN_NET_TEXTURE
            };
            factions[] = {"SWS_UNSC"};
        };
        class SWS_Sticker
        {
            displayName = QNAME(SWS (Stickers));
            author = QUOTE(AUTHOR);
            textures[] = {
                QPATHTOF(data\viper\body_sticker_co.paa),
                QPATHTOF(data\viper\turret_sticker_co.paa),
                QPATHTOF(data\viper\turret_mg_co.paa),
                GREEN_NET_TEXTURE
            };
            factions[] = {"SWS_UNSC"};
        };
        class CLA_Captured
        {
            displayName = QNAME(CLA (Captured));
            author = QUOTE(AUTHOR);
            textures[] = {
                QPATHTOF(data\viper\body_flecktarn_co.paa),
                QPATHTOF(data\viper\turret_flecktarn_captured_co.paa),
                QPATHTOF(data\viper\turret_mg_flecktarn_co.paa),
                CSAT_NET_TEXTURE
            };
            factions[] = {"O_CLA"};
        };
    };

    class TransportMagazines
    {
        MACRO_ADDMAGAZINE(SmokeShell,2);
        MACRO_ADDMAGAZINE(SmokeShellGreen,2);
        MACRO_ADDMAGAZINE(30Rnd_65x39_caseless_msbs_mag,2);
    };
    class TransportWeapons
    {
        MACRO_ADDWEAPON(SWS_Weapon_AR0M37,2);
    };
    class TransportItems
    {
        MACRO_ADDITEM(ACE_PersonalAidKit,1);
        MACRO_ADDITEM(ACE_elasticBandage,20);
        MACRO_ADDITEM(ToolKit,1);
    };

    class EventHandlers : EventHandlers
    {
        init = "if (local (_this select 0)) then {[(_this select 0), """", [], nil] call bis_fnc_initVehicle;};";
		killed = "if (local (_this select 0)) then {[(_this select 0), nil, [], false] call bis_fnc_initVehicle;};";
    };
};

class SWS_V_MBT_M700_Viper : SWS_V_MBT_M700_Viper_Base
{
    SCOPE(2);
    displayName = QNAME(M700 Viper);
    textureList[] = {"SWS_Basic", 1};
};
class SWS_V_MBT_M700_Viper_Flat : SWS_V_MBT_M700_Viper
{
    SCOPE(0);
    displayName = QNAME(M700 Viper (Flat));
    textureList[] = {"SWS_Flat", 1};
};
class SWS_V_MBT_M700_Viper_Flecktarn : SWS_V_MBT_M700_Viper
{
    SCOPE(0);
    displayName = QNAME(M700 Viper (Flecktarn));
    textureList[] = {"SWS_Flecktarn", 1};
};
class SWS_V_MBT_M700_Viper_Cobra : SWS_V_MBT_M700_Viper
{
    SCOPE(0);
    displayName = QNAME(M700 Viper (Cobra));
    textureList[] = {"SWS_Cobra", 1};
};
class SWS_V_MBT_M700_Viper_Sticker : SWS_V_MBT_M700_Viper
{
    SCOPE(0);
    displayName = QNAME(M700 Viper (Stickers!));
    textureList[] = {"SWS_Sticker", 1};
};
class SWS_V_MBT_M700_Viper_Captured : SWS_V_MBT_M700_Viper_Base
{
    SCOPE(2);
    faction = "O_CLA";
    side = 0;
    displayName = QNAME(M700 Viper (Captured CLA));
    textureList[] = {"CLA_Captured", 1};
    typicalCargo[] = { "O_CLA_Crew_01" };
    editorPreview = QPATHTOF(data\viper\editor_preview_captured.jpg);
};