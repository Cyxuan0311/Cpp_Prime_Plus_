#include<iostream>
using namespace std;

void show_time(){
    int min;
    int hour;
    cout<<"Enter the number of hours:";
    cin>>hour;
    cout<<"Enter the number of minutes:";
    cin>>min;
    cout<<"Time:"<<hour<<":"<<min;

}

int main(){

    show_time();
    return 0;
}