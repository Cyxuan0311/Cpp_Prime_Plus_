/*
Program:
    The program use template to build a compare the bigger in array.
*/
#include<iostream>

using namespace std;

template <typename T>
T compare(T a[5]);

int main(){
    int a[5];
    double b[5];
    cout<<"Please enter two array in screen:\n";
    cout<<"int:\n";
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    cout<<"double:\n";
    for(int i=0;i<5;i++){
        cin>>b[i];
    }

    cout<<"The biggest element in array(int): "<<compare(a);
    cout<<endl;
    cout<<"The biggest element in array(double): "<<compare(b); 
    return 0;
}

template <typename T>
T compare(T a[5]){
    T temp;
    for(int i=0;i<5;i++){
        temp=a[0];
        if(a[i]>temp){
            temp=a[i];
        }
    }
    return temp;
}