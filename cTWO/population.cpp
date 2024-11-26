/*
Program:
    The program can the percentage of people in the world.
History:
    2024/11/1   Frames  First_Release   3078295834@qq.com
*/
#include<iostream>

using namespace std;

int main(){
    long long US_P;
    long long W_P;
    cout<<"Enter the world's of population: ";
    cin>>W_P;
    cout<<"Enter the population of the US: ";
    cin>>US_P;
    double rate=double(US_P)/W_P;
    cout<<"The population of the US is "<<rate*100<<"%"<<" of the world population."<<endl;
    return 0;
}