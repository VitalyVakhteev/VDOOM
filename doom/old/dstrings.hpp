#pragma once

#include <string>
#include <array>

// English only currently
#include "d_english.hpp"

namespace Doom {
    constexpr int NUM_QUITMESSAGES = 22;
    constexpr char SAVEGAMENAME[] = "doomsav";
    constexpr char DEVMAPS[] = "devmaps";
    constexpr char DEVDATA[] = "devdata";

    extern const std::array<std::string, NUM_QUITMESSAGES> endmsg;
}