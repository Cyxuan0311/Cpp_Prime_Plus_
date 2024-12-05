#include "cd2.h"
#include<iostream>
#include<cstring>


using namespace std;

Cd2::Cd2(const char* s1, const char* s2 , int n, double x){
    performance =new char [strlen(s1)+1];
    strcpy(performance,s1);
    label=new char [strlen(s2)+1];
    strcpy(label,s2);
    selections=n;
    payment=x;
}

Cd2::Cd2(const Cd2 &d){
    performance=new char [strlen(d.performance+1)];
    strcpy(performance,d.performance);
    label=new char [strlen(d.label+1)];
    strcpy(label,d.label);
    selections=d.selections;
    payment=d.payment;
}

Cd2::~Cd2(){
    delete [] performance;
    delete [] label;
}

Cd2& Cd2::operator=(const Cd2 &d){
    delete [] performance;
    performance=new char[strlen(d.performance+1)];
    strcpy(performance,d.performance);
    delete [] label;
    label=new char[strlen(d.label+1)];
    strcpy(label,d.label);
    selections=d.selections;
    payment=d.payment;
    return *this;
}

void Cd2::Report()const {
    cout<<"The performance is "<<performance<<endl;
    cout<<"The label is "<<label<<endl;
    cout<<"The selections is "<<selections<<endl;
    cout<<"The payment is "<<payment<<endl;
}

Classic::Classic(const char* s, const char* s1, const char* s2 , int n, double x):Cd2(s1,s2,n,x){
    essential=new char[strlen(s)+1];
    strcpy(essential,s);
}

Classic::Classic(const Classic &c1):Cd2(c1){    //we can use base class to make construct function.
    essential=new char[strlen(c1.essential+1)];
    strcpy(essential,c1.essential);
}

Classic::~Classic(){
    delete [] essential;
    //delete [] performance;
    //delete [] label;      Actually we use ~Classic function to delete the object--essiental,we also will use "~Cd2"
    //to delete the object--performance,label.
}

Classic& Classic::operator=(const Classic &c1){
    Cd2::operator=(c1);     //use the basic class's copy function to help us finish part work of the copy Classic.
    delete [] essential;
    essential=new char[strlen(c1.essential+1)];
    strcpy(essential,c1.essential);
    return *this;
}

void Classic::Report()const{
    cout<<"The essential is "<<essential<<endl;
    Cd2::Report();
}