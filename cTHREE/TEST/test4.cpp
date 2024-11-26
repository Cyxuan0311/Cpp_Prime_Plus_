/*
Program:
    This program use string class in C++,string class can make char type input become 
    very symbol!!
*/
#include<iostream>
#include<string>

using namespace std;

int main(){

    string a;
    string b;
    cout<<"Enter your first name:";
    cin>>a;
    cout<<"Enter your last name:";
    cin>>b;
    cout<<"Here's the information in a single string: "<<b<<", "<<a;
    return 0;
}