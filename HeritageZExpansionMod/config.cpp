class CfgPatches
{
    class HeritageZExpansionMod
    {
        units[] = {};
        weapons[] = {};
        requiredAddons[] = { "DZ_Data", "DayZExpansion_Core", "DayZExpansion_AI_Scripts" };
    };
};

class CfgMods
{
    class HeritageZExpansionMod
    {
        dir = "HeritageZExpansionMod";
        name = "HeritageZExpansionMod";
        picture = "HeritageZExpansionMod\\Textures\\HeritageZ\\heritagez_logo_uni.edds";
        logo = "HeritageZExpansionMod\\Textures\\HeritageZ\\heritagez_logo_uni.edds";
        logoOver = "HeritageZExpansionMod\\Textures\\HeritageZ\\heritagez_logo_uni.edds";
        tooltip = "HeritageZ - Serveur DayZ Francophone";
        tooltipOwned = "HeritageZ";
        action = "";
        credits = "Developed by Bigi. This mod works with DayZ Expansion. Special thanks to the DayZ Expansion Team for their amazing work.";
        author = "Bigi & DayZ Expansion Team";
        authorID = "";
        version = "0.1";
        hideName = 0;
        hidePicture = 0;
        extra = 0;
        type = "mod";
        dependencies[] = { "Game", "World", "Mission" };

        class defs
        {
            class gameScriptModule
            {
                value = "";
                files[] = {
                    "HeritageZExpansionMod\\Scripts\\3_Game",
                    "HeritageZExpansionMod\\Scripts\\3_Game\\LoadingScreen",
                    "HeritageZExpansionMod\\Scripts\\3_Game\\Factions",
                    "HeritageZExpansionMod\\Scripts\\3_Game\\Data"
                };
            };
            class worldScriptModule
            {
                value = "";
                files[] = { "HeritageZExpansionMod\\Scripts\\4_World" };
            };
            class missionScriptModule
            {
                value = "";
                files[] = { "HeritageZExpansionMod\\Scripts\\5_Mission" };
            };
        };
    };
};
