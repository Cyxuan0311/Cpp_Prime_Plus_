/*
Program:
    This program show us how type limit in C++.
History:
    2024/10/31  Frames  First_Release   3078295834@qq.com
*/
#include<iostream>
#include<climits>

using namespace std;

int main(){
    int n_int=INT_MAX;
    short n_short=SHRT_MAX;
    long n_long=LONG_MAX;
    long long n_llong=LONG_LONG_MAX;

    cout<<"int is:"<<sizeof(int)<<"bytes"<<endl;
    cout<<"short is:"<<sizeof n_short<<"bytes"<<endl;
    cout<<"long is:"<<sizeof n_long<<"bytes"<<endl;
    cout<<"long long is:"<<sizeof n_llong<<"bytes"<<endl;
    cout<<endl;

    cout<<"MAX_I_MUM values is:"<<endl;
    cout<<"int :"<<n_int<<endl;
    cout<<"short :"<<n_short<<endl;
    cout<<"long :"<<n_long<<endl;
    cout<<"long long :"<<n_llong<<endl;
    cout<<endl;

    cout<<"Minimum int value = "<<INT_MAX<<endl;
    cout<<"Bits per byte = "<<CHAR_BIT<<endl;
    return 0;
}