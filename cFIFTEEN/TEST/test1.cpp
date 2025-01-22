#include<iostream>
#include<string>

bool is_cycle_string(const std::string &s);

int main(){
    using std::cout;
    using std::endl;
    using std::cin;
    using std::string;

    string s1;
    cout<<"Enter words (quit to quit):\n";

    while(std::getline(cin,s1)&&s1!="quit"){
        if(is_cycle_string(s1))
            cout<<"The words is a cycle_string!!\n";
        else
            cout<<"The words is not a cycle_string!!\n";
    }
    cout<<"Bye!!\n";

    return 0;
}

bool is_cycle_string(const std::string &s){
    using std::string;
    string rev(s.rbegin(),s.rend());

    return rev==s;
}