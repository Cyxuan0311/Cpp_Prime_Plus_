/*
Program:
    The program get Time class after operator overloading.
*/
#ifndef MYTIME3_H_
#define MYTIME3_H

#include<iostream>

class Time{
    private:
        int hours;
        int minutes;
    public:
        Time();
        Time(int h,int m=0);
        void AdddMin(int m);
        void AddHr(int h);
        void Reset(int h=0,int m=0);
        Time operator+(const Time &t) const;
        Time operator-(const Time &t) const;
        Time operator*(double n) const;
        friend Time operator*(double m,const Time &t){
            return t*m;
        }
        friend std::ostream & operator<<(std::ostream &os,const Time &t);
        void show() const;
};

#endif