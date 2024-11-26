/*
Program:
    The program can show us about the regular and reference argument.
*/
#include<iostream>

using namespace std;

double cube(double a);
double refcube(double &ra);

int main(){
    double x=3.0;
    cout<<cube(x);
    cout<<"= the cube of "<<x<<endl;
    cout<<refcube(x);
    cout<<"= the cube of "<<x<<endl;
    return 0;
}

double cube(double a){
    a*=a*a;
    return a;
}

double refcube(double &ra){
    ra*=ra*ra;
    return ra;              //这意味着引用可以修改传参的值（本身）.
}
