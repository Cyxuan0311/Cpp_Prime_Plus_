/*
Program:
    The program build a function with array objects(C++11).
*/
#include<iostream>
#include<array>
#include<string>

using namespace std;

const int Seasons=4;

const array<string,Seasons> Snames={
    "Spring","Summer","Fall","Winter"
};

void show(array<double,Seasons> da);

void fill(array<double,Seasons> *pa);

int main(){
    array<double,Seasons> expenses;
    fill(&expenses);
    show(expenses);
    return 0;
}

void fill(array<double,Seasons> *pa){
    for(int i=0;i<Seasons;i++){
        cout<<"Enter "<<Snames[i]<<" expenses: ";
        cin>>(*pa)[i];
    }
}

void show(array<double,Seasons> da){
    double total=0.0;
    cout<<"\nEXPENESE\n";
    for(int i=0;i<Seasons;i++){
        cout<<Snames[i]<<": $"<<da[i]<<endl;
        total+=da[i];
    }
    cout<<"Total Exprenses: $"<<total<<endl;
}
