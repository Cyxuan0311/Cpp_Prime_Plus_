/*
Program:
    The program is a test about we use Union in C++.
*/
#include<iostream>
#include<cstring>

using namespace std;

union CandyBar
{
    char brand[20]={'\0'};
    double weight;
    int calorie;
};

int main(){
    CandyBar snack;
    strcpy(snack.brand,"Mucha Munch");
    cout<<"The snack's information is:"<<endl;
    cout<<snack.brand;
    return 0;
}


