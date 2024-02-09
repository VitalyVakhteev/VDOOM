#pragma once

#include <string_view>

namespace Doom {
    constexpr std::string_view D_DEVSTR = "Development mode ON.\n";
    constexpr std::string_view D_CDROM = "CD-ROM Version: default.cfg from c:\\doomdata\n";

    constexpr std::string_view PRESSKEY = "press a key.";
    constexpr std::string_view PRESSYN = "press y or n.";
    constexpr std::string_view QUITMSG = "are you sure you want to\nquit this great game?";

    constexpr std::string_view LOADNET = "you can't do load while in a net game!\n\n";
    constexpr std::string_view QLOADNET = "you can't quickload during a netgame!\n\n";
    constexpr std::string_view QSAVESPOT = "you haven't picked a quicksave slot yet!\n\n";
    constexpr std::string_view SAVEDEAD = "you can't save if you aren't playing!\n\n";
    constexpr std::string_view QSPROMPT = "quicksave over your game named\n\n'%s'?\n\n";
    constexpr std::string_view QLPROMPT = "do you want to quickload the game named\n\n'%s'?\n\n";
    constexpr std::string_view NEWGAME = "you can't start a new game\n""while in a network game.\n\n";

    constexpr std::string_view NIGHTMARE = "are you sure? this skill level\nisn't even remotely fair.\n\n";

    constexpr std::string_view SWSTRING	= "this is the shareware version of doom.\n\nyou need to order the entire trilogy.\n\n";

    constexpr std::string_view MSGOFF = "Messages OFF";
    constexpr std::string_view MSGON = "Messages ON";
    constexpr std::string_view NETEND =	"you can't end a netgame!\n\n";
    constexpr std::string_view ENDGAME = "are you sure you want to end the game?\n\n";

    constexpr std::string_view DOSY	= "(press y to quit)";

    constexpr std::string_view DETAILHI	= "High detail";
    constexpr std::string_view DETAILLO	= "Low detail";
    constexpr std::string_view GAMMALVL0 = "Gamma correction OFF";
    constexpr std::string_view GAMMALVL1 = "Gamma correction level 1";
    constexpr std::string_view GAMMALVL2 = "Gamma correction level 2";
    constexpr std::string_view GAMMALVL3 = "Gamma correction level 3";
    constexpr std::string_view GAMMALVL4 = "Gamma correction level 4";
    constexpr std::string_view EMPTYSTRING = "empty slot";

    //
    //	P_inter.C
    //
    constexpr std::string_view GOTARMOR = "Picked up the armor.";
    constexpr std::string_view GOTMEGA = "Picked up the MegaArmor!";
    constexpr std::string_view GOTHTHBONUS = "Picked up a health bonus.";
    constexpr std::string_view GOTARMBONUS = "Picked up an armor bonus.";
    constexpr std::string_view GOTSTIM = "Picked up a stimpack.";
    constexpr std::string_view GOTMEDINEED = "Picked up a medikit that you REALLY need!";
    constexpr std::string_view GOTMEDIKIT = "Picked up a medikit.";
    constexpr std::string_view GOTSUPER = "Supercharge!";

    constexpr std::string_view GOTBLUECARD = "Picked up a blue keycard.";
    constexpr std::string_view GOTYELWCARD = "Picked up a yellow keycard.";
    constexpr std::string_view GOTREDCARD = "Picked up a red keycard.";
    constexpr std::string_view GOTBLUESKUL = "Picked up a blue skull key.";
    constexpr std::string_view GOTYELWSKUL = "Picked up a yellow skull key.";
    constexpr std::string_view GOTREDSKULL = "Picked up a red skull key.";

    constexpr std::string_view GOTINVUL = "Invulnerability!";
    constexpr std::string_view GOTBERSERK = "Berserk!";
    constexpr std::string_view GOTINVIS = "Partial Invisibility";
    constexpr std::string_view GOTSUIT = "Radiation Shielding Suit";
    constexpr std::string_view GOTMAP = "Computer Area Map";
    constexpr std::string_view GOTVISOR = "Light Amplification Visor";
    constexpr std::string_view GOTMSPHERE = "MegaSphere!";

    constexpr std::string_view GOTCLIP = "Picked up a clip.";
    constexpr std::string_view GOTCLIPBOX = "Picked up a box of bullets.";
    constexpr std::string_view GOTROCKET = "Picked up a rocket.";
    constexpr std::string_view GOTROCKBOX = "Picked up a box of rockets.";
    constexpr std::string_view GOTCELL = "Picked up an energy cell.";
    constexpr std::string_view GOTCELLBOX = "Picked up an energy cell pack.";
    constexpr std::string_view GOTSHELLS = "Picked up 4 shotgun shells.";
    constexpr std::string_view GOTSHELLBOX = "Picked up a box of shotgun shells.";
    constexpr std::string_view GOTBACKPACK = "Picked up a backpack full of ammo!";

    constexpr std::string_view GOTBFG9000 = "You got the BFG9000!  Oh, yes.";
    constexpr std::string_view GOTCHAINGUN = "You got the chaingun!";
    constexpr std::string_view GOTCHAINSAW = "A chainsaw!  Find some meat!";
    constexpr std::string_view GOTLAUNCHER = "You got the rocket launcher!";
    constexpr std::string_view GOTPLASMA = "You got the plasma gun!";
    constexpr std::string_view GOTSHOTGUN = "You got the shotgun!";
    constexpr std::string_view GOTSHOTGUN2 = "You got the super shotgun!";

    //
    // P_Doors.C
    //
    constexpr std::string_view PD_BLUEO = "You need a blue key to activate this object";
    constexpr std::string_view PD_REDO = "You need a red key to activate this object";
    constexpr std::string_view PD_YELLOWO = "You need a yellow key to activate this object";
    constexpr std::string_view PD_BLUEK = "You need a blue key to open this door";
    constexpr std::string_view PD_REDK = "You need a red key to open this door";
    constexpr std::string_view PD_YELLOWK = "You need a yellow key to open this door";

    //
    //	G_game.C
    //
    constexpr std::string_view GGSAVED = "game saved.";

    //
    //	HU_stuff.C
    //
    constexpr std::string_view HUSTR_MSGU = "[Message unsent]";

    constexpr std::string_view HUSTR_E1M1 = "E1M1: Hangar";
    constexpr std::string_view HUSTR_E1M2 = "E1M2: Nuclear Plant";
    constexpr std::string_view HUSTR_E1M3 = "E1M3: Toxin Refinery";
    constexpr std::string_view HUSTR_E1M4 = "E1M4: Command Control";
    constexpr std::string_view HUSTR_E1M5 = "E1M5: Phobos Lab";
    constexpr std::string_view HUSTR_E1M6 = "E1M6: Central Processing";
    constexpr std::string_view HUSTR_E1M7 = "E1M7: Computer Station";
    constexpr std::string_view HUSTR_E1M8 = "E1M8: Phobos Anomaly";
    constexpr std::string_view HUSTR_E1M9 = "E1M9: Military Base";

    constexpr std::string_view HUSTR_E2M1 = "E2M1: Deimos Anomaly";
    constexpr std::string_view HUSTR_E2M2 = "E2M2: Containment Area";
    constexpr std::string_view HUSTR_E2M3 = "E2M3: Refinery";
    constexpr std::string_view HUSTR_E2M4 = "E2M4: Deimos Lab";
    constexpr std::string_view HUSTR_E2M5 = "E2M5: Command Center";
    constexpr std::string_view HUSTR_E2M6 = "E2M6: Halls of the Damned";
    constexpr std::string_view HUSTR_E2M7 = "E2M7: Spawning Vats";
    constexpr std::string_view HUSTR_E2M8 = "E2M8: Tower of Babel";
    constexpr std::string_view HUSTR_E2M9 = "E2M9: Fortress of Mystery";

    constexpr std::string_view HUSTR_E3M1 = "E3M1: Hell Keep";
    constexpr std::string_view HUSTR_E3M2 = "E3M2: Slough of Despair";
    constexpr std::string_view HUSTR_E3M3 = "E3M3: Pandemonium";
    constexpr std::string_view HUSTR_E3M4 = "E3M4: House of Pain";
    constexpr std::string_view HUSTR_E3M5 = "E3M5: Unholy Cathedral";
    constexpr std::string_view HUSTR_E3M6 = "E3M6: Mt. Erebus";
    constexpr std::string_view HUSTR_E3M7 = "E3M7: Limbo";
    constexpr std::string_view HUSTR_E3M8 = "E3M8: Dis";
    constexpr std::string_view HUSTR_E3M9 = "E3M9: Warrens";

    constexpr std::string_view HUSTR_E4M1 = "E4M1: Hell Beneath";
    constexpr std::string_view HUSTR_E4M2 = "E4M2: Perfect Hatred";
    constexpr std::string_view HUSTR_E4M3 = "E4M3: Sever The Wicked";
    constexpr std::string_view HUSTR_E4M4 = "E4M4: Unruly Evil";
    constexpr std::string_view HUSTR_E4M5 = "E4M5: They Will Repent";
    constexpr std::string_view HUSTR_E4M6 = "E4M6: Against Thee Wickedly";
    constexpr std::string_view HUSTR_E4M7 = "E4M7: And Hell Followed";
    constexpr std::string_view HUSTR_E4M8 = "E4M8: Unto The Cruel";
    constexpr std::string_view HUSTR_E4M9 = "E4M9: Fear";

    constexpr std::string_view HUSTR_1 = "level 1: entryway";
    constexpr std::string_view HUSTR_2 = "level 2: underhalls";
    constexpr std::string_view HUSTR_3 = "level 3: the gantlet";
    constexpr std::string_view HUSTR_4 = "level 4: the focus";
    constexpr std::string_view HUSTR_5 = "level 5: the waste tunnels";
    constexpr std::string_view HUSTR_6 = "level 6: the crusher";
    constexpr std::string_view HUSTR_7 = "level 7: dead simple";
    constexpr std::string_view HUSTR_8 = "level 8: tricks and traps";
    constexpr std::string_view HUSTR_9 = "level 9: the pit";
    constexpr std::string_view HUSTR_10 = "level 10: refueling base";
    constexpr std::string_view HUSTR_11 = "level 11: 'o' of destruction!";

    constexpr std::string_view HUSTR_12 = "level 12: the factory";
    constexpr std::string_view HUSTR_13 = "level 13: downtown";
    constexpr std::string_view HUSTR_14 = "level 14: the inmost dens";
    constexpr std::string_view HUSTR_15 = "level 15: industrial zone";
    constexpr std::string_view HUSTR_16 = "level 16: suburbs";
    constexpr std::string_view HUSTR_17 = "level 17: tenements";
    constexpr std::string_view HUSTR_18 = "level 18: the courtyard";
    constexpr std::string_view HUSTR_19 = "level 19: the citadel";
    constexpr std::string_view HUSTR_20 = "level 20: gotcha!";

    constexpr std::string_view HUSTR_21 = "level 21: nirvana";
    constexpr std::string_view HUSTR_22 = "level 22: the catacombs";
    constexpr std::string_view HUSTR_23 = "level 23: barrels o' fun";
    constexpr std::string_view HUSTR_24 = "level 24: the chasm";
    constexpr std::string_view HUSTR_25 = "level 25: bloodfalls";
    constexpr std::string_view HUSTR_26 = "level 26: the abandoned mines";
    constexpr std::string_view HUSTR_27 = "level 27: monster condo";
    constexpr std::string_view HUSTR_28 = "level 28: the spirit world";
    constexpr std::string_view HUSTR_29 = "level 29: the living end";
    constexpr std::string_view HUSTR_30 = "level 30: icon of sin";

    constexpr std::string_view HUSTR_31 = "level 31: wolfenstein";
    constexpr std::string_view HUSTR_32 = "level 32: grosse";

    constexpr std::string_view PHUSTR_1 = "level 1: congo";
    constexpr std::string_view PHUSTR_2 = "level 2: well of souls";
    constexpr std::string_view PHUSTR_3 = "level 3: aztec";
    constexpr std::string_view PHUSTR_4 = "level 4: caged";
    constexpr std::string_view PHUSTR_5 = "level 5: ghost town";
    constexpr std::string_view PHUSTR_6 = "level 6: baron's lair";
    constexpr std::string_view PHUSTR_7 = "level 7: caughtyard";
    constexpr std::string_view PHUSTR_8 = "level 8: realm";
    constexpr std::string_view PHUSTR_9 = "level 9: abattoire";
    constexpr std::string_view PHUSTR_10 = "level 10: onslaught";
    constexpr std::string_view PHUSTR_11 = "level 11: hunted";

    constexpr std::string_view PHUSTR_12 = "level 12: speed";
    constexpr std::string_view PHUSTR_13 = "level 13: the crypt";
    constexpr std::string_view PHUSTR_14 = "level 14: genesis";
    constexpr std::string_view PHUSTR_15 = "level 15: the twilight";
    constexpr std::string_view PHUSTR_16 = "level 16: the omen";
    constexpr std::string_view PHUSTR_17 = "level 17: compound";
    constexpr std::string_view PHUSTR_18 = "level 18: neurosphere";
    constexpr std::string_view PHUSTR_19 = "level 19: nme";
    constexpr std::string_view PHUSTR_20 = "level 20: the death domain";

    constexpr std::string_view PHUSTR_21 = "level 21: slayer";
    constexpr std::string_view PHUSTR_22 = "level 22: impossible mission";
    constexpr std::string_view PHUSTR_23 = "level 23: tombstone";
    constexpr std::string_view PHUSTR_24 = "level 24: the final frontier";
    constexpr std::string_view PHUSTR_25 = "level 25: the temple of darkness";
    constexpr std::string_view PHUSTR_26 = "level 26: bunker";
    constexpr std::string_view PHUSTR_27 = "level 27: anti-christ";
    constexpr std::string_view PHUSTR_28 = "level 28: the sewers";
    constexpr std::string_view PHUSTR_29 = "level 29: odyssey of noises";
    constexpr std::string_view PHUSTR_30 = "level 30: the gateway of hell";

    constexpr std::string_view PHUSTR_31 = "level 31: cyberden";
    constexpr std::string_view PHUSTR_32 = "level 32: go 2 it";

    constexpr std::string_view THUSTR_1 = "level 1: system control";
    constexpr std::string_view THUSTR_2 = "level 2: human bbq";
    constexpr std::string_view THUSTR_3 = "level 3: power control";
    constexpr std::string_view THUSTR_4 = "level 4: wormhole";
    constexpr std::string_view THUSTR_5 = "level 5: hanger";
    constexpr std::string_view THUSTR_6 = "level 6: open season";
    constexpr std::string_view THUSTR_7 = "level 7: prison";
    constexpr std::string_view THUSTR_8 = "level 8: metal";
    constexpr std::string_view THUSTR_9 = "level 9: stronghold";
    constexpr std::string_view THUSTR_10 = "level 10: redemption";
    constexpr std::string_view THUSTR_11 = "level 11: storage facility";

    constexpr std::string_view THUSTR_12 = "level 12: crater";
    constexpr std::string_view THUSTR_13 = "level 13: nukage processing";
    constexpr std::string_view THUSTR_14 = "level 14: steel works";
    constexpr std::string_view THUSTR_15 = "level 15: dead zone";
    constexpr std::string_view THUSTR_16 = "level 16: deepest reaches";
    constexpr std::string_view THUSTR_17 = "level 17: processing area";
    constexpr std::string_view THUSTR_18 = "level 18: mill";
    constexpr std::string_view THUSTR_19 = "level 19: shipping/respawning";
    constexpr std::string_view THUSTR_20 = "level 20: central processing";

    constexpr std::string_view THUSTR_21 = "level 21: administration center";
    constexpr std::string_view THUSTR_22 = "level 22: habitat";
    constexpr std::string_view THUSTR_23 = "level 23: lunar mining project";
    constexpr std::string_view THUSTR_24 = "level 24: quarry";
    constexpr std::string_view THUSTR_25 = "level 25: baron's den";
    constexpr std::string_view THUSTR_26 = "level 26: ballistyx";
    constexpr std::string_view THUSTR_27 = "level 27: mount pain";
    constexpr std::string_view THUSTR_28 = "level 28: heck";
    constexpr std::string_view THUSTR_29 = "level 29: river styx";
    constexpr std::string_view THUSTR_30 = "level 30: last call";

    constexpr std::string_view THUSTR_31 = "level 31: pharaoh";
    constexpr std::string_view THUSTR_32 = "level 32: caribbean";

    constexpr std::string_view HUSTR_CHATMACRO1 = "I'm ready to kick butt!";
    constexpr std::string_view HUSTR_CHATMACRO2 = "I'm OK.";
    constexpr std::string_view HUSTR_CHATMACRO3 = "I'm not looking too good!";
    constexpr std::string_view HUSTR_CHATMACRO4 = "Help!";
    constexpr std::string_view HUSTR_CHATMACRO5 = "You suck!";
    constexpr std::string_view HUSTR_CHATMACRO6 = "Next time, scumbag...";
    constexpr std::string_view HUSTR_CHATMACRO7 = "Come here!";
    constexpr std::string_view HUSTR_CHATMACRO8 = "I'll take care of it.";
    constexpr std::string_view HUSTR_CHATMACRO9 = "Yes";
    constexpr std::string_view HUSTR_CHATMACRO0 = "No";

    constexpr std::string_view HUSTR_TALKTOSELF1 = "You mumble to yourself";
    constexpr std::string_view HUSTR_TALKTOSELF2 = "Who's there?";
    constexpr std::string_view HUSTR_TALKTOSELF3 = "You scare yourself";
    constexpr std::string_view HUSTR_TALKTOSELF4 = "You start to rave";
    constexpr std::string_view HUSTR_TALKTOSELF5 = "You've lost it...";

    constexpr std::string_view HUSTR_MESSAGESENT = "[Message Sent]";

    // The following should NOT be changed unless it seems
    // just AWFULLY necessary

    constexpr std::string_view HUSTR_PLRGREEN	= "Green: ";
    constexpr std::string_view HUSTR_PLRINDIGO	= "Indigo: ";
    constexpr std::string_view HUSTR_PLRBROWN	= "Brown: ";
    constexpr std::string_view HUSTR_PLRRED		= "Red: ";

    constexpr std::string_view HUSTR_KEYGREEN	= "g";
    constexpr std::string_view HUSTR_KEYINDIGO	= "i";
    constexpr std::string_view HUSTR_KEYBROWN	= "b";
    constexpr std::string_view HUSTR_KEYRED	= "r";

    //
    //	AM_map.C
    //

    constexpr std::string_view AMSTR_FOLLOWON = "Follow Mode ON";
    constexpr std::string_view AMSTR_FOLLOWOFF = "Follow Mode OFF";

    constexpr std::string_view AMSTR_GRIDON = "Grid ON";
    constexpr std::string_view AMSTR_GRIDOFF = "Grid OFF";

    constexpr std::string_view AMSTR_MARKEDSPOT = "Marked Spot";
    constexpr std::string_view AMSTR_MARKSCLEARED = "All Marks Cleared";

    //
    //	ST_stuff.C
    //

    constexpr std::string_view STSTR_MUS = "Music Change";
    constexpr std::string_view STSTR_NOMUS = "IMPOSSIBLE SELECTION";
    constexpr std::string_view STSTR_DQDON = "Degreelessness Mode On";
    constexpr std::string_view STSTR_DQDOFF = "Degreelessness Mode Off";

    constexpr std::string_view STSTR_KFAADDED = "Very Happy Ammo Added";
    constexpr std::string_view STSTR_FAADDED = "Ammo (no keys) Added";

    constexpr std::string_view STSTR_NCON = "No Clipping Mode ON";
    constexpr std::string_view STSTR_NCOFF = "No Clipping Mode OFF";

    constexpr std::string_view STSTR_BEHOLD = "inVuln, Str, Inviso, Rad, Allmap, or Lite-amp";
    constexpr std::string_view STSTR_BEHOLDX = "Power-up Toggled";

    constexpr std::string_view STSTR_CHOPPERS = "... doesn't suck - GM";
    constexpr std::string_view STSTR_CLEV = "Changing Level...";

    //
    // Character cast strings F_FINALE.C
    //
    constexpr std::string_view CC_ZOMBIE = "ZOMBIEMAN";
    constexpr std::string_view CC_SHOTGUN = "SHOTGUN GUY";
    constexpr std::string_view CC_HEAVY = "HEAVY WEAPON DUDE";
    constexpr std::string_view CC_IMP = "IMP";
    constexpr std::string_view CC_DEMON = "DEMON";
    constexpr std::string_view CC_LOST = "LOST SOUL";
    constexpr std::string_view CC_CACO = "CACODEMON";
    constexpr std::string_view CC_HELL = "HELL KNIGHT";
    constexpr std::string_view CC_BARON = "BARON OF HELL";
    constexpr std::string_view CC_ARACH = "ARACHNOTRON";
    constexpr std::string_view CC_PAIN = "PAIN ELEMENTAL";
    constexpr std::string_view CC_REVEN = "REVENANT";
    constexpr std::string_view CC_MANCU = "MANCUBUS";
    constexpr std::string_view CC_ARCH = "ARCH-VILE";
    constexpr std::string_view CC_SPIDER = "THE SPIDER MASTERMIND";
    constexpr std::string_view CC_CYBER = "THE CYBERDEMON";
    constexpr std::string_view CC_HERO = "OUR HERO";

    struct LevelMessages {
        static constexpr std::string_view E1TEXT =
                "Once you beat the big badasses and\n"
                "clean out the moon base you're supposed\n"
                "to win, aren't you? Aren't you? Where's\n"
                "your fat reward and ticket home? What\n"
                "the hell is this? It's not supposed to\n"
                "end this way!\n"
                "\n"
                "It stinks like rotten meat, but looks\n"
                "like the lost Deimos base.  Looks like\n"
                "you're stuck on The Shores of Hell.\n"
                "The only way out is through.\n"
                "\n"
                "To continue the DOOM experience, play\n"
                "The Shores of Hell and its amazing\n"
                "sequel, Inferno!\n";


        static constexpr std::string_view E2TEXT =
                "You've done it! The hideous cyber-\n"
                "demon lord that ruled the lost Deimos\n"
                "moon base has been slain and you\n"
                "are triumphant! But ... where are\n"
                "you? You clamber to the edge of the\n"
                "moon and look down to see the awful\n"
                "truth.\n"
                "\n"
                "Deimos floats above Hell itself!\n"
                "You've never heard of anyone escaping\n"
                "from Hell, but you'll make the bastards\n"
                "sorry they ever heard of you! Quickly,\n"
                "you rappel down to  the surface of\n"
                "Hell.\n"
                "\n"
                "Now, it's on to the final chapter of\n"\
        "DOOM! -- Inferno.";


        static constexpr std::string_view E3TEXT =
                "The loathsome spiderdemon that\n"\
        "masterminded the invasion of the moon\n"\
        "bases and caused so much death has had\n"\
        "its ass kicked for all time.\n"\
        "\n"\
        "A hidden doorway opens and you enter.\n"\
        "You've proven too tough for Hell to\n"\
        "contain, and now Hell at last plays\n"\
        "fair -- for you emerge from the door\n"\
        "to see the green fields of Earth!\n"\
        "Home at last.\n" \
        "\n"\
        "You wonder what's been happening on\n"\
        "Earth while you were battling evil\n"\
        "unleashed. It's good that no Hell-\n"\
        "spawn could have come through that\n"\
        "door with you ...";


        static constexpr std::string_view E4TEXT =
                "the spider mastermind must have sent forth\n"\
        "its legions of hellspawn before your\n"\
        "final confrontation with that terrible\n"\
        "beast from hell.  but you stepped forward\n"\
        "and brought forth eternal damnation and\n"\
        "suffering upon the horde as a true hero\n"\
        "would in the face of something so evil.\n"\
        "\n"\
        "besides, someone was gonna pay for what\n"\
        "happened to daisy, your pet rabbit.\n"\
        "\n"\
        "but now, you see spread before you more\n"\
        "potential pain and gibbitude as a nation\n"\
        "of demons run amok among our cities.\n"\
        "\n"\
        "next stop, hell on earth!";


        // after level 6, put this:

        static constexpr std::string_view C1TEXT =
                "YOU HAVE ENTERED DEEPLY INTO THE INFESTED\n" \
        "STARPORT. BUT SOMETHING IS WRONG. THE\n" \
        "MONSTERS HAVE BROUGHT THEIR OWN REALITY\n" \
        "WITH THEM, AND THE STARPORT'S TECHNOLOGY\n" \
        "IS BEING SUBVERTED BY THEIR PRESENCE.\n" \
        "\n"\
        "AHEAD, YOU SEE AN OUTPOST OF HELL, A\n" \
        "FORTIFIED ZONE. IF YOU CAN GET PAST IT,\n" \
        "YOU CAN PENETRATE INTO THE HAUNTED HEART\n" \
        "OF THE STARBASE AND FIND THE CONTROLLING\n" \
        "SWITCH WHICH HOLDS EARTH'S POPULATION\n" \
        "HOSTAGE.";

        // After level 11, put this:

        static constexpr std::string_view C2TEXT =
                "YOU HAVE WON! YOUR VICTORY HAS ENABLED\n" \
        "HUMANKIND TO EVACUATE EARTH AND ESCAPE\n"\
        "THE NIGHTMARE.  NOW YOU ARE THE ONLY\n"\
        "HUMAN LEFT ON THE FACE OF THE PLANET.\n"\
        "CANNIBAL MUTATIONS, CARNIVOROUS ALIENS,\n"\
        "AND EVIL SPIRITS ARE YOUR ONLY NEIGHBORS.\n"\
        "YOU SIT BACK AND WAIT FOR DEATH, CONTENT\n"\
        "THAT YOU HAVE SAVED YOUR SPECIES.\n"\
        "\n"\
        "BUT THEN, EARTH CONTROL BEAMS DOWN A\n"\
        "MESSAGE FROM SPACE: \"SENSORS HAVE LOCATED\n"\
        "THE SOURCE OF THE ALIEN INVASION. IF YOU\n"\
        "GO THERE, YOU MAY BE ABLE TO BLOCK THEIR\n"\
        "ENTRY.  THE ALIEN BASE IS IN THE HEART OF\n"\
        "YOUR OWN HOME CITY, NOT FAR FROM THE\n"\
        "STARPORT.\" SLOWLY AND PAINFULLY YOU GET\n"\
        "UP AND RETURN TO THE FRAY.";


        // After level 20, put this:

        static constexpr std::string_view C3TEXT =
        "YOU ARE AT THE CORRUPT HEART OF THE CITY,\n"\
        "SURROUNDED BY THE CORPSES OF YOUR ENEMIES.\n"\
        "YOU SEE NO WAY TO DESTROY THE CREATURES'\n"\
        "ENTRYWAY ON THIS SIDE, SO YOU CLENCH YOUR\n"\
        "TEETH AND PLUNGE THROUGH IT.\n"\
        "\n"\
        "THERE MUST BE A WAY TO CLOSE IT ON THE\n"\
        "OTHER SIDE. WHAT DO YOU CARE IF YOU'VE\n"\
        "GOT TO GO THROUGH HELL TO GET TO IT?";


        // After level 29, put this:

        static constexpr std::string_view C4TEXT =
                "THE HORRENDOUS VISAGE OF THE BIGGEST\n"\
        "DEMON YOU'VE EVER SEEN CRUMBLES BEFORE\n"\
        "YOU, AFTER YOU PUMP YOUR ROCKETS INTO\n"\
        "HIS EXPOSED BRAIN. THE MONSTER SHRIVELS\n"\
        "UP AND DIES, ITS THRASHING LIMBS\n"\
        "DEVASTATING UNTOLD MILES OF HELL'S\n"\
        "SURFACE.\n"\
        "\n"\
        "YOU'VE DONE IT. THE INVASION IS OVER.\n"\
        "EARTH IS SAVED. HELL IS A WRECK. YOU\n"\
        "WONDER WHERE BAD FOLKS WILL GO WHEN THEY\n"\
        "DIE, NOW. WIPING THE SWEAT FROM YOUR\n"\
        "FOREHEAD YOU BEGIN THE LONG TREK BACK\n"\
        "HOME. REBUILDING EARTH OUGHT TO BE A\n"\
        "LOT MORE FUN THAN RUINING IT WAS.\n";



        // Before level 31, put this:

        static constexpr std::string_view C5TEXT =
                "CONGRATULATIONS, YOU'VE FOUND THE SECRET\n"\
        "LEVEL! LOOKS LIKE IT'S BEEN BUILT BY\n"\
        "HUMANS, RATHER THAN DEMONS. YOU WONDER\n"\
        "WHO THE INMATES OF THIS CORNER OF HELL\n"\
        "WILL BE.";


        // Before level 32, put this:

        static constexpr std::string_view C6TEXT =
                "CONGRATULATIONS, YOU'VE FOUND THE\n"\
        "SUPER SECRET LEVEL!  YOU'D BETTER\n"\
        "BLAZE THROUGH THIS ONE!\n";


        // after map 06

        static constexpr std::string_view P1TEXT =
                "You gloat over the steaming carcass of the\n"\
        "Guardian.  With its death, you've wrested\n"\
        "the Accelerator from the stinking claws\n"\
        "of Hell.  You relax and glance around the\n"\
        "room.  Damn!  There was supposed to be at\n"\
        "least one working prototype, but you can't\n"\
        "see it. The demons must have taken it.\n"\
        "\n"\
        "You must find the prototype, or all your\n"\
        "struggles will have been wasted. Keep\n"\
        "moving, keep fighting, keep killing.\n"\
        "Oh yes, keep living, too.";


        // after map 11

        static constexpr std::string_view P2TEXT =
                "Even the deadly Arch-Vile labyrinth could\n"\
        "not stop you, and you've gotten to the\n"\
        "prototype Accelerator which is soon\n"\
        "efficiently and permanently deactivated.\n"\
        "\n"\
        "You're good at that kind of thing.";


        // after map 20

        static constexpr std::string_view P3TEXT =
                "You've bashed and battered your way into\n"\
        "the heart of the devil-hive.  Time for a\n"\
        "Search-and-Destroy mission, aimed at the\n"\
        "Gatekeeper, whose foul offspring is\n"\
        "cascading to Earth.  Yeah, he's bad. But\n"\
        "you know who's worse!\n"\
        "\n"\
        "Grinning evilly, you check your gear, and\n"\
        "get ready to give the bastard a little Hell\n"\
        "of your own making!";

        // after map 30

        static constexpr std::string_view P4TEXT =
                "The Gatekeeper's evil face is splattered\n"\
        "all over the place.  As its tattered corpse\n"\
        "collapses, an inverted Gate forms and\n"\
        "sucks down the shards of the last\n"\
        "prototype Accelerator, not to mention the\n"\
        "few remaining demons.  You're done. Hell\n"\
        "has gone back to pounding bad dead folks \n"\
        "instead of good live ones.  Remember to\n"\
        "tell your grandkids to put a rocket\n"\
        "launcher in your coffin. If you go to Hell\n"\
        "when you die, you'll need it for some\n"\
        "final cleaning-up ...";

        // before map 31

        static constexpr std::string_view P5TEXT =
                "You've found the second-hardest level we\n"\
        "got. Hope you have a saved game a level or\n"\
        "two previous.  If not, be prepared to die\n"\
        "aplenty. For master marines only.";

        // before map 32

        static constexpr std::string_view P6TEXT =
                "Betcha wondered just what WAS the hardest\n"\
        "level we had ready for ya?  Now you know.\n"\
        "No one gets out alive.";


        static constexpr std::string_view T1TEXT =
                "You've fought your way out of the infested\n"\
        "experimental labs.   It seems that UAC has\n"\
        "once again gulped it down.  With their\n"\
        "high turnover, it must be hard for poor\n"\
        "old UAC to buy corporate health insurance\n"\
        "nowadays..\n"\
        "\n"\
        "Ahead lies the military complex, now\n"\
        "swarming with diseased horrors hot to get\n"\
        "their teeth into you. With luck, the\n"\
        "complex still has some warlike ordnance\n"\
        "laying around.";


        static constexpr std::string_view T2TEXT =
        "You hear the grinding of heavy machinery\n"\
        "ahead.  You sure hope they're not stamping\n"\
        "out new hellspawn, but you're ready to\n"\
        "ream out a whole herd if you have to.\n"\
        "They might be planning a blood feast, but\n"\
        "you feel about as mean as two thousand\n"\
        "maniacs packed into one mad killer.\n"\
        "\n"\
        "You don't plan to go down easy.";


        static constexpr std::string_view T3TEXT =
                "The vista opening ahead looks real damn\n"\
        "familiar. Smells familiar, too -- like\n"\
        "fried excrement. You didn't like this\n"\
        "place before, and you sure as hell ain't\n"\
        "planning to like it now. The more you\n"\
        "brood on it, the madder you get.\n"\
        "Hefting your gun, an evil grin trickles\n"\
        "onto your face. Time to take some names.";

        static constexpr std::string_view T4TEXT =
                "Suddenly, all is silent, from one horizon\n"\
        "to the other. The agonizing echo of Hell\n"\
        "fades away, the nightmare sky turns to\n"\
        "blue, the heaps of monster corpses start \n"\
        "to evaporate along with the evil stench \n"\
        "that filled the air. Jeeze, maybe you've\n"\
        "done it. Have you really won?\n"\
        "\n"\
        "Something rumbles in the distance.\n"\
        "A blue light begins to glow inside the\n"\
        "ruined skull of the demon-spitter.";


        static constexpr std::string_view T5TEXT =
                "What now? Looks totally different. Kind\n"\
        "of like King Tut's condo. Well,\n"\
        "whatever's here can't be any worse\n"\
        "than usual. Can it?  Or maybe it's best\n"\
        "to let sleeping gods lie..";


        static constexpr std::string_view T6TEXT =
                "Time for a vacation. You've burst the\n"\
        "bowels of hell and by golly you're ready\n"\
        "for a break. You mutter to yourself,\n"\
        "Maybe someone else can kick Hell's ass\n"\
        "next time around. Ahead lies a quiet town,\n"\
        "with peaceful flowing water, quaint\n"\
        "buildings, and presumably no Hellspawn.\n"\
        "\n"\
        "As you step off the transport, you hear\n"\
        "the stomp of a cyberdemon's iron shoe.";
    };
}