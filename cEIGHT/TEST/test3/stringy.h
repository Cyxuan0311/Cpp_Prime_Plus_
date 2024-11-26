/*
Program:
    The program include a struct in it.
*/
#ifndef STRINGY_H
#define STRINGY_H

struct stringy{
    int ct;
    char *str;
};

void set(stringy & str, const char * test, char * buffer);
void show(const stringy & str, int n = 1);
void show(const char * str, int n = 1);


#endif