/*
Program:
    The program use "array" and "long double" to relize.
*/
#include<iostream>
#include<array>

using namespace std;

const int ArSize=16;
int main(){
    array<long double,ArSize> factor;
    factor[1]=factor[0]=1LL;
    for(int i=2;i<ArSize;i++){
        factor[i]=i*factor[i-1];
    }
    for(int i=0;i<ArSize;i++){
        cout<<i<<"!="<<factor[i]<<endl;
    }
    return 0;
}