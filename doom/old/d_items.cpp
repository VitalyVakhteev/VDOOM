#pragma once

#include <array>
#include "info.hpp"

namespace Doom {

    enum class AmmoType {
        NoAmmo,
        Clip,
        Shell,
        Misl,
        Cell
    };

    class WeaponInfo {
    public:
        // Use GameState instead of int
        AmmoType ammoType;
        GameState upState;
        GameState downState;
        GameState readyState;
        GameState atkState;
        GameState flashState;

        WeaponInfo(AmmoType ammo, GameState up, GameState down, GameState ready, GameState atk, GameState flash)
                : ammoType(ammo), upState(up), downState(down), readyState(ready), atkState(atk), flashState(flash) {}
    };

    const std::array<WeaponInfo, 9> weaponInfo = {{
        {AmmoType::NoAmmo, GameState::S_PUNCHUP, GameState::S_PUNCHDOWN, GameState::S_PUNCH, GameState::S_PUNCH1, GameState::S_NULL},       // Fist
        {AmmoType::Clip, GameState::S_PISTOLUP, GameState::S_PISTOLDOWN, GameState::S_PISTOL, GameState::S_PISTOL1, GameState::S_PISTOLFLASH}, // Pistol
        {AmmoType::Shell, GameState::S_SGUNUP, GameState::S_SGUNDOWN, GameState::S_SGUN, GameState::S_SGUN1, GameState::S_SGUNFLASH1},        // Shotgun
        {AmmoType::Clip, GameState::S_CHAINUP, GameState::S_CHAINDOWN, GameState::S_CHAIN, GameState::S_CHAIN1, GameState::S_CHAINFLASH1},    // Chaingun
        {AmmoType::Misl, GameState::S_MISSILEUP, GameState::S_MISSILEDOWN, GameState::S_MISSILE, GameState::S_MISSILE1, GameState::S_MISSILEFLASH1}, // Missile Launcher
        {AmmoType::Cell, GameState::S_PLASMAUP, GameState::S_PLASMADOWN, GameState::S_PLASMA, GameState::S_PLASMA1, GameState::S_PLASMAFLASH1},  // Plasma Rifle
        {AmmoType::Cell, GameState::S_BFGUP, GameState::S_BFGDOWN, GameState::S_BFG, GameState::S_BFG1, GameState::S_BFGFLASH1},            // BFG 9000
        {AmmoType::NoAmmo, GameState::S_SAWUP, GameState::S_SAWDOWN, GameState::S_SAW, GameState::S_SAW1, GameState::S_NULL},               // Chainsaw
        {AmmoType::Shell, GameState::S_DSGUNUP, GameState::S_DSGUNDOWN, GameState::S_DSGUN, GameState::S_DSGUN1, GameState::S_DSGUNFLASH1}  // Super Shotgun
    }};

}