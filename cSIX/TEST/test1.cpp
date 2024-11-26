/*
Program：
    The program use function to finish to caculate about Harmonic mean.
*/
#include<iostream>

using namespace std;

double Harmonic_Mean(double a,double b);

int main(){
    double a,b;
    cout<<"Please enter two number until one of them are 'Zore'"<<endl;
    while(cin>>a>>b&&(a==0||b==0)){
        cout<<"The falut is "<<Harmonic_Mean(a,b)<<endl;
    }
    return 0;
}

double Harmonic_Mean(double a,double b){
    return (2.0*a*b)/(a+b);
}