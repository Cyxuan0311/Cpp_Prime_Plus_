#include "Port.h"
#include<cstring>
using std::cout;
using std::endl;

// Port 类实现
Port::Port(const char *s, const char *t, int k) {
    brand = new char[strlen(s) + 1];
    strcpy(brand, s);
    strcpy(style, t);
    bottles = k;
}

Port::Port(const Port &p) {
    brand = new char[strlen(p.brand) + 1];
    strcpy(brand, p.brand);
    strcpy(style, p.style);
    bottles = p.bottles;
}

Port& Port::operator=(const Port &b) {
    if (this == &b) return *this; // 防止自赋值
    delete[] brand;  // 释放旧的动态内存
    brand = new char[strlen(b.brand) + 1];
    strcpy(brand, b.brand);
    strcpy(style, b.style);
    bottles = b.bottles;
    return *this;
}

Port& Port::operator+(int b) {
    bottles += b;
    return *this;
}

Port& Port::operator-(int b) {
    bottles -= b;
    return *this;
}

void Port::Show() const {
    cout << "Brand: " << brand << ", Style: " << style << ", Bottles: " << bottles << endl;
}

ostream& operator<<(ostream &os, const Port &p) {
    os << "Brand: " << p.brand << ", Style: " << p.style << ", Bottles: " << p.bottles;
    return os;
}

// VintagePort 类实现
VintagePort::VintagePort(const char *nn, const char *s, int y, const char *t, int k) : Port(s, t, k) {
    nickname = new char[strlen(nn) + 1];
    strcpy(nickname, nn);
    year = y;
}

VintagePort::VintagePort(const VintagePort &V) : Port(V) {
    nickname = new char[strlen(V.nickname) + 1];
    strcpy(nickname, V.nickname);
    year = V.year;
}

VintagePort& VintagePort::operator=(const VintagePort &V) {
    if (this == &V) return *this;
    Port::operator=(V);  // 调用基类赋值运算符
    delete[] nickname;
    nickname = new char[strlen(V.nickname) + 1];
    strcpy(nickname, V.nickname);
    year = V.year;
    return *this;
}

void VintagePort::Show() const {
    Port::Show(); // 调用基类的 Show 方法
    cout << "Nickname: " << nickname << ", Year: " << year << endl;
}

ostream& operator<<(ostream &os, const VintagePort &V) {
    os << (const Port&)V; // 使用基类的输出操作符
    os << ", Nickname: " << V.nickname << ", Year: " << V.year;
    return os;
}
