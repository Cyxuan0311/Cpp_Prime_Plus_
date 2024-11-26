/*
Program:
    The program show us ahout how use array show the element in this structure.
*/
#include<iostream>

using namespace std;

int main(){

    const int Asize=20;
    char name[Asize];
    char dessert[Asize];

    cout<<"Enter your name:";
    cin.getline(name,Asize);
    cout<<"Enter your favorite dessert:\n";
    cin.getline(dessert,Asize);
    cout<<"I have some delicious "<<dessert;
    cout<<" for you,"<<name<<".\n";

    return 0;
}