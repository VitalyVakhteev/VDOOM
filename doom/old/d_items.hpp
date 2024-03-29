#pragma once

#include <array>
#include "doomdef.hpp"

namespace Doom {

    enum class AmmoType {
        NoAmmo,
        Clip,
        Shell,
        Misl,
        Cell
    };

    enum class WeaponState {
        UpState,
        DownState,
        ReadyState,
        AtkState,
        FlashState
    };

    struct WeaponInfo {
        AmmoType ammoType;
        WeaponState upState;
        WeaponState downState;
        WeaponState readyState;
        WeaponState atkState;
        WeaponState flashState;

        WeaponInfo(AmmoType ammo, WeaponState up, WeaponState down, WeaponState ready, WeaponState atk, WeaponState flash)
                : ammoType(ammo), upState(up), downState(down), readyState(ready), atkState(atk), flashState(flash) {}
    };

    extern const std::array<WeaponInfo, static_cast<size_t>(WeaponType::NUMWEAPONS)> weaponInfo;

}