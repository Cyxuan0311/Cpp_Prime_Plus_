/*
Program:
    The program show us how to use reference in class.
*/
#include<iostream>
#include<string>

using namespace std;

string verson1(const string & s1,const string & s2);
const string & verson2(string &s1,const string &s2);
//const string & verson3(string &s1,const string &s2);
string verson3(string &s1,const string &s2);

int main(){
    string input;
    string copy;
    string result;

    cout<<"Enter a string: ";
    getline(cin,input);
    copy=input;
    cout<<"Your string as entered: "<<input<<endl;
    result=verson1(input,"***");
    cout<<"Your string enhanced: "<<result<<endl;
    cout<<"Your original string: "<<input<<endl;

    result=verson2(input,"###");
    cout<<"Your string enhanced: "<<result<<endl;
    cout<<"Your original string: "<<input<<endl;

    cout<<"Resetting original string.\n";
    input=copy;
    result=verson3(input,"@@@");
    cout<<"Your string enhanced: "<<result<<endl;
    cout<<"Your original string: "<<input<<endl;
    return 0;
}

string verson1(const string &s1,const string &s2){
    string temp;
    temp=s2+s1+s2;
    return temp;
}

const string & verson2(string &s1,const string &s2){
    s1=s2+s1+s2;
    return s1;
}

/*const string & verson3(string &s1,const string &s2){
    string temp;
    temp=s2+s1+s2;
    return temp;
}*/

string verson3(string &s1,const string &s2){
    string temp;
    temp = s2 + s1 + s2;
    return temp; // 修正：返回一个 string 对象，而不是引用
}


