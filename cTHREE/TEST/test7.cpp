/*
Program:
    This program we use new and delete to build a struct and make full of it.
*/
#include<iostream>
#include<string>
#include<cstring>

using namespace std;

struct Pizza{
    char A[20];
    double R;
    double weight;
};

int main(){
    Pizza *a=new Pizza;
    cout<<"Please enter your pizza's R,weight,and name";
    cin>>a->R;
    cin>>a->weight;
    cin>>a->A;
    cout<<"The pizza's information is :";
    cout<<a->A<<" "<<a->R<<" "<<a->weight<<" ";
    return 0;
}