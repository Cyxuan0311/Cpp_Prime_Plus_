/*
Program:
    The char type and int type contrasted
History:
    2024/11/1   Frames  First_Release   3078295834@qq.com
*/
#include<iostream>
using namespace std;
int main(){
    char ch='M';
    int i=ch;
    cout<<"The ASCII code for"<<ch<<"is"<<i<<endl;

    cout<<"Add one to the character code:"<<endl;
    ch=ch+1;
    i=ch;
    cout<<"The ASCII code for "<<ch<<"is"<<i<<endl;

    cout<<"Displaying char ch using cout.put(ch)";
    cout.put(ch);

    cout.put('!');  
    cout<<endl<<"Done"<<endl;

    return 0;
}
    