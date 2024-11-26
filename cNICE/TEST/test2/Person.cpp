#include "Person.h"
#include <cstring>  // 添加此行以包含cstring头文件

Person::Person(const std::string &ln, const char *fn) {
    lname = ln;
    strncpy(fname, fn, LIMIT - 1);  // 使用strncpy时不再报错
    fname[LIMIT - 1] = '\0';         // 确保以'\0'结尾
}

void Person::show() const {
    std::cout << "Name: " << fname << " " << lname << std::endl;
}

void Person::FormalShow() const {
    std::cout << "Formal Name: " << lname << ", " << fname << std::endl;
}
