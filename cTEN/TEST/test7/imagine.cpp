#include<iostream>
#include "imagine.h"

using namespace std;

Imagine::Imagine(double a, double b) {
    real = a;
    imag = b;
}

Imagine::~Imagine() {}

Imagine Imagine::operator+(const Imagine &t) const {
    Imagine temp;
    temp.real = real + t.real;
    temp.imag = imag + t.imag;
    return temp;
}

Imagine Imagine::operator-(const Imagine &t) const {
    Imagine temp;
    temp.real = real - t.real;
    temp.imag = imag - t.imag;
    return temp;
}

Imagine Imagine::operator*(const Imagine &t) const {
    Imagine temp;
    temp.real = real * t.real;
    temp.imag = imag * t.imag;
    return temp;
}

Imagine Imagine::operator~() const {
    Imagine temp;
    temp.real = real;
    temp.imag = -imag; // 取共轭
    return temp;
}

std::ostream &operator<<(std::ostream &os, const Imagine &t) {
    os << "( " << t.real << " , " << t.imag << "i" << " ) ";
    return os;
}

std::istream &operator>>(std::istream &is, Imagine &t) {
    cout << "enter the real: ";
    is >> t.real;
    cout << "enter the imag: ";
    is >> t.imag;
    return is;
}
