#pragma once

#ifdef _WIN32
#include <cstdlib>
#endif

inline void setup()
{
#ifdef _WIN32
    system("chcp 65001 > nul");
#endif
}

inline void clean()
{
#ifdef _WIN32
    system("cls");
#endif

#if defined(__linux__) || defined(__APPLE__)
    system("clear");
#endif
}
