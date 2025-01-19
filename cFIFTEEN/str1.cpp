//str1.cpp--introducing the string class
#include<string>
#include<iostream>

int main(){
    using std::string;
    using std::cout;
    using std::endl;

    string one("Lottery Winner!");      //Way 1;
    cout<<one<<endl;
    string two(20,'$');                 //Way 2;
    cout<<two<<endl;
    string three(one);                  //Way 3;Actually is copy constructer.
    cout<<three<<endl;
    one+=" Oops!";                      //overloaded +=
    cout<<one<<endl;
    two="Sorry! That was";
    three[0]='P';
    string four;                        //Way 4;
    four=two+three;
    cout<<four<<endl;
    char alls[]="All's well that ends well";
    string five(alls,20);               //Way 5;
    cout<<five<<"!\n";
    string six(alls+6,alls+10);         //Way 6;
    cout<<six<<", ";
    string seven(&five[6],&five[10]);   //Way 6 again;
    cout<<seven<<"...\n";
    string eight(four,7,16);            //Way 7;
    cout<<eight<<" in motion!"<<endl;
    return 0;
}
 