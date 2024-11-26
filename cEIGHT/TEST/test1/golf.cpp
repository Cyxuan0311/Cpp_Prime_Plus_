// golf.cpp -- implementation of the functions declared in golf.h

#include <iostream>
#include <cstring>
#include "golf.h"

using namespace std;

// non-interactive version
void setgolf(golf &g, const char *name, int hc) {
    strncpy(g.fullname, name, Len - 1);
    g.fullname[Len - 1] = '\0';  // 确保字符串以 '\0' 结尾
    g.handicap = hc;
}

// interactive version
int setgolf(golf &g) {
    cout << "Enter the full name of the golfer: ";
    cin.getline(g.fullname, Len);

    if (strlen(g.fullname) == 0) {
        return 0;  // 如果名字为空，返回0
    }

    cout << "Enter the golfer's handicap: ";
    cin >> g.handicap;
    cin.ignore();  // 清空输入缓冲区
    return 1;
}

// function to reset handicap
void handicap(golf &g, int hc) {
    g.handicap = hc;
}

// function to display golf information
void showgolf(const golf &g) {
    cout << "Golfer's Name: " << g.fullname << endl;
    cout << "Golfer's Handicap: " << g.handicap << endl;
}
