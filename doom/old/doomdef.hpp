#pragma once

#include <cstdio>
#include <cstring>

constexpr int VERSION = 110;

enum class GameMode {
    shareware,    // DOOM 1 shareware, E1, M9
    registered,   // DOOM 1 registered, E3, M27
    commercial,   // DOOM 2 retail, E1 M34
    retail,       // DOOM 1 retail, E4, M36
    indetermined  // Well, no IWAD found.
};

enum class GameMission {
    doom,     // DOOM 1
    doom2,    // DOOM 2
    pack_tnt, // TNT mission pack
    pack_plut,// Plutonia pack
    none
};

// Identify language to use, software localization.
enum class Language {
    english,
//    french, English only currently
//    german,
    unknown
};

constexpr int BASE_WIDTH = 320;
constexpr int SCREEN_MUL = 1;
constexpr double INV_ASPECT_RATIO = 0.625;

constexpr int SCREENWIDTH = SCREEN_MUL * BASE_WIDTH;
constexpr int SCREENHEIGHT = static_cast<int>(SCREEN_MUL * BASE_WIDTH * INV_ASPECT_RATIO);

// The maximum number of players, multiplayer/networking.
constexpr int MAXPLAYERS = 4;

// State updates, number of tics / second.
constexpr int TICRATE = 35;

// The current state of the game.
enum class GameState {
    level,
    intermission,
    finale,
    demoscreen
};

// Difficulty/skill settings/filters.
enum class Skill {
    baby,
    easy,
    medium,
    hard,
    nightmare
};

// Key cards.
enum class Card {
    bluecard,
    yellowcard,
    redcard,
    blueskull,
    yellowskull,
    redskull,

    NUMCARDS
};

// The defined weapons.
enum class WeaponType {
    fist,
    pistol,
    shotgun,
    chaingun,
    missile,
    plasma,
    bfg,
    chainsaw,
    supershotgun,

    NUMWEAPONS,

    nochange // No pending weapon change.
};

// Ammunition types defined.
enum class AmmoType {
    clip,    // Pistol / chaingun ammo.
    shell,   // Shotgun / double barreled shotgun.
    cell,    // Plasma rifle, BFG.
    misl,    // Missile launcher.
    NUMAMMO,
    noammo   // Unlimited for chainsaw / fist.
};

// Power up artifacts.
enum class PowerType {
    invulnerability,
    strength,
    invisibility,
    ironfeet,
    allmap,
    infrared,
    NUMPOWERS
};

// Power up durations, how many seconds till expiration, assuming TICRATE is 35 ticks/second.
enum class PowerDuration {
    invulntics = (30*TICRATE),
    invistics = (60*TICRATE),
    infratics = (120*TICRATE),
    irontics = (60*TICRATE)
};

// DOOM keyboard definition.
constexpr int KEY_RIGHTARROW = 0xae;
constexpr int KEY_LEFTARROW = 0xac;
constexpr int KEY_UPARROW = 0xad;
constexpr int KEY_DOWNARROW = 0xaf;
constexpr int KEY_ESCAPE = 27;
constexpr int KEY_ENTER = 13;
constexpr int KEY_TAB = 9;
constexpr int KEY_F1 =	(0x80+0x3b);
constexpr int KEY_F2 =	(0x80+0x3c);
constexpr int KEY_F3 =	(0x80+0x3d);
constexpr int KEY_F4 =	(0x80+0x3e);
constexpr int KEY_F5 =	(0x80+0x3f);
constexpr int KEY_F6 =	(0x80+0x40);
constexpr int KEY_F7 =	(0x80+0x41);
constexpr int KEY_F8 =	(0x80+0x42);
constexpr int KEY_F9 =	(0x80+0x43);
constexpr int KEY_F10 = (0x80+0x44);
constexpr int KEY_F11 =	(0x80+0x57);
constexpr int KEY_F12 =	(0x80+0x58);

constexpr int KEY_BACKSPACE = 127;
constexpr int KEY_PAUSE = 0xff;

constexpr int KEY_EQUALS = 0x3d;
constexpr int KEY_MINUS = 0x2d;

constexpr int KEY_RSHIFT = (0x80+0x36);
constexpr int KEY_RCTRL = (0x80+0x1d);
constexpr int KEY_RALT = (0x80+0x38);

constexpr int KEY_LALT = KEY_RALT;


// DOOM basic types (boolean),
//  and max/min values.
//#include "doomtype.h"

// Fixed point.
//#include "m_fixed.h"

// Endianess handling.
//#include "m_swap.h"


// Binary Angles, sine/cosine/atan lookups.
//#include "tables.h"

// Event type.
//#include "d_event.h"

// Game function, skills.
//#include "g_game.h"

// All external data is defined here.
//#include "doomdata.h"

// All important printed strings.
// Language selection (message strings).
//#include "dstrings.h"

// Player is a special actor.
//struct player_s;


//#include "d_items.h"
//#include "d_player.h"
//#include "p_mobj.h"
//#include "d_net.h"

// PLAY
//#include "p_tick.h"

// Header, generated by sound utility.
// The utility was written by Dave Taylor.
//#include "sounds.h"