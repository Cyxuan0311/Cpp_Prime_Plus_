#ifndef PERSON
#define PERSON

#include <string>
#include <iostream>

class Person {
private:
    static const int LIMIT = 25;
    std::string lname;
    char fname[LIMIT];
public:
    Person() { lname = ""; fname[0] = '\0'; }
    Person(const std::string &ln, const char *fn = "Heyyou"); // 只在此处给出默认参数
    void show() const;
    void FormalShow() const;
};

#endif
