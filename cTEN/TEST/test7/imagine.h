#ifndef IMAGINE_H
#define IMAGINE_H

#include<iostream>

class Imagine {
private:
    double real;
    double imag;
public:
    Imagine(double a = 0.0, double b = 0.0);
    ~Imagine();
    Imagine operator+(const Imagine &t) const;
    Imagine operator-(const Imagine &t) const;
    Imagine operator*(const Imagine &t) const;
    Imagine operator~() const; // 修正后的声明

    friend std::ostream &operator<<(std::ostream &os, const Imagine &t);
    friend std::istream &operator>>(std::istream &is, Imagine &t); // 输入流重载声明
};

#endif
