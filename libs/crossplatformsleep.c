#ifndef __CSLEEP_INCLUDED__
#define __CSLEEP_INCLUDED__

#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

void crossPlatformSleep(int milliseconds) {
#ifdef _WIN32
    Sleep(milliseconds);
#else
    usleep(milliseconds * 1000); // usleep uses microseconds
#endif
}

#endif