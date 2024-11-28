#include<iostream>
#include "Cow.h"

using std::cout;
using std::cin;
using std::endl;

int main(){
    Cow a("string","Mystring",9.0);
    a.ShowCow();
    Cow b;
    b=a;
    b.ShowCow();
    
    return 0;
}