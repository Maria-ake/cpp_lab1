#include "lib.h"
#include <iostream>

#ifndef PROJECT_VERSION
#define PROJECT_VERSION "1.0.0"
#endif

void printHello() {
    std::cout << "Hello, World! Version " << PROJECT_VERSION << std::endl;
}