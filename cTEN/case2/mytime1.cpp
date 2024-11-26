/*
Program:
    The program are implementing Time methods.
*/
#include<iostream>
#include "mytime1.h"

Time::Time(){
    hour=minutes=0;
}

Time::Time(int h,int m){
    hour=h;
    minutes=m;
}

void Time::AddMin(int m){
    minutes+=m;
    hour+=minutes/60;
    minutes%=60;
}

void Time::AddHr(int h){
    hour+=h;
}

void Time::Reset(int h,int m){
    hour=h;
    minutes=m;
}

Time Time::operator+(const Time &t) const{
    Time sum;
    sum.minutes=minutes+t.minutes;
    sum.hour=hour+t.hour+sum.minutes/60;
    sum.minutes%=60;
    return sum;
}

void Time::show() const{
    std::cout<<hour<<" hours, "<<minutes<<" minutes.";
}