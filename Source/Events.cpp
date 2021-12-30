#include "Events.hpp"
#include "Hacks.hpp"

bool bCheatsEnabled = false;

bool events::HandleKeyboard(void) {
    
    if (GetAsyncKeyState(VK_TAB) & 1) {
        bCheatsEnabled = !bCheatsEnabled;
    }

    if (GetAsyncKeyState(VK_END)) {
        return true;
    }

    return false;
}
