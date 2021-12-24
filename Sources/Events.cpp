#include "Events.hpp"
#include "Hacks.hpp"

bool events::HandleKeyboard(void) {
    
    // Handle Keyboard Events
    if (GetAsyncKeyState(VK_END)) {
        return true;
    }

    return false;
}
