#pragma once

#include <iostream>
#include "doomtype.hpp"

namespace Doom {
    enum class EvType {
        KeyDown,
        KeyUp,
        Mouse,
        Joystick
    };

    struct Event {
        EvType type;
        int data1; // keys / mouse/joystick buttons
        int data2; // mouse/joystick x move
        int data3; // mouse/joystick y move
    };

    enum class GameAction {
        Nothing,
        LoadLevel,
        NewGame,
        LoadGame,
        SaveGame,
        PlayDemo,
        Completed,
        Victory,
        WorldDone,
        Screenshot
    };

    enum ButtonCode {
        Attack       = 1,    // Press "Fire"
        Use          = 2,    // Use button, to open doors, activate switches
        Special      = 128,  // Flag: game events, not really buttons
        SpecialMask  = 3,
        Change       = 4,    // Flag, weapon change pending
        WeaponMask   = (8+16+32),
        WeaponShift  = 3,
        Pause        = 1,    // Pause the game
        SaveGame     = 2,    // Save the game at each console
        SaveMask     = (4+8+16),
        SaveShift    = 2
    };

    class EventQueue {
    public:
        static const int MaxEvents = 64;

    private:
        Event events[MaxEvents];
        int eventHead = 0;
        int eventTail = 0;

    public:
        void PostEvent(const Event& event);
        bool GetEvent(Event& event);
    };

    void EventQueue::PostEvent(const Event& event) {
        int nextEventHead = (eventHead + 1) % MaxEvents;
        if (nextEventHead != eventTail) {
            events[eventHead] = event;
            eventHead = nextEventHead;
        } else {
            std::cerr << "Event queue is full. Dropping event.";
        }
    }

    bool EventQueue::GetEvent(Event& event) {
        if (eventHead != eventTail) {
            event = events[eventTail];
            eventTail = (eventTail + 1) % MaxEvents;
            return true;
        }
        return false;
    }


    extern GameAction gameAction;
}