#pragma once

#include <functional>
#include <utility>

namespace Doom {
    // For C++, we can use the std::function to handle function pointers more cleanly.
    using ActionFuncV = std::function<void()>;
    using ActionFuncP1 = std::function<void(void*)>;
    using ActionFuncP2 = std::function<void(void*, void*)>;

    // The actionf_t union in the original can be swapped with a std::variant in C++ to
    // safely store one of several types. However, if the types are all
    // std::function with different signatures, it might be simpler just to have
    // separate members or use a more specific design depending on usage context.
    // For simplicity, the structure is defined to hold any of the function types.
    // Adjustments may be needed based on specific usage patterns in the game.

    struct ActionFunc {
        ActionFuncV acv;
        ActionFuncP1 acp1;
        ActionFuncP2 acp2;

        explicit ActionFunc(ActionFuncV func) : acv(std::move(func)) {}
        explicit ActionFunc(ActionFuncP1 func) : acp1(std::move(func)) {}
        explicit ActionFunc(ActionFuncP2 func) : acp2(std::move(func)) {}

        ActionFunc() = default;
    };

    // In C++, we can define the think_t type as an ActionFunc, which can represent any action function type.
    using ThinkFunc = ActionFunc;

    // The thinker_s struct will then become a class with public members for accessibility.
    class Thinker {
    public:
        Thinker* prev;
        Thinker* next;
        ThinkFunc function;

        Thinker() : prev(nullptr), next(nullptr), function() {}
    };
}