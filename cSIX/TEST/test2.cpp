/*
Program:
    The program show us how to build a struct in function with C++.
*/
#include<iostream>

using namespace std;

struct box{
    char maker[40];
    float height;
    float length;
    float width;
    float volume;
};

void display(box a){
    cout<<"The box's information is: "<<endl;
    cout<<"Its maker: "<<a.maker<<endl;
    cout<<"The height: "<<a.height<<endl;
    cout<<"The length: "<<a.length<<endl;
    cout<<"The width: "<<a.width<<endl;
    cout<<"The volume: "<<a.volume<<endl;
}

void build_volume(box *a){
    a->volume=a->height*a->length*a->width;
}

int main(){
    box a={"Frames",30,20,70,92};
    display(a);
    build_volume(&a);
    display(a);
    return 0;
}