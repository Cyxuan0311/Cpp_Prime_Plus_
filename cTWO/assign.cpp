/*
Program:
    The program can change type of number.
History:
    2024/11/1   Frames  First_Release   3078295834@qq.com
*/
#include<iostream>

using namespace std;

int main(){
    cout.setf(ios_base::fixed,ios_base::floatfield);
    float tree=3;
    int guess(3.9832);
    int debt=7.2E12;
    cout<<"tree="<<tree<<endl;
    cout<<"guess="<<guess<<endl;
    cout<<"debt="<<debt<<endl;

    return 0;
}