#include "Utility.h"


int detectOS() {
    #ifdef _WIN32
        return 1;
    #elif __linux__
        return 0;
    #endif
}