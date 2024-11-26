/*
Program:
    The program use "," operation symbol to realize the reversing of array.
*/
#include<iostream>
#include<string>

using namespace std;

int main(){

    cout<<"Enter a word: ";
    string word;
    cin>>word;
    
    char temp;
    int i,j;    //attention!!!We should define i and j before for cycle.
    for(j=0,i=word.size()-1;j<i;--i,++j){
        temp=word[i];
        word[i]=word[j];
        word[j]=temp;
    }
    cout<<word<<"\nDone\n";
    return 0;
}