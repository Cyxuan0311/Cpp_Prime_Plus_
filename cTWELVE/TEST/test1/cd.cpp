#include<iostream>
#include "cd.h"
using std::cout;
using std::endl;

void Cd::Report() const{
    cout<<"The performance is "<<performances<<endl;
    cout<<"The label is "<<label<<endl;
    cout<<"The selections is "<<selections<<endl;
    cout<<"The playtime is"<<playtime<<endl;
}

void Classic::Report() const{
    Cd::Report();
    cout<<"The essiental is "<<All<<endl;
}

