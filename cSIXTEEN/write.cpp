#include<iostream>
#include<cstring>

int main(){
    using std::endl;
    using std::cout;

    const char *state1="Florida";
    const char *state2="Kansas";
    const char *state3="Euphoria";

    int len=std::strlen(state2);
    cout<<"Increasing loop index:\n";
    int i;
    for(i=1;i<=len;i++){
        cout.write(state2,i);
        cout<<endl;
    }
    //concatenate output
    cout<<"Decreasing loop index:\n";
    for(i=len;i>0;i--)
        cout.write(state2,i)<<endl;

    //exceed string length
    cout<<"Exceeding string length:\n";
    cout.write(state2,len+5)<<endl;

    return 0;
}