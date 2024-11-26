// stringy.cpp
#include <iostream>
#include <cstring>
#include "stringy.h"
#include <new> // for placement new

void set(stringy & str, const char * test, char * buffer) {
    str.ct = std::strlen(test);            // get the length of the test string
    str.str = new (buffer) char[str.ct + 1]; // placement new, using buffer for memory
    std::strcpy(str.str, test);            // copy the string to str.str
}

void show(const stringy & str, int n) {
    for (int i = 0; i < n; i++) {
        std::cout << str.str << std::endl;
    }
}

void show(const char * str, int n) {
    for (int i = 0; i < n; i++) {
        std::cout << str << std::endl;
    }
}
