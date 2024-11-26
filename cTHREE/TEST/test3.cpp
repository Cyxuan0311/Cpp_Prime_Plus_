/*
Program:
    This program use char type and <cstring> to build a easy code.
*/
#include<iostream>
#include<cstring>

using namespace std;

int main(){
    char a[20];
    char b[20];
    cout<<"Enter your first name:";
    cin>>a;
    cout<<"Enter your last name:";
    cin>>b;
    cout<<"Here's the information in a single string:"<<b<<","<<a;
    return 0;
}