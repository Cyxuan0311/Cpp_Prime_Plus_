/*
Program:    
    The program use const to build array functions.
*/
#include<iostream>

const int Max=5;

int fill_array(double ar[],int limit);
void show_array(const double ar[],int n);
void revalue(double r,double ar[],int n);

using namespace std;

int main(){
    double protecties[Max];

    int size=fill_array(protecties,Max);
    show_array(protecties,size);
    if(size>0){
        cout<<"Enter revalutation factor: ";
        double factor;
        while(!(cin>>factor)){
            cin.clear();
            while(cin.get()!='\n')
                continue;
            cout<<"Bad input;Please enter a number: ";
        }
        revalue(factor,protecties,size);
        show_array(protecties,size);
    }
    cout<<"Done.\n";
    cin.get();
    cin.get();
    return 0;
}

int fill_array(double ar[],int n){
    double temp;
    int i;
    for(i=0;i<n;i++){
        cout<<"Enter value # "<<i+1<<": ";
        cin>>temp;
        if(!cin){
            cin.clear();
            while(cin.get()!='\n')
                continue;
            cout<<"Bad input;input process terminated.\n";
            break;
        }else if(temp<0)
            break;
        ar[i]=temp;
    }
    return i;
}

void show_array(const double ar[],int n){
    for(int i=0;i<n;i++){
        cout<<"Property # "<<(i+1)<<": $";
        cout<<ar[i]<<endl;
    }
}

void revalue(double r,double ar[],int n){
    for(int i=0;i<n;i++){
        ar[i]*=r;
    }
}

