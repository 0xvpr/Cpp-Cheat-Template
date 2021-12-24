#ifndef MEM_HPP
#define MEM_HPP

#ifndef WIN32_LEAN_AND_MEAN
#   define WIN32_LEAN_AND_MEAN
#endif // WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <cstdint>

namespace memory {

/**
 * Find Dynamic Memory Address of an embedded process.
 *
 * @param: uintptr_t ptr, unsigned offsets[], size_t size
 * @return: uintptr_t
**/
uintptr_t FindDynamicAddress(uintptr_t ptr, unsigned offsets[], size_t size);

/**
 * Byte replacement from source to destination.
 *
 * @param: char* destination, char* source, size_t size
 * @return: void
**/
bool Patch(char* dst, char* src, size_t size);

/**
 * Hooks into a function and detours the target function to another function
 *
 * @param: void* targetFunc, void* myFunc, size_t size
 * @return: bool
**/
bool Detour(void* targetFunc, void* myFunc, size_t size);

/**
 * Hooks into a function and detours the target function to another function, then jumps back
 *
 * @param: char* src, char* dst, size_t size
 * @return: char*
**/
char* TrampHook(char* src, char* dst, size_t size);

}

#endif // MEM_HPP
