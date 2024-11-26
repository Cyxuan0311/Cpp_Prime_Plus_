/*
Program:
    The program use ctype.h library to finish it.
*/
#include<iostream>
#include<cctype>

using namespace std;

int main(){
    cout<<"Enter text for analyais,and type @"
    " to terminate input.\n";
    char ch;
    int whitesapce=0;
    int digits=0;
    int chars=0;
    int punct=0;
    int other=0;

    cin.get();
    while(ch!='@'){
        if(isalpha(ch)){
            chars++;
        }else if(isspace(ch)){
            whitesapce++;
        }else if(isdigit(ch)){
            digits++;
        }else if(ispunct(ch)){
            punct++;
        }else{
            other++;
        }
        cin.get(ch);
    }
    cout<<chars<<" letters,"
        <<whitesapce<<" whitespace,"
        <<digits<<" digits,"
        <<punct<<" punctuations,"
        <<other<<" others.\n";
    return 0;
}