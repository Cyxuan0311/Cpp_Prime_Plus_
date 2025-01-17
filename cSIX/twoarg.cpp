/*
Program:
    The program can build a function with 2 arguments.
*/
#include<iostream>
using namespace std;

void n_char(char,int);

int main(){
    int times;
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    while(ch!='q'){
        cout<<"Enter an integer: ";
        cin>>times;
        n_char(ch,times);
        cout<<"\nEnter another character or press the"
            "q-key to quit: ";
        cin>>ch;
    }
    cout<<"The value of times is "<<times<<".\n";
    cout<<"Bye.\n";
    return 0;
}

void n_char(char c,int n){
    while(n-->0){
        cout<<c;
    }
}