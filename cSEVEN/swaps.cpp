/*
Program:
    The program can swap with reference and with pointer.
*/
#include<iostream>

using namespace std;

void swapr(int &a,int &b);
void swapp(int *a,int *b);
void swapv(int a,int b);

int main(){
    int wallet1=300;
    int wallet2=350;
    cout<<"wallet1 = $"<<wallet1;
    cout<<"wallet2 = $"<<wallet2<<endl;

    cout<<"Using reference to swap contents:\n";
    swapr(wallet1,wallet2);
    cout<<"Now the wallet1's is:"<<wallet1<<" the wallet2's is "<<wallet2<<endl;

    cout<<"Using pointers to swap contents again:\n";
    swapp(&wallet1,&wallet2);
    cout<<"Now the wallet1's is:"<<wallet1<<" the wallet2's is "<<wallet2<<endl;

    cout<<"Using value to swap contents again:\n";
    swapv(wallet1,wallet2);
    cout<<"Now the wallet1's is:"<<wallet1<<" the wallet2's is "<<wallet2<<endl;
    return 0;
}
void swapr(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}

void swapp(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void swapv(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}