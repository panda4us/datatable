#ifdef NDEBUG
    // Macro NDEBUG, if present, disables all assert statements. Unfortunately,
    // Python turns on this macro by default, so we need to turn it off
    // explicitly.
    #ifdef NONDEBUG
        #undef NDEBUG
    #endif
#endif
#include <assert.h>  // assert, static_assert

#ifndef static_assert
    // Some system libraries fail to define this macro :( At least 3 people have
    // reported having this problem on the first day of testing, so it's not
    // that uncommon.
    // In this case we just disable these checks.
    #define static_assert(cond)
#endif
